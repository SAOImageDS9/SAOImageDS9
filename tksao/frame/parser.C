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
     SEGMENT_ = 516,
     SELECT_ = 517,
     SET_ = 518,
     SEXAGESIMAL_ = 519,
     SHAPE_ = 520,
     SHARED_ = 521,
     SHIFT_ = 522,
     SHMID_ = 523,
     SHOW_ = 524,
     SIGMA_ = 525,
     SINH_ = 526,
     SIZE_ = 527,
     SLICE_ = 528,
     SMMAP_ = 529,
     SMOOTH_ = 530,
     SOCKET_ = 531,
     SOCKETGZ_ = 532,
     SOURCE_ = 533,
     SQRT_ = 534,
     SQUARED_ = 535,
     SSHARED_ = 536,
     STATS_ = 537,
     STATUS_ = 538,
     SUM_ = 539,
     SYSTEM_ = 540,
     TABLE_ = 541,
     TAG_ = 542,
     TEMPLATE_ = 543,
     TEXT_ = 544,
     THREADS_ = 545,
     THREED_ = 546,
     THRESHOLD_ = 547,
     THICK_ = 548,
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
#define SEGMENT_ 516
#define SELECT_ 517
#define SET_ 518
#define SEXAGESIMAL_ 519
#define SHAPE_ 520
#define SHARED_ 521
#define SHIFT_ 522
#define SHMID_ 523
#define SHOW_ 524
#define SIGMA_ 525
#define SINH_ 526
#define SIZE_ 527
#define SLICE_ 528
#define SMMAP_ 529
#define SMOOTH_ 530
#define SOCKET_ 531
#define SOCKETGZ_ 532
#define SOURCE_ 533
#define SQRT_ 534
#define SQUARED_ 535
#define SSHARED_ 536
#define STATS_ 537
#define STATUS_ 538
#define SUM_ 539
#define SYSTEM_ 540
#define TABLE_ 541
#define TAG_ 542
#define TEMPLATE_ 543
#define TEXT_ 544
#define THREADS_ 545
#define THREED_ 546
#define THRESHOLD_ 547
#define THICK_ 548
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
#define YYNRULES  1265
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2788

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
     364,   366,   368,   370,   371,   373,   375,   377,   379,   381,
     383,   385,   386,   388,   390,   391,   393,   395,   397,   398,
     400,   402,   403,   405,   407,   408,   410,   412,   413,   415,
     417,   419,   421,   423,   425,   427,   428,   430,   432,   434,
     436,   438,   440,   442,   443,   445,   447,   448,   450,   452,
     454,   456,   458,   461,   464,   467,   470,   473,   476,   479,
     482,   484,   487,   489,   492,   494,   497,   500,   507,   510,
     515,   518,   521,   524,   528,   531,   534,   536,   539,   541,
     544,   549,   555,   558,   562,   568,   575,   577,   579,   581,
     589,   601,   610,   623,   625,   628,   631,   633,   635,   638,
     641,   644,   647,   651,   655,   658,   661,   663,   665,   667,
     669,   671,   673,   675,   678,   681,   684,   688,   691,   694,
     697,   704,   715,   717,   720,   722,   729,   740,   742,   745,
     748,   751,   754,   757,   760,   774,   788,   801,   814,   816,
     817,   819,   821,   826,   833,   835,   837,   839,   841,   843,
     845,   847,   849,   851,   856,   860,   865,   866,   873,   882,
     885,   889,   893,   897,   898,   903,   908,   913,   918,   922,
     926,   928,   932,   938,   943,   948,   952,   955,   956,   958,
     960,   964,   967,   970,   973,   976,   979,   982,   985,   988,
     991,   994,   997,  1000,  1003,  1006,  1008,  1011,  1014,  1019,
    1029,  1032,  1035,  1038,  1040,  1044,  1047,  1050,  1052,  1055,
    1064,  1067,  1069,  1072,  1074,  1077,  1079,  1084,  1094,  1097,
    1099,  1101,  1103,  1105,  1108,  1110,  1112,  1115,  1117,  1118,
    1121,  1124,  1126,  1127,  1130,  1133,  1135,  1137,  1140,  1143,
    1146,  1148,  1150,  1152,  1154,  1156,  1158,  1159,  1161,  1164,
    1166,  1171,  1177,  1178,  1181,  1183,  1189,  1192,  1195,  1197,
    1199,  1201,  1204,  1206,  1209,  1211,  1213,  1214,  1216,  1218,
    1219,  1221,  1227,  1234,  1238,  1245,  1249,  1251,  1255,  1257,
    1259,  1261,  1265,  1272,  1280,  1286,  1288,  1290,  1295,  1301,
    1303,  1307,  1308,  1310,  1313,  1315,  1320,  1322,  1325,  1327,
    1330,  1334,  1337,  1339,  1342,  1344,  1349,  1352,  1354,  1356,
    1360,  1362,  1365,  1369,  1372,  1373,  1375,  1377,  1382,  1385,
    1386,  1388,  1392,  1397,  1402,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1436,  1438,  1441,  1443,  1446,  1449,  1452,  1455,  1457,
    1459,  1461,  1462,  1464,  1465,  1467,  1468,  1470,  1471,  1473,
    1474,  1477,  1480,  1481,  1483,  1486,  1488,  1495,  1501,  1503,
    1505,  1507,  1510,  1513,  1515,  1517,  1519,  1521,  1524,  1526,
    1528,  1530,  1533,  1535,  1537,  1539,  1542,  1545,  1548,  1549,
    1551,  1552,  1554,  1556,  1558,  1560,  1562,  1564,  1566,  1568,
    1571,  1574,  1577,  1579,  1582,  1586,  1588,  1591,  1594,  1599,
    1606,  1608,  1619,  1621,  1624,  1628,  1632,  1635,  1638,  1641,
    1644,  1647,  1650,  1653,  1658,  1663,  1668,  1672,  1676,  1682,
    1687,  1692,  1697,  1701,  1705,  1709,  1713,  1716,  1719,  1724,
    1728,  1732,  1736,  1740,  1745,  1750,  1755,  1760,  1766,  1771,
    1778,  1786,  1791,  1796,  1802,  1805,  1809,  1813,  1817,  1820,
    1824,  1828,  1832,  1836,  1841,  1845,  1851,  1858,  1862,  1866,
    1871,  1875,  1879,  1883,  1887,  1891,  1897,  1901,  1905,  1910,
    1914,  1917,  1920,  1922,  1926,  1931,  1936,  1941,  1946,  1951,
    1958,  1963,  1968,  1974,  1979,  1984,  1989,  1994,  2000,  2005,
    2012,  2020,  2025,  2030,  2036,  2042,  2048,  2054,  2060,  2066,
    2074,  2080,  2086,  2093,  2098,  2103,  2108,  2113,  2118,  2125,
    2130,  2135,  2141,  2147,  2153,  2159,  2165,  2172,  2178,  2186,
    2195,  2201,  2207,  2214,  2218,  2222,  2226,  2230,  2235,  2239,
    2245,  2252,  2256,  2260,  2265,  2269,  2273,  2277,  2281,  2285,
    2291,  2295,  2299,  2304,  2309,  2314,  2318,  2324,  2329,  2334,
    2337,  2341,  2348,  2355,  2357,  2359,  2361,  2364,  2367,  2370,
    2374,  2378,  2381,  2394,  2397,  2400,  2402,  2406,  2411,  2414,
    2415,  2419,  2421,  2423,  2426,  2429,  2432,  2435,  2438,  2443,
    2448,  2453,  2457,  2462,  2468,  2477,  2484,  2489,  2499,  2506,
    2514,  2525,  2537,  2550,  2560,  2566,  2571,  2578,  2582,  2588,
    2594,  2601,  2607,  2612,  2622,  2633,  2645,  2655,  2662,  2669,
    2676,  2683,  2690,  2697,  2704,  2711,  2718,  2726,  2734,  2737,
    2742,  2747,  2752,  2757,  2763,  2768,  2773,  2779,  2785,  2789,
    2794,  2799,  2804,  2809,  2817,  2827,  2834,  2845,  2857,  2870,
    2880,  2884,  2887,  2891,  2897,  2905,  2910,  2914,  2918,  2925,
    2933,  2941,  2946,  2951,  2956,  2966,  2971,  2975,  2980,  2988,
    2996,  2999,  3003,  3007,  3011,  3016,  3019,  3022,  3027,  3038,
    3042,  3044,  3048,  3051,  3054,  3057,  3060,  3064,  3070,  3075,
    3081,  3084,  3092,  3096,  3099,  3102,  3106,  3109,  3112,  3115,
    3119,  3122,  3126,  3131,  3135,  3139,  3146,  3151,  3154,  3158,
    3161,  3164,  3169,  3173,  3177,  3180,  3184,  3186,  3189,  3191,
    3194,  3197,  3200,  3202,  3204,  3206,  3208,  3211,  3213,  3216,
    3219,  3221,  3224,  3227,  3229,  3232,  3234,  3236,  3238,  3240,
    3242,  3244,  3246,  3248,  3249,  3251,  3254,  3257,  3260,  3264,
    3270,  3278,  3286,  3293,  3300,  3307,  3314,  3320,  3327,  3334,
    3341,  3348,  3355,  3362,  3369,  3381,  3389,  3397,  3405,  3415,
    3425,  3436,  3449,  3462,  3465,  3468,  3472,  3477,  3482,  3487,
    3490,  3495,  3500,  3502,  3504,  3506,  3508,  3510,  3512,  3514,
    3516,  3519,  3521,  3523,  3525,  3529,  3533,  3542,  3549,  3560,
    3568,  3576,  3582,  3585,  3588,  3592,  3597,  3603,  3607,  3613,
    3619,  3623,  3628,  3634,  3640,  3646,  3650,  3656,  3659,  3663,
    3667,  3673,  3677,  3681,  3685,  3690,  3696,  3702,  3706,  3712,
    3718,  3722,  3727,  3733,  3739,  3742,  3745,  3749,  3755,  3762,
    3769,  3773,  3777,  3781,  3788,  3794,  3800,  3803,  3807,  3811,
    3817,  3824,  3828,  3831,  3834,  3838,  3841,  3845,  3848,  3852,
    3858,  3865,  3868,  3871,  3874,  3876,  3881,  3886,  3888,  3891,
    3894,  3897,  3900,  3903,  3906,  3909,  3913,  3916,  3920,  3923,
    3927,  3929,  3931,  3933,  3935,  3937,  3938,  3941,  3942,  3945,
    3946,  3948,  3949,  3950,  3952,  3954,  3956,  3958,  3960,  3968,
    3977,  3980,  3985,  3988,  3993,  4000,  4003,  4005,  4007,  4011,
    4015,  4017,  4022,  4025,  4027,  4031,  4035,  4040,  4044,  4048,
    4052,  4054,  4056,  4058,  4060,  4062,  4064,  4066,  4068,  4070,
    4072,  4074,  4076,  4078,  4080,  4083,  4084,  4085,  4088,  4090,
    4094,  4096,  4100,  4102,  4105,  4108,  4110,  4114,  4115,  4116,
    4119,  4122,  4124,  4128,  4134,  4136,  4139,  4142,  4146,  4149,
    4152,  4155,  4158,  4160,  4162,  4164,  4166,  4171,  4174,  4178,
    4182,  4185,  4189,  4192,  4195,  4198,  4202,  4206,  4210,  4213,
    4217,  4219,  4223,  4227,  4229,  4232,  4235,  4238,  4241,  4251,
    4258,  4260,  4262,  4264,  4266,  4269,  4272,  4276,  4280,  4282,
    4285,  4289,  4293,  4295,  4298,  4300,  4302,  4304,  4306,  4308,
    4311,  4314,  4319,  4321,  4324,  4327,  4330,  4334,  4336,  4338,
    4340,  4343,  4346,  4349,  4352,  4355,  4359,  4363,  4367,  4371,
    4375,  4379,  4383,  4385,  4388,  4391,  4394,  4398,  4401,  4405,
    4409,  4412,  4415,  4418,  4421,  4424,  4427,  4430,  4433,  4436,
    4439,  4442,  4445,  4448,  4451,  4455,  4459,  4463,  4466,  4469,
    4472,  4475,  4478,  4481,  4484,  4487,  4490,  4493,  4496,  4499,
    4503,  4507,  4511,  4516,  4523,  4526,  4528,  4530,  4532,  4534,
    4536,  4537,  4543,  4545,  4552,  4556,  4558,  4561,  4564,  4567,
    4571,  4575,  4578,  4581,  4584,  4587,  4590,  4593,  4597,  4600,
    4603,  4607,  4609,  4613,  4618,  4620,  4623,  4629,  4636,  4643,
    4646,  4648,  4651,  4654,  4660,  4667
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     357,     0,    -1,    98,   359,    -1,    44,   391,    -1,    41,
      67,     5,    -1,    41,    67,   143,    -1,    47,   396,    -1,
      60,    -1,    65,    -1,    66,   398,    -1,    68,   287,     5,
      -1,    69,   403,    -1,    70,   405,    -1,    78,   406,    -1,
      85,   415,    -1,    87,   417,    -1,    88,   418,    -1,    97,
     360,    -1,   127,   420,    -1,   140,   421,    -1,   144,   463,
      -1,   147,   466,    -1,   151,    -1,   152,   360,    -1,   158,
     472,    -1,   164,    16,     4,    -1,   178,   475,    -1,   181,
     493,    -1,   182,   494,    -1,   183,   495,    -1,   186,   511,
     496,    -1,   187,   530,    -1,   200,    67,     5,    -1,   217,
     531,    -1,   218,   532,    -1,   219,   535,    -1,   240,    89,
      -1,   233,   537,    -1,   231,   536,    -1,   247,    -1,   244,
     511,   539,    -1,   249,   544,    -1,   251,   545,    -1,   256,
     547,    -1,   269,    -1,   275,   562,    -1,   290,     4,    -1,
     291,   386,    -1,   302,    -1,   304,   564,    -1,   310,    -1,
     313,   566,    -1,   314,   567,    -1,   344,   571,    -1,   351,
     572,    -1,     3,    -1,     4,    -1,   214,    -1,   213,    -1,
     195,   360,    -1,   220,   360,    -1,   222,   360,    -1,   314,
     360,    -1,    44,   360,    -1,    47,   360,    -1,    77,   360,
      -1,    85,   360,    -1,   145,   360,    -1,   249,   360,    -1,
       4,    -1,   347,    -1,   352,    -1,   214,    -1,   298,    -1,
     205,    -1,   353,    -1,   213,    -1,   121,    -1,    -1,   250,
      38,    -1,   136,    38,    -1,   250,    -1,   136,    -1,    -1,
     363,    -1,   358,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   364,   364,    -1,   365,   366,    -1,
     366,   366,    -1,   358,   358,    -1,   159,    -1,   224,    -1,
     103,    -1,    19,    -1,   369,    -1,   314,    -1,   315,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,
     331,    -1,   332,    -1,   333,    -1,   334,    -1,   335,    -1,
     336,    -1,   337,    -1,   338,    -1,   339,    -1,   340,    -1,
     341,    -1,    57,    -1,   219,    -1,    -1,   348,    -1,   208,
      -1,   200,    -1,   207,    -1,   243,    -1,    -1,   278,    -1,
      92,    -1,   172,    -1,   176,    -1,   180,    -1,   232,    -1,
     279,    -1,   280,    -1,    28,    -1,   271,    -1,   153,    -1,
      30,    -1,   258,    -1,   253,    -1,    96,    -1,   165,    -1,
      -1,   129,    -1,    35,    -1,   130,    -1,   166,    -1,   156,
      -1,   138,    -1,   108,    -1,    -1,    99,    -1,   264,    -1,
      -1,    99,    -1,    24,    -1,    25,    -1,    -1,   268,    -1,
     167,    -1,    -1,    17,    -1,   161,    -1,    -1,   159,    -1,
     187,    -1,    -1,    63,    -1,    49,    -1,   104,    -1,    86,
      -1,   354,    -1,    27,    -1,    52,    -1,    -1,     4,    -1,
      83,    -1,   154,    -1,   226,    -1,   227,    -1,   241,    -1,
     282,    -1,    -1,    32,    -1,   284,    -1,    -1,   201,    -1,
      42,    -1,    43,    -1,   173,    -1,   174,    -1,   308,   390,
      -1,    48,   387,    -1,    75,   388,    -1,   152,   389,    -1,
     189,   542,    -1,    37,   543,    -1,   257,   358,    -1,   292,
     358,    -1,   360,    -1,    67,     5,    -1,   360,    -1,    67,
       5,    -1,   360,    -1,    67,     5,    -1,   358,   358,    -1,
     228,   358,   358,   358,   358,   358,    -1,    12,   392,    -1,
      72,     5,     5,     5,    -1,   102,     4,    -1,   120,   393,
      -1,   137,   394,    -1,    54,   272,     4,    -1,   295,   395,
      -1,   124,     5,    -1,    60,    -1,   358,   358,    -1,   358,
      -1,   358,   358,    -1,   358,    12,   358,   358,    -1,   358,
     358,    12,   358,   358,    -1,   295,   358,    -1,   295,   358,
     358,    -1,   295,   358,    12,   358,   358,    -1,   295,   358,
     358,    12,   358,   358,    -1,    32,    -1,   284,    -1,   125,
      -1,   358,   358,    12,    60,     5,     5,     5,    -1,   358,
     358,     4,   358,   358,    12,    60,     5,     5,     5,     5,
      -1,   358,   358,    12,   358,   358,     5,     5,     5,    -1,
     358,   358,     4,   358,   358,    12,   358,   358,     5,     5,
       5,     5,    -1,   358,    -1,   358,   358,    -1,   295,   397,
      -1,   125,    -1,   358,    -1,   358,   358,    -1,   260,   399,
      -1,   196,   400,    -1,   190,   401,    -1,   305,   358,   358,
      -1,   305,   200,   200,    -1,   350,   402,    -1,   235,   360,
      -1,   141,    -1,   179,    -1,   358,    -1,   190,    -1,   350,
      -1,   349,    -1,   305,    -1,     4,   374,    -1,   196,   374,
      -1,   253,     4,    -1,   358,     4,     4,    -1,    79,   358,
      -1,   253,     4,    -1,   175,     4,    -1,     4,   358,   358,
       4,     6,     4,    -1,   249,   358,   358,   358,   358,   358,
     358,     4,     6,     4,    -1,    40,    -1,   197,   404,    -1,
     113,    -1,     4,   358,   358,     4,     6,     4,    -1,   249,
     358,   358,   358,   358,   358,   358,     4,     6,     4,    -1,
     373,    -1,   180,   358,    -1,    84,   407,    -1,   101,   408,
      -1,   178,   409,    -1,   221,   413,    -1,   256,   414,    -1,
       5,     4,     4,   412,     4,     4,   373,   358,   410,   411,
     358,   358,     5,    -1,     5,     4,     4,   412,     4,     4,
     373,   358,   358,   411,   358,   358,     5,    -1,     5,     4,
       4,   412,     4,     4,   373,   358,   410,   358,   358,     5,
      -1,     5,     4,     4,   412,     4,     4,   373,   358,   358,
     358,   358,     5,    -1,   230,    -1,    -1,    31,    -1,     5,
      -1,     5,     5,     4,   360,    -1,     5,     4,   360,     5,
     368,   375,    -1,   190,    -1,   350,    -1,   349,    -1,   305,
      -1,   141,    -1,   179,    -1,   275,    -1,    47,    -1,     5,
      -1,     5,     5,     4,   360,    -1,     5,   368,   375,    -1,
      31,     5,   368,   375,    -1,    -1,   358,   358,   358,   358,
     368,   375,    -1,    60,   367,   368,   375,   358,   358,   368,
     377,    -1,   291,   416,    -1,    40,   358,   358,    -1,   197,
     358,   358,    -1,   113,   358,   358,    -1,    -1,   358,   358,
     368,   375,    -1,    40,   358,   358,     4,    -1,   197,   358,
     358,     4,    -1,   113,   358,   358,     4,    -1,   370,   358,
     358,    -1,   368,   375,   367,    -1,   360,    -1,   313,   358,
     358,    -1,    40,   197,   370,   358,   358,    -1,   197,   370,
     358,   358,    -1,    40,   197,   368,   367,    -1,   197,   368,
     367,    -1,    33,     4,    -1,    -1,    32,    -1,   284,    -1,
     147,   119,     5,    -1,    41,    67,    -1,    44,   422,    -1,
      47,   424,    -1,    66,   425,    -1,    69,   429,    -1,    68,
     428,    -1,    70,   431,    -1,    78,   433,    -1,    80,   436,
      -1,    85,   437,    -1,    87,   438,    -1,    89,   440,    -1,
      88,   439,    -1,    95,   441,    -1,    97,    -1,   126,   445,
      -1,   144,   451,    -1,   154,     5,     5,     4,    -1,   155,
      90,     5,     5,   358,   358,   370,     4,   419,    -1,   158,
     443,    -1,   162,   442,    -1,   164,    16,    -1,   190,    -1,
     186,   511,   505,    -1,   187,   452,    -1,   200,    67,    -1,
     217,    -1,   218,   453,    -1,   225,   286,   370,   358,   358,
       4,     4,     5,    -1,   249,   454,    -1,   251,    -1,   275,
     455,    -1,   290,    -1,   291,   456,    -1,   299,    -1,   306,
     370,   358,   358,    -1,   312,    90,     5,     5,   358,   358,
     370,     4,   419,    -1,   314,   461,    -1,   351,    -1,   102,
      -1,   120,    -1,   137,    -1,    54,   272,    -1,    89,    -1,
     124,    -1,    72,   423,    -1,   177,    -1,    -1,   190,     5,
      -1,   105,     5,    -1,   120,    -1,    -1,   410,   411,    -1,
     358,   411,    -1,   260,    -1,   196,    -1,   190,   426,    -1,
     305,   171,    -1,   350,   427,    -1,   235,    -1,   196,    -1,
     253,    -1,    79,    -1,   253,    -1,   175,    -1,    -1,   287,
      -1,   171,   430,    -1,     4,    -1,     4,   370,   358,   358,
      -1,     4,   358,   358,   373,   358,    -1,    -1,   171,   432,
      -1,   180,    -1,     4,   358,   358,   373,   358,    -1,   368,
     375,    -1,    66,   434,    -1,    67,    -1,    93,    -1,   171,
      -1,   211,   171,    -1,   189,    -1,    70,   435,    -1,   275,
      -1,   343,    -1,    -1,   196,    -1,   260,    -1,    -1,   180,
      -1,   358,   358,   368,   375,   376,    -1,   370,   358,   358,
     368,   375,   376,    -1,   368,   375,   376,    -1,    60,   368,
     375,   376,   368,   377,    -1,   291,   368,   375,    -1,   370,
      -1,   368,   375,   376,    -1,   283,    -1,    33,    -1,   370,
      -1,   368,   375,   376,    -1,   368,   375,   367,   358,   358,
       5,    -1,     4,   368,   375,   367,   358,   358,     5,    -1,
     370,   358,   358,     4,     4,    -1,     5,    -1,    66,    -1,
     370,   358,   358,     5,    -1,     6,     4,     4,     4,     4,
      -1,    89,    -1,   122,   199,   444,    -1,    -1,     4,    -1,
     358,   358,    -1,   202,    -1,    60,   368,   375,   376,    -1,
      82,    -1,   102,   448,    -1,    45,    -1,   119,   446,    -1,
     122,   199,   449,    -1,   149,   447,    -1,   150,    -1,   212,
     199,    -1,   272,    -1,   272,   368,   375,   377,    -1,   273,
     450,    -1,   343,    -1,     4,    -1,   370,   358,   358,    -1,
       4,    -1,   168,     5,    -1,     4,   168,     5,    -1,   314,
       4,    -1,    -1,     4,    -1,   361,    -1,   361,   370,   358,
     358,    -1,   361,     4,    -1,    -1,     4,    -1,   134,   159,
     368,    -1,   134,   159,     4,   368,    -1,   295,   159,   358,
     368,    -1,    -1,   216,    -1,   307,    -1,    67,    -1,   185,
      -1,   243,    -1,   285,    -1,   294,    -1,    82,    -1,    46,
      -1,   235,    -1,    62,    -1,   285,    -1,   308,    -1,   137,
      -1,   242,    -1,   242,   191,    -1,   270,    -1,   270,   191,
      -1,    21,    -1,   308,   460,    -1,    48,   457,    -1,    75,
     458,    -1,   152,   459,    -1,   189,    -1,    37,    -1,   257,
      -1,    -1,    67,    -1,    -1,    67,    -1,    -1,    67,    -1,
      -1,   228,    -1,    -1,    16,   462,    -1,   199,   369,    -1,
      -1,   229,    -1,    84,   464,    -1,   101,    -1,   368,   375,
     376,   465,     5,     5,    -1,   368,   375,   376,   465,     5,
      -1,    20,    -1,   238,    -1,    19,    -1,    44,   467,    -1,
      78,   468,    -1,    85,    -1,    96,    -1,    97,    -1,   103,
      -1,   126,   469,    -1,   144,    -1,   158,    -1,   165,    -1,
     186,   470,    -1,   224,    -1,   159,    -1,   275,    -1,   285,
     368,    -1,   314,   471,    -1,    73,     5,    -1,    -1,    31,
      -1,    -1,    44,    -1,    88,    -1,   195,    -1,   152,    -1,
     262,    -1,   221,    -1,   300,    -1,   368,    -1,    59,   368,
      -1,   117,   368,    -1,   176,   368,    -1,    18,    -1,   291,
     368,    -1,   203,     4,     4,    -1,   118,    -1,   188,     5,
      -1,    89,   474,    -1,   263,   122,   199,   473,    -1,   263,
       6,     4,     4,     4,     4,    -1,   304,    -1,   314,   358,
     358,   358,   358,   358,   358,   358,   358,     4,    -1,     5,
      -1,     5,     4,    -1,     4,     4,    57,    -1,     4,     4,
     368,    -1,   196,   360,    -1,    26,   476,    -1,   114,   478,
      -1,   126,   479,    -1,   161,   492,    -1,   210,   490,    -1,
     223,   491,    -1,     5,    14,     5,   380,    -1,     5,    15,
       5,   380,    -1,     5,    62,     5,   380,    -1,     5,   193,
     380,    -1,     5,   194,   380,    -1,     5,   266,   378,     4,
     380,    -1,     5,   276,     4,   380,    -1,     5,   277,     4,
     380,    -1,     5,   307,     5,   380,    -1,   249,    88,   477,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   193,    -1,     5,   194,    -1,     5,
     266,   378,     4,    -1,     5,   276,     4,    -1,     5,   277,
       4,    -1,     5,   307,     5,    -1,     5,     5,   274,    -1,
       5,    14,     5,   380,    -1,     5,    15,     5,   380,    -1,
       5,    62,     5,   380,    -1,     5,   193,   379,   380,    -1,
       5,     5,   274,   379,   380,    -1,     5,   194,   379,   380,
      -1,     5,   266,   378,     4,   379,   380,    -1,     5,   281,
     378,     4,     4,   379,   380,    -1,     5,   276,     4,   380,
      -1,     5,   277,     4,   380,    -1,     5,   307,     5,   379,
     380,    -1,   273,   480,    -1,   119,    88,   481,    -1,   249,
     159,   489,    -1,   249,    88,   488,    -1,   195,   482,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    62,
       5,    -1,     5,   193,   379,    -1,     5,     5,   274,   379,
      -1,     5,   194,   379,    -1,     5,   266,   378,     4,   379,
      -1,     5,   281,   378,     4,     4,   379,    -1,     5,   276,
       4,    -1,     5,   277,     4,    -1,     5,   307,     5,   379,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      62,     5,    -1,     5,   193,   379,    -1,     5,   194,   379,
      -1,     5,   266,   378,     4,   379,    -1,     5,   276,     4,
      -1,     5,   277,     4,    -1,     5,   307,     5,   379,    -1,
     159,   164,   483,    -1,   164,   484,    -1,   159,   485,    -1,
     487,    -1,   159,   342,   486,    -1,     5,    14,     5,   380,
      -1,     5,    15,     5,   380,    -1,     5,    62,     5,   380,
      -1,     5,   193,   379,   380,    -1,     5,   194,   379,   380,
      -1,     5,   266,   378,     4,   379,   380,    -1,     5,   276,
       4,   380,    -1,     5,   277,     4,   380,    -1,     5,   307,
       5,   379,   380,    -1,     5,    14,     5,   380,    -1,     5,
      15,     5,   380,    -1,     5,    62,     5,   380,    -1,     5,
     193,   379,   380,    -1,     5,     5,   274,   379,   380,    -1,
       5,   194,   379,   380,    -1,     5,   266,   378,     4,   379,
     380,    -1,     5,   281,   378,     4,     4,   379,   380,    -1,
       5,   276,     4,   380,    -1,     5,   277,     4,   380,    -1,
       5,   307,     5,   379,   380,    -1,   369,     5,    14,     5,
     380,    -1,   369,     5,    15,     5,   380,    -1,   369,     5,
      62,     5,   380,    -1,   369,     5,   193,   379,   380,    -1,
     369,     5,   194,   379,   380,    -1,   369,     5,   266,   378,
       4,   379,   380,    -1,   369,     5,   276,     4,   380,    -1,
     369,     5,   277,     4,   380,    -1,   369,     5,   307,     5,
     379,   380,    -1,     5,    14,     5,   380,    -1,     5,    15,
       5,   380,    -1,     5,    62,     5,   380,    -1,     5,   193,
     379,   380,    -1,     5,   194,   379,   380,    -1,     5,   266,
     378,     4,   379,   380,    -1,     5,   276,     4,   380,    -1,
       5,   277,     4,   380,    -1,     5,   307,     5,   379,   380,
      -1,   369,     5,    14,     5,   380,    -1,   369,     5,    15,
       5,   380,    -1,   369,     5,    62,     5,   380,    -1,   369,
       5,   193,   379,   380,    -1,   369,     5,     5,   274,   379,
     380,    -1,   369,     5,   194,   379,   380,    -1,   369,     5,
     266,   378,     4,   379,   380,    -1,   369,     5,   281,   378,
       4,     4,   379,   380,    -1,   369,     5,   276,     4,   380,
      -1,   369,     5,   277,     4,   380,    -1,   369,     5,   307,
       5,   379,   380,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    62,     5,    -1,     5,   193,   379,    -1,
       5,     5,   274,   379,    -1,     5,   194,   379,    -1,     5,
     266,   378,     4,   379,    -1,     5,   281,   378,     4,     4,
     379,    -1,     5,   276,     4,    -1,     5,   277,     4,    -1,
       5,   307,     5,   379,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    62,     5,    -1,     5,   193,   379,
      -1,     5,   194,   379,    -1,     5,   266,   378,     4,   379,
      -1,     5,   276,     4,    -1,     5,   277,     4,    -1,     5,
     307,     5,   379,    -1,     5,    14,     5,   380,    -1,     5,
      62,     5,   380,    -1,     5,   193,   380,    -1,     5,   266,
     378,     4,   380,    -1,     5,   276,     4,   380,    -1,     5,
     307,     5,   380,    -1,     5,     5,    -1,   273,     5,     5,
      -1,    95,     4,     4,     4,     4,     4,    -1,   190,     4,
       4,     4,     4,     4,    -1,   113,    -1,   234,    -1,   360,
      -1,   142,   360,    -1,    89,   360,    -1,    67,     5,    -1,
       5,     4,     4,    -1,   304,   358,   358,    -1,   351,   358,
      -1,     5,     5,   369,   375,     5,     5,   369,   375,   358,
     369,   377,     5,    -1,    61,   499,    -1,    67,     5,    -1,
      81,    -1,    74,   504,     5,    -1,    74,   504,   307,     5,
      -1,    76,   101,    -1,    -1,    84,   497,   500,    -1,    90,
      -1,   101,    -1,   101,    17,    -1,   107,   503,    -1,   116,
       4,    -1,   131,     5,    -1,   152,    17,    -1,   152,   215,
     358,   358,    -1,   152,   296,   358,   358,    -1,     4,    20,
     383,   360,    -1,     4,    21,   363,    -1,     4,    21,   363,
     370,    -1,     4,    21,   363,   368,   375,    -1,     4,    22,
     242,   358,   358,     4,   368,   377,    -1,     4,    22,   242,
       5,   368,   377,    -1,     4,    49,   123,   360,    -1,     4,
      50,   242,   358,   358,   358,     4,   368,   377,    -1,     4,
      50,   242,     5,   368,   377,    -1,     4,    49,   242,   358,
     358,   368,   377,    -1,     4,    53,   107,   363,   363,     4,
     358,   358,   358,     4,    -1,     4,    53,   107,   363,   363,
       4,   358,   358,   358,     4,   370,    -1,     4,    53,   107,
     363,   363,     4,   358,   358,   358,     4,   368,   375,    -1,
       4,    53,   107,     5,     5,   368,   375,   368,   377,    -1,
       4,    56,   498,     5,     5,    -1,     4,    63,   123,   360,
      -1,     4,    63,   242,   358,   368,   377,    -1,     4,    67,
       5,    -1,     4,    75,    27,   360,   360,    -1,     4,    75,
     169,     5,     5,    -1,     4,    75,   242,   358,   368,   377,
      -1,     4,    75,   285,   368,   375,    -1,     4,    76,   141,
     360,    -1,     4,    83,   107,   363,   363,     4,   358,   358,
       4,    -1,     4,    83,   107,   363,   363,     4,   358,   358,
       4,   370,    -1,     4,    83,   107,   363,   363,     4,   358,
     358,     4,   368,   375,    -1,     4,    83,   107,     5,     5,
     368,   375,   368,   377,    -1,     4,    84,    22,   242,   358,
     358,    -1,     4,    84,    50,   242,   358,   358,    -1,     4,
      84,    53,    21,   358,   358,    -1,     4,    84,    53,   242,
     358,   358,    -1,     4,    84,   112,   242,   358,   358,    -1,
       4,    84,   115,    21,   358,   358,    -1,     4,    84,   115,
     242,   358,   358,    -1,     4,    84,    83,    21,   358,   358,
      -1,     4,    84,    83,   242,   358,   358,    -1,     4,    84,
     230,   311,     4,   358,   358,    -1,     4,    84,   261,   311,
       4,   358,   358,    -1,     4,   101,    -1,     4,   101,    22,
       4,    -1,     4,   101,    50,     4,    -1,     4,   101,    53,
       4,    -1,     4,   101,   112,     4,    -1,     4,   101,    56,
     498,     5,    -1,     4,   101,   115,     4,    -1,     4,   101,
      83,     4,    -1,     4,   101,   230,   311,     4,    -1,     4,
     101,   261,   311,     4,    -1,     4,   101,   287,    -1,     4,
     101,   287,     5,    -1,     4,   101,   287,     4,    -1,     4,
     107,    40,     4,    -1,     4,   111,   123,   360,    -1,     4,
     111,   242,   358,   358,   368,   377,    -1,     4,   112,   242,
     358,   358,   358,     4,   368,   377,    -1,     4,   112,   242,
       5,   368,   377,    -1,     4,   115,   107,   363,   363,     4,
     358,   358,   358,     4,    -1,     4,   115,   107,   363,   363,
       4,   358,   358,   358,     4,   370,    -1,     4,   115,   107,
     363,   363,     4,   358,   358,   358,     4,   368,   375,    -1,
       4,   115,   107,     5,     5,   368,   375,   368,   377,    -1,
       4,   131,     5,    -1,     4,   152,    -1,     4,   152,   215,
      -1,     4,   175,    27,   360,   360,    -1,     4,   175,   228,
     368,   375,   367,   367,    -1,     4,   198,   358,   358,    -1,
       4,   198,   135,    -1,     4,   198,    36,    -1,     4,   198,
     295,   368,   375,   367,    -1,     4,   230,   247,   358,   358,
     368,   377,    -1,     4,   261,   247,   358,   358,   368,   377,
      -1,     4,   228,   265,   381,    -1,     4,   228,   272,     4,
      -1,     4,   230,   123,   360,    -1,     4,   236,   368,   375,
     367,   367,   358,   368,   377,    -1,     4,   237,   517,   360,
      -1,     4,   251,    40,    -1,     4,   252,   132,     5,    -1,
       4,   252,   228,   368,   375,   367,   367,    -1,     4,   252,
     285,   368,   375,   368,   377,    -1,     4,   262,    -1,     4,
     262,   215,    -1,     4,   287,     5,    -1,     4,   289,     5,
      -1,     4,   289,   251,   360,    -1,     4,   301,    -1,     4,
     303,    -1,     4,   309,    27,   360,    -1,     4,   309,   228,
     368,   375,   367,   368,   377,   358,   363,    -1,     4,   343,
       4,    -1,   167,    -1,   167,   358,   358,    -1,   177,   512,
      -1,   178,   513,    -1,   198,   514,    -1,   235,   360,    -1,
     237,   517,   360,    -1,   237,   517,   360,   358,   358,    -1,
     251,    40,   358,   358,    -1,   251,   197,   358,   358,     4,
      -1,   251,   113,    -1,   256,     5,   504,   368,   375,   376,
     360,    -1,   256,   288,     5,    -1,   262,   521,    -1,   269,
     522,    -1,     5,    67,     5,    -1,     5,    81,    -1,     5,
     101,    -1,     5,    90,    -1,     5,   131,     5,    -1,     5,
     152,    -1,     5,   152,   215,    -1,     5,   198,   358,   358,
      -1,     5,   198,   135,    -1,     5,   198,    36,    -1,     5,
     198,   295,   368,   375,   367,    -1,     5,   237,   517,   360,
      -1,     5,   262,    -1,     5,   262,   215,    -1,     5,   301,
      -1,     5,   303,    -1,   287,   107,     5,     5,    -1,   287,
     101,     5,    -1,   287,   101,    17,    -1,   287,     5,    -1,
     287,   304,     5,    -1,   221,    -1,   221,   368,    -1,   300,
      -1,   301,    17,    -1,   303,    17,    -1,   343,     4,    -1,
     262,    -1,   303,    -1,   152,    -1,   301,    -1,    40,   198,
      -1,   198,    -1,   113,   198,    -1,    40,   107,    -1,   107,
      -1,   113,   107,    -1,    40,   251,    -1,   251,    -1,   113,
     251,    -1,   101,    -1,   289,    -1,    67,    -1,   343,    -1,
     237,    -1,   131,    -1,   167,    -1,   304,    -1,    -1,     4,
      -1,    30,   360,    -1,   242,   358,    -1,   163,     4,    -1,
     216,     4,   358,    -1,    63,   358,   358,   358,   518,    -1,
     111,   358,   358,   358,   358,   362,   518,    -1,    49,   358,
     358,   358,   358,   362,   518,    -1,   230,   358,   358,   358,
     358,   518,    -1,   261,   358,   358,   358,   358,   518,    -1,
     175,   358,   358,   358,   358,   518,    -1,   309,   358,   358,
     358,   358,   518,    -1,   289,   358,   358,   362,   518,    -1,
      63,   228,   358,   358,   382,   518,    -1,    49,   228,   358,
     358,   382,   518,    -1,   104,   228,   358,   358,   382,   518,
      -1,    86,   228,   358,   358,   382,   518,    -1,   354,   228,
     358,   358,   382,   518,    -1,    27,   228,   358,   358,   382,
     518,    -1,    52,   228,   358,   358,   382,   518,    -1,   252,
     358,   358,   358,   358,   368,   375,   368,   377,     5,   518,
      -1,    75,   358,   358,   358,   368,   375,   518,    -1,   236,
     358,   358,   358,   358,   358,   518,    -1,    22,   358,   358,
     358,   358,     4,   518,    -1,   112,   358,   358,   358,   358,
     358,     4,   362,   518,    -1,    50,   358,   358,   358,   358,
     358,     4,   362,   518,    -1,    83,   358,   358,   363,   363,
       4,   358,   358,     4,   518,    -1,   115,   358,   358,   363,
     363,     4,   358,   358,   358,     4,   362,   518,    -1,    53,
     358,   358,   363,   363,     4,   358,   358,   358,     4,   362,
     518,    -1,    76,   518,    -1,   288,   501,    -1,     5,   358,
     358,    -1,   307,     5,   358,   358,    -1,   358,   358,   307,
       5,    -1,     5,   368,   375,   367,    -1,     4,     4,    -1,
      40,   358,   358,     4,    -1,   197,   358,   358,     4,    -1,
     113,    -1,   106,    -1,   345,    -1,    64,    -1,   255,    -1,
     254,    -1,   239,    -1,   346,    -1,    61,   506,    -1,    67,
      -1,   131,    -1,   116,    -1,   146,   358,   358,    -1,   157,
     358,   358,    -1,     4,    20,    83,     5,     5,     5,   368,
       4,    -1,     4,    20,   154,     5,     5,     4,    -1,     4,
      20,   226,     5,     5,     5,     5,   368,   375,   384,    -1,
       4,    20,   227,     5,     5,   368,   384,    -1,     4,    20,
     241,     5,     5,     5,   368,    -1,     4,    20,   282,   368,
     375,    -1,   157,    17,    -1,     4,    21,    -1,     4,    21,
     370,    -1,     4,    21,   368,   375,    -1,     4,    22,   242,
     368,   377,    -1,     4,    49,   123,    -1,     4,    50,   242,
     368,   377,    -1,     4,    49,   242,   368,   377,    -1,     4,
      53,    21,    -1,     4,    53,    21,   370,    -1,     4,    53,
      21,   368,   375,    -1,     4,    53,   242,   368,   377,    -1,
       4,    60,   368,   375,   376,    -1,     4,    63,   123,    -1,
       4,    63,   242,   368,   377,    -1,     4,    67,    -1,     4,
      75,    27,    -1,     4,    75,   169,    -1,     4,    75,   242,
     368,   377,    -1,     4,    75,   285,    -1,     4,    76,   141,
      -1,     4,    83,    21,    -1,     4,    83,    21,   370,    -1,
       4,    83,    21,   368,   375,    -1,     4,    83,   242,   368,
     377,    -1,     4,   111,   123,    -1,     4,   111,   242,   368,
     377,    -1,     4,   112,   242,   368,   377,    -1,     4,   115,
      21,    -1,     4,   115,    21,   370,    -1,     4,   115,    21,
     368,   375,    -1,     4,   115,   242,   368,   377,    -1,     4,
     131,    -1,     4,   152,    -1,     4,   175,    27,    -1,     4,
     175,   170,   368,   377,    -1,     4,   175,   228,   368,   375,
     376,    -1,     4,   184,   170,   358,   368,   377,    -1,     4,
     230,   123,    -1,     4,   228,   265,    -1,     4,   228,   272,
      -1,     4,   236,   228,   368,   375,   376,    -1,     4,   236,
     170,   368,   377,    -1,     4,   236,   293,   368,   377,    -1,
       4,   237,    -1,     4,   237,   517,    -1,     4,   252,   132,
      -1,     4,   252,   170,   368,   377,    -1,     4,   252,   228,
     368,   375,   376,    -1,     4,   252,   285,    -1,     4,   262,
      -1,     4,   287,    -1,     4,   287,     4,    -1,     4,   289,
      -1,     4,   289,   251,    -1,     4,   299,    -1,     4,   309,
      27,    -1,     4,   309,   170,   368,   377,    -1,     4,   309,
     228,   368,   375,   376,    -1,     4,   343,    -1,   152,   507,
      -1,   152,   211,    -1,   211,    -1,   230,   261,   358,   358,
      -1,   261,   261,   358,   358,    -1,   235,    -1,   237,   517,
      -1,   262,   508,    -1,   262,   211,    -1,   269,   509,    -1,
       5,    67,    -1,     5,   131,    -1,     5,   157,    -1,     5,
     237,   517,    -1,     5,   287,    -1,     5,   287,   211,    -1,
     287,    17,    -1,   287,   100,   199,    -1,   343,    -1,    30,
      -1,   242,    -1,   163,    -1,   216,    -1,    -1,   358,   358,
      -1,    -1,   358,   358,    -1,    -1,   289,    -1,    -1,    -1,
     229,    -1,   244,    -1,   305,    -1,    58,    -1,   133,    -1,
     504,   368,   375,   376,   360,   519,   525,    -1,   262,   504,
     368,   375,   376,   360,   519,   525,    -1,   504,     5,    -1,
     504,     5,   368,   375,    -1,   504,     4,    -1,   504,     4,
     368,   375,    -1,   126,     5,     5,   502,     4,     5,    -1,
     358,   358,    -1,   135,    -1,    36,    -1,    40,   358,   358,
      -1,   197,   358,   358,    -1,   113,    -1,   295,   368,   375,
     367,    -1,   515,   516,    -1,   516,    -1,   517,   355,   360,
      -1,    67,   355,     5,    -1,    94,   355,     4,     4,    -1,
     343,   355,     4,    -1,   131,   355,     5,    -1,   289,   355,
       5,    -1,   528,    -1,   529,    -1,   206,    -1,   262,    -1,
     152,    -1,    93,    -1,   128,    -1,   107,    -1,   198,    -1,
     251,    -1,   101,    -1,   160,    -1,   278,    -1,   510,    -1,
     510,   515,    -1,    -1,    -1,   520,   523,    -1,    17,    -1,
     215,   358,   358,    -1,   296,    -1,   296,   358,   358,    -1,
     360,    -1,   289,   360,    -1,   523,   524,    -1,   524,    -1,
     517,   355,   360,    -1,    -1,    -1,   526,   527,    -1,   527,
     528,    -1,   528,    -1,   287,   355,     5,    -1,    56,   355,
     498,     5,     5,    -1,    65,    -1,    67,     5,    -1,   185,
     371,    -1,   243,   358,   358,    -1,   285,   368,    -1,   294,
     358,    -1,    46,   372,    -1,   185,     4,    -1,   354,    -1,
     352,    -1,   346,    -1,   206,    -1,   358,   358,   358,   358,
      -1,   358,   358,    -1,   370,   358,   358,    -1,   368,   375,
     367,    -1,   295,   533,    -1,    39,   358,   358,    -1,   197,
     534,    -1,   235,   360,    -1,   358,   358,    -1,   370,   358,
     358,    -1,   368,   375,   367,    -1,    40,   358,   358,    -1,
     358,   358,    -1,   113,   358,   358,    -1,   360,    -1,   314,
     369,   375,    -1,     5,     4,     4,    -1,   304,    -1,    71,
     538,    -1,   171,     4,    -1,   248,     4,    -1,   257,   358,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    55,    -1,
     143,    -1,   249,    -1,    91,    -1,   152,   540,    -1,   262,
     541,    -1,    40,   358,   358,    -1,   197,   358,   358,    -1,
     113,    -1,   267,   113,    -1,    40,   358,   358,    -1,   197,
     358,   358,    -1,   113,    -1,   267,   113,    -1,   192,    -1,
      13,    -1,   206,    -1,    34,    -1,   109,    -1,    62,     5,
      -1,   285,   368,    -1,   308,     4,     4,     4,    -1,   358,
      -1,   358,    99,    -1,   197,   546,    -1,   295,   358,    -1,
     295,   358,    99,    -1,    40,    -1,   358,    -1,   113,    -1,
      26,   548,    -1,   126,   550,    -1,   210,   560,    -1,   114,
     561,    -1,   223,     5,    -1,   122,     5,   385,    -1,    62,
       5,   385,    -1,   276,     4,   385,    -1,   249,    88,   549,
      -1,   122,     5,   385,    -1,    62,     5,   385,    -1,   276,
       4,   385,    -1,   551,    -1,   159,   551,    -1,   286,   552,
      -1,   273,   553,    -1,   119,    88,   554,    -1,   195,   555,
      -1,   249,   159,   557,    -1,   249,    88,   558,    -1,   246,
     559,    -1,   122,     5,    -1,    62,     5,    -1,   276,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   276,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   276,     4,    -1,   122,
       5,    -1,    62,     5,    -1,   276,     4,    -1,   159,   556,
      -1,   122,     5,     4,    -1,    62,     5,     4,    -1,   276,
       4,     4,    -1,   122,     5,    -1,    62,     5,    -1,   276,
       4,    -1,   122,     5,    -1,    62,     5,    -1,   276,     4,
      -1,   122,     5,    -1,    62,     5,    -1,   276,     4,    -1,
     122,     5,    -1,    62,     5,    -1,   276,     4,    -1,   122,
       5,   385,    -1,    62,     5,   385,    -1,   276,     4,   385,
      -1,   122,     5,     5,   385,    -1,   563,     4,     4,   358,
     358,   363,    -1,   563,     4,    -1,   101,    -1,    51,    -1,
     297,    -1,   139,    -1,   110,    -1,    -1,     4,   358,   358,
     358,   358,    -1,   209,    -1,   209,     4,   358,   358,   358,
     358,    -1,   126,   273,   565,    -1,     4,    -1,     4,     4,
      -1,   358,   368,    -1,   358,   358,    -1,   295,   358,   358,
      -1,   369,   375,   376,    -1,    16,   570,    -1,   247,     4,
      -1,   245,   569,    -1,    23,   568,    -1,     4,     4,    -1,
       4,     5,    -1,   289,     4,     5,    -1,     4,     4,    -1,
       4,     5,    -1,   289,     4,     5,    -1,     4,    -1,     4,
     369,   375,    -1,     4,     6,   369,   375,    -1,   234,    -1,
     358,   358,    -1,   358,   358,    12,   358,   358,    -1,   358,
     358,    12,   370,   358,   358,    -1,   358,   358,    12,   368,
     375,   367,    -1,   295,   573,    -1,   125,    -1,   125,   358,
      -1,   358,   358,    -1,   358,   358,    12,   358,   358,    -1,
     358,   358,    12,   370,   358,   358,    -1,   358,   358,    12,
     368,   375,   367,    -1
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
     648,   649,   650,   651,   652,   653,   656,   657,   658,   659,
     662,   663,   664,   665,   666,   667,   668,   669,   672,   673,
     674,   675,   676,   679,   680,   681,   682,   683,   684,   685,
     686,   689,   690,   691,   694,   695,   696,   697,   700,   701,
     702,   705,   706,   707,   710,   711,   712,   715,   716,   717,
     718,   719,   720,   721,   722,   725,   726,   729,   730,   731,
     732,   733,   734,   737,   738,   739,   742,   743,   744,   745,
     746,   747,   750,   751,   752,   753,   754,   755,   756,   757,
     761,   762,   765,   766,   769,   770,   773,   774,   778,   779,
     780,   781,   782,   783,   784,   785,   788,   789,   792,   793,
     794,   796,   798,   799,   800,   802,   806,   807,   810,   811,
     813,   816,   818,   824,   825,   826,   829,   830,   831,   834,
     835,   836,   837,   838,   839,   840,   846,   847,   850,   851,
     852,   853,   854,   857,   858,   859,   862,   863,   868,   873,
     880,   882,   884,   885,   886,   889,   891,   894,   895,   898,
     899,   900,   901,   902,   905,   907,   909,   914,   919,   922,
     923,   926,   927,   928,   935,   936,   937,   938,   941,   942,
     945,   946,   949,   950,   953,   955,   959,   960,   963,   965,
     966,   967,   968,   971,   972,   974,   975,   976,   979,   981,
     983,   984,   986,   988,   990,   992,   996,   999,  1000,  1001,
    1004,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,  1025,
    1027,  1028,  1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,
    1038,  1039,  1040,  1041,  1042,  1043,  1044,  1046,  1048,  1049,
    1052,  1053,  1054,  1055,  1056,  1057,  1058,  1059,  1062,  1063,
    1064,  1067,  1070,  1071,  1073,  1075,  1076,  1077,  1078,  1079,
    1080,  1087,  1088,  1091,  1092,  1093,  1096,  1097,  1100,  1103,
    1104,  1106,  1110,  1111,  1112,  1115,  1119,  1121,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1129,  1132,  1133,  1134,  1137,
    1138,  1141,  1143,  1151,  1153,  1155,  1159,  1160,  1162,  1165,
    1168,  1169,  1173,  1175,  1178,  1183,  1184,  1185,  1189,  1190,
    1191,  1194,  1195,  1196,  1199,  1200,  1202,  1203,  1204,  1205,
    1206,  1207,  1208,  1209,  1210,  1211,  1213,  1214,  1217,  1218,
    1221,  1222,  1223,  1224,  1227,  1228,  1231,  1233,  1236,  1240,
    1241,  1242,  1244,  1246,  1250,  1251,  1252,  1255,  1256,  1257,
    1258,  1259,  1260,  1261,  1264,  1267,  1268,  1269,  1272,  1273,
    1274,  1275,  1276,  1277,  1280,  1281,  1282,  1283,  1284,  1285,
    1286,  1289,  1290,  1293,  1294,  1297,  1298,  1301,  1302,  1305,
    1306,  1307,  1310,  1311,  1314,  1315,  1318,  1321,  1329,  1330,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1352,  1355,  1356,
    1359,  1360,  1361,  1362,  1365,  1366,  1367,  1368,  1371,  1372,
    1373,  1374,  1375,  1376,  1379,  1380,  1381,  1382,  1383,  1384,
    1386,  1387,  1392,  1393,  1396,  1398,  1400,  1403,  1404,  1405,
    1406,  1407,  1408,  1411,  1413,  1415,  1417,  1418,  1420,  1422,
    1424,  1426,  1428,  1431,  1432,  1433,  1434,  1435,  1436,  1438,
    1439,  1440,  1443,  1446,  1448,  1450,  1452,  1454,  1456,  1458,
    1460,  1463,  1465,  1467,  1469,  1470,  1471,  1472,  1473,  1476,
    1477,  1478,  1479,  1480,  1481,  1482,  1484,  1486,  1487,  1488,
    1491,  1492,  1493,  1494,  1495,  1496,  1498,  1499,  1500,  1503,
    1504,  1505,  1506,  1507,  1510,  1513,  1516,  1519,  1522,  1525,
    1528,  1531,  1534,  1539,  1542,  1545,  1548,  1551,  1554,  1557,
    1560,  1563,  1566,  1569,  1574,  1577,  1580,  1583,  1586,  1589,
    1592,  1595,  1598,  1603,  1605,  1607,  1609,  1611,  1613,  1618,
    1620,  1622,  1626,  1629,  1632,  1635,  1638,  1641,  1644,  1647,
    1650,  1653,  1656,  1661,  1662,  1663,  1664,  1665,  1666,  1667,
    1669,  1671,  1672,  1673,  1676,  1677,  1678,  1679,  1680,  1681,
    1683,  1684,  1685,  1688,  1690,  1692,  1693,  1695,  1697,  1701,
    1702,  1705,  1706,  1707,  1710,  1717,  1718,  1719,  1720,  1721,
    1722,  1723,  1726,  1734,  1735,  1736,  1737,  1739,  1741,  1742,
    1742,  1743,  1744,  1745,  1746,  1747,  1748,  1750,  1751,  1753,
    1756,  1759,  1760,  1761,  1764,  1767,  1770,  1771,  1775,  1778,
    1781,  1784,  1788,  1793,  1798,  1800,  1801,  1803,  1804,  1806,
    1808,  1810,  1812,  1813,  1815,  1817,  1821,  1826,  1828,  1830,
    1832,  1834,  1836,  1838,  1840,  1842,  1844,  1846,  1849,  1850,
    1852,  1854,  1855,  1857,  1859,  1860,  1861,  1863,  1865,  1866,
    1867,  1869,  1870,  1871,  1874,  1878,  1881,  1884,  1888,  1893,
    1899,  1900,  1901,  1903,  1904,  1908,  1910,  1911,  1912,  1915,
    1918,  1921,  1923,  1925,  1926,  1931,  1934,  1935,  1936,  1939,
    1943,  1944,  1946,  1947,  1948,  1950,  1951,  1953,  1954,  1959,
    1961,  1962,  1964,  1965,  1966,  1967,  1968,  1969,  1971,  1973,
    1975,  1976,  1978,  1979,  1981,  1983,  1984,  1985,  1986,  1987,
    1988,  1989,  1990,  1991,  1992,  1993,  1995,  1997,  1998,  1999,
    2000,  2002,  2003,  2004,  2005,  2006,  2008,  2009,  2010,  2011,
    2012,  2013,  2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,
    2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,  2032,  2033,
    2034,  2035,  2036,  2039,  2040,  2041,  2042,  2043,  2044,  2052,
    2059,  2068,  2077,  2084,  2091,  2099,  2107,  2114,  2119,  2124,
    2129,  2134,  2139,  2144,  2150,  2160,  2170,  2180,  2187,  2197,
    2207,  2216,  2228,  2241,  2246,  2249,  2251,  2253,  2258,  2262,
    2265,  2267,  2269,  2272,  2273,  2274,  2275,  2276,  2277,  2278,
    2281,  2282,  2283,  2284,  2285,  2286,  2288,  2290,  2292,  2294,
    2296,  2298,  2301,  2302,  2303,  2304,  2306,  2309,  2310,  2312,
    2314,  2315,  2316,  2318,  2321,  2324,  2325,  2327,  2328,  2329,
    2330,  2332,  2333,  2334,  2335,  2336,  2338,  2340,  2341,  2343,
    2346,  2347,  2348,  2350,  2352,  2353,  2354,  2355,  2357,  2360,
    2364,  2365,  2366,  2367,  2370,  2373,  2375,  2376,  2377,  2378,
    2380,  2383,  2384,  2386,  2387,  2388,  2389,  2390,  2392,  2393,
    2395,  2398,  2399,  2400,  2401,  2402,  2404,  2406,  2407,  2408,
    2409,  2411,  2413,  2414,  2415,  2416,  2417,  2418,  2420,  2421,
    2423,  2426,  2427,  2428,  2429,  2432,  2433,  2436,  2437,  2440,
    2441,  2444,  2457,  2458,  2462,  2463,  2467,  2468,  2471,  2476,
    2483,  2485,  2488,  2490,  2493,  2497,  2498,  2499,  2500,  2501,
    2502,  2503,  2507,  2508,  2511,  2512,  2513,  2514,  2515,  2516,
    2517,  2518,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2528,
    2529,  2530,  2531,  2534,  2535,  2538,  2539,  2539,  2542,  2543,
    2544,  2545,  2548,  2549,  2552,  2553,  2556,  2560,  2561,  2561,
    2564,  2565,  2568,  2571,  2575,  2576,  2577,  2578,  2579,  2580,
    2581,  2582,  2588,  2589,  2590,  2591,  2594,  2596,  2597,  2602,
    2604,  2605,  2606,  2607,  2610,  2611,  2616,  2620,  2621,  2622,
    2625,  2626,  2631,  2632,  2635,  2637,  2638,  2639,  2644,  2646,
    2652,  2653,  2654,  2655,  2658,  2659,  2662,  2664,  2666,  2667,
    2670,  2672,  2673,  2674,  2677,  2678,  2681,  2682,  2683,  2686,
    2687,  2688,  2691,  2692,  2693,  2694,  2695,  2698,  2699,  2700,
    2703,  2704,  2705,  2706,  2707,  2710,  2712,  2714,  2716,  2719,
    2721,  2723,  2726,  2727,  2728,  2729,  2730,  2731,  2732,  2733,
    2734,  2737,  2738,  2739,  2742,  2743,  2744,  2747,  2748,  2749,
    2752,  2753,  2754,  2757,  2758,  2759,  2760,  2763,  2764,  2765,
    2768,  2769,  2770,  2773,  2774,  2775,  2778,  2779,  2780,  2783,
    2785,  2787,  2791,  2795,  2797,  2802,  2805,  2806,  2807,  2808,
    2811,  2812,  2814,  2815,  2817,  2820,  2821,  2822,  2825,  2826,
    2829,  2831,  2832,  2833,  2834,  2837,  2838,  2839,  2842,  2843,
    2844,  2847,  2848,  2853,  2857,  2864,  2865,  2867,  2872,  2874,
    2877,  2878,  2879,  2880,  2882,  2887
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
  "SCIENTIFIC_", "SCOPE_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_",
  "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_",
  "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_",
  "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_",
  "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
  "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_",
  "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_",
  "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_",
  "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_",
  "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_",
  "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_",
  "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_",
  "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_", "ZMAX_",
  "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command",
  "numeric", "debug", "yesno", "fileNameType", "optangle", "angle",
  "sexagesimal", "hms", "dms", "coord", "coordSystem", "wcsSystem",
  "internalSystem", "maskType", "maskBlend", "scaleType", "minmaxMode",
  "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad", "layerType",
  "pointShape", "pointSize", "analysisMethod", "analysisParam", "endian",
  "threed", "threedBorder", "threedCompass", "threedHighlite",
  "threedView", "bin", "binAbout", "binFactor", "binFunction", "binTo",
  "block", "blockTo", "clip", "clipScope", "clipMode", "clipMinMax",
  "clipZScale", "colormap", "colormapMotion", "colorscale", "contour",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "crop", "crop3d", "crosshair", "cube", "cutMethod", "fitsy", "get",
  "getBin", "getBinCols", "getBlock", "getClip", "getClipMinMax",
  "getClipZScale", "getColorbar", "getColorMap", "getColorMapLevel",
  "getColorScale", "getColorScaleLevel", "getContour", "getContourClip",
  "getContourColorScale", "getCoord", "getCrop", "getCrosshair", "getCube",
  "getCursor", "getData", "getInfo", "getiis", "getIISFileName", "getFits",
  "getFitsExt", "getFitsHeader", "getFitsDepth", "getFitsFileName",
  "getFitsSlice", "getGrid", "getMask", "getPan", "getRGB", "getSmooth",
  "getThreed", "getThreedBorder", "getThreedCompass", "getThreedHighlite",
  "getThreedView", "getWCS", "getWCSAlign", "grid", "gridCreate",
  "gridType", "has", "hasBin", "hasContour", "hasFits", "hasMarker",
  "hasWCS", "iis", "iisSetFileName", "iiscursor", "load", "loadArr",
  "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsMosaicWCS", "loadFitsRGBCube",
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadIncr", "macosx",
  "magnifier", "match", "marker", "@1", "markerCallBack", "markerCentroid",
  "markerCreate", "markerCreateTemplate", "markerDash", "markerEdit",
  "markerFormat", "markerGet", "markerGetCentroid", "markerGetHighlite",
  "markerGetSelect", "markerGetShow", "markerInitProp", "markerLayer",
  "markerList", "markerLoad", "markerMoveSelected", "markerProps",
  "markerProp", "markerProperty", "markerProperties", "markerQuery", "@2",
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
     371,   371,   371,   371,   371,   371,   372,   372,   372,   372,
     373,   373,   373,   373,   373,   373,   373,   373,   374,   374,
     374,   374,   374,   375,   375,   375,   375,   375,   375,   375,
     375,   376,   376,   376,   377,   377,   377,   377,   378,   378,
     378,   379,   379,   379,   380,   380,   380,   381,   381,   381,
     381,   381,   381,   381,   381,   382,   382,   383,   383,   383,
     383,   383,   383,   384,   384,   384,   385,   385,   385,   385,
     385,   385,   386,   386,   386,   386,   386,   386,   386,   386,
     387,   387,   388,   388,   389,   389,   390,   390,   391,   391,
     391,   391,   391,   391,   391,   391,   392,   392,   393,   393,
     393,   393,   393,   393,   393,   393,   394,   394,   395,   395,
     395,   395,   395,   396,   396,   396,   397,   397,   397,   398,
     398,   398,   398,   398,   398,   398,   399,   399,   400,   400,
     400,   400,   400,   401,   401,   401,   402,   402,   402,   402,
     403,   403,   403,   403,   403,   404,   404,   405,   405,   406,
     406,   406,   406,   406,   407,   407,   407,   407,   407,   408,
     408,   409,   409,   409,   410,   410,   410,   410,   411,   411,
     412,   412,   413,   413,   414,   414,   415,   415,   415,   415,
     415,   415,   415,   416,   416,   416,   416,   416,   417,   417,
     417,   417,   417,   417,   417,   417,   418,   419,   419,   419,
     420,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     422,   422,   422,   422,   422,   422,   422,   422,   423,   423,
     423,   424,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   426,   426,   427,   427,   427,   428,   428,   429,   430,
     430,   430,   431,   431,   431,   432,   433,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   434,   434,   434,   435,
     435,   436,   436,   437,   437,   437,   438,   438,   438,   439,
     440,   440,   441,   441,   441,   442,   442,   442,   443,   443,
     443,   444,   444,   444,   445,   445,   445,   445,   445,   445,
     445,   445,   445,   445,   445,   445,   445,   445,   446,   446,
     447,   447,   447,   447,   448,   448,   449,   449,   449,   450,
     450,   450,   450,   450,   451,   451,   451,   452,   452,   452,
     452,   452,   452,   452,   453,   454,   454,   454,   455,   455,
     455,   455,   455,   455,   456,   456,   456,   456,   456,   456,
     456,   457,   457,   458,   458,   459,   459,   460,   460,   461,
     461,   461,   462,   462,   463,   463,   464,   464,   465,   465,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   467,   468,   468,
     469,   469,   469,   469,   470,   470,   470,   470,   471,   471,
     471,   471,   471,   471,   472,   472,   472,   472,   472,   472,
     472,   472,   473,   473,   474,   474,   474,   475,   475,   475,
     475,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   476,   477,   477,   477,   477,   477,   477,   477,
     477,   477,   478,   479,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   480,
     481,   481,   481,   481,   481,   481,   481,   481,   481,   482,
     482,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   490,   490,   490,   490,   490,   490,   491,
     491,   492,   492,   492,   493,   494,   494,   494,   494,   494,
     494,   494,   495,   496,   496,   496,   496,   496,   496,   497,
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
     496,   496,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   499,   499,   499,   499,   499,   499,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   501,   501,   501,   501,   502,
     503,   503,   503,   504,   504,   504,   504,   504,   504,   504,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   506,   506,   506,   506,   507,   507,   508,   508,   509,
     509,   510,   511,   511,   511,   511,   511,   511,   512,   512,
     513,   513,   513,   513,   513,   514,   514,   514,   514,   514,
     514,   514,   515,   515,   516,   516,   516,   516,   516,   516,
     516,   516,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   518,   518,   519,   520,   519,   521,   521,
     521,   521,   522,   522,   523,   523,   524,   525,   526,   525,
     527,   527,   528,   529,   530,   530,   530,   530,   530,   530,
     530,   530,   531,   531,   531,   531,   532,   532,   532,   532,
     532,   532,   532,   532,   533,   533,   533,   534,   534,   534,
     535,   535,   535,   535,   536,   536,   536,   536,   537,   537,
     538,   538,   538,   538,   539,   539,   540,   540,   540,   540,
     541,   541,   541,   541,   542,   542,   543,   543,   543,   544,
     544,   544,   545,   545,   545,   545,   545,   546,   546,   546,
     547,   547,   547,   547,   547,   548,   548,   548,   548,   549,
     549,   549,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   551,   551,   551,   552,   552,   552,   553,   553,   553,
     554,   554,   554,   555,   555,   555,   555,   556,   556,   556,
     557,   557,   557,   558,   558,   558,   559,   559,   559,   560,
     560,   560,   561,   562,   562,   562,   563,   563,   563,   563,
     564,   564,   564,   564,   564,   565,   565,   565,   566,   566,
     567,   567,   567,   567,   567,   568,   568,   568,   569,   569,
     569,   570,   570,   570,   571,   572,   572,   572,   572,   572,
     573,   573,   573,   573,   573,   573
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
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     0,     1,
       1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     1,     2,     1,     2,     2,     6,     2,     4,
       2,     2,     2,     3,     2,     2,     1,     2,     1,     2,
       4,     5,     2,     3,     5,     6,     1,     1,     1,     7,
      11,     8,    12,     1,     2,     2,     1,     1,     2,     2,
       2,     2,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     3,     2,     2,     2,
       6,    10,     1,     2,     1,     6,    10,     1,     2,     2,
       2,     2,     2,     2,    13,    13,    12,    12,     1,     0,
       1,     1,     4,     6,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     0,     6,     8,     2,
       3,     3,     3,     0,     4,     4,     4,     4,     3,     3,
       1,     3,     5,     4,     4,     3,     2,     0,     1,     1,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     4,     9,
       2,     2,     2,     1,     3,     2,     2,     1,     2,     8,
       2,     1,     2,     1,     2,     1,     4,     9,     2,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     0,     2,     2,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     1,
       4,     5,     0,     2,     1,     5,     2,     2,     1,     1,
       1,     2,     1,     2,     1,     1,     0,     1,     1,     0,
       1,     5,     6,     3,     6,     3,     1,     3,     1,     1,
       1,     3,     6,     7,     5,     1,     1,     4,     5,     1,
       3,     0,     1,     2,     1,     4,     1,     2,     1,     2,
       3,     2,     1,     2,     1,     4,     2,     1,     1,     3,
       1,     2,     3,     2,     0,     1,     1,     4,     2,     0,
       1,     3,     4,     4,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     2,     1,     2,     2,     2,     2,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     6,     5,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     1,     2,     2,     4,     6,
       1,    10,     1,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     3,     5,     4,
       4,     4,     3,     3,     3,     3,     2,     2,     4,     3,
       3,     3,     3,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     2,     3,     3,     3,     2,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     3,
       2,     2,     1,     3,     4,     4,     4,     4,     4,     6,
       4,     4,     5,     4,     4,     4,     4,     5,     4,     6,
       7,     4,     4,     5,     5,     5,     5,     5,     5,     7,
       5,     5,     6,     4,     4,     4,     4,     4,     6,     4,
       4,     5,     5,     5,     5,     5,     6,     5,     7,     8,
       5,     5,     6,     3,     3,     3,     3,     4,     3,     5,
       6,     3,     3,     4,     3,     3,     3,     3,     3,     5,
       3,     3,     4,     4,     4,     3,     5,     4,     4,     2,
       3,     6,     6,     1,     1,     1,     2,     2,     2,     3,
       3,     2,    12,     2,     2,     1,     3,     4,     2,     0,
       3,     1,     1,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     4,     5,     8,     6,     4,     9,     6,     7,
      10,    11,    12,     9,     5,     4,     6,     3,     5,     5,
       6,     5,     4,     9,    10,    11,     9,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     7,     7,     2,     4,
       4,     4,     4,     5,     4,     4,     5,     5,     3,     4,
       4,     4,     4,     7,     9,     6,    10,    11,    12,     9,
       3,     2,     3,     5,     7,     4,     3,     3,     6,     7,
       7,     4,     4,     4,     9,     4,     3,     4,     7,     7,
       2,     3,     3,     3,     4,     2,     2,     4,    10,     3,
       1,     3,     2,     2,     2,     2,     3,     5,     4,     5,
       2,     7,     3,     2,     2,     3,     2,     2,     2,     3,
       2,     3,     4,     3,     3,     6,     4,     2,     3,     2,
       2,     4,     3,     3,     2,     3,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     2,     3,     5,
       7,     7,     6,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     6,    11,     7,     7,     7,     9,     9,
      10,    12,    12,     2,     2,     3,     4,     4,     4,     2,
       4,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     3,     3,     8,     6,    10,     7,
       7,     5,     2,     2,     3,     4,     5,     3,     5,     5,
       3,     4,     5,     5,     5,     3,     5,     2,     3,     3,
       5,     3,     3,     3,     4,     5,     5,     3,     5,     5,
       3,     4,     5,     5,     2,     2,     3,     5,     6,     6,
       3,     3,     3,     6,     5,     5,     2,     3,     3,     5,
       6,     3,     2,     2,     3,     2,     3,     2,     3,     5,
       6,     2,     2,     2,     1,     4,     4,     1,     2,     2,
       2,     2,     2,     2,     2,     3,     2,     3,     2,     3,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       1,     0,     0,     1,     1,     1,     1,     1,     7,     8,
       2,     4,     2,     4,     6,     2,     1,     1,     3,     3,
       1,     4,     2,     1,     3,     3,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     1,     3,
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
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1042,     0,
       0,     0,     0,     0,     0,     0,     0,  1042,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1230,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   243,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   272,   274,
       0,     0,    11,   145,   147,   140,   141,   142,   146,   143,
     144,   277,    12,     0,   289,     0,     0,     0,    13,     0,
       0,     0,     0,   313,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   320,   153,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   382,   396,
       0,   402,     0,     0,     0,     0,     0,     0,     0,   345,
       0,   474,     0,     0,     0,     0,     0,  1042,     0,   353,
       0,   357,     0,     0,     0,   361,     0,   363,     0,   365,
       0,     0,   509,   369,    19,     0,   515,    20,   520,     0,
     538,   523,   524,   525,   526,   540,   528,   529,   533,   530,
       0,   532,   534,     0,     0,    21,    23,     0,   555,     0,
       0,     0,   560,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   714,    27,     0,     0,     0,     0,     0,
       0,   715,    28,     0,    29,  1046,  1047,  1043,  1044,  1045,
       0,   136,  1104,     0,   130,     0,     0,     0,    31,     0,
    1115,  1114,  1113,  1112,    33,     0,     0,     0,     0,     0,
     153,     0,    34,     0,  1133,     0,  1130,    35,     0,     0,
       0,     0,    38,     0,    37,    36,     0,     0,     0,     0,
      41,     0,     0,  1162,    42,     0,     0,     0,     0,     0,
      43,  1226,  1225,  1229,  1228,  1227,    45,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,     0,
    1232,    49,     0,     0,    51,     0,     0,     0,     0,   153,
      52,  1254,    53,     0,     0,    54,     1,     4,     5,   226,
       0,   218,     0,     0,   220,     0,   228,   221,   225,   236,
     237,   222,   238,     0,   224,   246,   247,   245,   244,     0,
       0,     0,   251,   259,   262,   261,   260,   258,   250,   255,
     256,   257,   249,     0,     0,     0,     0,     0,     0,   254,
      10,     0,     0,     0,   273,     0,   278,     0,   288,   279,
     290,   280,   291,   281,   302,   282,     0,     0,   283,     0,
      88,    89,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   309,     0,     0,     0,     0,     0,
     155,   160,   154,   156,   159,   158,   157,     0,     0,   326,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   331,     0,   378,   374,   370,   371,   375,   372,   377,
     332,   381,   333,   294,   386,   390,   385,   297,   296,   295,
       0,     0,   334,   397,   336,     0,   335,     0,   404,   337,
     416,   408,   419,   409,   410,   412,     0,   414,   415,   153,
     338,     0,     0,   339,     0,     0,   153,   340,   428,   153,
     426,   341,   429,   343,   153,   430,   342,     0,   153,     0,
     344,   448,     0,   446,   464,     0,     0,     0,   452,   444,
       0,   454,   469,   457,   346,   475,   476,   347,     0,     0,
       0,   439,     0,   350,   435,   436,     0,   351,   352,     0,
     483,   477,   482,   478,   479,   480,   481,   355,   356,   484,
     358,     0,   485,   486,   487,   360,   493,   488,   489,   491,
     362,   499,   501,   503,   505,   498,   500,   507,   364,     0,
       0,   512,     0,   368,   153,   514,     0,   521,   539,   522,
     541,   542,   543,   527,   544,   546,   545,   547,   531,   535,
     552,     0,     0,     0,     0,   548,   536,     0,     0,   557,
     556,     0,     0,     0,     0,    25,     0,     0,   567,     0,
     568,     0,     0,     0,     0,     0,   569,     0,   713,     0,
     570,     0,   571,     0,     0,   572,     0,   718,   717,   716,
       0,   721,     0,     0,     0,   893,     0,     0,     0,   725,
     729,   731,   732,     0,     0,     0,     0,   830,     0,     0,
       0,   866,     0,     0,     0,     0,     0,     0,     0,   868,
       0,     0,     0,    30,   138,   139,   137,  1110,  1105,  1111,
     133,   134,   132,   135,   131,  1106,     0,  1108,  1109,    32,
       0,     0,     0,     0,  1122,  1123,     0,   153,     0,  1120,
    1117,     0,     0,     0,   153,  1140,  1143,  1141,  1142,  1134,
    1135,  1136,  1137,     0,     0,     0,    40,  1159,  1160,     0,
    1167,  1169,  1168,  1164,  1165,  1163,     0,     0,     0,     0,
    1170,     0,  1173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1171,  1182,     0,     0,     0,  1172,  1174,
    1224,  1157,  1158,  1156,   207,     0,   210,   203,     0,   212,
     204,     0,   214,   205,  1155,  1154,   206,   208,   209,     0,
       0,   202,     0,     0,     0,     0,  1238,  1251,  1241,     0,
       0,  1244,     0,     0,  1243,  1242,   161,  1260,     0,  1259,
    1255,   227,   223,     0,   232,     0,   229,     0,   248,   148,
     151,   152,   150,   149,   263,   264,   265,   253,   252,   267,
     269,   268,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,   310,    94,    91,    92,    93,   153,   312,
     311,     0,     0,     0,     0,     0,     0,     0,   325,     0,
     321,   319,   318,   330,   373,     0,     0,   376,   391,   392,
     387,   388,   393,   395,   394,   389,   298,   299,   384,   383,
     399,   398,     0,   403,   417,   418,   407,   420,   413,   411,
     406,     0,     0,   153,   153,   161,   161,   161,   153,     0,
       0,   153,   465,   447,   458,     0,   449,    78,   460,     0,
       0,   451,   453,   153,   470,     0,     0,   456,     0,     0,
       0,   441,     0,     0,     0,     0,   941,   943,   942,     0,
    1035,     0,  1014,     0,  1017,     0,     0,  1037,  1039,     0,
    1030,   354,     0,   490,   492,   502,   495,   504,   496,   506,
     497,   508,   494,     0,     0,   513,   510,   511,   161,   537,
     549,   550,   551,   553,     0,   566,   554,     0,     0,     0,
       0,     0,     0,   174,   174,   168,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   171,   171,   168,     0,     0,
     168,     0,     0,     0,     0,     0,   608,   632,     0,     0,
       0,   604,     0,     0,     0,     0,   174,   168,     0,     0,
     709,     0,   719,   720,   153,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   778,     0,
       0,     0,     0,     0,   801,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   820,     0,     0,   825,   826,     0,
       0,     0,   846,   848,   847,     0,   850,     0,     0,   857,
     859,   860,   894,     0,     0,     0,     0,   723,   724,   935,
     933,   938,   937,   936,   934,   939,     0,   728,     0,   733,
       0,   932,     0,   734,   735,   736,   737,     0,     0,     0,
       0,     0,   832,     0,     0,   833,  1057,     0,  1060,  1056,
       0,     0,     0,   834,   867,   835,  1075,  1080,  1077,  1076,
    1074,  1081,  1078,  1072,  1079,  1073,  1082,     0,     0,   840,
       0,     0,     0,  1088,     0,  1090,   843,     0,  1092,   844,
     864,     0,     0,     0,   869,   870,   871,  1107,  1121,     0,
       0,  1128,  1124,     0,     0,     0,  1119,  1118,  1132,  1131,
       0,     0,  1148,     0,     0,  1144,     0,  1152,     0,     0,
    1145,     0,  1166,   196,   196,     0,   196,     0,  1192,     0,
    1191,  1183,     0,     0,     0,     0,  1187,     0,     0,     0,
    1190,     0,     0,     0,     0,     0,  1185,  1193,     0,     0,
       0,  1184,   196,   196,   196,     0,   211,   213,   215,     0,
     216,     0,    56,     0,  1234,     0,  1239,     0,   153,  1245,
    1246,     0,  1248,  1249,     0,   162,   163,  1240,  1261,  1262,
       0,   219,     0,   233,     0,     0,     0,     0,   266,     0,
       0,     0,     0,     0,     0,     0,     0,   304,   153,     0,
       0,     0,     0,   153,     0,   324,     0,   323,   380,   379,
       0,     0,     0,   153,     0,   161,   425,   423,   427,   431,
       0,     0,     0,   161,     0,    82,    81,   466,   450,     0,
     461,   463,   164,     0,     0,   348,     0,     0,    56,     0,
     440,     0,     0,   953,     0,     0,     0,     0,     0,     0,
     967,     0,     0,     0,     0,     0,     0,   984,   985,     0,
       0,     0,     0,     0,   996,     0,  1002,  1003,  1005,  1007,
       0,  1011,  1022,  1023,  1024,     0,  1026,  1031,  1033,  1034,
    1032,   940,     0,  1013,     0,  1012,   952,     0,     0,  1018,
       0,  1020,     0,  1019,  1040,  1021,  1028,     0,     0,   366,
       0,     0,   564,   565,     0,   562,   558,     0,   174,   174,
     174,   175,   176,   576,   577,   170,   169,     0,   174,   174,
     174,     0,   582,   592,   171,   174,   174,   174,   172,   173,
     174,   174,     0,   174,   174,     0,   171,     0,   605,     0,
       0,     0,   631,     0,   630,     0,     0,   607,     0,   606,
       0,     0,     0,     0,   171,   171,   168,     0,     0,   168,
       0,     0,     0,   174,   174,   705,     0,   174,   174,   710,
       0,   187,   188,   189,   190,   191,   192,     0,    86,    87,
      85,   741,     0,     0,     0,     0,     0,     0,   887,   885,
     880,     0,   890,   874,   891,   877,   889,   883,   872,   886,
     875,   873,   892,   888,     0,     0,     0,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   788,     0,     0,     0,     0,     0,   800,   802,     0,
       0,   807,   806,     0,     0,   177,     0,     0,     0,   153,
       0,   816,     0,     0,     0,     0,   821,   822,   823,     0,
       0,     0,   829,   845,   849,   851,   854,   853,     0,     0,
       0,   858,   895,   897,     0,   896,   726,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1041,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   730,     0,     0,     0,     0,   831,     0,   153,
       0,  1052,  1050,     0,     0,   153,  1055,   836,     0,     0,
       0,   842,     0,     0,  1093,   862,   863,     0,   865,  1127,
    1129,  1126,  1125,  1116,     0,     0,     0,  1149,     0,     0,
    1153,  1161,   198,   199,   200,   201,   197,  1176,  1175,     0,
       0,     0,  1178,  1177,   196,     0,     0,     0,  1186,     0,
       0,     0,     0,     0,  1203,     0,  1217,  1216,  1218,     0,
       0,     0,  1189,     0,     0,     0,  1188,  1198,  1197,  1199,
    1195,  1194,  1196,  1220,  1219,  1221,     0,     0,     0,  1236,
    1237,     0,   153,  1252,  1247,  1250,     0,     0,   153,     0,
       0,     0,   230,     0,     0,     0,     0,     0,     0,     0,
       0,   301,   300,     0,     0,   292,   303,   305,     0,   315,
     317,   316,   314,   153,   322,     0,     0,     0,   161,   153,
       0,     0,     0,     0,   445,   459,    80,    79,   468,     0,
     462,   166,   167,   165,   455,     0,   471,     0,     0,     0,
     443,   437,     0,     0,     0,     0,     0,     0,   153,   954,
       0,   957,     0,     0,   960,     0,   153,   965,     0,   968,
     969,     0,   971,   972,   973,     0,   977,     0,     0,   980,
       0,   986,     0,     0,     0,   991,   992,   990,     0,     0,
       0,   997,   998,     0,     0,  1001,  1004,  1006,  1008,     0,
       0,  1025,  1027,   944,  1036,   945,     0,     0,  1038,  1029,
       0,     0,   518,   519,     0,     0,   563,     0,   573,   574,
     575,   174,   579,   580,   581,     0,     0,     0,   586,   587,
     168,     0,     0,     0,   174,   593,   594,   595,   596,   598,
     171,   601,   602,     0,   174,     0,     0,     0,   171,   171,
     168,     0,     0,     0,     0,   629,     0,   633,     0,     0,
       0,     0,     0,   171,   171,   168,     0,     0,   168,     0,
       0,     0,     0,     0,   171,   171,   168,     0,     0,   168,
       0,     0,     0,     0,     0,   171,   171,   168,     0,     0,
     168,     0,     0,     0,     0,   171,   171,   168,     0,     0,
       0,   171,   609,   610,   611,   612,   614,     0,   617,   618,
       0,   171,     0,     0,   703,   704,   174,   707,   708,     0,
     740,   153,   742,     0,     0,   746,     0,     0,     0,     0,
       0,   879,   876,   882,   881,   878,   884,     0,   755,     0,
       0,     0,     0,   153,   762,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   779,   780,
     781,     0,   785,   782,   784,     0,     0,   790,   789,   791,
     792,     0,     0,     0,     0,     0,     0,   153,   153,   805,
     183,   179,   184,   178,   181,   180,   182,   811,   812,   813,
       0,     0,   815,   817,   153,   153,     0,   824,   827,   153,
     153,   852,   856,   898,   727,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1083,   923,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   924,     0,     0,     0,     0,     0,   738,   739,   153,
     161,     0,   153,   153,  1058,  1059,     0,     0,   838,     0,
     153,  1089,  1091,   861,     0,  1146,  1147,  1150,  1151,   196,
     196,   196,  1222,  1201,  1200,  1202,  1205,  1204,  1208,  1207,
    1209,  1206,  1214,  1213,  1215,  1211,  1210,  1212,     0,     0,
    1231,     0,  1253,     0,   153,     0,  1256,     0,     0,   234,
       0,   231,     0,     0,     0,   270,     0,     0,     0,     0,
     153,     0,   307,   141,     0,   400,     0,   421,   161,   164,
       0,     0,   434,     0,   472,   473,     0,   438,     0,     0,
       0,     0,     0,   153,   955,   164,   164,   164,   153,   961,
     164,   161,   164,   164,   153,   974,   164,   164,   164,   153,
     981,   164,   164,   153,     0,   164,   153,   164,   164,   153,
     164,   153,  1015,  1016,     0,     0,   517,   559,     0,   578,
     583,   584,   585,     0,   589,   590,   591,   597,   174,   171,
     603,   620,   621,   622,   623,   624,     0,   626,   627,   171,
       0,     0,     0,   171,   171,   168,     0,     0,     0,     0,
       0,     0,   171,   171,   168,     0,     0,     0,     0,     0,
       0,   171,   171,   168,     0,     0,     0,   171,   174,   174,
     174,   174,   174,     0,   174,   174,     0,   171,   171,   174,
     174,   174,   174,   174,     0,   174,   174,     0,   171,   171,
     683,   684,   685,   686,   688,     0,   691,   692,     0,   171,
     694,   695,   696,   697,   698,     0,   700,   701,   171,   613,
     171,     0,   619,     0,     0,   706,     0,   743,   164,     0,
       0,   164,     0,     0,     0,   754,   164,   758,   759,   164,
     761,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   783,   786,   787,     0,   164,     0,
       0,     0,   803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1084,
    1063,     0,  1070,  1071,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,    83,
       0,     0,   930,   931,   161,     0,     0,     0,  1053,  1051,
    1061,   837,   839,   161,  1139,  1180,  1179,  1181,  1223,     0,
    1233,  1263,     0,     0,  1258,  1257,   235,     0,     0,     0,
     275,     0,     0,     0,   293,   164,   401,   405,   422,   424,
       0,   432,   467,     0,     0,     0,     0,     0,     0,   951,
     956,   959,   958,   962,   963,   964,   966,   970,   975,   976,
     978,   979,   982,   983,   987,   161,   164,   994,   161,   995,
     999,   161,  1009,   161,     0,     0,   516,     0,   588,   599,
     174,   171,   628,   174,   174,   174,   174,   174,     0,   174,
     174,   171,   174,   174,   174,   174,   174,     0,   174,   174,
     171,   174,   174,   174,   174,   174,     0,   174,   174,   171,
     174,   643,   644,   645,   646,   648,   171,   651,   652,     0,
     174,   174,   672,   673,   674,   675,   677,   171,   680,   681,
       0,   174,   687,   171,     0,   693,   171,   702,   615,   171,
     711,   712,   153,   745,     0,   164,   748,     0,   153,     0,
     756,   760,   153,     0,   767,   768,   769,   770,   774,   775,
     771,   772,   773,     0,     0,   164,   795,     0,   153,     0,
       0,   808,   164,     0,     0,   164,   164,     0,   855,     0,
     185,   185,     0,     0,   185,     0,   185,  1041,     0,     0,
       0,     0,     0,     0,     0,     0,  1062,     0,     0,   185,
     185,     0,     0,     0,     0,     0,     0,     0,     0,   925,
       0,     0,     0,  1041,    84,     0,   185,     0,  1086,   929,
       0,     0,     0,   217,  1265,  1264,     0,     0,   239,     0,
       0,     0,     0,   308,   433,   327,     0,   947,     0,   193,
       0,   988,   989,   993,  1000,  1010,   359,   327,     0,   600,
     625,   634,   635,   636,   637,   638,   171,   640,   641,   174,
     663,   664,   665,   666,   667,   171,   669,   670,   174,   654,
     655,   656,   657,   658,   171,   660,   661,   174,   647,   174,
     171,   653,   676,   174,   171,   682,   689,   171,   699,   616,
       0,   164,   749,     0,     0,     0,     0,     0,   776,   777,
     793,     0,     0,     0,   804,   809,     0,   818,   819,   810,
     164,     0,   186,  1041,  1041,    83,     0,  1041,     0,  1041,
     899,   153,     0,  1065,     0,  1068,  1102,  1069,  1067,  1064,
       0,  1041,  1041,    83,     0,     0,  1041,  1041,     0,     0,
    1041,   928,   926,   927,   906,  1041,  1041,  1086,  1097,     0,
    1054,   841,     0,     0,     0,   241,     0,     0,     0,   328,
     329,   349,     0,     0,   194,   195,   949,   950,   367,     0,
     174,   642,   174,   671,   174,   662,   649,   174,   678,   174,
     690,     0,   744,   164,   164,     0,   164,     0,   164,   164,
       0,   164,     0,  1041,   912,   908,  1041,     0,   913,     0,
     907,  1041,     0,  1066,     0,   910,   909,  1041,     0,     0,
     904,   902,  1041,   153,   903,   905,   911,  1097,  1048,     0,
       0,  1087,  1095,  1138,     0,     0,     0,   271,   294,   297,
     295,     0,     0,   946,   153,   561,   639,   668,   659,   650,
     679,   164,   747,   753,     0,   766,   763,   794,   799,     0,
     814,     0,   917,   901,    83,     0,   915,  1103,     0,   900,
      83,     0,   916,     0,  1049,  1099,  1101,     0,  1094,     0,
       0,   276,     0,     0,     0,     0,   193,     0,   750,   153,
     764,   796,   828,  1041,     0,     0,  1041,     0,   164,  1100,
    1096,   240,     0,     0,     0,     0,     0,   948,   722,   153,
     751,   765,   153,   797,   919,     0,  1041,   918,     0,     0,
     242,   287,     0,   286,     0,   752,   798,    83,   920,    83,
    1041,   285,   284,  1041,  1041,   914,   922,   921
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1400,   172,   152,  1247,  2473,  2474,   424,   425,
     426,   427,   153,   154,   155,   685,   677,    91,   804,   447,
    1197,  1664,  1337,  1350,  1333,  1907,  2573,  1397,  2626,  1567,
     337,   757,   760,   763,   771,    63,   361,   367,   371,   374,
      68,   377,    75,   392,   388,   382,   399,    82,   404,    92,
      98,   409,   411,   413,   481,   858,  1633,   415,   418,   105,
     434,   156,   158,  2621,   174,   214,   470,   847,   472,   482,
     850,   855,   484,   486,   861,   489,   863,   500,   866,   868,
     503,   507,   511,   513,   516,   520,   547,   543,  1260,   534,
     886,   891,   883,  1248,   897,   537,   557,   560,   565,   570,
     578,   926,   928,   930,   932,   583,   936,   217,   585,  1734,
     235,   587,   589,   593,   598,   606,   244,  1326,   609,   252,
     618,  1342,   620,   626,   981,  1358,   976,  1775,  1364,  1362,
    1777,   977,  1367,  1369,   632,   635,   630,   254,   262,   264,
     673,  1058,  1424,  1047,  1522,  1951,  2267,  1063,  1056,   921,
    1301,  1305,  1313,  1315,  1935,   270,  1072,  1075,  1083,  2239,
    2240,  2241,  1936,  2608,  2609,  1106,  1109,  2681,  2682,  2678,
    2679,  2725,  2242,  2243,   278,   284,   292,   699,   694,   297,
     302,   304,   709,   716,  1135,  1140,   766,   754,   310,   314,
     723,   320,   730,  1572,   743,   744,  1171,  1166,  1578,  1156,
    1584,  1596,  1592,  1160,   748,   732,   326,   327,   341,  1184,
     344,   350,   781,   784,   778,   352,   355,   789
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2537
static const yytype_int16 yypact[] =
{
    5064,    75,   223,    20, -2537, -2537,  1076,  -131,   209,   835,
     911,   240,   634,   125,   332,  1815,    22,  5112,   472,  2422,
   -2537,   332,   992,   187,   817,   -53,    57,   214,   436,   640,
     157,   698,  2476,   107,   643,   526,   461,   436, -2537,   165,
      24,  1010, -2537,    97,   593,   842, -2537,    80, -2537,    47,
    1031,   371,    50,   622,   105,   132,   359,   636,   623,    89,
     638,    23,   126, -2537, -2537, -2537,   136,   591, -2537,   160,
      36,   332,   -19,   615,   130, -2537,   651,   591, -2537, -2537,
      61,   591, -2537, -2537, -2537, -2537,   591, -2537, -2537, -2537,
   -2537, -2537, -2537,   146,   604,   668,   715,   142, -2537,   591,
    1203,   591,   591,   999,   591, -2537, -2537, -2537,   442, -2537,
   -2537, -2537, -2537,  3634, -2537, -2537, -2537, -2537, -2537, -2537,
     591, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,  1265, -2537,   591, -2537,   719, -2537, -2537,
     332,   332,   332,   332,   332,   332, -2537, -2537,   332,   332,
     332,   332, -2537,   645, -2537,   710,  1452,   678,    18,   501,
     683,   397,  3917,   168,  4682,  4496,   772,  3634,  3049, -2537,
    1577,   325,   811,   730,   112,   456,   845,   436,   799, -2537,
     798, -2537,   632,   587,   185, -2537,   123, -2537,   511, -2537,
      68,   780,   471, -2537, -2537,  4763, -2537, -2537, -2537,   812,
     887, -2537, -2537, -2537, -2537,   476, -2537, -2537, -2537, -2537,
     877, -2537, -2537,  4763,  4302, -2537, -2537,   207, -2537,   923,
     935,   630, -2537,   591, -2537,   938,    99,   984,   473,   808,
     986,    33, -2537, -2537, -2537,  1018,   991,   332,   332,   591,
     591, -2537, -2537,  1019, -2537, -2537, -2537, -2537, -2537, -2537,
    2909,   -11, -2537,  1021,    30,   591,  4763,   591, -2537,  1023,
   -2537, -2537, -2537, -2537, -2537,   591,  1052,   332,  2022,   591,
    1265,   591, -2537,  1026, -2537,  5179, -2537, -2537,   962,  1037,
    1041,   591, -2537,  1042, -2537, -2537,   419,  1030,  4763,  1044,
   -2537,  1148,   591,   959, -2537,   477,   956,  1465,   401,  1068,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537,  1082, -2537,   449,
      28,   124,   251,   521,   591,   591,   162, -2537,   591,   818,
    1099, -2537,   591,   591, -2537,  1103,    12,    41,  1105,  1265,
   -2537, -2537, -2537,   524,   591, -2537, -2537, -2537, -2537, -2537,
     591, -2537,  1109,  1118, -2537,   591,  1059, -2537, -2537, -2537,
   -2537, -2537, -2537,   591, -2537, -2537,   591, -2537, -2537,   537,
     537,  1122, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,   945,   591,   591,  1162,  1164,  1167, -2537,
   -2537,   591,   591,   591, -2537,   591, -2537,  1170, -2537, -2537,
   -2537, -2537,   608, -2537,  1176, -2537,  4763,  1179, -2537,   591,
   -2537, -2537, -2537,   591,  1166,  1175,  1175,  4763,   591,   591,
     591,   591,   591,   591, -2537,   591,  3634,  1203,   591,   591,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537,  1203,   591, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
    1186, -2537,   928,    26, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,   -58, -2537, -2537, -2537,  1034, -2537,    37,
      14,    14, -2537, -2537, -2537,  1206, -2537,  1217, -2537, -2537,
     -55, -2537,  1035, -2537, -2537, -2537,  1053, -2537, -2537,  1265,
   -2537,   591,   591, -2537,  4763,  4763,  1265, -2537, -2537,  1265,
   -2537, -2537, -2537, -2537,  1265, -2537, -2537,  4763,  1265,   591,
   -2537, -2537,  4763, -2537,  1228,   182,  1043,     0, -2537, -2537,
    1048,  4763,    29, -2537, -2537, -2537, -2537, -2537,  1243,  1244,
    1246, -2537,  1055, -2537, -2537, -2537,   591, -2537, -2537,  1033,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537,    68, -2537, -2537, -2537, -2537, -2537, -2537,  1061,  1066,
   -2537, -2537,  1197,  1198,  1202, -2537, -2537,  1046, -2537,   591,
    1266,  1050,  5179, -2537,  1265, -2537,  1272, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537,  4763,  4763,  4763,  4763, -2537, -2537,  1276,   332, -2537,
   -2537,  1278,  1280,  1092,   591, -2537,   203,  1204, -2537,  1288,
   -2537,   467,  1209,  5113,    31,  1293, -2537,  1299, -2537,  1304,
   -2537,    27, -2537,  1307,  1308, -2537,  1310, -2537, -2537, -2537,
     591, -2537,  5179,  4251,  1902,   610,  1311,   496,  1221, -2537,
   -2537, -2537,  1301,    66,  1319,  1322,   137,   591,   455,   457,
      87,  4763,   332,  2166,   475,     8,   159,   298,    13, -2537,
    1315,  1318,  1336, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537,   591, -2537, -2537, -2537,
     591,   591,   591,   591, -2537, -2537,   591,  1265,   591, -2537,
     591,  1203,   591,  1339,  1265, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,  1370,   462,   465, -2537, -2537, -2537,  1373,
   -2537, -2537, -2537, -2537,  1279, -2537,  1374,  1379,  1292,  1382,
   -2537,  1388, -2537,  1391,  1312,  1401,   478,   485,   504,    38,
     584,  1403,   586, -2537, -2537,  1405,  1406,  1408, -2537, -2537,
    1410, -2537, -2537, -2537, -2537,  1411, -2537, -2537,  1412, -2537,
   -2537,  1413, -2537, -2537, -2537, -2537, -2537, -2537, -2537,   591,
     591, -2537,   591,   847,   591,   591, -2537,  1486, -2537,   611,
    1415, -2537,   884,  1416, -2537, -2537,   -14,   591,   591, -2537,
    1417, -2537, -2537,  1419,  1157,   591,  1422,   558, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537,  1421,  1424,   591,   591,   591,  1426,   332,  1431,
    1432,  1265,  4763, -2537, -2537, -2537, -2537, -2537,  1265, -2537,
   -2537,   591,   591,   591,  4763,   591,  1203,   591, -2537,   591,
   -2537, -2537, -2537, -2537, -2537,  1435,  1436, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
     168, -2537,   591, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537,  4763,   591,  1265,  1265,   -14,   -14,   -14,  1265,  1203,
     591,  1265, -2537, -2537, -2537,   591, -2537,     9,  1247,  1437,
    1439, -2537, -2537,  1265, -2537,  1263,  1285, -2537,  1441,  1442,
    1445,   908,   591,  4624,   585,   764, -2537, -2537, -2537,   591,
     549,   804, -2537,  1185, -2537,  2166,  1189,   551,  1165,   115,
   -2537, -2537,   591, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,   591,  1448, -2537, -2537, -2537,   -14, -2537,
   -2537, -2537, -2537, -2537,  4735, -2537, -2537,  1451,  1453,   591,
    1454,  1455,  1457,   355,   355,   323,  1460,  1462,  1463,  1464,
    1182,  1183,  1466,  1468,  1470,   649,   649,   323,  1474,  1475,
     323,  1478,  1479,  5150,  1480,  1485, -2537, -2537,  1494,  1498,
     716, -2537,  1515,  1521,  1523,  1524,   355,   323,  1522,  1527,
   -2537,  1528, -2537, -2537,  1265,   916,  1384,  1225,   434,  1295,
    1363,  4161,   498,  1533,   -10,  1402,  1438,  1058,  1624,  1502,
     595,  1305,  1443,  1541,  1333,    88,    32,   -88,    34,  4763,
    2166,  1509,   -75,  1314,  1343,  1546,    77, -2537, -2537,   439,
    1555,  1557, -2537, -2537, -2537,  1559,  1351,    69,  2166,  1352,
   -2537, -2537, -2537,   332,  1566,  1567,   591, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537,     6, -2537,  3167, -2537,
     591, -2537,   591, -2537, -2537, -2537, -2537,   591,   591,   591,
     496,  4763, -2537,  1568,   918, -2537, -2537,   591, -2537, -2537,
     591,  4763,   591, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537,   332,   591, -2537,
     591,   496,  1572, -2537,   591,   591, -2537,   332, -2537, -2537,
   -2537,   145,  1574,  1578, -2537, -2537, -2537, -2537, -2537,   591,
     591, -2537, -2537,  1203,   591,   591, -2537, -2537, -2537, -2537,
    1582,   591, -2537,   591,  1469, -2537,   591, -2537,   591,  1481,
   -2537,  1584, -2537,   859,   859,   602,   859,  1590, -2537,   616,
   -2537, -2537,  1591,  1594,   653,  1596, -2537,  1597,  1604,  1606,
   -2537,   657,   701,  1610,  1614,  1621, -2537, -2537,  1623,  1625,
    1627, -2537,   859,   859,   859,   591, -2537, -2537, -2537,   591,
   -2537,   591,   580,  4763, -2537,   591, -2537,  5179,  1265, -2537,
   -2537,  1628, -2537, -2537,  1629, -2537, -2537, -2537, -2537,  1569,
    2022, -2537,   591,  1620,   591,   591,   591,  1001, -2537,  1630,
    1635,   591,   591,   -17,  1637,   332,   332, -2537,  1265,   591,
    1636,  1640,  1641,  1265,  4763, -2537,   591, -2537, -2537, -2537,
     591,   591,   591,  1265,  4763,   -14, -2537, -2537, -2537, -2537,
    1203,   591,  1643,   -14,   591,  1612,  1615,   528, -2537,  1650,
   -2537, -2537,  1094,  3594,   591, -2537,   591,  1654,  1661,   591,
   -2537,  1658,  1156,  3634,  1425,   613,  1427,    10,  4763,   673,
   -2537,   339,  1525,   116,   674,  1428,   153, -2537, -2537,   499,
    1501,   279,  1549,   612,  2166,   844, -2537,  1660,  1434, -2537,
     555, -2537, -2537, -2537, -2537,  2166,  1467, -2537, -2537, -2537,
   -2537, -2537,   591, -2537,   591, -2537, -2537,   591,   591, -2537,
     591, -2537,   591, -2537, -2537, -2537, -2537,  1477,   591, -2537,
     591,    59, -2537, -2537,  1679,  1682, -2537,   591,   355,   355,
     355, -2537, -2537, -2537, -2537, -2537, -2537,  1683,   355,   355,
     355,   510, -2537, -2537,   649,   355,   355,   355, -2537, -2537,
     355,   355,  1684,   355,   355,  1685,   649,   742, -2537,  1686,
    1687,  1688, -2537,   744, -2537,   882,  1132, -2537,  1211, -2537,
    1430,  1693,  1695,  1697,   649,   649,   323,  1701,  1704,   323,
    1707,  1705,  1709,   355,   355, -2537,  1711,   355,   355, -2537,
    1712, -2537, -2537, -2537, -2537, -2537, -2537,   332, -2537, -2537,
   -2537,  3634,  1151,   332,   591,  1214,  1282,   431, -2537, -2537,
   -2537,   494, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537,  1713,   332,   591, -2537,   332,  1714,
     591,  4763,   332,  1326,  1488,  1490,   175,   181,  1491,   210,
    1409,  1429,  1717,  1718,  1731,  4161,  1738,  1739,  1742,  1444,
    1449,   996,  1745,   332,   591,  1231,  1334, -2537, -2537,   332,
    4763, -2537, -2537,  4763,   591,    17,  1746,   332,   591,  1265,
     332, -2537,  1747,  4763,  4763,   591, -2537, -2537, -2537,   332,
     332,  4763, -2537, -2537, -2537, -2537, -2537, -2537,  4763,   591,
     332, -2537, -2537, -2537,   591, -2537, -2537,  1748,   591,  1526,
     179,   591,  1531,   591,   184,   591, -2537,   591,  1534,  1535,
     591,   591,   591,   591,   591,   591,   591,   591,    72,   591,
     591,  1536, -2537,   591,   591,   591,   591, -2537,  4763,  1265,
    1751,  4763,  4763,   591,   591,  1265, -2537,   591,   591,   591,
    4763, -2537,   591,   591, -2537, -2537, -2537,  1756, -2537, -2537,
   -2537, -2537, -2537, -2537,  1762,   591,   591, -2537,   591,   591,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,  1766,
    1767,  1769, -2537, -2537,   859,  1771,  1772,  1770, -2537,  1774,
    1778,  1781,  1782,  1779, -2537,  1784, -2537, -2537, -2537,  1785,
    1788,  1792, -2537,  1823,  1824,  1793, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537,   591,   591,   591, -2537,
   -2537,   591,  1265, -2537, -2537, -2537,  2022,   591,  1265,   591,
     591,   591, -2537,   591,   591,  1825,   591,  1827,  1710,   591,
     591, -2537, -2537,  1828,  4763, -2537, -2537, -2537,   591, -2537,
   -2537, -2537, -2537,  1265, -2537,   951,   591,   951,   -14,  1265,
    4763,   591,   591,  1829, -2537, -2537, -2537, -2537, -2537,   591,
   -2537, -2537, -2537, -2537, -2537,  4763, -2537,  4763,   591,  1830,
   -2537, -2537,  1831,  1832,  1833,  1834,  1835,  4763,  1265, -2537,
    4763, -2537,  4763,  4763,  3634,  4763,  1265, -2537,  4763, -2537,
   -2537,  4763, -2537, -2537,  3634,  4763, -2537,  4763,  4763,  3634,
    4763, -2537,  4763,  4763,   591, -2537, -2537, -2537,  4763,  4763,
    4763, -2537, -2537,  4763,  4763, -2537, -2537, -2537, -2537,  4763,
    4763, -2537, -2537, -2537, -2537, -2537,   591,   591, -2537, -2537,
    1840,   591, -2537, -2537,  1841,  1843, -2537,   591, -2537, -2537,
   -2537,   355, -2537, -2537, -2537,  1846,  1850,  1851, -2537, -2537,
     323,  1844,  1853,  1856,   355, -2537, -2537, -2537, -2537, -2537,
     649, -2537, -2537,  1854,   355,  1858,  1868,  1869,   649,   649,
     323,  1871,  1872,  1873,  1375, -2537,  1418, -2537,  1576,  1561,
    1875,  1876,  1877,   649,   649,   323,  1880,  1882,   323,  1884,
    1603,  1886,  1888,  1889,   649,   649,   323,  1883,  1891,   323,
    1892,  1605,  1893,  1896,  1897,   649,   649,   323,  1899,  1900,
     323,  1904,  1905,  1907,  1909,   649,   649,   323,  1901,  1911,
    1912,   649, -2537, -2537, -2537, -2537, -2537,  1914, -2537, -2537,
    1915,   649,  1917,  1928, -2537, -2537,   355, -2537, -2537,  1941,
   -2537,  1265, -2537,  4763,   591, -2537,   591,  4763,   591,  1947,
    1384, -2537, -2537, -2537, -2537, -2537, -2537,  1948, -2537,  4763,
     332,  1949,  4763,  1265, -2537,  1950,  1384,   591,   591,   591,
     591,   591,   591,   591,   591,   591,  1929,  1952, -2537, -2537,
   -2537,  1953, -2537, -2537, -2537,  1955,  1957, -2537, -2537, -2537,
   -2537,   591,  4763,   591,  1960,  1384,   332,  1265,  1265, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
     591,  1203, -2537, -2537,  1265,  1265,   591, -2537, -2537,  1265,
    1265, -2537, -2537, -2537, -2537,   591,   591,   591,   591,   591,
     591,   591,   591,   591,   591,  2913, -2537,   591,   591,   591,
     591,   591,   591,   591,   591,   591,   591,   591,  2601,  1961,
     591, -2537,   591,   591,   591,  1958,  1963, -2537, -2537,  1265,
     -14,  1964,  1265,  1265, -2537, -2537,  1203,   591, -2537,  1966,
    1265, -2537, -2537, -2537,  1967, -2537, -2537, -2537, -2537,   859,
     859,   859, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,  1384,   591,
   -2537,   591, -2537,   591,  1265,   591, -2537,  1203,   591, -2537,
     591, -2537,  1678,  1968,  1969, -2537,  1971,   591,   591,  1972,
    1265,  4763, -2537, -2537,   591, -2537,   591, -2537,   -14,  1094,
     591,  1973, -2537,   591, -2537, -2537,    68, -2537,  1974,  1975,
    1976,  1977,  1979,  1265, -2537,  1094,  1094,  1094,  1265, -2537,
    1094,   -14,  1094,  1094,  1265, -2537,  1094,  1094,  1094,  1265,
   -2537,  1094,  1094,  1265,  4763,  1094,  1265,  1094,  1094,  1265,
    1094,  1265, -2537, -2537,  1981,    68,  1983, -2537,   591, -2537,
   -2537, -2537, -2537,  1982, -2537, -2537, -2537, -2537,   355,   649,
   -2537, -2537, -2537, -2537, -2537, -2537,  1985, -2537, -2537,   649,
    1986,  1988,  1989,   649,   649,   323,  1991,  1993,  1994,  1996,
    2001,  2004,   649,   649,   323,  2007,  2009,  2011,  2012,  2013,
    2014,   649,   649,   323,  2018,  2020,  2026,   649,   355,   355,
     355,   355,   355,  2028,   355,   355,  2030,   649,   649,   355,
     355,   355,   355,   355,  2032,   355,   355,  2034,   649,   649,
   -2537, -2537, -2537, -2537, -2537,  2035, -2537, -2537,  2036,   649,
   -2537, -2537, -2537, -2537, -2537,  2038, -2537, -2537,   649, -2537,
     649,  2039, -2537,  2040,  2041, -2537,  5179, -2537,  1094,  2042,
    4763,  1094,   591,  4763,  2043, -2537,  1094, -2537, -2537,  1094,
   -2537,  4763,  2045,   591,   591,   591,   591,   591,   591,   591,
     591,   591,   591,   591, -2537, -2537, -2537,  4763,  1094,   591,
    4763,  2046, -2537,  1203,  1203,  4763,  1203,  1203,  4763,  4763,
    1203,  1203,   591,   591,   591,   591,   591,   591,  1384,   591,
     591,   591,  1602,  1617,  1622,  1696,  1698,  1700,  1702,  2913,
   -2537,  1708, -2537, -2537,  1384,   591,   591,   591,   591,  1384,
     591,   591,   591,   591,   591,   591,  1265,   591,  1589,  1384,
     591,   591, -2537, -2537,   -14,   332,  2048,  2056, -2537, -2537,
   -2537, -2537, -2537,   -14,  2061, -2537, -2537, -2537, -2537,   591,
   -2537, -2537,  1203,   591, -2537, -2537, -2537,  1065,  2062,  2063,
   -2537,   591,  2065,   951, -2537,  1094, -2537, -2537, -2537, -2537,
    2066, -2537, -2537,  2068,  2069,  2073,  2075,  4763,  2076, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537,   -14,  1094, -2537,   -14, -2537,
   -2537,   -14, -2537,   -14,  2077,  2074, -2537,   591, -2537, -2537,
     355,   649, -2537,   355,   355,   355,   355,   355,  2079,   355,
     355,   649,   355,   355,   355,   355,   355,  2080,   355,   355,
     649,   355,   355,   355,   355,   355,  2081,   355,   355,   649,
     355, -2537, -2537, -2537, -2537, -2537,   649, -2537, -2537,  2082,
     355,   355, -2537, -2537, -2537, -2537, -2537,   649, -2537, -2537,
    2083,   355, -2537,   649,  2084, -2537,   649, -2537, -2537,   649,
   -2537, -2537,  1265, -2537,  4763,  1094, -2537,  2086,  1265,   591,
   -2537, -2537,  1265,   591, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,   591,   591,  1094, -2537,  2087,  1265,   591,
    1203, -2537,  1094,   591,  1203,  1094,  1094,  4763, -2537,   591,
    2088,  2088,   591,   591,  2088,  1384,  2088, -2537,  4763,  4161,
    2089,  2091,  2092,  2093,  2094,  2097, -2537,   332,  1384,  2088,
    2088,   591,   591,  1384,   591,   591,   591,   591,   591, -2537,
    1203,   591,  2098, -2537, -2537,   591,  2088,   332,     7, -2537,
    2099,   332,  2101, -2537, -2537, -2537,  2104,   591, -2537,  2105,
    2102,  1910,   591, -2537, -2537,    62,  4763, -2537,  2106,    70,
    4763, -2537, -2537, -2537, -2537, -2537, -2537,    62,   591, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537,   649, -2537, -2537,   355,
   -2537, -2537, -2537, -2537, -2537,   649, -2537, -2537,   355, -2537,
   -2537, -2537, -2537, -2537,   649, -2537, -2537,   355, -2537,   355,
     649, -2537, -2537,   355,   649, -2537, -2537,   649, -2537, -2537,
     591,  1094, -2537,  4763,  4763,   591,  4763,   591, -2537, -2537,
   -2537,  4763,  4763,   591, -2537, -2537,  4763, -2537, -2537, -2537,
    1094,  2108, -2537, -2537, -2537,  1384,   591, -2537,  2109, -2537,
   -2537,  1265,  2110, -2537,  2112, -2537, -2537, -2537, -2537, -2537,
    2114, -2537, -2537,  1384,   591,  2115, -2537, -2537,   591,  4763,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537,     7,  1703,  2166,
   -2537, -2537,  2116,  2117,  2118, -2537,  2060,  2120,    39, -2537,
   -2537, -2537,  2122,  4763, -2537, -2537, -2537, -2537, -2537,  2124,
     355, -2537,   355, -2537,   355, -2537, -2537,   355, -2537,   355,
   -2537,  5179, -2537,  1094,  1094,   591,  1094,  2126,  1094,  1094,
     591,  1094,   591, -2537, -2537, -2537, -2537,  2127, -2537,   591,
   -2537, -2537,  2128, -2537,   591, -2537, -2537, -2537,  2130,   591,
   -2537, -2537, -2537,  1265, -2537, -2537, -2537,  1703, -2537,  1783,
    1741,  2166, -2537, -2537,  2131,  2132,  2136, -2537, -2537, -2537,
   -2537,    44,    44, -2537,  1265, -2537, -2537, -2537, -2537, -2537,
   -2537,  1094, -2537, -2537,  2137, -2537,  3634, -2537, -2537,  2138,
   -2537,  1384, -2537, -2537,  1384,   591, -2537, -2537,   591, -2537,
    1384,   591, -2537,  4763, -2537,  1783, -2537,   332, -2537,  2139,
    2140, -2537,   591,   591,   591,   591,    70,  2141,  3634,  1265,
   -2537,  3634, -2537, -2537,   591,  2143, -2537,   591,  1094, -2537,
   -2537, -2537,  2144,  2146,   591,  2147,   591, -2537, -2537,  1265,
   -2537, -2537,  1265, -2537, -2537,  2149, -2537, -2537,  2150,  2152,
   -2537, -2537,  2153, -2537,  2154, -2537, -2537,  1384, -2537,  1384,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2537, -2537,    -3, -2537,   278, -2537, -1794,  -982,  1649, -2537,
     164,  -422,  1874,   -49,    81, -2537, -2537, -1635,  1722,  1786,
    -768, -1561,  -961,   933,  1516, -2537, -1201, -2537,  -643, -1086,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537,  -504,  -476, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537,  -386, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -1442, -2537, -2537, -2537, -2537, -2537,  -639, -2537,
   -2537, -2537, -2537, -2537, -2537,   542, -2537, -2537, -2537, -2537,
    -107,  -661,  -999,  -464, -2537, -2537, -2537, -2537,  -533,  -522,
   -2537, -2537, -2536, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537,  1433, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537,
   -2537, -2537, -2537, -2537, -2537, -2537, -2537, -2537
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1236
static const yytype_int16 yytable[] =
{
      67,   349,  1097,  1881,   888,   859,  1352, -1085,   104,  1355,
    2024,  1496,  2026,  1101,  1401,   838,   779,  1428,  1110,  1071,
    1074,    64,    65,    64,    65,   841,  1386,    64,    65,   289,
    1631,  1684,   106,   894,   679,    64,    65,   313,   633,    64,
      65,   984,    64,    65,  1900,   782,   343,    64,    65,   354,
      64,    65,   360,    64,    65,   369,   366,  1472,  1568,   373,
    1573,   106,   255,   376,   378,   402,  1901,   387,  1461,  1902,
     394,   398,    64,    65,   401,    64,    65,  1948,   405,  1732,
    1903,   674,  1478,   406,   338,  1195,  1603,  1604,  1605,   985,
      64,    65,    64,    65,  2619,   755,   419,   423,   428,   429,
     433,   435,  2624,  1904,   616,  1486,  1060,  1237,  1238,  1239,
     357,   106,   293,   291,  1111,  1459,   852,   439,   540,   978,
    1112,  1905,   390,  1076,   256,   109,  1161,  1077,   106,    64,
      65,   845,  1316,    64,    65,    64,    65,  1694,   848,    64,
      65,   864,    54,  2726,   566,  1245,   257,   416,   321,   111,
    1545,   407,   448,  1473,  1066,   856,    76,  1467,   157,  1429,
     391,   675,  1546,   895,   379,    64,    65,  1462,   889,   173,
    1321,    64,    65,   417,  1699,   480,  1103,  1465,   111,  1061,
     501,   253,    64,    65,  1466,   856,   884,    64,    65,  2749,
     979,   758,   359,   857,   438,   849,  1869,  1162,   322,   258,
    1078,   541,  1871,   245,  1487,   865,   339,   323,   473,   395,
    1474,   607,   853,    77,   474,  1317,   846,   950,   951,   263,
     986,   311,  1079,   857,   279,   109,   383,   307,   111,  2688,
     680,  1874,  1430,   114,   542,    55,   324,   681,   682,   109,
     614,   115,   116,    64,    65,   111,   704,   562,   358,    78,
    1196,   372,  1685,   475,  1309,   106,   640,   641,  1632,  1246,
     567,   375,   114,  1062,   502,   952,   510,   676,   515,   519,
     115,   116,   686,   683,   688,  1431,   546,    56,   476,  1126,
      99,  1468,   690,   693,  1080,   696,   700,   117,   702,   340,
     854,   579,   159,   987, -1085,    57,  1102,  1733,   712,   236,
     100,   780,   106,   988,   261,   396,   634,   370,   722,   724,
     403,   296,   114,  1497,   890,    66,  1460,  1113,   761,   312,
     115,   116,    79,   477,   896,    58,   119,  1463,  1479,   114,
     783,   767,   768,   770,   989,   772,   106,   115,   116,   775,
     776,   384,   342,    59,  2689,   353,  2620,    60,   617,   389,
     788,   790,  1067,   101,  2625,   119,   380,   791,  1695,  1470,
      61,   259,   794,   796,  1488,   568,  1689,   478,   479,   698,
     797,  1906,   111,   798,  1104,   149,   408,  1490,   684,  1949,
     150,   151,  1081,   397,   365,   385,   386,   117,   478,  2690,
     769,   808,   809,   569,   325,  1700,   953,   954,   813,   814,
     815,   117,   816,   608,   149,   119,    80,  1927,   260,   150,
     151,   294,  1932,   381,  1225,  1827,   823,  1870,  1830,   111,
     824,   295,   119,  1872,  1850,   829,   830,   831,   832,   833,
     834,  1528,   835,  1068,   423,   839,   840,   102,   450,   451,
     452,   453,   454,   455,   423,   842,   456,   457,   458,   459,
     308,  1866,  1875,   111,   149,  1105,   114,  1241,    81,   150,
     151,   544,  1540,   745,   115,   116,  1480,  1650,  2299,   955,
     563,   149,   961,   309,  1895,  1654,   150,   151,   621,   956,
     957,   962,   963,   751,  2310,  2311,  2312,   581,  1982,  2314,
    1335,  2316,  2317,   564,   265,  2319,  2320,  2321,   871,   872,
    2323,  2324,  1131,   114,  2327,  1136,  2329,  2330,  1690,  2332,
     958,   115,   116,   109,  1331,  1098,   880,   837,    62,  1049,
     590,  1049,   545,   746,  1745,  1746,  1701,    64,    65,   964,
     303,   103,  1658,   937,   764,   638,   639,   114,  1851,   726,
     733,   535,  1332,   902,  1705,   115,   116,  1152,   571,   119,
     305,  1706,    64,    65,    64,    65,   215,  1403,   752,   572,
    1049,  1050,  1206,  1050,   591,   695,  1157,   799,   487,   266,
    1207,   714,  1747,   216,   975,  1132,   933,   488,  1137,   306,
   -1235,  1691,  1718,  1073,  1609,   109,   573,  1107,  1099,   826,
     827,  1336,   622,   994,    64,    65,   119,   328,   149,   727,
     735,  1854,  1050,   150,   151,   351,   885,  1153,   756,   759,
     762,   949,   818,   819,  1042,  1189,  1190,  2403,    64,    65,
    2406,  1425,   356,  1711,  1692,  2410,  1158,   364,  2411,  1852,
     119,   362,   536,   800,  1721,   410,   612,   993,   106,   436,
    1043,   363,   922,   368,  1154,   149,  1163,  2426,  1168,   787,
     150,   151,  1292,   107,  1069,   753,   400,  1082,  2492,  1133,
     965,   966,  1138,   574,  1569,   267,  1348,  1481,   623,  1702,
     582,   592,  1100,   412,   108,   117,  1404,   747,  1575,   149,
     268,   715,  1853,  1117,   150,   151,   271,  1118,  1119,  1120,
    1121,   109,  1855,  1122,  1051,  1124,  1051,  1125,   423,  1127,
     575,  1551,   801,  1748,  1749,   272,  1164,   273,  1169,  1052,
    1053,  1052,  1053,   765,   298,  1581,  1293,  1070,  1453,  1589,
     414,  1370,   624,   449,  1570,  1719,   728,  1703,  1188,  1134,
    1371,  1372,  1139,   967,  2493,  1051,  1681,   110,  1576,   549,
    1426,   269,  1294,   968,   969,  1856,   625,   117,   970,  1779,
    1052,  1053,   613,   729,   741,   111,  1765,  1766,  1780,  1781,
    1303,  1155,  1311,  1593,   460,  2502,  1179,  1180,   576,  1181,
    1183,  1185,  1186,  1044,   971,  1582,  1750,   461,  1373,  1590,
    1159,  2656,  1708,  1720,  1198,  1199,  1751,  1752,   483,  2083,
     802,  1203,  1204,   112,  1297,   803,  1687,  1696,   471,  2667,
    1054,  1055,  1054,  1055,  1767,   512,  1782,    64,    65,  2096,
    1349,  1210,  1211,  1212,   299,   393,   538,  1753,  1651,   577,
     539,  1306,  1295,  1594,  2133,   274,  1045,  2136,  1220,  1221,
    1222,   113,  1224,   423,  1226,  2144,  1227,  1454,  2147,   114,
    1709,  1054,  1055,   246,  2552,   550,  2155,   115,   116,  2158,
      64,  1182,  1046,   117,   485,  1682,  2165,  1230,   118,  1232,
    1165,   548,  1170,    83,  2560,   558,   551,   559,  2184,  1234,
     580,  2565,  1296,   561,  2568,  2569,   423,  1242,  1571,   329,
    2027,   552,  1244,   275,  2192,   586,   945,  1790,  1192,  1193,
     330,   300,  1577,  2275,  2276,  2277,  1791,  1792,  1259,  1261,
     301,  1562,  1563,   627,   280,  1710,  1302,  1304,  1307,  1374,
    1375,    64,  1258,  2211,  1312,  1688,  1697,   331,   588,  1318,
    2743,   628,  1531,  1532,  1361,   276,  2746,  1298,   610,  1583,
    1319,   247,   119,  1591,   277,  1768,  1769,  1783,  1784,   611,
    1085,  1231,   615,   248,  1793,  1108,  1327,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,  1712,  1595,   249,    83,
    1299,   149,  1376,  2783,   553,  2784,   150,   151,    84,   619,
    2642,   631,  1377,  1378,   332,    93,   637,  1379,   629,  1391,
    1887,  1888,    64,    65,    64,    65,  1300,  2582,  1770,  2652,
    1785,    85,    94,  1464,  1713,    86,  2278,   705,  1771,  1772,
    1786,  1787,   636,  1380,   642,  1788,   678,   250,   689,   594,
     703,   333,  1564,  1565,  1489,   717,   315,   903,   904,   430,
     251,   710,   554,  1495,   281,   711,   713,   345,   719,  1773,
     282,  1789,   283,   706,   346,    64,    65,  1523,   725,  1524,
    1566,  1625,    64,    65,  1525,  1526,  1527,    87,    64,    65,
    1392,   795,  1714,   749,  1533,  1794,  1795,  1534,   731,  1536,
    1434,   237,  2702,  2703,   555,  2705,   750,  2707,  2708,    95,
    2710,   773,   691,   556,   905,  1538,  1214,  1539,   595,   334,
     906,  1542,  1543,   774,    84,   707,    88,   777,  1435,   785,
     238,  1436,   431,   792,    89,    90,  1549,  1550,  1661,  1662,
     423,  1552,  1553,   793,   316,  2486,   806,    85,  1555,  1715,
    1556,  2023,    96,  1558,   335,  1559,   317,  1801,  1612,   596,
    2737,  1437,  1393,  1394,  2348,   807,  1802,  1803,  1796,   907,
     336,    64,    65,  2357,    64,    65,  1843,  1395,  1797,  1798,
      64,    65,  2366,  1799,   908,   692,   810,    97,   811,  1202,
    1438,   812,  1606,  1439,   817,   420,  1607,   597,  1608,   909,
     239,   820,  1611,    87,   822,   910,   422,  2769,   720,  1800,
     911,   843,  2265,  1663,  1804,   240,   432,  1617,  1396,  1620,
     844,  1622,  1623,  1624,  1626,   851,    64,    65,  1629,  1630,
     860,   708,   420,   421,   422,   867,  1638,    64,    65,  1847,
     318,   862,    88,  1644,   869,  1812,  1813,  1645,  1646,  1647,
      89,    90,   882,   319,    64,    65,  1892,   423,  1652,  1672,
    2574,  1655,   887,  2577,   912,  2579,  2445,   892,   898,   899,
     900,  1667,   923,  1668,   901,   241,  1670,   924,  2591,  2592,
    2298,   721,  2458,   913,   925,   927,    69,  2463,   914,   929,
     915,   934,    70,  1814,   931,  2606,   347,   939,   348,   935,
     944,  1619,   946,  2315,   947,    64,    65,  1849,  1440,  1398,
    1399,   948,   959,   960,   916,   917,   242,   972,   980,  1723,
     440,  1724,   918,   982,  1725,  1726,   243,  1727,   983,  1728,
    1673,    71,   990,   991,   992,  1730,  1048,  1731,  1059,  1441,
     919,  1492,  1057,  1064,  1737,  1805,  1806,  1065,  1659,    64,
      65,  1865,  1114,  1398,  1399,  1115,    72,    64,    65,  1894,
    1116,  1398,  1399,  1128,  1679,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   441,  1130,  1537,   920,  1141,  1142,  1143,
    1145,    73,  1674,  1675,  1144,  1544,  1146,    64,    65,  2100,
    2101,  1398,  1399,  1147,   442,   443,  1148,  1676,  1807,  1844,
    1149,  1846,  1848,   444,  1815,  1816,  1150,  1167,  1808,  1809,
    1172,  1173,  1174,  1810,  1175,  1249,  1176,  1177,  1178,  1191,
    1194,   445,  1253,  1859,  1201,  1208,    74,  1862,  1209,  1200,
    1213,   446,  2109,  2110,  1205,  1215,  1216,  2102,  1677,  1811,
    1228,  1229,  1250,  1251,  1254,  1255,  1308,  1256,  2580,  1257,
    1310,  1891,  1893,  1320,  1314,  1324,  1343,  1344,  1325,  1328,
    1329,  1899,  1330,  2578,  1338,  1910,  1339,  1402,  1340,  1341,
    1406,  1345,  1916,  1346,  2604,  1347,  2590,  1817,  1353,  1354,
    2111,  2595,  1842,  1356,  1357,  1363,  1921,  1818,  1819,  2216,
    1365,  1923,  1187,  1635,  1636,  1925,  2477,  1928,  1929,  1366,
    1931,  1933,  1934,  1368,  1937,  2481,   462,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1950,  1952,  1953,  1820,  1381,
    1955,  1956,  1957,  1958,   463,  1382,  1387,   733,  1383,  1384,
    1964,  1965,  1388,  1389,  1967,  1968,  1969,  1405,  1427,  1971,
    1972,   464,  1452,  1432,  2270,  1433,  1457,  1455,  1458,  1471,
    1456,  1477,  1975,  1976,   465,  1977,  1978,  2501,  1476,  1482,
    2503,  1475,  1483,  2504,  1484,  2505,  1485,  1491,  2103,  2104,
    1493,  1494,   466,  1530,  2654,  2655,   467,  1541,  2658,  1547,
    2660,  1616,  1557,  1548,   734,  2284,  1554,   735,  1561,   468,
    2118,  2119,  2665,  2666,  1560,  1574,  1579,  2670,  2671,  1580,
    1585,  2674,  1586,  1998,  1999,  2000,  2675,  2676,  2001,  1587,
    1588,  2112,  2113,  2003,  2006,  1597,  2008,  2009,  2010,  1598,
    2011,  2012,   521,  2014,   736,  1599,  2017,  2018,  1600,   469,
    1601,  1602,  1621,  1614,  1615,  2021,  1627,   522,  2120,  1628,
    1639,  2105,  1634,  2025,  1640,  1641,  1442,  1653,  2030,  2031,
    1656,  2106,  2107,  1657,  2712,  1660,  2033,  2713,  1669,   523,
     737,  -442,  2716,  1671,  1716,  2036,  1693,  1680,  2719,  1683,
    1698,  1704,  1707,  2722,  1443,  1840,  1729,  1444,  1722,   524,
    1445,  1845,  2108,  1735,  2114,  1717,  1736,  1741,  1760,  1763,
    2287,  1774,  1776,  1778,  2115,  2116,   525,  2005,  1822,   526,
    1823,  2064,  1824,  1858,  1821,  1828,  1860,  1446,  1829,  1832,
    1864,   738,  1831,  1833,   739,  1836,  2016,  1839,  1857,  1861,
    1876,  1878,  1879,  2072,  2073,  2117,   527,   528,  2075,  2742,
    1867,  1890,  1868,  1873,  2078,  1880,  1447,  1896,   740,  1448,
    1877,   741,  1882,  1883,  2764,  1909,  1884,  2767,  1912,  1889,
    1908,   742,  1913,  1924,  1926,  1885,  1961,  1917,  1918,  1930,
    1886,  1973,  1938,  1939,  1954,  2049,  1974,  2778,  1922,  2121,
    2122,  1979,  1980,  1981,  1985,  2055,  1983,  1984,  1986,   529,
    2060,  2785,  1987,  1990,  2786,  2787,  1988,  1989,  1991,   530,
    1992,  2430,  2431,  1993,  2433,  2434,  1994,  1997,  2437,  2438,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1995,  1996,
    2013,  2015,  2019,  2032,  2037,  2127,  2038,  2039,  2040,  2041,
    2042,  2179,  2123,  2180,  2074,  2182,  2076,  2077,  2084,   531,
     532,  2080,  2124,  2125,  1449,  2081,  2082,  2085,  2089,   160,
    2484,  2086,   161,  2091,  2193,  2194,  2195,  2196,  2197,  2198,
    2199,  2200,  2201,  2092,  2093,  2097,  2098,  2138,  2099,  2149,
    2128,  2129,  2130,  2126,  2134,  1450,  2135,  2145,  2207,  2137,
    2209,  2139,   162,  2140,  2141,  2146,  2472,  2148,  2150,  1351,
     163,  2151,  2152,  2156,  2157,  2166,   290,  2215,   423,  2159,
    2160,  1451,  2161,  2219,  2162,  2167,  2617,  2168,  2170,  2171,
     533,  2173,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2231,  2174,  2202,  2244,  2245,  2246,  2247,  2248,  2249,
    2250,  2251,  2252,  2253,  2254,  2255,  2176,  2258,  2680,  2259,
    2260,  2261,  2183,  2185,  2188,  2191,  2203,  2449,  2204,  2205,
     164,  2206,  2262,   423,  2271,  2210,  2257,  2263,  2266,  1031,
    2272,  2274,  2450,  2288,  2289,  2290,  2293,  2451,  2301,  2304,
    2305,  2306,  2307,  1032,  2308,  2334,  2338,   437,  2336,  2341,
   -1098,  2343,  1033,  2344,  2345,  2349,  2279,  2350,  2280,  2351,
    2281,  2352,  2283,  1034,   423,  2285,  2353,  2286,  2564,  2354,
     165,  2358,  2567,  2359,  2291,  2292,  2360,  2361,  2362,  2363,
    2680,  2296,  2367,  2297,  2368,    64,    65,  2300,   166,   167,
    2302,  2369,  2376,  1035,  2379,   168,  2387,   169,  2390,  2393,
    2394,   107,  2396,  2399,  2400,  2401,  2404,  2409,  2601,  2413,
    2429,  2452,  2479,  2453,  1036,  2454,   499,  2455,   506,   509,
    2480,   514,   518,  2457,   170,  2482,  2686,  2488,  2489,  2491,
    2236,  2494,  2495,   825,  2496,  2337,   701,  2497,  2507,   109,
    2498,  2500,  2506,  2516,  2525,  2534,  2540,  2544,  2547,   584,
    2553,  2561,  2572,  2757,  2583,  2584,  2727,  2585,  2586,  2587,
    1037,  2588,   805,  2603,  2610,  2612,  2616,   599,   605,  2613,
    2615,  2623,  2653,  2659,  2692,  2662,  2663,  2303,  2664,  2669,
    2683,  2628,  2684,  2685,  2687,   110,  2693,  2402,  2695,   171,
    2706,  2714,  2456,  2717,  2720,   786,  2729,  2730,  2187,  1038,
    2731,  2738,  2741,  2677,  2751,  2752,  2758,  2766,  2728,  2770,
     687,  2771,  2773,  2777,  2779,  2724,  2335,  2780,  2781,  2782,
       0,     0,   697,     0,  1039,     0,     0,     0,     0,  1151,
       0,     0,     0,     0,  2212,     0,     0,     0,     0,  2407,
       0,   112,   718,     0,     0,     0,     0,     0,     0,     0,
    2414,  2415,  2416,  2417,  2418,  2419,  2420,  2421,  2422,  2423,
    2424,     0,     0,  1040,     0,  1041,  2427,     0,     0,     0,
     423,   423,     0,   423,   423,  2733,  2735,   423,   423,  2439,
    2440,  2441,  2442,  2443,  2444,     0,  2446,  2447,  2448,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   117,  2459,  2460,  2461,  2462,   118,  2464,  2465,  2466,
    2467,  2468,  2469,     0,  2471,     0,     0,  2475,  2476,  1086,
       0,     0,     0,     0,     0,     0,     0,  1087,     0,     0,
       0,     0,     0,  1088,     0,     0,  2483,  1754,     0,   423,
    2485,     0,     0,     0,  2487,   870,     0,     0,  2490,  1764,
     821,     0,   875,     0,  1089,   876,     0,     0,     0,     0,
     877,   828,     0,     0,   879,     0,     0,  1825,  1826,     0,
     836,     0,     0,     0,     0,     0,     0,     0,  1090,     0,
       0,     0,     0,     0,     0,     0,  1091,     0,     0,     0,
       0,     0,     0,     0,  2508,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1092,     0,     0,     0,     0,     0,
     938,     0,  1093,     0,     0,     0,     0,     0,   873,   874,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   878,     0,     0,     0,     0,   881,     0,     0,     0,
       0,     0,     0,     0,     0,   893,  2555,     0,     0,     0,
    2557,     0,     0,     0,     0,     0,     0,  1094,     0,     0,
    2558,  2559,     0,     0,     0,     0,  2563,   423,  1095,     0,
    2566,   423,     0,     0,     0,     0,  2571,     0,     0,  2575,
    2576,   218,     0,     0,  1096,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2593,  2594,
       0,  2596,  2597,  2598,  2599,  2600,   219,   423,  2602,     0,
    1334,     0,  2605,     0,     0,   940,   941,   942,   943,    64,
      65,     0,     0,  1123,  2614,     0,     0,     0,     0,  2618,
    1129,     0,     0,     0,     0,   107,     0,     0,     0,     0,
     220,     0,  1385,     0,     0,  2629,     0,   221,     0,     0,
       0,     0,     0,     0,     0,   285,     0,     0,   222,   223,
       0,     0,     0,     0,     0,   224,     0,     0,     0,     0,
       0,     0,     0,   109,     0,  1084,     0,     0,     0,     0,
       0,     0,     0,  2478,     0,     0,     0,  2641,   225,     0,
       0,     0,  2645,     0,  2647,     0,     0,     0,     0,     0,
    2650,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0,     0,  2657,     0,     0,     0,     0,     0,   110,
     227,   228,     0,     0,     0,     0,     0,   229,     0,     0,
       0,  2668,  2701,     0,     0,  2672,     0,     0,     0,     0,
       0,     0,     0,     0,    64,    65,     0,  1217,   230,     0,
       0,     0,     0,     0,  1219,  2691,     0,     0,     0,     0,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,  2704,     0,     0,     0,   231,  2709,     0,  2711,
       0,     0,     0,     0,     0,     0,  2715,     0,     0,  1235,
    1236,  2718,     0,     0,  1240,     0,  2721,  1243,     0,     0,
       0,     0,     0,   286,     0,     0,     0,     0,     0,  1252,
       0,     0,     0,     0,     0,     0,     0,     0,  2732,  2734,
       0,     0,     0,  2088,     0,   117,  1218,   232,     0,     0,
     118,  2094,  2095,     0,   110,     0,     0,   233,  1223,     0,
       0,   287,  2744,     0,     0,  2745,  2131,  2132,  2747,     0,
       0,     0,     0,     0,     0,     0,     0,  2142,  2143,  2753,
    2754,  2755,  2756,     0,     0,  2589,   234,     0,  2153,  2154,
       0,  2765,     0,     0,  2768,  1233,     0,     0,  2163,  2164,
       0,  2772,     0,  2774,  2169,  2607,     0,     0,     0,  2611,
     112,     0,     0,     0,  2172,     0,     0,     0,     0,     0,
       0,   288,     0,     0,     0,     0,     0,     0,     0,     0,
    1390,     0,     0,     0,     0,     0,     0,  2740,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1323,  2760,
       0,     0,  2763,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1738,  1739,  1740,     0,     0,     0,
       0,     0,     0,     0,  1742,  1743,  1744,     0,     0,     0,
       0,  1755,  1756,  1757,     0,     0,  1758,  1759,     0,  1761,
    1762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1469,     0,     0,     0,     0,     0,  1834,
    1835,     0,     0,  1837,  1838,     0,     0,     0,     0,     0,
       0,     0,     0,   643,   644,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,  1529,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1535,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2232,
     645,     0,     0,     0,  1613,     0,   646,     0,     0,     0,
    2233,     0,     0,   647,     0,   648,     0,     0,     0,     0,
     649,     0,     0,   650,     0,     0,     0,     0,     0,   651,
       0,     0,     0,     0,  1637,  2750,  1086,  2234,     0,  1642,
     652,     0,     0,     0,  1087,     0,   653,     0,     0,  1648,
    1088,     0,  2340,     0,     0,   654,     0,     0,     0,     0,
       0,     0,  2342,     0,     0,     0,  2346,  2347,     0,     0,
     655,  1089,     0,     0,  2235,  2355,  2356,     0,     0,     0,
       0,     0,     0,   517,  2364,  2365,     0,  1610,     0,     0,
    2370,   656,     0,     0,     0,  1090,     0,     0,   107,     0,
    2380,  2381,     0,  1091,  1618,     0,   657,     0,     0,     0,
       0,  2391,  2392,     0,     0,     0,   658,   659,     0,     0,
       0,     0,  2395,     0,     0,     0,     0,     0,  1643,     0,
       0,  2397,     0,  2398,     0,     0,   109,   660,  1649,     0,
       0,  1092,     0,     0,     0,     0,     0,     0,     0,  1093,
       0,     0,     0,     0,     0,     0,     0,  1666,     0,     0,
     661,     0,     0,     0,     0,     0,     0,  1678,     0,     0,
       0,     0,  1686,     0,   662,     0,   663,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
     664,     0,     0,     0,  1094,   665,     0,     0,     0,     0,
       0,   666,     0,     0,     0,  1095,     0,     0,   667,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1498,
       0,  1096,     0,     0,  1499,     0,   668,     0,     0,     0,
    2236,     0,  2237,     0,     0,     0,     0,     0,   112,   669,
     670,     0,   671,     0,     0,     0,  1500,  1501,     0,  1502,
    1503,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1505,  1506,     0,     0,     0,     0,     0,     0,
    1507,     0,   672,  1508,     0,  1911,  2238,  2079,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
    2087,  1509,     0,   118,  2510,  1841,     0,     0,  1510,  1511,
    2090,     0,  1512,     0,  2519,     0,     0,     0,     0,     0,
       0,     0,     0,  2528,     0,     0,     0,     0,     0,     0,
       0,     0,  2537,     0,     0,  1863,     0,     0,     0,  2539,
       0,     0,     0,     0,     0,  1960,     0,     0,     0,     0,
    2543,  1966,     0,     0,     0,     0,  2546,     0,     0,  2548,
       0,     0,  2549,     0,  1897,     0,     0,  1898,     0,     0,
       0,     0,  1513,     0,     0,     0,     0,  1914,  1915,     0,
       0,     0,  2175,     0,     0,  1919,     0,     0,     0,     0,
       0,     0,  1920,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,  1514,  2002,     0,
       0,     0,  1959,  1515,  2007,  1962,  1963,     0,     0,     0,
       0,     0,     0,     0,  1970,     0,     0,     0,     0,  1516,
       0,     0,     0,     0,     0,     0,     0,     0,  1517,  2022,
       0,     0,     0,     0,     0,  2028,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2630,
       0,     0,     0,     0,     0,  1518,  1519,     0,  2632,     0,
       0,     0,     0,     0,  2044,     0,     0,  2634,     0,     0,
       0,     0,  2051,  2637,     0,     0,  1520,  2639,     0,     0,
    2640,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2004,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2020,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1521,     0,     0,  2029,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2034,
       0,  2035,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2043,     0,     0,  2045,     0,  2046,  2047,  2048,  2050,
       0,     0,  2052,     0,     0,  2053,     0,     0,  2054,  2056,
       0,  2057,  2058,  2059,  2061,     0,  2062,  2063,     0,     0,
       0,     0,  2065,  2066,  2067,     0,     0,  2068,  2069,     0,
       0,     0,     0,  2070,  2071,     0,     0,     0,  1665,     0,
       0,     0,     0,     0,  2339,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2371,  2372,  2373,  2374,  2375,  2190,
    2377,  2378,     0,   107,     0,  2382,  2383,  2384,  2385,  2386,
       0,  2388,  2389,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2213,  2214,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,   110,     0,     0,
    2217,  2218,     0,     0,     0,  2220,  2221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2178,     0,     0,
       0,  2181,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2186,     0,     0,  2189,   110,     0,     0,
       0,     0,     0,     0,     0,  2264,     0,     0,  2268,  2269,
       0,     0,     0,   112,     0,     0,  2273,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2282,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2294,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,  2256,     0,     0,     0,     0,     0,     0,  2309,
       0,     0,     0,     0,  2313,     0,     0,     0,     0,     0,
    2318,     0,     0,     0,     0,  2322,     0,     0,     0,  2325,
       0,     0,  2328,   117,     0,  2331,  2509,  2333,   118,  2511,
    2512,  2513,  2514,  2515,     0,  2517,  2518,     0,  2520,  2521,
    2522,  2523,  2524,     0,  2526,  2527,     0,  2529,  2530,  2531,
    2532,  2533,     0,  2535,  2536,     0,  2538,     0,     0,     0,
       0,     0,     0,     0,     0,  2295,  2541,  2542,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2545,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   107,     0,  2326,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,   490,   491,     0,     0,   492,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     493,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2631,     0,     0,     0,     0,
       0,     0,  2470,     0,  2633,     0,     0,     0,     0,     0,
       0,     0,     0,  2635,  2405,  2636,     0,  2408,     0,  2638,
       0,     0,     0,     0,     0,  2412,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,  2425,     0,     0,  2428,     0,     0,     0,   494,  2432,
       0,     0,  2435,  2436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   495,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   496,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,     0,     0,     0,     0,  2696,     0,  2697,     0,
    2698,     0,     0,  2699,     0,  2700,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2499,     0,     0,     0,     0,     0,     0,  2550,     0,
       0,     0,   497,     0,  2554,     0,     0,     0,  2556,     0,
       0,  1407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1408,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     498,     0,  1409,     0,     0,     0,     0,     0,  1410,     0,
       0,   995,   996,   997,  1411,     0,     0,     0,  2551,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1412,     0,     0,     0,     0,     0,     0,     0,
     998,   999,     0,     0,  1000,     0,     0,  1001,     0,     0,
       0,  2570,     0,  1413,  1002,     0,     0,     0,  1003,     0,
     600,   107,  2581,     0,     0,     0,  1004,  1005,  1414,     0,
       0,     0,     0,     0,  1006,  1007,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1008,     0,     0,     0,     0,     0,  1009,  1415,
       0,   601,  1010,  1011,     0,     0,  1012,  2661,     0,     0,
    2622,     0,     0,     0,  2627,     0,     0,     0,     0,     0,
       0,     0,  1013,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1416,     0,
       0,     0,     0,  1014,     0,   110,     0,     0,     0,     0,
       0,     0,  1417,     0,     0,     0,     0,     0,     0,   602,
       0,     0,     0,  1418,     0,     0,  1015,  2643,  2644,     0,
    2646,     0,     0,     0,     0,  2648,  2649,     0,     0,     0,
    2651,     0,     0,     0,     0,     0,     0,     0,     0,  1016,
    1419,     0,     0,     0,     0,     0,     0,     0,     0,  2723,
       0,   112,  1420,     0,  1421,  1422,     0,     0,     0,     0,
       0,     0,     0,  2673,     0,     0,     0,     0,   603,  1017,
    2736,  1018,     0,     0,     0,     0,     0,  1019,  1020,     0,
       0,     0,     0,     0,     0,     0,     0,  2694,     0,     0,
       0,     0,  1021,  1022,  1423,     0,     0,     0,     0,     0,
       0,     0,  1023,  1024,     0,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2761,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1025,     0,
    1026,     0,     0,     0,     0,  2775,     0,     0,  2776,     0,
       0,     0,  1027,   109,  1028,     0,     0,     0,     0,     0,
    1029,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2739,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,  1030,     0,     0,  2748,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2759,     0,     0,  2762,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1262,  1263,  1264,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1265,  1266,     0,     0,  1267,     0,     0,
       0,     0,     0,     0,  1268,     0,     0,  1269,     0,     0,
       0,  1270,     0,     0,     0,     0,     0,     0,     0,  1271,
    1272,   107,     0,     0,     0,     0,     0,  1273,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1274,  1275,     0,     0,  1276,
       0,     0,   504,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,  1277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1278,     0,     0,   508,
       0,     0,   107,     0,     0,   110,     0,     0,     0,     0,
       0,     0,  1322,     0,     0,     0,     0,     0,     0,  1279,
       0,     0,     0,     0,     0,     0,     0,     0,  1280,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   110,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1281,     0,  1282,     0,     0,     0,     0,     0,
    1283,  1284,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1285,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1286,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,  1287,     0,  1288,     0,     0,     0,     0,     0,     0,
       0,     0,   112,  1289,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1290,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,  1291,     0,     0,
       0,     0,     0,   505,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     1,     0,     0,     2,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,   175,     0,     0,   176,     0,     0,   177,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
     179,   180,   181,     0,     0,     0,     0,     0,     0,     0,
     182,    16,   183,     0,     0,     0,     0,   184,     0,   185,
     186,   187,     0,     0,    17,     0,     0,   188,    18,   189,
       0,    19,     0,     0,     0,    20,    21,     0,     0,     0,
       0,     0,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   190,     0,
       0,     0,    24,     0,     0,    25,    26,    27,     0,     0,
      28,    29,     0,     0,     0,     0,   191,     0,     0,     0,
       0,     0,     0,     0,    30,     0,   192,   193,     0,     0,
     194,     0,   973,     0,   195,     0,   196,   974,     0,     0,
       0,    31,    32,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,    35,   197,   198,
       0,     0,   199,     0,    36,     0,     0,     0,    37,     0,
       0,    38,   200,    39,  1359,    40,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     202,     0,     0,    42,     0,     0,     0,   203,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,     0,     0,     0,     0,
       0,   204,     0,   205,     0,     0,    46,     0,    47,     0,
       0,     0,     0,     0,    48,     0,     0,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,   206,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   207,   208,     0,     0,     0,     0,    51,     0,
       0,   209,     0,     0,     0,    52,     0,     0,   210,     0,
       0,     0,     0,     0,   211,     0,   212,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,   213,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1360,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148
};

static const yytype_int16 yycheck[] =
{
       3,    50,   663,  1445,     4,   481,   967,     0,    11,   970,
    1645,     5,  1647,     5,   996,   437,     4,    27,     5,   658,
     659,     3,     4,     3,     4,   447,   987,     3,     4,    32,
      47,    21,     4,     4,     4,     3,     4,    40,     5,     3,
       4,    14,     3,     4,    27,     4,    49,     3,     4,    52,
       3,     4,    55,     3,     4,    32,    59,   132,  1144,    62,
    1146,     4,     5,    66,    67,     4,    49,    70,    36,    52,
      73,    74,     3,     4,    77,     3,     4,     5,    81,    20,
      63,    92,     5,    86,     4,    99,  1172,  1173,  1174,    62,
       3,     4,     3,     4,    32,    67,    99,   100,   101,   102,
     103,   104,    32,    86,     5,    36,    40,   875,   876,   877,
       5,     4,     5,    32,   101,    27,    79,   120,     6,    88,
     107,   104,   141,    36,    67,    57,    88,    40,     4,     3,
       4,   105,    17,     3,     4,     3,     4,    21,   196,     3,
       4,   196,    67,  2679,    21,   136,    89,     5,    51,   121,
       5,     5,   155,   228,    17,   141,   287,   123,    33,   169,
     179,   172,    17,   134,     4,     3,     4,   135,   168,   147,
     938,     3,     4,    31,    21,   178,    17,   265,   121,   113,
     183,   234,     3,     4,   272,   141,     4,     3,     4,  2725,
     159,    67,    60,   179,   113,   253,    21,   159,   101,   142,
     113,    89,    21,    16,   135,   260,   126,   110,   190,    79,
     285,     4,   175,     4,   196,   100,   190,    14,    15,     5,
     193,   197,   135,   179,    67,    57,   190,    62,   121,   190,
     200,    21,   242,   205,   122,    12,   139,   207,   208,    57,
     243,   213,   214,     3,     4,   121,   295,    62,   143,    40,
     264,   125,   242,   235,   915,     4,   259,   260,   275,   250,
     137,   125,   205,   197,   183,    62,   185,   278,   187,   188,
     213,   214,   275,   243,   277,   285,   195,    54,   260,   701,
      40,   247,   285,   286,   197,   288,   289,   219,   291,   209,
     253,   210,    14,   266,   287,    72,   288,   238,   301,    21,
      60,   289,     4,   276,    26,   175,   273,   284,   311,   312,
     249,    33,   205,   307,   314,   295,   228,   304,    67,   295,
     213,   214,   113,   305,   295,   102,   298,   295,   251,   205,
     289,   334,   335,   336,   307,   338,     4,   213,   214,   342,
     343,   305,   295,   120,   305,   295,   284,   124,   249,    71,
     353,   354,   215,   113,   284,   298,   196,   360,   242,  1020,
     137,   304,   365,   366,   295,   242,    27,   349,   350,   288,
     373,   354,   121,   376,   215,   347,   230,  1038,   348,   307,
     352,   353,   295,   253,   295,   349,   350,   219,   349,   350,
     228,   394,   395,   270,   297,   242,   193,   194,   401,   402,
     403,   219,   405,   196,   347,   298,   197,   228,   351,   352,
     353,   304,   228,   253,   836,  1376,   419,   242,  1379,   121,
     423,   314,   298,   242,  1406,   428,   429,   430,   431,   432,
     433,  1070,   435,   296,   437,   438,   439,   197,   160,   161,
     162,   163,   164,   165,   447,   448,   168,   169,   170,   171,
     285,  1433,   242,   121,   347,   296,   205,   879,   249,   352,
     353,     5,  1101,    62,   213,   214,    27,  1235,  2029,   266,
     285,   347,     5,   308,  1456,  1243,   352,   353,     5,   276,
     277,    14,    15,    34,  2045,  2046,  2047,    16,  1574,  2050,
     167,  2052,  2053,   308,    58,  2056,  2057,  2058,   501,   502,
    2061,  2062,    40,   205,  2065,    40,  2067,  2068,   169,  2070,
     307,   213,   214,    57,   159,    40,   519,   436,   295,    64,
      44,    64,    66,   122,    14,    15,    27,     3,     4,    62,
       4,   291,     4,   582,    13,   257,   258,   205,   107,    62,
      62,   216,   187,   546,   265,   213,   214,    62,    37,   298,
      89,   272,     3,     4,     3,     4,    84,   123,   109,    48,
      64,   106,     4,   106,    88,   287,    62,    30,   171,   133,
      12,   152,    62,   101,   623,   113,   579,   180,   113,    37,
       0,   242,    27,   126,     4,    57,    75,   289,   113,   425,
     426,   268,   119,   642,     3,     4,   298,     4,   347,   122,
     122,   107,   106,   352,   353,   234,   525,   122,   330,   331,
     332,   614,     4,     5,     4,     4,     5,  2178,     3,     4,
    2181,   123,     0,  1284,   285,  2186,   122,     4,  2189,   198,
     298,   272,   307,    96,  1295,    31,     6,   640,     4,   197,
      30,     5,   561,     5,   159,   347,    62,  2208,    62,   125,
     352,   353,    67,    19,   657,   206,     5,   660,  2293,   197,
     193,   194,   197,   152,    62,   229,    17,   228,   195,   170,
     199,   195,   197,     5,    40,   219,   242,   276,    62,   347,
     244,   262,   251,   686,   352,   353,    46,   690,   691,   692,
     693,    57,   198,   696,   239,   698,   239,   700,   701,   702,
     189,  1123,   165,   193,   194,    65,   122,    67,   122,   254,
     255,   254,   255,   192,    71,    62,   131,   262,   123,    62,
       5,     5,   249,     4,   122,   170,   249,   228,   777,   267,
      14,    15,   267,   266,  2295,   239,   123,   103,   122,   197,
     242,   305,   157,   276,   277,   251,   273,   219,   281,     5,
     254,   255,   122,   276,   276,   121,    14,    15,    14,    15,
     211,   276,   211,    62,   119,  2326,   769,   770,   257,   772,
     773,   774,   775,   163,   307,   122,   266,    67,    62,   122,
     276,  2575,   170,   228,   787,   788,   276,   277,   287,  1750,
     253,   794,   795,   159,    30,   258,   123,   123,   120,  2593,
     345,   346,   345,   346,    62,    33,    62,     3,     4,  1770,
     161,   814,   815,   816,   171,   200,     5,   307,  1240,   308,
      90,    17,   237,   122,  1785,   185,   216,  1788,   831,   832,
     833,   197,   835,   836,   837,  1796,   839,   242,  1799,   205,
     228,   345,   346,    26,  2405,    46,  1807,   213,   214,  1810,
       3,     4,   242,   219,   171,   242,  1817,   860,   224,   862,
     276,    16,   276,    28,  2425,    67,    67,   235,  1850,   872,
      90,  2432,   287,   286,  2435,  2436,   879,   880,   276,    37,
    1648,    82,   885,   243,  1866,    73,   608,     5,     4,     5,
      48,   248,   276,  1979,  1980,  1981,    14,    15,   901,   902,
     257,    42,    43,    95,   206,   293,   909,   910,   911,   193,
     194,     3,     4,  1895,   917,   242,   242,    75,    31,   922,
    2714,   113,     4,     5,   973,   285,  2720,   163,     5,   276,
     933,   114,   298,   276,   294,   193,   194,   193,   194,     4,
     662,   860,     4,   126,    62,   667,   949,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   132,   276,   161,    28,
     216,   347,   266,  2777,   185,  2779,   352,   353,   153,     5,
    2551,     5,   276,   277,   152,    84,     5,   281,   190,    83,
       4,     5,     3,     4,     3,     4,   242,  2449,   266,  2570,
     266,   176,   101,  1016,   170,   180,  1998,    55,   276,   277,
     276,   277,     4,   307,     5,   281,     5,   210,     5,   152,
       4,   189,   173,   174,  1037,     5,    26,     4,     5,    40,
     223,     4,   243,  1046,   346,     4,     4,    16,     4,   307,
     352,   307,   354,    91,    23,     3,     4,  1060,    99,  1062,
     201,    60,     3,     4,  1067,  1068,  1069,   232,     3,     4,
     154,    12,   228,     5,  1077,   193,   194,  1080,   122,  1082,
      22,    89,  2643,  2644,   285,  2646,     4,  2648,  2649,   178,
    2651,   273,    40,   294,    61,  1098,   818,  1100,   221,   257,
      67,  1104,  1105,     4,   153,   143,   271,     4,    50,     4,
     118,    53,   113,     4,   279,   280,  1119,  1120,    24,    25,
    1123,  1124,  1125,     5,   114,    60,     4,   176,  1131,   285,
    1133,   180,   221,  1136,   292,  1138,   126,     5,  1187,   262,
    2701,    83,   226,   227,  2105,   200,    14,    15,   266,   116,
     308,     3,     4,  2114,     3,     4,     5,   241,   276,   277,
       3,     4,  2123,   281,   131,   113,     4,   256,     4,    12,
     112,     4,  1175,   115,     4,     9,  1179,   300,  1181,   146,
     188,     5,  1185,   232,     5,   152,    11,  2748,    40,   307,
     157,     5,  1960,    99,    62,   203,   197,  1200,   282,  1202,
     272,  1204,  1205,  1206,  1207,   171,     3,     4,  1211,  1212,
       4,   249,     9,    10,    11,   180,  1219,     3,     4,     5,
     210,     4,   271,  1226,   171,    14,    15,  1230,  1231,  1232,
     279,   280,     4,   223,     3,     4,     5,  1240,  1241,    83,
    2441,  1244,   199,  2444,   211,  2446,  2228,   199,     5,     5,
       4,  1254,   191,  1256,   199,   263,  1259,   191,  2459,  2460,
    2028,   113,  2244,   230,    67,    67,   190,  2249,   235,    67,
     237,     5,   196,    62,   228,  2476,   245,     5,   247,   229,
       4,  1200,     4,  2051,     4,     3,     4,     5,   230,     7,
       8,   199,    88,     5,   261,   262,   304,    88,     5,  1302,
      35,  1304,   269,     4,  1307,  1308,   314,  1310,     4,  1312,
     154,   235,     5,     5,     4,  1318,     5,  1320,    17,   261,
     287,  1043,   101,     4,  1327,   193,   194,     5,  1247,     3,
       4,     5,    17,     7,     8,    17,   260,     3,     4,     5,
       4,     7,     8,     4,  1263,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   108,     4,  1097,   343,     4,    99,     5,
      88,   305,   226,   227,     5,  1107,     4,     3,     4,    14,
      15,     7,     8,     5,   129,   130,     5,   241,   266,  1402,
      88,  1404,  1405,   138,   193,   194,     5,     4,   276,   277,
       5,     5,     4,   281,     4,   168,     5,     5,     5,     4,
       4,   156,   159,  1426,     5,     4,   350,  1430,     4,    12,
       4,   166,    14,    15,    12,     4,     4,    62,   282,   307,
       5,     5,     5,     4,   159,     4,   261,     5,  2447,     4,
     261,  1454,  1455,     5,   289,     4,   274,   274,     5,     5,
       5,  1464,     5,  2445,     4,  1468,     4,   242,     5,     5,
     107,     5,  1475,     5,  2473,     5,  2458,   266,     4,     4,
      62,  2463,  1401,     5,     5,     5,  1489,   276,   277,  1911,
       5,  1494,     6,  1215,  1216,  1498,  2264,  1500,  1501,     5,
    1503,  1504,  1505,     5,  1507,  2273,    54,  1510,  1511,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,   307,     4,
    1523,  1524,  1525,  1526,    72,     4,     4,    62,     5,     5,
    1533,  1534,     5,     5,  1537,  1538,  1539,   242,     5,  1542,
    1543,    89,    40,   141,  1966,   107,     5,   242,   215,    40,
     107,     5,  1555,  1556,   102,  1558,  1559,  2325,   215,     4,
    2328,   247,     5,  2331,     5,  2333,   215,   215,   193,   194,
       4,     4,   120,     5,  2573,  2574,   124,     5,  2577,     5,
    2579,    12,   113,     5,   119,  2007,     4,   122,     4,   137,
      14,    15,  2591,  2592,   113,     5,     5,  2596,  2597,     5,
       4,  2600,     5,  1606,  1607,  1608,  2605,  2606,  1611,     5,
       4,   193,   194,  1616,  1617,     5,  1619,  1620,  1621,     5,
    1623,  1624,    45,  1626,   159,     4,  1629,  1630,     5,   177,
       5,     4,    12,     5,     5,  1638,     6,    60,    62,     4,
       4,   266,     5,  1646,     4,     4,    22,     4,  1651,  1652,
      38,   276,   277,    38,  2653,     5,  1659,  2656,     4,    82,
     195,     0,  2661,     5,     4,  1668,   141,   242,  2667,   242,
     242,   170,   123,  2672,    50,  1397,   199,    53,   211,   102,
      56,  1403,   307,     4,   266,   251,     4,     4,     4,     4,
      12,     5,     5,     5,   276,   277,   119,  1616,     5,   122,
       5,  1704,     5,  1425,   274,     4,  1428,    83,     4,     4,
    1432,   246,     5,     4,   249,     4,     6,     5,     5,     5,
     311,     4,     4,  1726,  1727,   307,   149,   150,  1731,  2711,
     242,  1453,   242,   242,  1737,     4,   112,  1459,   273,   115,
     311,   276,     4,     4,  2743,  1467,     4,  2746,  1470,     4,
       4,   286,     5,     5,   228,   311,     5,  1479,  1480,   228,
     311,     5,   228,   228,   228,  1684,     4,  2766,  1490,   193,
     194,     5,     5,     4,     4,  1694,     5,     5,     4,   202,
    1699,  2780,     4,     4,  2783,  2784,     5,     5,     4,   212,
       5,  2213,  2214,     5,  2216,  2217,     4,     4,  2220,  2221,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,     5,     5,
       5,     4,     4,     4,     4,   274,     5,     5,     5,     5,
       5,  1844,   266,  1846,     4,  1848,     5,     4,     4,   272,
     273,     5,   276,   277,   230,     5,     5,     4,     4,    44,
    2282,     5,    47,     5,  1867,  1868,  1869,  1870,  1871,  1872,
    1873,  1874,  1875,     5,     5,     4,     4,   274,     5,   274,
       5,     5,     5,   307,     4,   261,     4,     4,  1891,     5,
    1893,     5,    77,     5,     5,     4,   307,     5,     5,   966,
      85,     5,     5,     4,     4,     4,    32,  1910,  1911,     5,
       5,   287,     5,  1916,     5,     4,     6,     5,     4,     4,
     343,     4,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,     4,     4,  1937,  1938,  1939,  1940,  1941,  1942,
    1943,  1944,  1945,  1946,  1947,  1948,     5,  1950,  2609,  1952,
    1953,  1954,     5,     5,     5,     5,     4,   355,     5,     4,
     145,     4,     4,  1966,  1967,     5,     5,     4,     4,    67,
       4,     4,   355,     5,     5,     4,     4,   355,     5,     5,
       5,     5,     5,    81,     5,     4,     4,   113,     5,     4,
     287,     5,    90,     5,     5,     4,  1999,     4,  2001,     5,
    2003,     5,  2005,   101,  2007,  2008,     5,  2010,  2430,     5,
     195,     4,  2434,     4,  2017,  2018,     5,     5,     5,     5,
    2681,  2024,     4,  2026,     4,     3,     4,  2030,   213,   214,
    2033,     5,     4,   131,     4,   220,     4,   222,     4,     4,
       4,    19,     4,     4,     4,     4,     4,     4,  2470,     4,
       4,   355,     4,   355,   152,   355,   182,   355,   184,   185,
       4,   187,   188,   355,   249,     4,     6,     5,     5,     4,
     287,     5,     4,   424,     5,  2078,   290,     4,     4,    57,
       5,     5,     5,     4,     4,     4,     4,     4,     4,   215,
       4,     4,     4,  2736,     5,     4,   355,     5,     5,     5,
     198,     4,   380,     5,     5,     4,     4,   233,   234,     5,
       5,     5,     4,     4,  2618,     5,     4,  2036,     4,     4,
       4,  2507,     5,     5,     4,   103,     4,  2176,     4,   314,
       4,     4,  2239,     5,     4,   349,     5,     5,  1860,   237,
       4,     4,     4,  2607,     5,     5,     5,     4,  2681,     5,
     276,     5,     5,     4,     4,  2677,  2075,     5,     5,     5,
      -1,    -1,   288,    -1,   262,    -1,    -1,    -1,    -1,   736,
      -1,    -1,    -1,    -1,  1896,    -1,    -1,    -1,    -1,  2182,
      -1,   159,   308,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,    -1,    -1,   301,    -1,   303,  2209,    -1,    -1,    -1,
    2213,  2214,    -1,  2216,  2217,  2691,  2692,  2220,  2221,  2222,
    2223,  2224,  2225,  2226,  2227,    -1,  2229,  2230,  2231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   219,  2245,  2246,  2247,  2248,   224,  2250,  2251,  2252,
    2253,  2254,  2255,    -1,  2257,    -1,    -1,  2260,  2261,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,  2279,  1344,    -1,  2282,
    2283,    -1,    -1,    -1,  2287,   499,    -1,    -1,  2291,  1356,
     416,    -1,   506,    -1,   128,   509,    -1,    -1,    -1,    -1,
     514,   427,    -1,    -1,   518,    -1,    -1,  1374,  1375,    -1,
     436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2337,    -1,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   198,    -1,    -1,    -1,    -1,    -1,
     584,    -1,   206,    -1,    -1,    -1,    -1,    -1,   504,   505,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   517,    -1,    -1,    -1,    -1,   522,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   531,  2409,    -1,    -1,    -1,
    2413,    -1,    -1,    -1,    -1,    -1,    -1,   251,    -1,    -1,
    2423,  2424,    -1,    -1,    -1,    -1,  2429,  2430,   262,    -1,
    2433,  2434,    -1,    -1,    -1,    -1,  2439,    -1,    -1,  2442,
    2443,    19,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2461,  2462,
      -1,  2464,  2465,  2466,  2467,  2468,    44,  2470,  2471,    -1,
     954,    -1,  2475,    -1,    -1,   601,   602,   603,   604,     3,
       4,    -1,    -1,   697,  2487,    -1,    -1,    -1,    -1,  2492,
     704,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      78,    -1,   986,    -1,    -1,  2508,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    96,    97,
      -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,   661,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2265,    -1,    -1,    -1,  2550,   126,    -1,
      -1,    -1,  2555,    -1,  2557,    -1,    -1,    -1,    -1,    -1,
    2563,    -1,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,  2576,    -1,    -1,    -1,    -1,    -1,   103,
     158,   159,    -1,    -1,    -1,    -1,    -1,   165,    -1,    -1,
      -1,  2594,  2641,    -1,    -1,  2598,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,   821,   186,    -1,
      -1,    -1,    -1,    -1,   828,  2618,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,  2645,    -1,    -1,    -1,   224,  2650,    -1,  2652,
      -1,    -1,    -1,    -1,    -1,    -1,  2659,    -1,    -1,   873,
     874,  2664,    -1,    -1,   878,    -1,  2669,   881,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,   893,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2691,  2692,
      -1,    -1,    -1,  1760,    -1,   219,   822,   275,    -1,    -1,
     224,  1768,  1769,    -1,   103,    -1,    -1,   285,   834,    -1,
      -1,   235,  2715,    -1,    -1,  2718,  1783,  1784,  2721,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1794,  1795,  2732,
    2733,  2734,  2735,    -1,    -1,  2457,   314,    -1,  1805,  1806,
      -1,  2744,    -1,    -1,  2747,   871,    -1,    -1,  1815,  1816,
      -1,  2754,    -1,  2756,  1821,  2477,    -1,    -1,    -1,  2481,
     159,    -1,    -1,    -1,  1831,    -1,    -1,    -1,    -1,    -1,
      -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     994,    -1,    -1,    -1,    -1,    -1,    -1,  2706,    -1,    -1,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   944,  2738,
      -1,    -1,  2741,    -1,    -1,   224,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1328,  1329,  1330,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1338,  1339,  1340,    -1,    -1,    -1,
      -1,  1345,  1346,  1347,    -1,    -1,  1350,  1351,    -1,  1353,
    1354,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1019,    -1,    -1,    -1,    -1,    -1,  1383,
    1384,    -1,    -1,  1387,  1388,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,    -1,    -1,  1071,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1081,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      61,    -1,    -1,    -1,  1188,    -1,    67,    -1,    -1,    -1,
      67,    -1,    -1,    74,    -1,    76,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,  1218,  2727,    93,    94,    -1,  1223,
     101,    -1,    -1,    -1,   101,    -1,   107,    -1,    -1,  1233,
     107,    -1,  2089,    -1,    -1,   116,    -1,    -1,    -1,    -1,
      -1,    -1,  2099,    -1,    -1,    -1,  2103,  2104,    -1,    -1,
     131,   128,    -1,    -1,   131,  2112,  2113,    -1,    -1,    -1,
      -1,    -1,    -1,     4,  2121,  2122,    -1,  1183,    -1,    -1,
    2127,   152,    -1,    -1,    -1,   152,    -1,    -1,    19,    -1,
    2137,  2138,    -1,   160,  1200,    -1,   167,    -1,    -1,    -1,
      -1,  2148,  2149,    -1,    -1,    -1,   177,   178,    -1,    -1,
      -1,    -1,  2159,    -1,    -1,    -1,    -1,    -1,  1224,    -1,
      -1,  2168,    -1,  2170,    -1,    -1,    57,   198,  1234,    -1,
      -1,   198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1253,    -1,    -1,
     221,    -1,    -1,    -1,    -1,    -1,    -1,  1263,    -1,    -1,
      -1,    -1,  1268,    -1,   235,    -1,   237,    -1,    -1,    -1,
      -1,    -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     251,    -1,    -1,    -1,   251,   256,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,   262,    -1,    -1,   269,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,   278,    -1,    -1,    27,    -1,   287,    -1,    -1,    -1,
     287,    -1,   289,    -1,    -1,    -1,    -1,    -1,   159,   300,
     301,    -1,   303,    -1,    -1,    -1,    49,    50,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,   343,    86,    -1,  1469,   343,  1741,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,
    1754,   104,    -1,   224,  2341,  1401,    -1,    -1,   111,   112,
    1764,    -1,   115,    -1,  2351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2360,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2369,    -1,    -1,  1431,    -1,    -1,    -1,  2376,
      -1,    -1,    -1,    -1,    -1,  1529,    -1,    -1,    -1,    -1,
    2387,  1535,    -1,    -1,    -1,    -1,  2393,    -1,    -1,  2396,
      -1,    -1,  2399,    -1,  1460,    -1,    -1,  1463,    -1,    -1,
      -1,    -1,   175,    -1,    -1,    -1,    -1,  1473,  1474,    -1,
      -1,    -1,  1836,    -1,    -1,  1481,    -1,    -1,    -1,    -1,
      -1,    -1,  1488,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,    -1,    -1,    -1,    -1,    -1,    -1,   230,  1612,    -1,
      -1,    -1,  1528,   236,  1618,  1531,  1532,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1540,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,  1643,
      -1,    -1,    -1,    -1,    -1,  1649,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2516,
      -1,    -1,    -1,    -1,    -1,   288,   289,    -1,  2525,    -1,
      -1,    -1,    -1,    -1,  1678,    -1,    -1,  2534,    -1,    -1,
      -1,    -1,  1686,  2540,    -1,    -1,   309,  2544,    -1,    -1,
    2547,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1616,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1634,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   354,    -1,    -1,  1650,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1665,
      -1,  1667,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1677,    -1,    -1,  1680,    -1,  1682,  1683,  1684,  1685,
      -1,    -1,  1688,    -1,    -1,  1691,    -1,    -1,  1694,  1695,
      -1,  1697,  1698,  1699,  1700,    -1,  1702,  1703,    -1,    -1,
      -1,    -1,  1708,  1709,  1710,    -1,    -1,  1713,  1714,    -1,
      -1,    -1,    -1,  1719,  1720,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    -1,  2088,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1841,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2128,  2129,  2130,  2131,  2132,  1863,
    2134,  2135,    -1,    19,    -1,  2139,  2140,  2141,  2142,  2143,
      -1,  2145,  2146,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1897,  1898,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,   103,    -1,    -1,
    1914,  1915,    -1,    -1,    -1,  1919,  1920,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1843,    -1,    -1,
      -1,  1847,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1859,    -1,    -1,  1862,   103,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1959,    -1,    -1,  1962,  1963,
      -1,    -1,    -1,   159,    -1,    -1,  1970,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1892,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2004,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2020,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,
      -1,    -1,  1948,    -1,    -1,    -1,    -1,    -1,    -1,  2043,
      -1,    -1,    -1,    -1,  2048,    -1,    -1,    -1,    -1,    -1,
    2054,    -1,    -1,    -1,    -1,  2059,    -1,    -1,    -1,  2063,
      -1,    -1,  2066,   219,    -1,  2069,  2340,  2071,   224,  2343,
    2344,  2345,  2346,  2347,    -1,  2349,  2350,    -1,  2352,  2353,
    2354,  2355,  2356,    -1,  2358,  2359,    -1,  2361,  2362,  2363,
    2364,  2365,    -1,  2367,  2368,    -1,  2370,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2021,  2380,  2381,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2391,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    19,    -1,  2064,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    67,    -1,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2519,    -1,    -1,    -1,    -1,
      -1,    -1,  2256,    -1,  2528,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2537,  2180,  2539,    -1,  2183,    -1,  2543,
      -1,    -1,    -1,    -1,    -1,  2191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,
      -1,  2207,    -1,    -1,  2210,    -1,    -1,    -1,   171,  2215,
      -1,    -1,  2218,  2219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,    -1,    -1,    -1,  2630,    -1,  2632,    -1,
    2634,    -1,    -1,  2637,    -1,  2639,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2307,    -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,
      -1,    -1,   275,    -1,  2408,    -1,    -1,    -1,  2412,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,
      -1,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,    -1,
     343,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    20,    21,    22,   113,    -1,    -1,    -1,  2404,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,    -1,
      -1,  2437,    -1,   152,    63,    -1,    -1,    -1,    67,    -1,
      18,    19,  2448,    -1,    -1,    -1,    75,    76,   167,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   107,   198,
      -1,    59,   111,   112,    -1,    -1,   115,  2581,    -1,    -1,
    2496,    -1,    -1,    -1,  2500,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   237,    -1,
      -1,    -1,    -1,   152,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,   251,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,    -1,    -1,   262,    -1,    -1,   175,  2553,  2554,    -1,
    2556,    -1,    -1,    -1,    -1,  2561,  2562,    -1,    -1,    -1,
    2566,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,
     289,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2673,
      -1,   159,   301,    -1,   303,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2599,    -1,    -1,    -1,    -1,   176,   228,
    2694,   230,    -1,    -1,    -1,    -1,    -1,   236,   237,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2623,    -1,    -1,
      -1,    -1,   251,   252,   343,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   261,   262,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2739,   224,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,
     289,    -1,    -1,    -1,    -1,  2759,    -1,    -1,  2762,    -1,
      -1,    -1,   301,    57,   303,    -1,    -1,    -1,    -1,    -1,
     309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   291,   343,    -1,    -1,  2723,    -1,   103,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2738,    -1,    -1,  2741,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    19,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    -1,
     224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,   115,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    -1,    -1,   283,
      -1,    -1,    19,    -1,    -1,   103,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,   175,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   103,    -1,
      -1,   159,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,   230,    -1,    -1,    -1,    -1,    -1,
     236,   237,    -1,    -1,    -1,    -1,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   262,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,    -1,
      -1,   287,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   159,   299,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,
      -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    41,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,   127,    80,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    -1,    -1,   140,    -1,    -1,    95,   144,    97,
      -1,   147,    -1,    -1,    -1,   151,   152,    -1,    -1,    -1,
      -1,    -1,   158,    -1,    -1,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,   178,    -1,    -1,   181,   182,   183,    -1,    -1,
     186,   187,    -1,    -1,    -1,    -1,   144,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   200,    -1,   154,   155,    -1,    -1,
     158,    -1,   159,    -1,   162,    -1,   164,   164,    -1,    -1,
      -1,   217,   218,   219,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,    -1,   233,   186,   187,
      -1,    -1,   190,    -1,   240,    -1,    -1,    -1,   244,    -1,
      -1,   247,   200,   249,   164,   251,    -1,    -1,    -1,    -1,
     256,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,    -1,    -1,   269,    -1,    -1,    -1,   225,    -1,   275,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   290,   291,    -1,    -1,    -1,    -1,
      -1,   249,    -1,   251,    -1,    -1,   302,    -1,   304,    -1,
      -1,    -1,    -1,    -1,   310,    -1,    -1,   313,   314,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   290,   291,    -1,    -1,    -1,    -1,   344,    -1,
      -1,   299,    -1,    -1,    -1,   351,    -1,    -1,   306,    -1,
      -1,    -1,    -1,    -1,   312,    -1,   314,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   351,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    60,    65,    66,    68,    69,    70,
      78,    85,    87,    88,    97,    98,   127,   140,   144,   147,
     151,   152,   158,   164,   178,   181,   182,   183,   186,   187,
     200,   217,   218,   219,   231,   233,   240,   244,   247,   249,
     251,   256,   269,   275,   290,   291,   302,   304,   310,   313,
     314,   344,   351,   357,    67,    12,    54,    72,   102,   120,
     124,   137,   295,   391,     3,     4,   295,   358,   396,   190,
     196,   235,   260,   305,   350,   398,   287,     4,    40,   113,
     197,   249,   403,    28,   153,   176,   180,   232,   271,   279,
     280,   373,   405,    84,   101,   178,   221,   256,   406,    40,
      60,   113,   197,   291,   358,   415,     4,    19,    40,    57,
     103,   121,   159,   197,   205,   213,   214,   219,   224,   298,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   347,
     352,   353,   360,   368,   369,   370,   417,    33,   418,   360,
      44,    47,    77,    85,   145,   195,   213,   214,   220,   222,
     249,   314,   359,   147,   420,    41,    44,    47,    66,    68,
      69,    70,    78,    80,    85,    87,    88,    89,    95,    97,
     126,   144,   154,   155,   158,   162,   164,   186,   187,   190,
     200,   217,   218,   225,   249,   251,   275,   290,   291,   299,
     306,   312,   314,   351,   421,    84,   101,   463,    19,    44,
      78,    85,    96,    97,   103,   126,   144,   158,   159,   165,
     186,   224,   275,   285,   314,   466,   360,    89,   118,   188,
     203,   263,   304,   314,   472,    16,    26,   114,   126,   161,
     210,   223,   475,   234,   493,     5,    67,    89,   142,   304,
     351,   360,   494,     5,   495,    58,   133,   229,   244,   305,
     511,    46,    65,    67,   185,   243,   285,   294,   530,    67,
     206,   346,   352,   354,   531,    39,   197,   235,   295,   358,
     368,   370,   532,     5,   304,   314,   360,   535,    71,   171,
     248,   257,   536,     4,   537,    89,   511,    62,   285,   308,
     544,   197,   295,   358,   545,    26,   114,   126,   210,   223,
     547,    51,   101,   110,   139,   297,   562,   563,     4,    37,
      48,    75,   152,   189,   257,   292,   308,   386,     4,   126,
     209,   564,   295,   358,   566,    16,    23,   245,   247,   369,
     567,   234,   571,   295,   358,   572,     0,     5,   143,    60,
     358,   392,   272,     5,     4,   295,   358,   393,     5,    32,
     284,   394,   125,   358,   395,   125,   358,   397,   358,     4,
     196,   253,   401,   190,   305,   349,   350,   358,   400,   360,
     141,   179,   399,   200,   358,    79,   175,   253,   358,   402,
       5,   358,     4,   249,   404,   358,   358,     5,   230,   407,
      31,   408,     5,   409,     5,   413,     5,    31,   414,   358,
       9,    10,    11,   358,   364,   365,   366,   367,   358,   358,
      40,   113,   197,   358,   416,   358,   197,   368,   370,   358,
      35,   108,   129,   130,   138,   156,   166,   375,   358,     4,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     119,    67,    54,    72,    89,   102,   120,   124,   137,   177,
     422,   120,   424,   190,   196,   235,   260,   305,   349,   350,
     358,   410,   425,   287,   428,   171,   429,   171,   180,   431,
      66,    67,    70,    93,   171,   189,   211,   275,   343,   368,
     433,   358,   370,   436,    60,   291,   368,   437,   283,   368,
     370,   438,    33,   439,   368,   370,   440,     4,   368,   370,
     441,    45,    60,    82,   102,   119,   122,   149,   150,   202,
     212,   272,   273,   343,   445,   216,   307,   451,     5,    90,
       6,    89,   122,   443,     5,    66,   370,   442,    16,   511,
      46,    67,    82,   185,   243,   285,   294,   452,    67,   235,
     453,   286,    62,   285,   308,   454,    21,   137,   242,   270,
     455,    37,    48,    75,   152,   189,   257,   308,   456,   370,
      90,    16,   199,   461,   368,   464,    73,   467,    31,   468,
      44,    88,   195,   469,   152,   221,   262,   300,   470,   368,
      18,    59,   117,   176,   291,   368,   471,     4,   196,   474,
       5,     4,     6,   122,   358,     4,     5,   249,   476,     5,
     478,     5,   119,   195,   249,   273,   479,    95,   113,   190,
     492,     5,   490,     5,   273,   491,     4,     5,   360,   360,
     358,   358,     5,     4,     5,    61,    67,    74,    76,    81,
      84,    90,   101,   107,   116,   131,   152,   167,   177,   178,
     198,   221,   235,   237,   251,   256,   262,   269,   287,   300,
     301,   303,   343,   496,    92,   172,   278,   372,     5,     4,
     200,   207,   208,   243,   348,   371,   358,   368,   358,     5,
     358,    40,   113,   358,   534,   360,   358,   368,   370,   533,
     358,   375,   358,     4,   369,    55,    91,   143,   249,   538,
       4,     4,   358,     4,   152,   262,   539,     5,   368,     4,
      40,   113,   358,   546,   358,    99,    62,   122,   249,   276,
     548,   122,   561,    62,   119,   122,   159,   195,   246,   249,
     273,   276,   286,   550,   551,    62,   122,   276,   560,     5,
       4,    34,   109,   206,   543,    67,   360,   387,    67,   360,
     388,    67,   360,   389,    13,   192,   542,   358,   358,   228,
     358,   390,   358,   273,     4,   358,   358,     4,   570,     4,
     289,   568,     4,   289,   569,     4,   375,   125,   358,   573,
     358,   358,     4,     5,   358,    12,   358,   358,   358,    30,
      96,   165,   253,   258,   374,   374,     4,   200,   358,   358,
       4,     4,     4,   358,   358,   358,   358,     4,     4,     5,
       5,   368,     5,   358,   358,   364,   366,   366,   368,   358,
     358,   358,   358,   358,   358,   358,   368,   370,   367,   358,
     358,   367,   358,     5,   272,   105,   190,   423,   196,   253,
     426,   171,    79,   175,   253,   427,   141,   179,   411,   411,
       4,   430,     4,   432,   196,   260,   434,   180,   435,   171,
     375,   358,   358,   368,   368,   375,   375,   375,   368,   375,
     358,   368,     4,   448,     4,   370,   446,   199,     4,   168,
     314,   447,   199,   368,     4,   134,   295,   450,     5,     5,
       4,   199,   358,     4,     5,    61,    67,   116,   131,   146,
     152,   157,   211,   230,   235,   237,   261,   262,   269,   287,
     343,   505,   370,   191,   191,    67,   457,    67,   458,    67,
     459,   228,   460,   358,     5,   229,   462,   369,   375,     5,
     368,   368,   368,   368,     4,   360,     4,     4,   199,   358,
      14,    15,    62,   193,   194,   266,   276,   277,   307,    88,
       5,     5,    14,    15,    62,   193,   194,   266,   276,   277,
     281,   307,    88,   159,   164,   369,   482,   487,    88,   159,
       5,   480,     4,     4,    14,    62,   193,   266,   276,   307,
       5,     5,     4,   358,   369,    20,    21,    22,    49,    50,
      53,    56,    63,    67,    75,    76,    83,    84,   101,   107,
     111,   112,   115,   131,   152,   175,   198,   228,   230,   236,
     237,   251,   252,   261,   262,   287,   289,   301,   303,   309,
     343,    67,    81,    90,   101,   131,   152,   198,   237,   262,
     301,   303,     4,    30,   163,   216,   242,   499,     5,    64,
     106,   239,   254,   255,   345,   346,   504,   101,   497,    17,
      40,   113,   197,   503,     4,     5,    17,   215,   296,   358,
     262,   504,   512,   126,   504,   513,    36,    40,   113,   135,
     197,   295,   358,   514,   368,   360,    93,   101,   107,   128,
     152,   160,   198,   206,   251,   262,   278,   517,    40,   113,
     197,     5,   288,    17,   215,   296,   521,   289,   360,   522,
       5,   101,   107,   304,    17,    17,     4,   358,   358,   358,
     358,   358,   358,   375,   358,   358,   367,   358,     4,   375,
       4,    40,   113,   197,   267,   540,    40,   113,   197,   267,
     541,     4,    99,     5,     5,    88,     4,     5,     5,    88,
       5,   551,    62,   122,   159,   276,   555,    62,   122,   276,
     559,    88,   159,    62,   122,   276,   553,     4,    62,   122,
     276,   552,     5,     5,     4,     4,     5,     5,     5,   358,
     358,   358,     4,   358,   565,   358,   358,     6,   369,     4,
       5,     4,     4,     5,     4,    99,   264,   376,   358,   358,
      12,     5,    12,   358,   358,    12,     4,    12,     4,     4,
     358,   358,   358,     4,   360,     4,     4,   375,   368,   375,
     358,   358,   358,   368,   358,   367,   358,   358,     5,     5,
     358,   370,   358,   368,   358,   375,   375,   376,   376,   376,
     375,   367,   358,   375,   358,   136,   250,   361,   449,   168,
       5,     4,   375,   159,   159,     4,     5,     4,     4,   358,
     444,   358,    20,    21,    22,    49,    50,    53,    60,    63,
      67,    75,    76,    83,   111,   112,   115,   131,   152,   175,
     184,   228,   230,   236,   237,   252,   262,   287,   289,   299,
     309,   343,    67,   131,   157,   237,   287,    30,   163,   216,
     242,   506,   358,   211,   358,   507,    17,   358,   261,   517,
     261,   211,   358,   508,   289,   509,    17,   100,   358,   358,
       5,   376,    57,   368,     4,     5,   473,   358,     5,     5,
       5,   159,   187,   380,   380,   167,   268,   378,     4,     4,
       5,     5,   477,   274,   274,     5,     5,     5,    17,   161,
     379,   379,   378,     4,     4,   378,     5,     5,   481,   164,
     342,   369,   485,     5,   484,     5,     5,   488,     5,   489,
       5,    14,    15,    62,   193,   194,   266,   276,   277,   281,
     307,     4,     4,     5,     5,   380,   378,     4,     5,     5,
     375,    83,   154,   226,   227,   241,   282,   383,     7,     8,
     358,   363,   242,   123,   242,   242,   107,    40,    67,   101,
     107,   113,   131,   152,   167,   198,   237,   251,   262,   289,
     301,   303,   304,   343,   498,   123,   242,     5,    27,   169,
     242,   285,   141,   107,    22,    50,    53,    83,   112,   115,
     230,   261,    22,    50,    53,    56,    83,   112,   115,   230,
     261,   287,    40,   123,   242,   242,   107,     5,   215,    27,
     228,    36,   135,   295,   358,   265,   272,   123,   247,   368,
     517,    40,   132,   228,   285,   247,   215,     5,     5,   251,
      27,   228,     4,     5,     5,   215,    36,   135,   295,   358,
     517,   215,   360,     4,     4,   358,     5,   307,    22,    27,
      49,    50,    52,    53,    63,    75,    76,    83,    86,   104,
     111,   112,   115,   175,   230,   236,   252,   261,   288,   289,
     309,   354,   500,   358,   358,   358,   358,   358,   504,   368,
       5,     4,     5,   358,   358,   368,   358,   360,   358,   358,
     504,     5,   358,   358,   360,     5,    17,     5,     5,   358,
     358,   367,   358,   358,     4,   358,   358,   113,   358,   358,
     113,     4,    42,    43,   173,   174,   201,   385,   385,    62,
     122,   276,   549,   385,     5,    62,   122,   276,   554,     5,
       5,    62,   122,   276,   556,     4,     5,     5,     4,    62,
     122,   276,   558,    62,   122,   276,   557,     5,     5,     4,
       5,     5,     4,   385,   385,   385,   358,   358,   358,     4,
     368,   358,   369,   375,     5,     5,    12,   358,   368,   370,
     358,    12,   358,   358,   358,    60,   358,     6,     4,   358,
     358,    47,   275,   412,     5,   360,   360,   375,   358,     4,
       4,     4,   375,   368,   358,   358,   358,   358,   375,   368,
     376,   367,   358,     4,   376,   358,    38,    38,     4,   370,
       5,    24,    25,    99,   377,     4,   368,   358,   358,     4,
     358,     5,    83,   154,   226,   227,   241,   282,   368,   370,
     242,   123,   242,   242,    21,   242,   368,   123,   242,    27,
     169,   242,   285,   141,    21,   242,   123,   242,   242,    21,
     242,    27,   170,   228,   170,   265,   272,   123,   170,   228,
     293,   517,   132,   170,   228,   285,     4,   251,    27,   170,
     228,   517,   211,   358,   358,   358,   358,   358,   358,   199,
     358,   358,    20,   238,   465,     4,     4,   358,   380,   380,
     380,     4,   380,   380,   380,    14,    15,    62,   193,   194,
     266,   276,   277,   307,   379,   380,   380,   380,   380,   380,
       4,   380,   380,     4,   379,    14,    15,    62,   193,   194,
     266,   276,   277,   307,     5,   483,     5,   486,     5,     5,
      14,    15,    62,   193,   194,   266,   276,   277,   281,   307,
       5,    14,    15,    62,   193,   194,   266,   276,   277,   281,
     307,     5,    14,    15,    62,   193,   194,   266,   276,   277,
     281,   307,    14,    15,    62,   193,   194,   266,   276,   277,
     307,   274,     5,     5,     5,   379,   379,   378,     4,     4,
     378,     5,     4,     4,   380,   380,     4,   380,   380,     5,
     360,   368,   370,     5,   358,   360,   358,     5,   358,     5,
     363,   107,   198,   251,   107,   198,   251,     5,   360,   358,
     360,     5,   358,   368,   360,     5,   363,   242,   242,    21,
     242,    21,   242,   242,    21,   242,   311,   311,     4,     4,
       4,   498,     4,     4,     4,   311,   311,     4,     5,     4,
     360,   358,     5,   358,     5,   363,   360,   368,   368,   358,
      27,    49,    52,    63,    86,   104,   354,   381,     4,   360,
     358,   375,   360,     5,   368,   368,   358,   360,   360,   368,
     368,   358,   360,   358,     5,   358,   228,   228,   358,   358,
     228,   358,   228,   358,   358,   510,   518,   358,   228,   228,
     358,   358,   358,   358,   358,   358,   358,   358,     5,   307,
     358,   501,   358,   358,   228,   358,   358,   358,   358,   368,
     375,     5,   368,   368,   358,   358,   375,   358,   358,   358,
     368,   358,   358,     5,     4,   358,   358,   358,   358,     5,
       5,     4,   385,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   358,   358,
     358,   358,   375,   358,   368,   370,   358,   375,   358,   358,
     358,   358,   358,     5,   358,     4,     6,   358,   358,     4,
     368,   358,   375,   180,   373,   358,   373,   376,   375,   368,
     358,   358,     4,   358,   368,   368,   358,     4,     5,     5,
       5,     5,     5,   368,   375,   368,   368,   368,   368,   370,
     368,   375,   368,   368,   368,   370,   368,   368,   368,   368,
     370,   368,   368,   368,   358,   368,   368,   368,   368,   368,
     368,   368,   358,   358,     4,   358,     5,     4,   358,   380,
       5,     5,     5,   378,     4,     4,     5,   380,   379,     4,
     380,     5,     5,     5,   379,   379,   378,     4,     4,     5,
      14,    15,    62,   193,   194,   266,   276,   277,   307,    14,
      15,    62,   193,   194,   266,   276,   277,   307,    14,    15,
      62,   193,   194,   266,   276,   277,   307,   274,     5,     5,
       5,   379,   379,   378,     4,     4,   378,     5,   274,     5,
       5,     5,   379,   379,   378,     4,     4,   378,     5,   274,
       5,     5,     5,   379,   379,   378,     4,     4,   378,     5,
       5,     5,     5,   379,   379,   378,     4,     4,     5,   379,
       4,     4,   379,     4,     4,   380,     5,   375,   368,   358,
     358,   368,   358,     5,   363,     5,   368,   360,     5,   368,
     375,     5,   363,   358,   358,   358,   358,   358,   358,   358,
     358,   358,     4,     4,     5,     4,     4,   358,   368,   358,
       5,   363,   360,   375,   375,   358,   367,   375,   375,   358,
     375,   375,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,    56,    67,    94,   131,   287,   289,   343,   515,
     516,   517,   528,   529,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   368,     5,   358,   358,
     358,   358,     4,     4,   375,   376,     4,   502,   375,   375,
     367,   358,     4,   375,     4,   385,   385,   385,   363,   358,
     358,   358,   375,   358,   367,   358,   358,    12,     5,     5,
       4,   358,   358,     4,   375,   368,   358,   358,   376,   377,
     358,     5,   358,   370,     5,     5,     5,     5,     5,   375,
     377,   377,   377,   375,   377,   376,   377,   377,   375,   377,
     377,   377,   375,   377,   377,   375,   368,   377,   375,   377,
     377,   375,   377,   375,     4,   370,     5,   358,     4,   380,
     379,     4,   379,     5,     5,     5,   379,   379,   378,     4,
       4,     5,     5,     5,     5,   379,   379,   378,     4,     4,
       5,     5,     5,     5,   379,   379,   378,     4,     4,     5,
     379,   380,   380,   380,   380,   380,     4,   380,   380,     4,
     379,   379,   380,   380,   380,   380,   380,     4,   380,   380,
       4,   379,   379,     4,     4,   379,     4,   379,   379,     4,
       4,     4,   369,   377,     4,   368,   377,   358,   368,     4,
     377,   377,   368,     4,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   368,   377,   358,   368,     4,
     367,   367,   368,   367,   367,   368,   368,   367,   367,   358,
     358,   358,   358,   358,   358,   363,   358,   358,   358,   355,
     355,   355,   355,   355,   355,   355,   516,   355,   363,   358,
     358,   358,   358,   363,   358,   358,   358,   358,   358,   358,
     375,   358,   307,   362,   363,   358,   358,   376,   360,     4,
       4,   376,     4,   358,   367,   358,    60,   358,     5,     5,
     358,     4,   373,   377,     5,     4,     5,     4,     5,   368,
       5,   376,   377,   376,   376,   376,     5,     4,   358,   380,
     379,   380,   380,   380,   380,   380,     4,   380,   380,   379,
     380,   380,   380,   380,   380,     4,   380,   380,   379,   380,
     380,   380,   380,   380,     4,   380,   380,   379,   380,   379,
       4,   380,   380,   379,     4,   380,   379,     4,   379,   379,
     375,   368,   377,     4,   375,   358,   375,   358,   358,   358,
     377,     4,   375,   358,   367,   377,   358,   367,   377,   377,
     368,   358,     4,   382,   382,   358,   358,   382,   363,   382,
     518,   368,   498,     5,     4,     5,     5,     5,     4,   360,
     363,   382,   382,   358,   358,   363,   358,   358,   358,   358,
     358,   367,   358,     5,   518,   358,   382,   360,   519,   520,
       5,   360,     4,     5,   358,     5,     4,     6,   358,    32,
     284,   419,   368,     5,    32,   284,   384,   368,   419,   358,
     379,   380,   379,   380,   379,   380,   380,   379,   380,   379,
     379,   358,   377,   368,   368,   358,   368,   358,   368,   368,
     358,   368,   377,     4,   518,   518,   362,   358,   518,     4,
     518,   375,     5,     4,     4,   518,   518,   362,   358,     4,
     518,   518,   358,   368,   518,   518,   518,   519,   525,   526,
     517,   523,   524,     4,     5,     5,     6,     4,   190,   305,
     350,   358,   410,     4,   368,     4,   380,   380,   380,   380,
     380,   369,   377,   377,   358,   377,     4,   377,   377,   358,
     377,   358,   518,   518,     4,   358,   518,     5,   358,   518,
       4,   358,   518,   375,   525,   527,   528,   355,   524,     5,
       5,     4,   358,   411,   358,   411,   375,   377,     4,   368,
     370,     4,   363,   362,   358,   358,   362,   358,   368,   528,
     360,     5,     5,   358,   358,   358,   358,   384,     5,   368,
     370,   375,   368,   370,   518,   358,     4,   518,   358,   377,
       5,     5,   358,     5,   358,   375,   375,     4,   518,     4,
       5,     5,     5,   362,   362,   518,   518,   518
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
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 137:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 138:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 139:
#line 659 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 140:
#line 662 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 141:
#line 663 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 142:
#line 664 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 143:
#line 665 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 144:
#line 666 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 145:
#line 667 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 146:
#line 668 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 147:
#line 669 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 148:
#line 672 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 149:
#line 673 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 150:
#line 674 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 151:
#line 675 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 152:
#line 676 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 153:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 154:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 155:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 156:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 157:
#line 683 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 158:
#line 684 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 159:
#line 685 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 160:
#line 686 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 161:
#line 689 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 162:
#line 690 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 163:
#line 691 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 164:
#line 694 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 165:
#line 695 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 166:
#line 696 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 167:
#line 697 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 168:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 169:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 170:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
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
#line 707 "frame/parser.Y"
    {;}
    break;

  case 174:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 175:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 176:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 177:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 178:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 179:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 180:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 181:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 182:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 183:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 184:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 185:
#line 725 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 186:
#line 726 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 187:
#line 729 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 188:
#line 730 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 189:
#line 731 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 190:
#line 732 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 191:
#line 733 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 192:
#line 734 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 193:
#line 737 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 194:
#line 738 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 195:
#line 739 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 196:
#line 742 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 197:
#line 743 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 198:
#line 744 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 199:
#line 745 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 200:
#line 746 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 201:
#line 747 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 206:
#line 754 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 207:
#line 755 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 208:
#line 756 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 209:
#line 758 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 210:
#line 761 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 211:
#line 762 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 212:
#line 765 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 213:
#line 766 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 214:
#line 769 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 215:
#line 770 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 773 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 217:
#line 775 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 219:
#line 779 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 220:
#line 780 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 223:
#line 783 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 225:
#line 785 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 226:
#line 788 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 227:
#line 789 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 228:
#line 792 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 229:
#line 793 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 230:
#line 795 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 231:
#line 797 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 232:
#line 798 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 233:
#line 799 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 234:
#line 801 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 235:
#line 803 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 236:
#line 806 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 237:
#line 807 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 239:
#line 812 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 240:
#line 815 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 241:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 242:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 243:
#line 824 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 244:
#line 825 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 246:
#line 829 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 247:
#line 830 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 248:
#line 831 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 252:
#line 837 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 253:
#line 838 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 255:
#line 841 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 256:
#line 846 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 257:
#line 847 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 258:
#line 850 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 259:
#line 851 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 260:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 261:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 262:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 263:
#line 857 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 265:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 266:
#line 862 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 267:
#line 864 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 268:
#line 869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 269:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 270:
#line 881 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 271:
#line 883 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 272:
#line 884 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 274:
#line 886 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 275:
#line 890 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 276:
#line 892 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 277:
#line 894 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 278:
#line 895 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 284:
#line 906 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 285:
#line 908 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 286:
#line 910 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 287:
#line 915 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 288:
#line 919 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 289:
#line 922 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 290:
#line 923 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 291:
#line 926 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 292:
#line 927 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 293:
#line 929 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 294:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 295:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 296:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 297:
#line 938 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 298:
#line 941 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 299:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 300:
#line 945 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 304:
#line 954 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 305:
#line 956 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 959 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 307:
#line 961 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 308:
#line 964 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 310:
#line 966 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 311:
#line 967 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 968 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 313:
#line 971 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 314:
#line 973 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 974 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 316:
#line 975 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 317:
#line 976 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 318:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 319:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 320:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 321:
#line 984 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 322:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 323:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 324:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 325:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 326:
#line 996 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 327:
#line 999 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 328:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 329:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 330:
#line 1004 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 331:
#line 1007 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 345:
#line 1021 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 348:
#line 1024 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1026 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 352:
#line 1029 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 353:
#line 1030 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 356:
#line 1033 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 357:
#line 1034 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 359:
#line 1037 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 361:
#line 1039 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 363:
#line 1041 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 365:
#line 1043 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 366:
#line 1045 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 367:
#line 1047 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 369:
#line 1049 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 370:
#line 1052 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 371:
#line 1053 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 372:
#line 1054 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 373:
#line 1055 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 374:
#line 1056 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 375:
#line 1057 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 377:
#line 1059 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 378:
#line 1062 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 379:
#line 1063 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 380:
#line 1064 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 381:
#line 1067 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 382:
#line 1070 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 383:
#line 1072 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 384:
#line 1074 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 385:
#line 1075 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 386:
#line 1076 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 388:
#line 1078 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 390:
#line 1081 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 391:
#line 1087 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 392:
#line 1088 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 393:
#line 1091 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 394:
#line 1092 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 395:
#line 1093 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 396:
#line 1096 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 397:
#line 1097 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 399:
#line 1103 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 400:
#line 1105 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 401:
#line 1107 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 402:
#line 1110 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 404:
#line 1112 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 405:
#line 1116 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 406:
#line 1120 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 408:
#line 1122 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 409:
#line 1123 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 410:
#line 1124 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 411:
#line 1125 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 412:
#line 1126 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 414:
#line 1128 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 415:
#line 1129 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 416:
#line 1132 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 417:
#line 1133 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 418:
#line 1134 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 419:
#line 1137 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 420:
#line 1138 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 421:
#line 1142 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 422:
#line 1144 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 423:
#line 1152 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 424:
#line 1154 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 425:
#line 1156 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 426:
#line 1159 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 427:
#line 1161 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 428:
#line 1162 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 429:
#line 1165 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 430:
#line 1168 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 431:
#line 1170 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1174 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 433:
#line 1176 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 434:
#line 1179 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 435:
#line 1183 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 436:
#line 1184 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 437:
#line 1186 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 438:
#line 1189 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 439:
#line 1190 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 441:
#line 1194 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 442:
#line 1195 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 443:
#line 1196 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 444:
#line 1199 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 448:
#line 1204 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 452:
#line 1208 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 453:
#line 1209 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 454:
#line 1210 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 455:
#line 1212 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 457:
#line 1214 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 458:
#line 1217 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 459:
#line 1219 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 460:
#line 1221 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 461:
#line 1222 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 462:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 463:
#line 1224 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 464:
#line 1227 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 465:
#line 1228 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 466:
#line 1232 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1234 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 468:
#line 1237 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 469:
#line 1240 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 470:
#line 1241 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 472:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 473:
#line 1247 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 474:
#line 1250 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 475:
#line 1251 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 476:
#line 1252 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 477:
#line 1255 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 478:
#line 1256 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 479:
#line 1257 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 480:
#line 1258 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 481:
#line 1259 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 482:
#line 1260 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 483:
#line 1261 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 484:
#line 1264 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 485:
#line 1267 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 486:
#line 1268 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 487:
#line 1269 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 488:
#line 1272 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 489:
#line 1273 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 490:
#line 1274 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 491:
#line 1275 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 492:
#line 1276 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 493:
#line 1277 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 498:
#line 1284 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 499:
#line 1285 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 500:
#line 1286 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 502:
#line 1290 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 503:
#line 1293 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 504:
#line 1294 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 505:
#line 1297 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 506:
#line 1298 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 507:
#line 1301 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 508:
#line 1302 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 509:
#line 1305 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 511:
#line 1307 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 512:
#line 1310 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 513:
#line 1311 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 515:
#line 1315 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 516:
#line 1319 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 517:
#line 1322 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 518:
#line 1329 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 519:
#line 1330 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 520:
#line 1333 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 523:
#line 1336 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 524:
#line 1337 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 525:
#line 1338 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 526:
#line 1339 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 528:
#line 1341 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 529:
#line 1342 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 530:
#line 1343 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 532:
#line 1345 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 533:
#line 1346 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 534:
#line 1347 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 535:
#line 1348 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 537:
#line 1352 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 538:
#line 1355 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 539:
#line 1356 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 540:
#line 1359 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 541:
#line 1360 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 542:
#line 1361 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 543:
#line 1362 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 544:
#line 1365 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 545:
#line 1366 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 546:
#line 1367 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 547:
#line 1368 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 548:
#line 1371 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 549:
#line 1372 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1373 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1374 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1375 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 553:
#line 1376 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1379 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 556:
#line 1381 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 559:
#line 1385 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 560:
#line 1386 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 561:
#line 1389 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 562:
#line 1392 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 563:
#line 1393 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 564:
#line 1397 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 565:
#line 1399 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 566:
#line 1400 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 573:
#line 1412 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1414 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1416 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1417 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 577:
#line 1419 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 578:
#line 1421 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 579:
#line 1423 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1425 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1427 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1431 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1432 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1433 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1439 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 591:
#line 1440 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 592:
#line 1443 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 593:
#line 1447 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1455 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 598:
#line 1457 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1459 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 600:
#line 1461 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 601:
#line 1464 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 602:
#line 1466 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 603:
#line 1468 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 609:
#line 1476 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1477 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1478 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1479 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1480 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 614:
#line 1481 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1483 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 616:
#line 1485 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 617:
#line 1486 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1487 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1488 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 620:
#line 1491 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1492 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1493 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1494 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1495 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1497 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 626:
#line 1498 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 627:
#line 1499 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 628:
#line 1500 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 634:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 640:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 650:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 660:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 663:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1614 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 669:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 677:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 679:
#line 1648 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 680:
#line 1651 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 681:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 682:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 683:
#line 1661 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1662 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1663 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1664 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1665 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 688:
#line 1666 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1668 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 690:
#line 1670 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 691:
#line 1671 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1672 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1673 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 694:
#line 1676 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1677 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1678 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1679 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1680 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1682 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 700:
#line 1683 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1684 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 702:
#line 1685 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 703:
#line 1689 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1691 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1692 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 706:
#line 1694 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 707:
#line 1696 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 708:
#line 1698 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 709:
#line 1701 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 710:
#line 1702 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 714:
#line 1710 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 715:
#line 1717 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 716:
#line 1718 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 717:
#line 1719 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 718:
#line 1720 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 719:
#line 1721 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 720:
#line 1722 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 721:
#line 1723 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 722:
#line 1727 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 724:
#line 1735 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 725:
#line 1736 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 726:
#line 1738 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 727:
#line 1740 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 728:
#line 1741 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 729:
#line 1742 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 731:
#line 1743 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 732:
#line 1744 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 733:
#line 1745 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 735:
#line 1747 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 736:
#line 1748 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 737:
#line 1750 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 738:
#line 1752 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 739:
#line 1754 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 740:
#line 1757 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 742:
#line 1760 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 743:
#line 1762 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1765 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 745:
#line 1768 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 746:
#line 1770 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1773 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1776 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1779 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 750:
#line 1782 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 751:
#line 1786 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 752:
#line 1790 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 753:
#line 1795 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 754:
#line 1799 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 755:
#line 1800 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1802 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1803 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 758:
#line 1805 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1807 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 760:
#line 1809 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 761:
#line 1811 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1812 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 763:
#line 1814 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 764:
#line 1816 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 765:
#line 1819 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 766:
#line 1823 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 767:
#line 1827 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1829 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1831 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1833 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1839 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1841 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1843 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1845 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 777:
#line 1847 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 778:
#line 1849 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 779:
#line 1851 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1853 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1854 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1856 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1858 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 784:
#line 1859 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1862 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 787:
#line 1864 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1865 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1869 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 794:
#line 1876 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 795:
#line 1879 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 796:
#line 1882 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 797:
#line 1886 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 798:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 799:
#line 1895 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1899 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 801:
#line 1900 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 802:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1903 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 804:
#line 1905 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 805:
#line 1909 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 806:
#line 1910 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1911 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1913 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 809:
#line 1916 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1919 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 811:
#line 1922 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1923 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1925 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1928 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1932 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1934 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1935 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 818:
#line 1937 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 819:
#line 1940 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 820:
#line 1943 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 821:
#line 1944 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1946 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 823:
#line 1947 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1948 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1950 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1951 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1953 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1956 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 829:
#line 1959 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 830:
#line 1961 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 831:
#line 1962 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 835:
#line 1967 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 836:
#line 1968 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 837:
#line 1970 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 838:
#line 1972 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 839:
#line 1974 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 840:
#line 1975 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 841:
#line 1977 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 842:
#line 1978 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 845:
#line 1983 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 846:
#line 1984 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 847:
#line 1985 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1986 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1987 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1988 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1989 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 852:
#line 1990 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 853:
#line 1991 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1992 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 855:
#line 1994 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 856:
#line 1996 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 2002 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 862:
#line 2003 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 863:
#line 2004 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 865:
#line 2006 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 866:
#line 2008 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 867:
#line 2009 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 868:
#line 2010 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 869:
#line 2011 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 870:
#line 2012 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 871:
#line 2013 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 872:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 873:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 874:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 875:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 876:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 877:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 878:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 879:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 880:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 881:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 882:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 883:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 884:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 885:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 886:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 887:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 888:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 889:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 890:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 891:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 892:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 893:
#line 2039 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 894:
#line 2040 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 895:
#line 2041 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 896:
#line 2042 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 897:
#line 2043 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 898:
#line 2045 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 899:
#line 2055 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2063 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2072 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2080 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2087 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2094 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2102 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2110 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2115 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2154 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2164 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2174 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2183 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2191 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2201 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2211 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2221 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2233 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2242 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2250 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 926:
#line 2252 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 927:
#line 2254 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 928:
#line 2259 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 929:
#line 2262 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 930:
#line 2266 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2268 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 932:
#line 2269 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 933:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 934:
#line 2273 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 935:
#line 2274 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 936:
#line 2275 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 937:
#line 2276 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 938:
#line 2277 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 939:
#line 2278 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 941:
#line 2282 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 942:
#line 2283 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 943:
#line 2284 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 944:
#line 2285 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 946:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 947:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 948:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 949:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 950:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 951:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 952:
#line 2301 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 953:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 954:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 955:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 957:
#line 2309 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 958:
#line 2311 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2314 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 961:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 962:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2327 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 968:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 975:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2340 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2342 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2344 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 982:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2352 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2353 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 986:
#line 2354 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 989:
#line 2361 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 990:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2365 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2366 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2368 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2371 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2374 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2375 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2376 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 998:
#line 2377 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2379 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2381 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2383 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2384 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1005:
#line 2388 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2389 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1007:
#line 2390 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2392 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2394 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1010:
#line 2396 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1011:
#line 2398 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1013:
#line 2400 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1014:
#line 2401 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1015:
#line 2403 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1016:
#line 2405 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1017:
#line 2406 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1018:
#line 2407 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1020:
#line 2409 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1022:
#line 2413 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1023:
#line 2414 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1024:
#line 2415 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1025:
#line 2416 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1027:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1028:
#line 2420 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1029:
#line 2421 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1032:
#line 2427 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1033:
#line 2428 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1034:
#line 2429 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1035:
#line 2432 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1036:
#line 2433 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1037:
#line 2436 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1038:
#line 2437 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1039:
#line 2440 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1040:
#line 2441 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1041:
#line 2444 "frame/parser.Y"
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

  case 1042:
#line 2457 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1043:
#line 2458 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1044:
#line 2462 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1045:
#line 2463 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1046:
#line 2467 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1047:
#line 2468 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1048:
#line 2473 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1049:
#line 2478 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1050:
#line 2484 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1051:
#line 2486 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1052:
#line 2489 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1053:
#line 2491 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1054:
#line 2494 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1055:
#line 2497 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1056:
#line 2498 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1057:
#line 2499 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1058:
#line 2500 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1059:
#line 2501 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1060:
#line 2502 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1061:
#line 2504 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1064:
#line 2511 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1065:
#line 2512 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1066:
#line 2513 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1067:
#line 2514 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1069:
#line 2516 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1072:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1074:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1075:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1076:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1077:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1078:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1079:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1080:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1081:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1082:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1085:
#line 2538 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1086:
#line 2539 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1089:
#line 2543 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1091:
#line 2545 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1093:
#line 2549 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1096:
#line 2557 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1097:
#line 2560 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1098:
#line 2561 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1102:
#line 2568 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1103:
#line 2571 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1104:
#line 2575 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1105:
#line 2576 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1106:
#line 2577 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1107:
#line 2578 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1108:
#line 2579 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1109:
#line 2580 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1110:
#line 2581 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2582 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1112:
#line 2588 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1113:
#line 2589 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1114:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1115:
#line 2591 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1116:
#line 2595 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1117:
#line 2596 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1119:
#line 2603 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1121:
#line 2605 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1123:
#line 2607 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2610 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1125:
#line 2612 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1126:
#line 2617 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1127:
#line 2620 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2621 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2622 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2625 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1131:
#line 2627 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1132:
#line 2631 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1133:
#line 2632 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1134:
#line 2636 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1135:
#line 2637 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2638 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2639 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1138:
#line 2645 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1139:
#line 2646 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1140:
#line 2652 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1141:
#line 2653 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1142:
#line 2654 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1143:
#line 2655 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1146:
#line 2663 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2665 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1148:
#line 2666 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1149:
#line 2667 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1150:
#line 2671 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2672 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2673 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1153:
#line 2674 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1154:
#line 2677 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1155:
#line 2678 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1157:
#line 2682 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1158:
#line 2683 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1159:
#line 2686 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1160:
#line 2687 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1161:
#line 2688 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1162:
#line 2691 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1163:
#line 2692 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1165:
#line 2694 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1166:
#line 2695 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1167:
#line 2698 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1168:
#line 2699 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1169:
#line 2700 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1174:
#line 2707 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2711 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2713 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2715 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2720 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2722 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1181:
#line 2724 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2737 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2738 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2739 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2742 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2743 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2744 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2747 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2748 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2749 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2752 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2753 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2754 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2758 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2759 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2760 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1207:
#line 2763 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2765 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2768 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2773 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2775 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2779 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2780 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2784 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2786 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2788 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1222:
#line 2792 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1223:
#line 2796 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1224:
#line 2798 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1225:
#line 2802 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1226:
#line 2805 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1227:
#line 2806 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1228:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1229:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1230:
#line 2811 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1231:
#line 2813 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1232:
#line 2814 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1233:
#line 2816 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1235:
#line 2820 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1236:
#line 2821 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2822 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1240:
#line 2830 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1242:
#line 2832 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1245:
#line 2837 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2838 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2839 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1248:
#line 2842 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2843 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1250:
#line 2844 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1251:
#line 2847 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1252:
#line 2849 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1253:
#line 2854 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1254:
#line 2857 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1255:
#line 2864 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1256:
#line 2866 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1257:
#line 2868 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1258:
#line 2873 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1260:
#line 2877 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1261:
#line 2878 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1262:
#line 2879 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1263:
#line 2881 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1264:
#line 2883 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1265:
#line 2888 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10938 "frame/parser.C"
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


#line 2892 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

