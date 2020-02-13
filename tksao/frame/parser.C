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
     FOOTPRINT_ = 387,
     FROM_ = 388,
     FRONT_ = 389,
     FULL_ = 390,
     FUNCTION_ = 391,
     GALACTIC_ = 392,
     GAUSSIAN_ = 393,
     GET_ = 394,
     GLOBAL_ = 395,
     GRAPHICS_ = 396,
     GRAY_ = 397,
     GRID_ = 398,
     GZ_ = 399,
     HANDLE_ = 400,
     HAS_ = 401,
     HEAD_ = 402,
     HEADER_ = 403,
     HEIGHT_ = 404,
     HIDE_ = 405,
     HIGHLITE_ = 406,
     HISTEQU_ = 407,
     HISTOGRAM_ = 408,
     HORIZONTAL_ = 409,
     ICRS_ = 410,
     ID_ = 411,
     IIS_ = 412,
     IMAGE_ = 413,
     INCLUDE_ = 414,
     INCR_ = 415,
     INFO_ = 416,
     ITERATION_ = 417,
     IRAF_ = 418,
     IRAFMIN_ = 419,
     J2000_ = 420,
     KEY_ = 421,
     KEYWORD_ = 422,
     LABEL_ = 423,
     LENGTH_ = 424,
     LEVEL_ = 425,
     LITTLE_ = 426,
     LITTLEENDIAN_ = 427,
     LINE_ = 428,
     LINEAR_ = 429,
     LIST_ = 430,
     LOAD_ = 431,
     LOCAL_ = 432,
     LOG_ = 433,
     MACOSX_ = 434,
     MAGNIFIER_ = 435,
     MATCH_ = 436,
     MAP_ = 437,
     MARK_ = 438,
     MARKER_ = 439,
     MASK_ = 440,
     MESSAGE_ = 441,
     METHOD_ = 442,
     MINMAX_ = 443,
     MINOR_ = 444,
     MIP_ = 445,
     MMAP_ = 446,
     MMAPINCR_ = 447,
     MOSAIC_ = 448,
     MODE_ = 449,
     MOTION_ = 450,
     MOVE_ = 451,
     NAME_ = 452,
     NAN_ = 453,
     NATIVE_ = 454,
     NAXES_ = 455,
     NEW_ = 456,
     NEXT_ = 457,
     NO_ = 458,
     NONE_ = 459,
     NONNAN_ = 460,
     NONZERO_ = 461,
     NOW_ = 462,
     NRRD_ = 463,
     NUMBER_ = 464,
     OBJECT_ = 465,
     OFF_ = 466,
     ON_ = 467,
     ONLY_ = 468,
     OPAQUE_ = 469,
     OPTION_ = 470,
     ORIENT_ = 471,
     PAN_ = 472,
     PANNER_ = 473,
     PARSER_ = 474,
     PASTE_ = 475,
     PERF_ = 476,
     PHOTO_ = 477,
     PHYSICAL_ = 478,
     PIXEL_ = 479,
     PLOT2D_ = 480,
     PLOT3D_ = 481,
     POINT_ = 482,
     POINTER_ = 483,
     POLYGON_ = 484,
     POSTSCRIPT_ = 485,
     POW_ = 486,
     PRECISION_ = 487,
     PRINT_ = 488,
     PRESERVE_ = 489,
     PROJECTION_ = 490,
     PROPERTY_ = 491,
     PUBLICATION_ = 492,
     PROS_ = 493,
     QUERY_ = 494,
     RADIAL_ = 495,
     RADIUS_ = 496,
     RANGE_ = 497,
     REGION_ = 498,
     REPLACE_ = 499,
     RESAMPLE_ = 500,
     RESET_ = 501,
     RESOLUTION_ = 502,
     RGB_ = 503,
     ROOT_ = 504,
     ROTATE_ = 505,
     RULER_ = 506,
     SAMPLE_ = 507,
     SAOIMAGE_ = 508,
     SAOTNG_ = 509,
     SAVE_ = 510,
     SCALE_ = 511,
     SCAN_ = 512,
     SCIENTIFIC_ = 513,
     SCOPE_ = 514,
     SEGMENT_ = 515,
     SELECT_ = 516,
     SET_ = 517,
     SEXAGESIMAL_ = 518,
     SHAPE_ = 519,
     SHARED_ = 520,
     SHIFT_ = 521,
     SHMID_ = 522,
     SHOW_ = 523,
     SIGMA_ = 524,
     SINH_ = 525,
     SIZE_ = 526,
     SLICE_ = 527,
     SMMAP_ = 528,
     SMOOTH_ = 529,
     SOCKET_ = 530,
     SOCKETGZ_ = 531,
     SOURCE_ = 532,
     SQRT_ = 533,
     SQUARED_ = 534,
     SSHARED_ = 535,
     STATS_ = 536,
     STATUS_ = 537,
     SUM_ = 538,
     SYSTEM_ = 539,
     TABLE_ = 540,
     TAG_ = 541,
     TEMPLATE_ = 542,
     TEXT_ = 543,
     THREADS_ = 544,
     THREED_ = 545,
     THRESHOLD_ = 546,
     THICK_ = 547,
     TRANSPARENT_ = 548,
     TRANSPARENCY_ = 549,
     TO_ = 550,
     TOGGLE_ = 551,
     TOPHAT_ = 552,
     TRUE_ = 553,
     TYPE_ = 554,
     UNDO_ = 555,
     UNHIGHLITE_ = 556,
     UNLOAD_ = 557,
     UNSELECT_ = 558,
     UPDATE_ = 559,
     USER_ = 560,
     VALUE_ = 561,
     VAR_ = 562,
     VIEW_ = 563,
     VECTOR_ = 564,
     VERSION_ = 565,
     VERTEX_ = 566,
     VERTICAL_ = 567,
     WARP_ = 568,
     WCS_ = 569,
     WCSA_ = 570,
     WCSB_ = 571,
     WCSC_ = 572,
     WCSD_ = 573,
     WCSE_ = 574,
     WCSF_ = 575,
     WCSG_ = 576,
     WCSH_ = 577,
     WCSI_ = 578,
     WCSJ_ = 579,
     WCSK_ = 580,
     WCSL_ = 581,
     WCSM_ = 582,
     WCSN_ = 583,
     WCSO_ = 584,
     WCSP_ = 585,
     WCSQ_ = 586,
     WCSR_ = 587,
     WCSS_ = 588,
     WCST_ = 589,
     WCSU_ = 590,
     WCSV_ = 591,
     WCSW_ = 592,
     WCSX_ = 593,
     WCSY_ = 594,
     WCSZ_ = 595,
     WCS0_ = 596,
     WFPC2_ = 597,
     WIDTH_ = 598,
     WIN32_ = 599,
     XML_ = 600,
     XY_ = 601,
     YES_ = 602,
     ZERO_ = 603,
     ZMAX_ = 604,
     ZSCALE_ = 605,
     ZOOM_ = 606
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
#define FOOTPRINT_ 387
#define FROM_ 388
#define FRONT_ 389
#define FULL_ 390
#define FUNCTION_ 391
#define GALACTIC_ 392
#define GAUSSIAN_ 393
#define GET_ 394
#define GLOBAL_ 395
#define GRAPHICS_ 396
#define GRAY_ 397
#define GRID_ 398
#define GZ_ 399
#define HANDLE_ 400
#define HAS_ 401
#define HEAD_ 402
#define HEADER_ 403
#define HEIGHT_ 404
#define HIDE_ 405
#define HIGHLITE_ 406
#define HISTEQU_ 407
#define HISTOGRAM_ 408
#define HORIZONTAL_ 409
#define ICRS_ 410
#define ID_ 411
#define IIS_ 412
#define IMAGE_ 413
#define INCLUDE_ 414
#define INCR_ 415
#define INFO_ 416
#define ITERATION_ 417
#define IRAF_ 418
#define IRAFMIN_ 419
#define J2000_ 420
#define KEY_ 421
#define KEYWORD_ 422
#define LABEL_ 423
#define LENGTH_ 424
#define LEVEL_ 425
#define LITTLE_ 426
#define LITTLEENDIAN_ 427
#define LINE_ 428
#define LINEAR_ 429
#define LIST_ 430
#define LOAD_ 431
#define LOCAL_ 432
#define LOG_ 433
#define MACOSX_ 434
#define MAGNIFIER_ 435
#define MATCH_ 436
#define MAP_ 437
#define MARK_ 438
#define MARKER_ 439
#define MASK_ 440
#define MESSAGE_ 441
#define METHOD_ 442
#define MINMAX_ 443
#define MINOR_ 444
#define MIP_ 445
#define MMAP_ 446
#define MMAPINCR_ 447
#define MOSAIC_ 448
#define MODE_ 449
#define MOTION_ 450
#define MOVE_ 451
#define NAME_ 452
#define NAN_ 453
#define NATIVE_ 454
#define NAXES_ 455
#define NEW_ 456
#define NEXT_ 457
#define NO_ 458
#define NONE_ 459
#define NONNAN_ 460
#define NONZERO_ 461
#define NOW_ 462
#define NRRD_ 463
#define NUMBER_ 464
#define OBJECT_ 465
#define OFF_ 466
#define ON_ 467
#define ONLY_ 468
#define OPAQUE_ 469
#define OPTION_ 470
#define ORIENT_ 471
#define PAN_ 472
#define PANNER_ 473
#define PARSER_ 474
#define PASTE_ 475
#define PERF_ 476
#define PHOTO_ 477
#define PHYSICAL_ 478
#define PIXEL_ 479
#define PLOT2D_ 480
#define PLOT3D_ 481
#define POINT_ 482
#define POINTER_ 483
#define POLYGON_ 484
#define POSTSCRIPT_ 485
#define POW_ 486
#define PRECISION_ 487
#define PRINT_ 488
#define PRESERVE_ 489
#define PROJECTION_ 490
#define PROPERTY_ 491
#define PUBLICATION_ 492
#define PROS_ 493
#define QUERY_ 494
#define RADIAL_ 495
#define RADIUS_ 496
#define RANGE_ 497
#define REGION_ 498
#define REPLACE_ 499
#define RESAMPLE_ 500
#define RESET_ 501
#define RESOLUTION_ 502
#define RGB_ 503
#define ROOT_ 504
#define ROTATE_ 505
#define RULER_ 506
#define SAMPLE_ 507
#define SAOIMAGE_ 508
#define SAOTNG_ 509
#define SAVE_ 510
#define SCALE_ 511
#define SCAN_ 512
#define SCIENTIFIC_ 513
#define SCOPE_ 514
#define SEGMENT_ 515
#define SELECT_ 516
#define SET_ 517
#define SEXAGESIMAL_ 518
#define SHAPE_ 519
#define SHARED_ 520
#define SHIFT_ 521
#define SHMID_ 522
#define SHOW_ 523
#define SIGMA_ 524
#define SINH_ 525
#define SIZE_ 526
#define SLICE_ 527
#define SMMAP_ 528
#define SMOOTH_ 529
#define SOCKET_ 530
#define SOCKETGZ_ 531
#define SOURCE_ 532
#define SQRT_ 533
#define SQUARED_ 534
#define SSHARED_ 535
#define STATS_ 536
#define STATUS_ 537
#define SUM_ 538
#define SYSTEM_ 539
#define TABLE_ 540
#define TAG_ 541
#define TEMPLATE_ 542
#define TEXT_ 543
#define THREADS_ 544
#define THREED_ 545
#define THRESHOLD_ 546
#define THICK_ 547
#define TRANSPARENT_ 548
#define TRANSPARENCY_ 549
#define TO_ 550
#define TOGGLE_ 551
#define TOPHAT_ 552
#define TRUE_ 553
#define TYPE_ 554
#define UNDO_ 555
#define UNHIGHLITE_ 556
#define UNLOAD_ 557
#define UNSELECT_ 558
#define UPDATE_ 559
#define USER_ 560
#define VALUE_ 561
#define VAR_ 562
#define VIEW_ 563
#define VECTOR_ 564
#define VERSION_ 565
#define VERTEX_ 566
#define VERTICAL_ 567
#define WARP_ 568
#define WCS_ 569
#define WCSA_ 570
#define WCSB_ 571
#define WCSC_ 572
#define WCSD_ 573
#define WCSE_ 574
#define WCSF_ 575
#define WCSG_ 576
#define WCSH_ 577
#define WCSI_ 578
#define WCSJ_ 579
#define WCSK_ 580
#define WCSL_ 581
#define WCSM_ 582
#define WCSN_ 583
#define WCSO_ 584
#define WCSP_ 585
#define WCSQ_ 586
#define WCSR_ 587
#define WCSS_ 588
#define WCST_ 589
#define WCSU_ 590
#define WCSV_ 591
#define WCSW_ 592
#define WCSX_ 593
#define WCSY_ 594
#define WCSZ_ 595
#define WCS0_ 596
#define WFPC2_ 597
#define WIDTH_ 598
#define WIN32_ 599
#define XML_ 600
#define XY_ 601
#define YES_ 602
#define ZERO_ 603
#define ZMAX_ 604
#define ZSCALE_ 605
#define ZOOM_ 606




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
#line 860 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 873 "frame/parser.C"

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
#define YYLAST   5520

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  356
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  218
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1264
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2787

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   606

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
       2,   355,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   353,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   354,   352,
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
     345,   346,   347,   348,   349,   350,   351
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
    3946,  3947,  3948,  3950,  3952,  3954,  3956,  3958,  3966,  3975,
    3978,  3983,  3986,  3991,  3998,  4001,  4003,  4005,  4009,  4013,
    4015,  4020,  4023,  4025,  4029,  4033,  4038,  4042,  4046,  4050,
    4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4078,  4081,  4082,  4083,  4086,  4088,  4092,
    4094,  4098,  4100,  4103,  4106,  4108,  4112,  4113,  4114,  4117,
    4120,  4122,  4126,  4132,  4134,  4137,  4140,  4144,  4147,  4150,
    4153,  4156,  4158,  4160,  4162,  4164,  4169,  4172,  4176,  4180,
    4183,  4187,  4190,  4193,  4196,  4200,  4204,  4208,  4211,  4215,
    4217,  4221,  4225,  4227,  4230,  4233,  4236,  4239,  4249,  4256,
    4258,  4260,  4262,  4264,  4267,  4270,  4274,  4278,  4280,  4283,
    4287,  4291,  4293,  4296,  4298,  4300,  4302,  4304,  4306,  4309,
    4312,  4317,  4319,  4322,  4325,  4328,  4332,  4334,  4336,  4338,
    4341,  4344,  4347,  4350,  4353,  4357,  4361,  4365,  4369,  4373,
    4377,  4381,  4383,  4386,  4389,  4392,  4396,  4399,  4403,  4407,
    4410,  4413,  4416,  4419,  4422,  4425,  4428,  4431,  4434,  4437,
    4440,  4443,  4446,  4449,  4453,  4457,  4461,  4464,  4467,  4470,
    4473,  4476,  4479,  4482,  4485,  4488,  4491,  4494,  4497,  4501,
    4505,  4509,  4514,  4521,  4524,  4526,  4528,  4530,  4532,  4534,
    4535,  4541,  4543,  4550,  4554,  4556,  4559,  4562,  4565,  4569,
    4573,  4576,  4579,  4582,  4585,  4588,  4591,  4595,  4598,  4601,
    4605,  4607,  4611,  4616,  4618,  4621,  4627,  4634,  4641,  4644,
    4646,  4649,  4652,  4658,  4665
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     357,     0,    -1,    97,   359,    -1,    44,   391,    -1,    41,
      67,     5,    -1,    41,    67,   142,    -1,    47,   396,    -1,
      60,    -1,    65,    -1,    66,   398,    -1,    68,   286,     5,
      -1,    69,   403,    -1,    70,   405,    -1,    78,   406,    -1,
      85,   415,    -1,    87,   417,    -1,    88,   418,    -1,    96,
     360,    -1,   126,   420,    -1,   139,   421,    -1,   143,   463,
      -1,   146,   466,    -1,   150,    -1,   151,   360,    -1,   157,
     472,    -1,   163,    16,     4,    -1,   176,   475,    -1,   179,
     493,    -1,   180,   494,    -1,   181,   495,    -1,   184,   511,
     496,    -1,   185,   530,    -1,   198,    67,     5,    -1,   216,
     531,    -1,   217,   532,    -1,   218,   535,    -1,   239,    89,
      -1,   232,   537,    -1,   230,   536,    -1,   246,    -1,   243,
     511,   539,    -1,   248,   544,    -1,   250,   545,    -1,   255,
     547,    -1,   268,    -1,   274,   562,    -1,   289,     4,    -1,
     290,   386,    -1,   302,    -1,   304,   564,    -1,   310,    -1,
     313,   566,    -1,   314,   567,    -1,   344,   571,    -1,   351,
     572,    -1,     3,    -1,     4,    -1,   212,    -1,   211,    -1,
     193,   360,    -1,   219,   360,    -1,   221,   360,    -1,   314,
     360,    -1,    44,   360,    -1,    47,   360,    -1,    77,   360,
      -1,    85,   360,    -1,   144,   360,    -1,   248,   360,    -1,
       4,    -1,   347,    -1,   352,    -1,   212,    -1,   298,    -1,
     203,    -1,   353,    -1,   211,    -1,   120,    -1,    -1,   249,
      38,    -1,   135,    38,    -1,   249,    -1,   135,    -1,    -1,
     363,    -1,   358,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   364,   364,    -1,   365,   366,    -1,
     366,   366,    -1,   358,   358,    -1,   158,    -1,   223,    -1,
     102,    -1,    19,    -1,   369,    -1,   314,    -1,   315,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,
     331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,    -1,
     336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,    -1,
     341,    -1,    57,    -1,   218,    -1,    -1,   348,    -1,   206,
      -1,   198,    -1,   205,    -1,   242,    -1,    -1,   214,    -1,
     293,    -1,   174,    -1,   178,    -1,   231,    -1,   278,    -1,
     279,    -1,    28,    -1,   270,    -1,   152,    -1,    30,    -1,
     257,    -1,   252,    -1,    95,    -1,   164,    -1,    -1,   128,
      -1,    35,    -1,   129,    -1,   165,    -1,   155,    -1,   137,
      -1,   107,    -1,    -1,    98,    -1,   263,    -1,    -1,    98,
      -1,    24,    -1,    25,    -1,    -1,   267,    -1,   166,    -1,
      -1,    17,    -1,   160,    -1,    -1,   158,    -1,   185,    -1,
      -1,    63,    -1,    49,    -1,   103,    -1,    86,    -1,   354,
      -1,    27,    -1,    52,    -1,    -1,     4,    -1,    83,    -1,
     153,    -1,   225,    -1,   226,    -1,   240,    -1,   281,    -1,
      -1,    32,    -1,   283,    -1,    -1,   199,    -1,    42,    -1,
      43,    -1,   171,    -1,   172,    -1,   308,   390,    -1,    48,
     387,    -1,    75,   388,    -1,   151,   389,    -1,   187,   542,
      -1,    37,   543,    -1,   256,   358,    -1,   291,   358,    -1,
     360,    -1,    67,     5,    -1,   360,    -1,    67,     5,    -1,
     360,    -1,    67,     5,    -1,   358,   358,    -1,   227,   358,
     358,   358,   358,   358,    -1,    12,   392,    -1,    72,     5,
       5,     5,    -1,   101,     4,    -1,   119,   393,    -1,   136,
     394,    -1,    54,   271,     4,    -1,   295,   395,    -1,   123,
       5,    -1,    60,    -1,   358,   358,    -1,   358,    -1,   358,
     358,    -1,   358,    12,   358,   358,    -1,   358,   358,    12,
     358,   358,    -1,   295,   358,    -1,   295,   358,   358,    -1,
     295,   358,    12,   358,   358,    -1,   295,   358,   358,    12,
     358,   358,    -1,    32,    -1,   283,    -1,   124,    -1,   358,
     358,    12,    60,     5,     5,     5,    -1,   358,   358,     4,
     358,   358,    12,    60,     5,     5,     5,     5,    -1,   358,
     358,    12,   358,   358,     5,     5,     5,    -1,   358,   358,
       4,   358,   358,    12,   358,   358,     5,     5,     5,     5,
      -1,   358,    -1,   358,   358,    -1,   295,   397,    -1,   124,
      -1,   358,    -1,   358,   358,    -1,   259,   399,    -1,   194,
     400,    -1,   188,   401,    -1,   305,   358,   358,    -1,   305,
     198,   198,    -1,   350,   402,    -1,   234,   360,    -1,   140,
      -1,   177,    -1,   358,    -1,   188,    -1,   350,    -1,   349,
      -1,   305,    -1,     4,   374,    -1,   194,   374,    -1,   252,
       4,    -1,   358,     4,     4,    -1,    79,   358,    -1,   252,
       4,    -1,   173,     4,    -1,     4,   358,   358,     4,     6,
       4,    -1,   248,   358,   358,   358,   358,   358,   358,     4,
       6,     4,    -1,    40,    -1,   195,   404,    -1,   112,    -1,
       4,   358,   358,     4,     6,     4,    -1,   248,   358,   358,
     358,   358,   358,   358,     4,     6,     4,    -1,   373,    -1,
     178,   358,    -1,    84,   407,    -1,   100,   408,    -1,   176,
     409,    -1,   220,   413,    -1,   255,   414,    -1,     5,     4,
       4,   412,     4,     4,   373,   358,   410,   411,   358,   358,
       5,    -1,     5,     4,     4,   412,     4,     4,   373,   358,
     358,   411,   358,   358,     5,    -1,     5,     4,     4,   412,
       4,     4,   373,   358,   410,   358,   358,     5,    -1,     5,
       4,     4,   412,     4,     4,   373,   358,   358,   358,   358,
       5,    -1,   229,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   360,    -1,     5,     4,   360,     5,   368,   375,
      -1,   188,    -1,   350,    -1,   349,    -1,   305,    -1,   140,
      -1,   177,    -1,   274,    -1,    47,    -1,     5,    -1,     5,
       5,     4,   360,    -1,     5,   368,   375,    -1,    31,     5,
     368,   375,    -1,    -1,   358,   358,   358,   358,   368,   375,
      -1,    60,   367,   368,   375,   358,   358,   368,   377,    -1,
     290,   416,    -1,    40,   358,   358,    -1,   195,   358,   358,
      -1,   112,   358,   358,    -1,    -1,   358,   358,   368,   375,
      -1,    40,   358,   358,     4,    -1,   195,   358,   358,     4,
      -1,   112,   358,   358,     4,    -1,   370,   358,   358,    -1,
     368,   375,   367,    -1,   360,    -1,   313,   358,   358,    -1,
      40,   195,   370,   358,   358,    -1,   195,   370,   358,   358,
      -1,    40,   195,   368,   367,    -1,   195,   368,   367,    -1,
      33,     4,    -1,    -1,    32,    -1,   283,    -1,   146,   118,
       5,    -1,    41,    67,    -1,    44,   422,    -1,    47,   424,
      -1,    66,   425,    -1,    69,   429,    -1,    68,   428,    -1,
      70,   431,    -1,    78,   433,    -1,    80,   436,    -1,    85,
     437,    -1,    87,   438,    -1,    89,   440,    -1,    88,   439,
      -1,    94,   441,    -1,    96,    -1,   125,   445,    -1,   143,
     451,    -1,   153,     5,     5,     4,    -1,   154,    90,     5,
       5,   358,   358,   370,     4,   419,    -1,   157,   443,    -1,
     161,   442,    -1,   163,    16,    -1,   188,    -1,   184,   511,
     505,    -1,   185,   452,    -1,   198,    67,    -1,   216,    -1,
     217,   453,    -1,   224,   285,   370,   358,   358,     4,     4,
       5,    -1,   248,   454,    -1,   250,    -1,   274,   455,    -1,
     289,    -1,   290,   456,    -1,   299,    -1,   306,   370,   358,
     358,    -1,   312,    90,     5,     5,   358,   358,   370,     4,
     419,    -1,   314,   461,    -1,   351,    -1,   101,    -1,   119,
      -1,   136,    -1,    54,   271,    -1,    89,    -1,   123,    -1,
      72,   423,    -1,   175,    -1,    -1,   188,     5,    -1,   104,
       5,    -1,   119,    -1,    -1,   410,   411,    -1,   358,   411,
      -1,   259,    -1,   194,    -1,   188,   426,    -1,   305,   170,
      -1,   350,   427,    -1,   234,    -1,   194,    -1,   252,    -1,
      79,    -1,   252,    -1,   173,    -1,    -1,   286,    -1,   170,
     430,    -1,     4,    -1,     4,   370,   358,   358,    -1,     4,
     358,   358,   373,   358,    -1,    -1,   170,   432,    -1,   178,
      -1,     4,   358,   358,   373,   358,    -1,   368,   375,    -1,
      66,   434,    -1,    67,    -1,    92,    -1,   170,    -1,   209,
     170,    -1,   187,    -1,    70,   435,    -1,   274,    -1,   343,
      -1,    -1,   194,    -1,   259,    -1,    -1,   178,    -1,   358,
     358,   368,   375,   376,    -1,   370,   358,   358,   368,   375,
     376,    -1,   368,   375,   376,    -1,    60,   368,   375,   376,
     368,   377,    -1,   290,   368,   375,    -1,   370,    -1,   368,
     375,   376,    -1,   282,    -1,    33,    -1,   370,    -1,   368,
     375,   376,    -1,   368,   375,   367,   358,   358,     5,    -1,
       4,   368,   375,   367,   358,   358,     5,    -1,   370,   358,
     358,     4,     4,    -1,     5,    -1,    66,    -1,   370,   358,
     358,     5,    -1,     6,     4,     4,     4,     4,    -1,    89,
      -1,   121,   197,   444,    -1,    -1,     4,    -1,   358,   358,
      -1,   200,    -1,    60,   368,   375,   376,    -1,    82,    -1,
     101,   448,    -1,    45,    -1,   118,   446,    -1,   121,   197,
     449,    -1,   148,   447,    -1,   149,    -1,   210,   197,    -1,
     271,    -1,   271,   368,   375,   377,    -1,   272,   450,    -1,
     343,    -1,     4,    -1,   370,   358,   358,    -1,     4,    -1,
     167,     5,    -1,     4,   167,     5,    -1,   314,     4,    -1,
      -1,     4,    -1,   361,    -1,   361,   370,   358,   358,    -1,
     361,     4,    -1,    -1,     4,    -1,   133,   158,   368,    -1,
     133,   158,     4,   368,    -1,   295,   158,   358,   368,    -1,
      -1,   215,    -1,   307,    -1,    67,    -1,   183,    -1,   242,
      -1,   284,    -1,   294,    -1,    82,    -1,    46,    -1,   234,
      -1,    62,    -1,   284,    -1,   308,    -1,   136,    -1,   241,
      -1,   241,   189,    -1,   269,    -1,   269,   189,    -1,    21,
      -1,   308,   460,    -1,    48,   457,    -1,    75,   458,    -1,
     151,   459,    -1,   187,    -1,    37,    -1,   256,    -1,    -1,
      67,    -1,    -1,    67,    -1,    -1,    67,    -1,    -1,   227,
      -1,    -1,    16,   462,    -1,   197,   369,    -1,    -1,   228,
      -1,    84,   464,    -1,   100,    -1,   368,   375,   376,   465,
       5,     5,    -1,   368,   375,   376,   465,     5,    -1,    20,
      -1,   237,    -1,    19,    -1,    44,   467,    -1,    78,   468,
      -1,    85,    -1,    95,    -1,    96,    -1,   102,    -1,   125,
     469,    -1,   143,    -1,   157,    -1,   164,    -1,   184,   470,
      -1,   223,    -1,   158,    -1,   274,    -1,   284,   368,    -1,
     314,   471,    -1,    73,     5,    -1,    -1,    31,    -1,    -1,
      44,    -1,    88,    -1,   193,    -1,   151,    -1,   261,    -1,
     220,    -1,   300,    -1,   368,    -1,    59,   368,    -1,   116,
     368,    -1,   174,   368,    -1,    18,    -1,   290,   368,    -1,
     201,     4,     4,    -1,   117,    -1,   186,     5,    -1,    89,
     474,    -1,   262,   121,   197,   473,    -1,   262,     6,     4,
       4,     4,     4,    -1,   304,    -1,   314,   358,   358,   358,
     358,   358,   358,   358,   358,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    57,    -1,     4,     4,   368,    -1,
     194,   360,    -1,    26,   476,    -1,   113,   478,    -1,   125,
     479,    -1,   160,   492,    -1,   208,   490,    -1,   222,   491,
      -1,     5,    14,     5,   380,    -1,     5,    15,     5,   380,
      -1,     5,    62,     5,   380,    -1,     5,   191,   380,    -1,
       5,   192,   380,    -1,     5,   265,   378,     4,   380,    -1,
       5,   275,     4,   380,    -1,     5,   276,     4,   380,    -1,
       5,   307,     5,   380,    -1,   248,    88,   477,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   191,    -1,     5,   192,    -1,     5,   265,   378,
       4,    -1,     5,   275,     4,    -1,     5,   276,     4,    -1,
       5,   307,     5,    -1,     5,     5,   273,    -1,     5,    14,
       5,   380,    -1,     5,    15,     5,   380,    -1,     5,    62,
       5,   380,    -1,     5,   191,   379,   380,    -1,     5,     5,
     273,   379,   380,    -1,     5,   192,   379,   380,    -1,     5,
     265,   378,     4,   379,   380,    -1,     5,   280,   378,     4,
       4,   379,   380,    -1,     5,   275,     4,   380,    -1,     5,
     276,     4,   380,    -1,     5,   307,     5,   379,   380,    -1,
     272,   480,    -1,   118,    88,   481,    -1,   248,   158,   489,
      -1,   248,    88,   488,    -1,   193,   482,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    62,     5,    -1,
       5,   191,   379,    -1,     5,     5,   273,   379,    -1,     5,
     192,   379,    -1,     5,   265,   378,     4,   379,    -1,     5,
     280,   378,     4,     4,   379,    -1,     5,   275,     4,    -1,
       5,   276,     4,    -1,     5,   307,     5,   379,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    62,     5,
      -1,     5,   191,   379,    -1,     5,   192,   379,    -1,     5,
     265,   378,     4,   379,    -1,     5,   275,     4,    -1,     5,
     276,     4,    -1,     5,   307,     5,   379,    -1,   158,   163,
     483,    -1,   163,   484,    -1,   158,   485,    -1,   487,    -1,
     158,   342,   486,    -1,     5,    14,     5,   380,    -1,     5,
      15,     5,   380,    -1,     5,    62,     5,   380,    -1,     5,
     191,   379,   380,    -1,     5,   192,   379,   380,    -1,     5,
     265,   378,     4,   379,   380,    -1,     5,   275,     4,   380,
      -1,     5,   276,     4,   380,    -1,     5,   307,     5,   379,
     380,    -1,     5,    14,     5,   380,    -1,     5,    15,     5,
     380,    -1,     5,    62,     5,   380,    -1,     5,   191,   379,
     380,    -1,     5,     5,   273,   379,   380,    -1,     5,   192,
     379,   380,    -1,     5,   265,   378,     4,   379,   380,    -1,
       5,   280,   378,     4,     4,   379,   380,    -1,     5,   275,
       4,   380,    -1,     5,   276,     4,   380,    -1,     5,   307,
       5,   379,   380,    -1,   369,     5,    14,     5,   380,    -1,
     369,     5,    15,     5,   380,    -1,   369,     5,    62,     5,
     380,    -1,   369,     5,   191,   379,   380,    -1,   369,     5,
     192,   379,   380,    -1,   369,     5,   265,   378,     4,   379,
     380,    -1,   369,     5,   275,     4,   380,    -1,   369,     5,
     276,     4,   380,    -1,   369,     5,   307,     5,   379,   380,
      -1,     5,    14,     5,   380,    -1,     5,    15,     5,   380,
      -1,     5,    62,     5,   380,    -1,     5,   191,   379,   380,
      -1,     5,   192,   379,   380,    -1,     5,   265,   378,     4,
     379,   380,    -1,     5,   275,     4,   380,    -1,     5,   276,
       4,   380,    -1,     5,   307,     5,   379,   380,    -1,   369,
       5,    14,     5,   380,    -1,   369,     5,    15,     5,   380,
      -1,   369,     5,    62,     5,   380,    -1,   369,     5,   191,
     379,   380,    -1,   369,     5,     5,   273,   379,   380,    -1,
     369,     5,   192,   379,   380,    -1,   369,     5,   265,   378,
       4,   379,   380,    -1,   369,     5,   280,   378,     4,     4,
     379,   380,    -1,   369,     5,   275,     4,   380,    -1,   369,
       5,   276,     4,   380,    -1,   369,     5,   307,     5,   379,
     380,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    62,     5,    -1,     5,   191,   379,    -1,     5,     5,
     273,   379,    -1,     5,   192,   379,    -1,     5,   265,   378,
       4,   379,    -1,     5,   280,   378,     4,     4,   379,    -1,
       5,   275,     4,    -1,     5,   276,     4,    -1,     5,   307,
       5,   379,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    62,     5,    -1,     5,   191,   379,    -1,     5,
     192,   379,    -1,     5,   265,   378,     4,   379,    -1,     5,
     275,     4,    -1,     5,   276,     4,    -1,     5,   307,     5,
     379,    -1,     5,    14,     5,   380,    -1,     5,    62,     5,
     380,    -1,     5,   191,   380,    -1,     5,   265,   378,     4,
     380,    -1,     5,   275,     4,   380,    -1,     5,   307,     5,
     380,    -1,     5,     5,    -1,   272,     5,     5,    -1,    94,
       4,     4,     4,     4,     4,    -1,   188,     4,     4,     4,
       4,     4,    -1,   112,    -1,   233,    -1,   360,    -1,   141,
     360,    -1,    89,   360,    -1,    67,     5,    -1,     5,     4,
       4,    -1,   304,   358,   358,    -1,   351,   358,    -1,     5,
       5,   369,   375,     5,     5,   369,   375,   358,   369,   377,
       5,    -1,    61,   499,    -1,    67,     5,    -1,    81,    -1,
      74,   504,     5,    -1,    74,   504,   307,     5,    -1,    76,
     100,    -1,    -1,    84,   497,   500,    -1,    90,    -1,   100,
      -1,   100,    17,    -1,   106,   503,    -1,   115,     4,    -1,
     130,     5,    -1,   151,    17,    -1,   151,   213,   358,   358,
      -1,   151,   296,   358,   358,    -1,     4,    20,   383,   360,
      -1,     4,    21,   363,    -1,     4,    21,   363,   370,    -1,
       4,    21,   363,   368,   375,    -1,     4,    22,   241,   358,
     358,     4,   368,   377,    -1,     4,    22,   241,     5,   368,
     377,    -1,     4,    49,   122,   360,    -1,     4,    50,   241,
     358,   358,   358,     4,   368,   377,    -1,     4,    50,   241,
       5,   368,   377,    -1,     4,    49,   241,   358,   358,   368,
     377,    -1,     4,    53,   106,   363,   363,     4,   358,   358,
     358,     4,    -1,     4,    53,   106,   363,   363,     4,   358,
     358,   358,     4,   370,    -1,     4,    53,   106,   363,   363,
       4,   358,   358,   358,     4,   368,   375,    -1,     4,    53,
     106,     5,     5,   368,   375,   368,   377,    -1,     4,    56,
     498,     5,     5,    -1,     4,    63,   122,   360,    -1,     4,
      63,   241,   358,   368,   377,    -1,     4,    67,     5,    -1,
       4,    75,    27,   360,   360,    -1,     4,    75,   168,     5,
       5,    -1,     4,    75,   241,   358,   368,   377,    -1,     4,
      75,   284,   368,   375,    -1,     4,    76,   140,   360,    -1,
       4,    83,   106,   363,   363,     4,   358,   358,     4,    -1,
       4,    83,   106,   363,   363,     4,   358,   358,     4,   370,
      -1,     4,    83,   106,   363,   363,     4,   358,   358,     4,
     368,   375,    -1,     4,    83,   106,     5,     5,   368,   375,
     368,   377,    -1,     4,    84,    22,   241,   358,   358,    -1,
       4,    84,    50,   241,   358,   358,    -1,     4,    84,    53,
      21,   358,   358,    -1,     4,    84,    53,   241,   358,   358,
      -1,     4,    84,   111,   241,   358,   358,    -1,     4,    84,
     114,    21,   358,   358,    -1,     4,    84,   114,   241,   358,
     358,    -1,     4,    84,    83,    21,   358,   358,    -1,     4,
      84,    83,   241,   358,   358,    -1,     4,    84,   229,   311,
       4,   358,   358,    -1,     4,    84,   260,   311,     4,   358,
     358,    -1,     4,   100,    -1,     4,   100,    22,     4,    -1,
       4,   100,    50,     4,    -1,     4,   100,    53,     4,    -1,
       4,   100,   111,     4,    -1,     4,   100,    56,   498,     5,
      -1,     4,   100,   114,     4,    -1,     4,   100,    83,     4,
      -1,     4,   100,   229,   311,     4,    -1,     4,   100,   260,
     311,     4,    -1,     4,   100,   286,    -1,     4,   100,   286,
       5,    -1,     4,   100,   286,     4,    -1,     4,   106,    40,
       4,    -1,     4,   110,   122,   360,    -1,     4,   110,   241,
     358,   358,   368,   377,    -1,     4,   111,   241,   358,   358,
     358,     4,   368,   377,    -1,     4,   111,   241,     5,   368,
     377,    -1,     4,   114,   106,   363,   363,     4,   358,   358,
     358,     4,    -1,     4,   114,   106,   363,   363,     4,   358,
     358,   358,     4,   370,    -1,     4,   114,   106,   363,   363,
       4,   358,   358,   358,     4,   368,   375,    -1,     4,   114,
     106,     5,     5,   368,   375,   368,   377,    -1,     4,   130,
       5,    -1,     4,   151,    -1,     4,   151,   213,    -1,     4,
     173,    27,   360,   360,    -1,     4,   173,   227,   368,   375,
     367,   367,    -1,     4,   196,   358,   358,    -1,     4,   196,
     134,    -1,     4,   196,    36,    -1,     4,   196,   295,   368,
     375,   367,    -1,     4,   229,   246,   358,   358,   368,   377,
      -1,     4,   260,   246,   358,   358,   368,   377,    -1,     4,
     227,   264,   381,    -1,     4,   227,   271,     4,    -1,     4,
     229,   122,   360,    -1,     4,   235,   368,   375,   367,   367,
     358,   368,   377,    -1,     4,   236,   517,   360,    -1,     4,
     250,    40,    -1,     4,   251,   131,     5,    -1,     4,   251,
     227,   368,   375,   367,   367,    -1,     4,   251,   284,   368,
     375,   368,   377,    -1,     4,   261,    -1,     4,   261,   213,
      -1,     4,   286,     5,    -1,     4,   288,     5,    -1,     4,
     288,   250,   360,    -1,     4,   301,    -1,     4,   303,    -1,
       4,   309,    27,   360,    -1,     4,   309,   227,   368,   375,
     367,   368,   377,   358,   363,    -1,     4,   343,     4,    -1,
     166,    -1,   166,   358,   358,    -1,   175,   512,    -1,   176,
     513,    -1,   196,   514,    -1,   234,   360,    -1,   236,   517,
     360,    -1,   236,   517,   360,   358,   358,    -1,   250,    40,
     358,   358,    -1,   250,   195,   358,   358,     4,    -1,   250,
     112,    -1,   255,     5,   504,   368,   375,   376,   360,    -1,
     255,   287,     5,    -1,   261,   521,    -1,   268,   522,    -1,
       5,    67,     5,    -1,     5,    81,    -1,     5,   100,    -1,
       5,    90,    -1,     5,   130,     5,    -1,     5,   151,    -1,
       5,   151,   213,    -1,     5,   196,   358,   358,    -1,     5,
     196,   134,    -1,     5,   196,    36,    -1,     5,   196,   295,
     368,   375,   367,    -1,     5,   236,   517,   360,    -1,     5,
     261,    -1,     5,   261,   213,    -1,     5,   301,    -1,     5,
     303,    -1,   286,   106,     5,     5,    -1,   286,   100,     5,
      -1,   286,   100,    17,    -1,   286,     5,    -1,   286,   304,
       5,    -1,   220,    -1,   220,   368,    -1,   300,    -1,   301,
      17,    -1,   303,    17,    -1,   343,     4,    -1,   261,    -1,
     303,    -1,   151,    -1,   301,    -1,    40,   196,    -1,   196,
      -1,   112,   196,    -1,    40,   106,    -1,   106,    -1,   112,
     106,    -1,    40,   250,    -1,   250,    -1,   112,   250,    -1,
     100,    -1,   288,    -1,    67,    -1,   343,    -1,   236,    -1,
     130,    -1,   166,    -1,   304,    -1,    -1,     4,    -1,    30,
     360,    -1,   241,   358,    -1,   162,     4,    -1,   215,     4,
     358,    -1,    63,   358,   358,   358,   518,    -1,   110,   358,
     358,   358,   358,   362,   518,    -1,    49,   358,   358,   358,
     358,   362,   518,    -1,   229,   358,   358,   358,   358,   518,
      -1,   260,   358,   358,   358,   358,   518,    -1,   173,   358,
     358,   358,   358,   518,    -1,   309,   358,   358,   358,   358,
     518,    -1,   288,   358,   358,   362,   518,    -1,    63,   227,
     358,   358,   382,   518,    -1,    49,   227,   358,   358,   382,
     518,    -1,   103,   227,   358,   358,   382,   518,    -1,    86,
     227,   358,   358,   382,   518,    -1,   354,   227,   358,   358,
     382,   518,    -1,    27,   227,   358,   358,   382,   518,    -1,
      52,   227,   358,   358,   382,   518,    -1,   251,   358,   358,
     358,   358,   368,   375,   368,   377,     5,   518,    -1,    75,
     358,   358,   358,   368,   375,   518,    -1,   235,   358,   358,
     358,   358,   358,   518,    -1,    22,   358,   358,   358,   358,
       4,   518,    -1,   111,   358,   358,   358,   358,   358,     4,
     362,   518,    -1,    50,   358,   358,   358,   358,   358,     4,
     362,   518,    -1,    83,   358,   358,   363,   363,     4,   358,
     358,     4,   518,    -1,   114,   358,   358,   363,   363,     4,
     358,   358,   358,     4,   362,   518,    -1,    53,   358,   358,
     363,   363,     4,   358,   358,   358,     4,   362,   518,    -1,
      76,   518,    -1,   287,   501,    -1,     5,   358,   358,    -1,
     307,     5,   358,   358,    -1,   358,   358,   307,     5,    -1,
       5,   368,   375,   367,    -1,     4,     4,    -1,    40,   358,
     358,     4,    -1,   195,   358,   358,     4,    -1,   112,    -1,
     105,    -1,   345,    -1,    64,    -1,   254,    -1,   253,    -1,
     238,    -1,   346,    -1,    61,   506,    -1,    67,    -1,   130,
      -1,   115,    -1,   145,   358,   358,    -1,   156,   358,   358,
      -1,     4,    20,    83,     5,     5,     5,   368,     4,    -1,
       4,    20,   153,     5,     5,     4,    -1,     4,    20,   225,
       5,     5,     5,     5,   368,   375,   384,    -1,     4,    20,
     226,     5,     5,   368,   384,    -1,     4,    20,   240,     5,
       5,     5,   368,    -1,     4,    20,   281,   368,   375,    -1,
     156,    17,    -1,     4,    21,    -1,     4,    21,   370,    -1,
       4,    21,   368,   375,    -1,     4,    22,   241,   368,   377,
      -1,     4,    49,   122,    -1,     4,    50,   241,   368,   377,
      -1,     4,    49,   241,   368,   377,    -1,     4,    53,    21,
      -1,     4,    53,    21,   370,    -1,     4,    53,    21,   368,
     375,    -1,     4,    53,   241,   368,   377,    -1,     4,    60,
     368,   375,   376,    -1,     4,    63,   122,    -1,     4,    63,
     241,   368,   377,    -1,     4,    67,    -1,     4,    75,    27,
      -1,     4,    75,   168,    -1,     4,    75,   241,   368,   377,
      -1,     4,    75,   284,    -1,     4,    76,   140,    -1,     4,
      83,    21,    -1,     4,    83,    21,   370,    -1,     4,    83,
      21,   368,   375,    -1,     4,    83,   241,   368,   377,    -1,
       4,   110,   122,    -1,     4,   110,   241,   368,   377,    -1,
       4,   111,   241,   368,   377,    -1,     4,   114,    21,    -1,
       4,   114,    21,   370,    -1,     4,   114,    21,   368,   375,
      -1,     4,   114,   241,   368,   377,    -1,     4,   130,    -1,
       4,   151,    -1,     4,   173,    27,    -1,     4,   173,   169,
     368,   377,    -1,     4,   173,   227,   368,   375,   376,    -1,
       4,   182,   169,   358,   368,   377,    -1,     4,   229,   122,
      -1,     4,   227,   264,    -1,     4,   227,   271,    -1,     4,
     235,   227,   368,   375,   376,    -1,     4,   235,   169,   368,
     377,    -1,     4,   235,   292,   368,   377,    -1,     4,   236,
      -1,     4,   236,   517,    -1,     4,   251,   131,    -1,     4,
     251,   169,   368,   377,    -1,     4,   251,   227,   368,   375,
     376,    -1,     4,   251,   284,    -1,     4,   261,    -1,     4,
     286,    -1,     4,   286,     4,    -1,     4,   288,    -1,     4,
     288,   250,    -1,     4,   299,    -1,     4,   309,    27,    -1,
       4,   309,   169,   368,   377,    -1,     4,   309,   227,   368,
     375,   376,    -1,     4,   343,    -1,   151,   507,    -1,   151,
     209,    -1,   209,    -1,   229,   260,   358,   358,    -1,   260,
     260,   358,   358,    -1,   234,    -1,   236,   517,    -1,   261,
     508,    -1,   261,   209,    -1,   268,   509,    -1,     5,    67,
      -1,     5,   130,    -1,     5,   156,    -1,     5,   236,   517,
      -1,     5,   286,    -1,     5,   286,   209,    -1,   286,    17,
      -1,   286,    99,   197,    -1,   343,    -1,    30,    -1,   241,
      -1,   162,    -1,   215,    -1,    -1,   358,   358,    -1,    -1,
     358,   358,    -1,    -1,   288,    -1,    -1,    -1,   228,    -1,
     243,    -1,   305,    -1,    58,    -1,   132,    -1,   504,   368,
     375,   376,   360,   519,   525,    -1,   261,   504,   368,   375,
     376,   360,   519,   525,    -1,   504,     5,    -1,   504,     5,
     368,   375,    -1,   504,     4,    -1,   504,     4,   368,   375,
      -1,   125,     5,     5,   502,     4,     5,    -1,   358,   358,
      -1,   134,    -1,    36,    -1,    40,   358,   358,    -1,   195,
     358,   358,    -1,   112,    -1,   295,   368,   375,   367,    -1,
     515,   516,    -1,   516,    -1,   517,   355,   360,    -1,    67,
     355,     5,    -1,    93,   355,     4,     4,    -1,   343,   355,
       4,    -1,   130,   355,     5,    -1,   288,   355,     5,    -1,
     528,    -1,   529,    -1,   204,    -1,   261,    -1,   151,    -1,
      92,    -1,   127,    -1,   106,    -1,   196,    -1,   250,    -1,
     100,    -1,   159,    -1,   277,    -1,   510,    -1,   510,   515,
      -1,    -1,    -1,   520,   523,    -1,    17,    -1,   213,   358,
     358,    -1,   296,    -1,   296,   358,   358,    -1,   360,    -1,
     288,   360,    -1,   523,   524,    -1,   524,    -1,   517,   355,
     360,    -1,    -1,    -1,   526,   527,    -1,   527,   528,    -1,
     528,    -1,   286,   355,     5,    -1,    56,   355,   498,     5,
       5,    -1,    65,    -1,    67,     5,    -1,   183,   371,    -1,
     242,   358,   358,    -1,   284,   368,    -1,   294,   358,    -1,
      46,   372,    -1,   183,     4,    -1,   354,    -1,   352,    -1,
     346,    -1,   204,    -1,   358,   358,   358,   358,    -1,   358,
     358,    -1,   370,   358,   358,    -1,   368,   375,   367,    -1,
     295,   533,    -1,    39,   358,   358,    -1,   195,   534,    -1,
     234,   360,    -1,   358,   358,    -1,   370,   358,   358,    -1,
     368,   375,   367,    -1,    40,   358,   358,    -1,   358,   358,
      -1,   112,   358,   358,    -1,   360,    -1,   314,   369,   375,
      -1,     5,     4,     4,    -1,   304,    -1,    71,   538,    -1,
     170,     4,    -1,   247,     4,    -1,   256,   358,    -1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    -1,     4,
       4,     4,     4,     4,     4,    -1,    55,    -1,   142,    -1,
     248,    -1,    91,    -1,   151,   540,    -1,   261,   541,    -1,
      40,   358,   358,    -1,   195,   358,   358,    -1,   112,    -1,
     266,   112,    -1,    40,   358,   358,    -1,   195,   358,   358,
      -1,   112,    -1,   266,   112,    -1,   190,    -1,    13,    -1,
     204,    -1,    34,    -1,   108,    -1,    62,     5,    -1,   284,
     368,    -1,   308,     4,     4,     4,    -1,   358,    -1,   358,
      98,    -1,   195,   546,    -1,   295,   358,    -1,   295,   358,
      98,    -1,    40,    -1,   358,    -1,   112,    -1,    26,   548,
      -1,   125,   550,    -1,   208,   560,    -1,   113,   561,    -1,
     222,     5,    -1,   121,     5,   385,    -1,    62,     5,   385,
      -1,   275,     4,   385,    -1,   248,    88,   549,    -1,   121,
       5,   385,    -1,    62,     5,   385,    -1,   275,     4,   385,
      -1,   551,    -1,   158,   551,    -1,   285,   552,    -1,   272,
     553,    -1,   118,    88,   554,    -1,   193,   555,    -1,   248,
     158,   557,    -1,   248,    88,   558,    -1,   245,   559,    -1,
     121,     5,    -1,    62,     5,    -1,   275,     4,    -1,   121,
       5,    -1,    62,     5,    -1,   275,     4,    -1,   121,     5,
      -1,    62,     5,    -1,   275,     4,    -1,   121,     5,    -1,
      62,     5,    -1,   275,     4,    -1,   158,   556,    -1,   121,
       5,     4,    -1,    62,     5,     4,    -1,   275,     4,     4,
      -1,   121,     5,    -1,    62,     5,    -1,   275,     4,    -1,
     121,     5,    -1,    62,     5,    -1,   275,     4,    -1,   121,
       5,    -1,    62,     5,    -1,   275,     4,    -1,   121,     5,
      -1,    62,     5,    -1,   275,     4,    -1,   121,     5,   385,
      -1,    62,     5,   385,    -1,   275,     4,   385,    -1,   121,
       5,     5,   385,    -1,   563,     4,     4,   358,   358,   363,
      -1,   563,     4,    -1,   100,    -1,    51,    -1,   297,    -1,
     138,    -1,   109,    -1,    -1,     4,   358,   358,   358,   358,
      -1,   207,    -1,   207,     4,   358,   358,   358,   358,    -1,
     125,   272,   565,    -1,     4,    -1,     4,     4,    -1,   358,
     368,    -1,   358,   358,    -1,   295,   358,   358,    -1,   369,
     375,   376,    -1,    16,   570,    -1,   246,     4,    -1,   244,
     569,    -1,    23,   568,    -1,     4,     4,    -1,     4,     5,
      -1,   288,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   288,     4,     5,    -1,     4,    -1,     4,   369,   375,
      -1,     4,     6,   369,   375,    -1,   233,    -1,   358,   358,
      -1,   358,   358,    12,   358,   358,    -1,   358,   358,    12,
     370,   358,   358,    -1,   358,   358,    12,   368,   375,   367,
      -1,   295,   573,    -1,   124,    -1,   124,   358,    -1,   358,
     358,    -1,   358,   358,    12,   358,   358,    -1,   358,   358,
      12,   370,   358,   358,    -1,   358,   358,    12,   368,   375,
     367,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   462,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   517,   518,   521,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   535,
     537,   538,   539,   540,   542,   543,   544,   545,   548,   549,
     550,   551,   552,   555,   556,   559,   560,   561,   564,   567,
     570,   573,   585,   592,   599,   607,   608,   609,   610,   611,
     614,   615,   616,   617,   618,   619,   620,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   644,   645,
     648,   649,   650,   651,   652,   653,   656,   657,   658,   661,
     662,   663,   664,   665,   666,   667,   668,   671,   672,   673,
     674,   675,   678,   679,   680,   681,   682,   683,   684,   685,
     688,   689,   690,   693,   694,   695,   696,   699,   700,   701,
     704,   705,   706,   709,   710,   711,   714,   715,   716,   717,
     718,   719,   720,   721,   724,   725,   728,   729,   730,   731,
     732,   733,   736,   737,   738,   741,   742,   743,   744,   745,
     746,   749,   750,   751,   752,   753,   754,   755,   756,   760,
     761,   764,   765,   768,   769,   772,   773,   777,   778,   779,
     780,   781,   782,   783,   784,   787,   788,   791,   792,   793,
     795,   797,   798,   799,   801,   805,   806,   809,   810,   812,
     815,   817,   823,   824,   825,   828,   829,   830,   833,   834,
     835,   836,   837,   838,   839,   845,   846,   849,   850,   851,
     852,   853,   856,   857,   858,   861,   862,   867,   872,   879,
     881,   883,   884,   885,   888,   890,   893,   894,   897,   898,
     899,   900,   901,   904,   906,   908,   913,   918,   921,   922,
     925,   926,   927,   934,   935,   936,   937,   940,   941,   944,
     945,   948,   949,   952,   954,   958,   959,   962,   964,   965,
     966,   967,   970,   971,   973,   974,   975,   978,   980,   982,
     983,   985,   987,   989,   991,   995,   998,   999,  1000,  1003,
    1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1026,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1037,
    1038,  1039,  1040,  1041,  1042,  1043,  1045,  1047,  1048,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1061,  1062,  1063,
    1066,  1069,  1070,  1072,  1074,  1075,  1076,  1077,  1078,  1079,
    1086,  1087,  1090,  1091,  1092,  1095,  1096,  1099,  1102,  1103,
    1105,  1109,  1110,  1111,  1114,  1118,  1120,  1121,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1131,  1132,  1133,  1136,  1137,
    1140,  1142,  1150,  1152,  1154,  1158,  1159,  1161,  1164,  1167,
    1168,  1172,  1174,  1177,  1182,  1183,  1184,  1188,  1189,  1190,
    1193,  1194,  1195,  1198,  1199,  1201,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,  1209,  1210,  1212,  1213,  1216,  1217,  1220,
    1221,  1222,  1223,  1226,  1227,  1230,  1232,  1235,  1239,  1240,
    1241,  1243,  1245,  1249,  1250,  1251,  1254,  1255,  1256,  1257,
    1258,  1259,  1260,  1263,  1266,  1267,  1268,  1271,  1272,  1273,
    1274,  1275,  1276,  1279,  1280,  1281,  1282,  1283,  1284,  1285,
    1288,  1289,  1292,  1293,  1296,  1297,  1300,  1301,  1304,  1305,
    1306,  1309,  1310,  1313,  1314,  1317,  1320,  1328,  1329,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1351,  1354,  1355,  1358,
    1359,  1360,  1361,  1364,  1365,  1366,  1367,  1370,  1371,  1372,
    1373,  1374,  1375,  1378,  1379,  1380,  1381,  1382,  1383,  1385,
    1386,  1391,  1392,  1395,  1397,  1399,  1402,  1403,  1404,  1405,
    1406,  1407,  1410,  1412,  1414,  1416,  1417,  1419,  1421,  1423,
    1425,  1427,  1430,  1431,  1432,  1433,  1434,  1435,  1437,  1438,
    1439,  1442,  1445,  1447,  1449,  1451,  1453,  1455,  1457,  1459,
    1462,  1464,  1466,  1468,  1469,  1470,  1471,  1472,  1475,  1476,
    1477,  1478,  1479,  1480,  1481,  1483,  1485,  1486,  1487,  1490,
    1491,  1492,  1493,  1494,  1495,  1497,  1498,  1499,  1502,  1503,
    1504,  1505,  1506,  1509,  1512,  1515,  1518,  1521,  1524,  1527,
    1530,  1533,  1538,  1541,  1544,  1547,  1550,  1553,  1556,  1559,
    1562,  1565,  1568,  1573,  1576,  1579,  1582,  1585,  1588,  1591,
    1594,  1597,  1602,  1604,  1606,  1608,  1610,  1612,  1617,  1619,
    1621,  1625,  1628,  1631,  1634,  1637,  1640,  1643,  1646,  1649,
    1652,  1655,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1668,
    1670,  1671,  1672,  1675,  1676,  1677,  1678,  1679,  1680,  1682,
    1683,  1684,  1687,  1689,  1691,  1692,  1694,  1696,  1700,  1701,
    1704,  1705,  1706,  1709,  1716,  1717,  1718,  1719,  1720,  1721,
    1722,  1725,  1733,  1734,  1735,  1736,  1738,  1740,  1741,  1741,
    1742,  1743,  1744,  1745,  1746,  1747,  1749,  1750,  1752,  1755,
    1758,  1759,  1760,  1763,  1766,  1769,  1770,  1774,  1777,  1780,
    1783,  1787,  1792,  1797,  1799,  1800,  1802,  1803,  1805,  1807,
    1809,  1811,  1812,  1814,  1816,  1820,  1825,  1827,  1829,  1831,
    1833,  1835,  1837,  1839,  1841,  1843,  1845,  1848,  1849,  1851,
    1853,  1854,  1856,  1858,  1859,  1860,  1862,  1864,  1865,  1866,
    1868,  1869,  1870,  1873,  1877,  1880,  1883,  1887,  1892,  1898,
    1899,  1900,  1902,  1903,  1907,  1909,  1910,  1911,  1914,  1917,
    1920,  1922,  1924,  1925,  1930,  1933,  1934,  1935,  1938,  1942,
    1943,  1945,  1946,  1947,  1949,  1950,  1952,  1953,  1958,  1960,
    1961,  1963,  1964,  1965,  1966,  1967,  1968,  1970,  1972,  1974,
    1975,  1977,  1978,  1980,  1982,  1983,  1984,  1985,  1986,  1987,
    1988,  1989,  1990,  1991,  1992,  1994,  1996,  1997,  1998,  1999,
    2001,  2002,  2003,  2004,  2005,  2007,  2008,  2009,  2010,  2011,
    2012,  2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,
    2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,
    2034,  2035,  2038,  2039,  2040,  2041,  2042,  2043,  2051,  2058,
    2067,  2076,  2083,  2090,  2098,  2106,  2113,  2118,  2123,  2128,
    2133,  2138,  2143,  2149,  2159,  2169,  2179,  2186,  2196,  2206,
    2215,  2227,  2240,  2245,  2248,  2250,  2252,  2257,  2261,  2264,
    2266,  2268,  2271,  2272,  2273,  2274,  2275,  2276,  2277,  2280,
    2281,  2282,  2283,  2284,  2285,  2287,  2289,  2291,  2293,  2295,
    2297,  2300,  2301,  2302,  2303,  2305,  2308,  2309,  2311,  2313,
    2314,  2315,  2317,  2320,  2323,  2324,  2326,  2327,  2328,  2329,
    2331,  2332,  2333,  2334,  2335,  2337,  2339,  2340,  2342,  2345,
    2346,  2347,  2349,  2351,  2352,  2353,  2354,  2356,  2359,  2363,
    2364,  2365,  2366,  2369,  2372,  2374,  2375,  2376,  2377,  2379,
    2382,  2383,  2385,  2386,  2387,  2388,  2389,  2391,  2392,  2394,
    2397,  2398,  2399,  2400,  2401,  2403,  2405,  2406,  2407,  2408,
    2410,  2412,  2413,  2414,  2415,  2416,  2417,  2419,  2420,  2422,
    2425,  2426,  2427,  2428,  2431,  2432,  2435,  2436,  2439,  2440,
    2443,  2456,  2457,  2461,  2462,  2466,  2467,  2470,  2475,  2482,
    2484,  2487,  2489,  2492,  2496,  2497,  2498,  2499,  2500,  2501,
    2502,  2506,  2507,  2510,  2511,  2512,  2513,  2514,  2515,  2516,
    2517,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,
    2529,  2530,  2533,  2534,  2537,  2538,  2538,  2541,  2542,  2543,
    2544,  2547,  2548,  2551,  2552,  2555,  2559,  2560,  2560,  2563,
    2564,  2567,  2570,  2574,  2575,  2576,  2577,  2578,  2579,  2580,
    2581,  2587,  2588,  2589,  2590,  2593,  2595,  2596,  2601,  2603,
    2604,  2605,  2606,  2609,  2610,  2615,  2619,  2620,  2621,  2624,
    2625,  2630,  2631,  2634,  2636,  2637,  2638,  2643,  2645,  2651,
    2652,  2653,  2654,  2657,  2658,  2661,  2663,  2665,  2666,  2669,
    2671,  2672,  2673,  2676,  2677,  2680,  2681,  2682,  2685,  2686,
    2687,  2690,  2691,  2692,  2693,  2694,  2697,  2698,  2699,  2702,
    2703,  2704,  2705,  2706,  2709,  2711,  2713,  2715,  2718,  2720,
    2722,  2725,  2726,  2727,  2728,  2729,  2730,  2731,  2732,  2733,
    2736,  2737,  2738,  2741,  2742,  2743,  2746,  2747,  2748,  2751,
    2752,  2753,  2756,  2757,  2758,  2759,  2762,  2763,  2764,  2767,
    2768,  2769,  2772,  2773,  2774,  2777,  2778,  2779,  2782,  2784,
    2786,  2790,  2794,  2796,  2801,  2804,  2805,  2806,  2807,  2810,
    2811,  2813,  2814,  2816,  2819,  2820,  2821,  2824,  2825,  2828,
    2830,  2831,  2832,  2833,  2836,  2837,  2838,  2841,  2842,  2843,
    2846,  2847,  2852,  2856,  2863,  2864,  2866,  2871,  2873,  2876,
    2877,  2878,  2879,  2881,  2886
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
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_",
  "FROM_", "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_",
  "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
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
     605,   606,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   356,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   358,   358,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   361,   361,
     361,   361,   361,   362,   362,   363,   363,   363,   364,   365,
     366,   367,   367,   367,   367,   368,   368,   368,   368,   368,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   369,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   370,
     371,   371,   371,   371,   371,   371,   372,   372,   372,   373,
     373,   373,   373,   373,   373,   373,   373,   374,   374,   374,
     374,   374,   375,   375,   375,   375,   375,   375,   375,   375,
     376,   376,   376,   377,   377,   377,   377,   378,   378,   378,
     379,   379,   379,   380,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   382,   382,   383,   383,   383,   383,
     383,   383,   384,   384,   384,   385,   385,   385,   385,   385,
     385,   386,   386,   386,   386,   386,   386,   386,   386,   387,
     387,   388,   388,   389,   389,   390,   390,   391,   391,   391,
     391,   391,   391,   391,   391,   392,   392,   393,   393,   393,
     393,   393,   393,   393,   393,   394,   394,   395,   395,   395,
     395,   395,   396,   396,   396,   397,   397,   397,   398,   398,
     398,   398,   398,   398,   398,   399,   399,   400,   400,   400,
     400,   400,   401,   401,   401,   402,   402,   402,   402,   403,
     403,   403,   403,   403,   404,   404,   405,   405,   406,   406,
     406,   406,   406,   407,   407,   407,   407,   407,   408,   408,
     409,   409,   409,   410,   410,   410,   410,   411,   411,   412,
     412,   413,   413,   414,   414,   415,   415,   415,   415,   415,
     415,   415,   416,   416,   416,   416,   416,   417,   417,   417,
     417,   417,   417,   417,   417,   418,   419,   419,   419,   420,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   422,
     422,   422,   422,   422,   422,   422,   422,   423,   423,   423,
     424,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     426,   426,   427,   427,   427,   428,   428,   429,   430,   430,
     430,   431,   431,   431,   432,   433,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   434,   434,   434,   435,   435,
     436,   436,   437,   437,   437,   438,   438,   438,   439,   440,
     440,   441,   441,   441,   442,   442,   442,   443,   443,   443,
     444,   444,   444,   445,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   446,   446,   447,
     447,   447,   447,   448,   448,   449,   449,   449,   450,   450,
     450,   450,   450,   451,   451,   451,   452,   452,   452,   452,
     452,   452,   452,   453,   454,   454,   454,   455,   455,   455,
     455,   455,   455,   456,   456,   456,   456,   456,   456,   456,
     457,   457,   458,   458,   459,   459,   460,   460,   461,   461,
     461,   462,   462,   463,   463,   464,   464,   465,   465,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   467,   468,   468,   469,
     469,   469,   469,   470,   470,   470,   470,   471,   471,   471,
     471,   471,   471,   472,   472,   472,   472,   472,   472,   472,
     472,   473,   473,   474,   474,   474,   475,   475,   475,   475,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   480,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   482,   482,
     482,   482,   482,   483,   483,   483,   483,   483,   483,   483,
     483,   483,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   490,   490,   490,   490,   490,   490,   491,   491,
     492,   492,   492,   493,   494,   494,   494,   494,   494,   494,
     494,   495,   496,   496,   496,   496,   496,   496,   497,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   496,   496,   496,   496,   496,   496,   496,   496,   496,
     496,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   499,   499,   499,   499,   499,   499,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   501,   501,   501,   501,   502,   503,
     503,   503,   504,   504,   504,   504,   504,   504,   504,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     506,   506,   506,   506,   507,   507,   508,   508,   509,   509,
     510,   511,   511,   511,   511,   511,   511,   512,   512,   513,
     513,   513,   513,   513,   514,   514,   514,   514,   514,   514,
     514,   515,   515,   516,   516,   516,   516,   516,   516,   516,
     516,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   518,   518,   519,   520,   519,   521,   521,   521,
     521,   522,   522,   523,   523,   524,   525,   526,   525,   527,
     527,   528,   529,   530,   530,   530,   530,   530,   530,   530,
     530,   531,   531,   531,   531,   532,   532,   532,   532,   532,
     532,   532,   532,   533,   533,   533,   534,   534,   534,   535,
     535,   535,   535,   536,   536,   536,   536,   537,   537,   538,
     538,   538,   538,   539,   539,   540,   540,   540,   540,   541,
     541,   541,   541,   542,   542,   543,   543,   543,   544,   544,
     544,   545,   545,   545,   545,   545,   546,   546,   546,   547,
     547,   547,   547,   547,   548,   548,   548,   548,   549,   549,
     549,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     551,   551,   551,   552,   552,   552,   553,   553,   553,   554,
     554,   554,   555,   555,   555,   555,   556,   556,   556,   557,
     557,   557,   558,   558,   558,   559,   559,   559,   560,   560,
     560,   561,   562,   562,   562,   563,   563,   563,   563,   564,
     564,   564,   564,   564,   565,   565,   565,   566,   566,   567,
     567,   567,   567,   567,   568,   568,   568,   569,   569,   569,
     570,   570,   570,   571,   572,   572,   572,   572,   572,   573,
     573,   573,   573,   573,   573
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
       0,     0,     1,     1,     1,     1,     1,     7,     8,     2,
       4,     2,     4,     6,     2,     1,     1,     3,     3,     1,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     0,     0,     2,     1,     3,     1,
       3,     1,     2,     2,     1,     3,     0,     0,     2,     2,
       1,     3,     5,     1,     2,     2,     3,     2,     2,     2,
       2,     1,     1,     1,     1,     4,     2,     3,     3,     2,
       3,     2,     2,     2,     3,     3,     3,     2,     3,     1,
       3,     3,     1,     2,     2,     2,     2,     9,     6,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     3,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     4,     6,     2,     1,     1,     1,     1,     1,     0,
       5,     1,     6,     3,     1,     2,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       1,     3,     4,     1,     2,     5,     6,     6,     2,     1,
       2,     2,     5,     6,     6
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
       0,     0,    44,     0,     0,     0,    48,  1229,    50,     0,
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
       0,   714,    28,     0,    29,  1045,  1046,  1042,  1043,  1044,
       0,   136,  1103,     0,   130,     0,     0,     0,    31,     0,
    1114,  1113,  1112,  1111,    33,     0,     0,     0,     0,     0,
     152,     0,    34,     0,  1132,     0,  1129,    35,     0,     0,
       0,     0,    38,     0,    37,    36,     0,     0,     0,     0,
      41,     0,     0,  1161,    42,     0,     0,     0,     0,     0,
      43,  1225,  1224,  1228,  1227,  1226,    45,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
    1231,    49,     0,     0,    51,     0,     0,     0,     0,   152,
      52,  1253,    53,     0,     0,    54,     1,     4,     5,   225,
       0,   217,     0,     0,   219,     0,   227,   220,   224,   235,
     236,   221,   237,     0,   223,   245,   246,   244,   243,     0,
       0,     0,   250,   258,   261,   260,   259,   257,   249,   254,
     255,   256,   248,     0,     0,     0,     0,     0,     0,   253,
      10,     0,     0,     0,   272,     0,   277,     0,   287,   278,
     289,   279,   290,   280,   301,   281,     0,     0,   282,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   308,     0,     0,     0,     0,     0,
     154,   159,   153,   155,   158,   157,   156,     0,     0,   325,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   330,     0,   377,   373,   369,   370,   374,   371,   376,
     331,   380,   332,   293,   385,   389,   384,   296,   295,   294,
       0,     0,   333,   396,   335,     0,   334,     0,   403,   336,
     415,   407,   418,   408,   409,   411,     0,   413,   414,   152,
     337,     0,     0,   338,     0,     0,   152,   339,   427,   152,
     425,   340,   428,   342,   152,   429,   341,     0,   152,     0,
     343,   447,     0,   445,   463,     0,     0,     0,   451,   443,
       0,   453,   468,   456,   345,   474,   475,   346,     0,     0,
       0,   438,     0,   349,   434,   435,     0,   350,   351,     0,
     482,   476,   481,   477,   478,   479,   480,   354,   355,   483,
     357,     0,   484,   485,   486,   359,   492,   487,   488,   490,
     361,   498,   500,   502,   504,   497,   499,   506,   363,     0,
       0,   511,     0,   367,   152,   513,     0,   520,   538,   521,
     540,   541,   542,   526,   543,   545,   544,   546,   530,   534,
     551,     0,     0,     0,     0,   547,   535,     0,     0,   556,
     555,     0,     0,     0,     0,    25,     0,     0,   566,     0,
     567,     0,     0,     0,     0,     0,   568,     0,   712,     0,
     569,     0,   570,     0,     0,   571,     0,   717,   716,   715,
       0,   720,     0,     0,     0,   892,     0,     0,     0,   724,
     728,   730,   731,     0,     0,     0,     0,   829,     0,     0,
       0,   865,     0,     0,     0,     0,     0,     0,     0,   867,
       0,     0,     0,    30,   137,   138,  1109,  1104,  1110,   133,
     134,   132,   135,   131,  1105,     0,  1107,  1108,    32,     0,
       0,     0,     0,  1121,  1122,     0,   152,     0,  1119,  1116,
       0,     0,     0,   152,  1139,  1142,  1140,  1141,  1133,  1134,
    1135,  1136,     0,     0,     0,    40,  1158,  1159,     0,  1166,
    1168,  1167,  1163,  1164,  1162,     0,     0,     0,     0,  1169,
       0,  1172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1170,  1181,     0,     0,     0,  1171,  1173,  1223,
    1156,  1157,  1155,   206,     0,   209,   202,     0,   211,   203,
       0,   213,   204,  1154,  1153,   205,   207,   208,     0,     0,
     201,     0,     0,     0,     0,  1237,  1250,  1240,     0,     0,
    1243,     0,     0,  1242,  1241,   160,  1259,     0,  1258,  1254,
     226,   222,     0,   231,     0,   228,     0,   247,   147,   150,
     151,   149,   148,   262,   263,   264,   252,   251,   266,   268,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     152,     0,   309,    94,    91,    92,    93,   152,   311,   310,
       0,     0,     0,     0,     0,     0,     0,   324,     0,   320,
     318,   317,   329,   372,     0,     0,   375,   390,   391,   386,
     387,   392,   394,   393,   388,   297,   298,   383,   382,   398,
     397,     0,   402,   416,   417,   406,   419,   412,   410,   405,
       0,     0,   152,   152,   160,   160,   160,   152,     0,     0,
     152,   464,   446,   457,     0,   448,    78,   459,     0,     0,
     450,   452,   152,   469,     0,     0,   455,     0,     0,     0,
     440,     0,     0,     0,     0,   940,   942,   941,     0,  1034,
       0,  1013,     0,  1016,     0,     0,  1036,  1038,     0,  1029,
     353,     0,   489,   491,   501,   494,   503,   495,   505,   496,
     507,   493,     0,     0,   512,   509,   510,   160,   536,   548,
     549,   550,   552,     0,   565,   553,     0,     0,     0,     0,
       0,     0,   173,   173,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   170,   170,   167,     0,     0,   167,
       0,     0,     0,     0,     0,   607,   631,     0,     0,     0,
     603,     0,     0,     0,     0,   173,   167,     0,     0,   708,
       0,   718,   719,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   777,     0,     0,
       0,     0,     0,   800,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   819,     0,     0,   824,   825,     0,     0,
       0,   845,   847,   846,     0,   849,     0,     0,   856,   858,
     859,   893,     0,     0,     0,     0,   722,   723,   934,   932,
     937,   936,   935,   933,   938,     0,   727,     0,   732,     0,
     931,     0,   733,   734,   735,   736,     0,     0,     0,     0,
       0,   831,     0,     0,   832,  1056,     0,  1059,  1055,     0,
       0,     0,   833,   866,   834,  1074,  1079,  1076,  1075,  1073,
    1080,  1077,  1071,  1078,  1072,  1081,     0,     0,   839,     0,
       0,     0,  1087,     0,  1089,   842,     0,  1091,   843,   863,
       0,     0,     0,   868,   869,   870,  1106,  1120,     0,     0,
    1127,  1123,     0,     0,     0,  1118,  1117,  1131,  1130,     0,
       0,  1147,     0,     0,  1143,     0,  1151,     0,     0,  1144,
       0,  1165,   195,   195,     0,   195,     0,  1191,     0,  1190,
    1182,     0,     0,     0,     0,  1186,     0,     0,     0,  1189,
       0,     0,     0,     0,     0,  1184,  1192,     0,     0,     0,
    1183,   195,   195,   195,     0,   210,   212,   214,     0,   215,
       0,    56,     0,  1233,     0,  1238,     0,   152,  1244,  1245,
       0,  1247,  1248,     0,   161,   162,  1239,  1260,  1261,     0,
     218,     0,   232,     0,     0,     0,     0,   265,     0,     0,
       0,     0,     0,     0,     0,     0,   303,   152,     0,     0,
       0,     0,   152,     0,   323,     0,   322,   379,   378,     0,
       0,     0,   152,     0,   160,   424,   422,   426,   430,     0,
       0,     0,   160,     0,    82,    81,   465,   449,     0,   460,
     462,   163,     0,     0,   347,     0,     0,    56,     0,   439,
       0,     0,   952,     0,     0,     0,     0,     0,     0,   966,
       0,     0,     0,     0,     0,     0,   983,   984,     0,     0,
       0,     0,     0,   995,     0,  1001,  1002,  1004,  1006,     0,
    1010,  1021,  1022,  1023,     0,  1025,  1030,  1032,  1033,  1031,
     939,     0,  1012,     0,  1011,   951,     0,     0,  1017,     0,
    1019,     0,  1018,  1039,  1020,  1027,     0,     0,   365,     0,
       0,   563,   564,     0,   561,   557,     0,   173,   173,   173,
     174,   175,   575,   576,   169,   168,     0,   173,   173,   173,
       0,   581,   591,   170,   173,   173,   173,   171,   172,   173,
     173,     0,   173,   173,     0,   170,     0,   604,     0,     0,
       0,   630,     0,   629,     0,     0,   606,     0,   605,     0,
       0,     0,     0,   170,   170,   167,     0,     0,   167,     0,
       0,     0,   173,   173,   704,     0,   173,   173,   709,     0,
     186,   187,   188,   189,   190,   191,     0,    86,    87,    85,
     740,     0,     0,     0,     0,     0,     0,   886,   884,   879,
       0,   889,   873,   890,   876,   888,   882,   871,   885,   874,
     872,   891,   887,     0,     0,     0,   756,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     787,     0,     0,     0,     0,     0,   799,   801,     0,     0,
     806,   805,     0,     0,   176,     0,     0,     0,   152,     0,
     815,     0,     0,     0,     0,   820,   821,   822,     0,     0,
       0,   828,   844,   848,   850,   853,   852,     0,     0,     0,
     857,   894,   896,     0,   895,   725,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1040,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   729,     0,     0,     0,     0,   830,     0,   152,     0,
    1051,  1049,     0,     0,   152,  1054,   835,     0,     0,     0,
     841,     0,     0,  1092,   861,   862,     0,   864,  1126,  1128,
    1125,  1124,  1115,     0,     0,     0,  1148,     0,     0,  1152,
    1160,   197,   198,   199,   200,   196,  1175,  1174,     0,     0,
       0,  1177,  1176,   195,     0,     0,     0,  1185,     0,     0,
       0,     0,     0,  1202,     0,  1216,  1215,  1217,     0,     0,
       0,  1188,     0,     0,     0,  1187,  1197,  1196,  1198,  1194,
    1193,  1195,  1219,  1218,  1220,     0,     0,     0,  1235,  1236,
       0,   152,  1251,  1246,  1249,     0,     0,   152,     0,     0,
       0,   229,     0,     0,     0,     0,     0,     0,     0,     0,
     300,   299,     0,     0,   291,   302,   304,     0,   314,   316,
     315,   313,   152,   321,     0,     0,     0,   160,   152,     0,
       0,     0,     0,   444,   458,    80,    79,   467,     0,   461,
     165,   166,   164,   454,     0,   470,     0,     0,     0,   442,
     436,     0,     0,     0,     0,     0,     0,   152,   953,     0,
     956,     0,     0,   959,     0,   152,   964,     0,   967,   968,
       0,   970,   971,   972,     0,   976,     0,     0,   979,     0,
     985,     0,     0,     0,   990,   991,   989,     0,     0,     0,
     996,   997,     0,     0,  1000,  1003,  1005,  1007,     0,     0,
    1024,  1026,   943,  1035,   944,     0,     0,  1037,  1028,     0,
       0,   517,   518,     0,     0,   562,     0,   572,   573,   574,
     173,   578,   579,   580,     0,     0,     0,   585,   586,   167,
       0,     0,     0,   173,   592,   593,   594,   595,   597,   170,
     600,   601,     0,   173,     0,     0,     0,   170,   170,   167,
       0,     0,     0,     0,   628,     0,   632,     0,     0,     0,
       0,     0,   170,   170,   167,     0,     0,   167,     0,     0,
       0,     0,     0,   170,   170,   167,     0,     0,   167,     0,
       0,     0,     0,     0,   170,   170,   167,     0,     0,   167,
       0,     0,     0,     0,   170,   170,   167,     0,     0,     0,
     170,   608,   609,   610,   611,   613,     0,   616,   617,     0,
     170,     0,     0,   702,   703,   173,   706,   707,     0,   739,
     152,   741,     0,     0,   745,     0,     0,     0,     0,     0,
     878,   875,   881,   880,   877,   883,     0,   754,     0,     0,
       0,     0,   152,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   778,   779,   780,
       0,   784,   781,   783,     0,     0,   789,   788,   790,   791,
       0,     0,     0,     0,     0,     0,   152,   152,   804,   182,
     178,   183,   177,   180,   179,   181,   810,   811,   812,     0,
       0,   814,   816,   152,   152,     0,   823,   826,   152,   152,
     851,   855,   897,   726,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1082,   922,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     923,     0,     0,     0,     0,     0,   737,   738,   152,   160,
       0,   152,   152,  1057,  1058,     0,     0,   837,     0,   152,
    1088,  1090,   860,     0,  1145,  1146,  1149,  1150,   195,   195,
     195,  1221,  1200,  1199,  1201,  1204,  1203,  1207,  1206,  1208,
    1205,  1213,  1212,  1214,  1210,  1209,  1211,     0,     0,  1230,
       0,  1252,     0,   152,     0,  1255,     0,     0,   233,     0,
     230,     0,     0,     0,   269,     0,     0,     0,     0,   152,
       0,   306,   140,     0,   399,     0,   420,   160,   163,     0,
       0,   433,     0,   471,   472,     0,   437,     0,     0,     0,
       0,     0,   152,   954,   163,   163,   163,   152,   960,   163,
     160,   163,   163,   152,   973,   163,   163,   163,   152,   980,
     163,   163,   152,     0,   163,   152,   163,   163,   152,   163,
     152,  1014,  1015,     0,     0,   516,   558,     0,   577,   582,
     583,   584,     0,   588,   589,   590,   596,   173,   170,   602,
     619,   620,   621,   622,   623,     0,   625,   626,   170,     0,
       0,     0,   170,   170,   167,     0,     0,     0,     0,     0,
       0,   170,   170,   167,     0,     0,     0,     0,     0,     0,
     170,   170,   167,     0,     0,     0,   170,   173,   173,   173,
     173,   173,     0,   173,   173,     0,   170,   170,   173,   173,
     173,   173,   173,     0,   173,   173,     0,   170,   170,   682,
     683,   684,   685,   687,     0,   690,   691,     0,   170,   693,
     694,   695,   696,   697,     0,   699,   700,   170,   612,   170,
       0,   618,     0,     0,   705,     0,   742,   163,     0,     0,
     163,     0,     0,     0,   753,   163,   757,   758,   163,   760,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   782,   785,   786,     0,   163,     0,     0,
       0,   802,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1083,  1062,
       0,  1069,  1070,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,     0,     0,    83,     0,
       0,   929,   930,   160,     0,     0,     0,  1052,  1050,  1060,
     836,   838,   160,  1138,  1179,  1178,  1180,  1222,     0,  1232,
    1262,     0,     0,  1257,  1256,   234,     0,     0,     0,   274,
       0,     0,     0,   292,   163,   400,   404,   421,   423,     0,
     431,   466,     0,     0,     0,     0,     0,     0,   950,   955,
     958,   957,   961,   962,   963,   965,   969,   974,   975,   977,
     978,   981,   982,   986,   160,   163,   993,   160,   994,   998,
     160,  1008,   160,     0,     0,   515,     0,   587,   598,   173,
     170,   627,   173,   173,   173,   173,   173,     0,   173,   173,
     170,   173,   173,   173,   173,   173,     0,   173,   173,   170,
     173,   173,   173,   173,   173,     0,   173,   173,   170,   173,
     642,   643,   644,   645,   647,   170,   650,   651,     0,   173,
     173,   671,   672,   673,   674,   676,   170,   679,   680,     0,
     173,   686,   170,     0,   692,   170,   701,   614,   170,   710,
     711,   152,   744,     0,   163,   747,     0,   152,     0,   755,
     759,   152,     0,   766,   767,   768,   769,   773,   774,   770,
     771,   772,     0,     0,   163,   794,     0,   152,     0,     0,
     807,   163,     0,     0,   163,   163,     0,   854,     0,   184,
     184,     0,     0,   184,     0,   184,  1040,     0,     0,     0,
       0,     0,     0,     0,     0,  1061,     0,     0,   184,   184,
       0,     0,     0,     0,     0,     0,     0,     0,   924,     0,
       0,     0,  1040,    84,     0,   184,     0,  1085,   928,     0,
       0,     0,   216,  1264,  1263,     0,     0,   238,     0,     0,
       0,     0,   307,   432,   326,     0,   946,     0,   192,     0,
     987,   988,   992,   999,  1009,   358,   326,     0,   599,   624,
     633,   634,   635,   636,   637,   170,   639,   640,   173,   662,
     663,   664,   665,   666,   170,   668,   669,   173,   653,   654,
     655,   656,   657,   170,   659,   660,   173,   646,   173,   170,
     652,   675,   173,   170,   681,   688,   170,   698,   615,     0,
     163,   748,     0,     0,     0,     0,     0,   775,   776,   792,
       0,     0,     0,   803,   808,     0,   817,   818,   809,   163,
       0,   185,  1040,  1040,    83,     0,  1040,     0,  1040,   898,
     152,     0,  1064,     0,  1067,  1101,  1068,  1066,  1063,     0,
    1040,  1040,    83,     0,     0,  1040,  1040,     0,     0,  1040,
     927,   925,   926,   905,  1040,  1040,  1085,  1096,     0,  1053,
     840,     0,     0,     0,   240,     0,     0,     0,   327,   328,
     348,     0,     0,   193,   194,   948,   949,   366,     0,   173,
     641,   173,   670,   173,   661,   648,   173,   677,   173,   689,
       0,   743,   163,   163,     0,   163,     0,   163,   163,     0,
     163,     0,  1040,   911,   907,  1040,     0,   912,     0,   906,
    1040,     0,  1065,     0,   909,   908,  1040,     0,     0,   903,
     901,  1040,   152,   902,   904,   910,  1096,  1047,     0,     0,
    1086,  1094,  1137,     0,     0,     0,   270,   293,   296,   294,
       0,     0,   945,   152,   560,   638,   667,   658,   649,   678,
     163,   746,   752,     0,   765,   762,   793,   798,     0,   813,
       0,   916,   900,    83,     0,   914,  1102,     0,   899,    83,
       0,   915,     0,  1048,  1098,  1100,     0,  1093,     0,     0,
     275,     0,     0,     0,     0,   192,     0,   749,   152,   763,
     795,   827,  1040,     0,     0,  1040,     0,   163,  1099,  1095,
     239,     0,     0,     0,     0,     0,   947,   721,   152,   750,
     764,   152,   796,   918,     0,  1040,   917,     0,     0,   241,
     286,     0,   285,     0,   751,   797,    83,   919,    83,  1040,
     284,   283,  1040,  1040,   913,   921,   920
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1399,   172,   152,  1246,  2472,  2473,   424,   425,
     426,   427,   153,   154,   155,   684,   676,    91,   803,   447,
    1196,  1663,  1336,  1349,  1332,  1906,  2572,  1396,  2625,  1566,
     337,   756,   759,   762,   770,    63,   361,   367,   371,   374,
      68,   377,    75,   392,   388,   382,   399,    82,   404,    92,
      98,   409,   411,   413,   481,   857,  1632,   415,   418,   105,
     434,   156,   158,  2620,   174,   214,   470,   846,   472,   482,
     849,   854,   484,   486,   860,   489,   862,   500,   865,   867,
     503,   507,   511,   513,   516,   520,   547,   543,  1259,   534,
     885,   890,   882,  1247,   896,   537,   557,   560,   565,   570,
     578,   925,   927,   929,   931,   583,   935,   217,   585,  1733,
     235,   587,   589,   593,   598,   606,   244,  1325,   609,   252,
     618,  1341,   620,   626,   980,  1357,   975,  1774,  1363,  1361,
    1776,   976,  1366,  1368,   632,   635,   630,   254,   262,   264,
     673,  1057,  1423,  1046,  1521,  1950,  2266,  1062,  1055,   920,
    1300,  1304,  1312,  1314,  1934,   270,  1071,  1074,  1082,  2238,
    2239,  2240,  1935,  2607,  2608,  1105,  1108,  2680,  2681,  2677,
    2678,  2724,  2241,  2242,   278,   284,   292,   698,   693,   297,
     302,   304,   708,   715,  1134,  1139,   765,   753,   310,   314,
     722,   320,   729,  1571,   742,   743,  1170,  1165,  1577,  1155,
    1583,  1595,  1591,  1159,   747,   731,   326,   327,   341,  1183,
     344,   350,   780,   783,   777,   352,   355,   788
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2520
static const yytype_int16 yypact[] =
{
    4909,   213,   425,    29, -2520, -2520,   696,  -113,   124,   429,
     935,    65,   420,   154,   185,  1661,   332,  5140,   601,  2431,
   -2520,   185,   791,   486,  1199,   274,    13,   523,   278,   340,
     464,   961,  3588,    30,   470,   562,   469,   278, -2520,   133,
      54,  1061, -2520,    44,   567,   522, -2520,   587, -2520,   108,
    2993,   346,   120,   588,    80,   569,   382,   674,   700,   126,
     720,    -4,   139, -2520, -2520, -2520,   591,  1021, -2520,    41,
      40,   185,    16,   581,   549, -2520,   757,  1021, -2520, -2520,
      51,  1021, -2520, -2520, -2520, -2520,  1021, -2520, -2520, -2520,
   -2520, -2520, -2520,    36,   743,   775,   797,   161, -2520,  1021,
    1275,  1021,  1021,   848,  1021, -2520, -2520, -2520,   623, -2520,
   -2520, -2520, -2520,  4523, -2520, -2520, -2520, -2520, -2520, -2520,
    1021, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520,  1189, -2520,  1021, -2520,   835, -2520, -2520,
     185,   185,   185,   185,   185,   185, -2520, -2520,   185,   185,
     185,   185, -2520,   737, -2520,   790,  1534,   747,   255,   585,
     704,    -8,  3968,   444,  4578,  4488,   844,  4523,  2599, -2520,
     949,  -106,   889,   821,   890,   447,   901,   278,   409, -2520,
     859, -2520,   694,   650,   134, -2520,    21, -2520,   939, -2520,
      74,   851,   254, -2520, -2520,  2654, -2520, -2520, -2520,   876,
     915, -2520, -2520, -2520, -2520,   595, -2520, -2520, -2520, -2520,
     768, -2520, -2520,  2654,  4028, -2520, -2520,    58, -2520,   954,
     996,   152, -2520,  1021, -2520,  1006,   127,  1011,   166,   453,
    1013,    76, -2520, -2520, -2520,  1017,  1023,   185,   185,  1021,
    1021, -2520, -2520,  1025, -2520, -2520, -2520, -2520, -2520, -2520,
    2487,   -42, -2520,  1029,     5,  1021,  2654,  1021, -2520,  1031,
   -2520, -2520, -2520, -2520, -2520,  1021,  1179,   185,  3782,  1021,
    1189,  1021, -2520,  1047, -2520,  2934, -2520, -2520,   590,  1053,
    1055,  1021, -2520,  1062, -2520, -2520,   -32,  1064,  2654,  1067,
   -2520,  1213,  1021,   855, -2520,   360,   956,  1487,   192,  1079,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1084, -2520,   106,
      27,   111,   135,   264,  1021,  1021,    88, -2520,  1021,   830,
    1106, -2520,  1021,  1021, -2520,  1114,    49,    68,  1127,  1189,
   -2520, -2520, -2520,   819,  1021, -2520, -2520, -2520, -2520, -2520,
    1021, -2520,  1139,  1136, -2520,  1021,   203, -2520, -2520, -2520,
   -2520, -2520, -2520,  1021, -2520, -2520,  1021, -2520, -2520,   462,
     462,  1142, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520,   955,  1021,  1021,  1153,  1165,  1169, -2520,
   -2520,  1021,  1021,  1021, -2520,  1021, -2520,  1185, -2520, -2520,
   -2520, -2520,   204, -2520,  1192, -2520,  2654,  1204, -2520,  1021,
   -2520, -2520, -2520,  1021,  1205,  1207,  1207,  2654,  1021,  1021,
    1021,  1021,  1021,  1021, -2520,  1021,  4523,  1275,  1021,  1021,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1275,  1021, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
    1229, -2520,   923,    33, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520,   -48, -2520, -2520, -2520,  1068, -2520,   396,
      23,    23, -2520, -2520, -2520,  1235, -2520,  1237, -2520, -2520,
     -11, -2520,  1066, -2520, -2520, -2520,  1072, -2520, -2520,  1189,
   -2520,  1021,  1021, -2520,  2654,  2654,  1189, -2520, -2520,  1189,
   -2520, -2520, -2520, -2520,  1189, -2520, -2520,  2654,  1189,  1021,
   -2520, -2520,  2654, -2520,  1242,    78,  1051,     7, -2520, -2520,
    1052,  2654,    12, -2520, -2520, -2520, -2520, -2520,  1246,  1252,
    1260, -2520,  1070, -2520, -2520, -2520,  1021, -2520, -2520,  1143,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520,    74, -2520, -2520, -2520, -2520, -2520, -2520,  1081,  1082,
   -2520, -2520,  1208,  1214,  1220, -2520, -2520,  1045, -2520,  1021,
    1284,  1065,  2934, -2520,  1189, -2520,  1285, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520,  2654,  2654,  2654,  2654, -2520, -2520,  1291,   185, -2520,
   -2520,  1297,  1301,  1112,  1021, -2520,   280,  1222, -2520,  1306,
   -2520,   584,  1231,  5141,    60,  1315, -2520,  1326, -2520,  1327,
   -2520,    22, -2520,  1329,  1333, -2520,  1335, -2520, -2520, -2520,
    1021, -2520,  2934,  4359,   932,   654,  1337,   256,  1245, -2520,
   -2520, -2520,  1331,   670,  1345,  1350,    10,  1021,   554,   475,
      86,  2654,   185,  1436,   808,     2,    31,   182,    14, -2520,
    1339,  1340,  1354, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520,  1021, -2520, -2520, -2520,  1021,
    1021,  1021,  1021, -2520, -2520,  1021,  1189,  1021, -2520,  1021,
    1275,  1021,  1361,  1189, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520,  1362,    37,   347, -2520, -2520, -2520,  1364, -2520,
   -2520, -2520, -2520,  1277, -2520,  1371,  1378,  1298,  1383, -2520,
    1386, -2520,  1394,  1300,  1403,   399,   391,   441,   109,   446,
    1405,   456, -2520, -2520,  1410,  1411,  1414, -2520, -2520,  1415,
   -2520, -2520, -2520, -2520,  1418, -2520, -2520,  1422, -2520, -2520,
    1423, -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1021,  1021,
   -2520,  1021,  1088,  1021,  1021, -2520,  3692, -2520,  1077,  1416,
   -2520,  1120,  1426, -2520, -2520,   417,  1021,  1021, -2520,  1419,
   -2520, -2520,  1427,   979,  1021,  1421,   164, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520,  1430,  1432,  1021,  1021,  1021,  1434,   185,  1435,  1437,
    1189,  2654, -2520, -2520, -2520, -2520, -2520,  1189, -2520, -2520,
    1021,  1021,  1021,  2654,  1021,  1275,  1021, -2520,  1021, -2520,
   -2520, -2520, -2520, -2520,  1438,  1442, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,   444,
   -2520,  1021, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
    2654,  1021,  1189,  1189,   417,   417,   417,  1189,  1275,  1021,
    1189, -2520, -2520, -2520,  1021, -2520,   401,  1273,  1443,  1445,
   -2520, -2520,  1189, -2520,  1295,  1296, -2520,  1451,  1452,  1454,
    1163,  1021,  4491,   339,   454, -2520, -2520, -2520,  1021,   482,
    1037, -2520,  1182, -2520,  1436,  1206,   521,  1171,   138, -2520,
   -2520,  1021, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520,  1021,  1456, -2520, -2520, -2520,   417, -2520, -2520,
   -2520, -2520, -2520,  4608, -2520, -2520,  1461,  1462,  1021,  1463,
    1464,  1465,   361,   361,   -50,  1468,  1472,  1473,  1477,  1210,
    1211,  1482,  1484,  1486,   476,   476,   -50,  1488,  1489,   -50,
    1513,  1518,  5178,  1519,  1520, -2520, -2520,  1521,  1522,   662,
   -2520,  1527,  1528,  1532,  1535,   361,   -50,  1537,  1539, -2520,
    1540, -2520, -2520,  1189,   780,  1100,  1305,   389,  1307,  1441,
    2432,   548,  1545,    20,  1413,  1455,   820,   564,  1525,   663,
    1317,  1460,  1555,  1355,   463,    57,   555,   -34,  2654,  1436,
    1529,   337,  1321,  1357,  1568,    25, -2520, -2520,   478,  1571,
    1573, -2520, -2520, -2520,  1575,  1368,   100,  1436,  1369, -2520,
   -2520, -2520,   185,  1581,  1582,  1021, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520,     9, -2520,  2776, -2520,  1021,
   -2520,  1021, -2520, -2520, -2520, -2520,  1021,  1021,  1021,   256,
    2654, -2520,  1584,  1183, -2520, -2520,  1021, -2520, -2520,  1021,
    2654,  1021, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520,   185,  1021, -2520,  1021,
     256,  1585, -2520,  1021,  1021, -2520,   185, -2520, -2520, -2520,
     162,  1586,  1587, -2520, -2520, -2520, -2520, -2520,  1021,  1021,
   -2520, -2520,  1275,  1021,  1021, -2520, -2520, -2520, -2520,  1589,
    1021, -2520,  1021,  1485, -2520,  1021, -2520,  1021,  1497, -2520,
    1590, -2520,   873,   873,   488,   873,  1591, -2520,   489, -2520,
   -2520,  1593,  1594,   506,  1597, -2520,  1605,  1606,  1610, -2520,
     534,   550,  1613,  1616,  1620, -2520, -2520,  1622,  1623,  1626,
   -2520,   873,   873,   873,  1021, -2520, -2520, -2520,  1021, -2520,
    1021,   944,  2654, -2520,  1021, -2520,  2934,  1189, -2520, -2520,
    1628, -2520, -2520,  1631, -2520, -2520, -2520, -2520,  1619,  3782,
   -2520,  1021,  1625,  1021,  1021,  1021,   948, -2520,  1632,  1635,
    1021,  1021,    94,  1636,   185,   185, -2520,  1189,  1021,  1639,
    1640,  1642,  1189,  2654, -2520,  1021, -2520, -2520, -2520,  1021,
    1021,  1021,  1189,  2654,   417, -2520, -2520, -2520, -2520,  1275,
    1021,  1645,   417,  1021,  1612,  1621,   186, -2520,  1646, -2520,
   -2520,   812,  1498,  1021, -2520,  1021,  1648,  1654,  1021, -2520,
    1653,   849,  4523,  1420,   721,  1424,   113,  2654,   756, -2520,
      59,  1523,   130,   763,  1425,   160, -2520, -2520,   645,  1491,
     618,  1546,   327,  1436,   886, -2520,  1658,  1417, -2520,   675,
   -2520, -2520, -2520, -2520,  1436,  1466, -2520, -2520, -2520, -2520,
   -2520,  1021, -2520,  1021, -2520, -2520,  1021,  1021, -2520,  1021,
   -2520,  1021, -2520, -2520, -2520, -2520,  1474,  1021, -2520,  1021,
      34, -2520, -2520,  1665,  1668, -2520,  1021,   361,   361,   361,
   -2520, -2520, -2520, -2520, -2520, -2520,  1669,   361,   361,   361,
     649, -2520, -2520,   476,   361,   361,   361, -2520, -2520,   361,
     361,  1670,   361,   361,  1674,   476,   847, -2520,  1676,  1677,
    1680, -2520,   772, -2520,  1130,  1137, -2520,  1071, -2520,  1406,
    1683,  1685,  1686,   476,   476,   -50,  1688,  1689,   -50,  1690,
    1694,  1695,   361,   361, -2520,  1699,   361,   361, -2520,  1706,
   -2520, -2520, -2520, -2520, -2520, -2520,   185, -2520, -2520, -2520,
    4523,  1135,   185,  1021,  1157,  1366,   -31, -2520, -2520, -2520,
     394, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520,  1707,   185,  1021, -2520,   185,  1709,  1021,
    2654,   185,  1377,  1453,  1476,   178,   205,  1478,   224,  1393,
    1407,  1716,  1720,  1721,  2432,  1722,  1725,  1726,  1428,  1429,
    1201,  1730,   185,  1021,  1175,  1389, -2520, -2520,   185,  2654,
   -2520, -2520,  2654,  1021,    24,  1732,   185,  1021,  1189,   185,
   -2520,  1737,  2654,  2654,  1021, -2520, -2520, -2520,   185,   185,
    2654, -2520, -2520, -2520, -2520, -2520, -2520,  2654,  1021,   185,
   -2520, -2520, -2520,  1021, -2520, -2520,  1738,  1021,  1510,   157,
    1021,  1517,  1021,   181,  1021, -2520,  1021,  1524,  1526,  1021,
    1021,  1021,  1021,  1021,  1021,  1021,  1021,    19,  1021,  1021,
    1530, -2520,  1021,  1021,  1021,  1021, -2520,  2654,  1189,  1740,
    2654,  2654,  1021,  1021,  1189, -2520,  1021,  1021,  1021,  2654,
   -2520,  1021,  1021, -2520, -2520, -2520,  1742, -2520, -2520, -2520,
   -2520, -2520, -2520,  1744,  1021,  1021, -2520,  1021,  1021, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1745,  1747,
    1750, -2520, -2520,   873,  1751,  1753,  1756, -2520,  1757,  1761,
    1762,  1763,  1765, -2520,  1766, -2520, -2520, -2520,  1768,  1770,
    1772, -2520,  1773,  1775,  1777, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520,  1021,  1021,  1021, -2520, -2520,
    1021,  1189, -2520, -2520, -2520,  3782,  1021,  1189,  1021,  1021,
    1021, -2520,  1021,  1021,  1778,  1021,  1780,  1743,  1021,  1021,
   -2520, -2520,  1781,  2654, -2520, -2520, -2520,  1021, -2520, -2520,
   -2520, -2520,  1189, -2520,   998,  1021,   998,   417,  1189,  2654,
    1021,  1021,  1782, -2520, -2520, -2520, -2520, -2520,  1021, -2520,
   -2520, -2520, -2520, -2520,  2654, -2520,  2654,  1021,  1783, -2520,
   -2520,  1784,  1787,  1790,  1791,  1794,  2654,  1189, -2520,  2654,
   -2520,  2654,  2654,  4523,  2654,  1189, -2520,  2654, -2520, -2520,
    2654, -2520, -2520,  4523,  2654, -2520,  2654,  2654,  4523,  2654,
   -2520,  2654,  2654,  1021, -2520, -2520, -2520,  2654,  2654,  2654,
   -2520, -2520,  2654,  2654, -2520, -2520, -2520, -2520,  2654,  2654,
   -2520, -2520, -2520, -2520, -2520,  1021,  1021, -2520, -2520,  1796,
    1021, -2520, -2520,  1797,  1799, -2520,  1021, -2520, -2520, -2520,
     361, -2520, -2520, -2520,  1801,  1802,  1803, -2520, -2520,   -50,
    1800,  1805,  1806,   361, -2520, -2520, -2520, -2520, -2520,   476,
   -2520, -2520,  1837,   361,  1838,  1840,  1841,   476,   476,   -50,
    1843,  1844,  1846,  1149, -2520,  1170, -2520,  1198,  1515,  1847,
    1850,  1852,   476,   476,   -50,  1854,  1856,   -50,  1857,  1588,
    1869,  1870,  1872,   476,   476,   -50,  1874,  1875,   -50,  1878,
    1608,  1879,  1880,  1881,   476,   476,   -50,  1884,  1887,   -50,
    1890,  1891,  1892,  1893,   476,   476,   -50,  1888,  1895,  1896,
     476, -2520, -2520, -2520, -2520, -2520,  1898, -2520, -2520,  1899,
     476,  1900,  1901, -2520, -2520,   361, -2520, -2520,  1905, -2520,
    1189, -2520,  2654,  1021, -2520,  1021,  2654,  1021,  1906,  1100,
   -2520, -2520, -2520, -2520, -2520, -2520,  1908, -2520,  2654,   185,
    1909,  2654,  1189, -2520,  1910,  1100,  1021,  1021,  1021,  1021,
    1021,  1021,  1021,  1021,  1021,  1912,  1913, -2520, -2520, -2520,
    1914, -2520, -2520, -2520,  1916,  1927, -2520, -2520, -2520, -2520,
    1021,  2654,  1021,  1940,  1100,   185,  1189,  1189, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1021,
    1275, -2520, -2520,  1189,  1189,  1021, -2520, -2520,  1189,  1189,
   -2520, -2520, -2520, -2520,  1021,  1021,  1021,  1021,  1021,  1021,
    1021,  1021,  1021,  1021,  2946, -2520,  1021,  1021,  1021,  1021,
    1021,  1021,  1021,  1021,  1021,  1021,  1021,  2029,  1946,  1021,
   -2520,  1021,  1021,  1021,  1928,  1948, -2520, -2520,  1189,   417,
    1949,  1189,  1189, -2520, -2520,  1275,  1021, -2520,  1950,  1189,
   -2520, -2520, -2520,  1951, -2520, -2520, -2520, -2520,   873,   873,
     873, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520,  1100,  1021, -2520,
    1021, -2520,  1021,  1189,  1021, -2520,  1275,  1021, -2520,  1021,
   -2520,  1789,  1952,  1953, -2520,  1955,  1021,  1021,  1956,  1189,
    2654, -2520, -2520,  1021, -2520,  1021, -2520,   417,   812,  1021,
    1959, -2520,  1021, -2520, -2520,    74, -2520,  1960,  1961,  1962,
    1963,  1964,  1189, -2520,   812,   812,   812,  1189, -2520,   812,
     417,   812,   812,  1189, -2520,   812,   812,   812,  1189, -2520,
     812,   812,  1189,  2654,   812,  1189,   812,   812,  1189,   812,
    1189, -2520, -2520,  1957,    74,  1965, -2520,  1021, -2520, -2520,
   -2520, -2520,  1967, -2520, -2520, -2520, -2520,   361,   476, -2520,
   -2520, -2520, -2520, -2520, -2520,  1968, -2520, -2520,   476,  1969,
    1971,  1972,   476,   476,   -50,  1974,  1975,  1976,  1977,  1978,
    1979,   476,   476,   -50,  1981,  1982,  1983,  1985,  1986,  1987,
     476,   476,   -50,  1989,  1990,  1991,   476,   361,   361,   361,
     361,   361,  1994,   361,   361,  1996,   476,   476,   361,   361,
     361,   361,   361,  1998,   361,   361,  2001,   476,   476, -2520,
   -2520, -2520, -2520, -2520,  2004, -2520, -2520,  2005,   476, -2520,
   -2520, -2520, -2520, -2520,  2006, -2520, -2520,   476, -2520,   476,
    2008, -2520,  2011,  2012, -2520,  2934, -2520,   812,  2013,  2654,
     812,  1021,  2654,  2014, -2520,   812, -2520, -2520,   812, -2520,
    2654,  2017,  1021,  1021,  1021,  1021,  1021,  1021,  1021,  1021,
    1021,  1021,  1021, -2520, -2520, -2520,  2654,   812,  1021,  2654,
    2019, -2520,  1275,  1275,  2654,  1275,  1275,  2654,  2654,  1275,
    1275,  1021,  1021,  1021,  1021,  1021,  1021,  1100,  1021,  1021,
    1021,  1400,  1563,  1601,  1618,  1672,  1673,  1675,  2946, -2520,
    1679, -2520, -2520,  1100,  1021,  1021,  1021,  1021,  1100,  1021,
    1021,  1021,  1021,  1021,  1021,  1189,  1021,  1503,  1100,  1021,
    1021, -2520, -2520,   417,   185,  2020,  2021, -2520, -2520, -2520,
   -2520, -2520,   417,  2031, -2520, -2520, -2520, -2520,  1021, -2520,
   -2520,  1275,  1021, -2520, -2520, -2520,   967,  2033,  2034, -2520,
    1021,  2032,   998, -2520,   812, -2520, -2520, -2520, -2520,  2035,
   -2520, -2520,  2037,  2039,  2038,  2040,  2654,  2041, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520,   417,   812, -2520,   417, -2520, -2520,
     417, -2520,   417,  2044,  2046, -2520,  1021, -2520, -2520,   361,
     476, -2520,   361,   361,   361,   361,   361,  2047,   361,   361,
     476,   361,   361,   361,   361,   361,  2048,   361,   361,   476,
     361,   361,   361,   361,   361,  2049,   361,   361,   476,   361,
   -2520, -2520, -2520, -2520, -2520,   476, -2520, -2520,  2050,   361,
     361, -2520, -2520, -2520, -2520, -2520,   476, -2520, -2520,  2051,
     361, -2520,   476,  2052, -2520,   476, -2520, -2520,   476, -2520,
   -2520,  1189, -2520,  2654,   812, -2520,  2053,  1189,  1021, -2520,
   -2520,  1189,  1021, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520,  1021,  1021,   812, -2520,  2061,  1189,  1021,  1275,
   -2520,   812,  1021,  1275,   812,   812,  2654, -2520,  1021,  2063,
    2063,  1021,  1021,  2063,  1100,  2063, -2520,  2654,  2432,  2064,
    2066,  2067,  2068,  2070,  2072, -2520,   185,  1100,  2063,  2063,
    1021,  1021,  1100,  1021,  1021,  1021,  1021,  1021, -2520,  1275,
    1021,  2073, -2520, -2520,  1021,  2063,   185,    26, -2520,  2074,
     185,  2076, -2520, -2520, -2520,  2077,  1021, -2520,  2078,  2080,
    1894,  1021, -2520, -2520,    18,  2654, -2520,  2081,    47,  2654,
   -2520, -2520, -2520, -2520, -2520, -2520,    18,  1021, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520,   476, -2520, -2520,   361, -2520,
   -2520, -2520, -2520, -2520,   476, -2520, -2520,   361, -2520, -2520,
   -2520, -2520, -2520,   476, -2520, -2520,   361, -2520,   361,   476,
   -2520, -2520,   361,   476, -2520, -2520,   476, -2520, -2520,  1021,
     812, -2520,  2654,  2654,  1021,  2654,  1021, -2520, -2520, -2520,
    2654,  2654,  1021, -2520, -2520,  2654, -2520, -2520, -2520,   812,
    2084, -2520, -2520, -2520,  1100,  1021, -2520,  2085, -2520, -2520,
    1189,  2087, -2520,  2086, -2520, -2520, -2520, -2520, -2520,  2090,
   -2520, -2520,  1100,  1021,  2091, -2520, -2520,  1021,  2654, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520,    26,  1701,  1436, -2520,
   -2520,  2092,  2093,  2094, -2520,  2062,  2096,    62, -2520, -2520,
   -2520,  2099,  2654, -2520, -2520, -2520, -2520, -2520,  2101,   361,
   -2520,   361, -2520,   361, -2520, -2520,   361, -2520,   361, -2520,
    2934, -2520,   812,   812,  1021,   812,  2102,   812,   812,  1021,
     812,  1021, -2520, -2520, -2520, -2520,  2103, -2520,  1021, -2520,
   -2520,  2106, -2520,  1021, -2520, -2520, -2520,  2104,  1021, -2520,
   -2520, -2520,  1189, -2520, -2520, -2520,  1701, -2520,  1785,  1760,
    1436, -2520, -2520,  2107,  2112,  2114, -2520, -2520, -2520, -2520,
     883,   883, -2520,  1189, -2520, -2520, -2520, -2520, -2520, -2520,
     812, -2520, -2520,  2115, -2520,  4523, -2520, -2520,  2116, -2520,
    1100, -2520, -2520,  1100,  1021, -2520, -2520,  1021, -2520,  1100,
    1021, -2520,  2654, -2520,  1785, -2520,   185, -2520,  2117,  2118,
   -2520,  1021,  1021,  1021,  1021,    47,  2120,  4523,  1189, -2520,
    4523, -2520, -2520,  1021,  2123, -2520,  1021,   812, -2520, -2520,
   -2520,  2124,  2125,  1021,  2127,  1021, -2520, -2520,  1189, -2520,
   -2520,  1189, -2520, -2520,  2129, -2520, -2520,  2130,  2131, -2520,
   -2520,  2132, -2520,  2133, -2520, -2520,  1100, -2520,  1100, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2520, -2520,    -3, -2520,   635, -2520, -1620,  -982,  1556, -2520,
     805,  -422,  1876,   -49,    81, -2520, -2520, -1640,  1697,  1812,
    -768, -1071,  -848,  1078,  1614, -2520, -1108, -2520,  -654, -1133,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520,  -532,  -476, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520,  -409, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -1441, -2520, -2520, -2520, -2520, -2520,  -638, -2520,
   -2520, -2520, -2520, -2520, -2520,   526, -2520, -2520, -2520, -2520,
    -117,  -661,  -889,  -478, -2520, -2520, -2520, -2520,  -545,  -537,
   -2520, -2520, -2519, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520,  1408, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520,
   -2520, -2520, -2520, -2520, -2520, -2520, -2520, -2520
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1235
static const yytype_int16 yytable[] =
{
      67,   349,  1096,  1880,  2023,   858,  2025,  1100,   104,   678,
    1567,   887,  1572,  1400,  1495,   837,   893,   106,   255,  1109,
    1070,  1073,    64,    65,  1947,   840, -1084,  1065,   369,   289,
    1477,   106,    64,    65,   106,   293,   983,   313,  1602,  1603,
    1604,   407,   566,    64,    65,   379,   343,  1427,  1102,   354,
    2618,  1899,   360,   778,  1731,   402,   366,    64,    65,   373,
      64,    65,   607,   376,   378,    64,    65,   387,    64,    65,
     394,   398,   781,  1900,   401,  1850,  1901,  1130,   405,  2623,
     256,   633,   883,   406,   984,   357,  1688,  1902,  1466,    64,
      65,    64,    65,  1460,   754,   321,   419,   423,   428,   429,
     433,   435,   257,    64,    65,    99,  1236,  1237,  1238,   535,
    1903,    64,    65,   291,  1110,   106,  1334,   439,  1351,   713,
    1111,  1354,  1075,    64,    65,   100,  1076,  1904,    77,    64,
      65,   109,   616,   111,  1683,   109,  1485,   844,  1385,   106,
     750,  1630,    64,    65,   322,   894,   847,   111,   977,  1131,
     111,  1693,   448,   323,   258,  1315,   390,   567,   612,  2725,
      64,    65,   487,   855,    78,  1851,   416,  1544,  1205,  1320,
     488,   621,   674,    76,   888,   480,  1206,   101,   757,  1545,
     501,  1698,   324,   863,    64,    65,   106,   157,  1428,   106,
    1657,  1461,   417,   391,   438,   307,   562,  1160,  1077,  1868,
     856,   536,   760,   679,   848,  2748,    64,    65,   817,   818,
     680,   681,  1467,   985,   751,   794,   114,  1335,   978,  1852,
    1078,   845,   358,  1066,   115,   116,  1870,  1689,   383,   714,
     114,   111,  1132,   114,  1486,   380,    79,  1316,   115,   116,
     614,   115,   116,   109,  1103,  1873,   703,   682,   864,   311,
    2687,   675,   608,  1308,   744,   111,   640,   641,    64,    65,
     102,  1429,   568,   372,   502,   408,   510,  1161,   515,   519,
     581,  1732,   685,   613,   687,  1478,   546,   763,  1125,   370,
      54,  1079,   689,   692,   622,   695,   699,   986,   701,  1101,
     569,   579,   117,   381,   949,   950,   117,   987,   711,   403,
    1690,  2619,   111,  1133,  1430,   111,  1067,   895,   721,   723,
     752,   119, -1084,   745,   114,   768,  1496,   259,  1112,    80,
    1048,   889,   115,   116,    66,   119,  1948,  1104,   119,   988,
    2624,   766,   767,   769,   294,   771,   265,   779,   114,   774,
     775,   325,   951,  1691,   295,   384,   115,   116,   634,   312,
     787,   789,  1462,   683,  1684,   103,   782,   790,  1469,   623,
     149,  1049,   793,   795,   260,   150,   151,  2688,  1631,   697,
     796,  1694,    81,   797,   149,   617,  1489,   149,  1905,   150,
     151,  1080,   150,   151,  1926,   114,   271,  1135,   114,   385,
     386,   807,   808,   115,   116,  1487,   115,   116,   812,   813,
     814,  1699,   815,   342,   117,   272,  1291,   273,  1931,   119,
     266,   478,  2689,  1224,   624,   353,   822,   308,   563,  1869,
     823,   365,   725,  1849,   106,   828,   829,   830,   831,   832,
     833,  1527,   834,   119,   423,   838,   839,    55,   625,   107,
    1981,   309,   564,   473,   423,   841,  1871,    64,    65,   474,
    1865,   582,   544,  1151,   764,   550,  1240,    83,   149,  1136,
     108,   732,  1539,   150,   151,  1874,  1649,   746,  1471,  1292,
    1106,   952,   953,  1894,  1653,   851,   551,   109,   173,    56,
     119,   726,   149,   119,  1296,    64,    65,   150,   151,   475,
    1458,   552,   798,  1347,  1050,  1293,  1707,    57,   870,   871,
    1853,   109,   245,  1156,   109,  1479,   267,   253,  1162,  1051,
    1052,  1402,  1152,   545,   476,  1194,   879,   836,  1167,  1330,
     734,   268,   110,   274,    64,    65,    58,  1826,   263,   149,
    1829,   279,   149,   936,   150,   151,  1244,   150,   151,  1048,
     111,   298,  1137,   901,    59,   954,  1331,   627,    60,  1153,
    1568,  1574,    64,    65,  1708,   955,   956,   799,   305,   329,
     477,    61,  1157,   306,  1472,   628,   303,  1163,  1580,   852,
     330,   328,    64,    65,   974,  1294,   932,  1168,   112,   351,
    1049,    84,   275,   269,    64,    65,  1441,   957,   356,   960,
    1854,   338,   553,   993,    64,    65,  1588,   331,   961,   962,
    1072,  1053,  1054,    85,   478,   479,   884,    86,   727,  1569,
    1575,   948,  1592,  1138,  1442,   113,  1297,  1443,  1048,  1709,
    1444,  1473,  1710,   114,   276,  1295,   800,  1581,   395,   359,
    1403,   115,   116,  1720,   277,   728,  1348,   992,   117,   590,
     299,   629,   921,   118,  1855,   704,   963,  1445,   853,   159,
    1245,   554,  2491,   362,  1068,  1589,   236,  1081,  1041,  1049,
      87,   261,   117,  1744,  1745,   117,  1154,  1369,   296,  1298,
    1424,  1593,  1700,   332,   740,  1446,  1370,  1371,  1447,   363,
    1195,   705,  1116,   591,  1042,   215,  1117,  1118,  1119,  1120,
    1459,  1302,  1121,   555,  1123,  1299,  1124,   423,  1126,    88,
    1550,   216,  1717,   556,   364,  1480,   389,    89,    90,   333,
    1059,  1746,   339,  1050,   801,   375,  1158,   300,   119,   802,
      62,  1164,   396,   549,  1372,   368,   301,  1187,  1051,  1052,
    1310,  1169,   706,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   400,  1570,  1576,  1178,  1179,   149,  1180,  1182,
    1184,  1185,   150,   151,   410,   964,   965,  1778,   334,   393,
     412,  1582,  1060,  1197,  1198,  1452,  1779,  1780,   592,  1425,
    1202,  1203,  1050,  1448,   340,   450,   451,   452,   453,   454,
     455,   397,   414,   456,   457,   458,   459,  1051,  1052,  1590,
    1209,  1210,  1211,   335,  1701,  1069,  1043,  1650,   436,  1464,
    1053,  1054,    64,    65,  1449,  1594,  1465,  1219,  1220,  1221,
     336,  1223,   423,  1225,  1781,  1226,  1660,  1661,   707,   449,
    1747,  1748,  1433,  1680,  1718,  2274,  2275,  2276,  1097,   966,
    1450,    64,    65,  1373,  1374,   460,  1229,   461,  1231,   967,
     968,  1764,  1765,  1390,   969,  1061,   471,  2183,  1233,  1044,
    1434,   483,  1702,  1435,   485,   423,  1241,   512,  1686,  2026,
     237,  1243,  1704,  2191,    69,  1695,    64,    65,   430,  1705,
      70,   970,   638,   639,   538,  1045,   540,  1258,  1260,  1053,
    1054,  2082,  1719,  1436,  1453,  1301,  1303,  1306,   238,  1766,
    1662,   539,  2210,  1311,  1749,  1561,  1562,   548,  1317,   594,
    1098,  2095,   694,  1360,  1750,  1751,   558,  1375,   559,  1318,
      71,  1437,  1671,  1391,  1438,   561,  2132,  1376,  1377,  2135,
    1230,   580,  1378,   786, -1234,  1326,   588,  2143,  1608,   586,
    2146,    64,    65,   724,  2655,    72,  1752,  2298,  2154,   610,
     431,  2157,  1681,  1782,  1783,   755,   758,   761,  2164,  1379,
      64,    65,  2666,  2309,  2310,  2311,   571,   239,  2313,   541,
    2315,  2316,    64,    65,  2318,  2319,  2320,   572,   595,  2322,
    2323,  1201,   240,  2326,   521,  2328,  2329,  1687,  2331,  1030,
     611,    73,  1672,  1099,  1696,  1392,  1393,  2581,  1624,   522,
     615,   542,  1463,  1031,   573,  2277,   619,  1711,   631,    93,
    1394,   636,  1032,   855,    64,    65,    83,  2485,   637,   596,
     642,   523,  1033,  1488,   677,    94,   688,  1784,  1767,  1768,
      64,    65,  1494,   432,  1563,  1564,    74,  1785,  1786,  1439,
     524,   702,  1787,   241,  1305,  1712,  1522,   709,  1523,   710,
     856,  1395,  1034,  1524,  1525,  1526,   712,   525,   597,   716,
     526,   718,  1565,  1532,  1673,  1674,  1533,   730,  1535,  1788,
    1440,  1188,  1189,  1035,   748,  1811,  1812,   315,   749,  1675,
     574,    64,  1181,  2742,  1537,   242,  1538,   527,   528,  2745,
    1541,  1542,   772,    64,    65,   243,  2402,  1397,  1398,  2405,
     773,    95,  1769,  1713,  2409,  1548,  1549,  2410,   776,   423,
    1551,  1552,  1770,  1771,  1191,  1192,   575,  1554,  1036,  1555,
    1676,   784,  1557,  1813,  1558,  1789,  2425,  1611,    64,    65,
    1842,   792,  1800,   791,  1790,  1791,   805,   902,   903,   529,
      84,  1801,  1802,   806,  1772,    96,  2782,   809,  2783,   530,
      64,    65,  1846,  2099,  2100,   280,    64,  1257,  1037,   810,
    1714,  1605,    85,   811,   316,  1606,  2022,  1607,    64,    65,
    1891,  1610,    64,    65,  2108,  2109,   317,  1530,  1531,   816,
      97,  2264,  1792,  1038,   843,   576,  1616,   819,  1619,  1803,
    1621,  1622,  1623,  1625,   904,  1886,  1887,  1628,  1629,   821,
     905,  2101,  2117,  2118,   420,  1637,    64,    65,   422,   690,
     531,   532,  1643,  2492,   440,   246,  1644,  1645,  1646,    87,
     825,   826,  2110,  1039,   842,  1040,   423,  1651,   850,   859,
    1654,   861,   868,   944,   866,  2444,   881,   577,   886,   891,
    1666,   897,  1667,   719,  2501,  1669,  2347,   898,   906,  2297,
    2119,  2457,  1814,  1815,   899,  2356,  2462,   900,    88,   318,
     922,   923,   930,   907,  2365,   924,    89,    90,    64,    65,
    1618,   926,  2314,   319,   420,   421,   422,   928,   908,   933,
     938,   691,   533,   934,   909,   943,   441,  1084,  1722,   910,
    1723,   945,  1107,  1724,  1725,   946,  1726,   281,  1727,   947,
     958,   959,   247,   282,  1729,   283,  1730,   442,   443,   971,
     979,  1793,  1794,  1736,   248,   720,   444,  1658,  1804,  1805,
     981,   982,  2573,  2551,   989,  2576,  1816,  2578,   990,   991,
    2102,  2103,  1047,  1678,   445,  1056,  1817,  1818,  1058,  1063,
    2590,  2591,   911,  2559,   446,  1064,  1113,  1114,  1115,   249,
    2564,  2111,  2112,  2567,  2568,  1127,  1129,  2605,  1140,    64,
      65,  1848,   912,  1397,  1398,  1141,  1142,   913,  1819,   914,
      64,    65,  1864,  1143,  1397,  1398,  1144,  1145,  1148,  2120,
    2121,  1146,    64,    65,  1893,  1795,  1397,  1398,  1843,  1147,
    1845,  1847,  1806,   915,   916,  1796,  1797,   250,  1149,  1166,
    1798,   917,  1807,  1808,  2104,  1171,  1172,  1809,  1173,  1174,
    1190,   251,  1858,  1175,  2105,  2106,  1861,  1176,  1177,   918,
    1193,  1199,  1200,  1204,  1207,  2113,  1208,  1799,  1212,  1214,
    1248,  1215,  1307,  1227,  1810,  2114,  2115,  1228,  1249,  1250,
    1890,  1892,  1213,  1252,  1253,  1254,  2107,  1255,  1256,  1313,
    1898,  1319,  2577,  2122,  1909,  1323,  1309,  1324,  1327,  1328,
    1329,  1915,  1337,  2123,  2124,  2589,  1338,  2116,  1339,  2641,
    2594,  1841,  1340,  1342,  1343,  1920,   919,  1344,  2215,  1345,
    1922,  1346,  1352,  1353,  1924,  2476,  1927,  1928,  2651,  1930,
    1932,  1933,  1664,  1936,  2480,  2125,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1949,  1951,  1952,   107,  1355,  1954,
    1955,  1956,  1957,  1356,  1362,  1364,  1365,  1367,  1085,  1963,
    1964,  1380,  1381,  1966,  1967,  1968,  1086,  1382,  1970,  1971,
    1383,  1386,  1087,  2269,  1387,  1388,  1401,  1405,  1404,   732,
    1426,  1974,  1975,  1431,  1976,  1977,  2500,  2579,  1454,  2502,
    1456,  1432,  2503,  1088,  2504,  1451,  1455,  1474,  1457,  1470,
    1475,  2701,  2702,  1476,  2704,  1481,  2706,  2707,  1482,  2709,
    1483,  1484,  1490,  2603,  2283,  1492,  1493,  1089,   462,  1529,
    1540,  1546,  1547,  1553,  1560,  1090,  1573,  1556,  1578,  1579,
     110,  1584,  1997,  1998,  1999,   733,   463,  2000,   734,  1559,
    1585,  1586,  2002,  2005,  1587,  2007,  2008,  2009,  1596,  2010,
    2011,  1597,  2013,   464,  1598,  2016,  2017,  1599,  1600,  2736,
    1601,  1615,  1091,  1613,  2020,   465,  1614,  1620,  1626,  1627,
    1092,  1633,  2024,  1638,  1639,   735,  1640,  2029,  2030,  1652,
    1655,  1659,  1668,   466,  -441,  2032,   112,   467,  1670,  1656,
    1703,  1679,  1715,  1692,  2035,  1682,  1697,  1716,  1706,  1734,
     468,  1728,  1735,  1740,  1759,  1721,  2768,  1491,  1762,  1820,
     736,  1773,  1775,  2653,  2654,  1777,  1093,  2657,  1821,  2659,
    1822,  1823,  1827,  1828,  1866,  1830,  2004,  1094,  1831,  1832,
    2063,  2664,  2665,  1835,  1875,   160,  2669,  2670,   161,   469,
    2673,  1838,  1856,  1095,  1860,  2674,  2675,  1867,  1876,  1872,
    1877,   118,  2071,  2072,  1878,  1879,  1881,  2074,  2741,  1882,
    1883,  1536,   737,  2077,  1888,   738,  1907,  1925,   162,  1884,
    1885,  1543,  1912,  1923,  1929,  1960,   163,  1972,  1973,  2015,
    1978,  1937,  1979,  1938,  1980,  2448,  1982,  1953,  1983,   739,
    1984,  1985,   740,  2711,  2048,  1986,  2712,  1987,  1988,  1989,
    1990,  2715,   741,  1991,  2054,  1992,  1993,  2718,  1994,  2059,
    1995,  1996,  2721,  2012,  2014,  2018,  2031,  2036,  2126,  2037,
    2429,  2430,  2038,  2432,  2433,  2039,  2040,  2436,  2437,  2041,
    2073,  2286,  2075,  2076,  2083,   164,  2079,  2080,  2081,  2084,
    2471,  2085,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    2178,  2088,  2179,  2090,  2181,  2091,  2092,  2096,  2097,  1634,
    1635,  2098,  2127,  2763,   165,  2128,  2766,  2129,  2133,  2483,
    2134,  2137,  2136,  2192,  2193,  2194,  2195,  2196,  2197,  2198,
    2199,  2200,   166,   167,  2138,  2139,  2777,  2140,  2144,  2145,
     168,  2148,   169,  2147,  2149,  2150,  2151,  2206,  2155,  2208,
    2784,  2156,  2165,  2785,  2786,  2158,  2159,  2160,  2161,  2166,
    2616,  2167,  2169,  2170,  2172,  2173,  2214,   423,   290,   170,
    2175,  2182,  2218,  2184,  2187,  2190,  2201,  2202,  2449,  2203,
    2204,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2205,  2261,  2243,  2244,  2245,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2253,  2254,  2209,  2257,  2679,  2258,  2259,
    2260,  2256,  2262,  2265,  2271,  2273,  2450,  2287,  2288,  2289,
    2292,  2333,   423,  2270,  2300,  2303,  2304,  2305,  2306,  2307,
    2335,  2337,  2340,  2451,  2342,   171,  2343,  2344,  2348,  2349,
     824,  2350,  2351,  2352,  2353,  2357,  2358, -1097,  2359,   437,
    2360,  2361,  2362,  2366,  2367,  2278,  2368,  2279,  2375,  2280,
    2378,  2282,  2386,   423,  2284,  2389,  2285,  2563,  2392,  2393,
    2395,  2566,  2398,  2290,  2291,  2399,  2400,  2403,  2408,  2679,
    2295,  2412,  2296,  2428,  2478,  2479,  2299,  2452,  2453,  2301,
    2454,  1839,    64,    65,  2456,  2481,  2490,  1844,  2487,  2488,
    2493,  2494,  2496,  1350,  2495,  2497,  2499,  2600,   107,  2505,
    2506,  2515,  2524,  2533,  2539,  2543,  2546,  2552,   499,  1857,
     506,   509,  1859,   514,   518,  2560,  1863,  2571,  2685,  2582,
    2583,  2235,  2584,  2585,  2336,  2586,  2587,   804,  2602,  2609,
    2611,  2756,  2612,  2614,  2615,  2691,  2622,  1889,  2652,  2658,
    2662,   584,  2661,  1895,  2663,  2668,  2682,  2627,  2683,  2684,
    2686,  1908,   700,  2692,  1911,  2694,  2705,  2713,  2719,   599,
     605,  2716,  2728,  1916,  1917,  2726,  2302,  2729,  2730,  2737,
    2740,  2455,  2750,  2751,  1921,  2757,  2401,  2765,  2676,  2769,
    2770,   110,  2772,  2776,  2778,  2727,  2779,  2780,  2781,  2723,
       0,     0,     0,  1150,     0,     0,     0,     0,     0,     0,
       0,     0,   686,     0,     0,  2334,     0,     0,     0,     0,
       0,   785,     0,     0,   696,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2406,     0,
       0,     0,     0,     0,   717,     0,     0,   112,     0,  2413,
    2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
       0,     0,     0,     0,     0,  2426,     0,     0,     0,   423,
     423,     0,   423,   423,  2732,  2734,   423,   423,  2438,  2439,
    2440,  2441,  2442,  2443,     0,  2445,  2446,  2447,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2458,  2459,  2460,  2461,     0,  2463,  2464,  2465,  2466,
    2467,  2468,   118,  2470,     0,     0,  2474,  2475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2482,     0,     0,   423,  2484,
       0,     0,     0,  2486,     0,     0,     0,  2489,     0,     0,
       0,     0,   820,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   827,     0,     0,     0,     0,     0,     0,
       0,   869,   835,     0,     0,     0,     0,     0,   874,     0,
       0,   875,     0,     0,     0,     0,   876,     0,     0,     0,
     878,     0,     0,  2507,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     872,   873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   877,     0,     0,   937,     0,   880,     0,
       0,     0,     0,     0,     0,  2554,     0,   892,     0,  2556,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2557,
    2558,  1753,     0,     0,     0,  2562,   423,     0,     0,  2565,
     423,     0,     0,  1763,     0,  2570,     0,     0,  2574,  2575,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,  1824,  1825,     0,     0,     0,     0,  2592,  2593,     0,
    2595,  2596,  2597,  2598,  2599,     0,   423,  2601,     0,     0,
       0,  2604,  1406,     0,     0,   219,     0,   939,   940,   941,
     942,     0,     0,  2613,     0,     0,     0,     0,  2617,     0,
       0,   643,   644,     0,  2186,     0,     0,     0,     0,  1407,
       0,     0,     0,     0,  2628,     0,     0,     0,  1122,   220,
       0,     0,     0,     0,     0,  1128,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,     0,     0,
    2211,     0,  1408,   224,     0,     0,     0,  1083,  1409,     0,
       0,     0,     0,     0,  1410,     0,  2640,     0,   645,     0,
       0,  2644,     0,  2646,   646,     0,   225,     0,     0,  2649,
       0,   647,  1411,   648,     0,     0,     0,  1333,   649,     0,
       0,   650,  2656,     0,   226,     0,     0,   651,     0,     0,
       0,     0,     0,  1412,     0,     0,     0,   652,   227,   228,
    2667,  2700,     0,   653,  2671,   229,     0,     0,  1413,  1384,
       0,     0,   654,   517,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2690,   230,     0,   655,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1414,     0,
       0,     0,  1216,     0,     0,     0,     0,     0,   656,  1218,
       0,  2703,     0,     0,     0,     0,  2708,     0,  2710,     0,
       0,     0,     0,   657,   231,  2714,   109,     0,     0,     0,
    2717,     0,   658,   659,     0,  2720,     0,     0,  1415,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,  1416,   660,  1234,  1235,     0,  2731,  2733,  1239,
       0,     0,  1242,  1417,     0,     0,     0,  1217,     0,     0,
       0,   110,     0,     0,  1251,   232,     0,   661,     0,  1222,
       0,  2743,     0,     0,  2744,   233,     0,  2746,     0,     0,
    1418,   662,     0,   663,     0,     0,     0,     0,  2752,  2753,
    2754,  2755,     0,  1419,     0,  1420,  1421,   664,     0,     0,
    2764,     0,   665,  2767,     0,   234,  1232,     0,   666,     0,
    2771,     0,  2773,     0,     0,   667,   110,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   668,     0,  1422,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2739,   669,   670,     0,
     671,     0,     0,     0,     0,     0,     0,     0,  1497,     0,
       0,     0,     0,  1498,     0,  1389,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,   117,  2759,  1322,
       0,  2762,   118,     0,     0,  1499,  1500,     0,  1501,  1502,
     672,     0,     0,     0,     0,     0,     0,  2087,     0,  1503,
       0,     0,     0,     0,     0,  2093,  2094,     0,     0,     0,
       0,  1504,  1505,     0,     0,     0,     0,     0,     0,  1506,
    2130,  2131,  1507,     0,     0,     0,     0,     0,     0,     0,
       0,  2141,  2142,     0,     0,     0,     0,   118,     0,  1508,
       0,     0,  2152,  2153,     0,     0,  1509,  1510,     0,     0,
    1511,     0,  2162,  2163,  1468,     0,     0,     0,  2168,  2477,
       0,     0,     0,     0,     0,     0,     0,     0,  2171,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  1737,  1738,  1739,     0,     0,  1528,     0,     0,  1512,
       0,  1741,  1742,  1743,     0,     0,  1534,     0,  1754,  1755,
    1756,     0,     0,  1757,  1758,     0,  1760,  1761,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  1833,  1834,     0,  1612,
    1836,  1837,  2231,     0,     0,  1513,     0,     0,     0,   345,
       0,  1514,     0,  2232,     0,     0,   346,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1515,     0,  1636,
       0,     0,     0,     0,  1641,     0,  1516,     0,  1085,  2233,
       0,     0,     0,     0,  1647,     0,  1086,     0,     0,     0,
       0,     0,  1087,     0,     0,     0,     0,     0,  1609,     0,
       0,     0,     0,  1517,  1518,     0,     0,     0,     0,     0,
       0,     0,     0,  1088,     0,  1617,  2234,     0,     0,     0,
       0,     0,     0,     0,     0,  1519,     0,     0,     0,     0,
       0,  2588,     0,     0,     0,     0,     0,  1089,     0,  1642,
       0,     0,     0,     0,     0,  1090,     0,     0,     0,  1648,
       0,  2606,     0,     0,     0,  2610,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1665,     0,
    1520,     0,     0,     0,     0,     0,     0,     0,  1677,     0,
       0,     0,  1091,  1685,     0,     0,     0,     0,     0,     0,
    1092,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2341,     0,     0,     0,
    2345,  2346,     0,     0,     0,     0,     0,     0,     0,  2354,
    2355,     0,     0,     0,     0,     0,  1093,     0,  2363,  2364,
       0,     0,     0,     0,  2369,     0,     0,  1094,     0,     0,
       0,     0,     0,     0,  2379,  2380,     0,     0,     0,     0,
       0,     0,     0,  1095,     0,  2390,  2391,     0,     0,     0,
       0,     0,  2235,     0,  2236,     0,  2394,   347,     0,   348,
       0,     0,     0,     0,     0,  2396,     0,  2397,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  1840,     0,     0,     0,
    1910,     0,     0,     0,     0,     0,     0,     0,     0,  2237,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1862,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1896,     0,     0,  1897,     0,
    1959,     0,     0,     0,     0,     0,  1965,     0,  1913,  1914,
       0,     0,     0,     0,  2078,     0,  1918,     0,     0,     0,
       0,  2749,     0,  1919,     0,     0,     0,  2086,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2089,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1958,     0,     0,  1961,  1962,     0,     0,
       0,     0,     0,     0,     0,  1969,     0,     0,  2509,     0,
       0,     0,     0,  2001,     0,     0,     0,     0,  2518,  2006,
       0,     0,     0,     0,     0,     0,     0,  2527,     0,     0,
       0,     0,     0,     0,     0,     0,  2536,     0,     0,  2174,
       0,     0,     0,  2538,  2021,     0,     0,     0,     0,     0,
    2027,     0,     0,     0,  2542,     0,     0,     0,     0,     0,
    2545,     0,     0,  2547,     0,     0,  2548,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2043,
       0,  2003,     0,     0,     0,     0,     0,  2050,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2019,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2028,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2033,     0,  2034,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2042,     0,     0,  2044,     0,  2045,  2046,  2047,
    2049,     0,     0,  2051,     0,     0,  2052,     0,     0,  2053,
    2055,     0,  2056,  2057,  2058,  2060,     0,  2061,  2062,     0,
       0,     0,     0,  2064,  2065,  2066,     0,     0,  2067,  2068,
       0,    64,    65,  2629,  2069,  2070,     0,     0,     0,     0,
       0,     0,  2631,     0,     0,     0,     0,   107,     0,     0,
       0,  2633,     0,     0,     0,     0,     0,  2636,     0,     0,
       0,  2638,     0,     0,  2639,     0,     0,   285,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,     0,     0,     0,     0,
       0,     0,  2176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2189,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,  1186,     0,
       0,  2338,     0,     0,     0,     0,     0,     0,  2212,  2213,
       0,     0,     0,     0,     0,     0,     0,     0,  2177,     0,
       0,     0,  2180,     0,     0,  2216,  2217,     0,     0,     0,
    2219,  2220,     0,     0,  2185,     0,     0,  2188,     0,     0,
       0,  2370,  2371,  2372,  2373,  2374,   112,  2376,  2377,     0,
       0,     0,  2381,  2382,  2383,  2384,  2385,     0,  2387,  2388,
       0,     0,     0,     0,     0,     0,     0,  2207,     0,     0,
    2263,     0,     0,  2267,  2268,     0,     0,     0,     0,     0,
       0,  2272,     0,   286,     0,    64,    65,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,   117,     0,     0,     0,
       0,   118,     0,     0,     0,  2281,     0,     0,     0,     0,
       0,     0,   287,  2255,     0,     0,     0,     0,     0,     0,
       0,  2293,     0,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2308,     0,     0,     0,     0,  2312,
       0,     0,     0,     0,     0,  2317,     0,     0,     0,     0,
    2321,     0,     0,     0,  2324,     0,     0,  2327,     0,     0,
    2330,     0,  2332,   288,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2294,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2325,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2508,     0,     0,  2510,  2511,  2512,  2513,
    2514,     0,  2516,  2517,     0,  2519,  2520,  2521,  2522,  2523,
       0,  2525,  2526,     0,  2528,  2529,  2530,  2531,  2532,     0,
    2534,  2535,     0,  2537,     0,     0,     0,   107,     0,     0,
       0,     0,     0,  2540,  2541,     0,     0,     0,     0,     0,
     117,     0,     0,     0,  2544,   118,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   490,   491,     0,     0,   492,     0,
       0,     0,     0,     0,     0,     0,   600,   107,     0,     0,
       0,     0,     0,     0,     0,  2404,     0,     0,  2407,     0,
     493,     0,     0,     0,     0,     0,  2411,  2469,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2424,     0,     0,  2427,     0,   601,     0,     0,
    2431,     0,     0,  2434,  2435,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,   112,     0,     0,     0,
     110,     0,  2630,     0,     0,     0,     0,     0,   494,     0,
       0,  2632,     0,     0,   602,     0,     0,     0,     0,     0,
    2634,     0,  2635,     0,     0,   495,  2637,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   496,     0,     0,
       0,     0,  2498,     0,     0,     0,   112,     0,     0,     0,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   603,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2549,     0,     0,     0,     0,     0,  2553,
       0,     0,     0,  2555,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2561,
       0,     0,   497,  2695,     0,  2696,     0,  2697,     0,     0,
    2698,   118,  2699,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2550,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   498,  2569,     0,     0,     0,     0,     0,   604,     0,
       0,     0,     0,  2580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,  2621,     0,     0,     0,  2626,     0,     0,     0,   994,
     995,   996,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2660,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   997,   998,
       0,     0,   999,     0,     0,  1000,     0,     0,     0,     0,
       0,     0,  1001,     0,     0,     0,  1002,     0,  2642,  2643,
       0,  2645,     0,     0,  1003,  1004,  2647,  2648,     0,     0,
       0,  2650,  1005,  1006,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1007,
       0,     0,     0,     0,     0,  1008,     0,     0,     0,  1009,
    1010,     0,     0,  1011,  2672,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2722,     0,     0,     0,     0,  1012,
       0,     0,     0,     0,     0,     0,     0,     0,  2693,     0,
       0,     0,     0,     0,     0,  2735,     0,   107,     0,     0,
    1013,  1261,  1262,  1263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1014,     0,     0,     0,     0,     0,     0,     0,
    1264,  1265,   107,     0,  1266,   109,     0,     0,     0,     0,
    2760,  1267,     0,     0,  1268,  1015,     0,     0,  1269,     0,
       0,     0,     0,     0,     0,     0,  1270,  1271,     0,     0,
    2774,     0,     0,  2775,  1272,     0,     0,     0,     0,     0,
     109,  2738,     0,     0,     0,     0,  1016,     0,  1017,     0,
     110,     0,     0,     0,  1018,  1019,     0,   107,  2747,     0,
       0,  1273,  1274,     0,     0,  1275,     0,     0,     0,  1020,
    1021,     0,     0,  2758,     0,     0,  2761,     0,     0,  1022,
    1023,  1276,     0,     0,     0,   110,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   504,     0,
       0,     0,  1277,     0,     0,  1024,   112,  1025,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1026,     0,  1027,     0,  1278,  1321,     0,     0,  1028,     0,
       0,     0,     0,  1279,     0,     0,     0,     0,     0,     0,
     110,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1029,     0,     0,     0,   117,     0,     0,     0,
     110,   118,     0,     0,     0,     0,     0,     0,  1280,     0,
    1281,     0,     0,     0,     0,     0,  1282,  1283,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,   117,  1284,     0,     0,     0,   118,     0,     0,     0,
       0,     0,  1285,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
     508,     0,     0,     0,     0,     0,     0,  1286,     0,  1287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1288,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1289,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   118,     0,     0,  1290,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       1,     0,     0,     2,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     0,     0,     0,     5,     6,     0,     7,     8,     9,
       0,     0,     0,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,    11,     0,    12,    13,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,    18,     0,     0,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    25,    26,
      27,     0,     0,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,    35,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,    37,     0,     0,    38,     0,    39,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
       0,   175,     0,    43,   176,     0,     0,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
       0,     0,     0,     0,     0,     0,   178,     0,   179,   180,
     181,    46,     0,    47,     0,     0,     0,     0,   182,    48,
     183,     0,    49,    50,     0,   184,     0,   185,   186,   187,
       0,     0,     0,     0,   188,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   192,   193,     0,     0,   194,     0,   972,
       0,   195,     0,   196,   973,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   197,   198,     0,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   200,     0,
       0,  1358,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,     0,
       0,     0,     0,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,     0,     0,     0,     0,     0,   209,
       0,     0,     0,     0,     0,     0,   210,     0,     0,     0,
       0,     0,   211,     0,   212,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   213,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1359
};

static const yytype_int16 yycheck[] =
{
       3,    50,   663,  1444,  1644,   481,  1646,     5,    11,     4,
    1143,     4,  1145,   995,     5,   437,     4,     4,     5,     5,
     658,   659,     3,     4,     5,   447,     0,    17,    32,    32,
       5,     4,     3,     4,     4,     5,    14,    40,  1171,  1172,
    1173,     5,    21,     3,     4,     4,    49,    27,    17,    52,
      32,    27,    55,     4,    20,     4,    59,     3,     4,    62,
       3,     4,     4,    66,    67,     3,     4,    70,     3,     4,
      73,    74,     4,    49,    77,   106,    52,    40,    81,    32,
      67,     5,     4,    86,    62,     5,    27,    63,   122,     3,
       4,     3,     4,    36,    67,    51,    99,   100,   101,   102,
     103,   104,    89,     3,     4,    40,   874,   875,   876,   215,
      86,     3,     4,    32,   100,     4,   166,   120,   966,   151,
     106,   969,    36,     3,     4,    60,    40,   103,     4,     3,
       4,    57,     5,   120,    21,    57,    36,   104,   986,     4,
      34,    47,     3,     4,   100,   133,   194,   120,    88,   112,
     120,    21,   155,   109,   141,    17,   140,   136,     6,  2678,
       3,     4,   170,   140,    40,   196,     5,     5,     4,   937,
     178,     5,   214,   286,   167,   178,    12,   112,    67,    17,
     183,    21,   138,   194,     3,     4,     4,    33,   168,     4,
       4,   134,    31,   177,   113,    62,    62,    88,   112,    21,
     177,   307,    67,   198,   252,  2724,     3,     4,     4,     5,
     205,   206,   246,   191,   108,    12,   203,   267,   158,   250,
     134,   188,   142,   213,   211,   212,    21,   168,   188,   261,
     203,   120,   195,   203,   134,   194,   112,    99,   211,   212,
     243,   211,   212,    57,   213,    21,   295,   242,   259,   195,
     188,   293,   194,   914,    62,   120,   259,   260,     3,     4,
     195,   241,   241,   124,   183,   229,   185,   158,   187,   188,
      16,   237,   275,   121,   277,   250,   195,    13,   700,   283,
      67,   195,   285,   286,   118,   288,   289,   265,   291,   287,
     269,   210,   218,   252,    14,    15,   218,   275,   301,   248,
     241,   283,   120,   266,   284,   120,   296,   295,   311,   312,
     204,   298,   286,   121,   203,   227,   307,   304,   304,   195,
      64,   314,   211,   212,   295,   298,   307,   296,   298,   307,
     283,   334,   335,   336,   304,   338,    58,   288,   203,   342,
     343,   297,    62,   284,   314,   305,   211,   212,   272,   295,
     353,   354,   295,   348,   241,   290,   288,   360,  1019,   193,
     347,   105,   365,   366,   351,   352,   353,   305,   274,   288,
     373,   241,   248,   376,   347,   248,  1037,   347,   354,   352,
     353,   295,   352,   353,   227,   203,    46,    40,   203,   349,
     350,   394,   395,   211,   212,   295,   211,   212,   401,   402,
     403,   241,   405,   295,   218,    65,    67,    67,   227,   298,
     132,   349,   350,   835,   248,   295,   419,   284,   284,   241,
     423,   295,    62,  1405,     4,   428,   429,   430,   431,   432,
     433,  1069,   435,   298,   437,   438,   439,    12,   272,    19,
    1573,   308,   308,   188,   447,   448,   241,     3,     4,   194,
    1432,   197,     5,    62,   190,    46,   878,    28,   347,   112,
      40,    62,  1100,   352,   353,   241,  1234,   275,   131,   130,
     288,   191,   192,  1455,  1242,    79,    67,    57,   146,    54,
     298,   121,   347,   298,    30,     3,     4,   352,   353,   234,
      27,    82,    30,    17,   238,   156,   169,    72,   501,   502,
     106,    57,    16,    62,    57,    27,   228,   233,    62,   253,
     254,   122,   121,    66,   259,    98,   519,   436,    62,   158,
     121,   243,   102,   183,     3,     4,   101,  1375,     5,   347,
    1378,    67,   347,   582,   352,   353,   135,   352,   353,    64,
     120,    71,   195,   546,   119,   265,   185,    94,   123,   158,
      62,    62,     3,     4,   227,   275,   276,    95,    89,    37,
     305,   136,   121,    37,   227,   112,     4,   121,    62,   173,
      48,     4,     3,     4,   623,   236,   579,   121,   158,   233,
     105,   152,   242,   305,     3,     4,    22,   307,     0,     5,
     196,     4,   183,   642,     3,     4,    62,    75,    14,    15,
     125,   345,   346,   174,   349,   350,   525,   178,   248,   121,
     121,   614,    62,   266,    50,   195,   162,    53,    64,   292,
      56,   284,  1283,   203,   284,   286,   164,   121,    79,    60,
     241,   211,   212,  1294,   294,   275,   160,   640,   218,    44,
     170,   188,   561,   223,   250,    55,    62,    83,   252,    14,
     249,   242,  2292,   271,   657,   121,    21,   660,     4,   105,
     231,    26,   218,    14,    15,   218,   275,     5,    33,   215,
     122,   121,    27,   151,   275,   111,    14,    15,   114,     5,
     263,    91,   685,    88,    30,    84,   689,   690,   691,   692,
     227,   209,   695,   284,   697,   241,   699,   700,   701,   270,
    1122,   100,    27,   294,     4,   227,    71,   278,   279,   187,
      40,    62,   125,   238,   252,   124,   275,   247,   298,   257,
     295,   275,   173,   197,    62,     5,   256,   776,   253,   254,
     209,   275,   142,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,     5,   275,   275,   768,   769,   347,   771,   772,
     773,   774,   352,   353,    31,   191,   192,     5,   256,   198,
       5,   275,   112,   786,   787,   122,    14,    15,   193,   241,
     793,   794,   238,   229,   207,   160,   161,   162,   163,   164,
     165,   252,     5,   168,   169,   170,   171,   253,   254,   275,
     813,   814,   815,   291,   169,   261,   162,  1239,   195,   264,
     345,   346,     3,     4,   260,   275,   271,   830,   831,   832,
     308,   834,   835,   836,    62,   838,    24,    25,   248,     4,
     191,   192,    22,   122,   169,  1978,  1979,  1980,    40,   265,
     286,     3,     4,   191,   192,   118,   859,    67,   861,   275,
     276,    14,    15,    83,   280,   195,   119,  1849,   871,   215,
      50,   286,   227,    53,   170,   878,   879,    33,   122,  1647,
      89,   884,   264,  1865,   188,   122,     3,     4,    40,   271,
     194,   307,   257,   258,     5,   241,     6,   900,   901,   345,
     346,  1749,   227,    83,   241,   908,   909,   910,   117,    62,
      98,    90,  1894,   916,   265,    42,    43,    16,   921,   151,
     112,  1769,   287,   972,   275,   276,    67,   265,   234,   932,
     234,   111,    83,   153,   114,   285,  1784,   275,   276,  1787,
     859,    90,   280,   124,     0,   948,    31,  1795,     4,    73,
    1798,     3,     4,    98,  2574,   259,   307,  2028,  1806,     5,
     112,  1809,   241,   191,   192,   330,   331,   332,  1816,   307,
       3,     4,  2592,  2044,  2045,  2046,    37,   186,  2049,    89,
    2051,  2052,     3,     4,  2055,  2056,  2057,    48,   220,  2060,
    2061,    12,   201,  2064,    45,  2066,  2067,   241,  2069,    67,
       4,   305,   153,   195,   241,   225,   226,  2448,    60,    60,
       4,   121,  1015,    81,    75,  1997,     5,   131,     5,    84,
     240,     4,    90,   140,     3,     4,    28,    60,     5,   261,
       5,    82,   100,  1036,     5,   100,     5,   265,   191,   192,
       3,     4,  1045,   195,   171,   172,   350,   275,   276,   229,
     101,     4,   280,   262,    17,   169,  1059,     4,  1061,     4,
     177,   281,   130,  1066,  1067,  1068,     4,   118,   300,     5,
     121,     4,   199,  1076,   225,   226,  1079,   121,  1081,   307,
     260,     4,     5,   151,     5,    14,    15,    26,     4,   240,
     151,     3,     4,  2713,  1097,   304,  1099,   148,   149,  2719,
    1103,  1104,   272,     3,     4,   314,  2177,     7,     8,  2180,
       4,   176,   265,   227,  2185,  1118,  1119,  2188,     4,  1122,
    1123,  1124,   275,   276,     4,     5,   187,  1130,   196,  1132,
     281,     4,  1135,    62,  1137,     5,  2207,  1186,     3,     4,
       5,     5,     5,     4,    14,    15,     4,     4,     5,   200,
     152,    14,    15,   198,   307,   220,  2776,     4,  2778,   210,
       3,     4,     5,    14,    15,   204,     3,     4,   236,     4,
     284,  1174,   174,     4,   113,  1178,   178,  1180,     3,     4,
       5,  1184,     3,     4,    14,    15,   125,     4,     5,     4,
     255,  1959,    62,   261,   271,   256,  1199,     5,  1201,    62,
    1203,  1204,  1205,  1206,    61,     4,     5,  1210,  1211,     5,
      67,    62,    14,    15,     9,  1218,     3,     4,    11,    40,
     271,   272,  1225,  2294,    35,    26,  1229,  1230,  1231,   231,
     425,   426,    62,   301,     5,   303,  1239,  1240,   170,     4,
    1243,     4,   170,   608,   178,  2227,     4,   308,   197,   197,
    1253,     5,  1255,    40,  2325,  1258,  2104,     5,   115,  2027,
      62,  2243,   191,   192,     4,  2113,  2248,   197,   270,   208,
     189,   189,   227,   130,  2122,    67,   278,   279,     3,     4,
    1199,    67,  2050,   222,     9,    10,    11,    67,   145,     5,
       5,   112,   343,   228,   151,     4,   107,   662,  1301,   156,
    1303,     4,   667,  1306,  1307,     4,  1309,   346,  1311,   197,
      88,     5,   113,   352,  1317,   354,  1319,   128,   129,    88,
       5,   191,   192,  1326,   125,   112,   137,  1246,   191,   192,
       4,     4,  2440,  2404,     5,  2443,   265,  2445,     5,     4,
     191,   192,     5,  1262,   155,   100,   275,   276,    17,     4,
    2458,  2459,   209,  2424,   165,     5,    17,    17,     4,   160,
    2431,   191,   192,  2434,  2435,     4,     4,  2475,     4,     3,
       4,     5,   229,     7,     8,    98,     5,   234,   307,   236,
       3,     4,     5,     5,     7,     8,    88,     4,    88,   191,
     192,     5,     3,     4,     5,   265,     7,     8,  1401,     5,
    1403,  1404,   265,   260,   261,   275,   276,   208,     5,     4,
     280,   268,   275,   276,   265,     5,     5,   280,     4,     4,
       4,   222,  1425,     5,   275,   276,  1429,     5,     5,   286,
       4,    12,     5,    12,     4,   265,     4,   307,     4,     4,
     167,     4,   260,     5,   307,   275,   276,     5,     5,     4,
    1453,  1454,   817,   158,   158,     4,   307,     5,     4,   288,
    1463,     5,  2444,   265,  1467,     4,   260,     5,     5,     5,
       5,  1474,     4,   275,   276,  2457,     4,   307,     5,  2550,
    2462,  1400,     5,   273,   273,  1488,   343,     5,  1910,     5,
    1493,     5,     4,     4,  1497,  2263,  1499,  1500,  2569,  1502,
    1503,  1504,     4,  1506,  2272,   307,  1509,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,    19,     5,  1522,
    1523,  1524,  1525,     5,     5,     5,     5,     5,    92,  1532,
    1533,     4,     4,  1536,  1537,  1538,   100,     5,  1541,  1542,
       5,     4,   106,  1965,     5,     5,   241,   106,   241,    62,
       5,  1554,  1555,   140,  1557,  1558,  2324,  2446,   241,  2327,
       5,   106,  2330,   127,  2332,    40,   106,   246,   213,    40,
     213,  2642,  2643,     5,  2645,     4,  2647,  2648,     5,  2650,
       5,   213,   213,  2472,  2006,     4,     4,   151,    54,     5,
       5,     5,     5,     4,     4,   159,     5,   112,     5,     5,
     102,     4,  1605,  1606,  1607,   118,    72,  1610,   121,   112,
       5,     5,  1615,  1616,     4,  1618,  1619,  1620,     5,  1622,
    1623,     5,  1625,    89,     4,  1628,  1629,     5,     5,  2700,
       4,    12,   196,     5,  1637,   101,     5,    12,     6,     4,
     204,     5,  1645,     4,     4,   158,     4,  1650,  1651,     4,
      38,     5,     4,   119,     0,  1658,   158,   123,     5,    38,
     169,   241,     4,   140,  1667,   241,   241,   250,   122,     4,
     136,   197,     4,     4,     4,   209,  2747,  1042,     4,   273,
     193,     5,     5,  2572,  2573,     5,   250,  2576,     5,  2578,
       5,     5,     4,     4,   241,     5,  1615,   261,     4,     4,
    1703,  2590,  2591,     4,   311,    44,  2595,  2596,    47,   175,
    2599,     5,     5,   277,     5,  2604,  2605,   241,   311,   241,
       4,   223,  1725,  1726,     4,     4,     4,  1730,  2710,     4,
       4,  1096,   245,  1736,     4,   248,     4,   227,    77,   311,
     311,  1106,     5,     5,   227,     5,    85,     5,     4,     6,
       5,   227,     5,   227,     4,   355,     5,   227,     5,   272,
       4,     4,   275,  2652,  1683,     4,  2655,     5,     5,     4,
       4,  2660,   285,     5,  1693,     5,     4,  2666,     5,  1698,
       5,     4,  2671,     5,     4,     4,     4,     4,   273,     5,
    2212,  2213,     5,  2215,  2216,     5,     5,  2219,  2220,     5,
       4,    12,     5,     4,     4,   144,     5,     5,     5,     4,
     307,     5,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
    1843,     4,  1845,     5,  1847,     5,     5,     4,     4,  1214,
    1215,     5,     5,  2742,   193,     5,  2745,     5,     4,  2281,
       4,   273,     5,  1866,  1867,  1868,  1869,  1870,  1871,  1872,
    1873,  1874,   211,   212,     5,     5,  2765,     5,     4,     4,
     219,   273,   221,     5,     5,     5,     5,  1890,     4,  1892,
    2779,     4,     4,  2782,  2783,     5,     5,     5,     5,     4,
       6,     5,     4,     4,     4,     4,  1909,  1910,    32,   248,
       5,     5,  1915,     5,     5,     5,     4,     4,   355,     5,
       4,  1924,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,     4,     4,  1936,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,     5,  1949,  2608,  1951,  1952,
    1953,     5,     4,     4,     4,     4,   355,     5,     5,     4,
       4,     4,  1965,  1966,     5,     5,     5,     5,     5,     5,
       5,     4,     4,   355,     5,   314,     5,     5,     4,     4,
     424,     5,     5,     5,     5,     4,     4,   286,     5,   113,
       5,     5,     5,     4,     4,  1998,     5,  2000,     4,  2002,
       4,  2004,     4,  2006,  2007,     4,  2009,  2429,     4,     4,
       4,  2433,     4,  2016,  2017,     4,     4,     4,     4,  2680,
    2023,     4,  2025,     4,     4,     4,  2029,   355,   355,  2032,
     355,  1396,     3,     4,   355,     4,     4,  1402,     5,     5,
       5,     4,     4,   965,     5,     5,     5,  2469,    19,     5,
       4,     4,     4,     4,     4,     4,     4,     4,   182,  1424,
     184,   185,  1427,   187,   188,     4,  1431,     4,     6,     5,
       4,   286,     5,     5,  2077,     5,     4,   380,     5,     5,
       4,  2735,     5,     5,     4,  2617,     5,  1452,     4,     4,
       4,   215,     5,  1458,     4,     4,     4,  2506,     5,     5,
       4,  1466,   290,     4,  1469,     4,     4,     4,     4,   233,
     234,     5,     5,  1478,  1479,   355,  2035,     5,     4,     4,
       4,  2238,     5,     5,  1489,     5,  2175,     4,  2606,     5,
       5,   102,     5,     4,     4,  2680,     5,     5,     5,  2676,
      -1,    -1,    -1,   735,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   276,    -1,    -1,  2074,    -1,    -1,    -1,    -1,
      -1,   349,    -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2181,    -1,
      -1,    -1,    -1,    -1,   308,    -1,    -1,   158,    -1,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
      -1,    -1,    -1,    -1,    -1,  2208,    -1,    -1,    -1,  2212,
    2213,    -1,  2215,  2216,  2690,  2691,  2219,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,    -1,  2228,  2229,  2230,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2244,  2245,  2246,  2247,    -1,  2249,  2250,  2251,  2252,
    2253,  2254,   223,  2256,    -1,    -1,  2259,  2260,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2278,    -1,    -1,  2281,  2282,
      -1,    -1,    -1,  2286,    -1,    -1,    -1,  2290,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   427,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   499,   436,    -1,    -1,    -1,    -1,    -1,   506,    -1,
      -1,   509,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,
     518,    -1,    -1,  2336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     504,   505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   517,    -1,    -1,   584,    -1,   522,    -1,
      -1,    -1,    -1,    -1,    -1,  2408,    -1,   531,    -1,  2412,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2422,
    2423,  1343,    -1,    -1,    -1,  2428,  2429,    -1,    -1,  2432,
    2433,    -1,    -1,  1355,    -1,  2438,    -1,    -1,  2441,  2442,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,  1373,  1374,    -1,    -1,    -1,    -1,  2460,  2461,    -1,
    2463,  2464,  2465,  2466,  2467,    -1,  2469,  2470,    -1,    -1,
      -1,  2474,    40,    -1,    -1,    44,    -1,   601,   602,   603,
     604,    -1,    -1,  2486,    -1,    -1,    -1,    -1,  2491,    -1,
      -1,     4,     5,    -1,  1859,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,  2507,    -1,    -1,    -1,   696,    78,
      -1,    -1,    -1,    -1,    -1,   703,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    -1,    -1,
    1895,    -1,   100,   102,    -1,    -1,    -1,   661,   106,    -1,
      -1,    -1,    -1,    -1,   112,    -1,  2549,    -1,    61,    -1,
      -1,  2554,    -1,  2556,    67,    -1,   125,    -1,    -1,  2562,
      -1,    74,   130,    76,    -1,    -1,    -1,   953,    81,    -1,
      -1,    84,  2575,    -1,   143,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,   100,   157,   158,
    2593,  2640,    -1,   106,  2597,   164,    -1,    -1,   166,   985,
      -1,    -1,   115,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2617,   184,    -1,   130,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,
      -1,    -1,   820,    -1,    -1,    -1,    -1,    -1,   151,   827,
      -1,  2644,    -1,    -1,    -1,    -1,  2649,    -1,  2651,    -1,
      -1,    -1,    -1,   166,   223,  2658,    57,    -1,    -1,    -1,
    2663,    -1,   175,   176,    -1,  2668,    -1,    -1,   236,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   250,   196,   872,   873,    -1,  2690,  2691,   877,
      -1,    -1,   880,   261,    -1,    -1,    -1,   821,    -1,    -1,
      -1,   102,    -1,    -1,   892,   274,    -1,   220,    -1,   833,
      -1,  2714,    -1,    -1,  2717,   284,    -1,  2720,    -1,    -1,
     288,   234,    -1,   236,    -1,    -1,    -1,    -1,  2731,  2732,
    2733,  2734,    -1,   301,    -1,   303,   304,   250,    -1,    -1,
    2743,    -1,   255,  2746,    -1,   314,   870,    -1,   261,    -1,
    2753,    -1,  2755,    -1,    -1,   268,   102,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   286,    -1,   343,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2705,   300,   301,    -1,
     303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    27,    -1,   993,    -1,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,   218,  2737,   943,
      -1,  2740,   223,    -1,    -1,    49,    50,    -1,    52,    53,
     343,    -1,    -1,    -1,    -1,    -1,    -1,  1759,    -1,    63,
      -1,    -1,    -1,    -1,    -1,  1767,  1768,    -1,    -1,    -1,
      -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
    1782,  1783,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1793,  1794,    -1,    -1,    -1,    -1,   223,    -1,   103,
      -1,    -1,  1804,  1805,    -1,    -1,   110,   111,    -1,    -1,
     114,    -1,  1814,  1815,  1018,    -1,    -1,    -1,  1820,  2264,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1830,    -1,
      -1,    -1,    -1,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,  1327,  1328,  1329,    -1,    -1,  1070,    -1,    -1,   173,
      -1,  1337,  1338,  1339,    -1,    -1,  1080,    -1,  1344,  1345,
    1346,    -1,    -1,  1349,  1350,    -1,  1352,  1353,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,  1382,  1383,    -1,  1187,
    1386,  1387,    56,    -1,    -1,   229,    -1,    -1,    -1,    16,
      -1,   235,    -1,    67,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,  1217,
      -1,    -1,    -1,    -1,  1222,    -1,   260,    -1,    92,    93,
      -1,    -1,    -1,    -1,  1232,    -1,   100,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,  1182,    -1,
      -1,    -1,    -1,   287,   288,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,    -1,  1199,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,
      -1,  2456,    -1,    -1,    -1,    -1,    -1,   151,    -1,  1223,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,  1233,
      -1,  2476,    -1,    -1,    -1,  2480,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1252,    -1,
     354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1262,    -1,
      -1,    -1,   196,  1267,    -1,    -1,    -1,    -1,    -1,    -1,
     204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2088,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2098,    -1,    -1,    -1,
    2102,  2103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2111,
    2112,    -1,    -1,    -1,    -1,    -1,   250,    -1,  2120,  2121,
      -1,    -1,    -1,    -1,  2126,    -1,    -1,   261,    -1,    -1,
      -1,    -1,    -1,    -1,  2136,  2137,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,  2147,  2148,    -1,    -1,    -1,
      -1,    -1,   286,    -1,   288,    -1,  2158,   244,    -1,   246,
      -1,    -1,    -1,    -1,    -1,  2167,    -1,  2169,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,  1400,    -1,    -1,    -1,
    1468,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1430,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,  1459,    -1,    -1,  1462,    -1,
    1528,    -1,    -1,    -1,    -1,    -1,  1534,    -1,  1472,  1473,
      -1,    -1,    -1,    -1,  1740,    -1,  1480,    -1,    -1,    -1,
      -1,  2726,    -1,  1487,    -1,    -1,    -1,  1753,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1763,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1527,    -1,    -1,  1530,  1531,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1539,    -1,    -1,  2340,    -1,
      -1,    -1,    -1,  1611,    -1,    -1,    -1,    -1,  2350,  1617,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2359,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2368,    -1,    -1,  1835,
      -1,    -1,    -1,  2375,  1642,    -1,    -1,    -1,    -1,    -1,
    1648,    -1,    -1,    -1,  2386,    -1,    -1,    -1,    -1,    -1,
    2392,    -1,    -1,  2395,    -1,    -1,  2398,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1677,
      -1,  1615,    -1,    -1,    -1,    -1,    -1,  1685,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1633,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1649,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1664,    -1,  1666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1676,    -1,    -1,  1679,    -1,  1681,  1682,  1683,
    1684,    -1,    -1,  1687,    -1,    -1,  1690,    -1,    -1,  1693,
    1694,    -1,  1696,  1697,  1698,  1699,    -1,  1701,  1702,    -1,
      -1,    -1,    -1,  1707,  1708,  1709,    -1,    -1,  1712,  1713,
      -1,     3,     4,  2515,  1718,  1719,    -1,    -1,    -1,    -1,
      -1,    -1,  2524,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,  2533,    -1,    -1,    -1,    -1,    -1,  2539,    -1,    -1,
      -1,  2543,    -1,    -1,  2546,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,  1840,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1862,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,    -1,
      -1,  2087,    -1,    -1,    -1,    -1,    -1,    -1,  1896,  1897,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1842,    -1,
      -1,    -1,  1846,    -1,    -1,  1913,  1914,    -1,    -1,    -1,
    1918,  1919,    -1,    -1,  1858,    -1,    -1,  1861,    -1,    -1,
      -1,  2127,  2128,  2129,  2130,  2131,   158,  2133,  2134,    -1,
      -1,    -1,  2138,  2139,  2140,  2141,  2142,    -1,  2144,  2145,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1891,    -1,    -1,
    1958,    -1,    -1,  1961,  1962,    -1,    -1,    -1,    -1,    -1,
      -1,  1969,    -1,   195,    -1,     3,     4,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,  2003,    -1,    -1,    -1,    -1,
      -1,    -1,   234,  1947,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2019,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2042,    -1,    -1,    -1,    -1,  2047,
      -1,    -1,    -1,    -1,    -1,  2053,    -1,    -1,    -1,    -1,
    2058,    -1,    -1,    -1,  2062,    -1,    -1,  2065,    -1,    -1,
    2068,    -1,  2070,   295,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2020,    -1,    -1,    -1,
      -1,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2063,
     158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2339,    -1,    -1,  2342,  2343,  2344,  2345,
    2346,    -1,  2348,  2349,    -1,  2351,  2352,  2353,  2354,  2355,
      -1,  2357,  2358,    -1,  2360,  2361,  2362,  2363,  2364,    -1,
    2366,  2367,    -1,  2369,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,  2379,  2380,    -1,    -1,    -1,    -1,    -1,
     218,    -1,    -1,    -1,  2390,   223,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    66,    67,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2179,    -1,    -1,  2182,    -1,
      92,    -1,    -1,    -1,    -1,    -1,  2190,  2255,    -1,    -1,
     102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2206,    -1,    -1,  2209,    -1,    59,    -1,    -1,
    2214,    -1,    -1,  2217,  2218,    -1,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,    -1,   158,    -1,    -1,    -1,
     102,    -1,  2518,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,  2527,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
    2536,    -1,  2538,    -1,    -1,   187,  2542,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,
      -1,    -1,  2306,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,  2407,
      -1,    -1,    -1,  2411,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2427,
      -1,    -1,   274,  2629,    -1,  2631,    -1,  2633,    -1,    -1,
    2636,   223,  2638,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2403,
      -1,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,   343,  2436,    -1,    -1,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    -1,  2447,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,  2495,    -1,    -1,    -1,  2499,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    -1,  2552,  2553,
      -1,  2555,    -1,    -1,    75,    76,  2560,  2561,    -1,    -1,
      -1,  2565,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,   110,
     111,    -1,    -1,   114,  2598,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2672,    -1,    -1,    -1,    -1,   130,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,    -1,
      -1,    -1,    -1,    -1,    -1,  2693,    -1,    19,    -1,    -1,
     151,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    19,    -1,    53,    57,    -1,    -1,    -1,    -1,
    2738,    60,    -1,    -1,    63,   196,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    76,    -1,    -1,
    2758,    -1,    -1,  2761,    83,    -1,    -1,    -1,    -1,    -1,
      57,  2705,    -1,    -1,    -1,    -1,   227,    -1,   229,    -1,
     102,    -1,    -1,    -1,   235,   236,    -1,    19,  2722,    -1,
      -1,   110,   111,    -1,    -1,   114,    -1,    -1,    -1,   250,
     251,    -1,    -1,  2737,    -1,    -1,  2740,    -1,    -1,   260,
     261,   130,    -1,    -1,    -1,   102,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,   151,    -1,    -1,   286,   158,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,   303,    -1,   173,    57,    -1,    -1,   309,    -1,
      -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   158,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   343,    -1,    -1,    -1,   218,    -1,    -1,    -1,
     102,   223,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
     229,    -1,    -1,    -1,    -1,    -1,   235,   236,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
      -1,   218,   251,    -1,    -1,    -1,   223,    -1,    -1,    -1,
      -1,    -1,   261,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,    -1,    -1,    -1,
     282,    -1,    -1,    -1,    -1,    -1,    -1,   286,    -1,   288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     309,   223,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,   223,    -1,    -1,   343,    -1,    -1,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      -1,    -1,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
      41,    -1,    -1,    44,    -1,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    65,    66,    -1,    68,    69,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,   143,    -1,    -1,   146,    -1,    -1,    -1,   150,
     151,    -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,
      -1,    -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   176,    -1,    -1,   179,   180,
     181,    -1,    -1,   184,   185,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,   217,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,
      -1,    -1,   243,    -1,    -1,   246,    -1,   248,    -1,   250,
      -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    41,    -1,   274,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    68,    69,
      70,   302,    -1,   304,    -1,    -1,    -1,    -1,    78,   310,
      80,    -1,   313,   314,    -1,    85,    -1,    87,    88,    89,
      -1,    -1,    -1,    -1,    94,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
     351,    -1,    -1,    -1,    -1,   125,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   153,   154,    -1,    -1,   157,    -1,   158,
      -1,   161,    -1,   163,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   184,   185,    -1,    -1,   188,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
      -1,   163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   216,   217,    -1,    -1,
      -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   248,    -1,
     250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   274,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   289,
     290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,    -1,
      -1,    -1,   312,    -1,   314,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   351,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    96,    97,   126,   139,   143,   146,
     150,   151,   157,   163,   176,   179,   180,   181,   184,   185,
     198,   216,   217,   218,   230,   232,   239,   243,   246,   248,
     250,   255,   268,   274,   289,   290,   302,   304,   310,   313,
     314,   344,   351,   357,    67,    12,    54,    72,   101,   119,
     123,   136,   295,   391,     3,     4,   295,   358,   396,   188,
     194,   234,   259,   305,   350,   398,   286,     4,    40,   112,
     195,   248,   403,    28,   152,   174,   178,   231,   270,   278,
     279,   373,   405,    84,   100,   176,   220,   255,   406,    40,
      60,   112,   195,   290,   358,   415,     4,    19,    40,    57,
     102,   120,   158,   195,   203,   211,   212,   218,   223,   298,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   347,
     352,   353,   360,   368,   369,   370,   417,    33,   418,   360,
      44,    47,    77,    85,   144,   193,   211,   212,   219,   221,
     248,   314,   359,   146,   420,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    94,    96,
     125,   143,   153,   154,   157,   161,   163,   184,   185,   188,
     198,   216,   217,   224,   248,   250,   274,   289,   290,   299,
     306,   312,   314,   351,   421,    84,   100,   463,    19,    44,
      78,    85,    95,    96,   102,   125,   143,   157,   158,   164,
     184,   223,   274,   284,   314,   466,   360,    89,   117,   186,
     201,   262,   304,   314,   472,    16,    26,   113,   125,   160,
     208,   222,   475,   233,   493,     5,    67,    89,   141,   304,
     351,   360,   494,     5,   495,    58,   132,   228,   243,   305,
     511,    46,    65,    67,   183,   242,   284,   294,   530,    67,
     204,   346,   352,   354,   531,    39,   195,   234,   295,   358,
     368,   370,   532,     5,   304,   314,   360,   535,    71,   170,
     247,   256,   536,     4,   537,    89,   511,    62,   284,   308,
     544,   195,   295,   358,   545,    26,   113,   125,   208,   222,
     547,    51,   100,   109,   138,   297,   562,   563,     4,    37,
      48,    75,   151,   187,   256,   291,   308,   386,     4,   125,
     207,   564,   295,   358,   566,    16,    23,   244,   246,   369,
     567,   233,   571,   295,   358,   572,     0,     5,   142,    60,
     358,   392,   271,     5,     4,   295,   358,   393,     5,    32,
     283,   394,   124,   358,   395,   124,   358,   397,   358,     4,
     194,   252,   401,   188,   305,   349,   350,   358,   400,   360,
     140,   177,   399,   198,   358,    79,   173,   252,   358,   402,
       5,   358,     4,   248,   404,   358,   358,     5,   229,   407,
      31,   408,     5,   409,     5,   413,     5,    31,   414,   358,
       9,    10,    11,   358,   364,   365,   366,   367,   358,   358,
      40,   112,   195,   358,   416,   358,   195,   368,   370,   358,
      35,   107,   128,   129,   137,   155,   165,   375,   358,     4,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     118,    67,    54,    72,    89,   101,   119,   123,   136,   175,
     422,   119,   424,   188,   194,   234,   259,   305,   349,   350,
     358,   410,   425,   286,   428,   170,   429,   170,   178,   431,
      66,    67,    70,    92,   170,   187,   209,   274,   343,   368,
     433,   358,   370,   436,    60,   290,   368,   437,   282,   368,
     370,   438,    33,   439,   368,   370,   440,     4,   368,   370,
     441,    45,    60,    82,   101,   118,   121,   148,   149,   200,
     210,   271,   272,   343,   445,   215,   307,   451,     5,    90,
       6,    89,   121,   443,     5,    66,   370,   442,    16,   511,
      46,    67,    82,   183,   242,   284,   294,   452,    67,   234,
     453,   285,    62,   284,   308,   454,    21,   136,   241,   269,
     455,    37,    48,    75,   151,   187,   256,   308,   456,   370,
      90,    16,   197,   461,   368,   464,    73,   467,    31,   468,
      44,    88,   193,   469,   151,   220,   261,   300,   470,   368,
      18,    59,   116,   174,   290,   368,   471,     4,   194,   474,
       5,     4,     6,   121,   358,     4,     5,   248,   476,     5,
     478,     5,   118,   193,   248,   272,   479,    94,   112,   188,
     492,     5,   490,     5,   272,   491,     4,     5,   360,   360,
     358,   358,     5,     4,     5,    61,    67,    74,    76,    81,
      84,    90,   100,   106,   115,   130,   151,   166,   175,   176,
     196,   220,   234,   236,   250,   255,   261,   268,   286,   300,
     301,   303,   343,   496,   214,   293,   372,     5,     4,   198,
     205,   206,   242,   348,   371,   358,   368,   358,     5,   358,
      40,   112,   358,   534,   360,   358,   368,   370,   533,   358,
     375,   358,     4,   369,    55,    91,   142,   248,   538,     4,
       4,   358,     4,   151,   261,   539,     5,   368,     4,    40,
     112,   358,   546,   358,    98,    62,   121,   248,   275,   548,
     121,   561,    62,   118,   121,   158,   193,   245,   248,   272,
     275,   285,   550,   551,    62,   121,   275,   560,     5,     4,
      34,   108,   204,   543,    67,   360,   387,    67,   360,   388,
      67,   360,   389,    13,   190,   542,   358,   358,   227,   358,
     390,   358,   272,     4,   358,   358,     4,   570,     4,   288,
     568,     4,   288,   569,     4,   375,   124,   358,   573,   358,
     358,     4,     5,   358,    12,   358,   358,   358,    30,    95,
     164,   252,   257,   374,   374,     4,   198,   358,   358,     4,
       4,     4,   358,   358,   358,   358,     4,     4,     5,     5,
     368,     5,   358,   358,   364,   366,   366,   368,   358,   358,
     358,   358,   358,   358,   358,   368,   370,   367,   358,   358,
     367,   358,     5,   271,   104,   188,   423,   194,   252,   426,
     170,    79,   173,   252,   427,   140,   177,   411,   411,     4,
     430,     4,   432,   194,   259,   434,   178,   435,   170,   375,
     358,   358,   368,   368,   375,   375,   375,   368,   375,   358,
     368,     4,   448,     4,   370,   446,   197,     4,   167,   314,
     447,   197,   368,     4,   133,   295,   450,     5,     5,     4,
     197,   358,     4,     5,    61,    67,   115,   130,   145,   151,
     156,   209,   229,   234,   236,   260,   261,   268,   286,   343,
     505,   370,   189,   189,    67,   457,    67,   458,    67,   459,
     227,   460,   358,     5,   228,   462,   369,   375,     5,   368,
     368,   368,   368,     4,   360,     4,     4,   197,   358,    14,
      15,    62,   191,   192,   265,   275,   276,   307,    88,     5,
       5,    14,    15,    62,   191,   192,   265,   275,   276,   280,
     307,    88,   158,   163,   369,   482,   487,    88,   158,     5,
     480,     4,     4,    14,    62,   191,   265,   275,   307,     5,
       5,     4,   358,   369,    20,    21,    22,    49,    50,    53,
      56,    63,    67,    75,    76,    83,    84,   100,   106,   110,
     111,   114,   130,   151,   173,   196,   227,   229,   235,   236,
     250,   251,   260,   261,   286,   288,   301,   303,   309,   343,
      67,    81,    90,   100,   130,   151,   196,   236,   261,   301,
     303,     4,    30,   162,   215,   241,   499,     5,    64,   105,
     238,   253,   254,   345,   346,   504,   100,   497,    17,    40,
     112,   195,   503,     4,     5,    17,   213,   296,   358,   261,
     504,   512,   125,   504,   513,    36,    40,   112,   134,   195,
     295,   358,   514,   368,   360,    92,   100,   106,   127,   151,
     159,   196,   204,   250,   261,   277,   517,    40,   112,   195,
       5,   287,    17,   213,   296,   521,   288,   360,   522,     5,
     100,   106,   304,    17,    17,     4,   358,   358,   358,   358,
     358,   358,   375,   358,   358,   367,   358,     4,   375,     4,
      40,   112,   195,   266,   540,    40,   112,   195,   266,   541,
       4,    98,     5,     5,    88,     4,     5,     5,    88,     5,
     551,    62,   121,   158,   275,   555,    62,   121,   275,   559,
      88,   158,    62,   121,   275,   553,     4,    62,   121,   275,
     552,     5,     5,     4,     4,     5,     5,     5,   358,   358,
     358,     4,   358,   565,   358,   358,     6,   369,     4,     5,
       4,     4,     5,     4,    98,   263,   376,   358,   358,    12,
       5,    12,   358,   358,    12,     4,    12,     4,     4,   358,
     358,   358,     4,   360,     4,     4,   375,   368,   375,   358,
     358,   358,   368,   358,   367,   358,   358,     5,     5,   358,
     370,   358,   368,   358,   375,   375,   376,   376,   376,   375,
     367,   358,   375,   358,   135,   249,   361,   449,   167,     5,
       4,   375,   158,   158,     4,     5,     4,     4,   358,   444,
     358,    20,    21,    22,    49,    50,    53,    60,    63,    67,
      75,    76,    83,   110,   111,   114,   130,   151,   173,   182,
     227,   229,   235,   236,   251,   261,   286,   288,   299,   309,
     343,    67,   130,   156,   236,   286,    30,   162,   215,   241,
     506,   358,   209,   358,   507,    17,   358,   260,   517,   260,
     209,   358,   508,   288,   509,    17,    99,   358,   358,     5,
     376,    57,   368,     4,     5,   473,   358,     5,     5,     5,
     158,   185,   380,   380,   166,   267,   378,     4,     4,     5,
       5,   477,   273,   273,     5,     5,     5,    17,   160,   379,
     379,   378,     4,     4,   378,     5,     5,   481,   163,   342,
     369,   485,     5,   484,     5,     5,   488,     5,   489,     5,
      14,    15,    62,   191,   192,   265,   275,   276,   280,   307,
       4,     4,     5,     5,   380,   378,     4,     5,     5,   375,
      83,   153,   225,   226,   240,   281,   383,     7,     8,   358,
     363,   241,   122,   241,   241,   106,    40,    67,   100,   106,
     112,   130,   151,   166,   196,   236,   250,   261,   288,   301,
     303,   304,   343,   498,   122,   241,     5,    27,   168,   241,
     284,   140,   106,    22,    50,    53,    83,   111,   114,   229,
     260,    22,    50,    53,    56,    83,   111,   114,   229,   260,
     286,    40,   122,   241,   241,   106,     5,   213,    27,   227,
      36,   134,   295,   358,   264,   271,   122,   246,   368,   517,
      40,   131,   227,   284,   246,   213,     5,     5,   250,    27,
     227,     4,     5,     5,   213,    36,   134,   295,   358,   517,
     213,   360,     4,     4,   358,     5,   307,    22,    27,    49,
      50,    52,    53,    63,    75,    76,    83,    86,   103,   110,
     111,   114,   173,   229,   235,   251,   260,   287,   288,   309,
     354,   500,   358,   358,   358,   358,   358,   504,   368,     5,
       4,     5,   358,   358,   368,   358,   360,   358,   358,   504,
       5,   358,   358,   360,     5,    17,     5,     5,   358,   358,
     367,   358,   358,     4,   358,   358,   112,   358,   358,   112,
       4,    42,    43,   171,   172,   199,   385,   385,    62,   121,
     275,   549,   385,     5,    62,   121,   275,   554,     5,     5,
      62,   121,   275,   556,     4,     5,     5,     4,    62,   121,
     275,   558,    62,   121,   275,   557,     5,     5,     4,     5,
       5,     4,   385,   385,   385,   358,   358,   358,     4,   368,
     358,   369,   375,     5,     5,    12,   358,   368,   370,   358,
      12,   358,   358,   358,    60,   358,     6,     4,   358,   358,
      47,   274,   412,     5,   360,   360,   375,   358,     4,     4,
       4,   375,   368,   358,   358,   358,   358,   375,   368,   376,
     367,   358,     4,   376,   358,    38,    38,     4,   370,     5,
      24,    25,    98,   377,     4,   368,   358,   358,     4,   358,
       5,    83,   153,   225,   226,   240,   281,   368,   370,   241,
     122,   241,   241,    21,   241,   368,   122,   241,    27,   168,
     241,   284,   140,    21,   241,   122,   241,   241,    21,   241,
      27,   169,   227,   169,   264,   271,   122,   169,   227,   292,
     517,   131,   169,   227,   284,     4,   250,    27,   169,   227,
     517,   209,   358,   358,   358,   358,   358,   358,   197,   358,
     358,    20,   237,   465,     4,     4,   358,   380,   380,   380,
       4,   380,   380,   380,    14,    15,    62,   191,   192,   265,
     275,   276,   307,   379,   380,   380,   380,   380,   380,     4,
     380,   380,     4,   379,    14,    15,    62,   191,   192,   265,
     275,   276,   307,     5,   483,     5,   486,     5,     5,    14,
      15,    62,   191,   192,   265,   275,   276,   280,   307,     5,
      14,    15,    62,   191,   192,   265,   275,   276,   280,   307,
       5,    14,    15,    62,   191,   192,   265,   275,   276,   280,
     307,    14,    15,    62,   191,   192,   265,   275,   276,   307,
     273,     5,     5,     5,   379,   379,   378,     4,     4,   378,
       5,     4,     4,   380,   380,     4,   380,   380,     5,   360,
     368,   370,     5,   358,   360,   358,     5,   358,     5,   363,
     106,   196,   250,   106,   196,   250,     5,   360,   358,   360,
       5,   358,   368,   360,     5,   363,   241,   241,    21,   241,
      21,   241,   241,    21,   241,   311,   311,     4,     4,     4,
     498,     4,     4,     4,   311,   311,     4,     5,     4,   360,
     358,     5,   358,     5,   363,   360,   368,   368,   358,    27,
      49,    52,    63,    86,   103,   354,   381,     4,   360,   358,
     375,   360,     5,   368,   368,   358,   360,   360,   368,   368,
     358,   360,   358,     5,   358,   227,   227,   358,   358,   227,
     358,   227,   358,   358,   510,   518,   358,   227,   227,   358,
     358,   358,   358,   358,   358,   358,   358,     5,   307,   358,
     501,   358,   358,   227,   358,   358,   358,   358,   368,   375,
       5,   368,   368,   358,   358,   375,   358,   358,   358,   368,
     358,   358,     5,     4,   358,   358,   358,   358,     5,     5,
       4,   385,     5,     5,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     5,     4,   358,   358,   358,
     358,   375,   358,   368,   370,   358,   375,   358,   358,   358,
     358,   358,     5,   358,     4,     6,   358,   358,     4,   368,
     358,   375,   178,   373,   358,   373,   376,   375,   368,   358,
     358,     4,   358,   368,   368,   358,     4,     5,     5,     5,
       5,     5,   368,   375,   368,   368,   368,   368,   370,   368,
     375,   368,   368,   368,   370,   368,   368,   368,   368,   370,
     368,   368,   368,   358,   368,   368,   368,   368,   368,   368,
     368,   358,   358,     4,   358,     5,     4,   358,   380,     5,
       5,     5,   378,     4,     4,     5,   380,   379,     4,   380,
       5,     5,     5,   379,   379,   378,     4,     4,     5,    14,
      15,    62,   191,   192,   265,   275,   276,   307,    14,    15,
      62,   191,   192,   265,   275,   276,   307,    14,    15,    62,
     191,   192,   265,   275,   276,   307,   273,     5,     5,     5,
     379,   379,   378,     4,     4,   378,     5,   273,     5,     5,
       5,   379,   379,   378,     4,     4,   378,     5,   273,     5,
       5,     5,   379,   379,   378,     4,     4,   378,     5,     5,
       5,     5,   379,   379,   378,     4,     4,     5,   379,     4,
       4,   379,     4,     4,   380,     5,   375,   368,   358,   358,
     368,   358,     5,   363,     5,   368,   360,     5,   368,   375,
       5,   363,   358,   358,   358,   358,   358,   358,   358,   358,
     358,     4,     4,     5,     4,     4,   358,   368,   358,     5,
     363,   360,   375,   375,   358,   367,   375,   375,   358,   375,
     375,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,    56,    67,    93,   130,   286,   288,   343,   515,   516,
     517,   528,   529,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   368,     5,   358,   358,   358,
     358,     4,     4,   375,   376,     4,   502,   375,   375,   367,
     358,     4,   375,     4,   385,   385,   385,   363,   358,   358,
     358,   375,   358,   367,   358,   358,    12,     5,     5,     4,
     358,   358,     4,   375,   368,   358,   358,   376,   377,   358,
       5,   358,   370,     5,     5,     5,     5,     5,   375,   377,
     377,   377,   375,   377,   376,   377,   377,   375,   377,   377,
     377,   375,   377,   377,   375,   368,   377,   375,   377,   377,
     375,   377,   375,     4,   370,     5,   358,     4,   380,   379,
       4,   379,     5,     5,     5,   379,   379,   378,     4,     4,
       5,     5,     5,     5,   379,   379,   378,     4,     4,     5,
       5,     5,     5,   379,   379,   378,     4,     4,     5,   379,
     380,   380,   380,   380,   380,     4,   380,   380,     4,   379,
     379,   380,   380,   380,   380,   380,     4,   380,   380,     4,
     379,   379,     4,     4,   379,     4,   379,   379,     4,     4,
       4,   369,   377,     4,   368,   377,   358,   368,     4,   377,
     377,   368,     4,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   368,   377,   358,   368,     4,   367,
     367,   368,   367,   367,   368,   368,   367,   367,   358,   358,
     358,   358,   358,   358,   363,   358,   358,   358,   355,   355,
     355,   355,   355,   355,   355,   516,   355,   363,   358,   358,
     358,   358,   363,   358,   358,   358,   358,   358,   358,   375,
     358,   307,   362,   363,   358,   358,   376,   360,     4,     4,
     376,     4,   358,   367,   358,    60,   358,     5,     5,   358,
       4,   373,   377,     5,     4,     5,     4,     5,   368,     5,
     376,   377,   376,   376,   376,     5,     4,   358,   380,   379,
     380,   380,   380,   380,   380,     4,   380,   380,   379,   380,
     380,   380,   380,   380,     4,   380,   380,   379,   380,   380,
     380,   380,   380,     4,   380,   380,   379,   380,   379,     4,
     380,   380,   379,     4,   380,   379,     4,   379,   379,   375,
     368,   377,     4,   375,   358,   375,   358,   358,   358,   377,
       4,   375,   358,   367,   377,   358,   367,   377,   377,   368,
     358,     4,   382,   382,   358,   358,   382,   363,   382,   518,
     368,   498,     5,     4,     5,     5,     5,     4,   360,   363,
     382,   382,   358,   358,   363,   358,   358,   358,   358,   358,
     367,   358,     5,   518,   358,   382,   360,   519,   520,     5,
     360,     4,     5,   358,     5,     4,     6,   358,    32,   283,
     419,   368,     5,    32,   283,   384,   368,   419,   358,   379,
     380,   379,   380,   379,   380,   380,   379,   380,   379,   379,
     358,   377,   368,   368,   358,   368,   358,   368,   368,   358,
     368,   377,     4,   518,   518,   362,   358,   518,     4,   518,
     375,     5,     4,     4,   518,   518,   362,   358,     4,   518,
     518,   358,   368,   518,   518,   518,   519,   525,   526,   517,
     523,   524,     4,     5,     5,     6,     4,   188,   305,   350,
     358,   410,     4,   368,     4,   380,   380,   380,   380,   380,
     369,   377,   377,   358,   377,     4,   377,   377,   358,   377,
     358,   518,   518,     4,   358,   518,     5,   358,   518,     4,
     358,   518,   375,   525,   527,   528,   355,   524,     5,     5,
       4,   358,   411,   358,   411,   375,   377,     4,   368,   370,
       4,   363,   362,   358,   358,   362,   358,   368,   528,   360,
       5,     5,   358,   358,   358,   358,   384,     5,   368,   370,
     375,   368,   370,   518,   358,     4,   518,   358,   377,     5,
       5,   358,     5,   358,   375,   375,     4,   518,     4,     5,
       5,     5,   362,   362,   518,   518,   518
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
#line 464 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 465 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 467 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 468 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 470 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 477 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 482 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 483 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 485 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 492 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 496 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 499 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 504 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 506 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 508 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 510 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 517 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 518 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 521 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 522 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 523 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 524 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 525 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 526 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 527 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 528 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 529 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 530 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 531 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 532 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 535 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 537 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 538 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 539 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 540 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 542 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 543 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 544 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 545 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 548 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 549 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 550 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 551 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 552 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 555 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 556 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 559 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 560 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 561 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 564 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 567 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 570 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 574 "frame/parser.Y"
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
#line 586 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 593 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 600 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 611 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 637 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 638 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 639 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 640 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 641 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 644 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 645 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 648 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 649 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OPAQUE;;}
    break;

  case 137:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OPAQUE;;}
    break;

  case 138:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::TRANSPARENT;;}
    break;

  case 139:
#line 661 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 141:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 142:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 143:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 144:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 145:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 146:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 147:
#line 671 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 149:
#line 673 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 150:
#line 674 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 151:
#line 675 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 152:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 154:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 155:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 156:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 158:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 159:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 160:
#line 688 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 162:
#line 690 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 163:
#line 693 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 165:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 166:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 167:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 169:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 170:
#line 704 "frame/parser.Y"
    {;}
    break;

  case 171:
#line 705 "frame/parser.Y"
    {;}
    break;

  case 172:
#line 706 "frame/parser.Y"
    {;}
    break;

  case 173:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 174:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 175:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 176:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 178:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 179:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 180:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 181:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 182:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 183:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 184:
#line 724 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 186:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 187:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 189:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 190:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 191:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 192:
#line 736 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 194:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 195:
#line 741 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 197:
#line 743 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 198:
#line 744 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 199:
#line 745 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 200:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 205:
#line 753 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 206:
#line 754 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 207:
#line 755 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 208:
#line 757 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 209:
#line 760 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 761 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 764 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 768 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 769 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 772 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 216:
#line 774 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 218:
#line 778 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 222:
#line 782 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 224:
#line 784 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 225:
#line 787 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 226:
#line 788 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 791 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 228:
#line 792 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 794 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 230:
#line 796 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 233:
#line 800 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 234:
#line 802 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 235:
#line 805 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 236:
#line 806 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 237:
#line 809 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 238:
#line 811 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 239:
#line 814 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 240:
#line 816 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 241:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 242:
#line 823 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 243:
#line 824 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 245:
#line 828 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 251:
#line 836 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 252:
#line 837 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 254:
#line 840 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 255:
#line 845 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 256:
#line 846 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 257:
#line 849 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 260:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 261:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 262:
#line 856 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 861 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 266:
#line 863 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 267:
#line 868 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 268:
#line 873 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 269:
#line 880 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 270:
#line 882 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 271:
#line 883 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 273:
#line 885 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 274:
#line 889 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 275:
#line 891 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 276:
#line 893 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 283:
#line 905 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 284:
#line 907 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 285:
#line 909 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 286:
#line 914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 287:
#line 918 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 288:
#line 921 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 289:
#line 922 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 290:
#line 925 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 291:
#line 926 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 292:
#line 928 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 293:
#line 934 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 294:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 295:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 296:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 297:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 299:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 301:
#line 948 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 303:
#line 953 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 304:
#line 955 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 305:
#line 958 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 306:
#line 960 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 307:
#line 963 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 309:
#line 965 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 310:
#line 966 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 311:
#line 967 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 313:
#line 972 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 973 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 974 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 316:
#line 975 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 979 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 318:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 320:
#line 983 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 321:
#line 986 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 322:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 323:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 324:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 995 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 326:
#line 998 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 327:
#line 999 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 328:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 329:
#line 1003 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 330:
#line 1006 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 344:
#line 1020 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 347:
#line 1023 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 348:
#line 1025 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 351:
#line 1028 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 352:
#line 1029 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 355:
#line 1032 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 356:
#line 1033 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 358:
#line 1036 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 360:
#line 1038 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 362:
#line 1040 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 364:
#line 1042 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 365:
#line 1044 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 366:
#line 1046 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 368:
#line 1048 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 369:
#line 1051 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 370:
#line 1052 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 371:
#line 1053 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 372:
#line 1054 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 373:
#line 1055 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 374:
#line 1056 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 376:
#line 1058 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 377:
#line 1061 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 379:
#line 1063 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 380:
#line 1066 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 381:
#line 1069 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 382:
#line 1071 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 383:
#line 1073 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 385:
#line 1075 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 387:
#line 1077 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 389:
#line 1080 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 390:
#line 1086 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 391:
#line 1087 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 392:
#line 1090 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 393:
#line 1091 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 394:
#line 1092 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 395:
#line 1095 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 396:
#line 1096 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 398:
#line 1102 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 399:
#line 1104 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 400:
#line 1106 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 401:
#line 1109 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 403:
#line 1111 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 404:
#line 1115 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 405:
#line 1119 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 407:
#line 1121 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 408:
#line 1122 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 409:
#line 1123 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 410:
#line 1124 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 411:
#line 1125 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 413:
#line 1127 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 414:
#line 1128 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 415:
#line 1131 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 416:
#line 1132 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 418:
#line 1136 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 419:
#line 1137 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 420:
#line 1141 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 422:
#line 1151 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 423:
#line 1153 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 424:
#line 1155 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 425:
#line 1158 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 426:
#line 1160 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1161 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 428:
#line 1164 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 429:
#line 1167 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 430:
#line 1169 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1173 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 432:
#line 1175 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 433:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 434:
#line 1182 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 435:
#line 1183 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 436:
#line 1185 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 437:
#line 1188 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 438:
#line 1189 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 440:
#line 1193 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 442:
#line 1195 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 443:
#line 1198 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 444:
#line 1200 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 451:
#line 1207 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 452:
#line 1208 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 453:
#line 1209 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 454:
#line 1211 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 456:
#line 1213 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 457:
#line 1216 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1218 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 459:
#line 1220 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 460:
#line 1221 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 461:
#line 1222 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 462:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 463:
#line 1226 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 464:
#line 1227 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1231 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1233 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 467:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 468:
#line 1239 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 469:
#line 1240 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1242 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 472:
#line 1246 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 473:
#line 1249 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 474:
#line 1250 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 475:
#line 1251 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 476:
#line 1254 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 477:
#line 1255 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 478:
#line 1256 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 479:
#line 1257 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 480:
#line 1258 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 481:
#line 1259 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 482:
#line 1260 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 483:
#line 1263 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 484:
#line 1266 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 485:
#line 1267 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 486:
#line 1268 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 487:
#line 1271 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 488:
#line 1272 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 489:
#line 1273 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 490:
#line 1274 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 491:
#line 1275 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 492:
#line 1276 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 497:
#line 1283 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 498:
#line 1284 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 499:
#line 1285 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 500:
#line 1288 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 502:
#line 1292 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 503:
#line 1293 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 504:
#line 1296 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 505:
#line 1297 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 506:
#line 1300 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 507:
#line 1301 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 508:
#line 1304 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 510:
#line 1306 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1309 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 512:
#line 1310 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 514:
#line 1314 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 515:
#line 1318 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 516:
#line 1321 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 517:
#line 1328 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 518:
#line 1329 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 519:
#line 1332 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 522:
#line 1335 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 523:
#line 1336 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 524:
#line 1337 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 525:
#line 1338 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 527:
#line 1340 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 528:
#line 1341 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 529:
#line 1342 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 531:
#line 1344 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 532:
#line 1345 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 533:
#line 1346 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 534:
#line 1347 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1351 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 537:
#line 1354 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 538:
#line 1355 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 539:
#line 1358 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 540:
#line 1359 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 541:
#line 1360 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 542:
#line 1361 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 543:
#line 1364 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 547:
#line 1370 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 548:
#line 1371 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1372 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1373 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1374 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 552:
#line 1375 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 553:
#line 1378 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 554:
#line 1379 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 558:
#line 1384 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 559:
#line 1385 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 560:
#line 1388 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 561:
#line 1391 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 562:
#line 1392 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1396 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 564:
#line 1398 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 565:
#line 1399 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 572:
#line 1411 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1413 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1415 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1416 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 576:
#line 1418 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 577:
#line 1420 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 578:
#line 1422 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1424 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1426 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1430 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1442 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 592:
#line 1446 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1448 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1450 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1452 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1454 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 597:
#line 1456 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1458 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 599:
#line 1460 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 600:
#line 1463 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1465 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1467 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 608:
#line 1475 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1476 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1477 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1478 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1479 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 613:
#line 1480 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1482 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 615:
#line 1484 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1486 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1487 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 619:
#line 1490 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1496 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 625:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 633:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 639:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 659:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1613 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 668:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1622 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1644 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 678:
#line 1647 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 679:
#line 1650 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 680:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 681:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 682:
#line 1660 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1661 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1662 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1663 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1664 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 687:
#line 1665 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1667 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 689:
#line 1669 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1675 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1677 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1678 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1679 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1681 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 699:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 702:
#line 1688 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1690 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1691 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 705:
#line 1693 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 706:
#line 1695 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1697 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1700 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1701 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 710:
#line 1704 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 713:
#line 1709 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 714:
#line 1716 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 715:
#line 1717 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 716:
#line 1718 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 717:
#line 1719 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 718:
#line 1720 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 719:
#line 1721 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 720:
#line 1722 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 721:
#line 1726 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 723:
#line 1734 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 724:
#line 1735 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 725:
#line 1737 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 726:
#line 1739 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 727:
#line 1740 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 728:
#line 1741 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 730:
#line 1742 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 731:
#line 1743 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 732:
#line 1744 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 734:
#line 1746 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 735:
#line 1747 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 736:
#line 1749 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 738:
#line 1753 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 739:
#line 1756 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1758 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1764 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 744:
#line 1767 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1769 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1772 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 747:
#line 1775 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1778 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 749:
#line 1781 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 750:
#line 1785 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 751:
#line 1789 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 752:
#line 1794 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 753:
#line 1798 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 754:
#line 1799 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1801 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1802 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 757:
#line 1804 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1806 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 759:
#line 1808 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 760:
#line 1810 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1811 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 762:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1815 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 764:
#line 1818 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 765:
#line 1822 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 766:
#line 1826 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1828 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1830 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1832 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1834 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1836 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1838 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1840 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1842 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1844 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 776:
#line 1846 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 777:
#line 1848 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 778:
#line 1850 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1852 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1853 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1855 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1857 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 783:
#line 1858 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1859 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1861 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 786:
#line 1863 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1864 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 788:
#line 1865 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1868 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1871 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 793:
#line 1875 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1878 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1881 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 796:
#line 1885 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 797:
#line 1889 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 798:
#line 1894 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1898 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 800:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 801:
#line 1900 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1902 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1904 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 804:
#line 1908 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 805:
#line 1909 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1910 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1912 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 808:
#line 1915 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1918 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1921 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1922 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1924 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1927 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 814:
#line 1931 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1933 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 816:
#line 1934 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 817:
#line 1936 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 818:
#line 1939 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 819:
#line 1942 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 820:
#line 1943 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1945 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 822:
#line 1946 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 823:
#line 1947 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1949 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 825:
#line 1950 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1952 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 827:
#line 1955 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 828:
#line 1958 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 829:
#line 1960 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 830:
#line 1961 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 834:
#line 1966 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 836:
#line 1969 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 837:
#line 1971 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 838:
#line 1973 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 839:
#line 1974 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 840:
#line 1976 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 841:
#line 1977 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 844:
#line 1982 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 845:
#line 1983 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 846:
#line 1984 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 847:
#line 1985 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1986 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1988 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 851:
#line 1989 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 852:
#line 1990 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 853:
#line 1991 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1993 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 855:
#line 1995 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 866:
#line 2008 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 867:
#line 2009 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 868:
#line 2010 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 869:
#line 2011 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 870:
#line 2012 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 871:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 876:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 877:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 878:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 879:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 880:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 881:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 882:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 883:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 884:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 885:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 886:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 887:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 888:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 889:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 890:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 891:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 892:
#line 2038 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 895:
#line 2041 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 896:
#line 2042 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 897:
#line 2044 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 898:
#line 2054 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2062 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2071 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2079 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2086 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2093 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2101 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2109 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2119 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2124 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2129 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2134 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2139 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2144 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2153 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2163 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2173 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2182 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2190 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2200 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2210 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2220 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2232 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2241 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2249 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2251 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 926:
#line 2253 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 927:
#line 2258 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 928:
#line 2261 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 929:
#line 2265 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 930:
#line 2267 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2268 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 932:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 933:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 934:
#line 2273 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 935:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 936:
#line 2275 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 937:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 938:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 940:
#line 2281 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 941:
#line 2282 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 942:
#line 2283 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 944:
#line 2285 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 945:
#line 2288 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 946:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 947:
#line 2292 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 948:
#line 2294 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 949:
#line 2296 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 950:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2300 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 953:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2308 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2310 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2312 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2314 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 961:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2321 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2323 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2325 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 967:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2341 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2343 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 984:
#line 2352 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2353 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2355 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 988:
#line 2360 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 989:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2365 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2367 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 993:
#line 2370 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2373 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2374 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2375 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 997:
#line 2376 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2378 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2380 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1000:
#line 2382 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1001:
#line 2383 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2385 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1004:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1005:
#line 2388 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2389 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2391 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2393 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1009:
#line 2395 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1010:
#line 2397 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2399 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1013:
#line 2400 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1014:
#line 2402 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1015:
#line 2404 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1019:
#line 2408 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1021:
#line 2412 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1023:
#line 2414 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1024:
#line 2415 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1025:
#line 2416 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1027:
#line 2419 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1028:
#line 2420 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1029:
#line 2422 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1030:
#line 2425 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1032:
#line 2427 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1033:
#line 2428 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1034:
#line 2431 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1036:
#line 2435 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1037:
#line 2436 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1038:
#line 2439 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1039:
#line 2440 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1040:
#line 2443 "frame/parser.Y"
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
#line 2456 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1042:
#line 2457 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1043:
#line 2461 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1044:
#line 2462 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1045:
#line 2466 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1046:
#line 2467 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1047:
#line 2472 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1048:
#line 2477 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1049:
#line 2483 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1050:
#line 2485 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1051:
#line 2488 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1052:
#line 2490 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1053:
#line 2493 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1054:
#line 2496 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1055:
#line 2497 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1056:
#line 2498 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1057:
#line 2499 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1058:
#line 2500 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1059:
#line 2501 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1060:
#line 2503 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1063:
#line 2510 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1064:
#line 2511 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1065:
#line 2512 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1066:
#line 2513 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1067:
#line 2514 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1072:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1074:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1075:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1076:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1077:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1078:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1079:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1080:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1081:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1084:
#line 2537 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1085:
#line 2538 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1089:
#line 2543 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1095:
#line 2556 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1096:
#line 2559 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1097:
#line 2560 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1101:
#line 2567 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1102:
#line 2570 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1103:
#line 2574 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1104:
#line 2575 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1105:
#line 2576 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1106:
#line 2577 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1107:
#line 2578 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1108:
#line 2579 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1109:
#line 2580 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1110:
#line 2581 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1111:
#line 2587 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1112:
#line 2588 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1113:
#line 2589 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1114:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1115:
#line 2594 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1116:
#line 2595 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1117:
#line 2597 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1118:
#line 2602 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1120:
#line 2604 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1122:
#line 2606 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1123:
#line 2609 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1124:
#line 2611 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1125:
#line 2616 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1126:
#line 2619 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1127:
#line 2620 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1128:
#line 2621 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2624 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1130:
#line 2626 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1131:
#line 2630 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1132:
#line 2631 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1133:
#line 2635 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1134:
#line 2636 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1135:
#line 2637 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2638 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1137:
#line 2644 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1138:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1139:
#line 2651 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1140:
#line 2652 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1141:
#line 2653 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1142:
#line 2654 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1145:
#line 2662 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2664 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2665 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1148:
#line 2666 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1149:
#line 2670 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2671 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2672 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1152:
#line 2673 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1153:
#line 2676 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1154:
#line 2677 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1155:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1157:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1158:
#line 2685 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1159:
#line 2686 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2687 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1161:
#line 2690 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1164:
#line 2693 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1165:
#line 2694 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1166:
#line 2697 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2710 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2712 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2714 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2719 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2721 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2723 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2736 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2737 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2738 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2741 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2742 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2743 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2746 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2747 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2748 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2751 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2752 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2753 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2757 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1204:
#line 2758 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2759 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2762 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2763 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2767 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2768 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2772 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2773 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2777 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2783 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2785 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2787 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2791 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1222:
#line 2795 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1223:
#line 2797 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1224:
#line 2801 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1225:
#line 2804 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1226:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1227:
#line 2806 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1228:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1229:
#line 2810 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1230:
#line 2812 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1231:
#line 2813 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1232:
#line 2815 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1234:
#line 2819 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2821 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2824 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1239:
#line 2829 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1241:
#line 2831 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2836 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2837 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1246:
#line 2838 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1247:
#line 2841 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2842 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1249:
#line 2843 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1250:
#line 2846 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1251:
#line 2848 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1252:
#line 2853 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1253:
#line 2856 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1254:
#line 2863 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1255:
#line 2865 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1256:
#line 2867 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1257:
#line 2872 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1259:
#line 2876 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1260:
#line 2877 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1261:
#line 2878 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1262:
#line 2880 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1263:
#line 2882 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1264:
#line 2887 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10934 "frame/parser.C"
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


#line 2891 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

