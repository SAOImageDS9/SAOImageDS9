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
     FACTOR_ = 374,
     FALSE_ = 375,
     FILE_ = 376,
     FILL_ = 377,
     FILTER_ = 378,
     FIT_ = 379,
     FITS_ = 380,
     FITSY_ = 381,
     FIXED_ = 382,
     FK4_ = 383,
     FK5_ = 384,
     FONT_ = 385,
     FORMAT_ = 386,
     FROM_ = 387,
     FRONT_ = 388,
     FULL_ = 389,
     FUNCTION_ = 390,
     GALACTIC_ = 391,
     GAUSSIAN_ = 392,
     GET_ = 393,
     GLOBAL_ = 394,
     GRAPHICS_ = 395,
     GRAY_ = 396,
     GRID_ = 397,
     GZ_ = 398,
     HANDLE_ = 399,
     HAS_ = 400,
     HEAD_ = 401,
     HEADER_ = 402,
     HEIGHT_ = 403,
     HIDE_ = 404,
     HIGHLITE_ = 405,
     HISTEQU_ = 406,
     HISTOGRAM_ = 407,
     HORIZONTAL_ = 408,
     ICRS_ = 409,
     ID_ = 410,
     IIS_ = 411,
     IMAGE_ = 412,
     INCLUDE_ = 413,
     INCR_ = 414,
     INFO_ = 415,
     ITERATION_ = 416,
     IRAF_ = 417,
     IRAFMIN_ = 418,
     J2000_ = 419,
     KEY_ = 420,
     KEYWORD_ = 421,
     LABEL_ = 422,
     LENGTH_ = 423,
     LEVEL_ = 424,
     LITTLE_ = 425,
     LITTLEENDIAN_ = 426,
     LINE_ = 427,
     LINEAR_ = 428,
     LIST_ = 429,
     LOAD_ = 430,
     LOCAL_ = 431,
     LOG_ = 432,
     MACOSX_ = 433,
     MAGNIFIER_ = 434,
     MATCH_ = 435,
     MAP_ = 436,
     MARK_ = 437,
     MARKER_ = 438,
     MASK_ = 439,
     MESSAGE_ = 440,
     METHOD_ = 441,
     MINMAX_ = 442,
     MINOR_ = 443,
     MIP_ = 444,
     MMAP_ = 445,
     MMAPINCR_ = 446,
     MOSAIC_ = 447,
     MODE_ = 448,
     MOTION_ = 449,
     MOVE_ = 450,
     NAME_ = 451,
     NAN_ = 452,
     NATIVE_ = 453,
     NAXES_ = 454,
     NEW_ = 455,
     NEXT_ = 456,
     NO_ = 457,
     NONE_ = 458,
     NONNAN_ = 459,
     NONZERO_ = 460,
     NOW_ = 461,
     NRRD_ = 462,
     NUMBER_ = 463,
     OBJECT_ = 464,
     OFF_ = 465,
     ON_ = 466,
     ONLY_ = 467,
     OPAQUE_ = 468,
     OPTION_ = 469,
     ORIENT_ = 470,
     PAN_ = 471,
     PANNER_ = 472,
     PARSER_ = 473,
     PASTE_ = 474,
     PERF_ = 475,
     PHOTO_ = 476,
     PHYSICAL_ = 477,
     PIXEL_ = 478,
     PLOT2D_ = 479,
     PLOT3D_ = 480,
     POINT_ = 481,
     POINTER_ = 482,
     POLYGON_ = 483,
     POSTSCRIPT_ = 484,
     POW_ = 485,
     PRECISION_ = 486,
     PRINT_ = 487,
     PRESERVE_ = 488,
     PROJECTION_ = 489,
     PROPERTY_ = 490,
     PUBLICATION_ = 491,
     PROS_ = 492,
     QUERY_ = 493,
     RADIAL_ = 494,
     RADIUS_ = 495,
     RANGE_ = 496,
     REGION_ = 497,
     REPLACE_ = 498,
     RESAMPLE_ = 499,
     RESET_ = 500,
     RESOLUTION_ = 501,
     RGB_ = 502,
     ROOT_ = 503,
     ROTATE_ = 504,
     RULER_ = 505,
     SAMPLE_ = 506,
     SAOIMAGE_ = 507,
     SAOTNG_ = 508,
     SAVE_ = 509,
     SCALE_ = 510,
     SCAN_ = 511,
     SCIENTIFIC_ = 512,
     SCOPE_ = 513,
     SEGMENT_ = 514,
     SELECT_ = 515,
     SET_ = 516,
     SEXAGESIMAL_ = 517,
     SHAPE_ = 518,
     SHARED_ = 519,
     SHIFT_ = 520,
     SHMID_ = 521,
     SHOW_ = 522,
     SIGMA_ = 523,
     SINH_ = 524,
     SIZE_ = 525,
     SLICE_ = 526,
     SMMAP_ = 527,
     SMOOTH_ = 528,
     SOCKET_ = 529,
     SOCKETGZ_ = 530,
     SOURCE_ = 531,
     SQRT_ = 532,
     SQUARED_ = 533,
     SSHARED_ = 534,
     STATS_ = 535,
     STATUS_ = 536,
     SUM_ = 537,
     SYSTEM_ = 538,
     TABLE_ = 539,
     TAG_ = 540,
     TEMPLATE_ = 541,
     TEXT_ = 542,
     THREADS_ = 543,
     THREED_ = 544,
     THRESHOLD_ = 545,
     THICK_ = 546,
     TRANSPARENT_ = 547,
     TRANSPARENCY_ = 548,
     TO_ = 549,
     TOGGLE_ = 550,
     TOPHAT_ = 551,
     TRUE_ = 552,
     TYPE_ = 553,
     UNDO_ = 554,
     UNHIGHLITE_ = 555,
     UNLOAD_ = 556,
     UNSELECT_ = 557,
     UPDATE_ = 558,
     USER_ = 559,
     VALUE_ = 560,
     VAR_ = 561,
     VIEW_ = 562,
     VECTOR_ = 563,
     VERSION_ = 564,
     VERTEX_ = 565,
     VERTICAL_ = 566,
     WARP_ = 567,
     WCS_ = 568,
     WCSA_ = 569,
     WCSB_ = 570,
     WCSC_ = 571,
     WCSD_ = 572,
     WCSE_ = 573,
     WCSF_ = 574,
     WCSG_ = 575,
     WCSH_ = 576,
     WCSI_ = 577,
     WCSJ_ = 578,
     WCSK_ = 579,
     WCSL_ = 580,
     WCSM_ = 581,
     WCSN_ = 582,
     WCSO_ = 583,
     WCSP_ = 584,
     WCSQ_ = 585,
     WCSR_ = 586,
     WCSS_ = 587,
     WCST_ = 588,
     WCSU_ = 589,
     WCSV_ = 590,
     WCSW_ = 591,
     WCSX_ = 592,
     WCSY_ = 593,
     WCSZ_ = 594,
     WCS0_ = 595,
     WFPC2_ = 596,
     WIDTH_ = 597,
     WIN32_ = 598,
     XML_ = 599,
     XY_ = 600,
     YES_ = 601,
     ZERO_ = 602,
     ZMAX_ = 603,
     ZSCALE_ = 604,
     ZOOM_ = 605
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
#define FACTOR_ 374
#define FALSE_ 375
#define FILE_ 376
#define FILL_ 377
#define FILTER_ 378
#define FIT_ 379
#define FITS_ 380
#define FITSY_ 381
#define FIXED_ 382
#define FK4_ 383
#define FK5_ 384
#define FONT_ 385
#define FORMAT_ 386
#define FROM_ 387
#define FRONT_ 388
#define FULL_ 389
#define FUNCTION_ 390
#define GALACTIC_ 391
#define GAUSSIAN_ 392
#define GET_ 393
#define GLOBAL_ 394
#define GRAPHICS_ 395
#define GRAY_ 396
#define GRID_ 397
#define GZ_ 398
#define HANDLE_ 399
#define HAS_ 400
#define HEAD_ 401
#define HEADER_ 402
#define HEIGHT_ 403
#define HIDE_ 404
#define HIGHLITE_ 405
#define HISTEQU_ 406
#define HISTOGRAM_ 407
#define HORIZONTAL_ 408
#define ICRS_ 409
#define ID_ 410
#define IIS_ 411
#define IMAGE_ 412
#define INCLUDE_ 413
#define INCR_ 414
#define INFO_ 415
#define ITERATION_ 416
#define IRAF_ 417
#define IRAFMIN_ 418
#define J2000_ 419
#define KEY_ 420
#define KEYWORD_ 421
#define LABEL_ 422
#define LENGTH_ 423
#define LEVEL_ 424
#define LITTLE_ 425
#define LITTLEENDIAN_ 426
#define LINE_ 427
#define LINEAR_ 428
#define LIST_ 429
#define LOAD_ 430
#define LOCAL_ 431
#define LOG_ 432
#define MACOSX_ 433
#define MAGNIFIER_ 434
#define MATCH_ 435
#define MAP_ 436
#define MARK_ 437
#define MARKER_ 438
#define MASK_ 439
#define MESSAGE_ 440
#define METHOD_ 441
#define MINMAX_ 442
#define MINOR_ 443
#define MIP_ 444
#define MMAP_ 445
#define MMAPINCR_ 446
#define MOSAIC_ 447
#define MODE_ 448
#define MOTION_ 449
#define MOVE_ 450
#define NAME_ 451
#define NAN_ 452
#define NATIVE_ 453
#define NAXES_ 454
#define NEW_ 455
#define NEXT_ 456
#define NO_ 457
#define NONE_ 458
#define NONNAN_ 459
#define NONZERO_ 460
#define NOW_ 461
#define NRRD_ 462
#define NUMBER_ 463
#define OBJECT_ 464
#define OFF_ 465
#define ON_ 466
#define ONLY_ 467
#define OPAQUE_ 468
#define OPTION_ 469
#define ORIENT_ 470
#define PAN_ 471
#define PANNER_ 472
#define PARSER_ 473
#define PASTE_ 474
#define PERF_ 475
#define PHOTO_ 476
#define PHYSICAL_ 477
#define PIXEL_ 478
#define PLOT2D_ 479
#define PLOT3D_ 480
#define POINT_ 481
#define POINTER_ 482
#define POLYGON_ 483
#define POSTSCRIPT_ 484
#define POW_ 485
#define PRECISION_ 486
#define PRINT_ 487
#define PRESERVE_ 488
#define PROJECTION_ 489
#define PROPERTY_ 490
#define PUBLICATION_ 491
#define PROS_ 492
#define QUERY_ 493
#define RADIAL_ 494
#define RADIUS_ 495
#define RANGE_ 496
#define REGION_ 497
#define REPLACE_ 498
#define RESAMPLE_ 499
#define RESET_ 500
#define RESOLUTION_ 501
#define RGB_ 502
#define ROOT_ 503
#define ROTATE_ 504
#define RULER_ 505
#define SAMPLE_ 506
#define SAOIMAGE_ 507
#define SAOTNG_ 508
#define SAVE_ 509
#define SCALE_ 510
#define SCAN_ 511
#define SCIENTIFIC_ 512
#define SCOPE_ 513
#define SEGMENT_ 514
#define SELECT_ 515
#define SET_ 516
#define SEXAGESIMAL_ 517
#define SHAPE_ 518
#define SHARED_ 519
#define SHIFT_ 520
#define SHMID_ 521
#define SHOW_ 522
#define SIGMA_ 523
#define SINH_ 524
#define SIZE_ 525
#define SLICE_ 526
#define SMMAP_ 527
#define SMOOTH_ 528
#define SOCKET_ 529
#define SOCKETGZ_ 530
#define SOURCE_ 531
#define SQRT_ 532
#define SQUARED_ 533
#define SSHARED_ 534
#define STATS_ 535
#define STATUS_ 536
#define SUM_ 537
#define SYSTEM_ 538
#define TABLE_ 539
#define TAG_ 540
#define TEMPLATE_ 541
#define TEXT_ 542
#define THREADS_ 543
#define THREED_ 544
#define THRESHOLD_ 545
#define THICK_ 546
#define TRANSPARENT_ 547
#define TRANSPARENCY_ 548
#define TO_ 549
#define TOGGLE_ 550
#define TOPHAT_ 551
#define TRUE_ 552
#define TYPE_ 553
#define UNDO_ 554
#define UNHIGHLITE_ 555
#define UNLOAD_ 556
#define UNSELECT_ 557
#define UPDATE_ 558
#define USER_ 559
#define VALUE_ 560
#define VAR_ 561
#define VIEW_ 562
#define VECTOR_ 563
#define VERSION_ 564
#define VERTEX_ 565
#define VERTICAL_ 566
#define WARP_ 567
#define WCS_ 568
#define WCSA_ 569
#define WCSB_ 570
#define WCSC_ 571
#define WCSD_ 572
#define WCSE_ 573
#define WCSF_ 574
#define WCSG_ 575
#define WCSH_ 576
#define WCSI_ 577
#define WCSJ_ 578
#define WCSK_ 579
#define WCSL_ 580
#define WCSM_ 581
#define WCSN_ 582
#define WCSO_ 583
#define WCSP_ 584
#define WCSQ_ 585
#define WCSR_ 586
#define WCSS_ 587
#define WCST_ 588
#define WCSU_ 589
#define WCSV_ 590
#define WCSW_ 591
#define WCSX_ 592
#define WCSY_ 593
#define WCSZ_ 594
#define WCS0_ 595
#define WFPC2_ 596
#define WIDTH_ 597
#define WIN32_ 598
#define XML_ 599
#define XY_ 600
#define YES_ 601
#define ZERO_ 602
#define ZMAX_ 603
#define ZSCALE_ 604
#define ZOOM_ 605




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
#line 858 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 871 "frame/parser.C"

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
#define YYFINAL  355
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5619

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  355
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1263
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2786

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   605

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
       2,   354,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   352,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   353,   351,
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
     345,   346,   347,   348,   349,   350
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
     364,   366,   368,   369,   371,   373,   375,   377,   379,   381,
     383,   384,   386,   388,   389,   391,   393,   395,   396,   398,
     400,   401,   403,   405,   406,   408,   410,   411,   413,   415,
     417,   419,   421,   423,   425,   426,   428,   430,   432,   434,
     436,   438,   440,   441,   443,   445,   446,   448,   450,   452,
     454,   456,   459,   462,   465,   468,   471,   474,   477,   480,
     482,   485,   487,   490,   492,   495,   498,   505,   508,   513,
     516,   519,   522,   526,   529,   532,   534,   537,   539,   542,
     547,   553,   556,   560,   566,   573,   575,   577,   579,   587,
     599,   608,   621,   623,   626,   629,   631,   633,   636,   639,
     642,   645,   649,   653,   656,   659,   661,   663,   665,   667,
     669,   671,   673,   676,   679,   682,   686,   689,   692,   695,
     702,   713,   715,   718,   720,   727,   738,   740,   743,   746,
     749,   752,   755,   758,   772,   786,   799,   812,   814,   815,
     817,   819,   824,   831,   833,   835,   837,   839,   841,   843,
     845,   847,   849,   854,   858,   863,   864,   871,   880,   883,
     887,   891,   895,   896,   901,   906,   911,   916,   920,   924,
     926,   930,   936,   941,   946,   950,   953,   954,   956,   958,
     962,   965,   968,   971,   974,   977,   980,   983,   986,   989,
     992,   995,   998,  1001,  1004,  1006,  1009,  1012,  1017,  1027,
    1030,  1033,  1036,  1038,  1042,  1045,  1048,  1050,  1053,  1062,
    1065,  1067,  1070,  1072,  1075,  1077,  1082,  1092,  1095,  1097,
    1099,  1101,  1103,  1106,  1108,  1110,  1113,  1115,  1116,  1119,
    1122,  1124,  1125,  1128,  1131,  1133,  1135,  1138,  1141,  1144,
    1146,  1148,  1150,  1152,  1154,  1156,  1157,  1159,  1162,  1164,
    1169,  1175,  1176,  1179,  1181,  1187,  1190,  1193,  1195,  1197,
    1199,  1202,  1204,  1207,  1209,  1211,  1212,  1214,  1216,  1217,
    1219,  1225,  1232,  1236,  1243,  1247,  1249,  1253,  1255,  1257,
    1259,  1263,  1270,  1278,  1284,  1286,  1288,  1293,  1299,  1301,
    1305,  1306,  1308,  1311,  1313,  1318,  1320,  1323,  1325,  1328,
    1332,  1335,  1337,  1340,  1342,  1347,  1350,  1352,  1354,  1358,
    1360,  1363,  1367,  1370,  1371,  1373,  1375,  1380,  1383,  1384,
    1386,  1390,  1395,  1400,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1434,  1436,  1439,  1441,  1444,  1447,  1450,  1453,  1455,  1457,
    1459,  1460,  1462,  1463,  1465,  1466,  1468,  1469,  1471,  1472,
    1475,  1478,  1479,  1481,  1484,  1486,  1493,  1499,  1501,  1503,
    1505,  1508,  1511,  1513,  1515,  1517,  1519,  1522,  1524,  1526,
    1528,  1531,  1533,  1535,  1537,  1540,  1543,  1546,  1547,  1549,
    1550,  1552,  1554,  1556,  1558,  1560,  1562,  1564,  1566,  1569,
    1572,  1575,  1577,  1580,  1584,  1586,  1589,  1592,  1597,  1604,
    1606,  1617,  1619,  1622,  1626,  1630,  1633,  1636,  1639,  1642,
    1645,  1648,  1651,  1656,  1661,  1666,  1670,  1674,  1680,  1685,
    1690,  1695,  1699,  1703,  1707,  1711,  1714,  1717,  1722,  1726,
    1730,  1734,  1738,  1743,  1748,  1753,  1758,  1764,  1769,  1776,
    1784,  1789,  1794,  1800,  1803,  1807,  1811,  1815,  1818,  1822,
    1826,  1830,  1834,  1839,  1843,  1849,  1856,  1860,  1864,  1869,
    1873,  1877,  1881,  1885,  1889,  1895,  1899,  1903,  1908,  1912,
    1915,  1918,  1920,  1924,  1929,  1934,  1939,  1944,  1949,  1956,
    1961,  1966,  1972,  1977,  1982,  1987,  1992,  1998,  2003,  2010,
    2018,  2023,  2028,  2034,  2040,  2046,  2052,  2058,  2064,  2072,
    2078,  2084,  2091,  2096,  2101,  2106,  2111,  2116,  2123,  2128,
    2133,  2139,  2145,  2151,  2157,  2163,  2170,  2176,  2184,  2193,
    2199,  2205,  2212,  2216,  2220,  2224,  2228,  2233,  2237,  2243,
    2250,  2254,  2258,  2263,  2267,  2271,  2275,  2279,  2283,  2289,
    2293,  2297,  2302,  2307,  2312,  2316,  2322,  2327,  2332,  2335,
    2339,  2346,  2353,  2355,  2357,  2359,  2362,  2365,  2368,  2372,
    2376,  2379,  2392,  2395,  2398,  2400,  2404,  2409,  2412,  2413,
    2417,  2419,  2421,  2424,  2427,  2430,  2433,  2436,  2441,  2446,
    2451,  2455,  2460,  2466,  2475,  2482,  2487,  2497,  2504,  2512,
    2523,  2535,  2548,  2558,  2564,  2569,  2576,  2580,  2586,  2592,
    2599,  2605,  2610,  2620,  2631,  2643,  2653,  2660,  2667,  2674,
    2681,  2688,  2695,  2702,  2709,  2716,  2724,  2732,  2735,  2740,
    2745,  2750,  2755,  2761,  2766,  2771,  2777,  2783,  2787,  2792,
    2797,  2802,  2807,  2815,  2825,  2832,  2843,  2855,  2868,  2878,
    2882,  2885,  2889,  2895,  2903,  2908,  2912,  2916,  2923,  2931,
    2939,  2944,  2949,  2954,  2964,  2969,  2973,  2978,  2986,  2994,
    2997,  3001,  3005,  3009,  3014,  3017,  3020,  3025,  3036,  3040,
    3042,  3046,  3049,  3052,  3055,  3058,  3062,  3068,  3073,  3079,
    3082,  3090,  3094,  3097,  3100,  3104,  3107,  3110,  3113,  3117,
    3120,  3124,  3129,  3133,  3137,  3144,  3149,  3152,  3156,  3159,
    3162,  3167,  3171,  3175,  3178,  3182,  3184,  3187,  3189,  3192,
    3195,  3198,  3200,  3202,  3204,  3206,  3209,  3211,  3214,  3217,
    3219,  3222,  3225,  3227,  3230,  3232,  3234,  3236,  3238,  3240,
    3242,  3244,  3246,  3247,  3249,  3252,  3255,  3258,  3262,  3268,
    3276,  3284,  3291,  3298,  3305,  3312,  3318,  3325,  3332,  3339,
    3346,  3353,  3360,  3367,  3379,  3387,  3395,  3403,  3413,  3423,
    3434,  3447,  3460,  3463,  3466,  3470,  3475,  3480,  3485,  3488,
    3493,  3498,  3500,  3502,  3504,  3506,  3508,  3510,  3512,  3514,
    3517,  3519,  3521,  3523,  3527,  3531,  3540,  3547,  3558,  3566,
    3574,  3580,  3583,  3586,  3590,  3595,  3601,  3605,  3611,  3617,
    3621,  3626,  3632,  3638,  3644,  3648,  3654,  3657,  3661,  3665,
    3671,  3675,  3679,  3683,  3688,  3694,  3700,  3704,  3710,  3716,
    3720,  3725,  3731,  3737,  3740,  3743,  3747,  3753,  3760,  3767,
    3771,  3775,  3779,  3786,  3792,  3798,  3801,  3805,  3809,  3815,
    3822,  3826,  3829,  3832,  3836,  3839,  3843,  3846,  3850,  3856,
    3863,  3866,  3869,  3872,  3874,  3879,  3884,  3886,  3889,  3892,
    3895,  3898,  3901,  3904,  3907,  3911,  3914,  3918,  3921,  3925,
    3927,  3929,  3931,  3933,  3935,  3936,  3939,  3940,  3943,  3944,
    3946,  3947,  3948,  3950,  3952,  3954,  3956,  3964,  3973,  3976,
    3981,  3984,  3989,  3996,  3999,  4001,  4003,  4007,  4011,  4013,
    4018,  4021,  4023,  4027,  4031,  4036,  4040,  4044,  4048,  4050,
    4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4079,  4080,  4081,  4084,  4086,  4090,  4092,
    4096,  4098,  4101,  4104,  4106,  4110,  4111,  4112,  4115,  4118,
    4120,  4124,  4130,  4132,  4135,  4138,  4142,  4145,  4148,  4151,
    4154,  4156,  4158,  4160,  4162,  4167,  4170,  4174,  4178,  4181,
    4185,  4188,  4191,  4194,  4198,  4202,  4206,  4209,  4213,  4215,
    4219,  4223,  4225,  4228,  4231,  4234,  4237,  4247,  4254,  4256,
    4258,  4260,  4262,  4265,  4268,  4272,  4276,  4278,  4281,  4285,
    4289,  4291,  4294,  4296,  4298,  4300,  4302,  4304,  4307,  4310,
    4315,  4317,  4320,  4323,  4326,  4330,  4332,  4334,  4336,  4339,
    4342,  4345,  4348,  4351,  4355,  4359,  4363,  4367,  4371,  4375,
    4379,  4381,  4384,  4387,  4390,  4394,  4397,  4401,  4405,  4408,
    4411,  4414,  4417,  4420,  4423,  4426,  4429,  4432,  4435,  4438,
    4441,  4444,  4447,  4451,  4455,  4459,  4462,  4465,  4468,  4471,
    4474,  4477,  4480,  4483,  4486,  4489,  4492,  4495,  4499,  4503,
    4507,  4512,  4519,  4522,  4524,  4526,  4528,  4530,  4532,  4533,
    4539,  4541,  4548,  4552,  4554,  4557,  4560,  4563,  4567,  4571,
    4574,  4577,  4580,  4583,  4586,  4589,  4593,  4596,  4599,  4603,
    4605,  4609,  4614,  4616,  4619,  4625,  4632,  4639,  4642,  4644,
    4647,  4650,  4656,  4663
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     356,     0,    -1,    97,   358,    -1,    44,   390,    -1,    41,
      67,     5,    -1,    41,    67,   141,    -1,    47,   395,    -1,
      60,    -1,    65,    -1,    66,   397,    -1,    68,   285,     5,
      -1,    69,   402,    -1,    70,   404,    -1,    78,   405,    -1,
      85,   414,    -1,    87,   416,    -1,    88,   417,    -1,    96,
     359,    -1,   126,   419,    -1,   138,   420,    -1,   142,   462,
      -1,   145,   465,    -1,   149,    -1,   150,   359,    -1,   156,
     471,    -1,   162,    16,     4,    -1,   175,   474,    -1,   178,
     492,    -1,   179,   493,    -1,   180,   494,    -1,   183,   510,
     495,    -1,   184,   529,    -1,   197,    67,     5,    -1,   215,
     530,    -1,   216,   531,    -1,   217,   534,    -1,   238,    89,
      -1,   231,   536,    -1,   229,   535,    -1,   245,    -1,   242,
     510,   538,    -1,   247,   543,    -1,   249,   544,    -1,   254,
     546,    -1,   267,    -1,   273,   561,    -1,   288,     4,    -1,
     289,   385,    -1,   301,    -1,   303,   563,    -1,   309,    -1,
     312,   565,    -1,   313,   566,    -1,   343,   570,    -1,   350,
     571,    -1,     3,    -1,     4,    -1,   211,    -1,   210,    -1,
     192,   359,    -1,   218,   359,    -1,   220,   359,    -1,   313,
     359,    -1,    44,   359,    -1,    47,   359,    -1,    77,   359,
      -1,    85,   359,    -1,   143,   359,    -1,   247,   359,    -1,
       4,    -1,   346,    -1,   351,    -1,   211,    -1,   297,    -1,
     202,    -1,   352,    -1,   210,    -1,   120,    -1,    -1,   248,
      38,    -1,   134,    38,    -1,   248,    -1,   134,    -1,    -1,
     362,    -1,   357,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   363,   363,    -1,   364,   365,    -1,
     365,   365,    -1,   357,   357,    -1,   157,    -1,   222,    -1,
     102,    -1,    19,    -1,   368,    -1,   313,    -1,   314,    -1,
     315,    -1,   316,    -1,   317,    -1,   318,    -1,   319,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,
     330,    -1,   331,    -1,   332,    -1,   333,    -1,   334,    -1,
     335,    -1,   336,    -1,   337,    -1,   338,    -1,   339,    -1,
     340,    -1,    57,    -1,   217,    -1,    -1,   347,    -1,   205,
      -1,   197,    -1,   204,    -1,   241,    -1,    -1,   213,    -1,
     292,    -1,   173,    -1,   177,    -1,   230,    -1,   277,    -1,
     278,    -1,    28,    -1,   269,    -1,   151,    -1,    30,    -1,
     256,    -1,   251,    -1,    95,    -1,   163,    -1,    -1,   128,
      -1,    35,    -1,   129,    -1,   164,    -1,   154,    -1,   136,
      -1,   107,    -1,    -1,    98,    -1,   262,    -1,    -1,    98,
      -1,    24,    -1,    25,    -1,    -1,   266,    -1,   165,    -1,
      -1,    17,    -1,   159,    -1,    -1,   157,    -1,   184,    -1,
      -1,    63,    -1,    49,    -1,   103,    -1,    86,    -1,   353,
      -1,    27,    -1,    52,    -1,    -1,     4,    -1,    83,    -1,
     152,    -1,   224,    -1,   225,    -1,   239,    -1,   280,    -1,
      -1,    32,    -1,   282,    -1,    -1,   198,    -1,    42,    -1,
      43,    -1,   170,    -1,   171,    -1,   307,   389,    -1,    48,
     386,    -1,    75,   387,    -1,   150,   388,    -1,   186,   541,
      -1,    37,   542,    -1,   255,   357,    -1,   290,   357,    -1,
     359,    -1,    67,     5,    -1,   359,    -1,    67,     5,    -1,
     359,    -1,    67,     5,    -1,   357,   357,    -1,   226,   357,
     357,   357,   357,   357,    -1,    12,   391,    -1,    72,     5,
       5,     5,    -1,   101,     4,    -1,   119,   392,    -1,   135,
     393,    -1,    54,   270,     4,    -1,   294,   394,    -1,   123,
       5,    -1,    60,    -1,   357,   357,    -1,   357,    -1,   357,
     357,    -1,   357,    12,   357,   357,    -1,   357,   357,    12,
     357,   357,    -1,   294,   357,    -1,   294,   357,   357,    -1,
     294,   357,    12,   357,   357,    -1,   294,   357,   357,    12,
     357,   357,    -1,    32,    -1,   282,    -1,   124,    -1,   357,
     357,    12,    60,     5,     5,     5,    -1,   357,   357,     4,
     357,   357,    12,    60,     5,     5,     5,     5,    -1,   357,
     357,    12,   357,   357,     5,     5,     5,    -1,   357,   357,
       4,   357,   357,    12,   357,   357,     5,     5,     5,     5,
      -1,   357,    -1,   357,   357,    -1,   294,   396,    -1,   124,
      -1,   357,    -1,   357,   357,    -1,   258,   398,    -1,   193,
     399,    -1,   187,   400,    -1,   304,   357,   357,    -1,   304,
     197,   197,    -1,   349,   401,    -1,   233,   359,    -1,   139,
      -1,   176,    -1,   357,    -1,   187,    -1,   349,    -1,   348,
      -1,   304,    -1,     4,   373,    -1,   193,   373,    -1,   251,
       4,    -1,   357,     4,     4,    -1,    79,   357,    -1,   251,
       4,    -1,   172,     4,    -1,     4,   357,   357,     4,     6,
       4,    -1,   247,   357,   357,   357,   357,   357,   357,     4,
       6,     4,    -1,    40,    -1,   194,   403,    -1,   112,    -1,
       4,   357,   357,     4,     6,     4,    -1,   247,   357,   357,
     357,   357,   357,   357,     4,     6,     4,    -1,   372,    -1,
     177,   357,    -1,    84,   406,    -1,   100,   407,    -1,   175,
     408,    -1,   219,   412,    -1,   254,   413,    -1,     5,     4,
       4,   411,     4,     4,   372,   357,   409,   410,   357,   357,
       5,    -1,     5,     4,     4,   411,     4,     4,   372,   357,
     357,   410,   357,   357,     5,    -1,     5,     4,     4,   411,
       4,     4,   372,   357,   409,   357,   357,     5,    -1,     5,
       4,     4,   411,     4,     4,   372,   357,   357,   357,   357,
       5,    -1,   228,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   359,    -1,     5,     4,   359,     5,   367,   374,
      -1,   187,    -1,   349,    -1,   348,    -1,   304,    -1,   139,
      -1,   176,    -1,   273,    -1,    47,    -1,     5,    -1,     5,
       5,     4,   359,    -1,     5,   367,   374,    -1,    31,     5,
     367,   374,    -1,    -1,   357,   357,   357,   357,   367,   374,
      -1,    60,   366,   367,   374,   357,   357,   367,   376,    -1,
     289,   415,    -1,    40,   357,   357,    -1,   194,   357,   357,
      -1,   112,   357,   357,    -1,    -1,   357,   357,   367,   374,
      -1,    40,   357,   357,     4,    -1,   194,   357,   357,     4,
      -1,   112,   357,   357,     4,    -1,   369,   357,   357,    -1,
     367,   374,   366,    -1,   359,    -1,   312,   357,   357,    -1,
      40,   194,   369,   357,   357,    -1,   194,   369,   357,   357,
      -1,    40,   194,   367,   366,    -1,   194,   367,   366,    -1,
      33,     4,    -1,    -1,    32,    -1,   282,    -1,   145,   118,
       5,    -1,    41,    67,    -1,    44,   421,    -1,    47,   423,
      -1,    66,   424,    -1,    69,   428,    -1,    68,   427,    -1,
      70,   430,    -1,    78,   432,    -1,    80,   435,    -1,    85,
     436,    -1,    87,   437,    -1,    89,   439,    -1,    88,   438,
      -1,    94,   440,    -1,    96,    -1,   125,   444,    -1,   142,
     450,    -1,   152,     5,     5,     4,    -1,   153,    90,     5,
       5,   357,   357,   369,     4,   418,    -1,   156,   442,    -1,
     160,   441,    -1,   162,    16,    -1,   187,    -1,   183,   510,
     504,    -1,   184,   451,    -1,   197,    67,    -1,   215,    -1,
     216,   452,    -1,   223,   284,   369,   357,   357,     4,     4,
       5,    -1,   247,   453,    -1,   249,    -1,   273,   454,    -1,
     288,    -1,   289,   455,    -1,   298,    -1,   305,   369,   357,
     357,    -1,   311,    90,     5,     5,   357,   357,   369,     4,
     418,    -1,   313,   460,    -1,   350,    -1,   101,    -1,   119,
      -1,   135,    -1,    54,   270,    -1,    89,    -1,   123,    -1,
      72,   422,    -1,   174,    -1,    -1,   187,     5,    -1,   104,
       5,    -1,   119,    -1,    -1,   409,   410,    -1,   357,   410,
      -1,   258,    -1,   193,    -1,   187,   425,    -1,   304,   169,
      -1,   349,   426,    -1,   233,    -1,   193,    -1,   251,    -1,
      79,    -1,   251,    -1,   172,    -1,    -1,   285,    -1,   169,
     429,    -1,     4,    -1,     4,   369,   357,   357,    -1,     4,
     357,   357,   372,   357,    -1,    -1,   169,   431,    -1,   177,
      -1,     4,   357,   357,   372,   357,    -1,   367,   374,    -1,
      66,   433,    -1,    67,    -1,    92,    -1,   169,    -1,   208,
     169,    -1,   186,    -1,    70,   434,    -1,   273,    -1,   342,
      -1,    -1,   193,    -1,   258,    -1,    -1,   177,    -1,   357,
     357,   367,   374,   375,    -1,   369,   357,   357,   367,   374,
     375,    -1,   367,   374,   375,    -1,    60,   367,   374,   375,
     367,   376,    -1,   289,   367,   374,    -1,   369,    -1,   367,
     374,   375,    -1,   281,    -1,    33,    -1,   369,    -1,   367,
     374,   375,    -1,   367,   374,   366,   357,   357,     5,    -1,
       4,   367,   374,   366,   357,   357,     5,    -1,   369,   357,
     357,     4,     4,    -1,     5,    -1,    66,    -1,   369,   357,
     357,     5,    -1,     6,     4,     4,     4,     4,    -1,    89,
      -1,   121,   196,   443,    -1,    -1,     4,    -1,   357,   357,
      -1,   199,    -1,    60,   367,   374,   375,    -1,    82,    -1,
     101,   447,    -1,    45,    -1,   118,   445,    -1,   121,   196,
     448,    -1,   147,   446,    -1,   148,    -1,   209,   196,    -1,
     270,    -1,   270,   367,   374,   376,    -1,   271,   449,    -1,
     342,    -1,     4,    -1,   369,   357,   357,    -1,     4,    -1,
     166,     5,    -1,     4,   166,     5,    -1,   313,     4,    -1,
      -1,     4,    -1,   360,    -1,   360,   369,   357,   357,    -1,
     360,     4,    -1,    -1,     4,    -1,   132,   157,   367,    -1,
     132,   157,     4,   367,    -1,   294,   157,   357,   367,    -1,
      -1,   214,    -1,   306,    -1,    67,    -1,   182,    -1,   241,
      -1,   283,    -1,   293,    -1,    82,    -1,    46,    -1,   233,
      -1,    62,    -1,   283,    -1,   307,    -1,   135,    -1,   240,
      -1,   240,   188,    -1,   268,    -1,   268,   188,    -1,    21,
      -1,   307,   459,    -1,    48,   456,    -1,    75,   457,    -1,
     150,   458,    -1,   186,    -1,    37,    -1,   255,    -1,    -1,
      67,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,   226,
      -1,    -1,    16,   461,    -1,   196,   368,    -1,    -1,   227,
      -1,    84,   463,    -1,   100,    -1,   367,   374,   375,   464,
       5,     5,    -1,   367,   374,   375,   464,     5,    -1,    20,
      -1,   236,    -1,    19,    -1,    44,   466,    -1,    78,   467,
      -1,    85,    -1,    95,    -1,    96,    -1,   102,    -1,   125,
     468,    -1,   142,    -1,   156,    -1,   163,    -1,   183,   469,
      -1,   222,    -1,   157,    -1,   273,    -1,   283,   367,    -1,
     313,   470,    -1,    73,     5,    -1,    -1,    31,    -1,    -1,
      44,    -1,    88,    -1,   192,    -1,   150,    -1,   260,    -1,
     219,    -1,   299,    -1,   367,    -1,    59,   367,    -1,   116,
     367,    -1,   173,   367,    -1,    18,    -1,   289,   367,    -1,
     200,     4,     4,    -1,   117,    -1,   185,     5,    -1,    89,
     473,    -1,   261,   121,   196,   472,    -1,   261,     6,     4,
       4,     4,     4,    -1,   303,    -1,   313,   357,   357,   357,
     357,   357,   357,   357,   357,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    57,    -1,     4,     4,   367,    -1,
     193,   359,    -1,    26,   475,    -1,   113,   477,    -1,   125,
     478,    -1,   159,   491,    -1,   207,   489,    -1,   221,   490,
      -1,     5,    14,     5,   379,    -1,     5,    15,     5,   379,
      -1,     5,    62,     5,   379,    -1,     5,   190,   379,    -1,
       5,   191,   379,    -1,     5,   264,   377,     4,   379,    -1,
       5,   274,     4,   379,    -1,     5,   275,     4,   379,    -1,
       5,   306,     5,   379,    -1,   247,    88,   476,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   190,    -1,     5,   191,    -1,     5,   264,   377,
       4,    -1,     5,   274,     4,    -1,     5,   275,     4,    -1,
       5,   306,     5,    -1,     5,     5,   272,    -1,     5,    14,
       5,   379,    -1,     5,    15,     5,   379,    -1,     5,    62,
       5,   379,    -1,     5,   190,   378,   379,    -1,     5,     5,
     272,   378,   379,    -1,     5,   191,   378,   379,    -1,     5,
     264,   377,     4,   378,   379,    -1,     5,   279,   377,     4,
       4,   378,   379,    -1,     5,   274,     4,   379,    -1,     5,
     275,     4,   379,    -1,     5,   306,     5,   378,   379,    -1,
     271,   479,    -1,   118,    88,   480,    -1,   247,   157,   488,
      -1,   247,    88,   487,    -1,   192,   481,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   190,   378,    -1,     5,     5,   272,   378,    -1,     5,
     191,   378,    -1,     5,   264,   377,     4,   378,    -1,     5,
     279,   377,     4,     4,   378,    -1,     5,   274,     4,    -1,
       5,   275,     4,    -1,     5,   306,     5,   378,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   190,   378,    -1,     5,   191,   378,    -1,     5,
     264,   377,     4,   378,    -1,     5,   274,     4,    -1,     5,
     275,     4,    -1,     5,   306,     5,   378,    -1,   157,   162,
     482,    -1,   162,   483,    -1,   157,   484,    -1,   486,    -1,
     157,   341,   485,    -1,     5,    14,     5,   379,    -1,     5,
      15,     5,   379,    -1,     5,    62,     5,   379,    -1,     5,
     190,   378,   379,    -1,     5,   191,   378,   379,    -1,     5,
     264,   377,     4,   378,   379,    -1,     5,   274,     4,   379,
      -1,     5,   275,     4,   379,    -1,     5,   306,     5,   378,
     379,    -1,     5,    14,     5,   379,    -1,     5,    15,     5,
     379,    -1,     5,    62,     5,   379,    -1,     5,   190,   378,
     379,    -1,     5,     5,   272,   378,   379,    -1,     5,   191,
     378,   379,    -1,     5,   264,   377,     4,   378,   379,    -1,
       5,   279,   377,     4,     4,   378,   379,    -1,     5,   274,
       4,   379,    -1,     5,   275,     4,   379,    -1,     5,   306,
       5,   378,   379,    -1,   368,     5,    14,     5,   379,    -1,
     368,     5,    15,     5,   379,    -1,   368,     5,    62,     5,
     379,    -1,   368,     5,   190,   378,   379,    -1,   368,     5,
     191,   378,   379,    -1,   368,     5,   264,   377,     4,   378,
     379,    -1,   368,     5,   274,     4,   379,    -1,   368,     5,
     275,     4,   379,    -1,   368,     5,   306,     5,   378,   379,
      -1,     5,    14,     5,   379,    -1,     5,    15,     5,   379,
      -1,     5,    62,     5,   379,    -1,     5,   190,   378,   379,
      -1,     5,   191,   378,   379,    -1,     5,   264,   377,     4,
     378,   379,    -1,     5,   274,     4,   379,    -1,     5,   275,
       4,   379,    -1,     5,   306,     5,   378,   379,    -1,   368,
       5,    14,     5,   379,    -1,   368,     5,    15,     5,   379,
      -1,   368,     5,    62,     5,   379,    -1,   368,     5,   190,
     378,   379,    -1,   368,     5,     5,   272,   378,   379,    -1,
     368,     5,   191,   378,   379,    -1,   368,     5,   264,   377,
       4,   378,   379,    -1,   368,     5,   279,   377,     4,     4,
     378,   379,    -1,   368,     5,   274,     4,   379,    -1,   368,
       5,   275,     4,   379,    -1,   368,     5,   306,     5,   378,
     379,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   190,   378,    -1,     5,     5,
     272,   378,    -1,     5,   191,   378,    -1,     5,   264,   377,
       4,   378,    -1,     5,   279,   377,     4,     4,   378,    -1,
       5,   274,     4,    -1,     5,   275,     4,    -1,     5,   306,
       5,   378,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   190,   378,    -1,     5,
     191,   378,    -1,     5,   264,   377,     4,   378,    -1,     5,
     274,     4,    -1,     5,   275,     4,    -1,     5,   306,     5,
     378,    -1,     5,    14,     5,   379,    -1,     5,    62,     5,
     379,    -1,     5,   190,   379,    -1,     5,   264,   377,     4,
     379,    -1,     5,   274,     4,   379,    -1,     5,   306,     5,
     379,    -1,     5,     5,    -1,   271,     5,     5,    -1,    94,
       4,     4,     4,     4,     4,    -1,   187,     4,     4,     4,
       4,     4,    -1,   112,    -1,   232,    -1,   359,    -1,   140,
     359,    -1,    89,   359,    -1,    67,     5,    -1,     5,     4,
       4,    -1,   303,   357,   357,    -1,   350,   357,    -1,     5,
       5,   368,   374,     5,     5,   368,   374,   357,   368,   376,
       5,    -1,    61,   498,    -1,    67,     5,    -1,    81,    -1,
      74,   503,     5,    -1,    74,   503,   306,     5,    -1,    76,
     100,    -1,    -1,    84,   496,   499,    -1,    90,    -1,   100,
      -1,   100,    17,    -1,   106,   502,    -1,   115,     4,    -1,
     130,     5,    -1,   150,    17,    -1,   150,   212,   357,   357,
      -1,   150,   295,   357,   357,    -1,     4,    20,   382,   359,
      -1,     4,    21,   362,    -1,     4,    21,   362,   369,    -1,
       4,    21,   362,   367,   374,    -1,     4,    22,   240,   357,
     357,     4,   367,   376,    -1,     4,    22,   240,     5,   367,
     376,    -1,     4,    49,   122,   359,    -1,     4,    50,   240,
     357,   357,   357,     4,   367,   376,    -1,     4,    50,   240,
       5,   367,   376,    -1,     4,    49,   240,   357,   357,   367,
     376,    -1,     4,    53,   106,   362,   362,     4,   357,   357,
     357,     4,    -1,     4,    53,   106,   362,   362,     4,   357,
     357,   357,     4,   369,    -1,     4,    53,   106,   362,   362,
       4,   357,   357,   357,     4,   367,   374,    -1,     4,    53,
     106,     5,     5,   367,   374,   367,   376,    -1,     4,    56,
     497,     5,     5,    -1,     4,    63,   122,   359,    -1,     4,
      63,   240,   357,   367,   376,    -1,     4,    67,     5,    -1,
       4,    75,    27,   359,   359,    -1,     4,    75,   167,     5,
       5,    -1,     4,    75,   240,   357,   367,   376,    -1,     4,
      75,   283,   367,   374,    -1,     4,    76,   139,   359,    -1,
       4,    83,   106,   362,   362,     4,   357,   357,     4,    -1,
       4,    83,   106,   362,   362,     4,   357,   357,     4,   369,
      -1,     4,    83,   106,   362,   362,     4,   357,   357,     4,
     367,   374,    -1,     4,    83,   106,     5,     5,   367,   374,
     367,   376,    -1,     4,    84,    22,   240,   357,   357,    -1,
       4,    84,    50,   240,   357,   357,    -1,     4,    84,    53,
      21,   357,   357,    -1,     4,    84,    53,   240,   357,   357,
      -1,     4,    84,   111,   240,   357,   357,    -1,     4,    84,
     114,    21,   357,   357,    -1,     4,    84,   114,   240,   357,
     357,    -1,     4,    84,    83,    21,   357,   357,    -1,     4,
      84,    83,   240,   357,   357,    -1,     4,    84,   228,   310,
       4,   357,   357,    -1,     4,    84,   259,   310,     4,   357,
     357,    -1,     4,   100,    -1,     4,   100,    22,     4,    -1,
       4,   100,    50,     4,    -1,     4,   100,    53,     4,    -1,
       4,   100,   111,     4,    -1,     4,   100,    56,   497,     5,
      -1,     4,   100,   114,     4,    -1,     4,   100,    83,     4,
      -1,     4,   100,   228,   310,     4,    -1,     4,   100,   259,
     310,     4,    -1,     4,   100,   285,    -1,     4,   100,   285,
       5,    -1,     4,   100,   285,     4,    -1,     4,   106,    40,
       4,    -1,     4,   110,   122,   359,    -1,     4,   110,   240,
     357,   357,   367,   376,    -1,     4,   111,   240,   357,   357,
     357,     4,   367,   376,    -1,     4,   111,   240,     5,   367,
     376,    -1,     4,   114,   106,   362,   362,     4,   357,   357,
     357,     4,    -1,     4,   114,   106,   362,   362,     4,   357,
     357,   357,     4,   369,    -1,     4,   114,   106,   362,   362,
       4,   357,   357,   357,     4,   367,   374,    -1,     4,   114,
     106,     5,     5,   367,   374,   367,   376,    -1,     4,   130,
       5,    -1,     4,   150,    -1,     4,   150,   212,    -1,     4,
     172,    27,   359,   359,    -1,     4,   172,   226,   367,   374,
     366,   366,    -1,     4,   195,   357,   357,    -1,     4,   195,
     133,    -1,     4,   195,    36,    -1,     4,   195,   294,   367,
     374,   366,    -1,     4,   228,   245,   357,   357,   367,   376,
      -1,     4,   259,   245,   357,   357,   367,   376,    -1,     4,
     226,   263,   380,    -1,     4,   226,   270,     4,    -1,     4,
     228,   122,   359,    -1,     4,   234,   367,   374,   366,   366,
     357,   367,   376,    -1,     4,   235,   516,   359,    -1,     4,
     249,    40,    -1,     4,   250,   131,     5,    -1,     4,   250,
     226,   367,   374,   366,   366,    -1,     4,   250,   283,   367,
     374,   367,   376,    -1,     4,   260,    -1,     4,   260,   212,
      -1,     4,   285,     5,    -1,     4,   287,     5,    -1,     4,
     287,   249,   359,    -1,     4,   300,    -1,     4,   302,    -1,
       4,   308,    27,   359,    -1,     4,   308,   226,   367,   374,
     366,   367,   376,   357,   362,    -1,     4,   342,     4,    -1,
     165,    -1,   165,   357,   357,    -1,   174,   511,    -1,   175,
     512,    -1,   195,   513,    -1,   233,   359,    -1,   235,   516,
     359,    -1,   235,   516,   359,   357,   357,    -1,   249,    40,
     357,   357,    -1,   249,   194,   357,   357,     4,    -1,   249,
     112,    -1,   254,     5,   503,   367,   374,   375,   359,    -1,
     254,   286,     5,    -1,   260,   520,    -1,   267,   521,    -1,
       5,    67,     5,    -1,     5,    81,    -1,     5,   100,    -1,
       5,    90,    -1,     5,   130,     5,    -1,     5,   150,    -1,
       5,   150,   212,    -1,     5,   195,   357,   357,    -1,     5,
     195,   133,    -1,     5,   195,    36,    -1,     5,   195,   294,
     367,   374,   366,    -1,     5,   235,   516,   359,    -1,     5,
     260,    -1,     5,   260,   212,    -1,     5,   300,    -1,     5,
     302,    -1,   285,   106,     5,     5,    -1,   285,   100,     5,
      -1,   285,   100,    17,    -1,   285,     5,    -1,   285,   303,
       5,    -1,   219,    -1,   219,   367,    -1,   299,    -1,   300,
      17,    -1,   302,    17,    -1,   342,     4,    -1,   260,    -1,
     302,    -1,   150,    -1,   300,    -1,    40,   195,    -1,   195,
      -1,   112,   195,    -1,    40,   106,    -1,   106,    -1,   112,
     106,    -1,    40,   249,    -1,   249,    -1,   112,   249,    -1,
     100,    -1,   287,    -1,    67,    -1,   342,    -1,   235,    -1,
     130,    -1,   165,    -1,   303,    -1,    -1,     4,    -1,    30,
     359,    -1,   240,   357,    -1,   161,     4,    -1,   214,     4,
     357,    -1,    63,   357,   357,   357,   517,    -1,   110,   357,
     357,   357,   357,   361,   517,    -1,    49,   357,   357,   357,
     357,   361,   517,    -1,   228,   357,   357,   357,   357,   517,
      -1,   259,   357,   357,   357,   357,   517,    -1,   172,   357,
     357,   357,   357,   517,    -1,   308,   357,   357,   357,   357,
     517,    -1,   287,   357,   357,   361,   517,    -1,    63,   226,
     357,   357,   381,   517,    -1,    49,   226,   357,   357,   381,
     517,    -1,   103,   226,   357,   357,   381,   517,    -1,    86,
     226,   357,   357,   381,   517,    -1,   353,   226,   357,   357,
     381,   517,    -1,    27,   226,   357,   357,   381,   517,    -1,
      52,   226,   357,   357,   381,   517,    -1,   250,   357,   357,
     357,   357,   367,   374,   367,   376,     5,   517,    -1,    75,
     357,   357,   357,   367,   374,   517,    -1,   234,   357,   357,
     357,   357,   357,   517,    -1,    22,   357,   357,   357,   357,
       4,   517,    -1,   111,   357,   357,   357,   357,   357,     4,
     361,   517,    -1,    50,   357,   357,   357,   357,   357,     4,
     361,   517,    -1,    83,   357,   357,   362,   362,     4,   357,
     357,     4,   517,    -1,   114,   357,   357,   362,   362,     4,
     357,   357,   357,     4,   361,   517,    -1,    53,   357,   357,
     362,   362,     4,   357,   357,   357,     4,   361,   517,    -1,
      76,   517,    -1,   286,   500,    -1,     5,   357,   357,    -1,
     306,     5,   357,   357,    -1,   357,   357,   306,     5,    -1,
       5,   367,   374,   366,    -1,     4,     4,    -1,    40,   357,
     357,     4,    -1,   194,   357,   357,     4,    -1,   112,    -1,
     105,    -1,   344,    -1,    64,    -1,   253,    -1,   252,    -1,
     237,    -1,   345,    -1,    61,   505,    -1,    67,    -1,   130,
      -1,   115,    -1,   144,   357,   357,    -1,   155,   357,   357,
      -1,     4,    20,    83,     5,     5,     5,   367,     4,    -1,
       4,    20,   152,     5,     5,     4,    -1,     4,    20,   224,
       5,     5,     5,     5,   367,   374,   383,    -1,     4,    20,
     225,     5,     5,   367,   383,    -1,     4,    20,   239,     5,
       5,     5,   367,    -1,     4,    20,   280,   367,   374,    -1,
     155,    17,    -1,     4,    21,    -1,     4,    21,   369,    -1,
       4,    21,   367,   374,    -1,     4,    22,   240,   367,   376,
      -1,     4,    49,   122,    -1,     4,    50,   240,   367,   376,
      -1,     4,    49,   240,   367,   376,    -1,     4,    53,    21,
      -1,     4,    53,    21,   369,    -1,     4,    53,    21,   367,
     374,    -1,     4,    53,   240,   367,   376,    -1,     4,    60,
     367,   374,   375,    -1,     4,    63,   122,    -1,     4,    63,
     240,   367,   376,    -1,     4,    67,    -1,     4,    75,    27,
      -1,     4,    75,   167,    -1,     4,    75,   240,   367,   376,
      -1,     4,    75,   283,    -1,     4,    76,   139,    -1,     4,
      83,    21,    -1,     4,    83,    21,   369,    -1,     4,    83,
      21,   367,   374,    -1,     4,    83,   240,   367,   376,    -1,
       4,   110,   122,    -1,     4,   110,   240,   367,   376,    -1,
       4,   111,   240,   367,   376,    -1,     4,   114,    21,    -1,
       4,   114,    21,   369,    -1,     4,   114,    21,   367,   374,
      -1,     4,   114,   240,   367,   376,    -1,     4,   130,    -1,
       4,   150,    -1,     4,   172,    27,    -1,     4,   172,   168,
     367,   376,    -1,     4,   172,   226,   367,   374,   375,    -1,
       4,   181,   168,   357,   367,   376,    -1,     4,   228,   122,
      -1,     4,   226,   263,    -1,     4,   226,   270,    -1,     4,
     234,   226,   367,   374,   375,    -1,     4,   234,   168,   367,
     376,    -1,     4,   234,   291,   367,   376,    -1,     4,   235,
      -1,     4,   235,   516,    -1,     4,   250,   131,    -1,     4,
     250,   168,   367,   376,    -1,     4,   250,   226,   367,   374,
     375,    -1,     4,   250,   283,    -1,     4,   260,    -1,     4,
     285,    -1,     4,   285,     4,    -1,     4,   287,    -1,     4,
     287,   249,    -1,     4,   298,    -1,     4,   308,    27,    -1,
       4,   308,   168,   367,   376,    -1,     4,   308,   226,   367,
     374,   375,    -1,     4,   342,    -1,   150,   506,    -1,   150,
     208,    -1,   208,    -1,   228,   259,   357,   357,    -1,   259,
     259,   357,   357,    -1,   233,    -1,   235,   516,    -1,   260,
     507,    -1,   260,   208,    -1,   267,   508,    -1,     5,    67,
      -1,     5,   130,    -1,     5,   155,    -1,     5,   235,   516,
      -1,     5,   285,    -1,     5,   285,   208,    -1,   285,    17,
      -1,   285,    99,   196,    -1,   342,    -1,    30,    -1,   240,
      -1,   161,    -1,   214,    -1,    -1,   357,   357,    -1,    -1,
     357,   357,    -1,    -1,   287,    -1,    -1,    -1,   227,    -1,
     242,    -1,   304,    -1,    58,    -1,   503,   367,   374,   375,
     359,   518,   524,    -1,   260,   503,   367,   374,   375,   359,
     518,   524,    -1,   503,     5,    -1,   503,     5,   367,   374,
      -1,   503,     4,    -1,   503,     4,   367,   374,    -1,   125,
       5,     5,   501,     4,     5,    -1,   357,   357,    -1,   133,
      -1,    36,    -1,    40,   357,   357,    -1,   194,   357,   357,
      -1,   112,    -1,   294,   367,   374,   366,    -1,   514,   515,
      -1,   515,    -1,   516,   354,   359,    -1,    67,   354,     5,
      -1,    93,   354,     4,     4,    -1,   342,   354,     4,    -1,
     130,   354,     5,    -1,   287,   354,     5,    -1,   527,    -1,
     528,    -1,   203,    -1,   260,    -1,   150,    -1,    92,    -1,
     127,    -1,   106,    -1,   195,    -1,   249,    -1,   100,    -1,
     158,    -1,   276,    -1,   509,    -1,   509,   514,    -1,    -1,
      -1,   519,   522,    -1,    17,    -1,   212,   357,   357,    -1,
     295,    -1,   295,   357,   357,    -1,   359,    -1,   287,   359,
      -1,   522,   523,    -1,   523,    -1,   516,   354,   359,    -1,
      -1,    -1,   525,   526,    -1,   526,   527,    -1,   527,    -1,
     285,   354,     5,    -1,    56,   354,   497,     5,     5,    -1,
      65,    -1,    67,     5,    -1,   182,   370,    -1,   241,   357,
     357,    -1,   283,   367,    -1,   293,   357,    -1,    46,   371,
      -1,   182,     4,    -1,   353,    -1,   351,    -1,   345,    -1,
     203,    -1,   357,   357,   357,   357,    -1,   357,   357,    -1,
     369,   357,   357,    -1,   367,   374,   366,    -1,   294,   532,
      -1,    39,   357,   357,    -1,   194,   533,    -1,   233,   359,
      -1,   357,   357,    -1,   369,   357,   357,    -1,   367,   374,
     366,    -1,    40,   357,   357,    -1,   357,   357,    -1,   112,
     357,   357,    -1,   359,    -1,   313,   368,   374,    -1,     5,
       4,     4,    -1,   303,    -1,    71,   537,    -1,   169,     4,
      -1,   246,     4,    -1,   255,   357,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    55,    -1,   141,    -1,   247,    -1,
      91,    -1,   150,   539,    -1,   260,   540,    -1,    40,   357,
     357,    -1,   194,   357,   357,    -1,   112,    -1,   265,   112,
      -1,    40,   357,   357,    -1,   194,   357,   357,    -1,   112,
      -1,   265,   112,    -1,   189,    -1,    13,    -1,   203,    -1,
      34,    -1,   108,    -1,    62,     5,    -1,   283,   367,    -1,
     307,     4,     4,     4,    -1,   357,    -1,   357,    98,    -1,
     194,   545,    -1,   294,   357,    -1,   294,   357,    98,    -1,
      40,    -1,   357,    -1,   112,    -1,    26,   547,    -1,   125,
     549,    -1,   207,   559,    -1,   113,   560,    -1,   221,     5,
      -1,   121,     5,   384,    -1,    62,     5,   384,    -1,   274,
       4,   384,    -1,   247,    88,   548,    -1,   121,     5,   384,
      -1,    62,     5,   384,    -1,   274,     4,   384,    -1,   550,
      -1,   157,   550,    -1,   284,   551,    -1,   271,   552,    -1,
     118,    88,   553,    -1,   192,   554,    -1,   247,   157,   556,
      -1,   247,    88,   557,    -1,   244,   558,    -1,   121,     5,
      -1,    62,     5,    -1,   274,     4,    -1,   121,     5,    -1,
      62,     5,    -1,   274,     4,    -1,   121,     5,    -1,    62,
       5,    -1,   274,     4,    -1,   121,     5,    -1,    62,     5,
      -1,   274,     4,    -1,   157,   555,    -1,   121,     5,     4,
      -1,    62,     5,     4,    -1,   274,     4,     4,    -1,   121,
       5,    -1,    62,     5,    -1,   274,     4,    -1,   121,     5,
      -1,    62,     5,    -1,   274,     4,    -1,   121,     5,    -1,
      62,     5,    -1,   274,     4,    -1,   121,     5,    -1,    62,
       5,    -1,   274,     4,    -1,   121,     5,   384,    -1,    62,
       5,   384,    -1,   274,     4,   384,    -1,   121,     5,     5,
     384,    -1,   562,     4,     4,   357,   357,   362,    -1,   562,
       4,    -1,   100,    -1,    51,    -1,   296,    -1,   137,    -1,
     109,    -1,    -1,     4,   357,   357,   357,   357,    -1,   206,
      -1,   206,     4,   357,   357,   357,   357,    -1,   125,   271,
     564,    -1,     4,    -1,     4,     4,    -1,   357,   367,    -1,
     357,   357,    -1,   294,   357,   357,    -1,   368,   374,   375,
      -1,    16,   569,    -1,   245,     4,    -1,   243,   568,    -1,
      23,   567,    -1,     4,     4,    -1,     4,     5,    -1,   287,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   287,
       4,     5,    -1,     4,    -1,     4,   368,   374,    -1,     4,
       6,   368,   374,    -1,   232,    -1,   357,   357,    -1,   357,
     357,    12,   357,   357,    -1,   357,   357,    12,   369,   357,
     357,    -1,   357,   357,    12,   367,   374,   366,    -1,   294,
     572,    -1,   124,    -1,   124,   357,    -1,   357,   357,    -1,
     357,   357,    12,   357,   357,    -1,   357,   357,    12,   369,
     357,   357,    -1,   357,   357,    12,   367,   374,   366,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   461,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   516,   517,   520,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   534,
     536,   537,   538,   539,   541,   542,   543,   544,   547,   548,
     549,   550,   551,   554,   555,   558,   559,   560,   563,   566,
     569,   572,   584,   591,   598,   606,   607,   608,   609,   610,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   643,   644,
     647,   648,   649,   650,   651,   652,   655,   656,   657,   660,
     661,   662,   663,   664,   665,   666,   667,   670,   671,   672,
     673,   674,   677,   678,   679,   680,   681,   682,   683,   684,
     687,   688,   689,   692,   693,   694,   695,   698,   699,   700,
     703,   704,   705,   708,   709,   710,   713,   714,   715,   716,
     717,   718,   719,   720,   723,   724,   727,   728,   729,   730,
     731,   732,   735,   736,   737,   740,   741,   742,   743,   744,
     745,   748,   749,   750,   751,   752,   753,   754,   755,   759,
     760,   763,   764,   767,   768,   771,   772,   776,   777,   778,
     779,   780,   781,   782,   783,   786,   787,   790,   791,   792,
     794,   796,   797,   798,   800,   804,   805,   808,   809,   811,
     814,   816,   822,   823,   824,   827,   828,   829,   832,   833,
     834,   835,   836,   837,   838,   844,   845,   848,   849,   850,
     851,   852,   855,   856,   857,   860,   861,   866,   871,   878,
     880,   882,   883,   884,   887,   889,   892,   893,   896,   897,
     898,   899,   900,   903,   905,   907,   912,   917,   920,   921,
     924,   925,   926,   933,   934,   935,   936,   939,   940,   943,
     944,   947,   948,   951,   953,   957,   958,   961,   963,   964,
     965,   966,   969,   970,   972,   973,   974,   977,   979,   981,
     982,   984,   986,   988,   990,   994,   997,   998,   999,  1002,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1025,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1044,  1046,  1047,  1050,
    1051,  1052,  1053,  1054,  1055,  1056,  1057,  1060,  1061,  1062,
    1065,  1068,  1069,  1071,  1073,  1074,  1075,  1076,  1077,  1078,
    1085,  1086,  1089,  1090,  1091,  1094,  1095,  1098,  1101,  1102,
    1104,  1108,  1109,  1110,  1113,  1117,  1119,  1120,  1121,  1122,
    1123,  1124,  1125,  1126,  1127,  1130,  1131,  1132,  1135,  1136,
    1139,  1141,  1149,  1151,  1153,  1157,  1158,  1160,  1163,  1166,
    1167,  1171,  1173,  1176,  1181,  1182,  1183,  1187,  1188,  1189,
    1192,  1193,  1194,  1197,  1198,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1207,  1208,  1209,  1211,  1212,  1215,  1216,  1219,
    1220,  1221,  1222,  1225,  1226,  1229,  1231,  1234,  1238,  1239,
    1240,  1242,  1244,  1248,  1249,  1250,  1253,  1254,  1255,  1256,
    1257,  1258,  1259,  1262,  1265,  1266,  1267,  1270,  1271,  1272,
    1273,  1274,  1275,  1278,  1279,  1280,  1281,  1282,  1283,  1284,
    1287,  1288,  1291,  1292,  1295,  1296,  1299,  1300,  1303,  1304,
    1305,  1308,  1309,  1312,  1313,  1316,  1319,  1327,  1328,  1331,
    1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,
    1342,  1343,  1344,  1345,  1346,  1347,  1350,  1353,  1354,  1357,
    1358,  1359,  1360,  1363,  1364,  1365,  1366,  1369,  1370,  1371,
    1372,  1373,  1374,  1377,  1378,  1379,  1380,  1381,  1382,  1384,
    1385,  1390,  1391,  1394,  1396,  1398,  1401,  1402,  1403,  1404,
    1405,  1406,  1409,  1411,  1413,  1415,  1416,  1418,  1420,  1422,
    1424,  1426,  1429,  1430,  1431,  1432,  1433,  1434,  1436,  1437,
    1438,  1441,  1444,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1461,  1463,  1465,  1467,  1468,  1469,  1470,  1471,  1474,  1475,
    1476,  1477,  1478,  1479,  1480,  1482,  1484,  1485,  1486,  1489,
    1490,  1491,  1492,  1493,  1494,  1496,  1497,  1498,  1501,  1502,
    1503,  1504,  1505,  1508,  1511,  1514,  1517,  1520,  1523,  1526,
    1529,  1532,  1537,  1540,  1543,  1546,  1549,  1552,  1555,  1558,
    1561,  1564,  1567,  1572,  1575,  1578,  1581,  1584,  1587,  1590,
    1593,  1596,  1601,  1603,  1605,  1607,  1609,  1611,  1616,  1618,
    1620,  1624,  1627,  1630,  1633,  1636,  1639,  1642,  1645,  1648,
    1651,  1654,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1667,
    1669,  1670,  1671,  1674,  1675,  1676,  1677,  1678,  1679,  1681,
    1682,  1683,  1686,  1688,  1690,  1691,  1693,  1695,  1699,  1700,
    1703,  1704,  1705,  1708,  1715,  1716,  1717,  1718,  1719,  1720,
    1721,  1724,  1732,  1733,  1734,  1735,  1737,  1739,  1740,  1740,
    1741,  1742,  1743,  1744,  1745,  1746,  1748,  1749,  1751,  1754,
    1757,  1758,  1759,  1762,  1765,  1768,  1769,  1773,  1776,  1779,
    1782,  1786,  1791,  1796,  1798,  1799,  1801,  1802,  1804,  1806,
    1808,  1810,  1811,  1813,  1815,  1819,  1824,  1826,  1828,  1830,
    1832,  1834,  1836,  1838,  1840,  1842,  1844,  1847,  1848,  1850,
    1852,  1853,  1855,  1857,  1858,  1859,  1861,  1863,  1864,  1865,
    1867,  1868,  1869,  1872,  1876,  1879,  1882,  1886,  1891,  1897,
    1898,  1899,  1901,  1902,  1906,  1908,  1909,  1910,  1913,  1916,
    1919,  1921,  1923,  1924,  1929,  1932,  1933,  1934,  1937,  1941,
    1942,  1944,  1945,  1946,  1948,  1949,  1951,  1952,  1957,  1959,
    1960,  1962,  1963,  1964,  1965,  1966,  1967,  1969,  1971,  1973,
    1974,  1976,  1977,  1979,  1981,  1982,  1983,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,  1991,  1993,  1995,  1996,  1997,  1998,
    2000,  2001,  2002,  2003,  2004,  2006,  2007,  2008,  2009,  2010,
    2011,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,  2037,  2038,  2039,  2040,  2041,  2042,  2050,  2057,
    2066,  2075,  2082,  2089,  2097,  2105,  2112,  2117,  2122,  2127,
    2132,  2137,  2142,  2148,  2158,  2168,  2178,  2185,  2195,  2205,
    2214,  2226,  2239,  2244,  2247,  2249,  2251,  2256,  2260,  2263,
    2265,  2267,  2270,  2271,  2272,  2273,  2274,  2275,  2276,  2279,
    2280,  2281,  2282,  2283,  2284,  2286,  2288,  2290,  2292,  2294,
    2296,  2299,  2300,  2301,  2302,  2304,  2307,  2308,  2310,  2312,
    2313,  2314,  2316,  2319,  2322,  2323,  2325,  2326,  2327,  2328,
    2330,  2331,  2332,  2333,  2334,  2336,  2338,  2339,  2341,  2344,
    2345,  2346,  2348,  2350,  2351,  2352,  2353,  2355,  2358,  2362,
    2363,  2364,  2365,  2368,  2371,  2373,  2374,  2375,  2376,  2378,
    2381,  2382,  2384,  2385,  2386,  2387,  2388,  2390,  2391,  2393,
    2396,  2397,  2398,  2399,  2400,  2402,  2404,  2405,  2406,  2407,
    2409,  2411,  2412,  2413,  2414,  2415,  2416,  2418,  2419,  2421,
    2424,  2425,  2426,  2427,  2430,  2431,  2434,  2435,  2438,  2439,
    2442,  2455,  2456,  2460,  2461,  2465,  2468,  2473,  2480,  2482,
    2485,  2487,  2490,  2494,  2495,  2496,  2497,  2498,  2499,  2500,
    2504,  2505,  2508,  2509,  2510,  2511,  2512,  2513,  2514,  2515,
    2518,  2519,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,
    2528,  2531,  2532,  2535,  2536,  2536,  2539,  2540,  2541,  2542,
    2545,  2546,  2549,  2550,  2553,  2557,  2558,  2558,  2561,  2562,
    2565,  2568,  2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,
    2585,  2586,  2587,  2588,  2591,  2593,  2594,  2599,  2601,  2602,
    2603,  2604,  2607,  2608,  2613,  2617,  2618,  2619,  2622,  2623,
    2628,  2629,  2632,  2634,  2635,  2636,  2641,  2643,  2649,  2650,
    2651,  2652,  2655,  2656,  2659,  2661,  2663,  2664,  2667,  2669,
    2670,  2671,  2674,  2675,  2678,  2679,  2680,  2683,  2684,  2685,
    2688,  2689,  2690,  2691,  2692,  2695,  2696,  2697,  2700,  2701,
    2702,  2703,  2704,  2707,  2709,  2711,  2713,  2716,  2718,  2720,
    2723,  2724,  2725,  2726,  2727,  2728,  2729,  2730,  2731,  2734,
    2735,  2736,  2739,  2740,  2741,  2744,  2745,  2746,  2749,  2750,
    2751,  2754,  2755,  2756,  2757,  2760,  2761,  2762,  2765,  2766,
    2767,  2770,  2771,  2772,  2775,  2776,  2777,  2780,  2782,  2784,
    2788,  2792,  2794,  2799,  2802,  2803,  2804,  2805,  2808,  2809,
    2811,  2812,  2814,  2817,  2818,  2819,  2822,  2823,  2826,  2828,
    2829,  2830,  2831,  2834,  2835,  2836,  2839,  2840,  2841,  2844,
    2845,  2850,  2854,  2861,  2862,  2864,  2869,  2871,  2874,  2875,
    2876,  2877,  2879,  2884
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
  "CURSOR_", "CUT_", "CMYK_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_",
  "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_",
  "DETECTOR_", "DIAMOND_", "DIM_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FROM_",
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_",
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HAS_",
  "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_", "LITTLE_",
  "LITTLEENDIAN_", "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_",
  "MOSAIC_", "MODE_", "MOTION_", "MOVE_", "NAME_", "NAN_", "NATIVE_",
  "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_", "NONZERO_", "NOW_",
  "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPAQUE_",
  "OPTION_", "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_",
  "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_",
  "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_",
  "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_",
  "QUERY_", "RADIAL_", "RADIUS_", "RANGE_", "REGION_", "REPLACE_",
  "RESAMPLE_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_",
  "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_",
  "SCIENTIFIC_", "SCOPE_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_",
  "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_",
  "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_",
  "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TRANSPARENT_", "TRANSPARENCY_", "TO_",
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
     605,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   355,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   357,   357,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   360,   360,
     360,   360,   360,   361,   361,   362,   362,   362,   363,   364,
     365,   366,   366,   366,   366,   367,   367,   367,   367,   367,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   369,
     370,   370,   370,   370,   370,   370,   371,   371,   371,   372,
     372,   372,   372,   372,   372,   372,   372,   373,   373,   373,
     373,   373,   374,   374,   374,   374,   374,   374,   374,   374,
     375,   375,   375,   376,   376,   376,   376,   377,   377,   377,
     378,   378,   378,   379,   379,   379,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   381,   382,   382,   382,   382,
     382,   382,   383,   383,   383,   384,   384,   384,   384,   384,
     384,   385,   385,   385,   385,   385,   385,   385,   385,   386,
     386,   387,   387,   388,   388,   389,   389,   390,   390,   390,
     390,   390,   390,   390,   390,   391,   391,   392,   392,   392,
     392,   392,   392,   392,   392,   393,   393,   394,   394,   394,
     394,   394,   395,   395,   395,   396,   396,   396,   397,   397,
     397,   397,   397,   397,   397,   398,   398,   399,   399,   399,
     399,   399,   400,   400,   400,   401,   401,   401,   401,   402,
     402,   402,   402,   402,   403,   403,   404,   404,   405,   405,
     405,   405,   405,   406,   406,   406,   406,   406,   407,   407,
     408,   408,   408,   409,   409,   409,   409,   410,   410,   411,
     411,   412,   412,   413,   413,   414,   414,   414,   414,   414,
     414,   414,   415,   415,   415,   415,   415,   416,   416,   416,
     416,   416,   416,   416,   416,   417,   418,   418,   418,   419,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   421,
     421,   421,   421,   421,   421,   421,   421,   422,   422,   422,
     423,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     425,   425,   426,   426,   426,   427,   427,   428,   429,   429,
     429,   430,   430,   430,   431,   432,   432,   432,   432,   432,
     432,   432,   432,   432,   432,   433,   433,   433,   434,   434,
     435,   435,   436,   436,   436,   437,   437,   437,   438,   439,
     439,   440,   440,   440,   441,   441,   441,   442,   442,   442,
     443,   443,   443,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   445,   445,   446,
     446,   446,   446,   447,   447,   448,   448,   448,   449,   449,
     449,   449,   449,   450,   450,   450,   451,   451,   451,   451,
     451,   451,   451,   452,   453,   453,   453,   454,   454,   454,
     454,   454,   454,   455,   455,   455,   455,   455,   455,   455,
     456,   456,   457,   457,   458,   458,   459,   459,   460,   460,
     460,   461,   461,   462,   462,   463,   463,   464,   464,   465,
     465,   465,   465,   465,   465,   465,   465,   465,   465,   465,
     465,   465,   465,   465,   465,   465,   466,   467,   467,   468,
     468,   468,   468,   469,   469,   469,   469,   470,   470,   470,
     470,   470,   470,   471,   471,   471,   471,   471,   471,   471,
     471,   472,   472,   473,   473,   473,   474,   474,   474,   474,
     474,   474,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   477,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   481,   481,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   483,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   489,   489,   489,   489,   489,   489,   490,   490,
     491,   491,   491,   492,   493,   493,   493,   493,   493,   493,
     493,   494,   495,   495,   495,   495,   495,   495,   496,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   498,   498,   498,   498,   498,   498,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   500,   500,   500,   500,   501,   502,
     502,   502,   503,   503,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   504,   504,   504,   504,
     505,   505,   505,   505,   506,   506,   507,   507,   508,   508,
     509,   510,   510,   510,   510,   510,   511,   511,   512,   512,
     512,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     514,   514,   515,   515,   515,   515,   515,   515,   515,   515,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   517,   517,   518,   519,   518,   520,   520,   520,   520,
     521,   521,   522,   522,   523,   524,   525,   524,   526,   526,
     527,   528,   529,   529,   529,   529,   529,   529,   529,   529,
     530,   530,   530,   530,   531,   531,   531,   531,   531,   531,
     531,   531,   532,   532,   532,   533,   533,   533,   534,   534,
     534,   534,   535,   535,   535,   535,   536,   536,   537,   537,
     537,   537,   538,   538,   539,   539,   539,   539,   540,   540,
     540,   540,   541,   541,   542,   542,   542,   543,   543,   543,
     544,   544,   544,   544,   544,   545,   545,   545,   546,   546,
     546,   546,   546,   547,   547,   547,   547,   548,   548,   548,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   550,
     550,   550,   551,   551,   551,   552,   552,   552,   553,   553,
     553,   554,   554,   554,   554,   555,   555,   555,   556,   556,
     556,   557,   557,   557,   558,   558,   558,   559,   559,   559,
     560,   561,   561,   561,   562,   562,   562,   562,   563,   563,
     563,   563,   563,   564,   564,   564,   565,   565,   566,   566,
     566,   566,   566,   567,   567,   567,   568,   568,   568,   569,
     569,   569,   570,   571,   571,   571,   571,   571,   572,   572,
     572,   572,   572,   572
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
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     1,     2,     1,     2,     2,     6,     2,     4,     2,
       2,     2,     3,     2,     2,     1,     2,     1,     2,     4,
       5,     2,     3,     5,     6,     1,     1,     1,     7,    11,
       8,    12,     1,     2,     2,     1,     1,     2,     2,     2,
       2,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     3,     2,     2,     2,     6,
      10,     1,     2,     1,     6,    10,     1,     2,     2,     2,
       2,     2,     2,    13,    13,    12,    12,     1,     0,     1,
       1,     4,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     3,     4,     0,     6,     8,     2,     3,
       3,     3,     0,     4,     4,     4,     4,     3,     3,     1,
       3,     5,     4,     4,     3,     2,     0,     1,     1,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     2,     4,     9,     2,
       2,     2,     1,     3,     2,     2,     1,     2,     8,     2,
       1,     2,     1,     2,     1,     4,     9,     2,     1,     1,
       1,     1,     2,     1,     1,     2,     1,     0,     2,     2,
       1,     0,     2,     2,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     4,
       5,     0,     2,     1,     5,     2,     2,     1,     1,     1,
       2,     1,     2,     1,     1,     0,     1,     1,     0,     1,
       5,     6,     3,     6,     3,     1,     3,     1,     1,     1,
       3,     6,     7,     5,     1,     1,     4,     5,     1,     3,
       0,     1,     2,     1,     4,     1,     2,     1,     2,     3,
       2,     1,     2,     1,     4,     2,     1,     1,     3,     1,
       2,     3,     2,     0,     1,     1,     4,     2,     0,     1,
       3,     4,     4,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     1,     2,     2,     2,     2,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       2,     0,     1,     2,     1,     6,     5,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     2,     3,     1,     2,     2,     4,     6,     1,
      10,     1,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     4,     4,     4,     3,     3,     5,     4,     4,
       4,     3,     3,     3,     3,     2,     2,     4,     3,     3,
       3,     3,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     2,     3,     3,     3,     2,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     3,     2,
       2,     1,     3,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     4,     4,     4,     4,     5,     4,     6,     7,
       4,     4,     5,     5,     5,     5,     5,     5,     7,     5,
       5,     6,     4,     4,     4,     4,     4,     6,     4,     4,
       5,     5,     5,     5,     5,     6,     5,     7,     8,     5,
       5,     6,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     4,     4,     3,     5,     4,     4,     2,     3,
       6,     6,     1,     1,     1,     2,     2,     2,     3,     3,
       2,    12,     2,     2,     1,     3,     4,     2,     0,     3,
       1,     1,     2,     2,     2,     2,     2,     4,     4,     4,
       3,     4,     5,     8,     6,     4,     9,     6,     7,    10,
      11,    12,     9,     5,     4,     6,     3,     5,     5,     6,
       5,     4,     9,    10,    11,     9,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     7,     7,     2,     4,     4,
       4,     4,     5,     4,     4,     5,     5,     3,     4,     4,
       4,     4,     7,     9,     6,    10,    11,    12,     9,     3,
       2,     3,     5,     7,     4,     3,     3,     6,     7,     7,
       4,     4,     4,     9,     4,     3,     4,     7,     7,     2,
       3,     3,     3,     4,     2,     2,     4,    10,     3,     1,
       3,     2,     2,     2,     2,     3,     5,     4,     5,     2,
       7,     3,     2,     2,     3,     2,     2,     2,     3,     2,
       3,     4,     3,     3,     6,     4,     2,     3,     2,     2,
       4,     3,     3,     2,     3,     1,     2,     1,     2,     2,
       2,     1,     1,     1,     1,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     2,     3,     5,     7,
       7,     6,     6,     6,     6,     5,     6,     6,     6,     6,
       6,     6,     6,    11,     7,     7,     7,     9,     9,    10,
      12,    12,     2,     2,     3,     4,     4,     4,     2,     4,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     3,     3,     8,     6,    10,     7,     7,
       5,     2,     2,     3,     4,     5,     3,     5,     5,     3,
       4,     5,     5,     5,     3,     5,     2,     3,     3,     5,
       3,     3,     3,     4,     5,     5,     3,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     3,     6,     5,     5,     2,     3,     3,     5,     6,
       3,     2,     2,     3,     2,     3,     2,     3,     5,     6,
       2,     2,     2,     1,     4,     4,     1,     2,     2,     2,
       2,     2,     2,     2,     3,     2,     3,     2,     3,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     0,     1,
       0,     0,     1,     1,     1,     1,     7,     8,     2,     4,
       2,     4,     6,     2,     1,     1,     3,     3,     1,     4,
       2,     1,     3,     3,     4,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     2,     1,     3,     1,     3,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     1,     2,     2,     3,     2,     2,     2,     2,
       1,     1,     1,     1,     4,     2,     3,     3,     2,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     1,     3,
       3,     1,     2,     2,     2,     2,     9,     6,     1,     1,
       1,     1,     2,     2,     3,     3,     1,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     4,
       1,     2,     2,     2,     3,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     3,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     1,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     2,     2,     3,     1,
       3,     4,     1,     2,     5,     6,     6,     2,     1,     2,
       2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   305,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1041,     0,
       0,     0,     0,     0,     0,     0,     0,  1041,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1228,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   242,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   271,   273,
       0,     0,    11,   144,   146,   139,   140,   141,   145,   142,
     143,   276,    12,     0,   288,     0,     0,     0,    13,     0,
       0,     0,     0,   312,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   319,   152,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   381,   395,
       0,   401,     0,     0,     0,     0,     0,     0,     0,   344,
       0,   473,     0,     0,     0,     0,     0,  1041,     0,   352,
       0,   356,     0,     0,     0,   360,     0,   362,     0,   364,
       0,     0,   508,   368,    19,     0,   514,    20,   519,     0,
     537,   522,   523,   524,   525,   539,   527,   528,   532,   529,
       0,   531,   533,     0,     0,    21,    23,     0,   554,     0,
       0,     0,   559,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   713,    27,     0,     0,     0,     0,     0,
       0,   714,    28,     0,    29,  1045,  1042,  1043,  1044,     0,
     136,  1102,     0,   130,     0,     0,     0,    31,     0,  1113,
    1112,  1111,  1110,    33,     0,     0,     0,     0,     0,   152,
       0,    34,     0,  1131,     0,  1128,    35,     0,     0,     0,
       0,    38,     0,    37,    36,     0,     0,     0,     0,    41,
       0,     0,  1160,    42,     0,     0,     0,     0,     0,    43,
    1224,  1223,  1227,  1226,  1225,    45,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,    47,     0,     0,  1230,
      49,     0,     0,    51,     0,     0,     0,     0,   152,    52,
    1252,    53,     0,     0,    54,     1,     4,     5,   225,     0,
     217,     0,     0,   219,     0,   227,   220,   224,   235,   236,
     221,   237,     0,   223,   245,   246,   244,   243,     0,     0,
       0,   250,   258,   261,   260,   259,   257,   249,   254,   255,
     256,   248,     0,     0,     0,     0,     0,     0,   253,    10,
       0,     0,     0,   272,     0,   277,     0,   287,   278,   289,
     279,   290,   280,   301,   281,     0,     0,   282,     0,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   308,     0,     0,     0,     0,     0,   154,
     159,   153,   155,   158,   157,   156,     0,     0,   325,    63,
      64,    65,    66,    67,    59,    60,    61,    68,    62,     0,
     330,     0,   377,   373,   369,   370,   374,   371,   376,   331,
     380,   332,   293,   385,   389,   384,   296,   295,   294,     0,
       0,   333,   396,   335,     0,   334,     0,   403,   336,   415,
     407,   418,   408,   409,   411,     0,   413,   414,   152,   337,
       0,     0,   338,     0,     0,   152,   339,   427,   152,   425,
     340,   428,   342,   152,   429,   341,     0,   152,     0,   343,
     447,     0,   445,   463,     0,     0,     0,   451,   443,     0,
     453,   468,   456,   345,   474,   475,   346,     0,     0,     0,
     438,     0,   349,   434,   435,     0,   350,   351,     0,   482,
     476,   481,   477,   478,   479,   480,   354,   355,   483,   357,
       0,   484,   485,   486,   359,   492,   487,   488,   490,   361,
     498,   500,   502,   504,   497,   499,   506,   363,     0,     0,
     511,     0,   367,   152,   513,     0,   520,   538,   521,   540,
     541,   542,   526,   543,   545,   544,   546,   530,   534,   551,
       0,     0,     0,     0,   547,   535,     0,     0,   556,   555,
       0,     0,     0,     0,    25,     0,     0,   566,     0,   567,
       0,     0,     0,     0,     0,   568,     0,   712,     0,   569,
       0,   570,     0,     0,   571,     0,   717,   716,   715,     0,
     720,     0,     0,     0,   892,     0,     0,     0,   724,   728,
     730,   731,     0,     0,     0,     0,   829,     0,     0,     0,
     865,     0,     0,     0,     0,     0,     0,     0,   867,     0,
       0,     0,    30,   137,   138,  1108,  1103,  1109,   133,   134,
     132,   135,   131,  1104,     0,  1106,  1107,    32,     0,     0,
       0,     0,  1120,  1121,     0,   152,     0,  1118,  1115,     0,
       0,     0,   152,  1138,  1141,  1139,  1140,  1132,  1133,  1134,
    1135,     0,     0,     0,    40,  1157,  1158,     0,  1165,  1167,
    1166,  1162,  1163,  1161,     0,     0,     0,     0,  1168,     0,
    1171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1169,  1180,     0,     0,     0,  1170,  1172,  1222,  1155,
    1156,  1154,   206,     0,   209,   202,     0,   211,   203,     0,
     213,   204,  1153,  1152,   205,   207,   208,     0,     0,   201,
       0,     0,     0,     0,  1236,  1249,  1239,     0,     0,  1242,
       0,     0,  1241,  1240,   160,  1258,     0,  1257,  1253,   226,
     222,     0,   231,     0,   228,     0,   247,   147,   150,   151,
     149,   148,   262,   263,   264,   252,   251,   266,   268,   267,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   152,
       0,   309,    94,    91,    92,    93,   152,   311,   310,     0,
       0,     0,     0,     0,     0,     0,   324,     0,   320,   318,
     317,   329,   372,     0,     0,   375,   390,   391,   386,   387,
     392,   394,   393,   388,   297,   298,   383,   382,   398,   397,
       0,   402,   416,   417,   406,   419,   412,   410,   405,     0,
       0,   152,   152,   160,   160,   160,   152,     0,     0,   152,
     464,   446,   457,     0,   448,    78,   459,     0,     0,   450,
     452,   152,   469,     0,     0,   455,     0,     0,     0,   440,
       0,     0,     0,     0,   940,   942,   941,     0,  1034,     0,
    1013,     0,  1016,     0,     0,  1036,  1038,     0,  1029,   353,
       0,   489,   491,   501,   494,   503,   495,   505,   496,   507,
     493,     0,     0,   512,   509,   510,   160,   536,   548,   549,
     550,   552,     0,   565,   553,     0,     0,     0,     0,     0,
       0,   173,   173,   167,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,   170,   167,     0,     0,   167,     0,
       0,     0,     0,     0,   607,   631,     0,     0,     0,   603,
       0,     0,     0,     0,   173,   167,     0,     0,   708,     0,
     718,   719,   152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   777,     0,     0,     0,
       0,     0,   800,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   819,     0,     0,   824,   825,     0,     0,     0,
     845,   847,   846,     0,   849,     0,     0,   856,   858,   859,
     893,     0,     0,     0,     0,   722,   723,   934,   932,   937,
     936,   935,   933,   938,     0,   727,     0,   732,     0,   931,
       0,   733,   734,   735,   736,     0,     0,     0,     0,     0,
     831,     0,     0,   832,  1055,     0,  1058,  1054,     0,     0,
       0,   833,   866,   834,  1073,  1078,  1075,  1074,  1072,  1079,
    1076,  1070,  1077,  1071,  1080,     0,     0,   839,     0,     0,
       0,  1086,     0,  1088,   842,     0,  1090,   843,   863,     0,
       0,     0,   868,   869,   870,  1105,  1119,     0,     0,  1126,
    1122,     0,     0,     0,  1117,  1116,  1130,  1129,     0,     0,
    1146,     0,     0,  1142,     0,  1150,     0,     0,  1143,     0,
    1164,   195,   195,     0,   195,     0,  1190,     0,  1189,  1181,
       0,     0,     0,     0,  1185,     0,     0,     0,  1188,     0,
       0,     0,     0,     0,  1183,  1191,     0,     0,     0,  1182,
     195,   195,   195,     0,   210,   212,   214,     0,   215,     0,
      56,     0,  1232,     0,  1237,     0,   152,  1243,  1244,     0,
    1246,  1247,     0,   161,   162,  1238,  1259,  1260,     0,   218,
       0,   232,     0,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,   303,   152,     0,     0,     0,
       0,   152,     0,   323,     0,   322,   379,   378,     0,     0,
       0,   152,     0,   160,   424,   422,   426,   430,     0,     0,
       0,   160,     0,    82,    81,   465,   449,     0,   460,   462,
     163,     0,     0,   347,     0,     0,    56,     0,   439,     0,
       0,   952,     0,     0,     0,     0,     0,     0,   966,     0,
       0,     0,     0,     0,     0,   983,   984,     0,     0,     0,
       0,     0,   995,     0,  1001,  1002,  1004,  1006,     0,  1010,
    1021,  1022,  1023,     0,  1025,  1030,  1032,  1033,  1031,   939,
       0,  1012,     0,  1011,   951,     0,     0,  1017,     0,  1019,
       0,  1018,  1039,  1020,  1027,     0,     0,   365,     0,     0,
     563,   564,     0,   561,   557,     0,   173,   173,   173,   174,
     175,   575,   576,   169,   168,     0,   173,   173,   173,     0,
     581,   591,   170,   173,   173,   173,   171,   172,   173,   173,
       0,   173,   173,     0,   170,     0,   604,     0,     0,     0,
     630,     0,   629,     0,     0,   606,     0,   605,     0,     0,
       0,     0,   170,   170,   167,     0,     0,   167,     0,     0,
       0,   173,   173,   704,     0,   173,   173,   709,     0,   186,
     187,   188,   189,   190,   191,     0,    86,    87,    85,   740,
       0,     0,     0,     0,     0,     0,   886,   884,   879,     0,
     889,   873,   890,   876,   888,   882,   871,   885,   874,   872,
     891,   887,     0,     0,     0,   756,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   787,
       0,     0,     0,     0,     0,   799,   801,     0,     0,   806,
     805,     0,     0,   176,     0,     0,     0,   152,     0,   815,
       0,     0,     0,     0,   820,   821,   822,     0,     0,     0,
     828,   844,   848,   850,   853,   852,     0,     0,     0,   857,
     894,   896,     0,   895,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1040,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     729,     0,     0,     0,     0,   830,     0,   152,     0,  1050,
    1048,     0,     0,   152,  1053,   835,     0,     0,     0,   841,
       0,     0,  1091,   861,   862,     0,   864,  1125,  1127,  1124,
    1123,  1114,     0,     0,     0,  1147,     0,     0,  1151,  1159,
     197,   198,   199,   200,   196,  1174,  1173,     0,     0,     0,
    1176,  1175,   195,     0,     0,     0,  1184,     0,     0,     0,
       0,     0,  1201,     0,  1215,  1214,  1216,     0,     0,     0,
    1187,     0,     0,     0,  1186,  1196,  1195,  1197,  1193,  1192,
    1194,  1218,  1217,  1219,     0,     0,     0,  1234,  1235,     0,
     152,  1250,  1245,  1248,     0,     0,   152,     0,     0,     0,
     229,     0,     0,     0,     0,     0,     0,     0,     0,   300,
     299,     0,     0,   291,   302,   304,     0,   314,   316,   315,
     313,   152,   321,     0,     0,     0,   160,   152,     0,     0,
       0,     0,   444,   458,    80,    79,   467,     0,   461,   165,
     166,   164,   454,     0,   470,     0,     0,     0,   442,   436,
       0,     0,     0,     0,     0,     0,   152,   953,     0,   956,
       0,     0,   959,     0,   152,   964,     0,   967,   968,     0,
     970,   971,   972,     0,   976,     0,     0,   979,     0,   985,
       0,     0,     0,   990,   991,   989,     0,     0,     0,   996,
     997,     0,     0,  1000,  1003,  1005,  1007,     0,     0,  1024,
    1026,   943,  1035,   944,     0,     0,  1037,  1028,     0,     0,
     517,   518,     0,     0,   562,     0,   572,   573,   574,   173,
     578,   579,   580,     0,     0,     0,   585,   586,   167,     0,
       0,     0,   173,   592,   593,   594,   595,   597,   170,   600,
     601,     0,   173,     0,     0,     0,   170,   170,   167,     0,
       0,     0,     0,   628,     0,   632,     0,     0,     0,     0,
       0,   170,   170,   167,     0,     0,   167,     0,     0,     0,
       0,     0,   170,   170,   167,     0,     0,   167,     0,     0,
       0,     0,     0,   170,   170,   167,     0,     0,   167,     0,
       0,     0,     0,   170,   170,   167,     0,     0,     0,   170,
     608,   609,   610,   611,   613,     0,   616,   617,     0,   170,
       0,     0,   702,   703,   173,   706,   707,     0,   739,   152,
     741,     0,     0,   745,     0,     0,     0,     0,     0,   878,
     875,   881,   880,   877,   883,     0,   754,     0,     0,     0,
       0,   152,   761,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   778,   779,   780,     0,
     784,   781,   783,     0,     0,   789,   788,   790,   791,     0,
       0,     0,     0,     0,     0,   152,   152,   804,   182,   178,
     183,   177,   180,   179,   181,   810,   811,   812,     0,     0,
     814,   816,   152,   152,     0,   823,   826,   152,   152,   851,
     855,   897,   726,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1081,   922,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   923,
       0,     0,     0,     0,     0,   737,   738,   152,   160,     0,
     152,   152,  1056,  1057,     0,     0,   837,     0,   152,  1087,
    1089,   860,     0,  1144,  1145,  1148,  1149,   195,   195,   195,
    1220,  1199,  1198,  1200,  1203,  1202,  1206,  1205,  1207,  1204,
    1212,  1211,  1213,  1209,  1208,  1210,     0,     0,  1229,     0,
    1251,     0,   152,     0,  1254,     0,     0,   233,     0,   230,
       0,     0,     0,   269,     0,     0,     0,     0,   152,     0,
     306,   140,     0,   399,     0,   420,   160,   163,     0,     0,
     433,     0,   471,   472,     0,   437,     0,     0,     0,     0,
       0,   152,   954,   163,   163,   163,   152,   960,   163,   160,
     163,   163,   152,   973,   163,   163,   163,   152,   980,   163,
     163,   152,     0,   163,   152,   163,   163,   152,   163,   152,
    1014,  1015,     0,     0,   516,   558,     0,   577,   582,   583,
     584,     0,   588,   589,   590,   596,   173,   170,   602,   619,
     620,   621,   622,   623,     0,   625,   626,   170,     0,     0,
       0,   170,   170,   167,     0,     0,     0,     0,     0,     0,
     170,   170,   167,     0,     0,     0,     0,     0,     0,   170,
     170,   167,     0,     0,     0,   170,   173,   173,   173,   173,
     173,     0,   173,   173,     0,   170,   170,   173,   173,   173,
     173,   173,     0,   173,   173,     0,   170,   170,   682,   683,
     684,   685,   687,     0,   690,   691,     0,   170,   693,   694,
     695,   696,   697,     0,   699,   700,   170,   612,   170,     0,
     618,     0,     0,   705,     0,   742,   163,     0,     0,   163,
       0,     0,     0,   753,   163,   757,   758,   163,   760,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   782,   785,   786,     0,   163,     0,     0,     0,
     802,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1082,  1061,     0,
    1068,  1069,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   152,     0,     0,    83,     0,     0,
     929,   930,   160,     0,     0,     0,  1051,  1049,  1059,   836,
     838,   160,  1137,  1178,  1177,  1179,  1221,     0,  1231,  1261,
       0,     0,  1256,  1255,   234,     0,     0,     0,   274,     0,
       0,     0,   292,   163,   400,   404,   421,   423,     0,   431,
     466,     0,     0,     0,     0,     0,     0,   950,   955,   958,
     957,   961,   962,   963,   965,   969,   974,   975,   977,   978,
     981,   982,   986,   160,   163,   993,   160,   994,   998,   160,
    1008,   160,     0,     0,   515,     0,   587,   598,   173,   170,
     627,   173,   173,   173,   173,   173,     0,   173,   173,   170,
     173,   173,   173,   173,   173,     0,   173,   173,   170,   173,
     173,   173,   173,   173,     0,   173,   173,   170,   173,   642,
     643,   644,   645,   647,   170,   650,   651,     0,   173,   173,
     671,   672,   673,   674,   676,   170,   679,   680,     0,   173,
     686,   170,     0,   692,   170,   701,   614,   170,   710,   711,
     152,   744,     0,   163,   747,     0,   152,     0,   755,   759,
     152,     0,   766,   767,   768,   769,   773,   774,   770,   771,
     772,     0,     0,   163,   794,     0,   152,     0,     0,   807,
     163,     0,     0,   163,   163,     0,   854,     0,   184,   184,
       0,     0,   184,     0,   184,  1040,     0,     0,     0,     0,
       0,     0,     0,     0,  1060,     0,     0,   184,   184,     0,
       0,     0,     0,     0,     0,     0,     0,   924,     0,     0,
       0,  1040,    84,     0,   184,     0,  1084,   928,     0,     0,
       0,   216,  1263,  1262,     0,     0,   238,     0,     0,     0,
       0,   307,   432,   326,     0,   946,     0,   192,     0,   987,
     988,   992,   999,  1009,   358,   326,     0,   599,   624,   633,
     634,   635,   636,   637,   170,   639,   640,   173,   662,   663,
     664,   665,   666,   170,   668,   669,   173,   653,   654,   655,
     656,   657,   170,   659,   660,   173,   646,   173,   170,   652,
     675,   173,   170,   681,   688,   170,   698,   615,     0,   163,
     748,     0,     0,     0,     0,     0,   775,   776,   792,     0,
       0,     0,   803,   808,     0,   817,   818,   809,   163,     0,
     185,  1040,  1040,    83,     0,  1040,     0,  1040,   898,   152,
       0,  1063,     0,  1066,  1100,  1067,  1065,  1062,     0,  1040,
    1040,    83,     0,     0,  1040,  1040,     0,     0,  1040,   927,
     925,   926,   905,  1040,  1040,  1084,  1095,     0,  1052,   840,
       0,     0,     0,   240,     0,     0,     0,   327,   328,   348,
       0,     0,   193,   194,   948,   949,   366,     0,   173,   641,
     173,   670,   173,   661,   648,   173,   677,   173,   689,     0,
     743,   163,   163,     0,   163,     0,   163,   163,     0,   163,
       0,  1040,   911,   907,  1040,     0,   912,     0,   906,  1040,
       0,  1064,     0,   909,   908,  1040,     0,     0,   903,   901,
    1040,   152,   902,   904,   910,  1095,  1046,     0,     0,  1085,
    1093,  1136,     0,     0,     0,   270,   293,   296,   294,     0,
       0,   945,   152,   560,   638,   667,   658,   649,   678,   163,
     746,   752,     0,   765,   762,   793,   798,     0,   813,     0,
     916,   900,    83,     0,   914,  1101,     0,   899,    83,     0,
     915,     0,  1047,  1097,  1099,     0,  1092,     0,     0,   275,
       0,     0,     0,     0,   192,     0,   749,   152,   763,   795,
     827,  1040,     0,     0,  1040,     0,   163,  1098,  1094,   239,
       0,     0,     0,     0,     0,   947,   721,   152,   750,   764,
     152,   796,   918,     0,  1040,   917,     0,     0,   241,   286,
       0,   285,     0,   751,   797,    83,   919,    83,  1040,   284,
     283,  1040,  1040,   913,   921,   920
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1398,   172,   152,  1245,  2471,  2472,   423,   424,
     425,   426,   153,   154,   155,   683,   675,    91,   802,   446,
    1195,  1662,  1335,  1348,  1331,  1905,  2571,  1395,  2624,  1565,
     336,   755,   758,   761,   769,    63,   360,   366,   370,   373,
      68,   376,    75,   391,   387,   381,   398,    82,   403,    92,
      98,   408,   410,   412,   480,   856,  1631,   414,   417,   105,
     433,   156,   158,  2619,   174,   214,   469,   845,   471,   481,
     848,   853,   483,   485,   859,   488,   861,   499,   864,   866,
     502,   506,   510,   512,   515,   519,   546,   542,  1258,   533,
     884,   889,   881,  1246,   895,   536,   556,   559,   564,   569,
     577,   924,   926,   928,   930,   582,   934,   217,   584,  1732,
     235,   586,   588,   592,   597,   605,   244,  1324,   608,   252,
     617,  1340,   619,   625,   979,  1356,   974,  1773,  1362,  1360,
    1775,   975,  1365,  1367,   631,   634,   629,   254,   262,   264,
     672,  1056,  1422,  1045,  1520,  1949,  2265,  1061,  1054,   919,
    1299,  1303,  1311,  1313,  1933,   269,  1070,  1073,  1081,  2237,
    2238,  2239,  1934,  2606,  2607,  1104,  1107,  2679,  2680,  2676,
    2677,  2723,  2240,  2241,   277,   283,   291,   697,   692,   296,
     301,   303,   707,   714,  1133,  1138,   764,   752,   309,   313,
     721,   319,   728,  1570,   741,   742,  1169,  1164,  1576,  1154,
    1582,  1594,  1590,  1158,   746,   730,   325,   326,   340,  1182,
     343,   349,   779,   782,   776,   351,   354,   787
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2519
static const yytype_int16 yypact[] =
{
    5073,    43,   447,    19, -2519, -2519,  1024,  -157,   471,   873,
    1075,   246,  2953,   139,   133,  1080,    74,  5269,   640,   983,
   -2519,   133,   781,   205,   512,   276,    14,   535,   329,   488,
     505,   745,  1030,   110,   922,   542,   492,   329, -2519,   131,
     116,   991, -2519,   420,   595,   587, -2519,    61, -2519,    86,
    3828,   376,   138,   611,   463,  1070,   441,   726,   749,   154,
     739,     1,   591, -2519, -2519, -2519,   598,   184, -2519,   191,
      47,   133,   458,   160,   157, -2519,   754,   184, -2519, -2519,
      80,   184, -2519, -2519, -2519, -2519,   184, -2519, -2519, -2519,
   -2519, -2519, -2519,   127,   731,   770,   802,   519, -2519,   184,
    1374,   184,   184,   818,   184, -2519, -2519, -2519,   563, -2519,
   -2519, -2519, -2519,  3575, -2519, -2519, -2519, -2519, -2519, -2519,
     184, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519,  1436, -2519,   184, -2519,   809, -2519, -2519,
     133,   133,   133,   133,   133,   133, -2519, -2519,   133,   133,
     133,   133, -2519,   697, -2519,   750,  1508,   737,    22,   583,
     720,   382,  4257,   449,  4704,  2473,   866,  3575,  3140, -2519,
     831,   -96,   903,   828,   634,   532,   905,   329,   955, -2519,
     862, -2519,   710,   647,   278, -2519,    11, -2519,   493, -2519,
     397,   860,    56, -2519, -2519,  4773, -2519, -2519, -2519,   890,
     926, -2519, -2519, -2519, -2519,    67, -2519, -2519, -2519, -2519,
     604, -2519, -2519,  4773,  4313, -2519, -2519,   100, -2519,   965,
     976,    76, -2519,   184, -2519,   980,    49,   986,   384,   760,
    1008,    48, -2519, -2519, -2519,  1011,  1013,   133,   133,   184,
     184, -2519, -2519,  1018, -2519, -2519, -2519, -2519, -2519,   539,
     -78, -2519,  1023,    57,   184,  4773,   184, -2519,  1026, -2519,
   -2519, -2519, -2519, -2519,   184,  1205,   133,  1420,   184,  1436,
     184, -2519,  1025, -2519,  4858, -2519, -2519,   835,  1031,  1044,
     184, -2519,  1049, -2519, -2519,   -90,  1053,  4773,  1056, -2519,
    1227,   184,   973, -2519,   531,   960,  1607,   404,  1078, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519,  1088, -2519,   584,     2,
      27,   112,    42,   184,   184,    44, -2519,   184,   842,  1113,
   -2519,   184,   184, -2519,  1117,    13,    16,  1125,  1436, -2519,
   -2519, -2519,   849,   184, -2519, -2519, -2519, -2519, -2519,   184,
   -2519,  1143,  1148, -2519,   184,   857, -2519, -2519, -2519, -2519,
   -2519, -2519,   184, -2519, -2519,   184, -2519, -2519,   311,   311,
    1156, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519,   972,   184,   184,  1158,  1175,  1180, -2519, -2519,
     184,   184,   184, -2519,   184, -2519,  1182, -2519, -2519, -2519,
   -2519,   442, -2519,  1186, -2519,  4773,  1188, -2519,   184, -2519,
   -2519, -2519,   184,  1185,  1199,  1199,  4773,   184,   184,   184,
     184,   184,   184, -2519,   184,  3575,  1374,   184,   184, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519,  1374,   184, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,  1210,
   -2519,   948,   -16, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519,  -108, -2519, -2519, -2519,  1060, -2519,   431,   740,
     740, -2519, -2519, -2519,  1218, -2519,  1230, -2519, -2519,   -57,
   -2519,  1065, -2519, -2519, -2519,  1068, -2519, -2519,  1436, -2519,
     184,   184, -2519,  4773,  4773,  1436, -2519, -2519,  1436, -2519,
   -2519, -2519, -2519,  1436, -2519, -2519,  4773,  1436,   184, -2519,
   -2519,  4773, -2519,  1239,   466,  1057,    12, -2519, -2519,  1059,
    4773,    53, -2519, -2519, -2519, -2519, -2519,  1254,  1259,  1264,
   -2519,  1077, -2519, -2519, -2519,   184, -2519, -2519,   517, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
     397, -2519, -2519, -2519, -2519, -2519, -2519,  1100,  1104, -2519,
   -2519,  1226,  1228,  1241, -2519, -2519,  1090, -2519,   184,  1305,
    1087,  4858, -2519,  1436, -2519,  1313, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
    4773,  4773,  4773,  4773, -2519, -2519,  1317,   133, -2519, -2519,
    1326,  1337,  1176,   184, -2519,   111,  1283, -2519,  1369, -2519,
     203,  1287,  3870,    41,  1375, -2519,  1382, -2519,  1385, -2519,
     186, -2519,  1387,  1389, -2519,  1386, -2519, -2519, -2519,   184,
   -2519,  4858,  4636,  1695,   496,  1390,   453,  1298, -2519, -2519,
   -2519,  1384,   692,  1398,  1399,    51,   184,   475,   543,   509,
    4773,   133,  1858,   706,    23,   121,    31,    33, -2519,  1392,
    1397,  1416, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519,   184, -2519, -2519, -2519,   184,   184,
     184,   184, -2519, -2519,   184,  1436,   184, -2519,   184,  1374,
     184,  1425,  1436, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519,  1431,   572,   618, -2519, -2519, -2519,  1434, -2519, -2519,
   -2519, -2519,  1343, -2519,  1438,  1439,  1357,  1442, -2519,  1448,
   -2519,  1449,  1367,  1451,   426,   469,   465,   395,   555,  1453,
     680, -2519, -2519,  1455,  1457,  1460, -2519, -2519,  1461, -2519,
   -2519, -2519, -2519,  1462, -2519, -2519,  1463, -2519, -2519,  1464,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519,   184,   184, -2519,
     184,   698,   184,   184, -2519,  1761, -2519,   787,  1468, -2519,
     910,  1469, -2519, -2519,   -19,   184,   184, -2519,  1466, -2519,
   -2519,  1470,  1266,   184,  1471,   187, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
    1472,  1477,   184,   184,   184,  1478,   133,  1481,  1484,  1436,
    4773, -2519, -2519, -2519, -2519, -2519,  1436, -2519, -2519,   184,
     184,   184,  4773,   184,  1374,   184, -2519,   184, -2519, -2519,
   -2519, -2519, -2519,  1485,  1486, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,   449, -2519,
     184, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,  4773,
     184,  1436,  1436,   -19,   -19,   -19,  1436,  1374,   184,  1436,
   -2519, -2519, -2519,   184, -2519,    -4,  1331,  1487,  1500, -2519,
   -2519,  1436, -2519,  1359,  1360, -2519,  1519,  1521,  1520,   984,
     184,  4707,   608,   895, -2519, -2519, -2519,   184,   486,  1308,
   -2519,  1268, -2519,  1858,  1271,   490,  1252,    85, -2519, -2519,
     184, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519,   184,  1535, -2519, -2519, -2519,   -19, -2519, -2519, -2519,
   -2519, -2519,  4740, -2519, -2519,  1537,  1542,   184,  1547,  1551,
    1552,   312,   312,   -70,  1555,  1556,  1561,  1563,  1297,  1301,
    1565,  1569,  1570,    69,    69,   -70,  1572,  1574,   -70,  1576,
    1577,  5270,  1579,  1583, -2519, -2519,  1584,  1586,   290, -2519,
    1575,  1588,  1589,  1590,   312,   -70,  1594,  1599, -2519,  1600,
   -2519, -2519,  1436,   924,  1103,  1353,   -64,  1368,  1493,  1336,
     -29,  1602,     7,  1474,  1504,  1163,   566,  1580,    -1,  1377,
    1516,  1621,  1417,   195,    73,   516,   -56,  4773,  1858,  1592,
     709,  1383,  1418,  1629,    40, -2519, -2519,   418,  1631,  1635,
   -2519, -2519, -2519,  1639,  1433,   145,  1858,  1437, -2519, -2519,
   -2519,   133,  1644,  1646,   184, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519,    10, -2519,   933, -2519,   184, -2519,
     184, -2519, -2519, -2519, -2519,   184,   184,   184,   453,  4773,
   -2519,  1647,  1062, -2519, -2519,   184, -2519, -2519,   184,  4773,
     184, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519,   133,   184, -2519,   184,   453,
    1648, -2519,   184,   184, -2519,   133, -2519, -2519, -2519,   574,
    1650,  1651, -2519, -2519, -2519, -2519, -2519,   184,   184, -2519,
   -2519,  1374,   184,   184, -2519, -2519, -2519, -2519,  1653,   184,
   -2519,   184,  1539, -2519,   184, -2519,   184,  1546, -2519,  1655,
   -2519,  1242,  1242,   723,  1242,  1656, -2519,   752, -2519, -2519,
    1657,  1659,   771,  1661, -2519,  1662,  1663,  1669, -2519,   878,
     884,  1670,  1671,  1673, -2519, -2519,  1675,  1676,  1679, -2519,
    1242,  1242,  1242,   184, -2519, -2519, -2519,   184, -2519,   184,
     495,  4773, -2519,   184, -2519,  4858,  1436, -2519, -2519,  1680,
   -2519, -2519,  1681, -2519, -2519, -2519, -2519,  1654,  1420, -2519,
     184,  1677,   184,   184,   184,  1168, -2519,  1668,  1683,   184,
     184,    15,  1685,   133,   133, -2519,  1436,   184,  1684,  1688,
    1689,  1436,  4773, -2519,   184, -2519, -2519, -2519,   184,   184,
     184,  1436,  4773,   -19, -2519, -2519, -2519, -2519,  1374,   184,
    1690,   -19,   184,  1660,  1665,   503, -2519,  1691, -2519, -2519,
     479,  3207,   184, -2519,   184,  1693,  1700,   184, -2519,  1696,
    1157,  3575,  1465,   369,  1467,     6,  4773,   406, -2519,   347,
    1567,    52,   625,  1473,    54, -2519, -2519,    -6,  1536,   632,
    1587,   337,  1858,   -23, -2519,  1704,  1475, -2519,     9, -2519,
   -2519, -2519, -2519,  1858,  1502, -2519, -2519, -2519, -2519, -2519,
     184, -2519,   184, -2519, -2519,   184,   184, -2519,   184, -2519,
     184, -2519, -2519, -2519, -2519,  1515,   184, -2519,   184,   182,
   -2519, -2519,  1708,  1710, -2519,   184,   312,   312,   312, -2519,
   -2519, -2519, -2519, -2519, -2519,  1711,   312,   312,   312,   212,
   -2519, -2519,    69,   312,   312,   312, -2519, -2519,   312,   312,
    1712,   312,   312,  1713,    69,   694, -2519,  1714,  1715,  1718,
   -2519,   645, -2519,   659,   746, -2519,   848, -2519,  1446,  1725,
    1726,  1756,    69,    69,   -70,  1762,  1764,   -70,  1760,  1765,
    1766,   312,   312, -2519,  1767,   312,   312, -2519,  1769, -2519,
   -2519, -2519, -2519, -2519, -2519,   133, -2519, -2519, -2519,  3575,
    1403,   133,   184,  1414,  1330,   -26, -2519, -2519, -2519,   468,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519,  1770,   133,   184, -2519,   133,  1772,   184,  4773,
     133,  1423,  1532,  1540,   102,   119,  1543,   171,  1476,  1488,
    1775,  1777,  1778,  1336,  1780,  1783,  1784,  1490,  1491,  1084,
    1787,   133,   184,  1429,  1541, -2519, -2519,   133,  4773, -2519,
   -2519,  4773,   184,   104,  1790,   133,   184,  1436,   133, -2519,
    1797,  4773,  4773,   184, -2519, -2519, -2519,   133,   133,  4773,
   -2519, -2519, -2519, -2519, -2519, -2519,  4773,   184,   133, -2519,
   -2519, -2519,   184, -2519, -2519,  1798,   184,  1578,   162,   184,
    1581,   184,   179,   184, -2519,   184,  1582,  1585,   184,   184,
     184,   184,   184,   184,   184,   184,    39,   184,   184,  1591,
   -2519,   184,   184,   184,   184, -2519,  4773,  1436,  1800,  4773,
    4773,   184,   184,  1436, -2519,   184,   184,   184,  4773, -2519,
     184,   184, -2519, -2519, -2519,  1801, -2519, -2519, -2519, -2519,
   -2519, -2519,  1805,   184,   184, -2519,   184,   184, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519,  1807,  1808,  1806,
   -2519, -2519,  1242,  1809,  1810,  1812, -2519,  1820,  1826,  1827,
    1828,  1830, -2519,  1831, -2519, -2519, -2519,  1832,  1833,  1836,
   -2519,  1837,  1839,  1842, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519,   184,   184,   184, -2519, -2519,   184,
    1436, -2519, -2519, -2519,  1420,   184,  1436,   184,   184,   184,
   -2519,   184,   184,  1843,   184,  1845,  1825,   184,   184, -2519,
   -2519,  1846,  4773, -2519, -2519, -2519,   184, -2519, -2519, -2519,
   -2519,  1436, -2519,  1110,   184,  1110,   -19,  1436,  4773,   184,
     184,  1848, -2519, -2519, -2519, -2519, -2519,   184, -2519, -2519,
   -2519, -2519, -2519,  4773, -2519,  4773,   184,  1849, -2519, -2519,
    1850,  1851,  1852,  1854,  1855,  4773,  1436, -2519,  4773, -2519,
    4773,  4773,  3575,  4773,  1436, -2519,  4773, -2519, -2519,  4773,
   -2519, -2519,  3575,  4773, -2519,  4773,  4773,  3575,  4773, -2519,
    4773,  4773,   184, -2519, -2519, -2519,  4773,  4773,  4773, -2519,
   -2519,  4773,  4773, -2519, -2519, -2519, -2519,  4773,  4773, -2519,
   -2519, -2519, -2519, -2519,   184,   184, -2519, -2519,  1857,   184,
   -2519, -2519,  1866,  1868, -2519,   184, -2519, -2519, -2519,   312,
   -2519, -2519, -2519,  1869,  1870,  1871, -2519, -2519,   -70,  1873,
    1875,  1877,   312, -2519, -2519, -2519, -2519, -2519,    69, -2519,
   -2519,  1879,   312,  1880,  1882,  1884,    69,    69,   -70,  1888,
    1889,  1890,  1141, -2519,  1261, -2519,  1396,  1564,  1891,  1892,
    1893,    69,    69,   -70,  1895,  1896,   -70,  1897,  1601,  1898,
    1899,  1902,    69,    69,   -70,  1904,  1905,   -70,  1907,  1608,
    1908,  1909,  1912,    69,    69,   -70,  1906,  1914,   -70,  1926,
    1941,  1946,  1948,    69,    69,   -70,  1915,  1950,  1951,    69,
   -2519, -2519, -2519, -2519, -2519,  1953, -2519, -2519,  1955,    69,
    1956,  1959, -2519, -2519,   312, -2519, -2519,  1960, -2519,  1436,
   -2519,  4773,   184, -2519,   184,  4773,   184,  1961,  1103, -2519,
   -2519, -2519, -2519, -2519, -2519,  1962, -2519,  4773,   133,  1963,
    4773,  1436, -2519,  1964,  1103,   184,   184,   184,   184,   184,
     184,   184,   184,   184,  1966,  1967, -2519, -2519, -2519,  1968,
   -2519, -2519, -2519,  1970,  1971, -2519, -2519, -2519, -2519,   184,
    4773,   184,  1972,  1103,   133,  1436,  1436, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,   184,  1374,
   -2519, -2519,  1436,  1436,   184, -2519, -2519,  1436,  1436, -2519,
   -2519, -2519, -2519,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,  2073, -2519,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,  3076,  1973,   184, -2519,
     184,   184,   184,  1975,  1976, -2519, -2519,  1436,   -19,  1977,
    1436,  1436, -2519, -2519,  1374,   184, -2519,  1978,  1436, -2519,
   -2519, -2519,  1979, -2519, -2519, -2519, -2519,  1242,  1242,  1242,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519,  1103,   184, -2519,   184,
   -2519,   184,  1436,   184, -2519,  1374,   184, -2519,   184, -2519,
    1835,  1981,  1985, -2519,  1980,   184,   184,  1987,  1436,  4773,
   -2519, -2519,   184, -2519,   184, -2519,   -19,   479,   184,  1988,
   -2519,   184, -2519, -2519,   397, -2519,  1994,  1996,  1999,  2002,
    2004,  1436, -2519,   479,   479,   479,  1436, -2519,   479,   -19,
     479,   479,  1436, -2519,   479,   479,   479,  1436, -2519,   479,
     479,  1436,  4773,   479,  1436,   479,   479,  1436,   479,  1436,
   -2519, -2519,  2007,   397,  2009, -2519,   184, -2519, -2519, -2519,
   -2519,  2011, -2519, -2519, -2519, -2519,   312,    69, -2519, -2519,
   -2519, -2519, -2519, -2519,  2013, -2519, -2519,    69,  2015,  2017,
    2018,    69,    69,   -70,  2014,  2022,  2025,  2026,  2027,  2028,
      69,    69,   -70,  2023,  2030,  2031,  2032,  2033,  2034,    69,
      69,   -70,  2036,  2037,  2038,    69,   312,   312,   312,   312,
     312,  2040,   312,   312,  2041,    69,    69,   312,   312,   312,
     312,   312,  2043,   312,   312,  2044,    69,    69, -2519, -2519,
   -2519, -2519, -2519,  2045, -2519, -2519,  2046,    69, -2519, -2519,
   -2519, -2519, -2519,  2047, -2519, -2519,    69, -2519,    69,  2048,
   -2519,  2050,  2051, -2519,  4858, -2519,   479,  2052,  4773,   479,
     184,  4773,  2053, -2519,   479, -2519, -2519,   479, -2519,  4773,
    2054,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184, -2519, -2519, -2519,  4773,   479,   184,  4773,  2055,
   -2519,  1374,  1374,  4773,  1374,  1374,  4773,  4773,  1374,  1374,
     184,   184,   184,   184,   184,   184,  1103,   184,   184,   184,
    1530,  1618,  1622,  1638,  1706,  1709,  1716,  2073, -2519,  1717,
   -2519, -2519,  1103,   184,   184,   184,   184,  1103,   184,   184,
     184,   184,   184,   184,  1436,   184,  1595,  1103,   184,   184,
   -2519, -2519,   -19,   133,  2058,  2060, -2519, -2519, -2519, -2519,
   -2519,   -19,  2061, -2519, -2519, -2519, -2519,   184, -2519, -2519,
    1374,   184, -2519, -2519, -2519,  1229,  2062,  2063, -2519,   184,
    2065,  1110, -2519,   479, -2519, -2519, -2519, -2519,  2067, -2519,
   -2519,  2098,  2099,  2101,  2103,  4773,  2104, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519,   -19,   479, -2519,   -19, -2519, -2519,   -19,
   -2519,   -19,  2105,  2102, -2519,   184, -2519, -2519,   312,    69,
   -2519,   312,   312,   312,   312,   312,  2107,   312,   312,    69,
     312,   312,   312,   312,   312,  2108,   312,   312,    69,   312,
     312,   312,   312,   312,  2109,   312,   312,    69,   312, -2519,
   -2519, -2519, -2519, -2519,    69, -2519, -2519,  2110,   312,   312,
   -2519, -2519, -2519, -2519, -2519,    69, -2519, -2519,  2112,   312,
   -2519,    69,  2113, -2519,    69, -2519, -2519,    69, -2519, -2519,
    1436, -2519,  4773,   479, -2519,  2115,  1436,   184, -2519, -2519,
    1436,   184, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519,   184,   184,   479, -2519,  2116,  1436,   184,  1374, -2519,
     479,   184,  1374,   479,   479,  4773, -2519,   184,  2117,  2117,
     184,   184,  2117,  1103,  2117, -2519,  4773,  1336,  2118,  2122,
    2119,  2123,  2125,  2127, -2519,   133,  1103,  2117,  2117,   184,
     184,  1103,   184,   184,   184,   184,   184, -2519,  1374,   184,
    2128, -2519, -2519,   184,  2117,   133,    30, -2519,  2130,   133,
    2132, -2519, -2519, -2519,  2133,   184, -2519,  2134,  2137,  2029,
     184, -2519, -2519,    55,  4773, -2519,  2138,   118,  4773, -2519,
   -2519, -2519, -2519, -2519, -2519,    55,   184, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519,    69, -2519, -2519,   312, -2519, -2519,
   -2519, -2519, -2519,    69, -2519, -2519,   312, -2519, -2519, -2519,
   -2519, -2519,    69, -2519, -2519,   312, -2519,   312,    69, -2519,
   -2519,   312,    69, -2519, -2519,    69, -2519, -2519,   184,   479,
   -2519,  4773,  4773,   184,  4773,   184, -2519, -2519, -2519,  4773,
    4773,   184, -2519, -2519,  4773, -2519, -2519, -2519,   479,  2140,
   -2519, -2519, -2519,  1103,   184, -2519,  2141, -2519, -2519,  1436,
    2142, -2519,  2144, -2519, -2519, -2519, -2519, -2519,  2145, -2519,
   -2519,  1103,   184,  2146, -2519, -2519,   184,  4773, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519,    30,  1609,  1858, -2519, -2519,
    2147,  2148,  2150, -2519,  2097,  2152,    88, -2519, -2519, -2519,
    2153,  4773, -2519, -2519, -2519, -2519, -2519,  2154,   312, -2519,
     312, -2519,   312, -2519, -2519,   312, -2519,   312, -2519,  4858,
   -2519,   479,   479,   184,   479,  2155,   479,   479,   184,   479,
     184, -2519, -2519, -2519, -2519,  2156, -2519,   184, -2519, -2519,
    2157, -2519,   184, -2519, -2519, -2519,  2159,   184, -2519, -2519,
   -2519,  1436, -2519, -2519, -2519,  1609, -2519,  1744,  1768,  1858,
   -2519, -2519,  2162,  2163,  2160, -2519, -2519, -2519, -2519,   958,
     958, -2519,  1436, -2519, -2519, -2519, -2519, -2519, -2519,   479,
   -2519, -2519,  2165, -2519,  3575, -2519, -2519,  2166, -2519,  1103,
   -2519, -2519,  1103,   184, -2519, -2519,   184, -2519,  1103,   184,
   -2519,  4773, -2519,  1744, -2519,   133, -2519,  2167,  2169, -2519,
     184,   184,   184,   184,   118,  2170,  3575,  1436, -2519,  3575,
   -2519, -2519,   184,  2172, -2519,   184,   479, -2519, -2519, -2519,
    2173,  2175,   184,  2176,   184, -2519, -2519,  1436, -2519, -2519,
    1436, -2519, -2519,  2178, -2519, -2519,  2180,  2181, -2519, -2519,
    2182, -2519,  2194, -2519, -2519,  1103, -2519,  1103, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2519, -2519,    -3, -2519,  1658, -2519, -1632,  -982,  1619, -2519,
     764,  -422,  2120,   -49,    81, -2519, -2519, -1640,  1687,  2024,
    -768,   450,  -841,  1219,  1876, -2519, -1138, -2519,  -607, -1131,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519,  -484,  -476, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519,  -368, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -1441, -2519, -2519, -2519, -2519, -2519,  -648, -2519,
   -2519, -2519, -2519, -2519, -2519,    75, -2519, -2519, -2519, -2519,
     -95,  -655, -1600,  -459, -2519, -2519, -2519, -2519,  -518,  -504,
   -2519, -2519, -2518, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519,  1494, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519,
   -2519, -2519, -2519, -2519, -2519, -2519, -2519, -2519
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1234
static const yytype_int16 yytable[] =
{
      67,   348,  1879,  2022,   857,  2024,   106,  1095,   104,  1069,
    1072,  1566,  1399,  1571,   836,  1494,   886,   777,   106,   255,
     780,  1699,    64,    65,   839,    64,    65,  1682,  1099,   288,
   -1083,   106,   565,   368,  1426,   106,  1716,   312,  1108,  1601,
    1602,  1603,    64,    65,  1946,  1476,   342,    64,    65,   353,
      64,    65,   359,   632,   615,   762,   365,   892,  1401,   372,
     712,   677,  1629,   375,   377,   337,  1465,   386,  1064,   753,
     393,   397,   580,  1692,   400,  1697,    64,    65,   404,  1193,
    1849,   256,   611,   405,   401,   846,  1346,  2617,   843,    64,
      65,    64,    65,  1423,   756,  1333,   418,   422,   427,   428,
     432,   434,  1314,   257,   606,  1235,  1236,  1237,  1710,  1459,
      54,   589,   305,   290,   106,   292,   106,   438,   534,    64,
      65,  1451,   111,  1867,  1350,   948,   949,  1353,    76,   976,
    1243,  1898,   406,  1109,   111,   673,   862,   106,  1101,  1110,
    1869,    64,    65,   847,  1384,  1711,   566,   111,    64,    65,
    2622,   111,   447,  1899,   258,   590,  1900,    64,    65,  2724,
      64,    65,  1700,    64,    65,    64,    65,  1901,  1319,  1850,
     713,   844,   157,   950,  1427,   479,  1402,  1717,   887,   759,
     500,  1484,    64,    65,  1315,   893,   338,    64,    65,  1466,
    1902,  1204,  1872,   306,   437,   378,  1334,   612,   977,  1205,
     982,   863,  1730,  1712,   114,  2747,  1460,  1903,   959,   472,
     535,  1424,   115,   116,   674,   473,   114,   960,   961,   173,
    1701,   245,  1457,  1851,   115,   116,  1743,  1744,  1347,   114,
     111,   763,   111,   114,   382,  1718,   394,   115,   116,  1452,
     613,   115,   116,  1194,  1244,   702,  1683,  1428,   983,    64,
      65,   567,   581,   111,   678,   474,   639,   640,  1307,   591,
    1713,   679,   680,  1065,   501,   962,   509,   339,   514,   518,
     767,   684,   548,   686,  1745,  2686,   545,  1124,  1485,   568,
     475,   688,   691,   369,   694,   698,    99,   700,  1630,  1477,
    1429,   578,  1693,   607,  1698,  1368,   616,   710,   681,   119,
     778,   951,   952,   781,  1369,  1370,   100,   720,   722,  1100,
     310,   119,   114,    66,   114, -1083,  1495,   259,  1105,   633,
     115,   116,   115,   116,   119,   888,   476,   402,   119,   395,
     765,   766,   768,  1102,   770,   114,  1111,  2618,   773,   774,
     561,   797,  1868,   115,   116,  1947,  1066,   894,   149,   786,
     788,   383,  1371,   150,   151,   407,   789,   392,   101,  1870,
     149,   792,   794,  1468,   260,   150,   151,  1461,   696,   795,
     477,   478,   796,   149,  1687,   953,   984,   149,   150,   151,
     341,  1488,   150,   151,   379,   954,   955,   265,  1925,   620,
     806,   807,  2687,   963,   964,   384,   385,   811,   812,   813,
    2623,   814,  1746,  1747,   682,  1930,   798,   119,   396,   119,
     311,  1873,  1223,   293,   307,   821,  1103,   956,  1731,   822,
    1526,  1458,  1848,   294,   827,   828,   829,   830,   831,   832,
     119,   833,   352,   422,   837,   838,   477,  2688,   308,  1486,
     102,  1980,   380,   422,   840,  1478,   816,   817,   364,  1864,
     985,  1538,    64,    65,   109,  1239,   149,  1904,   149,    55,
     986,   150,   151,   150,   151,  1648,   743,   965,   356,  1329,
     882,   320,  1893,  1652,   799,    77,  1748,   966,   967,   149,
    1372,  1373,   968,  1159,   150,   151,  1749,  1750,   731,    64,
      65,  1679,   987,    64,    65, -1233,  1330,   869,   870,  1607,
    1040,    56,   621,  1659,  1660,  1706,   109,  1656,   253,   969,
     850,    78,    64,    65,  1688,   878,   835,  1047,  1751,    57,
     321,   901,   902,   109,   415,   744,  1041,  1155,  1685,   322,
     570,  1150,   935,  1825,   270,   103,  1828,   543,   246,  1047,
     263,   571,   900,   642,   643,  1074,   302,   733,    58,  1075,
     416,   486,  1160,   271,  1374,   272,   266,   323,  1048,   487,
     109,   562,   800,  1707,  1375,  1376,    59,   801,   572,  1377,
      60,   267,   278,   973,  1852,   931,   622,  1661,   903,  1543,
    1048,   304,    61,    79,   904,   563,  1156,  1689,  1440,   109,
    1151,  1544,   992,   724,    64,    65,  1378,   389,   544,   327,
     644,    64,    65,   851,   357,   883,   645,  1047,   350,  1680,
     947,   355,  1129,   646,   117,   647,  1441,  1161,   749,  1442,
     648,  1076,  1443,   649,   328,   247,  1152,  1709,  1708,   650,
    1690,   623,   905,   268,   390,   329,   991,   248,  1719,   651,
     539,   920,  1077,   573,  1479,   652,  1686,   906,  1048,  1444,
    1777,  2490,   725,  1067,   653,   624,  1080,  1042,  1134,  1778,
    1779,   907,   330,  1853,  1788,    80,   117,   908,  1071,   654,
     273,   249,   909,  1789,  1790,  1290,  1162,  1445,   745,   574,
    1446,  1115,   852,   117,  1130,  1116,  1117,  1118,  1119,   655,
    1049,  1120,   750,  1122,  1301,  1123,   422,  1125,  1309,  1549,
     739,    64,  1180,  1078,   656,  1050,  1051,  1780,  1763,  1764,
    1043,   361,  1049,   657,   658,   371,   324,  1854,    81,   250,
     117,  1791,   374,   540,   215,   910,  1186,  1050,  1051,   274,
    1135,   362,  1058,   251,   659,  1068,  1044,   331,  1291,  1157,
     216,    62,  1166,  1153,   367,   911,  1096,  1694,   575,   117,
     912,  1799,   913,   363,   593,   541,  1765,   435,   660,   399,
    1800,  1801,   409,  1292,  1177,  1178,  1131,  1179,  1181,  1183,
    1184,   275,   661,   332,   662,   411,   914,   915,   726,  1463,
    1049,   276,  1196,  1197,   916,  1567,  1464,   751,   663,  1201,
    1202,  1187,  1188,   664,  1447,  1050,  1051,  1052,  1053,   665,
     576,  1167,   917,  1079,  1059,   727,   666,   413,  1802,  1208,
    1209,  1210,  1136,   448,  1573,   459,  1649,   460,  1097,  1052,
    1053,    64,    65,   594,   667,  1448,  1218,  1219,  1220,  1163,
    1222,   422,  1224,  1579,  1225,  1781,  1782,  1132,   668,   669,
    1470,   670,   333,  1293,  1568,  2578,  2273,  2274,  2275,  1792,
    1793,  1449,    64,    65,   626,  1228,   470,  1230,   429,   918,
      64,    65,  1810,  1811,   595,  1695,  2182,  1232,   482,   793,
     237,  2602,   627,  1574,   422,  1240,   520,   334,  2025,   854,
    1242,   671,  2190,  1137,  1766,  1767,  1060,  1052,  1053,   484,
     703,   521,  1580,  1294,   335,  1703,  1257,  1259,   238,   511,
    1098,    83,  1704,   596,  1300,  1302,  1305,  2081,   537,  1783,
    1812,  2209,  1310,   522,  1190,  1191,   855,  1316,   538,  1784,
    1785,   547,  1359,  1794,  1786,  1295,   704,  2094,  1317,   557,
     430,   560,   523,  1795,  1796,  1471,  1803,  1804,  1797,  1229,
    1587,  2654,  2131,   558,  1325,  2134,  1591,   628,   279,   524,
     579,  1787,   525,  2142,  1168,  1496,  2145,   587,  1768,  2665,
    1497,    64,    65,   585,  2153,  1798,   239,  2156,  1769,  1770,
     609,  2652,  2653,   785,  2163,  2656,   705,  2658,   526,   527,
     610,   240,  1498,  1499,   614,  1500,  1501,    64,  1256,  2663,
    2664,   618,  1472,   297,  2668,  2669,  1502,  1569,  2672,  1588,
    1771,   549,   218,  2673,  2674,  1592,  2580,  1389,  1503,  1504,
    1805,  1462,   431,   630,  2276,   635,  1505,   314,   636,  1506,
    1806,  1807,   550,   641,    84,  1808,  1575,   219,   676,   701,
     528,   687,  1487,    64,    65,   708,  1507,   551,  1813,  1814,
     529,  1493,   241,  1508,  1509,  1581,    85,  1510,   709,   107,
      86,  2710,  1809,   711,  2711,  1521,  1296,  1522,   715,  2714,
     717,   220,  1523,  1524,  1525,  2717,  1529,  1530,   221,   284,
    2720,   723,  1531,    64,    65,  1532,  1390,  1534,   222,   223,
    2741,   729,   706,   747,   242,   224,  2744,   109,  1885,  1886,
     280,   298,   748,  1536,   243,  1537,   281,   854,   282,  1540,
    1541,   530,   531,    87,   315,  1511,    64,    65,   225,  1297,
    1396,  1397,  1815,   771,  1547,  1548,   316,   772,   422,  1550,
    1551,   775,  1816,  1817,   160,   226,  1553,   161,  1554,   783,
     358,  1556,   110,  1557,   855,  1298,  1610,   552,    83,   227,
     228,  2762,    88,  2781,  2765,  2782,   229,   790,  1391,  1392,
      89,    90,  1589,   791,  1818,  2098,  2099,   162,  1593,    93,
     804,  1512,   808,  1393,  2776,   163,   230,  1513,   299,   805,
    1604,    64,    65,   532,  1605,    94,  1606,   300,  2783,   809,
    1609,  2784,  2785,  1514,   810,  1432,   815,   112,   824,   825,
    2263,   818,  1515,   820,   419,  1615,   553,  1618,   317,  1620,
    1621,  1622,  1624,  2100,  1394,   231,  1627,  1628,    64,    65,
     421,    69,   318,  1433,  1636,   841,  1434,    70,   842,  1516,
    1517,  1642,   858,   164,   285,  1643,  1644,  1645,  1623,   849,
      64,    65,    64,    65,   860,   422,  1650,   867,   554,  1653,
    1670,  1518,   865,   880,  2443,   689,  1435,   117,   555,  1665,
      95,  1666,   118,   885,  1668,   890,   232,    71,  2296,   896,
    2456,    84,  2346,   286,   897,  2461,   233,   718,   898,    64,
      65,  2355,   165,   899,  1436,  2107,  2108,  1437,  1200,  1617,
    2364,  2313,    72,    85,  1560,  1561,  1519,  2021,   921,  2484,
     166,   167,   922,   923,    96,   925,   234,  1721,   168,  1722,
     169,  2572,  1723,  1724,  2575,  1725,  2577,  1726,   927,  1671,
     932,    64,    65,  1728,   933,  1729,   929,   690,   937,  2589,
    2590,   942,  1735,  2109,   287,  1304,  1657,   170,    73,    97,
     944,  2101,  2102,    64,    65,  1847,  2604,  1396,  1397,   719,
      87,   945,  1677,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   957,   946,    74,   958,   970,  1405,    64,    65,    88,
     978,  1672,  1673,   419,   420,   421,   980,    89,    90,   981,
     990,  1438,   988,   171,   989,  1046,  1674,  1842,  1055,  1844,
    1846,  1057,  1062,  1406,  1063,  2103,    64,    65,  1841,  1112,
    2116,  2117,  1562,  1563,  1113,  2104,  2105,    64,    65,  1845,
    1114,  1857,  1439,    64,    65,  1860,    64,    65,  1863,  1126,
    1396,  1397,    64,    65,  1890,  1128,  1407,  1675,  1139,   107,
    1564,  1140,  1408,  1141,  1142,  1143,  1144,  2106,  1409,  1889,
    1891,  2110,  2111,  1145,  1146,  1147,  1148,  1165,  2118,  1897,
    1170,  2576,  1171,  1908,  1172,  1173,  1410,  1174,  1175,  1176,
    1914,   439,  1189,  1192,  2588,  1199,  1206,   109,  1198,  2593,
    1840,  1207,  1211,  1203,  1919,  1213,  1411,  2214,  1214,  1921,
    1226,  1227,  1248,  1923,  2475,  1926,  1927,  1247,  1929,  1931,
    1932,  1412,  1935,  2479,  1249,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1948,  1950,  1951,  1251,  1252,  1953,  1954,
    1955,  1956,   110,  1253,  1255,  2112,  1254,  1306,  1962,  1963,
    1308,  1413,  1965,  1966,  1967,  2113,  2114,  1969,  1970,  1312,
    1318,  1322,  2268,   440,    64,    65,  1892,  1323,  1396,  1397,
    1973,  1974,  1326,  1975,  1976,  2499,  1327,  1328,  2501,  1336,
    1337,  2502,   461,  2503,   441,   442,  1338,  2115,  1339,  1341,
    1343,  1414,   443,  1342,  1344,  1345,  1351,   112,  1352,  1379,
     462,  1354,  1355,  2282,  1361,  1415,  2119,  2120,  1363,  1364,
     444,  1366,  1380,  1400,  1381,  1382,  1416,   463,  1385,  1404,
     445,  1996,  1997,  1998,  1386,  1387,  1999,  1425,  1403,   464,
    1431,  2001,  2004,  1430,  2006,  2007,  2008,  1453,  2009,  2010,
    1450,  2012,  1454,  1417,  2015,  2016,  1455,   465,  1473,  1456,
    1474,   466,  1469,  2019,  1475,  1480,  1418,   117,  1419,  1420,
    1481,  2023,   118,   467,  1482,  1483,  2028,  2029,  1491,  1489,
    1492,  1555,  1528,  1539,  2031,  1545,  1546,  1552,  1558,  1559,
    2121,  1572,  1577,  2034,  1578,  1583,  1614,  1584,  1585,   731,
    2122,  2123,   159,  1586,  1625,  1595,  1596,  1597,  1421,   236,
    1598,  1599,   468,  1600,   261,  1612,  1613,  1626,  1637,  1619,
    1632,   295,  1638,  1639,  1651,  2003,  1658,  1667,  1654,  2062,
    -441,  1669,  2124,  1655,  1702,  1678,  1691,  1681,  1714,  1705,
    1720,  1727,  1733,  1696,  1734,  1739,  1758,  1761,  1819,  1772,
    1774,  2070,  2071,  1776,  1715,   732,  2073,  2740,   733,   388,
    1820,  1821,  2076,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  1822,  1029,  2047,   734,  1829,  1826,  1185,  1827,  1830,
    1831,  1834,  1865,  2053,  1837,  1855,  1030,  1859,  2058,  1876,
    1866,  1877,  1878,  1871,  1880,  1031,  1874,  1881,  1882,  2428,
    2429,  1887,  2431,  2432,  1906,  1032,  2435,  2436,  1875,   735,
    1883,  1884,  1911,  1922,  1924,  1959,  1971,  1928,  1936,  1972,
    1979,  1937,  1977,  1978,  1981,  1982,  1983,  1952,   449,   450,
     451,   452,   453,   454,  1984,  1033,   455,   456,   457,   458,
    1985,  2014,  1986,  1987,  1988,  1989,  2125,  1990,  1991,  2177,
    1992,  2178,  1993,  2180,  1994,  1034,  1995,  2285,  2011,  2013,
    2017,   736,  2030,  2035,   737,  2036,  2037,  2038,  2482,  2039,
    2040,  2072,  2191,  2192,  2193,  2194,  2195,  2196,  2197,  2198,
    2199,  2074,  2075,  2136,  2078,  2079,  2080,  2082,   738,  2083,
    2147,   739,  2084,  2087,  2447,  2089,  2205,  2090,  2207,  2091,
    1035,   740,  2095,  2096, -1096,  2097,  2126,  2127,  2128,  2132,
    2133,  2470,  2135,  2137,  2138,  2213,   422,  2139,  2143,  2144,
    2154,  2217,  2146,  2148,  2149,   637,   638,  2150,  2155,  2164,
    2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    1036,  2157,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2253,   693,  2256,  2158,  2257,  2258,  2259,
    1084,  2159,  2678,  2160,  2165,  1037,  2166,  2168,  1085,  2169,
    2171,   422,  2269,  2172,  1086,  2174,  2181,  2183,  2186,  2189,
    2200,  2201,  2448,  2202,  2203,  2204,  2449,  2208,  2255,  2260,
    2261,  2264,  2270,  2272,  2288,  1087,  2286,   754,   757,   760,
    2287,  2291,  2450,  2299,  2277,  1038,  2278,  1039,  2279,  2302,
    2281,  2303,   422,  2283,  2304,  2284,  2562,  2305,  1088,  2306,
    2565,  2332,  2289,  2290,  2334,  2336,  1089,  2339,  2347,  2294,
    2341,  2295,  2342,  2343,  2678,  2298,  2348,  2356,  2300,  2234,
    2349,  2350,  2351,  2352,  2357,  2615,  2358,  2359,  2360,  2361,
    2365,  2366,   823,  2367,  2374,  2377,  2599,  2385,  2388,  2391,
    2392,  2394,  2397,  1090,  2398,  2399,  2402,  2407,  2411,  2427,
    2451,  1091,  2477,  2452,  2478,  2480,   803,  2486,  2487,  2489,
    2453,  2455,  2492,  2335,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2493,  2684,  2494,  2495,  2505,  1092,  2496,  2498,
    2504,  2514,  2523,  2532,  2538,  2301,  2542,  2545,  1093,  2551,
    2559,  2570,  2725,  2581,  2583,  2400,  2582,  2755,  2584,  2230,
    2585,  2586,  2690,  2601,  1094,  2608,  2610,  2626,  2611,  2613,
    2231,  2614,  2454,  2621,  2651,  2657,  2675,  2660,  2661,  2662,
    2667,  2681,   289,  2682,  2333,  2683,  2685,  2691,  2693,  2704,
    2712,  2726,  2715,  2718,  2729,  1084,  2232,  2727,  2728,  2736,
    2739,  2722,  2749,  1085,  2750,  2756,  2764,  2405,  2768,  1086,
    2769,  2771,  2775,  1349,  2777,     0,  2778,  2779,  2412,  2413,
    2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2780,
    1087,     0,     0,  2233,  2425,     0,     0,     0,   422,   422,
       0,   422,   422,  2731,  2733,   422,   422,  2437,  2438,  2439,
    2440,  2441,  2442,  1088,  2444,  2445,  2446,     0,  1149,     0,
       0,  1089,     0,   436,     0,     0,     0,     0,     0,     0,
    2457,  2458,  2459,  2460,     0,  2462,  2463,  2464,  2465,  2466,
    2467,     0,  2469,     0,     0,  2473,  2474,     0,     0,     0,
       0,     0,     0,     0,     0,   943,     0,     0,  1090,     0,
       0,     0,     0,     0,  2481,     0,  1091,   422,  2483,     0,
       0,     0,  2485,     0,     0,     0,  2488,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   498,     0,   505,   508,     0,   513,   517,     0,
       0,     0,     0,   699,     0,     0,     0,     0,     0,  1083,
       0,     0,  1092,     0,  1106,     0,     0,     0,     0,     0,
       0,     0,  2506,  1093,     0,   583,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1094,
       0,     0,     0,   598,   604,     0,     0,     0,  2234,     0,
    2235,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   784,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   685,     0,     0,     0,     0,
       0,     0,     0,     0,  2553,     0,     0,   695,  2555,     0,
       0,     0,     0,     0,     0,  2236,     0,     0,  2556,  2557,
       0,     0,     0,     0,  2561,   422,     0,   716,  2564,   422,
       0,     0,     0,     0,  2569,     0,     0,  2573,  2574,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2591,  2592,     0,  2594,
    2595,  2596,  2597,  2598,     0,   422,  2600,     0,     0,     0,
    2603,     0,     0,     0,  1212,     0,     0,  2297,     0,     0,
       0,     0,  2612,     0,     0,     0,     0,  2616,     0,     0,
       0,     0,   107,  2308,  2309,  2310,     0,     0,  2312,     0,
    2314,  2315,     0,  2627,  2317,  2318,  2319,     0,     0,  2321,
    2322,     0,     0,  2325,     0,  2327,  2328,     0,  2330,     0,
       0,     0,   868,     0,     0,     0,     0,     0,     0,   873,
     109,     0,   874,     0,     0,   819,     0,   875,     0,     0,
       0,   877,     0,     0,     0,  2639,   826,     0,     0,     0,
    2643,     0,  2645,     0,     0,   834,     0,     0,  2648,     0,
       0,  1752,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2655,     0,  1762,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2666,
    2699,  1823,  1824,  2670,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   936,     0,     0,
       0,     0,     0,  2689,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   871,   872,     0,  2401,     0,     0,  2404,
     112,     0,     0,     0,  2408,     0,   876,  2409,     0,     0,
    2702,   879,     0,     0,     0,  2707,     0,  2709,     0,     0,
     891,     0,     0,     0,  2713,     0,  2424,     0,     0,  2716,
       0,     0,     0,     0,  2719,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2730,  2732,     0,     0,
     117,     0,     0,     0,     0,   118,     0,     0,     0,  1490,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2742,     0,     0,  2743,     0,     0,  2745,     0,     0,  1121,
     938,   939,   940,   941,     0,     0,  1127,  2751,  2752,  2753,
    2754,     0,     0,     0,     0,     0,     0,     0,     0,  2763,
       0,     0,  2766,  2491,     0,     0,     0,     0,     0,  2770,
       0,  2772,     0,  1535,   507,     0,     0,     0,     0,     0,
       0,     0,     0,  1542,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2500,     0,     0,     0,     0,     0,
    1082,     0,     0,     0,     0,  2738,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,  2758,     0,     0,
    2761,     0,     0,     0,     0,     0,     0,     0,  1332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1215,     0,     0,     0,     0,     0,     0,
    1217,     0,     0,  2550,     0,     0,     0,     0,     0,     0,
    1383,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1633,  1634,  2558,     0,     0,     0,     0,     0,     0,
    2563,     0,     0,  2566,  2567,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1233,  1234,     0,     0,     0,
    1238,     0,     0,  1241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1250,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1221,     0,     0,     0,     0,   106,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,     0,     0,     0,     0,  2086,     0,     0,
       0,     0,     0,     0,     0,  2092,  2093,     0,     0,  1231,
       0,     0,     0,   108,     0,     0,     0,     0,     0,  2640,
    2129,  2130,     0,     0,     0,     0,     0,     0,     0,     0,
     109,  2140,  2141,     0,     0,     0,  1388,     0,  2650,     0,
       0,     0,  2151,  2152,     0,     0,     0,     0,     0,     0,
       0,     0,  2161,  2162,     0,     0,     0,     0,  2167,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2170,     0,
       0,     0,     0,  1838,     0,   110,     0,     0,     0,  1843,
       0,     0,  1321,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,     0,     0,     0,    64,
      65,  1856,     0,     0,  1858,     0,     0,     0,  1862,     0,
       0,  2700,  2701,     0,  2703,   107,  2705,  2706,     0,  2708,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1888,
     112,     0,     0,     0,     0,  1894,     0,     0,     0,     0,
       0,     0,     0,  1907,     0,     0,  1910,     0,     0,     0,
       0,     0,     0,     0,     0,  1915,  1916,  1467,     0,     0,
       0,     0,     0,     0,   516,     0,  1920,   113,     0,  2735,
       0,     0,     0,     0,     0,   114,     0,     0,     0,   107,
       0,     0,     0,   115,   116,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   118,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1527,
       0,     0,     0,     0,     0,     0,  2767,   109,     0,  1533,
       0,     0,  1736,  1737,  1738,     0,     0,     0,     0,     0,
    1611,  1663,  1740,  1741,  1742,     0,     0,     0,     0,  1753,
    1754,  1755,     0,     0,  1756,  1757,   107,  1759,  1760,     0,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
    1635,     0,   110,     0,     0,  1640,     0,     0,     0,     0,
     119,     0,     0,     0,     0,  1646,     0,  1832,  1833,     0,
       0,  1835,  1836,     0,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,   112,   118,   149,
       0,  1608,     0,     0,   150,   151,  2338,     0,     0,   110,
       0,     0,     0,     0,     0,     0,  2340,     0,  1616,     0,
    2344,  2345,     0,     0,     0,     0,     0,     0,     0,  2353,
    2354,     0,     0,     0,     0,     0,     0,     0,  2362,  2363,
       0,     0,  1641,     0,  2368,     0,     0,     0,     0,     0,
       0,     0,  1647,     0,  2378,  2379,     0,   117,     0,     0,
       0,     0,   118,     0,   112,  2389,  2390,     0,     0,     0,
       0,  1664,     0,     0,     0,     0,  2393,     0,     0,     0,
       0,  1676,     0,     0,     0,  2395,  1684,  2396,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1909,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2185,     0,     0,  1839,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,  1861,
       0,  1958,  2210,     0,     0,     0,     0,  1964,  2508,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2517,     0,
       0,     0,     0,     0,     0,     0,     0,  2526,  1895,     0,
       0,  1896,     0,     0,     0,     0,  2535,     0,     0,     0,
       0,  1912,  1913,  2537,   107,     0,     0,     0,     0,  1917,
       0,     0,     0,     0,  2541,     0,  1918,     0,     0,     0,
    2544,     0,     0,  2546,     0,  2077,  2547,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2085,     0,
       0,     0,   109,     0,  2000,     0,     0,     0,  2088,     0,
    2005,     0,     0,     0,     0,     0,  1957,     0,     0,  1960,
    1961,     0,     0,     0,     0,     0,     0,     0,  1968,     0,
       0,     0,     0,     0,     0,  2020,     0,     0,     0,     0,
       0,  2026,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2042,     0,     0,     0,     0,     0,     0,     0,  2049,     0,
    2173,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,  2628,  2002,     0,     0,     0,     0,     0,
       0,     0,  2630,     0,     0,     0,     0,     0,     0,     0,
       0,  2632,  2018,     0,     0,     0,     0,  2635,     0,     0,
       0,  2637,     0,     0,  2638,     0,     0,     0,  2027,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2032,     0,  2033,     0,     0,     0,     0,
       0,     0,   117,     0,     0,  2041,     0,   118,  2043,     0,
    2044,  2045,  2046,  2048,     0,     0,  2050,     0,     0,  2051,
       0,     0,  2052,  2054,     0,  2055,  2056,  2057,  2059,     0,
    2060,  2061,     0,     0,     0,     0,  2063,  2064,  2065,     0,
       0,  2066,  2067,     0,     0,     0,     0,  2068,  2069,     0,
       0,     0,     0,     0,   344,     0,     0,     0,     0,     0,
       0,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2175,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2188,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,  2211,
    2212,  2476,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2215,  2216,     0,     0,
       0,  2218,  2219,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2176,  2337,     0,     0,  2179,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2184,     0,     0,
    2187,  2262,     0,     0,  2266,  2267,     0,     0,     0,     0,
       0,     0,  2271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2369,  2370,  2371,  2372,  2373,     0,  2375,  2376,
    2206,     0,     0,  2380,  2381,  2382,  2383,  2384,     0,  2386,
    2387,     0,     0,     0,     0,     0,  2280,   971,     0,     0,
       0,     0,   972,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2307,  2254,     0,     0,     0,
    2311,   346,     0,   347,     0,     0,  2316,     0,     0,     0,
       0,  2320,     0,     0,     0,  2323,     0,     0,  2326,     0,
       0,  2329,     0,  2331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2605,     0,     0,     0,  2609,     0,  2293,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2324,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,  2507,     0,     0,  2509,  2510,  2511,
    2512,  2513,     0,  2515,  2516,     0,  2518,  2519,  2520,  2521,
    2522,     0,  2524,  2525,     0,  2527,  2528,  2529,  2530,  2531,
       0,  2533,  2534,     0,  2536,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2539,  2540,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,  2468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2403,     0,
       0,  2406,     0,     0,     0,     0,     0,     0,     0,  2410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,   490,  2423,     0,   491,  2426,     0,
       0,   599,   107,  2430,     0,     0,  2433,  2434,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   492,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   600,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2629,     0,     0,     0,     0,     0,     0,
       0,     0,  2631,     0,     0,     0,     0,     0,     0,     0,
       0,  2633,     0,  2634,   112,   110,     0,  2636,     0,     0,
       0,     0,     0,     0,  2548,  2497,   493,     0,     0,   601,
    2552,     0,     0,     0,  2554,     0,     0,     0,     0,     0,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
    2560,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,   602,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2694,     0,  2695,     0,  2696,     0,
       0,  2697,     0,  2698,     0,     0,     0,     0,     0,     0,
       0,     0,  2549,     0,     0,     0,     0,     0,     0,     0,
     496,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2568,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2579,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   497,
       0,     0,   603,  2659,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2620,     0,     0,     0,  2625,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,   993,   994,   995,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2641,  2642,     0,  2644,     0,     0,     0,     0,  2646,
    2647,     0,     0,     0,  2649,   996,   997,     0,     0,   998,
       0,     0,   999,     0,     0,  2721,     0,     0,     0,  1000,
       0,     0,     0,  1001,     0,     0,     0,     0,     0,     0,
       0,  1002,  1003,     0,     0,     0,  2734,  2671,     0,  1004,
    1005,     0,     0,   107,     0,     0,     0,  1260,  1261,  1262,
       0,     0,     0,     0,     0,     0,  1006,     0,     0,     0,
       0,  2692,  1007,     0,     0,     0,  1008,  1009,     0,     0,
    1010,     0,     0,     0,     0,     0,  1263,  1264,     0,   107,
    1265,  2759,     0,     0,   503,     0,  1011,  1266,     0,     0,
    1267,     0,     0,     0,  1268,     0,     0,     0,     0,     0,
       0,  2773,  1269,  1270,  2774,     0,  1012,     0,     0,     0,
    1271,     0,   107,     0,     0,     0,     0,  1320,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,  1013,     0,
       0,     0,     0,     0,     0,     0,     0,  1272,  1273,     0,
       0,  1274,     0,     0,  2737,     0,     0,     0,     0,     0,
       0,  1014,     0,     0,     0,     0,     0,  1275,     0,     0,
       0,  2746,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2757,  1276,     0,  2760,
       0,   112,  1015,     0,  1016,     0,     0,     0,     0,     0,
    1017,  1018,     0,     0,     0,   110,     0,     0,     0,  1277,
       0,     0,     0,     0,     0,  1019,  1020,     0,  1278,     0,
       0,     0,     0,     0,     0,  1021,  1022,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1023,     0,  1024,     0,     0,   118,     0,     0,     0,
     112,     0,     0,  1279,     0,  1280,  1025,     0,  1026,     0,
       0,  1281,  1282,     0,  1027,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1283,     0,     0,
       0,     0,   118,     0,     0,     0,     0,  1284,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1028,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1285,   504,  1286,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1288,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,  1289,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     0,     0,     2,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     7,     8,     9,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,     0,     0,     0,     0,     0,     0,     0,    14,
      15,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,    25,    26,    27,     0,     0,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,     0,     0,     0,     0,
     175,    36,     0,   176,     0,    37,   177,     0,    38,     0,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,   178,     0,   179,   180,   181,
      42,     0,     0,     0,     0,     0,    43,   182,     0,   183,
       0,     0,     0,     0,   184,     0,   185,   186,   187,     0,
       0,    44,    45,   188,     0,   189,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    47,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   191,     0,     0,     0,     0,    51,     0,     0,     0,
       0,   192,   193,    52,     0,   194,     0,     0,     0,   195,
       0,   196,  1357,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   197,   198,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,     0,     0,     0,     0,     0,   209,     0,     0,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
     211,     0,   212,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  1358,     0,     0,     0,     0,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,    50,  1443,  1643,   480,  1645,     4,   662,    11,   657,
     658,  1142,   994,  1144,   436,     5,     4,     4,     4,     5,
       4,    27,     3,     4,   446,     3,     4,    21,     5,    32,
       0,     4,    21,    32,    27,     4,    27,    40,     5,  1170,
    1171,  1172,     3,     4,     5,     5,    49,     3,     4,    52,
       3,     4,    55,     5,     5,    13,    59,     4,   122,    62,
     150,     4,    47,    66,    67,     4,   122,    70,    17,    67,
      73,    74,    16,    21,    77,    21,     3,     4,    81,    98,
     106,    67,     6,    86,     4,   193,    17,    32,   104,     3,
       4,     3,     4,   122,    67,   165,    99,   100,   101,   102,
     103,   104,    17,    89,     4,   873,   874,   875,   131,    36,
      67,    44,    37,    32,     4,     5,     4,   120,   214,     3,
       4,   122,   120,    21,   965,    14,    15,   968,   285,    88,
     134,    27,     5,   100,   120,   213,   193,     4,    17,   106,
      21,     3,     4,   251,   985,   168,   135,   120,     3,     4,
      32,   120,   155,    49,   140,    88,    52,     3,     4,  2677,
       3,     4,   168,     3,     4,     3,     4,    63,   936,   195,
     260,   187,    33,    62,   167,   178,   240,   168,   166,    67,
     183,    36,     3,     4,    99,   132,   125,     3,     4,   245,
      86,     4,    21,    62,   113,     4,   266,   121,   157,    12,
      14,   258,    20,   226,   202,  2723,   133,   103,     5,   187,
     306,   240,   210,   211,   292,   193,   202,    14,    15,   145,
     226,    16,    27,   249,   210,   211,    14,    15,   159,   202,
     120,   189,   120,   202,   187,   226,    79,   210,   211,   240,
     243,   210,   211,   262,   248,   294,   240,   240,    62,     3,
       4,   240,   196,   120,   197,   233,   259,   260,   913,   192,
     283,   204,   205,   212,   183,    62,   185,   206,   187,   188,
     226,   274,   197,   276,    62,   187,   195,   699,   133,   268,
     258,   284,   285,   282,   287,   288,    40,   290,   273,   249,
     283,   210,   240,   193,   240,     5,   247,   300,   241,   297,
     287,   190,   191,   287,    14,    15,    60,   310,   311,   286,
     194,   297,   202,   294,   202,   285,   306,   303,   287,   271,
     210,   211,   210,   211,   297,   313,   304,   247,   297,   172,
     333,   334,   335,   212,   337,   202,   303,   282,   341,   342,
      62,    30,   240,   210,   211,   306,   295,   294,   346,   352,
     353,   304,    62,   351,   352,   228,   359,   197,   112,   240,
     346,   364,   365,  1018,   350,   351,   352,   294,   287,   372,
     348,   349,   375,   346,    27,   264,   190,   346,   351,   352,
     294,  1036,   351,   352,   193,   274,   275,    58,   226,     5,
     393,   394,   304,   190,   191,   348,   349,   400,   401,   402,
     282,   404,   190,   191,   347,   226,    95,   297,   251,   297,
     294,   240,   834,   303,   283,   418,   295,   306,   236,   422,
    1068,   226,  1404,   313,   427,   428,   429,   430,   431,   432,
     297,   434,   294,   436,   437,   438,   348,   349,   307,   294,
     194,  1572,   251,   446,   447,    27,     4,     5,   294,  1431,
     264,  1099,     3,     4,    57,   877,   346,   353,   346,    12,
     274,   351,   352,   351,   352,  1233,    62,   264,     5,   157,
       4,    51,  1454,  1241,   163,     4,   264,   274,   275,   346,
     190,   191,   279,    88,   351,   352,   274,   275,    62,     3,
       4,   122,   306,     3,     4,     0,   184,   500,   501,     4,
       4,    54,   118,    24,    25,   168,    57,     4,   232,   306,
      79,    40,     3,     4,   167,   518,   435,    64,   306,    72,
     100,     4,     5,    57,     5,   121,    30,    62,   122,   109,
      37,    62,   581,  1374,    46,   289,  1377,     5,    26,    64,
       5,    48,   545,     4,     5,    36,     4,   121,   101,    40,
      31,   169,   157,    65,   264,    67,   227,   137,   105,   177,
      57,   283,   251,   226,   274,   275,   119,   256,    75,   279,
     123,   242,    67,   622,   106,   578,   192,    98,    61,     5,
     105,    89,   135,   112,    67,   307,   121,   240,    22,    57,
     121,    17,   641,    62,     3,     4,   306,   139,    66,     4,
      61,     3,     4,   172,   141,   524,    67,    64,   232,   240,
     613,     0,    40,    74,   217,    76,    50,    62,    34,    53,
      81,   112,    56,    84,    37,   113,   157,  1282,   291,    90,
     283,   247,   115,   304,   176,    48,   639,   125,  1293,   100,
       6,   560,   133,   150,   226,   106,   240,   130,   105,    83,
       5,  2291,   121,   656,   115,   271,   659,   161,    40,    14,
      15,   144,    75,   195,     5,   194,   217,   150,   125,   130,
     182,   159,   155,    14,    15,    67,   121,   111,   274,   186,
     114,   684,   251,   217,   112,   688,   689,   690,   691,   150,
     237,   694,   108,   696,   208,   698,   699,   700,   208,  1121,
     274,     3,     4,   194,   165,   252,   253,    62,    14,    15,
     214,   270,   237,   174,   175,   124,   296,   249,   247,   207,
     217,    62,   124,    89,    84,   208,   775,   252,   253,   241,
     112,     5,    40,   221,   195,   260,   240,   150,   130,   274,
     100,   294,    62,   274,     5,   228,    40,   122,   255,   217,
     233,     5,   235,     4,   150,   121,    62,   194,   219,     5,
      14,    15,    31,   155,   767,   768,   194,   770,   771,   772,
     773,   283,   233,   186,   235,     5,   259,   260,   247,   263,
     237,   293,   785,   786,   267,    62,   270,   203,   249,   792,
     793,     4,     5,   254,   228,   252,   253,   344,   345,   260,
     307,   121,   285,   294,   112,   274,   267,     5,    62,   812,
     813,   814,   194,     4,    62,   118,  1238,    67,   112,   344,
     345,     3,     4,   219,   285,   259,   829,   830,   831,   274,
     833,   834,   835,    62,   837,   190,   191,   265,   299,   300,
     131,   302,   255,   235,   121,  2445,  1977,  1978,  1979,   190,
     191,   285,     3,     4,    94,   858,   119,   860,    40,   342,
       3,     4,    14,    15,   260,   240,  1848,   870,   285,    12,
      89,  2471,   112,   121,   877,   878,    45,   290,  1646,   139,
     883,   342,  1864,   265,   190,   191,   194,   344,   345,   169,
      55,    60,   121,   285,   307,   263,   899,   900,   117,    33,
     194,    28,   270,   299,   907,   908,   909,  1748,     5,   264,
      62,  1893,   915,    82,     4,     5,   176,   920,    90,   274,
     275,    16,   971,   264,   279,    30,    91,  1768,   931,    67,
     112,   284,   101,   274,   275,   226,   190,   191,   279,   858,
      62,  2573,  1783,   233,   947,  1786,    62,   187,   203,   118,
      90,   306,   121,  1794,   274,    22,  1797,    31,   264,  2591,
      27,     3,     4,    73,  1805,   306,   185,  1808,   274,   275,
       5,  2571,  2572,   124,  1815,  2575,   141,  2577,   147,   148,
       4,   200,    49,    50,     4,    52,    53,     3,     4,  2589,
    2590,     5,   283,    71,  2594,  2595,    63,   274,  2598,   121,
     306,    46,    19,  2603,  2604,   121,  2447,    83,    75,    76,
     264,  1014,   194,     5,  1996,     4,    83,    26,     5,    86,
     274,   275,    67,     5,   151,   279,   274,    44,     5,     4,
     199,     5,  1035,     3,     4,     4,   103,    82,   190,   191,
     209,  1044,   261,   110,   111,   274,   173,   114,     4,    19,
     177,  2651,   306,     4,  2654,  1058,   161,  1060,     5,  2659,
       4,    78,  1065,  1066,  1067,  2665,     4,     5,    85,    39,
    2670,    98,  1075,     3,     4,  1078,   152,  1080,    95,    96,
    2712,   121,   247,     5,   303,   102,  2718,    57,     4,     5,
     345,   169,     4,  1096,   313,  1098,   351,   139,   353,  1102,
    1103,   270,   271,   230,   113,   172,     3,     4,   125,   214,
       7,     8,   264,   271,  1117,  1118,   125,     4,  1121,  1122,
    1123,     4,   274,   275,    44,   142,  1129,    47,  1131,     4,
      60,  1134,   102,  1136,   176,   240,  1185,   182,    28,   156,
     157,  2741,   269,  2775,  2744,  2777,   163,     4,   224,   225,
     277,   278,   274,     5,   306,    14,    15,    77,   274,    84,
       4,   228,     4,   239,  2764,    85,   183,   234,   246,   197,
    1173,     3,     4,   342,  1177,   100,  1179,   255,  2778,     4,
    1183,  2781,  2782,   250,     4,    22,     4,   157,   424,   425,
    1958,     5,   259,     5,     9,  1198,   241,  1200,   207,  1202,
    1203,  1204,  1205,    62,   280,   222,  1209,  1210,     3,     4,
      11,   187,   221,    50,  1217,     5,    53,   193,   270,   286,
     287,  1224,     4,   143,   194,  1228,  1229,  1230,    60,   169,
       3,     4,     3,     4,     4,  1238,  1239,   169,   283,  1242,
      83,   308,   177,     4,  2226,    40,    83,   217,   293,  1252,
     175,  1254,   222,   196,  1257,   196,   273,   233,  2026,     5,
    2242,   151,  2103,   233,     5,  2247,   283,    40,     4,     3,
       4,  2112,   192,   196,   111,    14,    15,   114,    12,  1198,
    2121,  2049,   258,   173,    42,    43,   353,   177,   188,    60,
     210,   211,   188,    67,   219,    67,   313,  1300,   218,  1302,
     220,  2439,  1305,  1306,  2442,  1308,  2444,  1310,    67,   152,
       5,     3,     4,  1316,   227,  1318,   226,   112,     5,  2457,
    2458,     4,  1325,    62,   294,    17,  1245,   247,   304,   254,
       4,   190,   191,     3,     4,     5,  2474,     7,     8,   112,
     230,     4,  1261,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,    88,   196,   349,     5,    88,    40,     3,     4,   269,
       5,   224,   225,     9,    10,    11,     4,   277,   278,     4,
       4,   228,     5,   313,     5,     5,   239,  1400,   100,  1402,
    1403,    17,     4,    67,     5,   264,     3,     4,     5,    17,
      14,    15,   170,   171,    17,   274,   275,     3,     4,     5,
       4,  1424,   259,     3,     4,  1428,     3,     4,     5,     4,
       7,     8,     3,     4,     5,     4,   100,   280,     4,    19,
     198,    98,   106,     5,     5,    88,     4,   306,   112,  1452,
    1453,   190,   191,     5,     5,    88,     5,     4,    62,  1462,
       5,  2443,     5,  1466,     4,     4,   130,     5,     5,     5,
    1473,    35,     4,     4,  2456,     5,     4,    57,    12,  2461,
    1399,     4,     4,    12,  1487,     4,   150,  1909,     4,  1492,
       5,     5,     5,  1496,  2262,  1498,  1499,   166,  1501,  1502,
    1503,   165,  1505,  2271,     4,  1508,  1509,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,   157,   157,  1521,  1522,
    1523,  1524,   102,     4,     4,   264,     5,   259,  1531,  1532,
     259,   195,  1535,  1536,  1537,   274,   275,  1540,  1541,   287,
       5,     4,  1964,   107,     3,     4,     5,     5,     7,     8,
    1553,  1554,     5,  1556,  1557,  2323,     5,     5,  2326,     4,
       4,  2329,    54,  2331,   128,   129,     5,   306,     5,   272,
       5,   235,   136,   272,     5,     5,     4,   157,     4,     4,
      72,     5,     5,  2005,     5,   249,   190,   191,     5,     5,
     154,     5,     4,   240,     5,     5,   260,    89,     4,   106,
     164,  1604,  1605,  1606,     5,     5,  1609,     5,   240,   101,
     106,  1614,  1615,   139,  1617,  1618,  1619,   240,  1621,  1622,
      40,  1624,   106,   287,  1627,  1628,     5,   119,   245,   212,
     212,   123,    40,  1636,     5,     4,   300,   217,   302,   303,
       5,  1644,   222,   135,     5,   212,  1649,  1650,     4,   212,
       4,   112,     5,     5,  1657,     5,     5,     4,   112,     4,
     264,     5,     5,  1666,     5,     4,    12,     5,     5,    62,
     274,   275,    14,     4,     6,     5,     5,     4,   342,    21,
       5,     5,   174,     4,    26,     5,     5,     4,     4,    12,
       5,    33,     4,     4,     4,  1614,     5,     4,    38,  1702,
       0,     5,   306,    38,   168,   240,   139,   240,     4,   122,
     208,   196,     4,   240,     4,     4,     4,     4,   272,     5,
       5,  1724,  1725,     5,   249,   118,  1729,  2709,   121,    71,
       5,     5,  1735,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,     5,    67,  1682,   157,     5,     4,     6,     4,     4,
       4,     4,   240,  1692,     5,     5,    81,     5,  1697,     4,
     240,     4,     4,   240,     4,    90,   310,     4,     4,  2211,
    2212,     4,  2214,  2215,     4,   100,  2218,  2219,   310,   192,
     310,   310,     5,     5,   226,     5,     5,   226,   226,     4,
       4,   226,     5,     5,     5,     5,     4,   226,   160,   161,
     162,   163,   164,   165,     4,   130,   168,   169,   170,   171,
       4,     6,     5,     5,     4,     4,   272,     5,     5,  1842,
       4,  1844,     5,  1846,     5,   150,     4,    12,     5,     4,
       4,   244,     4,     4,   247,     5,     5,     5,  2280,     5,
       5,     4,  1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,
    1873,     5,     4,   272,     5,     5,     5,     4,   271,     4,
     272,   274,     5,     4,   354,     5,  1889,     5,  1891,     5,
     195,   284,     4,     4,   285,     5,     5,     5,     5,     4,
       4,   306,     5,     5,     5,  1908,  1909,     5,     4,     4,
       4,  1914,     5,     5,     5,   257,   258,     5,     4,     4,
    1923,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
     235,     5,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,   286,  1948,     5,  1950,  1951,  1952,
      92,     5,  2607,     5,     4,   260,     5,     4,   100,     4,
       4,  1964,  1965,     4,   106,     5,     5,     5,     5,     5,
       4,     4,   354,     5,     4,     4,   354,     5,     5,     4,
       4,     4,     4,     4,     4,   127,     5,   329,   330,   331,
       5,     4,   354,     5,  1997,   300,  1999,   302,  2001,     5,
    2003,     5,  2005,  2006,     5,  2008,  2428,     5,   150,     5,
    2432,     4,  2015,  2016,     5,     4,   158,     4,     4,  2022,
       5,  2024,     5,     5,  2679,  2028,     4,     4,  2031,   285,
       5,     5,     5,     5,     4,     6,     5,     5,     5,     5,
       4,     4,   423,     5,     4,     4,  2468,     4,     4,     4,
       4,     4,     4,   195,     4,     4,     4,     4,     4,     4,
     354,   203,     4,   354,     4,     4,   379,     5,     5,     4,
     354,   354,     5,  2076,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,     4,     6,     5,     4,     4,   249,     5,     5,
       5,     4,     4,     4,     4,  2034,     4,     4,   260,     4,
       4,     4,   354,     5,     5,  2174,     4,  2734,     5,    56,
       5,     4,  2616,     5,   276,     5,     4,  2505,     5,     5,
      67,     4,  2237,     5,     4,     4,  2605,     5,     4,     4,
       4,     4,    32,     5,  2073,     5,     4,     4,     4,     4,
       4,  2679,     5,     4,     4,    92,    93,     5,     5,     4,
       4,  2675,     5,   100,     5,     5,     4,  2180,     5,   106,
       5,     5,     4,   964,     4,    -1,     5,     5,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,     5,
     127,    -1,    -1,   130,  2207,    -1,    -1,    -1,  2211,  2212,
      -1,  2214,  2215,  2689,  2690,  2218,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,   150,  2227,  2228,  2229,    -1,   734,    -1,
      -1,   158,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
    2243,  2244,  2245,  2246,    -1,  2248,  2249,  2250,  2251,  2252,
    2253,    -1,  2255,    -1,    -1,  2258,  2259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   607,    -1,    -1,   195,    -1,
      -1,    -1,    -1,    -1,  2277,    -1,   203,  2280,  2281,    -1,
      -1,    -1,  2285,    -1,    -1,    -1,  2289,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   182,    -1,   184,   185,    -1,   187,   188,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,   661,
      -1,    -1,   249,    -1,   666,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2335,   260,    -1,   215,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   276,
      -1,    -1,    -1,   233,   234,    -1,    -1,    -1,   285,    -1,
     287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   348,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2407,    -1,    -1,   287,  2411,    -1,
      -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,  2421,  2422,
      -1,    -1,    -1,    -1,  2427,  2428,    -1,   307,  2431,  2432,
      -1,    -1,    -1,    -1,  2437,    -1,    -1,  2440,  2441,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2459,  2460,    -1,  2462,
    2463,  2464,  2465,  2466,    -1,  2468,  2469,    -1,    -1,    -1,
    2473,    -1,    -1,    -1,   816,    -1,    -1,  2027,    -1,    -1,
      -1,    -1,  2485,    -1,    -1,    -1,    -1,  2490,    -1,    -1,
      -1,    -1,    19,  2043,  2044,  2045,    -1,    -1,  2048,    -1,
    2050,  2051,    -1,  2506,  2054,  2055,  2056,    -1,    -1,  2059,
    2060,    -1,    -1,  2063,    -1,  2065,  2066,    -1,  2068,    -1,
      -1,    -1,   498,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      57,    -1,   508,    -1,    -1,   415,    -1,   513,    -1,    -1,
      -1,   517,    -1,    -1,    -1,  2548,   426,    -1,    -1,    -1,
    2553,    -1,  2555,    -1,    -1,   435,    -1,    -1,  2561,    -1,
      -1,  1342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2574,    -1,  1354,    -1,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,
    2639,  1372,  1373,  2596,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   583,    -1,    -1,
      -1,    -1,    -1,  2616,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   503,   504,    -1,  2176,    -1,    -1,  2179,
     157,    -1,    -1,    -1,  2184,    -1,   516,  2187,    -1,    -1,
    2643,   521,    -1,    -1,    -1,  2648,    -1,  2650,    -1,    -1,
     530,    -1,    -1,    -1,  2657,    -1,  2206,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,  2667,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2689,  2690,    -1,    -1,
     217,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,  1041,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2713,    -1,    -1,  2716,    -1,    -1,  2719,    -1,    -1,   695,
     600,   601,   602,   603,    -1,    -1,   702,  2730,  2731,  2732,
    2733,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2742,
      -1,    -1,  2745,  2293,    -1,    -1,    -1,    -1,    -1,  2752,
      -1,  2754,    -1,  1095,   281,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1105,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2324,    -1,    -1,    -1,    -1,    -1,
     660,    -1,    -1,    -1,    -1,  2704,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    -1,    -1,    -1,  2736,    -1,    -1,
    2739,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   952,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   819,    -1,    -1,    -1,    -1,    -1,    -1,
     826,    -1,    -1,  2403,    -1,    -1,    -1,    -1,    -1,    -1,
     984,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1213,  1214,  2423,    -1,    -1,    -1,    -1,    -1,    -1,
    2430,    -1,    -1,  2433,  2434,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   871,   872,    -1,    -1,    -1,
     876,    -1,    -1,   879,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     820,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   832,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,  1758,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1766,  1767,    -1,    -1,   869,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,  2549,
    1781,  1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,  1792,  1793,    -1,    -1,    -1,   992,    -1,  2568,    -1,
      -1,    -1,  1803,  1804,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1813,  1814,    -1,    -1,    -1,    -1,  1819,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1829,    -1,
      -1,    -1,    -1,  1395,    -1,   102,    -1,    -1,    -1,  1401,
      -1,    -1,   942,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,     3,
       4,  1423,    -1,    -1,  1426,    -1,    -1,    -1,  1430,    -1,
      -1,  2641,  2642,    -1,  2644,    19,  2646,  2647,    -1,  2649,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1451,
     157,    -1,    -1,    -1,    -1,  1457,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1465,    -1,    -1,  1468,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1477,  1478,  1017,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,  1488,   194,    -1,  2699,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   210,   211,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,   222,    -1,    -1,   102,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1069,
      -1,    -1,    -1,    -1,    -1,    -1,  2746,    57,    -1,  1079,
      -1,    -1,  1326,  1327,  1328,    -1,    -1,    -1,    -1,    -1,
    1186,     4,  1336,  1337,  1338,    -1,    -1,    -1,    -1,  1343,
    1344,  1345,    -1,    -1,  1348,  1349,    19,  1351,  1352,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,
    1216,    -1,   102,    -1,    -1,  1221,    -1,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,  1231,    -1,  1381,  1382,    -1,
      -1,  1385,  1386,    -1,    -1,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    -1,    -1,    -1,   157,   222,   346,
      -1,  1181,    -1,    -1,   351,   352,  2087,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,  2097,    -1,  1198,    -1,
    2101,  2102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2110,
    2111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2119,  2120,
      -1,    -1,  1222,    -1,  2125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1232,    -1,  2135,  2136,    -1,   217,    -1,    -1,
      -1,    -1,   222,    -1,   157,  2146,  2147,    -1,    -1,    -1,
      -1,  1251,    -1,    -1,    -1,    -1,  2157,    -1,    -1,    -1,
      -1,  1261,    -1,    -1,    -1,  2166,  1266,  2168,    -1,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1858,    -1,    -1,  1399,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,    -1,  1429,
      -1,  1527,  1894,    -1,    -1,    -1,    -1,  1533,  2339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2349,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2358,  1458,    -1,
      -1,  1461,    -1,    -1,    -1,    -1,  2367,    -1,    -1,    -1,
      -1,  1471,  1472,  2374,    19,    -1,    -1,    -1,    -1,  1479,
      -1,    -1,    -1,    -1,  2385,    -1,  1486,    -1,    -1,    -1,
    2391,    -1,    -1,  2394,    -1,  1739,  2397,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1752,    -1,
      -1,    -1,    57,    -1,  1610,    -1,    -1,    -1,  1762,    -1,
    1616,    -1,    -1,    -1,    -1,    -1,  1526,    -1,    -1,  1529,
    1530,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1538,    -1,
      -1,    -1,    -1,    -1,    -1,  1641,    -1,    -1,    -1,    -1,
      -1,  1647,    -1,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1676,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1684,    -1,
    1834,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   157,  2514,  1614,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2523,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2532,  1632,    -1,    -1,    -1,    -1,  2538,    -1,    -1,
      -1,  2542,    -1,    -1,  2545,    -1,    -1,    -1,  1648,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1663,    -1,  1665,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,  1675,    -1,   222,  1678,    -1,
    1680,  1681,  1682,  1683,    -1,    -1,  1686,    -1,    -1,  1689,
      -1,    -1,  1692,  1693,    -1,  1695,  1696,  1697,  1698,    -1,
    1700,  1701,    -1,    -1,    -1,    -1,  1706,  1707,  1708,    -1,
      -1,  1711,  1712,    -1,    -1,    -1,    -1,  1717,  1718,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1839,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1861,    -1,    -1,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    -1,    -1,    -1,  1895,
    1896,  2263,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1912,  1913,    -1,    -1,
      -1,  1917,  1918,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1841,  2086,    -1,    -1,  1845,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1857,    -1,    -1,
    1860,  1957,    -1,    -1,  1960,  1961,    -1,    -1,    -1,    -1,
      -1,    -1,  1968,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2126,  2127,  2128,  2129,  2130,    -1,  2132,  2133,
    1890,    -1,    -1,  2137,  2138,  2139,  2140,  2141,    -1,  2143,
    2144,    -1,    -1,    -1,    -1,    -1,  2002,   157,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2018,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2041,  1946,    -1,    -1,    -1,
    2046,   243,    -1,   245,    -1,    -1,  2052,    -1,    -1,    -1,
      -1,  2057,    -1,    -1,    -1,  2061,    -1,    -1,  2064,    -1,
      -1,  2067,    -1,  2069,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2455,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2475,    -1,    -1,    -1,  2479,    -1,  2019,
      -1,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2062,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,  2338,    -1,    -1,  2341,  2342,  2343,
    2344,  2345,    -1,  2347,  2348,    -1,  2350,  2351,  2352,  2353,
    2354,    -1,  2356,  2357,    -1,  2359,  2360,  2361,  2362,  2363,
      -1,  2365,  2366,    -1,  2368,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2378,  2379,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2389,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,  2254,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2178,    -1,
      -1,  2181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2189,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,  2205,    -1,    70,  2208,    -1,
      -1,    18,    19,  2213,    -1,    -1,  2216,  2217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2725,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2517,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2526,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2535,    -1,  2537,   157,   102,    -1,  2541,    -1,    -1,
      -1,    -1,    -1,    -1,  2400,  2305,   169,    -1,    -1,   116,
    2406,    -1,    -1,    -1,  2410,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,    -1,
    2426,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
     157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2628,    -1,  2630,    -1,  2632,    -1,
      -1,  2635,    -1,  2637,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     273,    -1,    -1,    -1,    -1,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2435,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2446,    -1,    -1,    -1,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,    -1,   342,
      -1,    -1,   289,  2579,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2494,    -1,    -1,    -1,  2498,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2551,  2552,    -1,  2554,    -1,    -1,    -1,    -1,  2559,
    2560,    -1,    -1,    -1,  2564,    49,    50,    -1,    -1,    53,
      -1,    -1,    56,    -1,    -1,  2671,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,  2692,  2597,    -1,    83,
      84,    -1,    -1,    19,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,  2621,   106,    -1,    -1,    -1,   110,   111,    -1,    -1,
     114,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    19,
      53,  2737,    -1,    -1,    60,    -1,   130,    60,    -1,    -1,
      63,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,  2757,    75,    76,  2760,    -1,   150,    -1,    -1,    -1,
      83,    -1,    19,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   110,   111,    -1,
      -1,   114,    -1,    -1,  2704,    -1,    -1,    -1,    -1,    -1,
      -1,   195,    -1,    -1,    -1,    -1,    -1,   130,    -1,    -1,
      -1,  2721,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2736,   150,    -1,  2739,
      -1,   157,   226,    -1,   228,    -1,    -1,    -1,    -1,    -1,
     234,   235,    -1,    -1,    -1,   102,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,   249,   250,    -1,   181,    -1,
      -1,    -1,    -1,    -1,    -1,   259,   260,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,    -1,   287,    -1,    -1,   222,    -1,    -1,    -1,
     157,    -1,    -1,   226,    -1,   228,   300,    -1,   302,    -1,
      -1,   234,   235,    -1,   308,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   285,   289,   287,   222,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   308,    -1,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,    -1,    -1,    -1,    -1,   342,
      -1,    -1,    -1,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,    -1,    -1,    -1,    -1,    -1,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,    41,    -1,    -1,    44,    -1,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,    66,
      -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,
      -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   175,    -1,
      -1,   178,   179,   180,    -1,    -1,   183,   184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   216,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   229,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      41,   238,    -1,    44,    -1,   242,    47,    -1,   245,    -1,
     247,    -1,   249,    -1,    -1,    -1,    -1,   254,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,    70,
     267,    -1,    -1,    -1,    -1,    -1,   273,    78,    -1,    80,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    -1,
      -1,   288,   289,    94,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   301,    -1,   303,    -1,    -1,    -1,
      -1,    -1,   309,    -1,    -1,   312,   313,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
      -1,   152,   153,   350,    -1,   156,    -1,    -1,    -1,   160,
      -1,   162,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,   184,    -1,    -1,   187,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   197,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   215,   216,    -1,    -1,    -1,    -1,
      -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,   249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,
      -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,
     311,    -1,   313,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   350
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    96,    97,   126,   138,   142,   145,
     149,   150,   156,   162,   175,   178,   179,   180,   183,   184,
     197,   215,   216,   217,   229,   231,   238,   242,   245,   247,
     249,   254,   267,   273,   288,   289,   301,   303,   309,   312,
     313,   343,   350,   356,    67,    12,    54,    72,   101,   119,
     123,   135,   294,   390,     3,     4,   294,   357,   395,   187,
     193,   233,   258,   304,   349,   397,   285,     4,    40,   112,
     194,   247,   402,    28,   151,   173,   177,   230,   269,   277,
     278,   372,   404,    84,   100,   175,   219,   254,   405,    40,
      60,   112,   194,   289,   357,   414,     4,    19,    40,    57,
     102,   120,   157,   194,   202,   210,   211,   217,   222,   297,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   346,
     351,   352,   359,   367,   368,   369,   416,    33,   417,   359,
      44,    47,    77,    85,   143,   192,   210,   211,   218,   220,
     247,   313,   358,   145,   419,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    94,    96,
     125,   142,   152,   153,   156,   160,   162,   183,   184,   187,
     197,   215,   216,   223,   247,   249,   273,   288,   289,   298,
     305,   311,   313,   350,   420,    84,   100,   462,    19,    44,
      78,    85,    95,    96,   102,   125,   142,   156,   157,   163,
     183,   222,   273,   283,   313,   465,   359,    89,   117,   185,
     200,   261,   303,   313,   471,    16,    26,   113,   125,   159,
     207,   221,   474,   232,   492,     5,    67,    89,   140,   303,
     350,   359,   493,     5,   494,    58,   227,   242,   304,   510,
      46,    65,    67,   182,   241,   283,   293,   529,    67,   203,
     345,   351,   353,   530,    39,   194,   233,   294,   357,   367,
     369,   531,     5,   303,   313,   359,   534,    71,   169,   246,
     255,   535,     4,   536,    89,   510,    62,   283,   307,   543,
     194,   294,   357,   544,    26,   113,   125,   207,   221,   546,
      51,   100,   109,   137,   296,   561,   562,     4,    37,    48,
      75,   150,   186,   255,   290,   307,   385,     4,   125,   206,
     563,   294,   357,   565,    16,    23,   243,   245,   368,   566,
     232,   570,   294,   357,   571,     0,     5,   141,    60,   357,
     391,   270,     5,     4,   294,   357,   392,     5,    32,   282,
     393,   124,   357,   394,   124,   357,   396,   357,     4,   193,
     251,   400,   187,   304,   348,   349,   357,   399,   359,   139,
     176,   398,   197,   357,    79,   172,   251,   357,   401,     5,
     357,     4,   247,   403,   357,   357,     5,   228,   406,    31,
     407,     5,   408,     5,   412,     5,    31,   413,   357,     9,
      10,    11,   357,   363,   364,   365,   366,   357,   357,    40,
     112,   194,   357,   415,   357,   194,   367,   369,   357,    35,
     107,   128,   129,   136,   154,   164,   374,   357,     4,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   118,
      67,    54,    72,    89,   101,   119,   123,   135,   174,   421,
     119,   423,   187,   193,   233,   258,   304,   348,   349,   357,
     409,   424,   285,   427,   169,   428,   169,   177,   430,    66,
      67,    70,    92,   169,   186,   208,   273,   342,   367,   432,
     357,   369,   435,    60,   289,   367,   436,   281,   367,   369,
     437,    33,   438,   367,   369,   439,     4,   367,   369,   440,
      45,    60,    82,   101,   118,   121,   147,   148,   199,   209,
     270,   271,   342,   444,   214,   306,   450,     5,    90,     6,
      89,   121,   442,     5,    66,   369,   441,    16,   510,    46,
      67,    82,   182,   241,   283,   293,   451,    67,   233,   452,
     284,    62,   283,   307,   453,    21,   135,   240,   268,   454,
      37,    48,    75,   150,   186,   255,   307,   455,   369,    90,
      16,   196,   460,   367,   463,    73,   466,    31,   467,    44,
      88,   192,   468,   150,   219,   260,   299,   469,   367,    18,
      59,   116,   173,   289,   367,   470,     4,   193,   473,     5,
       4,     6,   121,   357,     4,     5,   247,   475,     5,   477,
       5,   118,   192,   247,   271,   478,    94,   112,   187,   491,
       5,   489,     5,   271,   490,     4,     5,   359,   359,   357,
     357,     5,     4,     5,    61,    67,    74,    76,    81,    84,
      90,   100,   106,   115,   130,   150,   165,   174,   175,   195,
     219,   233,   235,   249,   254,   260,   267,   285,   299,   300,
     302,   342,   495,   213,   292,   371,     5,     4,   197,   204,
     205,   241,   347,   370,   357,   367,   357,     5,   357,    40,
     112,   357,   533,   359,   357,   367,   369,   532,   357,   374,
     357,     4,   368,    55,    91,   141,   247,   537,     4,     4,
     357,     4,   150,   260,   538,     5,   367,     4,    40,   112,
     357,   545,   357,    98,    62,   121,   247,   274,   547,   121,
     560,    62,   118,   121,   157,   192,   244,   247,   271,   274,
     284,   549,   550,    62,   121,   274,   559,     5,     4,    34,
     108,   203,   542,    67,   359,   386,    67,   359,   387,    67,
     359,   388,    13,   189,   541,   357,   357,   226,   357,   389,
     357,   271,     4,   357,   357,     4,   569,     4,   287,   567,
       4,   287,   568,     4,   374,   124,   357,   572,   357,   357,
       4,     5,   357,    12,   357,   357,   357,    30,    95,   163,
     251,   256,   373,   373,     4,   197,   357,   357,     4,     4,
       4,   357,   357,   357,   357,     4,     4,     5,     5,   367,
       5,   357,   357,   363,   365,   365,   367,   357,   357,   357,
     357,   357,   357,   357,   367,   369,   366,   357,   357,   366,
     357,     5,   270,   104,   187,   422,   193,   251,   425,   169,
      79,   172,   251,   426,   139,   176,   410,   410,     4,   429,
       4,   431,   193,   258,   433,   177,   434,   169,   374,   357,
     357,   367,   367,   374,   374,   374,   367,   374,   357,   367,
       4,   447,     4,   369,   445,   196,     4,   166,   313,   446,
     196,   367,     4,   132,   294,   449,     5,     5,     4,   196,
     357,     4,     5,    61,    67,   115,   130,   144,   150,   155,
     208,   228,   233,   235,   259,   260,   267,   285,   342,   504,
     369,   188,   188,    67,   456,    67,   457,    67,   458,   226,
     459,   357,     5,   227,   461,   368,   374,     5,   367,   367,
     367,   367,     4,   359,     4,     4,   196,   357,    14,    15,
      62,   190,   191,   264,   274,   275,   306,    88,     5,     5,
      14,    15,    62,   190,   191,   264,   274,   275,   279,   306,
      88,   157,   162,   368,   481,   486,    88,   157,     5,   479,
       4,     4,    14,    62,   190,   264,   274,   306,     5,     5,
       4,   357,   368,    20,    21,    22,    49,    50,    53,    56,
      63,    67,    75,    76,    83,    84,   100,   106,   110,   111,
     114,   130,   150,   172,   195,   226,   228,   234,   235,   249,
     250,   259,   260,   285,   287,   300,   302,   308,   342,    67,
      81,    90,   100,   130,   150,   195,   235,   260,   300,   302,
       4,    30,   161,   214,   240,   498,     5,    64,   105,   237,
     252,   253,   344,   345,   503,   100,   496,    17,    40,   112,
     194,   502,     4,     5,    17,   212,   295,   357,   260,   503,
     511,   125,   503,   512,    36,    40,   112,   133,   194,   294,
     357,   513,   367,   359,    92,   100,   106,   127,   150,   158,
     195,   203,   249,   260,   276,   516,    40,   112,   194,     5,
     286,    17,   212,   295,   520,   287,   359,   521,     5,   100,
     106,   303,    17,    17,     4,   357,   357,   357,   357,   357,
     357,   374,   357,   357,   366,   357,     4,   374,     4,    40,
     112,   194,   265,   539,    40,   112,   194,   265,   540,     4,
      98,     5,     5,    88,     4,     5,     5,    88,     5,   550,
      62,   121,   157,   274,   554,    62,   121,   274,   558,    88,
     157,    62,   121,   274,   552,     4,    62,   121,   274,   551,
       5,     5,     4,     4,     5,     5,     5,   357,   357,   357,
       4,   357,   564,   357,   357,     6,   368,     4,     5,     4,
       4,     5,     4,    98,   262,   375,   357,   357,    12,     5,
      12,   357,   357,    12,     4,    12,     4,     4,   357,   357,
     357,     4,   359,     4,     4,   374,   367,   374,   357,   357,
     357,   367,   357,   366,   357,   357,     5,     5,   357,   369,
     357,   367,   357,   374,   374,   375,   375,   375,   374,   366,
     357,   374,   357,   134,   248,   360,   448,   166,     5,     4,
     374,   157,   157,     4,     5,     4,     4,   357,   443,   357,
      20,    21,    22,    49,    50,    53,    60,    63,    67,    75,
      76,    83,   110,   111,   114,   130,   150,   172,   181,   226,
     228,   234,   235,   250,   260,   285,   287,   298,   308,   342,
      67,   130,   155,   235,   285,    30,   161,   214,   240,   505,
     357,   208,   357,   506,    17,   357,   259,   516,   259,   208,
     357,   507,   287,   508,    17,    99,   357,   357,     5,   375,
      57,   367,     4,     5,   472,   357,     5,     5,     5,   157,
     184,   379,   379,   165,   266,   377,     4,     4,     5,     5,
     476,   272,   272,     5,     5,     5,    17,   159,   378,   378,
     377,     4,     4,   377,     5,     5,   480,   162,   341,   368,
     484,     5,   483,     5,     5,   487,     5,   488,     5,    14,
      15,    62,   190,   191,   264,   274,   275,   279,   306,     4,
       4,     5,     5,   379,   377,     4,     5,     5,   374,    83,
     152,   224,   225,   239,   280,   382,     7,     8,   357,   362,
     240,   122,   240,   240,   106,    40,    67,   100,   106,   112,
     130,   150,   165,   195,   235,   249,   260,   287,   300,   302,
     303,   342,   497,   122,   240,     5,    27,   167,   240,   283,
     139,   106,    22,    50,    53,    83,   111,   114,   228,   259,
      22,    50,    53,    56,    83,   111,   114,   228,   259,   285,
      40,   122,   240,   240,   106,     5,   212,    27,   226,    36,
     133,   294,   357,   263,   270,   122,   245,   367,   516,    40,
     131,   226,   283,   245,   212,     5,     5,   249,    27,   226,
       4,     5,     5,   212,    36,   133,   294,   357,   516,   212,
     359,     4,     4,   357,     5,   306,    22,    27,    49,    50,
      52,    53,    63,    75,    76,    83,    86,   103,   110,   111,
     114,   172,   228,   234,   250,   259,   286,   287,   308,   353,
     499,   357,   357,   357,   357,   357,   503,   367,     5,     4,
       5,   357,   357,   367,   357,   359,   357,   357,   503,     5,
     357,   357,   359,     5,    17,     5,     5,   357,   357,   366,
     357,   357,     4,   357,   357,   112,   357,   357,   112,     4,
      42,    43,   170,   171,   198,   384,   384,    62,   121,   274,
     548,   384,     5,    62,   121,   274,   553,     5,     5,    62,
     121,   274,   555,     4,     5,     5,     4,    62,   121,   274,
     557,    62,   121,   274,   556,     5,     5,     4,     5,     5,
       4,   384,   384,   384,   357,   357,   357,     4,   367,   357,
     368,   374,     5,     5,    12,   357,   367,   369,   357,    12,
     357,   357,   357,    60,   357,     6,     4,   357,   357,    47,
     273,   411,     5,   359,   359,   374,   357,     4,     4,     4,
     374,   367,   357,   357,   357,   357,   374,   367,   375,   366,
     357,     4,   375,   357,    38,    38,     4,   369,     5,    24,
      25,    98,   376,     4,   367,   357,   357,     4,   357,     5,
      83,   152,   224,   225,   239,   280,   367,   369,   240,   122,
     240,   240,    21,   240,   367,   122,   240,    27,   167,   240,
     283,   139,    21,   240,   122,   240,   240,    21,   240,    27,
     168,   226,   168,   263,   270,   122,   168,   226,   291,   516,
     131,   168,   226,   283,     4,   249,    27,   168,   226,   516,
     208,   357,   357,   357,   357,   357,   357,   196,   357,   357,
      20,   236,   464,     4,     4,   357,   379,   379,   379,     4,
     379,   379,   379,    14,    15,    62,   190,   191,   264,   274,
     275,   306,   378,   379,   379,   379,   379,   379,     4,   379,
     379,     4,   378,    14,    15,    62,   190,   191,   264,   274,
     275,   306,     5,   482,     5,   485,     5,     5,    14,    15,
      62,   190,   191,   264,   274,   275,   279,   306,     5,    14,
      15,    62,   190,   191,   264,   274,   275,   279,   306,     5,
      14,    15,    62,   190,   191,   264,   274,   275,   279,   306,
      14,    15,    62,   190,   191,   264,   274,   275,   306,   272,
       5,     5,     5,   378,   378,   377,     4,     4,   377,     5,
       4,     4,   379,   379,     4,   379,   379,     5,   359,   367,
     369,     5,   357,   359,   357,     5,   357,     5,   362,   106,
     195,   249,   106,   195,   249,     5,   359,   357,   359,     5,
     357,   367,   359,     5,   362,   240,   240,    21,   240,    21,
     240,   240,    21,   240,   310,   310,     4,     4,     4,   497,
       4,     4,     4,   310,   310,     4,     5,     4,   359,   357,
       5,   357,     5,   362,   359,   367,   367,   357,    27,    49,
      52,    63,    86,   103,   353,   380,     4,   359,   357,   374,
     359,     5,   367,   367,   357,   359,   359,   367,   367,   357,
     359,   357,     5,   357,   226,   226,   357,   357,   226,   357,
     226,   357,   357,   509,   517,   357,   226,   226,   357,   357,
     357,   357,   357,   357,   357,   357,     5,   306,   357,   500,
     357,   357,   226,   357,   357,   357,   357,   367,   374,     5,
     367,   367,   357,   357,   374,   357,   357,   357,   367,   357,
     357,     5,     4,   357,   357,   357,   357,     5,     5,     4,
     384,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   357,   357,   357,   357,
     374,   357,   367,   369,   357,   374,   357,   357,   357,   357,
     357,     5,   357,     4,     6,   357,   357,     4,   367,   357,
     374,   177,   372,   357,   372,   375,   374,   367,   357,   357,
       4,   357,   367,   367,   357,     4,     5,     5,     5,     5,
       5,   367,   374,   367,   367,   367,   367,   369,   367,   374,
     367,   367,   367,   369,   367,   367,   367,   367,   369,   367,
     367,   367,   357,   367,   367,   367,   367,   367,   367,   367,
     357,   357,     4,   357,     5,     4,   357,   379,     5,     5,
       5,   377,     4,     4,     5,   379,   378,     4,   379,     5,
       5,     5,   378,   378,   377,     4,     4,     5,    14,    15,
      62,   190,   191,   264,   274,   275,   306,    14,    15,    62,
     190,   191,   264,   274,   275,   306,    14,    15,    62,   190,
     191,   264,   274,   275,   306,   272,     5,     5,     5,   378,
     378,   377,     4,     4,   377,     5,   272,     5,     5,     5,
     378,   378,   377,     4,     4,   377,     5,   272,     5,     5,
       5,   378,   378,   377,     4,     4,   377,     5,     5,     5,
       5,   378,   378,   377,     4,     4,     5,   378,     4,     4,
     378,     4,     4,   379,     5,   374,   367,   357,   357,   367,
     357,     5,   362,     5,   367,   359,     5,   367,   374,     5,
     362,   357,   357,   357,   357,   357,   357,   357,   357,   357,
       4,     4,     5,     4,     4,   357,   367,   357,     5,   362,
     359,   374,   374,   357,   366,   374,   374,   357,   374,   374,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
      56,    67,    93,   130,   285,   287,   342,   514,   515,   516,
     527,   528,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   367,     5,   357,   357,   357,   357,
       4,     4,   374,   375,     4,   501,   374,   374,   366,   357,
       4,   374,     4,   384,   384,   384,   362,   357,   357,   357,
     374,   357,   366,   357,   357,    12,     5,     5,     4,   357,
     357,     4,   374,   367,   357,   357,   375,   376,   357,     5,
     357,   369,     5,     5,     5,     5,     5,   374,   376,   376,
     376,   374,   376,   375,   376,   376,   374,   376,   376,   376,
     374,   376,   376,   374,   367,   376,   374,   376,   376,   374,
     376,   374,     4,   369,     5,   357,     4,   379,   378,     4,
     378,     5,     5,     5,   378,   378,   377,     4,     4,     5,
       5,     5,     5,   378,   378,   377,     4,     4,     5,     5,
       5,     5,   378,   378,   377,     4,     4,     5,   378,   379,
     379,   379,   379,   379,     4,   379,   379,     4,   378,   378,
     379,   379,   379,   379,   379,     4,   379,   379,     4,   378,
     378,     4,     4,   378,     4,   378,   378,     4,     4,     4,
     368,   376,     4,   367,   376,   357,   367,     4,   376,   376,
     367,     4,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   367,   376,   357,   367,     4,   366,   366,
     367,   366,   366,   367,   367,   366,   366,   357,   357,   357,
     357,   357,   357,   362,   357,   357,   357,   354,   354,   354,
     354,   354,   354,   354,   515,   354,   362,   357,   357,   357,
     357,   362,   357,   357,   357,   357,   357,   357,   374,   357,
     306,   361,   362,   357,   357,   375,   359,     4,     4,   375,
       4,   357,   366,   357,    60,   357,     5,     5,   357,     4,
     372,   376,     5,     4,     5,     4,     5,   367,     5,   375,
     376,   375,   375,   375,     5,     4,   357,   379,   378,   379,
     379,   379,   379,   379,     4,   379,   379,   378,   379,   379,
     379,   379,   379,     4,   379,   379,   378,   379,   379,   379,
     379,   379,     4,   379,   379,   378,   379,   378,     4,   379,
     379,   378,     4,   379,   378,     4,   378,   378,   374,   367,
     376,     4,   374,   357,   374,   357,   357,   357,   376,     4,
     374,   357,   366,   376,   357,   366,   376,   376,   367,   357,
       4,   381,   381,   357,   357,   381,   362,   381,   517,   367,
     497,     5,     4,     5,     5,     5,     4,   359,   362,   381,
     381,   357,   357,   362,   357,   357,   357,   357,   357,   366,
     357,     5,   517,   357,   381,   359,   518,   519,     5,   359,
       4,     5,   357,     5,     4,     6,   357,    32,   282,   418,
     367,     5,    32,   282,   383,   367,   418,   357,   378,   379,
     378,   379,   378,   379,   379,   378,   379,   378,   378,   357,
     376,   367,   367,   357,   367,   357,   367,   367,   357,   367,
     376,     4,   517,   517,   361,   357,   517,     4,   517,   374,
       5,     4,     4,   517,   517,   361,   357,     4,   517,   517,
     357,   367,   517,   517,   517,   518,   524,   525,   516,   522,
     523,     4,     5,     5,     6,     4,   187,   304,   349,   357,
     409,     4,   367,     4,   379,   379,   379,   379,   379,   368,
     376,   376,   357,   376,     4,   376,   376,   357,   376,   357,
     517,   517,     4,   357,   517,     5,   357,   517,     4,   357,
     517,   374,   524,   526,   527,   354,   523,     5,     5,     4,
     357,   410,   357,   410,   374,   376,     4,   367,   369,     4,
     362,   361,   357,   357,   361,   357,   367,   527,   359,     5,
       5,   357,   357,   357,   357,   383,     5,   367,   369,   374,
     367,   369,   517,   357,     4,   517,   357,   376,     5,     5,
     357,     5,   357,   374,   374,     4,   517,     4,     5,     5,
       5,   361,   361,   517,   517,   517
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
#line 463 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 464 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 466 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 467 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 469 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 476 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 481 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 482 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 484 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 491 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 495 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 498 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 503 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 505 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 507 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 509 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 516 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 517 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 520 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 521 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 522 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 523 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 524 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 525 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 526 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 527 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 528 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 529 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 530 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 531 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 534 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 536 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 537 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 538 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 539 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 541 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 542 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 543 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 544 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 547 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 548 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 549 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 550 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 554 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 555 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 558 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 559 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 560 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 563 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 566 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 569 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 573 "frame/parser.Y"
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
#line 585 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 592 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 599 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 610 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 643 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 644 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 647 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 648 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 649 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OPAQUE;;}
    break;

  case 137:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OPAQUE;;}
    break;

  case 138:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::TRANSPARENT;;}
    break;

  case 139:
#line 660 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 140:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 141:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 142:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 143:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 144:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 145:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 146:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 147:
#line 670 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 148:
#line 671 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 149:
#line 672 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 150:
#line 673 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 151:
#line 674 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 152:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 154:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 155:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 156:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 158:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 159:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 160:
#line 687 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 161:
#line 688 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 162:
#line 689 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 163:
#line 692 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 164:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 165:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 166:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 167:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 168:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 169:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 170:
#line 703 "frame/parser.Y"
    {;}
    break;

  case 171:
#line 704 "frame/parser.Y"
    {;}
    break;

  case 172:
#line 705 "frame/parser.Y"
    {;}
    break;

  case 173:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 174:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 175:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 176:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 177:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 178:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 179:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 180:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 181:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 182:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 183:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 184:
#line 723 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 185:
#line 724 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 186:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 187:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 188:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 189:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 190:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 191:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 192:
#line 735 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 193:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 194:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 195:
#line 740 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 196:
#line 741 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 197:
#line 742 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 198:
#line 743 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 199:
#line 744 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 200:
#line 745 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 205:
#line 752 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 206:
#line 753 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 207:
#line 754 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 208:
#line 756 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 209:
#line 759 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 760 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 763 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 764 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 767 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 768 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 771 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 216:
#line 773 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 218:
#line 777 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 219:
#line 778 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 222:
#line 781 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 224:
#line 783 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 225:
#line 786 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 226:
#line 787 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 790 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 228:
#line 791 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 793 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 230:
#line 795 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 231:
#line 796 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 232:
#line 797 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 235:
#line 804 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 237:
#line 808 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 239:
#line 813 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 240:
#line 815 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 241:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 242:
#line 822 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 243:
#line 823 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 245:
#line 827 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 246:
#line 828 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 247:
#line 829 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 835 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 252:
#line 836 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 254:
#line 839 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 255:
#line 844 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 256:
#line 845 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 257:
#line 848 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 258:
#line 849 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 259:
#line 850 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 260:
#line 851 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 261:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 262:
#line 855 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 263:
#line 856 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 264:
#line 857 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 860 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 267:
#line 867 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 268:
#line 872 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 269:
#line 879 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 270:
#line 881 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 271:
#line 882 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 273:
#line 884 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 274:
#line 888 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 275:
#line 890 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 276:
#line 892 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 277:
#line 893 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 283:
#line 904 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 284:
#line 906 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 285:
#line 908 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 286:
#line 913 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 287:
#line 917 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 288:
#line 920 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 289:
#line 921 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 290:
#line 924 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 291:
#line 925 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 292:
#line 927 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 293:
#line 933 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 294:
#line 934 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 295:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 296:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 297:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 298:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 301:
#line 947 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 303:
#line 952 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 304:
#line 954 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 305:
#line 957 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 306:
#line 959 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 307:
#line 962 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 309:
#line 964 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 310:
#line 965 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 311:
#line 966 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 972 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 973 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 316:
#line 974 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 978 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 318:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 319:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 320:
#line 982 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 321:
#line 985 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 322:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 323:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 324:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 994 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 326:
#line 997 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 327:
#line 998 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 328:
#line 999 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 329:
#line 1002 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 330:
#line 1005 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 344:
#line 1019 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 347:
#line 1022 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 348:
#line 1024 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 351:
#line 1027 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 352:
#line 1028 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 355:
#line 1031 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 356:
#line 1032 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 358:
#line 1035 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 360:
#line 1037 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 362:
#line 1039 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 364:
#line 1041 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 365:
#line 1043 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 366:
#line 1045 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 368:
#line 1047 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 369:
#line 1050 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 370:
#line 1051 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 371:
#line 1052 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 372:
#line 1053 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 373:
#line 1054 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 374:
#line 1055 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 376:
#line 1057 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 377:
#line 1060 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 378:
#line 1061 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 379:
#line 1062 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 380:
#line 1065 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 381:
#line 1068 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 382:
#line 1070 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 383:
#line 1072 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 384:
#line 1073 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 385:
#line 1074 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 387:
#line 1076 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 389:
#line 1079 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 390:
#line 1085 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 391:
#line 1086 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 392:
#line 1089 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 393:
#line 1090 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 394:
#line 1091 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 395:
#line 1094 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 396:
#line 1095 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 398:
#line 1101 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 399:
#line 1103 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 400:
#line 1105 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 401:
#line 1108 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 403:
#line 1110 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 404:
#line 1114 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 405:
#line 1118 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 407:
#line 1120 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 408:
#line 1121 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 409:
#line 1122 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 410:
#line 1123 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 411:
#line 1124 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 413:
#line 1126 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 414:
#line 1127 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 415:
#line 1130 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 416:
#line 1131 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 417:
#line 1132 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 418:
#line 1135 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 419:
#line 1136 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 420:
#line 1140 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 421:
#line 1142 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 422:
#line 1150 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 423:
#line 1152 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 424:
#line 1154 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 425:
#line 1157 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 426:
#line 1159 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1160 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 428:
#line 1163 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 429:
#line 1166 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 430:
#line 1168 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1172 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 432:
#line 1174 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 433:
#line 1177 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 434:
#line 1181 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 435:
#line 1182 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 436:
#line 1184 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 437:
#line 1187 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 440:
#line 1192 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 441:
#line 1193 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1194 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 445:
#line 1200 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 447:
#line 1202 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 451:
#line 1206 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 452:
#line 1207 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 453:
#line 1208 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 454:
#line 1210 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 456:
#line 1212 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 457:
#line 1215 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1217 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 459:
#line 1219 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 460:
#line 1220 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 461:
#line 1221 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 462:
#line 1222 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 463:
#line 1225 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 464:
#line 1226 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1230 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1232 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 467:
#line 1235 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 468:
#line 1238 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 469:
#line 1239 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1241 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 473:
#line 1248 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 474:
#line 1249 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 475:
#line 1250 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 476:
#line 1253 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 477:
#line 1254 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 478:
#line 1255 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 479:
#line 1256 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 480:
#line 1257 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 481:
#line 1258 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 482:
#line 1259 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 483:
#line 1262 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 484:
#line 1265 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 485:
#line 1266 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 486:
#line 1267 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 487:
#line 1270 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 488:
#line 1271 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 489:
#line 1272 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 490:
#line 1273 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 491:
#line 1274 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 492:
#line 1275 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 497:
#line 1282 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 498:
#line 1283 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 499:
#line 1284 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 500:
#line 1287 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 501:
#line 1288 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 502:
#line 1291 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 503:
#line 1292 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 504:
#line 1295 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 505:
#line 1296 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 506:
#line 1299 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 507:
#line 1300 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 508:
#line 1303 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 510:
#line 1305 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1308 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 512:
#line 1309 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 514:
#line 1313 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 515:
#line 1317 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 516:
#line 1320 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 517:
#line 1327 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 518:
#line 1328 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 519:
#line 1331 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 522:
#line 1334 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 523:
#line 1335 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 524:
#line 1336 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 525:
#line 1337 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 527:
#line 1339 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 528:
#line 1340 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 529:
#line 1341 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 531:
#line 1343 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 532:
#line 1344 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 533:
#line 1345 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 534:
#line 1346 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1350 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 537:
#line 1353 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 538:
#line 1354 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 539:
#line 1357 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 540:
#line 1358 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 541:
#line 1359 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 542:
#line 1360 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 543:
#line 1363 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 544:
#line 1364 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 545:
#line 1365 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 546:
#line 1366 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 547:
#line 1369 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 548:
#line 1370 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1371 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1372 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1373 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 552:
#line 1374 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1377 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 554:
#line 1378 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 555:
#line 1379 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 558:
#line 1383 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 559:
#line 1384 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 561:
#line 1390 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 562:
#line 1391 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1395 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 564:
#line 1397 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 565:
#line 1398 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1410 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1412 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1414 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1415 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 576:
#line 1417 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1423 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1430 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 588:
#line 1436 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1441 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1447 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1457 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 600:
#line 1462 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1464 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1466 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1474 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1475 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1476 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1477 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1478 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 613:
#line 1479 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1481 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 615:
#line 1483 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 616:
#line 1484 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1485 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1486 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 619:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1490 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1495 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 625:
#line 1496 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 633:
#line 1509 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 639:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 649:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 668:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1625 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1640 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1643 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 678:
#line 1646 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 679:
#line 1649 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1652 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 681:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 682:
#line 1659 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1660 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1661 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1662 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1663 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 687:
#line 1664 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1666 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 689:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 690:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1674 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1675 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1676 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1677 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1678 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1680 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 699:
#line 1681 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 702:
#line 1687 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1689 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1690 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 705:
#line 1692 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 706:
#line 1694 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1696 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1699 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1700 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 710:
#line 1703 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 711:
#line 1704 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1705 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 714:
#line 1715 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 715:
#line 1716 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 716:
#line 1717 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 717:
#line 1718 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 718:
#line 1719 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 719:
#line 1720 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 720:
#line 1721 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 721:
#line 1725 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 723:
#line 1733 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 724:
#line 1734 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 725:
#line 1736 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 726:
#line 1738 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 727:
#line 1739 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 728:
#line 1740 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 730:
#line 1741 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 731:
#line 1742 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 732:
#line 1743 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 734:
#line 1745 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 736:
#line 1748 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 737:
#line 1750 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 739:
#line 1755 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 741:
#line 1758 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 742:
#line 1760 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1763 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 744:
#line 1766 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1768 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1771 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 747:
#line 1774 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1777 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 749:
#line 1780 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 750:
#line 1784 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 751:
#line 1788 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 752:
#line 1793 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 753:
#line 1797 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 754:
#line 1798 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1800 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1801 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 757:
#line 1803 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1805 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 759:
#line 1807 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1809 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1810 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1812 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1814 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 764:
#line 1817 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 765:
#line 1821 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 766:
#line 1825 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1827 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1829 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1831 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1833 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1839 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1841 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1843 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 776:
#line 1845 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 777:
#line 1847 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 778:
#line 1849 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1851 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1852 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1854 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1856 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 783:
#line 1857 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1858 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1862 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1863 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 788:
#line 1864 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 789:
#line 1865 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 793:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1877 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1880 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 796:
#line 1884 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 797:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 798:
#line 1893 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1897 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 800:
#line 1898 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 801:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1901 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1903 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 804:
#line 1907 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 805:
#line 1908 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1909 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1911 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 808:
#line 1914 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1917 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1920 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1921 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1923 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1926 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 814:
#line 1930 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1932 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1933 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 817:
#line 1935 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 818:
#line 1938 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 819:
#line 1941 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 820:
#line 1942 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1944 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 822:
#line 1945 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 823:
#line 1946 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1948 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 825:
#line 1949 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1951 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1954 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 828:
#line 1957 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 829:
#line 1959 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 830:
#line 1960 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 834:
#line 1965 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 835:
#line 1966 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 836:
#line 1968 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 839:
#line 1973 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 840:
#line 1975 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 841:
#line 1976 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 844:
#line 1981 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 845:
#line 1982 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 846:
#line 1983 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 847:
#line 1984 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1985 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 849:
#line 1986 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1987 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 851:
#line 1988 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1989 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 853:
#line 1990 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1992 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1996 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1997 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 1998 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 861:
#line 2001 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 862:
#line 2002 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 863:
#line 2003 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 864:
#line 2004 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 2006 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 866:
#line 2007 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 867:
#line 2008 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 868:
#line 2009 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 869:
#line 2010 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 870:
#line 2011 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 871:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 872:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 873:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 874:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 875:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 876:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 877:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 878:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 879:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 880:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 881:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 882:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 883:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 884:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 885:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 886:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 887:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 888:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 889:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 890:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 891:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 892:
#line 2037 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 893:
#line 2038 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 894:
#line 2039 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 895:
#line 2040 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 896:
#line 2041 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 897:
#line 2043 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 898:
#line 2053 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2061 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2070 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2078 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2085 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2092 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2100 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2108 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2113 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2118 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2123 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2128 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2138 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2143 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2152 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2162 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2172 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2181 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2189 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2199 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2209 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2219 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2231 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2240 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2248 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2250 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 926:
#line 2252 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 927:
#line 2257 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 928:
#line 2260 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 929:
#line 2264 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 930:
#line 2266 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2267 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 932:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 933:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 934:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 935:
#line 2273 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 936:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 937:
#line 2275 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 938:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 940:
#line 2280 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 941:
#line 2281 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 942:
#line 2282 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 943:
#line 2283 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 945:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 946:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 947:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 949:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 950:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2299 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 952:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 953:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2311 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2312 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 961:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2325 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 967:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2338 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2350 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 984:
#line 2351 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 988:
#line 2359 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 989:
#line 2362 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2366 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 993:
#line 2369 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2372 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2374 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 997:
#line 2375 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2377 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2379 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2382 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2384 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2385 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1004:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2388 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2390 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2392 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2398 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1013:
#line 2399 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1014:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1015:
#line 2403 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1016:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1017:
#line 2405 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1019:
#line 2407 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1021:
#line 2411 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1022:
#line 2412 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1023:
#line 2413 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1024:
#line 2414 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1026:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1027:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1028:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1029:
#line 2421 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1030:
#line 2424 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1031:
#line 2425 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1032:
#line 2426 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1033:
#line 2427 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1034:
#line 2430 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1035:
#line 2431 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1036:
#line 2434 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1037:
#line 2435 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1038:
#line 2438 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1039:
#line 2439 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1040:
#line 2442 "frame/parser.Y"
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

  case 1041:
#line 2455 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1042:
#line 2456 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1043:
#line 2460 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1044:
#line 2461 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1045:
#line 2465 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1046:
#line 2470 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1047:
#line 2475 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1048:
#line 2481 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1049:
#line 2483 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1050:
#line 2486 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1051:
#line 2488 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1052:
#line 2491 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1053:
#line 2494 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1054:
#line 2495 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1055:
#line 2496 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1056:
#line 2497 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1057:
#line 2498 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1058:
#line 2499 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1059:
#line 2501 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1062:
#line 2508 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1063:
#line 2509 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1064:
#line 2510 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1065:
#line 2511 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1066:
#line 2512 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1067:
#line 2513 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1070:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1071:
#line 2519 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1075:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1076:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1077:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1078:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1079:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1080:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1083:
#line 2535 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1084:
#line 2536 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1086:
#line 2539 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1087:
#line 2540 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1088:
#line 2541 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1089:
#line 2542 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1094:
#line 2554 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1095:
#line 2557 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1096:
#line 2558 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1100:
#line 2565 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1101:
#line 2568 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1102:
#line 2572 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1103:
#line 2573 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1104:
#line 2574 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1105:
#line 2575 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1106:
#line 2576 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1107:
#line 2577 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1108:
#line 2578 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1109:
#line 2579 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1110:
#line 2585 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1111:
#line 2586 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1112:
#line 2587 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1113:
#line 2588 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1114:
#line 2592 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1115:
#line 2593 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1116:
#line 2595 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1117:
#line 2600 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1119:
#line 2602 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1121:
#line 2604 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1124:
#line 2614 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1125:
#line 2617 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2618 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1127:
#line 2619 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2622 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1129:
#line 2624 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1130:
#line 2628 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1131:
#line 2629 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1132:
#line 2633 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1133:
#line 2634 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1134:
#line 2635 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1135:
#line 2636 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1136:
#line 2642 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1137:
#line 2643 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1138:
#line 2649 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1139:
#line 2650 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1140:
#line 2651 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1141:
#line 2652 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1144:
#line 2660 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2662 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2663 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1147:
#line 2664 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1148:
#line 2668 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2669 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2670 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1151:
#line 2671 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1152:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1153:
#line 2675 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1154:
#line 2678 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1155:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1156:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1157:
#line 2683 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1158:
#line 2684 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2685 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1160:
#line 2688 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1161:
#line 2689 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1163:
#line 2691 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1164:
#line 2692 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1165:
#line 2695 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1166:
#line 2696 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1167:
#line 2697 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1172:
#line 2704 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2710 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2717 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2719 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2721 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2734 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2735 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2736 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1192:
#line 2739 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2740 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2741 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2744 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2745 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2746 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2749 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2750 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2751 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2755 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2756 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1204:
#line 2757 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2760 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2761 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2762 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2765 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2766 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2770 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2771 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2775 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2776 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2777 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2781 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1218:
#line 2783 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2785 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2789 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1221:
#line 2793 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1222:
#line 2795 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1223:
#line 2799 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1224:
#line 2802 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1225:
#line 2803 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1226:
#line 2804 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1227:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1228:
#line 2808 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1229:
#line 2810 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1230:
#line 2811 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1231:
#line 2813 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1233:
#line 2817 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1234:
#line 2818 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2819 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2822 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1237:
#line 2823 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1238:
#line 2827 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2829 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2834 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2835 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2836 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1246:
#line 2839 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2840 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2841 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1249:
#line 2844 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2846 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1251:
#line 2851 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1252:
#line 2854 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1253:
#line 2861 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2863 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1255:
#line 2865 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1256:
#line 2870 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1258:
#line 2874 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1259:
#line 2875 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1260:
#line 2876 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2878 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1262:
#line 2880 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1263:
#line 2885 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10944 "frame/parser.C"
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


#line 2889 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

