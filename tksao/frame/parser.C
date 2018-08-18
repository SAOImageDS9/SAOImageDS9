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
     DASH_ = 346,
     DASHLIST_ = 347,
     DATA_ = 348,
     DATAMIN_ = 349,
     DATASEC_ = 350,
     DEBUG_ = 351,
     DEGREES_ = 352,
     DEFAULT_ = 353,
     DELETE_ = 354,
     DEPTH_ = 355,
     DETECTOR_ = 356,
     DIAMOND_ = 357,
     DIM_ = 358,
     DS9_ = 359,
     EDIT_ = 360,
     ECLIPTIC_ = 361,
     ELEVATION_ = 362,
     ELLIPTIC_ = 363,
     ELLIPSE_ = 364,
     ELLIPSEANNULUS_ = 365,
     END_ = 366,
     ENVI_ = 367,
     EPANDA_ = 368,
     EPSILON_ = 369,
     EQUATORIAL_ = 370,
     ERASE_ = 371,
     EXT_ = 372,
     FACTOR_ = 373,
     FALSE_ = 374,
     FILE_ = 375,
     FILL_ = 376,
     FILTER_ = 377,
     FIT_ = 378,
     FITS_ = 379,
     FITSY_ = 380,
     FIXED_ = 381,
     FK4_ = 382,
     FK5_ = 383,
     FONT_ = 384,
     FORMAT_ = 385,
     FRONT_ = 386,
     FULL_ = 387,
     FUNCTION_ = 388,
     GALACTIC_ = 389,
     GAUSSIAN_ = 390,
     GET_ = 391,
     GLOBAL_ = 392,
     GRAPHICS_ = 393,
     GRAY_ = 394,
     GRID_ = 395,
     GZ_ = 396,
     HANDLE_ = 397,
     HAS_ = 398,
     HEAD_ = 399,
     HEADER_ = 400,
     HEIGHT_ = 401,
     HIDE_ = 402,
     HIGHLITE_ = 403,
     HISTEQU_ = 404,
     HISTOGRAM_ = 405,
     HORIZONTAL_ = 406,
     ICRS_ = 407,
     ID_ = 408,
     IIS_ = 409,
     IMAGE_ = 410,
     INCLUDE_ = 411,
     INCR_ = 412,
     INFO_ = 413,
     ITERATION_ = 414,
     IRAF_ = 415,
     IRAFMIN_ = 416,
     J2000_ = 417,
     KEY_ = 418,
     KEYWORD_ = 419,
     LABEL_ = 420,
     LENGTH_ = 421,
     LEVEL_ = 422,
     LITTLE_ = 423,
     LITTLEENDIAN_ = 424,
     LINE_ = 425,
     LINEAR_ = 426,
     LIST_ = 427,
     LOAD_ = 428,
     LOCAL_ = 429,
     LOG_ = 430,
     MACOSX_ = 431,
     MAGNIFIER_ = 432,
     MATCH_ = 433,
     MAP_ = 434,
     MARK_ = 435,
     MARKER_ = 436,
     MASK_ = 437,
     MESSAGE_ = 438,
     METHOD_ = 439,
     MINMAX_ = 440,
     MINOR_ = 441,
     MIP_ = 442,
     MMAP_ = 443,
     MMAPINCR_ = 444,
     MOSAIC_ = 445,
     MODE_ = 446,
     MOTION_ = 447,
     MOVE_ = 448,
     NAME_ = 449,
     NAN_ = 450,
     NATIVE_ = 451,
     NAXES_ = 452,
     NEW_ = 453,
     NEXT_ = 454,
     NO_ = 455,
     NONE_ = 456,
     NOW_ = 457,
     NRRD_ = 458,
     NUMBER_ = 459,
     OBJECT_ = 460,
     OFF_ = 461,
     ON_ = 462,
     ONLY_ = 463,
     OPTION_ = 464,
     ORIENT_ = 465,
     PAN_ = 466,
     PANNER_ = 467,
     PARSER_ = 468,
     PASTE_ = 469,
     PERF_ = 470,
     PHOTO_ = 471,
     PHYSICAL_ = 472,
     PIXEL_ = 473,
     PLOT2D_ = 474,
     PLOT3D_ = 475,
     POINT_ = 476,
     POINTER_ = 477,
     POLYGON_ = 478,
     POSTSCRIPT_ = 479,
     POW_ = 480,
     PRECISION_ = 481,
     PRINT_ = 482,
     PRESERVE_ = 483,
     PROJECTION_ = 484,
     PROPERTY_ = 485,
     PUBLICATION_ = 486,
     PROS_ = 487,
     QUERY_ = 488,
     RADIAL_ = 489,
     RADIUS_ = 490,
     REGION_ = 491,
     REPLACE_ = 492,
     RESAMPLE_ = 493,
     RESET_ = 494,
     RESOLUTION_ = 495,
     RGB_ = 496,
     ROOT_ = 497,
     ROTATE_ = 498,
     RULER_ = 499,
     SAMPLE_ = 500,
     SAOIMAGE_ = 501,
     SAOTNG_ = 502,
     SAVE_ = 503,
     SCALE_ = 504,
     SCAN_ = 505,
     SCIENTIFIC_ = 506,
     SCOPE_ = 507,
     SEGMENT_ = 508,
     SELECT_ = 509,
     SET_ = 510,
     SEXAGESIMAL_ = 511,
     SHAPE_ = 512,
     SHARED_ = 513,
     SHIFT_ = 514,
     SHMID_ = 515,
     SHOW_ = 516,
     SIGMA_ = 517,
     SINH_ = 518,
     SIZE_ = 519,
     SLICE_ = 520,
     SMMAP_ = 521,
     SMOOTH_ = 522,
     SOCKET_ = 523,
     SOCKETGZ_ = 524,
     SOURCE_ = 525,
     SQRT_ = 526,
     SQUARED_ = 527,
     SSHARED_ = 528,
     STATS_ = 529,
     STATUS_ = 530,
     SUM_ = 531,
     SYSTEM_ = 532,
     TABLE_ = 533,
     TAG_ = 534,
     TEMPLATE_ = 535,
     TEXT_ = 536,
     THREADS_ = 537,
     THREED_ = 538,
     THRESHOLD_ = 539,
     THICK_ = 540,
     TRANSPARENCY_ = 541,
     TO_ = 542,
     TOGGLE_ = 543,
     TOPHAT_ = 544,
     TRUE_ = 545,
     TYPE_ = 546,
     UNDO_ = 547,
     UNHIGHLITE_ = 548,
     UNLOAD_ = 549,
     UNSELECT_ = 550,
     UPDATE_ = 551,
     USER_ = 552,
     VALUE_ = 553,
     VAR_ = 554,
     VIEW_ = 555,
     VECTOR_ = 556,
     VERSION_ = 557,
     VERTEX_ = 558,
     VERTICAL_ = 559,
     WARP_ = 560,
     WCS_ = 561,
     WCSA_ = 562,
     WCSB_ = 563,
     WCSC_ = 564,
     WCSD_ = 565,
     WCSE_ = 566,
     WCSF_ = 567,
     WCSG_ = 568,
     WCSH_ = 569,
     WCSI_ = 570,
     WCSJ_ = 571,
     WCSK_ = 572,
     WCSL_ = 573,
     WCSM_ = 574,
     WCSN_ = 575,
     WCSO_ = 576,
     WCSP_ = 577,
     WCSQ_ = 578,
     WCSR_ = 579,
     WCSS_ = 580,
     WCST_ = 581,
     WCSU_ = 582,
     WCSV_ = 583,
     WCSW_ = 584,
     WCSX_ = 585,
     WCSY_ = 586,
     WCSZ_ = 587,
     WCS0_ = 588,
     WFPC2_ = 589,
     WIDTH_ = 590,
     WIN32_ = 591,
     XML_ = 592,
     XY_ = 593,
     YES_ = 594,
     ZMAX_ = 595,
     ZSCALE_ = 596,
     ZOOM_ = 597
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
#define DASH_ 346
#define DASHLIST_ 347
#define DATA_ 348
#define DATAMIN_ 349
#define DATASEC_ 350
#define DEBUG_ 351
#define DEGREES_ 352
#define DEFAULT_ 353
#define DELETE_ 354
#define DEPTH_ 355
#define DETECTOR_ 356
#define DIAMOND_ 357
#define DIM_ 358
#define DS9_ 359
#define EDIT_ 360
#define ECLIPTIC_ 361
#define ELEVATION_ 362
#define ELLIPTIC_ 363
#define ELLIPSE_ 364
#define ELLIPSEANNULUS_ 365
#define END_ 366
#define ENVI_ 367
#define EPANDA_ 368
#define EPSILON_ 369
#define EQUATORIAL_ 370
#define ERASE_ 371
#define EXT_ 372
#define FACTOR_ 373
#define FALSE_ 374
#define FILE_ 375
#define FILL_ 376
#define FILTER_ 377
#define FIT_ 378
#define FITS_ 379
#define FITSY_ 380
#define FIXED_ 381
#define FK4_ 382
#define FK5_ 383
#define FONT_ 384
#define FORMAT_ 385
#define FRONT_ 386
#define FULL_ 387
#define FUNCTION_ 388
#define GALACTIC_ 389
#define GAUSSIAN_ 390
#define GET_ 391
#define GLOBAL_ 392
#define GRAPHICS_ 393
#define GRAY_ 394
#define GRID_ 395
#define GZ_ 396
#define HANDLE_ 397
#define HAS_ 398
#define HEAD_ 399
#define HEADER_ 400
#define HEIGHT_ 401
#define HIDE_ 402
#define HIGHLITE_ 403
#define HISTEQU_ 404
#define HISTOGRAM_ 405
#define HORIZONTAL_ 406
#define ICRS_ 407
#define ID_ 408
#define IIS_ 409
#define IMAGE_ 410
#define INCLUDE_ 411
#define INCR_ 412
#define INFO_ 413
#define ITERATION_ 414
#define IRAF_ 415
#define IRAFMIN_ 416
#define J2000_ 417
#define KEY_ 418
#define KEYWORD_ 419
#define LABEL_ 420
#define LENGTH_ 421
#define LEVEL_ 422
#define LITTLE_ 423
#define LITTLEENDIAN_ 424
#define LINE_ 425
#define LINEAR_ 426
#define LIST_ 427
#define LOAD_ 428
#define LOCAL_ 429
#define LOG_ 430
#define MACOSX_ 431
#define MAGNIFIER_ 432
#define MATCH_ 433
#define MAP_ 434
#define MARK_ 435
#define MARKER_ 436
#define MASK_ 437
#define MESSAGE_ 438
#define METHOD_ 439
#define MINMAX_ 440
#define MINOR_ 441
#define MIP_ 442
#define MMAP_ 443
#define MMAPINCR_ 444
#define MOSAIC_ 445
#define MODE_ 446
#define MOTION_ 447
#define MOVE_ 448
#define NAME_ 449
#define NAN_ 450
#define NATIVE_ 451
#define NAXES_ 452
#define NEW_ 453
#define NEXT_ 454
#define NO_ 455
#define NONE_ 456
#define NOW_ 457
#define NRRD_ 458
#define NUMBER_ 459
#define OBJECT_ 460
#define OFF_ 461
#define ON_ 462
#define ONLY_ 463
#define OPTION_ 464
#define ORIENT_ 465
#define PAN_ 466
#define PANNER_ 467
#define PARSER_ 468
#define PASTE_ 469
#define PERF_ 470
#define PHOTO_ 471
#define PHYSICAL_ 472
#define PIXEL_ 473
#define PLOT2D_ 474
#define PLOT3D_ 475
#define POINT_ 476
#define POINTER_ 477
#define POLYGON_ 478
#define POSTSCRIPT_ 479
#define POW_ 480
#define PRECISION_ 481
#define PRINT_ 482
#define PRESERVE_ 483
#define PROJECTION_ 484
#define PROPERTY_ 485
#define PUBLICATION_ 486
#define PROS_ 487
#define QUERY_ 488
#define RADIAL_ 489
#define RADIUS_ 490
#define REGION_ 491
#define REPLACE_ 492
#define RESAMPLE_ 493
#define RESET_ 494
#define RESOLUTION_ 495
#define RGB_ 496
#define ROOT_ 497
#define ROTATE_ 498
#define RULER_ 499
#define SAMPLE_ 500
#define SAOIMAGE_ 501
#define SAOTNG_ 502
#define SAVE_ 503
#define SCALE_ 504
#define SCAN_ 505
#define SCIENTIFIC_ 506
#define SCOPE_ 507
#define SEGMENT_ 508
#define SELECT_ 509
#define SET_ 510
#define SEXAGESIMAL_ 511
#define SHAPE_ 512
#define SHARED_ 513
#define SHIFT_ 514
#define SHMID_ 515
#define SHOW_ 516
#define SIGMA_ 517
#define SINH_ 518
#define SIZE_ 519
#define SLICE_ 520
#define SMMAP_ 521
#define SMOOTH_ 522
#define SOCKET_ 523
#define SOCKETGZ_ 524
#define SOURCE_ 525
#define SQRT_ 526
#define SQUARED_ 527
#define SSHARED_ 528
#define STATS_ 529
#define STATUS_ 530
#define SUM_ 531
#define SYSTEM_ 532
#define TABLE_ 533
#define TAG_ 534
#define TEMPLATE_ 535
#define TEXT_ 536
#define THREADS_ 537
#define THREED_ 538
#define THRESHOLD_ 539
#define THICK_ 540
#define TRANSPARENCY_ 541
#define TO_ 542
#define TOGGLE_ 543
#define TOPHAT_ 544
#define TRUE_ 545
#define TYPE_ 546
#define UNDO_ 547
#define UNHIGHLITE_ 548
#define UNLOAD_ 549
#define UNSELECT_ 550
#define UPDATE_ 551
#define USER_ 552
#define VALUE_ 553
#define VAR_ 554
#define VIEW_ 555
#define VECTOR_ 556
#define VERSION_ 557
#define VERTEX_ 558
#define VERTICAL_ 559
#define WARP_ 560
#define WCS_ 561
#define WCSA_ 562
#define WCSB_ 563
#define WCSC_ 564
#define WCSD_ 565
#define WCSE_ 566
#define WCSF_ 567
#define WCSG_ 568
#define WCSH_ 569
#define WCSI_ 570
#define WCSJ_ 571
#define WCSK_ 572
#define WCSL_ 573
#define WCSM_ 574
#define WCSN_ 575
#define WCSO_ 576
#define WCSP_ 577
#define WCSQ_ 578
#define WCSR_ 579
#define WCSS_ 580
#define WCST_ 581
#define WCSU_ 582
#define WCSV_ 583
#define WCSW_ 584
#define WCSX_ 585
#define WCSY_ 586
#define WCSZ_ 587
#define WCS0_ 588
#define WFPC2_ 589
#define WIDTH_ 590
#define WIN32_ 591
#define XML_ 592
#define XY_ 593
#define YES_ 594
#define ZMAX_ 595
#define ZSCALE_ 596
#define ZOOM_ 597




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
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
#line 51 "frame/parser.Y"
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
#line 840 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 853 "frame/parser.C"

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
#define YYFINAL  353
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  347
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1243
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2754

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   597

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
       2,   346,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   344,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   345,   343,
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
     335,   336,   337,   338,   339,   340,   341,   342
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    16,    18,    20,    23,
      27,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    62,    65,    68,    72,    75,    78,    81,    84,
      88,    91,    95,    98,   101,   104,   107,   110,   113,   115,
     119,   122,   125,   128,   130,   133,   136,   139,   141,   144,
     146,   149,   152,   155,   158,   160,   162,   164,   166,   169,
     172,   175,   178,   181,   184,   187,   190,   193,   196,   198,
     200,   202,   204,   206,   208,   210,   212,   214,   215,   218,
     221,   223,   225,   226,   228,   230,   232,   234,   236,   238,
     240,   243,   246,   249,   252,   254,   256,   258,   260,   262,
     264,   266,   268,   270,   272,   274,   276,   278,   280,   282,
     284,   286,   288,   290,   292,   294,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   314,   316,   318,   320,   322,
     324,   326,   328,   330,   332,   334,   336,   338,   340,   342,
     344,   346,   348,   349,   351,   353,   355,   357,   359,   361,
     363,   364,   366,   368,   369,   371,   373,   375,   376,   378,
     380,   381,   383,   385,   386,   388,   390,   391,   393,   395,
     397,   399,   401,   403,   405,   406,   408,   410,   412,   414,
     416,   418,   420,   421,   423,   425,   426,   428,   430,   432,
     434,   436,   439,   442,   445,   448,   451,   454,   457,   459,
     462,   464,   467,   469,   472,   474,   477,   480,   487,   490,
     495,   498,   501,   504,   508,   511,   514,   516,   519,   521,
     524,   529,   535,   538,   542,   548,   555,   557,   559,   561,
     569,   581,   590,   603,   605,   608,   611,   613,   615,   618,
     621,   624,   627,   631,   635,   638,   641,   643,   645,   647,
     649,   651,   653,   655,   658,   661,   664,   668,   671,   674,
     677,   684,   695,   697,   700,   702,   709,   720,   722,   725,
     728,   731,   734,   737,   740,   754,   768,   781,   794,   796,
     797,   799,   801,   806,   813,   815,   817,   819,   821,   823,
     825,   827,   829,   831,   836,   840,   845,   846,   853,   862,
     865,   869,   873,   877,   878,   883,   888,   893,   898,   902,
     906,   908,   912,   918,   923,   928,   932,   935,   936,   938,
     940,   944,   947,   950,   953,   956,   959,   962,   965,   968,
     971,   974,   977,   980,   983,   986,   988,   991,   994,   999,
    1009,  1012,  1015,  1018,  1020,  1024,  1027,  1030,  1032,  1035,
    1044,  1047,  1049,  1052,  1054,  1057,  1059,  1064,  1074,  1077,
    1079,  1081,  1083,  1085,  1088,  1090,  1092,  1095,  1097,  1098,
    1101,  1104,  1106,  1107,  1110,  1113,  1115,  1117,  1120,  1123,
    1126,  1128,  1130,  1132,  1134,  1136,  1138,  1139,  1141,  1144,
    1146,  1151,  1157,  1158,  1161,  1163,  1169,  1172,  1175,  1177,
    1179,  1181,  1184,  1186,  1189,  1191,  1193,  1194,  1196,  1198,
    1199,  1201,  1207,  1214,  1218,  1225,  1229,  1231,  1235,  1237,
    1239,  1241,  1245,  1252,  1260,  1266,  1268,  1270,  1275,  1281,
    1283,  1287,  1288,  1290,  1293,  1295,  1300,  1302,  1305,  1307,
    1310,  1314,  1317,  1319,  1322,  1324,  1329,  1332,  1334,  1336,
    1340,  1342,  1345,  1349,  1352,  1353,  1355,  1360,  1363,  1364,
    1368,  1372,  1377,  1378,  1380,  1382,  1384,  1386,  1388,  1390,
    1392,  1394,  1396,  1398,  1400,  1403,  1405,  1408,  1410,  1413,
    1416,  1419,  1422,  1424,  1426,  1428,  1429,  1431,  1432,  1434,
    1435,  1437,  1438,  1440,  1441,  1444,  1447,  1448,  1450,  1453,
    1455,  1462,  1468,  1470,  1472,  1474,  1477,  1480,  1482,  1484,
    1486,  1488,  1491,  1493,  1495,  1497,  1500,  1502,  1504,  1506,
    1509,  1512,  1515,  1516,  1518,  1519,  1521,  1523,  1525,  1527,
    1529,  1531,  1533,  1535,  1538,  1541,  1544,  1546,  1549,  1553,
    1555,  1558,  1561,  1566,  1573,  1575,  1586,  1588,  1591,  1595,
    1599,  1602,  1605,  1608,  1611,  1614,  1617,  1620,  1625,  1630,
    1635,  1639,  1643,  1649,  1654,  1659,  1664,  1668,  1672,  1676,
    1680,  1683,  1686,  1691,  1695,  1699,  1703,  1707,  1712,  1717,
    1722,  1727,  1733,  1738,  1745,  1753,  1758,  1763,  1769,  1772,
    1776,  1780,  1784,  1787,  1791,  1795,  1799,  1803,  1808,  1812,
    1818,  1825,  1829,  1833,  1838,  1842,  1846,  1850,  1854,  1858,
    1864,  1868,  1872,  1877,  1881,  1884,  1887,  1889,  1893,  1898,
    1903,  1908,  1913,  1918,  1925,  1930,  1935,  1941,  1946,  1951,
    1956,  1961,  1967,  1972,  1979,  1987,  1992,  1997,  2003,  2009,
    2015,  2021,  2027,  2033,  2041,  2047,  2053,  2060,  2066,  2072,
    2078,  2084,  2091,  2097,  2105,  2114,  2120,  2126,  2133,  2137,
    2141,  2145,  2149,  2153,  2159,  2163,  2167,  2172,  2176,  2180,
    2184,  2188,  2193,  2197,  2203,  2210,  2214,  2218,  2223,  2227,
    2231,  2235,  2239,  2243,  2249,  2253,  2257,  2262,  2267,  2272,
    2276,  2282,  2287,  2292,  2295,  2299,  2306,  2313,  2315,  2317,
    2319,  2322,  2325,  2328,  2332,  2336,  2339,  2352,  2355,  2358,
    2360,  2364,  2369,  2372,  2373,  2377,  2379,  2381,  2384,  2387,
    2390,  2393,  2396,  2401,  2406,  2411,  2415,  2420,  2426,  2435,
    2442,  2447,  2457,  2464,  2472,  2483,  2495,  2508,  2518,  2524,
    2529,  2536,  2540,  2546,  2552,  2559,  2565,  2570,  2580,  2591,
    2603,  2613,  2620,  2627,  2634,  2641,  2648,  2655,  2662,  2669,
    2676,  2684,  2692,  2695,  2700,  2705,  2710,  2715,  2721,  2726,
    2731,  2737,  2743,  2747,  2752,  2757,  2762,  2767,  2775,  2785,
    2792,  2803,  2815,  2828,  2838,  2842,  2845,  2849,  2855,  2863,
    2868,  2872,  2876,  2883,  2891,  2899,  2904,  2909,  2914,  2924,
    2929,  2933,  2938,  2946,  2954,  2957,  2961,  2965,  2969,  2974,
    2977,  2980,  2985,  2996,  3000,  3002,  3006,  3009,  3012,  3015,
    3018,  3022,  3028,  3033,  3039,  3042,  3050,  3054,  3057,  3060,
    3064,  3067,  3070,  3073,  3077,  3080,  3084,  3089,  3093,  3097,
    3104,  3109,  3112,  3116,  3119,  3122,  3127,  3131,  3135,  3138,
    3142,  3144,  3147,  3149,  3152,  3155,  3158,  3160,  3162,  3164,
    3166,  3169,  3171,  3174,  3177,  3179,  3182,  3185,  3187,  3190,
    3192,  3194,  3196,  3198,  3200,  3202,  3204,  3206,  3207,  3209,
    3212,  3215,  3218,  3222,  3228,  3236,  3244,  3251,  3258,  3265,
    3272,  3278,  3285,  3292,  3299,  3306,  3313,  3320,  3327,  3339,
    3347,  3355,  3363,  3373,  3383,  3394,  3407,  3420,  3423,  3426,
    3430,  3435,  3440,  3445,  3448,  3453,  3458,  3460,  3462,  3464,
    3466,  3468,  3470,  3472,  3474,  3477,  3479,  3481,  3483,  3487,
    3491,  3496,  3503,  3514,  3523,  3531,  3537,  3540,  3543,  3547,
    3552,  3558,  3562,  3568,  3574,  3578,  3583,  3589,  3595,  3601,
    3605,  3611,  3614,  3618,  3622,  3628,  3632,  3636,  3640,  3645,
    3651,  3657,  3661,  3667,  3673,  3677,  3682,  3688,  3694,  3697,
    3700,  3704,  3710,  3717,  3724,  3728,  3732,  3736,  3743,  3749,
    3755,  3758,  3762,  3766,  3772,  3779,  3783,  3786,  3789,  3793,
    3796,  3800,  3803,  3807,  3813,  3820,  3823,  3826,  3829,  3831,
    3836,  3841,  3843,  3846,  3849,  3852,  3855,  3858,  3861,  3864,
    3868,  3871,  3875,  3878,  3882,  3884,  3886,  3888,  3890,  3892,
    3893,  3896,  3897,  3900,  3901,  3903,  3904,  3905,  3907,  3909,
    3911,  3913,  3921,  3930,  3933,  3938,  3941,  3946,  3953,  3956,
    3958,  3960,  3964,  3968,  3970,  3975,  3978,  3980,  3984,  3988,
    3993,  3997,  4001,  4005,  4007,  4009,  4011,  4013,  4015,  4017,
    4019,  4021,  4023,  4025,  4027,  4029,  4031,  4033,  4036,  4037,
    4038,  4041,  4043,  4047,  4049,  4053,  4055,  4058,  4061,  4063,
    4067,  4068,  4069,  4072,  4075,  4077,  4081,  4087,  4089,  4092,
    4095,  4098,  4100,  4102,  4104,  4106,  4111,  4114,  4118,  4122,
    4125,  4129,  4132,  4135,  4138,  4142,  4146,  4150,  4153,  4157,
    4159,  4163,  4167,  4169,  4172,  4175,  4178,  4181,  4191,  4198,
    4200,  4202,  4204,  4206,  4209,  4212,  4216,  4220,  4222,  4225,
    4229,  4233,  4235,  4238,  4240,  4242,  4244,  4246,  4248,  4251,
    4254,  4259,  4261,  4264,  4267,  4270,  4274,  4276,  4278,  4280,
    4283,  4286,  4289,  4292,  4295,  4299,  4303,  4307,  4311,  4315,
    4319,  4323,  4325,  4328,  4331,  4334,  4338,  4341,  4345,  4349,
    4352,  4355,  4358,  4361,  4364,  4367,  4370,  4373,  4376,  4379,
    4382,  4385,  4388,  4391,  4395,  4399,  4403,  4406,  4409,  4412,
    4415,  4418,  4421,  4424,  4427,  4430,  4433,  4436,  4439,  4443,
    4447,  4451,  4456,  4463,  4465,  4467,  4469,  4471,  4473,  4474,
    4480,  4482,  4489,  4493,  4495,  4499,  4502,  4505,  4509,  4513,
    4516,  4519,  4522,  4525,  4528,  4531,  4535,  4538,  4541,  4545,
    4547,  4551,  4556,  4558,  4561,  4567,  4574,  4581,  4584,  4586,
    4589,  4592,  4598,  4605
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     348,     0,    -1,    96,   350,    -1,    44,   380,    -1,    41,
      66,     5,    -1,    46,   385,    -1,    59,    -1,    64,    -1,
      65,   387,    -1,    67,   279,     5,    -1,    68,   392,    -1,
      69,   394,    -1,    77,   395,    -1,    84,   404,    -1,    86,
     406,    -1,    87,   407,    -1,    95,   351,    -1,   125,   409,
      -1,   136,   410,    -1,   140,   452,    -1,   143,   455,    -1,
     147,    -1,   148,   351,    -1,   154,   461,    -1,   160,    16,
       4,    -1,   173,   464,    -1,   176,   482,    -1,   177,   483,
      -1,   178,   484,    -1,   181,   500,   485,    -1,   182,   519,
      -1,   195,    66,     5,    -1,   210,   520,    -1,   211,   521,
      -1,   212,   524,    -1,   233,    88,    -1,   226,   526,    -1,
     224,   525,    -1,   239,    -1,   236,   500,   528,    -1,   241,
     533,    -1,   243,   534,    -1,   248,   536,    -1,   261,    -1,
     267,   551,    -1,   282,     4,    -1,   283,   375,    -1,   294,
      -1,   296,   553,    -1,   302,    -1,   305,   555,    -1,   306,
     556,    -1,   336,   560,    -1,   342,   561,    -1,     3,    -1,
       4,    -1,   207,    -1,   206,    -1,   190,   351,    -1,   213,
     351,    -1,   215,   351,    -1,   306,   351,    -1,    44,   351,
      -1,    46,   351,    -1,    76,   351,    -1,    84,   351,    -1,
     141,   351,    -1,   241,   351,    -1,     4,    -1,   339,    -1,
     343,    -1,   207,    -1,   290,    -1,   200,    -1,   344,    -1,
     206,    -1,   119,    -1,    -1,   242,    38,    -1,   132,    38,
      -1,   242,    -1,   132,    -1,    -1,   354,    -1,   349,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
     355,   355,    -1,   356,   357,    -1,   357,   357,    -1,   349,
     349,    -1,   155,    -1,   217,    -1,   101,    -1,    19,    -1,
     360,    -1,   306,    -1,   307,    -1,   308,    -1,   309,    -1,
     310,    -1,   311,    -1,   312,    -1,   313,    -1,   314,    -1,
     315,    -1,   316,    -1,   317,    -1,   318,    -1,   319,    -1,
     320,    -1,   321,    -1,   322,    -1,   323,    -1,   324,    -1,
     325,    -1,   326,    -1,   327,    -1,   328,    -1,   329,    -1,
     330,    -1,   331,    -1,   332,    -1,   333,    -1,    56,    -1,
     212,    -1,   171,    -1,   175,    -1,   225,    -1,   271,    -1,
     272,    -1,    28,    -1,   263,    -1,   149,    -1,    30,    -1,
     250,    -1,   245,    -1,    94,    -1,   161,    -1,    -1,   127,
      -1,    35,    -1,   128,    -1,   162,    -1,   152,    -1,   134,
      -1,   106,    -1,    -1,    97,    -1,   256,    -1,    -1,    97,
      -1,    24,    -1,    25,    -1,    -1,   260,    -1,   163,    -1,
      -1,    17,    -1,   157,    -1,    -1,   155,    -1,   182,    -1,
      -1,    62,    -1,    48,    -1,   102,    -1,    85,    -1,   345,
      -1,    27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,
     150,    -1,   219,    -1,   220,    -1,   234,    -1,   274,    -1,
      -1,    32,    -1,   276,    -1,    -1,   196,    -1,    42,    -1,
      43,    -1,   168,    -1,   169,    -1,   300,   379,    -1,    47,
     376,    -1,    74,   377,    -1,   148,   378,    -1,   184,   531,
      -1,    37,   532,    -1,   249,   349,    -1,   228,    -1,   284,
     349,    -1,   351,    -1,    66,     5,    -1,   351,    -1,    66,
       5,    -1,   351,    -1,    66,     5,    -1,   349,   349,    -1,
     221,   349,   349,   349,   349,   349,    -1,    12,   381,    -1,
      71,     5,     5,     5,    -1,   100,     4,    -1,   118,   382,
      -1,   133,   383,    -1,    53,   264,     4,    -1,   287,   384,
      -1,   122,     5,    -1,    59,    -1,   349,   349,    -1,   349,
      -1,   349,   349,    -1,   349,    12,   349,   349,    -1,   349,
     349,    12,   349,   349,    -1,   287,   349,    -1,   287,   349,
     349,    -1,   287,   349,    12,   349,   349,    -1,   287,   349,
     349,    12,   349,   349,    -1,    32,    -1,   276,    -1,   123,
      -1,   349,   349,    12,    59,     5,     5,     5,    -1,   349,
     349,     4,   349,   349,    12,    59,     5,     5,     5,     5,
      -1,   349,   349,    12,   349,   349,     5,     5,     5,    -1,
     349,   349,     4,   349,   349,    12,   349,   349,     5,     5,
       5,     5,    -1,   349,    -1,   349,   349,    -1,   287,   386,
      -1,   123,    -1,   349,    -1,   349,   349,    -1,   252,   388,
      -1,   191,   389,    -1,   185,   390,    -1,   297,   349,   349,
      -1,   297,   195,   195,    -1,   341,   391,    -1,   228,   351,
      -1,   137,    -1,   174,    -1,   349,    -1,   185,    -1,   341,
      -1,   340,    -1,   297,    -1,     4,   363,    -1,   191,   363,
      -1,   245,     4,    -1,   349,     4,     4,    -1,    78,   349,
      -1,   245,     4,    -1,   170,     4,    -1,     4,   349,   349,
       4,     6,     4,    -1,   241,   349,   349,   349,   349,   349,
     349,     4,     6,     4,    -1,    40,    -1,   192,   393,    -1,
     111,    -1,     4,   349,   349,     4,     6,     4,    -1,   241,
     349,   349,   349,   349,   349,   349,     4,     6,     4,    -1,
     362,    -1,   175,   349,    -1,    83,   396,    -1,    99,   397,
      -1,   173,   398,    -1,   214,   402,    -1,   248,   403,    -1,
       5,     4,     4,   401,     4,     4,   362,   349,   399,   400,
     349,   349,     5,    -1,     5,     4,     4,   401,     4,     4,
     362,   349,   349,   400,   349,   349,     5,    -1,     5,     4,
       4,   401,     4,     4,   362,   349,   399,   349,   349,     5,
      -1,     5,     4,     4,   401,     4,     4,   362,   349,   349,
     349,   349,     5,    -1,   223,    -1,    -1,    31,    -1,     5,
      -1,     5,     5,     4,   351,    -1,     5,     4,   351,     5,
     359,   364,    -1,   185,    -1,   341,    -1,   340,    -1,   297,
      -1,   137,    -1,   174,    -1,   267,    -1,    46,    -1,     5,
      -1,     5,     5,     4,   351,    -1,     5,   359,   364,    -1,
      31,     5,   359,   364,    -1,    -1,   349,   349,   349,   349,
     359,   364,    -1,    59,   358,   359,   364,   349,   349,   359,
     366,    -1,   283,   405,    -1,    40,   349,   349,    -1,   192,
     349,   349,    -1,   111,   349,   349,    -1,    -1,   349,   349,
     359,   364,    -1,    40,   349,   349,     4,    -1,   192,   349,
     349,     4,    -1,   111,   349,   349,     4,    -1,   361,   349,
     349,    -1,   359,   364,   358,    -1,   351,    -1,   305,   349,
     349,    -1,    40,   192,   361,   349,   349,    -1,   192,   361,
     349,   349,    -1,    40,   192,   359,   358,    -1,   192,   359,
     358,    -1,    33,     4,    -1,    -1,    32,    -1,   276,    -1,
     143,   117,     5,    -1,    41,    66,    -1,    44,   411,    -1,
      46,   413,    -1,    65,   414,    -1,    68,   418,    -1,    67,
     417,    -1,    69,   420,    -1,    77,   422,    -1,    79,   425,
      -1,    84,   426,    -1,    86,   427,    -1,    88,   429,    -1,
      87,   428,    -1,    93,   430,    -1,    95,    -1,   124,   434,
      -1,   140,   440,    -1,   150,     5,     5,     4,    -1,   151,
      89,     5,     5,   349,   349,   361,     4,   408,    -1,   154,
     432,    -1,   158,   431,    -1,   160,    16,    -1,   185,    -1,
     181,   500,   494,    -1,   182,   441,    -1,   195,    66,    -1,
     210,    -1,   211,   442,    -1,   218,   278,   361,   349,   349,
       4,     4,     5,    -1,   241,   443,    -1,   243,    -1,   267,
     444,    -1,   282,    -1,   283,   445,    -1,   291,    -1,   298,
     361,   349,   349,    -1,   304,    89,     5,     5,   349,   349,
     361,     4,   408,    -1,   306,   450,    -1,   342,    -1,   100,
      -1,   118,    -1,   133,    -1,    53,   264,    -1,    88,    -1,
     122,    -1,    71,   412,    -1,   172,    -1,    -1,   185,     5,
      -1,   103,     5,    -1,   118,    -1,    -1,   399,   400,    -1,
     349,   400,    -1,   252,    -1,   191,    -1,   185,   415,    -1,
     297,   167,    -1,   341,   416,    -1,   228,    -1,   191,    -1,
     245,    -1,    78,    -1,   245,    -1,   170,    -1,    -1,   279,
      -1,   167,   419,    -1,     4,    -1,     4,   361,   349,   349,
      -1,     4,   349,   349,   362,   349,    -1,    -1,   167,   421,
      -1,   175,    -1,     4,   349,   349,   362,   349,    -1,   359,
     364,    -1,    65,   423,    -1,    66,    -1,    91,    -1,   167,
      -1,   204,   167,    -1,   184,    -1,    69,   424,    -1,   267,
      -1,   335,    -1,    -1,   191,    -1,   252,    -1,    -1,   175,
      -1,   349,   349,   359,   364,   365,    -1,   361,   349,   349,
     359,   364,   365,    -1,   359,   364,   365,    -1,    59,   359,
     364,   365,   359,   366,    -1,   283,   359,   364,    -1,   361,
      -1,   359,   364,   365,    -1,   275,    -1,    33,    -1,   361,
      -1,   359,   364,   365,    -1,   359,   364,   358,   349,   349,
       5,    -1,     4,   359,   364,   358,   349,   349,     5,    -1,
     361,   349,   349,     4,     4,    -1,     5,    -1,    65,    -1,
     361,   349,   349,     5,    -1,     6,     4,     4,     4,     4,
      -1,    88,    -1,   120,   194,   433,    -1,    -1,     4,    -1,
     349,   349,    -1,   197,    -1,    59,   359,   364,   365,    -1,
      81,    -1,   100,   437,    -1,    45,    -1,   117,   435,    -1,
     120,   194,   438,    -1,   145,   436,    -1,   146,    -1,   205,
     194,    -1,   264,    -1,   264,   359,   364,   366,    -1,   265,
     439,    -1,   335,    -1,     4,    -1,   361,   349,   349,    -1,
       4,    -1,   164,     5,    -1,     4,   164,     5,    -1,   306,
       4,    -1,    -1,   352,    -1,   352,   361,   349,   349,    -1,
     352,     4,    -1,    -1,   349,   359,   364,    -1,    79,   359,
     364,    -1,    79,     4,   359,   364,    -1,    -1,   209,    -1,
     299,    -1,    66,    -1,   180,    -1,   286,    -1,   228,    -1,
      61,    -1,   277,    -1,   300,    -1,   133,    -1,   235,    -1,
     235,   186,    -1,   262,    -1,   262,   186,    -1,    21,    -1,
     300,   449,    -1,    47,   446,    -1,    74,   447,    -1,   148,
     448,    -1,   184,    -1,    37,    -1,   249,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   221,    -1,
      -1,    16,   451,    -1,   194,   360,    -1,    -1,   222,    -1,
      83,   453,    -1,    99,    -1,   359,   364,   365,   454,     5,
       5,    -1,   359,   364,   365,   454,     5,    -1,    20,    -1,
     231,    -1,    19,    -1,    44,   456,    -1,    77,   457,    -1,
      84,    -1,    94,    -1,    95,    -1,   101,    -1,   124,   458,
      -1,   140,    -1,   154,    -1,   161,    -1,   181,   459,    -1,
     217,    -1,   155,    -1,   267,    -1,   277,   359,    -1,   306,
     460,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,
      -1,    87,    -1,   190,    -1,   148,    -1,   254,    -1,   214,
      -1,   292,    -1,   359,    -1,   115,   359,    -1,    58,   359,
      -1,   171,   359,    -1,    18,    -1,   283,   359,    -1,   198,
       4,     4,    -1,   116,    -1,   183,     5,    -1,    88,   463,
      -1,   255,   120,   194,   462,    -1,   255,     6,     4,     4,
       4,     4,    -1,   296,    -1,   306,   349,   349,   349,   349,
     349,   349,   349,   349,     4,    -1,     5,    -1,     5,     4,
      -1,     4,     4,    56,    -1,     4,     4,   359,    -1,   191,
     351,    -1,    26,   465,    -1,   112,   467,    -1,   124,   468,
      -1,   157,   481,    -1,   203,   479,    -1,   216,   480,    -1,
       5,    14,     5,   369,    -1,     5,    15,     5,   369,    -1,
       5,    61,     5,   369,    -1,     5,   188,   369,    -1,     5,
     189,   369,    -1,     5,   258,   367,     4,   369,    -1,     5,
     268,     4,   369,    -1,     5,   269,     4,   369,    -1,     5,
     299,     5,   369,    -1,   241,    87,   466,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   188,    -1,     5,   189,    -1,     5,   258,   367,     4,
      -1,     5,   268,     4,    -1,     5,   269,     4,    -1,     5,
     299,     5,    -1,     5,     5,   266,    -1,     5,    14,     5,
     369,    -1,     5,    15,     5,   369,    -1,     5,    61,     5,
     369,    -1,     5,   188,   368,   369,    -1,     5,     5,   266,
     368,   369,    -1,     5,   189,   368,   369,    -1,     5,   258,
     367,     4,   368,   369,    -1,     5,   273,   367,     4,     4,
     368,   369,    -1,     5,   268,     4,   369,    -1,     5,   269,
       4,   369,    -1,     5,   299,     5,   368,   369,    -1,   265,
     469,    -1,   117,    87,   470,    -1,   241,   155,   478,    -1,
     241,    87,   477,    -1,   190,   471,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     188,   368,    -1,     5,     5,   266,   368,    -1,     5,   189,
     368,    -1,     5,   258,   367,     4,   368,    -1,     5,   273,
     367,     4,     4,   368,    -1,     5,   268,     4,    -1,     5,
     269,     4,    -1,     5,   299,     5,   368,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   188,   368,    -1,     5,   189,   368,    -1,     5,   258,
     367,     4,   368,    -1,     5,   268,     4,    -1,     5,   269,
       4,    -1,     5,   299,     5,   368,    -1,   155,   160,   472,
      -1,   160,   473,    -1,   155,   474,    -1,   475,    -1,   155,
     334,   476,    -1,     5,    14,     5,   369,    -1,     5,    15,
       5,   369,    -1,     5,    61,     5,   369,    -1,     5,   188,
     368,   369,    -1,     5,   189,   368,   369,    -1,     5,   258,
     367,     4,   368,   369,    -1,     5,   268,     4,   369,    -1,
       5,   269,     4,   369,    -1,     5,   299,     5,   368,   369,
      -1,     5,    14,     5,   369,    -1,     5,    15,     5,   369,
      -1,     5,    61,     5,   369,    -1,     5,   188,   368,   369,
      -1,     5,     5,   266,   368,   369,    -1,     5,   189,   368,
     369,    -1,     5,   258,   367,     4,   368,   369,    -1,     5,
     273,   367,     4,     4,   368,   369,    -1,     5,   268,     4,
     369,    -1,     5,   269,     4,   369,    -1,     5,   299,     5,
     368,   369,    -1,   360,     5,    14,     5,   369,    -1,   360,
       5,    15,     5,   369,    -1,   360,     5,    61,     5,   369,
      -1,   360,     5,   188,   368,   369,    -1,   360,     5,   189,
     368,   369,    -1,   360,     5,   258,   367,     4,   368,   369,
      -1,   360,     5,   268,     4,   369,    -1,   360,     5,   269,
       4,   369,    -1,   360,     5,   299,     5,   368,   369,    -1,
     360,     5,    14,     5,   369,    -1,   360,     5,    15,     5,
     369,    -1,   360,     5,    61,     5,   369,    -1,   360,     5,
     188,   368,   369,    -1,   360,     5,     5,   266,   368,   369,
      -1,   360,     5,   189,   368,   369,    -1,   360,     5,   258,
     367,     4,   368,   369,    -1,   360,     5,   273,   367,     4,
       4,   368,   369,    -1,   360,     5,   268,     4,   369,    -1,
     360,     5,   269,     4,   369,    -1,   360,     5,   299,     5,
     368,   369,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   188,   368,    -1,     5,
     189,   368,    -1,     5,   258,   367,     4,   368,    -1,     5,
     268,     4,    -1,     5,   269,     4,    -1,     5,   299,     5,
     368,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   188,   368,    -1,     5,     5,
     266,   368,    -1,     5,   189,   368,    -1,     5,   258,   367,
       4,   368,    -1,     5,   273,   367,     4,     4,   368,    -1,
       5,   268,     4,    -1,     5,   269,     4,    -1,     5,   299,
       5,   368,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   188,   368,    -1,     5,
     189,   368,    -1,     5,   258,   367,     4,   368,    -1,     5,
     268,     4,    -1,     5,   269,     4,    -1,     5,   299,     5,
     368,    -1,     5,    14,     5,   369,    -1,     5,    61,     5,
     369,    -1,     5,   188,   369,    -1,     5,   258,   367,     4,
     369,    -1,     5,   268,     4,   369,    -1,     5,   299,     5,
     369,    -1,     5,     5,    -1,   265,     5,     5,    -1,    93,
       4,     4,     4,     4,     4,    -1,   185,     4,     4,     4,
       4,     4,    -1,   111,    -1,   227,    -1,   351,    -1,   138,
     351,    -1,    88,   351,    -1,    66,     5,    -1,     5,     4,
       4,    -1,   296,   349,   349,    -1,   342,   349,    -1,     5,
       5,   360,   364,     5,     5,   360,   364,   349,   360,   366,
       5,    -1,    60,   488,    -1,    66,     5,    -1,    80,    -1,
      73,   493,     5,    -1,    73,   493,   299,     5,    -1,    75,
      99,    -1,    -1,    83,   486,   489,    -1,    89,    -1,    99,
      -1,    99,    17,    -1,   105,   492,    -1,   114,     4,    -1,
     129,     5,    -1,   148,    17,    -1,   148,   208,   349,   349,
      -1,   148,   288,   349,   349,    -1,     4,    20,   372,   351,
      -1,     4,    21,   354,    -1,     4,    21,   354,   361,    -1,
       4,    21,   354,   359,   364,    -1,     4,    22,   235,   349,
     349,     4,   359,   366,    -1,     4,    22,   235,     5,   359,
     366,    -1,     4,    48,   121,   351,    -1,     4,    49,   235,
     349,   349,   349,     4,   359,   366,    -1,     4,    49,   235,
       5,   359,   366,    -1,     4,    48,   235,   349,   349,   359,
     366,    -1,     4,    52,   105,   354,   354,     4,   349,   349,
     349,     4,    -1,     4,    52,   105,   354,   354,     4,   349,
     349,   349,     4,   361,    -1,     4,    52,   105,   354,   354,
       4,   349,   349,   349,     4,   359,   364,    -1,     4,    52,
     105,     5,     5,   359,   364,   359,   366,    -1,     4,    55,
     487,     5,     5,    -1,     4,    62,   121,   351,    -1,     4,
      62,   235,   349,   359,   366,    -1,     4,    66,     5,    -1,
       4,    74,    27,   351,   351,    -1,     4,    74,   165,     5,
       5,    -1,     4,    74,   235,   349,   359,   366,    -1,     4,
      74,   277,   359,   364,    -1,     4,    75,   137,   351,    -1,
       4,    82,   105,   354,   354,     4,   349,   349,     4,    -1,
       4,    82,   105,   354,   354,     4,   349,   349,     4,   361,
      -1,     4,    82,   105,   354,   354,     4,   349,   349,     4,
     359,   364,    -1,     4,    82,   105,     5,     5,   359,   364,
     359,   366,    -1,     4,    83,    22,   235,   349,   349,    -1,
       4,    83,    49,   235,   349,   349,    -1,     4,    83,    52,
      21,   349,   349,    -1,     4,    83,    52,   235,   349,   349,
      -1,     4,    83,   110,   235,   349,   349,    -1,     4,    83,
     113,    21,   349,   349,    -1,     4,    83,   113,   235,   349,
     349,    -1,     4,    83,    82,    21,   349,   349,    -1,     4,
      83,    82,   235,   349,   349,    -1,     4,    83,   223,   303,
       4,   349,   349,    -1,     4,    83,   253,   303,     4,   349,
     349,    -1,     4,    99,    -1,     4,    99,    22,     4,    -1,
       4,    99,    49,     4,    -1,     4,    99,    52,     4,    -1,
       4,    99,   110,     4,    -1,     4,    99,    55,   487,     5,
      -1,     4,    99,   113,     4,    -1,     4,    99,    82,     4,
      -1,     4,    99,   223,   303,     4,    -1,     4,    99,   253,
     303,     4,    -1,     4,    99,   279,    -1,     4,    99,   279,
       5,    -1,     4,    99,   279,     4,    -1,     4,   105,    40,
       4,    -1,     4,   109,   121,   351,    -1,     4,   109,   235,
     349,   349,   359,   366,    -1,     4,   110,   235,   349,   349,
     349,     4,   359,   366,    -1,     4,   110,   235,     5,   359,
     366,    -1,     4,   113,   105,   354,   354,     4,   349,   349,
     349,     4,    -1,     4,   113,   105,   354,   354,     4,   349,
     349,   349,     4,   361,    -1,     4,   113,   105,   354,   354,
       4,   349,   349,   349,     4,   359,   364,    -1,     4,   113,
     105,     5,     5,   359,   364,   359,   366,    -1,     4,   129,
       5,    -1,     4,   148,    -1,     4,   148,   208,    -1,     4,
     170,    27,   351,   351,    -1,     4,   170,   221,   359,   364,
     358,   358,    -1,     4,   193,   349,   349,    -1,     4,   193,
     131,    -1,     4,   193,    36,    -1,     4,   193,   287,   359,
     364,   358,    -1,     4,   223,   239,   349,   349,   359,   366,
      -1,     4,   253,   239,   349,   349,   359,   366,    -1,     4,
     221,   257,   370,    -1,     4,   221,   264,     4,    -1,     4,
     223,   121,   351,    -1,     4,   229,   359,   364,   358,   358,
     349,   359,   366,    -1,     4,   230,   506,   351,    -1,     4,
     243,    40,    -1,     4,   244,   130,     5,    -1,     4,   244,
     221,   359,   364,   358,   358,    -1,     4,   244,   277,   359,
     364,   359,   366,    -1,     4,   254,    -1,     4,   254,   208,
      -1,     4,   279,     5,    -1,     4,   281,     5,    -1,     4,
     281,   243,   351,    -1,     4,   293,    -1,     4,   295,    -1,
       4,   301,    27,   351,    -1,     4,   301,   221,   359,   364,
     358,   359,   366,   349,   354,    -1,     4,   335,     4,    -1,
     163,    -1,   163,   349,   349,    -1,   172,   501,    -1,   173,
     502,    -1,   193,   503,    -1,   228,   351,    -1,   230,   506,
     351,    -1,   230,   506,   351,   349,   349,    -1,   243,    40,
     349,   349,    -1,   243,   192,   349,   349,     4,    -1,   243,
     111,    -1,   248,     5,   493,   359,   364,   365,   351,    -1,
     248,   280,     5,    -1,   254,   510,    -1,   261,   511,    -1,
       5,    66,     5,    -1,     5,    80,    -1,     5,    99,    -1,
       5,    89,    -1,     5,   129,     5,    -1,     5,   148,    -1,
       5,   148,   208,    -1,     5,   193,   349,   349,    -1,     5,
     193,   131,    -1,     5,   193,    36,    -1,     5,   193,   287,
     359,   364,   358,    -1,     5,   230,   506,   351,    -1,     5,
     254,    -1,     5,   254,   208,    -1,     5,   293,    -1,     5,
     295,    -1,   279,   105,     5,     5,    -1,   279,    99,     5,
      -1,   279,    99,    17,    -1,   279,     5,    -1,   279,   296,
       5,    -1,   214,    -1,   214,   359,    -1,   292,    -1,   293,
      17,    -1,   295,    17,    -1,   335,     4,    -1,   254,    -1,
     295,    -1,   148,    -1,   293,    -1,    40,   193,    -1,   193,
      -1,   111,   193,    -1,    40,   105,    -1,   105,    -1,   111,
     105,    -1,    40,   243,    -1,   243,    -1,   111,   243,    -1,
      99,    -1,   281,    -1,    66,    -1,   335,    -1,   230,    -1,
     129,    -1,   163,    -1,   296,    -1,    -1,     4,    -1,    30,
     351,    -1,   235,   349,    -1,   159,     4,    -1,   209,     4,
     349,    -1,    62,   349,   349,   349,   507,    -1,   109,   349,
     349,   349,   349,   353,   507,    -1,    48,   349,   349,   349,
     349,   353,   507,    -1,   223,   349,   349,   349,   349,   507,
      -1,   253,   349,   349,   349,   349,   507,    -1,   170,   349,
     349,   349,   349,   507,    -1,   301,   349,   349,   349,   349,
     507,    -1,   281,   349,   349,   353,   507,    -1,    62,   221,
     349,   349,   371,   507,    -1,    48,   221,   349,   349,   371,
     507,    -1,   102,   221,   349,   349,   371,   507,    -1,    85,
     221,   349,   349,   371,   507,    -1,   345,   221,   349,   349,
     371,   507,    -1,    27,   221,   349,   349,   371,   507,    -1,
      51,   221,   349,   349,   371,   507,    -1,   244,   349,   349,
     349,   349,   359,   364,   359,   366,     5,   507,    -1,    74,
     349,   349,   349,   359,   364,   507,    -1,   229,   349,   349,
     349,   349,   349,   507,    -1,    22,   349,   349,   349,   349,
       4,   507,    -1,   110,   349,   349,   349,   349,   349,     4,
     353,   507,    -1,    49,   349,   349,   349,   349,   349,     4,
     353,   507,    -1,    82,   349,   349,   354,   354,     4,   349,
     349,     4,   507,    -1,   113,   349,   349,   354,   354,     4,
     349,   349,   349,     4,   353,   507,    -1,    52,   349,   349,
     354,   354,     4,   349,   349,   349,     4,   353,   507,    -1,
      75,   507,    -1,   280,   490,    -1,     5,   349,   349,    -1,
     299,     5,   349,   349,    -1,   349,   349,   299,     5,    -1,
       5,   359,   364,   358,    -1,     4,     4,    -1,    40,   349,
     349,     4,    -1,   192,   349,   349,     4,    -1,   111,    -1,
     104,    -1,   337,    -1,    63,    -1,   247,    -1,   246,    -1,
     232,    -1,   338,    -1,    60,   495,    -1,    66,    -1,   129,
      -1,   114,    -1,   142,   349,   349,    -1,   153,   349,   349,
      -1,     4,    20,    82,   359,    -1,     4,    20,   150,     5,
       5,     4,    -1,     4,    20,   219,     5,     5,     5,     5,
     359,   364,   373,    -1,     4,    20,   220,     5,     5,   359,
     364,   373,    -1,     4,    20,   234,     5,     5,     5,   359,
      -1,     4,    20,   274,   359,   364,    -1,   153,    17,    -1,
       4,    21,    -1,     4,    21,   361,    -1,     4,    21,   359,
     364,    -1,     4,    22,   235,   359,   366,    -1,     4,    48,
     121,    -1,     4,    49,   235,   359,   366,    -1,     4,    48,
     235,   359,   366,    -1,     4,    52,    21,    -1,     4,    52,
      21,   361,    -1,     4,    52,    21,   359,   364,    -1,     4,
      52,   235,   359,   366,    -1,     4,    59,   359,   364,   365,
      -1,     4,    62,   121,    -1,     4,    62,   235,   359,   366,
      -1,     4,    66,    -1,     4,    74,    27,    -1,     4,    74,
     165,    -1,     4,    74,   235,   359,   366,    -1,     4,    74,
     277,    -1,     4,    75,   137,    -1,     4,    82,    21,    -1,
       4,    82,    21,   361,    -1,     4,    82,    21,   359,   364,
      -1,     4,    82,   235,   359,   366,    -1,     4,   109,   121,
      -1,     4,   109,   235,   359,   366,    -1,     4,   110,   235,
     359,   366,    -1,     4,   113,    21,    -1,     4,   113,    21,
     361,    -1,     4,   113,    21,   359,   364,    -1,     4,   113,
     235,   359,   366,    -1,     4,   129,    -1,     4,   148,    -1,
       4,   170,    27,    -1,     4,   170,   166,   359,   366,    -1,
       4,   170,   221,   359,   364,   365,    -1,     4,   179,   166,
     349,   359,   366,    -1,     4,   223,   121,    -1,     4,   221,
     257,    -1,     4,   221,   264,    -1,     4,   229,   221,   359,
     364,   365,    -1,     4,   229,   166,   359,   366,    -1,     4,
     229,   285,   359,   366,    -1,     4,   230,    -1,     4,   230,
     506,    -1,     4,   244,   130,    -1,     4,   244,   166,   359,
     366,    -1,     4,   244,   221,   359,   364,   365,    -1,     4,
     244,   277,    -1,     4,   254,    -1,     4,   279,    -1,     4,
     279,     4,    -1,     4,   281,    -1,     4,   281,   243,    -1,
       4,   291,    -1,     4,   301,    27,    -1,     4,   301,   166,
     359,   366,    -1,     4,   301,   221,   359,   364,   365,    -1,
       4,   335,    -1,   148,   496,    -1,   148,   204,    -1,   204,
      -1,   223,   253,   349,   349,    -1,   253,   253,   349,   349,
      -1,   228,    -1,   230,   506,    -1,   254,   497,    -1,   254,
     204,    -1,   261,   498,    -1,     5,    66,    -1,     5,   129,
      -1,     5,   153,    -1,     5,   230,   506,    -1,     5,   279,
      -1,     5,   279,   204,    -1,   279,    17,    -1,   279,    98,
     194,    -1,   335,    -1,    30,    -1,   235,    -1,   159,    -1,
     209,    -1,    -1,   349,   349,    -1,    -1,   349,   349,    -1,
      -1,   281,    -1,    -1,    -1,   222,    -1,   236,    -1,   297,
      -1,    57,    -1,   493,   359,   364,   365,   351,   508,   514,
      -1,   254,   493,   359,   364,   365,   351,   508,   514,    -1,
     493,     5,    -1,   493,     5,   359,   364,    -1,   493,     4,
      -1,   493,     4,   359,   364,    -1,   124,     5,     5,   491,
       4,     5,    -1,   349,   349,    -1,   131,    -1,    36,    -1,
      40,   349,   349,    -1,   192,   349,   349,    -1,   111,    -1,
     287,   359,   364,   358,    -1,   504,   505,    -1,   505,    -1,
     506,   346,   351,    -1,    66,   346,     5,    -1,    92,   346,
       4,     4,    -1,   335,   346,     4,    -1,   129,   346,     5,
      -1,   281,   346,     5,    -1,   517,    -1,   518,    -1,   201,
      -1,   254,    -1,   148,    -1,    91,    -1,   126,    -1,   105,
      -1,   193,    -1,   243,    -1,    99,    -1,   156,    -1,   270,
      -1,   499,    -1,   499,   504,    -1,    -1,    -1,   509,   512,
      -1,    17,    -1,   208,   349,   349,    -1,   288,    -1,   288,
     349,   349,    -1,   351,    -1,   281,   351,    -1,   512,   513,
      -1,   513,    -1,   506,   346,   351,    -1,    -1,    -1,   515,
     516,    -1,   516,   517,    -1,   517,    -1,   279,   346,     5,
      -1,    55,   346,   487,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   180,     4,    -1,   286,   349,    -1,   345,    -1,
     343,    -1,   338,    -1,   201,    -1,   349,   349,   349,   349,
      -1,   349,   349,    -1,   361,   349,   349,    -1,   359,   364,
     358,    -1,   287,   522,    -1,    39,   349,   349,    -1,   192,
     523,    -1,   228,   351,    -1,   349,   349,    -1,   361,   349,
     349,    -1,   359,   364,   358,    -1,    40,   349,   349,    -1,
     349,   349,    -1,   111,   349,   349,    -1,   351,    -1,   306,
     360,   364,    -1,     5,     4,     4,    -1,   296,    -1,    70,
     527,    -1,   167,     4,    -1,   240,     4,    -1,   249,   349,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    54,    -1,
     139,    -1,   241,    -1,    90,    -1,   148,   529,    -1,   254,
     530,    -1,    40,   349,   349,    -1,   192,   349,   349,    -1,
     111,    -1,   259,   111,    -1,    40,   349,   349,    -1,   192,
     349,   349,    -1,   111,    -1,   259,   111,    -1,   187,    -1,
      13,    -1,   201,    -1,    34,    -1,   107,    -1,    61,     5,
      -1,   277,   359,    -1,   300,     4,     4,     4,    -1,   349,
      -1,   349,    97,    -1,   192,   535,    -1,   287,   349,    -1,
     287,   349,    97,    -1,    40,    -1,   349,    -1,   111,    -1,
      26,   537,    -1,   124,   539,    -1,   203,   549,    -1,   112,
     550,    -1,   216,     5,    -1,   120,     5,   374,    -1,    61,
       5,   374,    -1,   268,     4,   374,    -1,   241,    87,   538,
      -1,   120,     5,   374,    -1,    61,     5,   374,    -1,   268,
       4,   374,    -1,   540,    -1,   155,   540,    -1,   278,   541,
      -1,   265,   542,    -1,   117,    87,   543,    -1,   190,   544,
      -1,   241,   155,   546,    -1,   241,    87,   547,    -1,   238,
     548,    -1,   120,     5,    -1,    61,     5,    -1,   268,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   268,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   268,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   268,     4,    -1,   155,   545,
      -1,   120,     5,     4,    -1,    61,     5,     4,    -1,   268,
       4,     4,    -1,   120,     5,    -1,    61,     5,    -1,   268,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   268,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   268,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   268,     4,    -1,   120,
       5,   374,    -1,    61,     5,   374,    -1,   268,     4,   374,
      -1,   120,     5,     5,   374,    -1,   552,     4,     4,   349,
     349,   354,    -1,    99,    -1,    50,    -1,   289,    -1,   135,
      -1,   108,    -1,    -1,     4,   349,   349,   349,   349,    -1,
     202,    -1,   202,     4,   349,   349,   349,   349,    -1,   124,
     265,   554,    -1,     4,    -1,   349,   359,   364,    -1,     4,
       4,    -1,   349,   349,    -1,   287,   349,   349,    -1,   360,
     364,   365,    -1,    16,   559,    -1,   239,     4,    -1,   237,
     558,    -1,    23,   557,    -1,     4,     4,    -1,     4,     5,
      -1,   281,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   281,     4,     5,    -1,     4,    -1,     4,   360,   364,
      -1,     4,     6,   360,   364,    -1,   227,    -1,   349,   349,
      -1,   349,   349,    12,   349,   349,    -1,   349,   349,    12,
     361,   349,   349,    -1,   349,   349,    12,   359,   364,   358,
      -1,   287,   562,    -1,   123,    -1,   123,   349,    -1,   349,
     349,    -1,   349,   349,    12,   349,   349,    -1,   349,   349,
      12,   361,   349,   349,    -1,   349,   349,    12,   359,   364,
     358,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   449,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   503,   504,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   521,   523,
     524,   525,   526,   528,   529,   530,   531,   534,   535,   536,
     537,   538,   541,   542,   545,   546,   547,   550,   553,   556,
     559,   571,   578,   585,   593,   594,   595,   596,   597,   600,
     601,   602,   603,   604,   605,   606,   607,   608,   609,   610,
     611,   612,   613,   614,   615,   616,   617,   618,   619,   620,
     621,   622,   623,   624,   625,   626,   627,   630,   631,   634,
     635,   636,   637,   638,   639,   640,   641,   644,   645,   646,
     647,   648,   651,   652,   653,   654,   655,   656,   657,   658,
     661,   662,   663,   666,   667,   668,   669,   672,   673,   674,
     677,   678,   679,   682,   683,   684,   687,   688,   689,   690,
     691,   692,   693,   694,   697,   698,   701,   702,   703,   704,
     705,   706,   709,   710,   711,   714,   715,   716,   717,   718,
     719,   722,   723,   724,   725,   726,   727,   728,   729,   730,
     734,   735,   738,   739,   742,   743,   746,   747,   751,   752,
     753,   754,   755,   756,   757,   758,   761,   762,   765,   766,
     767,   769,   771,   772,   773,   775,   779,   780,   783,   784,
     786,   789,   791,   797,   798,   799,   802,   803,   804,   807,
     808,   809,   810,   811,   812,   813,   819,   820,   823,   824,
     825,   826,   827,   830,   831,   832,   835,   836,   841,   846,
     853,   855,   857,   858,   859,   862,   864,   867,   868,   871,
     872,   873,   874,   875,   878,   880,   882,   887,   892,   895,
     896,   899,   900,   901,   908,   909,   910,   911,   914,   915,
     918,   919,   922,   923,   926,   928,   932,   933,   936,   938,
     939,   940,   941,   944,   945,   947,   948,   949,   952,   954,
     956,   957,   959,   961,   963,   965,   969,   972,   973,   974,
     977,   980,   981,   982,   983,   984,   985,   986,   987,   988,
     989,   990,   991,   992,   993,   994,   995,   996,   997,   998,
    1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,
    1011,  1012,  1013,  1014,  1015,  1016,  1017,  1019,  1021,  1022,
    1025,  1026,  1027,  1028,  1029,  1030,  1031,  1032,  1035,  1036,
    1037,  1040,  1043,  1044,  1046,  1048,  1049,  1050,  1051,  1052,
    1053,  1060,  1061,  1064,  1065,  1066,  1069,  1070,  1073,  1076,
    1077,  1079,  1083,  1084,  1085,  1088,  1092,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,  1105,  1106,  1107,  1110,
    1111,  1114,  1116,  1124,  1126,  1128,  1132,  1133,  1135,  1138,
    1141,  1142,  1146,  1148,  1151,  1156,  1157,  1158,  1162,  1163,
    1164,  1167,  1168,  1169,  1172,  1173,  1175,  1176,  1177,  1178,
    1179,  1180,  1181,  1182,  1183,  1184,  1186,  1187,  1190,  1191,
    1194,  1195,  1196,  1197,  1200,  1203,  1205,  1208,  1212,  1213,
    1215,  1217,  1221,  1222,  1223,  1226,  1227,  1228,  1231,  1234,
    1235,  1236,  1239,  1240,  1241,  1242,  1243,  1244,  1247,  1248,
    1249,  1250,  1251,  1252,  1253,  1256,  1257,  1260,  1261,  1264,
    1265,  1268,  1269,  1272,  1273,  1274,  1277,  1278,  1281,  1282,
    1285,  1288,  1296,  1297,  1300,  1301,  1302,  1303,  1304,  1305,
    1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,
    1316,  1319,  1322,  1323,  1326,  1327,  1328,  1329,  1332,  1333,
    1334,  1335,  1338,  1339,  1340,  1341,  1342,  1343,  1346,  1347,
    1348,  1349,  1350,  1351,  1353,  1354,  1359,  1360,  1363,  1365,
    1367,  1370,  1371,  1372,  1373,  1374,  1375,  1378,  1380,  1382,
    1384,  1385,  1387,  1389,  1391,  1393,  1395,  1398,  1399,  1400,
    1401,  1402,  1403,  1405,  1406,  1407,  1410,  1413,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1430,  1432,  1434,  1436,  1437,
    1438,  1439,  1440,  1443,  1444,  1445,  1446,  1447,  1448,  1449,
    1451,  1453,  1454,  1455,  1458,  1459,  1460,  1461,  1462,  1463,
    1465,  1466,  1467,  1470,  1471,  1472,  1473,  1474,  1477,  1480,
    1483,  1486,  1489,  1492,  1495,  1498,  1501,  1506,  1509,  1512,
    1515,  1518,  1521,  1524,  1527,  1530,  1533,  1536,  1541,  1544,
    1547,  1550,  1553,  1556,  1559,  1562,  1565,  1570,  1573,  1576,
    1579,  1582,  1585,  1588,  1591,  1594,  1597,  1600,  1605,  1607,
    1608,  1609,  1610,  1611,  1613,  1614,  1615,  1617,  1618,  1619,
    1620,  1621,  1622,  1623,  1625,  1627,  1628,  1629,  1632,  1633,
    1634,  1635,  1636,  1637,  1639,  1640,  1641,  1644,  1646,  1648,
    1649,  1651,  1653,  1657,  1658,  1661,  1662,  1663,  1666,  1673,
    1674,  1675,  1676,  1677,  1678,  1679,  1682,  1690,  1691,  1692,
    1693,  1695,  1697,  1698,  1698,  1699,  1700,  1701,  1702,  1703,
    1704,  1706,  1707,  1709,  1712,  1715,  1716,  1717,  1720,  1723,
    1726,  1727,  1731,  1734,  1737,  1740,  1744,  1749,  1754,  1756,
    1757,  1759,  1760,  1762,  1764,  1766,  1768,  1769,  1771,  1773,
    1777,  1782,  1784,  1786,  1788,  1790,  1792,  1794,  1796,  1798,
    1800,  1802,  1805,  1806,  1808,  1810,  1811,  1813,  1815,  1816,
    1817,  1819,  1821,  1822,  1823,  1825,  1826,  1827,  1830,  1834,
    1837,  1840,  1844,  1849,  1855,  1856,  1857,  1859,  1860,  1864,
    1866,  1867,  1868,  1871,  1874,  1877,  1879,  1881,  1882,  1887,
    1890,  1891,  1892,  1895,  1899,  1900,  1902,  1903,  1904,  1906,
    1907,  1909,  1910,  1915,  1917,  1918,  1920,  1921,  1922,  1923,
    1924,  1925,  1927,  1929,  1931,  1932,  1934,  1935,  1937,  1939,
    1940,  1941,  1942,  1943,  1944,  1945,  1946,  1947,  1948,  1949,
    1951,  1953,  1954,  1955,  1956,  1958,  1959,  1960,  1961,  1962,
    1964,  1965,  1966,  1967,  1968,  1969,  1972,  1973,  1974,  1975,
    1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,
    1986,  1987,  1988,  1989,  1990,  1991,  1992,  1995,  1996,  1997,
    1998,  1999,  2000,  2008,  2015,  2024,  2033,  2040,  2047,  2055,
    2063,  2070,  2075,  2080,  2085,  2090,  2095,  2100,  2106,  2116,
    2126,  2136,  2143,  2153,  2163,  2172,  2184,  2197,  2202,  2205,
    2207,  2209,  2214,  2218,  2221,  2223,  2225,  2228,  2229,  2230,
    2231,  2232,  2233,  2234,  2237,  2238,  2239,  2240,  2241,  2242,
    2244,  2246,  2248,  2250,  2252,  2254,  2257,  2258,  2259,  2260,
    2262,  2265,  2266,  2268,  2270,  2271,  2272,  2274,  2277,  2280,
    2281,  2283,  2284,  2285,  2286,  2288,  2289,  2290,  2291,  2292,
    2294,  2296,  2297,  2299,  2302,  2303,  2304,  2306,  2308,  2309,
    2310,  2311,  2313,  2316,  2320,  2321,  2322,  2323,  2326,  2329,
    2331,  2332,  2333,  2334,  2336,  2339,  2340,  2342,  2343,  2344,
    2345,  2346,  2348,  2349,  2351,  2354,  2355,  2356,  2357,  2358,
    2360,  2362,  2363,  2364,  2365,  2367,  2369,  2370,  2371,  2372,
    2373,  2374,  2376,  2377,  2379,  2382,  2383,  2384,  2385,  2388,
    2389,  2392,  2393,  2396,  2397,  2400,  2413,  2414,  2418,  2419,
    2423,  2426,  2431,  2438,  2440,  2443,  2445,  2448,  2452,  2453,
    2454,  2455,  2456,  2457,  2458,  2462,  2463,  2466,  2467,  2468,
    2469,  2470,  2471,  2472,  2473,  2476,  2477,  2478,  2479,  2480,
    2481,  2482,  2483,  2484,  2485,  2486,  2489,  2490,  2493,  2494,
    2494,  2497,  2498,  2499,  2500,  2503,  2504,  2507,  2508,  2511,
    2515,  2516,  2516,  2519,  2520,  2523,  2526,  2530,  2531,  2532,
    2533,  2536,  2537,  2538,  2539,  2542,  2544,  2545,  2550,  2552,
    2553,  2554,  2555,  2558,  2559,  2564,  2568,  2569,  2570,  2573,
    2574,  2579,  2580,  2583,  2585,  2586,  2587,  2592,  2594,  2600,
    2601,  2602,  2603,  2606,  2607,  2610,  2612,  2614,  2615,  2618,
    2620,  2621,  2622,  2625,  2626,  2629,  2630,  2631,  2634,  2635,
    2636,  2639,  2640,  2641,  2642,  2643,  2646,  2647,  2648,  2651,
    2652,  2653,  2654,  2655,  2658,  2660,  2662,  2664,  2667,  2669,
    2671,  2674,  2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,
    2685,  2686,  2687,  2690,  2691,  2692,  2695,  2696,  2697,  2700,
    2701,  2702,  2705,  2706,  2707,  2708,  2711,  2712,  2713,  2716,
    2717,  2718,  2721,  2722,  2723,  2726,  2727,  2728,  2731,  2733,
    2735,  2739,  2743,  2745,  2748,  2749,  2750,  2751,  2754,  2755,
    2757,  2758,  2760,  2763,  2764,  2766,  2772,  2773,  2776,  2778,
    2779,  2780,  2781,  2784,  2785,  2786,  2789,  2790,  2791,  2794,
    2795,  2800,  2804,  2811,  2812,  2814,  2819,  2821,  2824,  2825,
    2826,  2827,  2829,  2834
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
  "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLOCK_",
  "BORDER_", "BOX_", "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_",
  "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_",
  "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_",
  "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_",
  "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_",
  "DETECTOR_", "DIAMOND_", "DIM_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_",
  "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_",
  "FITSY_", "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FRONT_",
  "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_",
  "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HAS_", "HEAD_",
  "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_", "HISTOGRAM_",
  "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_", "INCR_",
  "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_",
  "LABEL_", "LENGTH_", "LEVEL_", "LITTLE_", "LITTLEENDIAN_", "LINE_",
  "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_",
  "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MESSAGE_", "METHOD_",
  "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_",
  "MOTION_", "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_",
  "NEXT_", "NO_", "NONE_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_",
  "ON_", "ONLY_", "OPTION_", "ORIENT_", "PAN_", "PANNER_", "PARSER_",
  "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_",
  "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_",
  "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_",
  "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "REGION_", "REPLACE_",
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
  "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZMAX_", "ZSCALE_",
  "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric",
  "debug", "yesno", "fileNameType", "optangle", "angle", "sexagesimal",
  "hms", "dms", "coord", "coordSystem", "wcsSystem", "internalSystem",
  "scaleType", "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType",
  "incrLoad", "layerType", "pointShape", "pointSize", "analysisMethod",
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
  "loadFitsMosaicImageWCS", "loadFitsMosaicWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsRGBCube", "loadFitsRGBImage",
  "loadNRRD", "loadPhoto", "loadIncr", "macosx", "magnifier", "match",
  "marker", "@1", "markerCallBack", "markerCentroid", "markerCreate",
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
     595,   596,   597,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   347,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   349,   349,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   352,   352,   352,
     352,   352,   353,   353,   354,   354,   354,   355,   356,   357,
     358,   358,   358,   358,   359,   359,   359,   359,   359,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   361,   361,   362,
     362,   362,   362,   362,   362,   362,   362,   363,   363,   363,
     363,   363,   364,   364,   364,   364,   364,   364,   364,   364,
     365,   365,   365,   366,   366,   366,   366,   367,   367,   367,
     368,   368,   368,   369,   369,   369,   370,   370,   370,   370,
     370,   370,   370,   370,   371,   371,   372,   372,   372,   372,
     372,   372,   373,   373,   373,   374,   374,   374,   374,   374,
     374,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     376,   376,   377,   377,   378,   378,   379,   379,   380,   380,
     380,   380,   380,   380,   380,   380,   381,   381,   382,   382,
     382,   382,   382,   382,   382,   382,   383,   383,   384,   384,
     384,   384,   384,   385,   385,   385,   386,   386,   386,   387,
     387,   387,   387,   387,   387,   387,   388,   388,   389,   389,
     389,   389,   389,   390,   390,   390,   391,   391,   391,   391,
     392,   392,   392,   392,   392,   393,   393,   394,   394,   395,
     395,   395,   395,   395,   396,   396,   396,   396,   396,   397,
     397,   398,   398,   398,   399,   399,   399,   399,   400,   400,
     401,   401,   402,   402,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   405,   405,   405,   405,   405,   406,   406,
     406,   406,   406,   406,   406,   406,   407,   408,   408,   408,
     409,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   411,   411,   411,   411,   411,   411,   412,   412,
     412,   413,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   415,   415,   416,   416,   416,   417,   417,   418,   419,
     419,   419,   420,   420,   420,   421,   422,   422,   422,   422,
     422,   422,   422,   422,   422,   422,   423,   423,   423,   424,
     424,   425,   425,   426,   426,   426,   427,   427,   427,   428,
     429,   429,   430,   430,   430,   431,   431,   431,   432,   432,
     432,   433,   433,   433,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   435,   435,
     436,   436,   436,   436,   437,   438,   438,   438,   439,   439,
     439,   439,   440,   440,   440,   441,   441,   441,   442,   443,
     443,   443,   444,   444,   444,   444,   444,   444,   445,   445,
     445,   445,   445,   445,   445,   446,   446,   447,   447,   448,
     448,   449,   449,   450,   450,   450,   451,   451,   452,   452,
     453,   453,   454,   454,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   456,   457,   457,   458,   458,   458,   458,   459,   459,
     459,   459,   460,   460,   460,   460,   460,   460,   461,   461,
     461,   461,   461,   461,   461,   461,   462,   462,   463,   463,
     463,   464,   464,   464,   464,   464,   464,   465,   465,   465,
     465,   465,   465,   465,   465,   465,   465,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   467,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   471,   471,   471,   471,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   479,   479,   479,
     479,   479,   479,   480,   480,   481,   481,   481,   482,   483,
     483,   483,   483,   483,   483,   483,   484,   485,   485,   485,
     485,   485,   485,   486,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   488,   488,   488,
     488,   488,   488,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   490,
     490,   490,   490,   491,   492,   492,   492,   493,   493,   493,
     493,   493,   493,   493,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   496,
     496,   497,   497,   498,   498,   499,   500,   500,   500,   500,
     500,   501,   501,   502,   502,   502,   502,   502,   503,   503,
     503,   503,   503,   503,   503,   504,   504,   505,   505,   505,
     505,   505,   505,   505,   505,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   507,   507,   508,   509,
     508,   510,   510,   510,   510,   511,   511,   512,   512,   513,
     514,   515,   514,   516,   516,   517,   518,   519,   519,   519,
     519,   520,   520,   520,   520,   521,   521,   521,   521,   521,
     521,   521,   521,   522,   522,   522,   523,   523,   523,   524,
     524,   524,   524,   525,   525,   525,   525,   526,   526,   527,
     527,   527,   527,   528,   528,   529,   529,   529,   529,   530,
     530,   530,   530,   531,   531,   532,   532,   532,   533,   533,
     533,   534,   534,   534,   534,   534,   535,   535,   535,   536,
     536,   536,   536,   536,   537,   537,   537,   537,   538,   538,
     538,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     540,   540,   540,   541,   541,   541,   542,   542,   542,   543,
     543,   543,   544,   544,   544,   544,   545,   545,   545,   546,
     546,   546,   547,   547,   547,   548,   548,   548,   549,   549,
     549,   550,   551,   551,   552,   552,   552,   552,   553,   553,
     553,   553,   553,   554,   554,   554,   555,   555,   556,   556,
     556,   556,   556,   557,   557,   557,   558,   558,   558,   559,
     559,   559,   560,   561,   561,   561,   561,   561,   562,   562,
     562,   562,   562,   562
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     2,     1,     1,     2,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     3,     2,     2,     2,     2,     3,
       2,     3,     2,     2,     2,     2,     2,     2,     1,     3,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     2,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     2,
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
       1,     2,     3,     2,     0,     1,     4,     2,     0,     3,
       3,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       6,     5,     1,     1,     1,     2,     2,     1,     1,     1,
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
       5,     5,     5,     7,     5,     5,     6,     5,     5,     5,
       5,     6,     5,     7,     8,     5,     5,     6,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     3,     3,     3,
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
       4,     6,    10,     8,     7,     5,     2,     2,     3,     4,
       5,     3,     5,     5,     3,     4,     5,     5,     5,     3,
       5,     2,     3,     3,     5,     3,     3,     3,     4,     5,
       5,     3,     5,     5,     3,     4,     5,     5,     2,     2,
       3,     5,     6,     6,     3,     3,     3,     6,     5,     5,
       2,     3,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     7,     8,     2,     4,     2,     4,     6,     2,     1,
       1,     3,     3,     1,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     0,
       2,     1,     3,     1,     3,     1,     2,     2,     1,     3,
       0,     0,     2,     2,     1,     3,     5,     1,     2,     2,
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
       3,     4,     6,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     1,     3,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     2,     2,     3,     1,
       3,     4,     1,     2,     5,     6,     6,     2,     1,     2,
       2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1026,     0,
       0,     0,     0,     0,     0,     0,     0,  1026,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1208,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   233,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   262,   264,
       0,     0,    10,   134,   136,   129,   130,   131,   135,   132,
     133,   267,    11,     0,   279,     0,     0,     0,    12,     0,
       0,     0,     0,   303,     0,    13,    68,    97,     0,   127,
      96,    76,    94,     0,    73,    75,    71,   128,    95,    72,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    69,
      70,    74,   310,   142,    98,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,    57,    56,     0,     0,
       0,     0,     2,     0,    17,     0,     0,     0,   372,   386,
       0,   392,     0,     0,     0,     0,     0,     0,     0,   335,
       0,   462,     0,     0,     0,     0,     0,  1026,     0,   343,
       0,   347,     0,     0,     0,   351,     0,   353,     0,   355,
       0,     0,   493,   359,    18,     0,   499,    19,   504,     0,
     522,   507,   508,   509,   510,   524,   512,   513,   517,   514,
       0,   516,   518,     0,     0,    20,    22,     0,   539,     0,
       0,     0,   544,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   698,    26,     0,     0,     0,     0,     0,
       0,   699,    27,     0,    28,  1030,  1027,  1028,  1029,     0,
    1087,     0,     0,     0,    30,     0,  1094,  1093,  1092,  1091,
      32,     0,     0,     0,     0,     0,   142,     0,    33,     0,
    1112,     0,  1109,    34,     0,     0,     0,     0,    37,     0,
      36,    35,     0,     0,     0,     0,    40,     0,     0,  1141,
      41,     0,     0,     0,     0,     0,    42,  1204,  1203,  1207,
    1206,  1205,    44,     0,    45,     0,     0,     0,     0,     0,
     198,     0,     0,     0,    46,     0,     0,  1210,    48,     0,
       0,    50,     0,     0,     0,     0,   142,    51,  1232,    52,
       0,     0,    53,     1,     4,   216,     0,   208,     0,     0,
     210,     0,   218,   211,   215,   226,   227,   212,   228,     0,
     214,   236,   237,   235,   234,     0,     0,     0,   241,   249,
     252,   251,   250,   248,   240,   245,   246,   247,   239,     0,
       0,     0,     0,     0,     0,   244,     9,     0,     0,     0,
     263,     0,   268,     0,   278,   269,   280,   270,   281,   271,
     292,   272,     0,     0,   273,     0,    87,    88,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     299,     0,     0,     0,     0,     0,   144,   149,   143,   145,
     148,   147,   146,     0,     0,   316,    62,    63,    64,    65,
      66,    58,    59,    60,    67,    61,     0,   321,     0,   368,
     364,   360,   361,   365,   362,   367,   322,   371,   323,   284,
     376,   380,   375,   287,   286,   285,     0,     0,   324,   387,
     326,     0,   325,     0,   394,   327,   406,   398,   409,   399,
     400,   402,     0,   404,   405,   142,   328,     0,     0,   329,
       0,     0,   142,   330,   418,   142,   416,   331,   419,   333,
     142,   420,   332,     0,   142,     0,   334,   438,     0,   436,
     454,     0,     0,     0,   442,   434,     0,   444,   458,   447,
     336,   463,   464,   337,     0,     0,     0,   429,     0,   340,
     425,   426,     0,   341,   342,     0,   465,   466,   467,   345,
     346,   468,   348,     0,   469,   470,   471,   350,   477,   472,
     473,   475,   352,   483,   485,   487,   489,   482,   484,   491,
     354,     0,     0,   496,     0,   358,   142,   498,     0,   505,
     523,   506,   525,   526,   527,   511,   528,   530,   529,   531,
     515,   519,   536,     0,     0,     0,     0,   532,   520,     0,
       0,   541,   540,     0,     0,     0,     0,    24,     0,     0,
     551,     0,   552,     0,     0,     0,     0,     0,   553,     0,
     697,     0,   554,     0,   555,     0,     0,   556,     0,   702,
     701,   700,     0,   705,     0,     0,     0,   877,     0,     0,
       0,   709,   713,   715,   716,     0,     0,     0,     0,   814,
       0,     0,     0,   850,     0,     0,     0,     0,     0,     0,
       0,   852,     0,     0,     0,    29,  1088,  1089,  1090,    31,
       0,     0,     0,     0,  1101,  1102,     0,   142,     0,  1099,
    1096,     0,     0,     0,   142,  1119,  1122,  1120,  1121,  1113,
    1114,  1115,  1116,     0,     0,     0,    39,  1138,  1139,     0,
    1146,  1148,  1147,  1143,  1144,  1142,     0,     0,     0,     0,
    1149,     0,  1152,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1150,  1161,     0,     0,     0,  1151,  1153,
       0,  1136,  1137,  1135,   196,     0,   200,   192,     0,   202,
     193,     0,   204,   194,  1134,  1133,   195,   197,   199,     0,
       0,   191,     0,     0,     0,     0,  1216,  1229,  1219,     0,
       0,  1222,     0,     0,  1221,  1220,   150,  1238,     0,  1237,
    1233,   217,   213,     0,   222,     0,   219,     0,   238,   137,
     140,   141,   139,   138,   253,   254,   255,   243,   242,   257,
     259,   258,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,     0,   300,    93,    90,    91,    92,   142,   302,
     301,     0,     0,     0,     0,     0,     0,     0,   315,     0,
     311,   309,   308,   320,   363,     0,     0,   366,   381,   382,
     377,   378,   383,   385,   384,   379,   288,   289,   374,   373,
     389,   388,     0,   393,   407,   408,   397,   410,   403,   401,
     396,     0,     0,   142,   142,   150,   150,   150,   142,     0,
       0,   142,   437,   448,     0,   439,    77,   450,     0,     0,
     441,   443,   142,     0,     0,   446,     0,     0,     0,   431,
       0,     0,     0,     0,   925,   927,   926,     0,  1019,     0,
     998,     0,  1001,     0,     0,  1021,  1023,     0,  1014,   344,
       0,   474,   476,   486,   479,   488,   480,   490,   481,   492,
     478,     0,     0,   497,   494,   495,   150,   521,   534,   533,
     535,   537,     0,   550,   538,     0,     0,     0,     0,     0,
       0,   163,   163,   157,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   160,   160,   157,     0,     0,   157,     0,
       0,     0,     0,     0,   592,   616,     0,     0,     0,   588,
       0,     0,     0,     0,   163,   157,     0,     0,   693,     0,
     703,   704,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   762,     0,     0,     0,
       0,     0,   785,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   804,     0,     0,   809,   810,     0,     0,     0,
     830,   832,   831,     0,   834,     0,     0,   841,   843,   844,
     878,     0,     0,     0,     0,   707,   708,   919,   917,   922,
     921,   920,   918,   923,     0,   712,     0,   717,     0,   916,
       0,   718,   719,   720,   721,     0,     0,     0,     0,     0,
     816,     0,     0,   817,  1040,     0,  1043,  1039,     0,     0,
       0,   818,   851,   819,  1058,  1063,  1060,  1059,  1057,  1064,
    1061,  1055,  1062,  1056,  1065,     0,     0,   824,     0,     0,
       0,  1071,     0,  1073,   827,     0,  1075,   828,   848,     0,
       0,     0,   853,   854,   855,  1100,     0,     0,  1107,  1103,
       0,     0,     0,  1098,  1097,  1111,  1110,     0,     0,  1127,
       0,     0,  1123,     0,  1131,     0,     0,  1124,     0,  1145,
     185,   185,     0,   185,     0,  1171,     0,  1170,  1162,     0,
       0,     0,     0,  1166,     0,     0,     0,  1169,     0,     0,
       0,     0,     0,  1164,  1172,     0,     0,     0,  1163,   185,
     185,   185,     0,   201,   203,   205,     0,   206,     0,    55,
       0,  1212,     0,  1217,     0,   142,  1223,  1224,     0,  1226,
    1227,     0,   151,   152,  1218,  1239,  1240,     0,   209,     0,
     223,     0,     0,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     0,   294,   142,     0,     0,     0,     0,
     142,     0,   314,     0,   313,   370,   369,     0,     0,     0,
     142,     0,   150,   415,   413,   417,   421,     0,     0,     0,
     150,     0,    81,    80,   455,   440,     0,   451,   453,   153,
       0,   142,   142,   338,     0,     0,    55,     0,   430,     0,
       0,   937,     0,     0,     0,     0,     0,     0,   951,     0,
       0,     0,     0,     0,     0,   968,   969,     0,     0,     0,
       0,     0,   980,     0,   986,   987,   989,   991,     0,   995,
    1006,  1007,  1008,     0,  1010,  1015,  1017,  1018,  1016,   924,
       0,   997,     0,   996,   936,     0,     0,  1002,     0,  1004,
       0,  1003,  1024,  1005,  1012,     0,     0,   356,     0,     0,
     548,   549,     0,   546,   542,     0,   163,   163,   163,   164,
     165,   560,   561,   159,   158,     0,   163,   163,   163,     0,
     566,   576,   160,   163,   163,   163,   161,   162,   163,   163,
       0,   163,   163,     0,   160,     0,   589,     0,     0,     0,
     615,     0,   614,     0,     0,   591,     0,   590,     0,     0,
       0,     0,   160,   160,   157,     0,     0,   157,     0,     0,
       0,   163,   163,   689,     0,   163,   163,   694,     0,   176,
     177,   178,   179,   180,   181,     0,    85,    86,    84,   725,
       0,     0,     0,     0,     0,     0,   871,   869,   864,     0,
     874,   858,   875,   861,   873,   867,   856,   870,   859,   857,
     876,   872,     0,     0,     0,   741,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
       0,     0,     0,     0,     0,   784,   786,     0,     0,   791,
     790,     0,     0,   166,     0,     0,     0,   142,     0,   800,
       0,     0,     0,     0,   805,   806,   807,     0,     0,     0,
     813,   829,   833,   835,   838,   837,     0,     0,     0,   842,
     879,   881,     0,   880,   710,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1025,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     714,     0,     0,     0,     0,   815,     0,   142,     0,  1035,
    1033,     0,     0,   142,  1038,   820,     0,     0,     0,   826,
       0,     0,  1076,   846,   847,     0,   849,  1106,  1108,  1105,
    1104,  1095,     0,     0,     0,  1128,     0,     0,  1132,  1140,
     187,   188,   189,   190,   186,  1155,  1154,     0,     0,     0,
    1157,  1156,   185,     0,     0,     0,  1165,     0,     0,     0,
       0,     0,  1182,     0,  1196,  1195,  1197,     0,     0,     0,
    1168,     0,     0,     0,  1167,  1177,  1176,  1178,  1174,  1173,
    1175,  1199,  1198,  1200,     0,     0,     0,  1215,   142,     0,
     142,  1230,  1225,  1228,     0,     0,   142,     0,     0,     0,
     220,     0,     0,     0,     0,     0,     0,     0,     0,   291,
     290,     0,     0,   282,   293,   295,     0,   305,   307,   306,
     304,   142,   312,     0,     0,     0,   150,   142,     0,     0,
       0,     0,   435,   449,    79,    78,   457,     0,   452,   155,
     156,   154,   445,   142,   460,   459,     0,     0,   433,   427,
       0,     0,     0,     0,     0,     0,   142,   938,     0,   941,
       0,     0,   944,     0,   142,   949,     0,   952,   953,     0,
     955,   956,   957,     0,   961,     0,     0,   964,     0,   970,
       0,     0,     0,   975,   976,   974,     0,     0,     0,   981,
     982,     0,     0,   985,   988,   990,   992,     0,     0,  1009,
    1011,   928,  1020,   929,     0,     0,  1022,  1013,     0,     0,
     502,   503,     0,     0,   547,     0,   557,   558,   559,   163,
     563,   564,   565,     0,     0,     0,   570,   571,   157,     0,
       0,     0,   163,   577,   578,   579,   580,   582,   160,   585,
     586,     0,   163,     0,     0,     0,   160,   160,   157,     0,
       0,     0,     0,   613,     0,   617,     0,     0,     0,     0,
       0,   160,   160,   157,     0,     0,   157,     0,     0,     0,
       0,     0,   160,   160,   157,     0,     0,   157,     0,     0,
       0,     0,     0,   160,   160,   157,     0,     0,   157,     0,
       0,     0,     0,   160,   160,   157,     0,     0,     0,   160,
     593,   594,   595,   596,   598,     0,   601,   602,     0,   160,
       0,     0,   687,   688,   163,   691,   692,     0,   724,   142,
     726,     0,     0,   730,     0,     0,     0,     0,     0,   863,
     860,   866,   865,   862,   868,     0,   739,     0,     0,     0,
       0,   142,   746,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   763,   764,   765,     0,
     769,   766,   768,     0,     0,   774,   773,   775,   776,     0,
       0,     0,     0,     0,     0,   142,   142,   789,   172,   168,
     173,   167,   170,   169,   171,   795,   796,   797,     0,     0,
     799,   801,   142,   142,     0,   808,   811,   142,   142,   836,
     840,   882,   711,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1066,   907,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   908,
       0,     0,     0,     0,     0,   722,   723,   142,   150,     0,
     142,   142,  1041,  1042,     0,     0,   822,     0,   142,  1072,
    1074,   845,     0,  1125,  1126,  1129,  1130,   185,   185,   185,
    1201,  1180,  1179,  1181,  1184,  1183,  1187,  1186,  1188,  1185,
    1193,  1192,  1194,  1190,  1189,  1191,     0,     0,  1209,  1214,
       0,  1231,     0,   142,     0,  1234,     0,     0,   224,     0,
     221,     0,     0,     0,   260,     0,     0,     0,     0,   142,
       0,   297,   130,     0,   390,     0,   411,   150,   153,     0,
       0,   424,     0,   461,     0,   428,   930,     0,     0,     0,
       0,   142,   939,   153,   153,   153,   142,   945,   153,   150,
     153,   153,   142,   958,   153,   153,   153,   142,   965,   153,
     153,   142,     0,   153,   142,   153,   153,   142,   153,   142,
     999,  1000,     0,     0,   501,   543,     0,   562,   567,   568,
     569,     0,   573,   574,   575,   581,   163,   160,   587,   604,
     605,   606,   607,   608,     0,   610,   611,   160,     0,     0,
       0,   160,   160,   157,     0,     0,     0,     0,     0,     0,
     160,   160,   157,     0,     0,     0,     0,     0,     0,   160,
     160,   157,     0,     0,     0,   160,   163,   163,   163,   163,
     163,     0,   163,   163,     0,   160,   160,   163,   163,   163,
     163,   163,     0,   163,   163,     0,   160,   160,   667,   668,
     669,   670,   672,     0,   675,   676,     0,   160,   678,   679,
     680,   681,   682,     0,   684,   685,   160,   597,   160,     0,
     603,     0,     0,   690,     0,   727,   153,     0,     0,   153,
       0,     0,     0,   738,   153,   742,   743,   153,   745,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   767,   770,   771,     0,   153,     0,     0,     0,
     787,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1067,  1046,     0,
    1053,  1054,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,     0,    82,     0,     0,
     914,   915,   150,     0,     0,     0,  1036,  1034,  1044,   821,
     823,   150,  1118,  1159,  1158,  1160,  1202,     0,  1211,  1241,
       0,     0,  1236,  1235,   225,     0,     0,     0,   265,     0,
       0,     0,   283,   153,   391,   395,   412,   414,     0,   422,
     456,     0,     0,     0,     0,     0,   935,   940,   943,   942,
     946,   947,   948,   950,   954,   959,   960,   962,   963,   966,
     967,   971,   150,   153,   978,   150,   979,   983,   150,   993,
     150,     0,     0,   500,     0,   572,   583,   163,   160,   612,
     163,   163,   163,   163,   163,     0,   163,   163,   160,   658,
     659,   660,   661,   662,     0,   664,   665,   160,   163,   163,
     163,   163,   163,     0,   163,   163,   160,   163,   627,   628,
     629,   630,   632,   160,   635,   636,     0,   163,   163,   647,
     648,   649,   650,   652,   160,   655,   656,     0,   163,   671,
     160,     0,   677,   160,   686,   599,   160,   695,   696,   142,
     729,     0,   153,   732,     0,   142,     0,   740,   744,   142,
       0,   751,   752,   753,   754,   758,   759,   755,   756,   757,
       0,     0,   153,   779,     0,   142,     0,     0,   792,   153,
       0,     0,   153,   153,     0,   839,     0,   174,   174,     0,
       0,   174,     0,   174,  1025,     0,     0,     0,     0,     0,
       0,     0,     0,  1045,     0,     0,   174,   174,     0,     0,
       0,     0,     0,     0,     0,     0,   909,     0,     0,     0,
    1025,    83,     0,   174,     0,  1069,   913,     0,     0,     0,
     207,  1243,  1242,     0,     0,   229,     0,     0,     0,     0,
     298,   423,   317,   931,     0,   142,     0,   972,   973,   977,
     984,   994,   349,   317,     0,   584,   609,   618,   619,   620,
     621,   622,   160,   624,   625,   163,   160,   666,   638,   639,
     640,   641,   642,   160,   644,   645,   163,   631,   163,   160,
     637,   651,   163,   160,   657,   673,   160,   683,   600,     0,
     153,   733,     0,     0,     0,     0,     0,   760,   761,   777,
       0,     0,     0,   788,   793,     0,   802,   803,   794,   153,
       0,   175,  1025,  1025,    82,     0,  1025,     0,  1025,   883,
     142,     0,  1048,     0,  1051,  1085,  1052,  1050,  1047,     0,
    1025,  1025,    82,     0,     0,  1025,  1025,     0,     0,  1025,
     912,   910,   911,   890,  1025,  1025,  1069,  1080,     0,  1037,
     825,     0,     0,     0,   231,     0,     0,     0,   318,   319,
     339,     0,   182,   934,   357,     0,   163,   626,   663,   163,
     646,   633,   163,   653,   163,   674,     0,   728,   153,   153,
       0,   153,     0,   153,   153,     0,   153,     0,  1025,   896,
     892,  1025,     0,   897,     0,   891,  1025,     0,  1049,     0,
     894,   893,  1025,     0,     0,   888,   886,  1025,   142,   887,
     889,   895,  1080,  1031,     0,     0,  1070,  1078,  1117,     0,
       0,     0,   261,   284,   287,   285,     0,     0,   142,   183,
     184,   933,   545,   623,   643,   634,   654,   153,   731,   737,
       0,   750,   747,   778,   783,     0,   798,     0,   901,   885,
      82,     0,   899,  1086,     0,   884,    82,     0,   900,     0,
    1032,  1082,  1084,     0,  1077,     0,     0,   266,     0,     0,
       0,     0,   182,     0,   734,   142,   748,   780,   812,  1025,
       0,     0,  1025,     0,   153,  1083,  1079,   230,     0,     0,
       0,     0,     0,   932,   706,   142,   735,   749,   142,   781,
     903,     0,  1025,   902,     0,     0,   232,   277,     0,   276,
       0,   736,   782,    82,   904,    82,  1025,   275,   274,  1025,
    1025,   898,   906,   905
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1378,   172,   152,  1224,  2450,  2451,   420,   421,
     422,   423,   153,   154,   155,    91,   784,   443,  1174,  1642,
    1315,  1328,  1311,  1885,  2542,  1375,  2661,  1545,   334,   737,
     740,   743,   751,    63,   357,   363,   367,   370,    68,   373,
      75,   388,   384,   378,   395,    82,   400,    92,    98,   405,
     407,   409,   477,   838,  1611,   411,   414,   105,   430,   156,
     158,  2590,   174,   214,   466,   827,   468,   478,   830,   835,
     480,   482,   841,   485,   843,   496,   846,   848,   499,   503,
     507,   509,   512,   516,   543,   539,  1238,   530,   865,   870,
     862,  1225,   875,   533,   549,   552,   557,   562,   570,   904,
     906,   908,   910,   575,   914,   217,   577,  1712,   235,   579,
     581,   585,   590,   598,   244,  1304,   601,   252,   610,  1320,
     612,   618,   959,  1336,   954,  1753,  1342,  1340,   955,  1755,
    1345,  1347,   624,   627,   622,   254,   262,   264,   665,  1036,
    1402,  1025,  1500,  1929,  2245,  1041,  1034,   899,  1279,  1283,
    1291,  1293,  1913,   269,  1050,  1053,  1061,  2217,  2218,  2219,
    1914,  2577,  2578,  1084,  1087,  2646,  2647,  2643,  2644,  2691,
    2220,  2221,   274,   280,   288,   679,   674,   293,   298,   300,
     689,   696,  1112,  1117,   746,   734,   306,   310,   703,   316,
     710,  1550,   723,   724,  1148,  1143,  1556,  1133,  1562,  1574,
    1570,  1137,   728,   712,   322,   323,   338,  1161,   341,   347,
     761,   764,   758,   349,   352,   769
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2091
static const yytype_int16 yypact[] =
{
    4987,    79,   415,    36, -2091, -2091,  1113,  -128,    46,   409,
     847,   407,  2536,   143,   197,  1221,    64,  4565,   462,  1168,
   -2091,   197,   750,   178,   741,   -10,    21,   217,    11,   457,
     187,   803,  2784,    13,   700,   231,   423,    11, -2091,   -23,
      19,  1006, -2091,    42,   513,   571, -2091,   662, -2091,   104,
    2815,   328,   112,   562,   560,   186,   310,   573,   600,   122,
     582,    -2,   877, -2091, -2091, -2091,  1044,   985, -2091,    40,
      10,   197,    34,   657,   756, -2091,   611,   985, -2091, -2091,
      85,   985, -2091, -2091, -2091, -2091,   985, -2091, -2091, -2091,
   -2091, -2091, -2091,    60,   621,   679,   689,   138, -2091,   985,
    1187,   985,   985,   939,   985, -2091, -2091, -2091,   540, -2091,
   -2091, -2091, -2091,  4638, -2091, -2091, -2091, -2091, -2091, -2091,
     985, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  1426, -2091,   985, -2091,   744, -2091, -2091,
     197,   197,   197,   197,   197,   197, -2091, -2091,   197,   197,
     197,   197, -2091,   636, -2091,   715,  1484,   665,    38,   527,
     634,   599,  4142,   607,  3816,  4607,   788,  4638,  3729, -2091,
     583,   -81,   839,   784,  1002,    74,   867,    11,    68, -2091,
     821, -2091,   691,   615,   190, -2091,   140, -2091,   469, -2091,
     567,   828,   522, -2091, -2091,  4694, -2091, -2091, -2091,   849,
     922, -2091, -2091, -2091, -2091,    59, -2091, -2091, -2091, -2091,
     870, -2091, -2091,  4694,  4259, -2091, -2091,    73, -2091,   940,
     951,   141, -2091,   985, -2091,   959,    31,   987,   497,   916,
     998,    23, -2091, -2091, -2091,  1015,  1017,   197,   197,   985,
     985, -2091, -2091,  1019, -2091, -2091, -2091, -2091, -2091,  1128,
   -2091,  1025,  1032,   985, -2091,  1036, -2091, -2091, -2091, -2091,
   -2091,   985,   814,   197,  3225,   985,  1426,   985, -2091,  1045,
   -2091,  4778, -2091, -2091,   622,  1047,  1062,   985, -2091,  1064,
   -2091, -2091,   -24,  1078,  4694,  1068, -2091,  1162,   985,   989,
   -2091,   604,   969,  1134,    29,  1086, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  1092, -2091,   687,   115,   118,   170,   435,
   -2091,   985,   985,   117, -2091,   985,   835,  1105, -2091,   985,
     985, -2091,  1109,    17,    39,  1115,  1426, -2091, -2091, -2091,
    1050,   985, -2091, -2091, -2091, -2091,   985, -2091,  1117,  1118,
   -2091,   985,  1139, -2091, -2091, -2091, -2091, -2091, -2091,   985,
   -2091, -2091,   985, -2091, -2091,   370,   370,  1125, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,   944,
     985,   985,  1131,  1143,  1146, -2091, -2091,   985,   985,   985,
   -2091,   985, -2091,  1152, -2091, -2091, -2091, -2091,   740, -2091,
    1184, -2091,  4694,  1202, -2091,   985, -2091, -2091, -2091,   985,
    1183,  1199,  1199,  4694,   985,   985,   985,   985,   985,   985,
   -2091,   985,  4638,  1187,   985,   985, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  1187,   985, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091,  1223, -2091,   962,   347,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,   -49,
   -2091, -2091, -2091,  1065, -2091,   719,   802,   802, -2091, -2091,
   -2091,  1235, -2091,  1240, -2091, -2091,   -54, -2091,  1071, -2091,
   -2091, -2091,  1097, -2091, -2091,  1426, -2091,   985,   985, -2091,
    4694,  4694,  1426, -2091, -2091,  1426, -2091, -2091, -2091, -2091,
    1426, -2091, -2091,  4694,  1426,   985, -2091, -2091,  4694, -2091,
   -2091,   160,  1072,    27, -2091, -2091,  1074,  4694,   516, -2091,
   -2091, -2091, -2091, -2091,  1265,  1267,  1274, -2091,  1090, -2091,
   -2091, -2091,   985, -2091, -2091,   572, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,   567, -2091, -2091, -2091, -2091, -2091, -2091,
    1100,  1102, -2091, -2091,  1224,  1228,  1230, -2091, -2091,  1082,
   -2091,   985,  1294,  1084,  4778, -2091,  1426, -2091,  1302, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  4694,  4694,  4694,  4694, -2091, -2091,  1311,
     197, -2091, -2091,  1315,  1316,  1132,   985, -2091,   770,  1250,
   -2091,  1322, -2091,   375,  1251,  4988,    51,  1328, -2091,  1336,
   -2091,  1339, -2091,    44, -2091,  1345,  1347, -2091,  1340, -2091,
   -2091, -2091,   985, -2091,  4778,  4573,  1378,   338,  1348,   558,
    1258, -2091, -2091, -2091,  1338,   735,  1355,  1358,     7,   985,
     351,   531,   169,  4694,   197,  1437,   912,    30,    52,   263,
       5, -2091,  1343,  1351,  1360, -2091, -2091, -2091, -2091, -2091,
     985,   985,   985,   985, -2091, -2091,   985,  1426,   985, -2091,
     985,  1187,   985,  1365,  1426, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  1366,    33,   439, -2091, -2091, -2091,  1369,
   -2091, -2091, -2091, -2091,  1277, -2091,  1379,  1381,  1300,  1386,
   -2091,  1388, -2091,  1389,  1308,  1391,   390,   325,   437,   404,
     468,  1393,   530, -2091, -2091,  1395,  1398,  1400, -2091, -2091,
    1404, -2091, -2091, -2091, -2091,  1409, -2091, -2091,  1410, -2091,
   -2091,  1412, -2091, -2091, -2091, -2091, -2091, -2091, -2091,   985,
     985, -2091,   985,  1160,   985,   985, -2091,  1640, -2091,  1166,
    1415, -2091,  1231,  1421, -2091, -2091,     9,   985,   985, -2091,
    1371, -2091, -2091,  1428,  1165,   985,  1425,   200, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091,  1434,  1436,   985,   985,   985,  1438,   197,  1442,
    1443,  1426,  4694, -2091, -2091, -2091, -2091, -2091,  1426, -2091,
   -2091,   985,   985,   985,  4694,   985,  1187,   985, -2091,   985,
   -2091, -2091, -2091, -2091, -2091,  1444,  1446, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
     607, -2091,   985, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091,  4694,   985,  1426,  1426,     9,     9,     9,  1426,  1187,
     985,  1426, -2091, -2091,   985, -2091,   -18,  1288,  1460,  1464,
   -2091, -2091,  1426,  3757,  4694, -2091,  1466,  1467,  1477,  1246,
     985,  3140,   581,   416, -2091, -2091, -2091,   985,   504,  1059,
   -2091,  1188, -2091,  1437,  1243,   578,  1203,   471, -2091, -2091,
     985, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091,   985,  1478, -2091, -2091, -2091,     9, -2091, -2091, -2091,
   -2091, -2091,  4666, -2091, -2091,  1493,  1497,   985,  1498,  1499,
    1505,     1,     1,   -50,  1507,  1511,  1515,  1516,  1257,  1259,
    1519,  1524,  1530,    95,    95,   -50,  1512,  1534,   -50,  1540,
    1541,  5024,  1542,  1543, -2091, -2091,  1545,  1546,   424, -2091,
    1552,  1553,  1554,  1557,     1,   -50,  1560,  1561, -2091,  1562,
   -2091, -2091,  1426,   797,  1306,  1323,   350,  1330,  1463,   461,
     421,  1565,   106,  1439,  1468,   883,  1296,  1539,   647,  1352,
    1469,  1575,  1382,    18,    57,  -109,     2,  4694,  1437,  1549,
     781,  1361,  1399,  1592,   124, -2091, -2091,    55,  1599,  1604,
   -2091, -2091, -2091,  1605,  1403,   132,  1437,  1406, -2091, -2091,
   -2091,   197,  1612,  1618,   985, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091,    14, -2091,  2225, -2091,   985, -2091,
     985, -2091, -2091, -2091, -2091,   985,   985,   985,   558,  4694,
   -2091,  1619,  1270, -2091, -2091,   985, -2091, -2091,   985,  4694,
     985, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091,   197,   985, -2091,   985,   558,
    1620, -2091,   985,   985, -2091,   197, -2091, -2091, -2091,   488,
    1623,  1624, -2091, -2091, -2091, -2091,   985,   985, -2091, -2091,
    1187,   985,   985, -2091, -2091, -2091, -2091,  1627,   985, -2091,
     985,  1522, -2091,   985, -2091,   985,  1525, -2091,  1631, -2091,
     919,   919,   539,   919,  1634, -2091,   575, -2091, -2091,  1635,
    1636,   610,  1638, -2091,  1639,  1643,  1641, -2091,   638,   742,
    1644,  1645,  1647, -2091, -2091,  1648,  1649,  1651, -2091,   919,
     919,   919,   985, -2091, -2091, -2091,   985, -2091,   985,   193,
    4694, -2091,   985, -2091,  4778,  1426, -2091, -2091,  1652, -2091,
   -2091,  1653, -2091, -2091, -2091, -2091,  1611,  3225, -2091,   985,
    1650,   985,   985,   985,   196, -2091,  1654,  1655,   985,   985,
      26,  1656,   197,   197, -2091,  1426,   985,  1659,  1660,  1661,
    1426,  4694, -2091,   985, -2091, -2091, -2091,   985,   985,   985,
    1426,  4694,     9, -2091, -2091, -2091, -2091,  1187,   985,  1662,
       9,   985,  1629,  1630,   377, -2091,  1664, -2091, -2091,   805,
    4694,  1426,  1426, -2091,   985,  1666,  1672,   985, -2091,  1669,
     840,  4638,  1440,   778,  1441,   157,  4694,   850, -2091,   269,
    1544,   158,   857,  1447,   166, -2091, -2091,    48,  1517,   292,
    1556,   -39,  1437,   -35, -2091,  1674,  1449, -2091,   358, -2091,
   -2091, -2091, -2091,  1437,  1480, -2091, -2091, -2091, -2091, -2091,
     985, -2091,   985, -2091, -2091,   985,   985, -2091,   985, -2091,
     985, -2091, -2091, -2091, -2091,  1491,   985, -2091,   985,    37,
   -2091, -2091,  1682,  1683, -2091,   985,     1,     1,     1, -2091,
   -2091, -2091, -2091, -2091, -2091,  1685,     1,     1,     1,   809,
   -2091, -2091,    95,     1,     1,     1, -2091, -2091,     1,     1,
    1686,     1,     1,  1689,    95,   876, -2091,  1690,  1691,  1692,
   -2091,   438, -2091,   712,   726, -2091,   914, -2091,  1432,  1694,
    1695,  1698,    95,    95,   -50,  1700,  1701,   -50,  1704,  1706,
    1707,     1,     1, -2091,  1709,     1,     1, -2091,  1710, -2091,
   -2091, -2091, -2091, -2091, -2091,   197, -2091, -2091, -2091,  4638,
    1122,   197,   985,  1256,  1216,   717, -2091, -2091, -2091,   723,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091,  1712,   197,   985, -2091,   197,  1713,   985,  4694,
     197,  1452,  1479,  1485,   171,   237,  1486,   254,  1419,  1422,
    1720,  1722,  1723,   461,  1724,  1725,  1726,  1430,  1431,  1276,
    1727,   197,   985,  1327,  1536, -2091, -2091,   197,  4694, -2091,
   -2091,  4694,   985,     0,  1731,   197,   985,  1426,   197, -2091,
    1732,  4694,  4694,   985, -2091, -2091, -2091,   197,   197,  4694,
   -2091, -2091, -2091, -2091, -2091, -2091,  4694,   985,   197, -2091,
   -2091, -2091,   985, -2091, -2091,  1733,   985,  1518,   150,   985,
    1521,   985,   199,   985, -2091,   985,  1526,  1527,   985,   985,
     985,   985,   985,   985,   985,   985,    50,   985,   985,  1528,
   -2091,   985,   985,   985,   985, -2091,  4694,  1426,  1738,  4694,
    4694,   985,   985,  1426, -2091,   985,   985,   985,  4694, -2091,
     985,   985, -2091, -2091, -2091,  1740, -2091, -2091, -2091, -2091,
   -2091, -2091,  1742,   985,   985, -2091,   985,   985, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091,  1746,  1747,  1749,
   -2091, -2091,   919,  1752,  1754,  1750, -2091,  1756,  1758,  1759,
    1760,  1764, -2091,  1765, -2091, -2091, -2091,  1767,  1768,  1770,
   -2091,  1771,  1774,  1776, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091,   985,   985,   985, -2091,  1426,   985,
    1426, -2091, -2091, -2091,  3225,   985,  1426,   985,   985,   985,
   -2091,   985,   985,  1777,   985,  1779,  1730,   985,   985, -2091,
   -2091,  1780,  4694, -2091, -2091, -2091,   985, -2091, -2091, -2091,
   -2091,  1426, -2091,   564,   985,   564,     9,  1426,  4694,   985,
     985,  1781, -2091, -2091, -2091, -2091, -2091,   985, -2091, -2091,
   -2091, -2091, -2091,  1426, -2091, -2091,   985,  1782, -2091, -2091,
    4694,  1784,  1785,  1786,  1789,  4694,  1426, -2091,  4694, -2091,
    4694,  4694,  4638,  4694,  1426, -2091,  4694, -2091, -2091,  4694,
   -2091, -2091,  4638,  4694, -2091,  4694,  4694,  4638,  4694, -2091,
    4694,  4694,   985, -2091, -2091, -2091,  4694,  4694,  4694, -2091,
   -2091,  4694,  4694, -2091, -2091, -2091, -2091,  4694,  4694, -2091,
   -2091, -2091, -2091, -2091,   985,   985, -2091, -2091,  1788,   985,
   -2091, -2091,  1790,  1792, -2091,   985, -2091, -2091, -2091,     1,
   -2091, -2091, -2091,  1793,  1794,  1795, -2091, -2091,   -50,  1797,
    1798,  1799,     1, -2091, -2091, -2091, -2091, -2091,    95, -2091,
   -2091,  1801,     1,  1802,  1803,  1804,    95,    95,   -50,  1806,
    1807,  1808,   972, -2091,  1067, -2091,  1123,  1509,  1809,  1810,
    1811,    95,    95,   -50,  1813,  1814,   -50,  1815,  1531,  1817,
    1821,  1824,    95,    95,   -50,  1826,  1829,   -50,  1830,  1568,
    1831,  1833,  1834,    95,    95,   -50,  1836,  1837,   -50,  1846,
    1847,  1848,  1849,    95,    95,   -50,  1851,  1852,  1853,    95,
   -2091, -2091, -2091, -2091, -2091,  1855, -2091, -2091,  1856,    95,
    1857,  1858, -2091, -2091,     1, -2091, -2091,  1860, -2091,  1426,
   -2091,  4694,   985, -2091,   985,  4694,   985,  1862,  1306, -2091,
   -2091, -2091, -2091, -2091, -2091,  1864, -2091,  4694,   197,  1865,
    4694,  1426, -2091,  1866,  1306,   985,   985,   985,   985,   985,
     985,   985,   985,   985,  1859,  1868, -2091, -2091, -2091,  1869,
   -2091, -2091, -2091,  1871,  1872, -2091, -2091, -2091, -2091,   985,
    4694,   985,  1873,  1306,   197,  1426,  1426, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,   985,  1187,
   -2091, -2091,  1426,  1426,   985, -2091, -2091,  1426,  1426, -2091,
   -2091, -2091, -2091,   985,   985,   985,   985,   985,   985,   985,
     985,   985,   985,  2396, -2091,   985,   985,   985,   985,   985,
     985,   985,   985,   985,   985,   985,  3255,  1874,   985, -2091,
     985,   985,   985,  1876,  1877, -2091, -2091,  1426,     9,  1878,
    1426,  1426, -2091, -2091,  1187,   985, -2091,  1879,  1426, -2091,
   -2091, -2091,  1880, -2091, -2091, -2091, -2091,   919,   919,   919,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091,  1306,   985, -2091, -2091,
     985, -2091,   985,  1426,   985, -2091,  1187,   985, -2091,   985,
   -2091,  1751,  1882,  1883, -2091,  1885,   985,   985,  1886,  1426,
    4694, -2091, -2091,   985, -2091,   985, -2091,     9,   805,   985,
    1887, -2091,   985, -2091,   567, -2091, -2091,  1889,  1890,  1891,
    1892,  1426, -2091,   805,   805,   805,  1426, -2091,   805,     9,
     805,   805,  1426, -2091,   805,   805,   805,  1426, -2091,   805,
     805,  1426,  4694,   805,  1426,   805,   805,  1426,   805,  1426,
   -2091, -2091,  1894,   567,  1905, -2091,   985, -2091, -2091, -2091,
   -2091,  1895, -2091, -2091, -2091, -2091,     1,    95, -2091, -2091,
   -2091, -2091, -2091, -2091,  1907, -2091, -2091,    95,  1919,  1921,
    1925,    95,    95,   -50,  1927,  1928,  1929,  1931,  1932,  1933,
      95,    95,   -50,  1935,  1936,  1938,  1939,  1970,  1971,    95,
      95,   -50,  1974,  1976,  1977,    95,     1,     1,     1,     1,
       1,  1981,     1,     1,  1983,    95,    95,     1,     1,     1,
       1,     1,  1984,     1,     1,  1986,    95,    95, -2091, -2091,
   -2091, -2091, -2091,  1987, -2091, -2091,  1988,    95, -2091, -2091,
   -2091, -2091, -2091,  1991, -2091, -2091,    95, -2091,    95,  1992,
   -2091,  1993,  1994, -2091,  4778, -2091,   805,  1995,  4694,   805,
     985,  4694,  1997, -2091,   805, -2091, -2091,   805, -2091,  4694,
    2000,   985,   985,   985,   985,   985,   985,   985,   985,   985,
     985,   985, -2091, -2091, -2091,  4694,   805,   985,  4694,  2001,
   -2091,  1187,  1187,  4694,  1187,  1187,  4694,  4694,  1187,  1187,
     985,   985,   985,   985,   985,   985,  1306,   985,   985,   985,
    1587,  1665,  1667,  1675,  1676,  1677,  1678,  2396, -2091,  1679,
   -2091, -2091,  1306,   985,   985,   985,   985,  1306,   985,   985,
     985,   985,   985,   985,  1426,   985,  1513,  1306,   985,   985,
   -2091, -2091,     9,   197,  2003,  2004, -2091, -2091, -2091, -2091,
   -2091,     9,  2006, -2091, -2091, -2091, -2091,   985, -2091, -2091,
    1187,   985, -2091, -2091, -2091,  1011,  2007,  2010, -2091,   985,
    2014,   564, -2091,   805, -2091, -2091, -2091, -2091,  2021, -2091,
   -2091,  2023,  2025,  2026,  4694,  2027, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091,     9,   805, -2091,     9, -2091, -2091,     9, -2091,
       9,  2028,  2030, -2091,   985, -2091, -2091,     1,    95, -2091,
       1,     1,     1,     1,     1,  2031,     1,     1,    95, -2091,
   -2091, -2091, -2091, -2091,  2032, -2091, -2091,    95,     1,     1,
       1,     1,     1,  2033,     1,     1,    95,     1, -2091, -2091,
   -2091, -2091, -2091,    95, -2091, -2091,  2034,     1,     1, -2091,
   -2091, -2091, -2091, -2091,    95, -2091, -2091,  2035,     1, -2091,
      95,  2037, -2091,    95, -2091, -2091,    95, -2091, -2091,  1426,
   -2091,  4694,   805, -2091,  2038,  1426,   985, -2091, -2091,  1426,
     985, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
     985,   985,   805, -2091,  2039,  1426,   985,  1187, -2091,   805,
     985,  1187,   805,   805,  4694, -2091,   985,  2041,  2041,   985,
     985,  2041,  1306,  2041, -2091,  4694,   461,  2043,  2042,  2044,
    2045,  2046,  2048, -2091,   197,  1306,  2041,  2041,   985,   985,
    1306,   985,   985,   985,   985,   985, -2091,  1187,   985,  2049,
   -2091, -2091,   985,  2041,   197,    20, -2091,  2050,   197,  2052,
   -2091, -2091, -2091,  2053,   985, -2091,  2054,  2056,  1800,   985,
   -2091, -2091,    15, -2091,  2057,  1426,  4694, -2091, -2091, -2091,
   -2091, -2091, -2091,    15,   985, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091,    95, -2091, -2091,     1,    95, -2091, -2091, -2091,
   -2091, -2091, -2091,    95, -2091, -2091,     1, -2091,     1,    95,
   -2091, -2091,     1,    95, -2091, -2091,    95, -2091, -2091,   985,
     805, -2091,  4694,  4694,   985,  4694,   985, -2091, -2091, -2091,
    4694,  4694,   985, -2091, -2091,  4694, -2091, -2091, -2091,   805,
    2059, -2091, -2091, -2091,  1306,   985, -2091,  2060, -2091, -2091,
    1426,  2062, -2091,  2064, -2091, -2091, -2091, -2091, -2091,  2065,
   -2091, -2091,  1306,   985,  2066, -2091, -2091,   985,  4694, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091,    20,  1558,  1437, -2091,
   -2091,  2068,  2069,  2072, -2091,  1867,  2074,    77, -2091, -2091,
   -2091,  4694,    86, -2091, -2091,  2075,     1, -2091, -2091,     1,
   -2091, -2091,     1, -2091,     1, -2091,  4778, -2091,   805,   805,
     985,   805,  2077,   805,   805,   985,   805,   985, -2091, -2091,
   -2091, -2091,  2078, -2091,   985, -2091, -2091,  2081, -2091,   985,
   -2091, -2091, -2091,  2079,   985, -2091, -2091, -2091,  1426, -2091,
   -2091, -2091,  1558, -2091,  1578,  1684,  1437, -2091, -2091,  2082,
    2083,  2085, -2091, -2091, -2091, -2091,   548,   548,  1426, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091,   805, -2091, -2091,
    2086, -2091,  4638, -2091, -2091,  2087, -2091,  1306, -2091, -2091,
    1306,   985, -2091, -2091,   985, -2091,  1306,   985, -2091,  4694,
   -2091,  1578, -2091,   197, -2091,  2090,  2091, -2091,   985,   985,
     985,   985,    86,  2092,  4638,  1426, -2091,  4638, -2091, -2091,
     985,  2088, -2091,   985,   805, -2091, -2091, -2091,  2093,  2095,
     985,  2096,   985, -2091, -2091,  1426, -2091, -2091,  1426, -2091,
   -2091,  2098, -2091, -2091,  2099,  2100, -2091, -2091,  2102, -2091,
    2103, -2091, -2091,  1306, -2091,  1306, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2091, -2091,    -3, -2091,   313, -2091, -1319,  -969,  1457, -2091,
     113,  -367,  1832,   -48,   -25, -1614,  1681,  1787,  -690,   782,
    -854,    -6,  1598, -2091, -1005, -2091,  -598, -1117, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091,  -475,  -476, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091,  -372, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -1420, -2091, -2091, -2091, -2091, -2091,  -635, -2091, -2091, -2091,
   -2091, -2091, -2091,    47, -2091, -2091, -2091, -2091,  -104,  -643,
   -1592,  -462, -2091, -2091, -2091, -2091,  -531,  -525, -2091, -2091,
   -2090, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091,  1402, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091, -2091,
   -2091, -2091, -2091, -2091, -2091, -2091
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1214
static const yytype_int16 yytable[] =
{
      67,   839,   346,  1859,  1546,  1379,  1551,   287,   104,  2003,
    1088,  2005,  1075,    64,    65,  1049,  1052,   106,   289,  1474,
   -1068,   759,    64,    65,  1044,   106,   255,  1878,   625,   285,
     365,   867,  1581,  1582,  1583,  1079,   608,   309,   303,    64,
      65,    64,    65,   762,   375,  1437,   340,  2588,  1879,   351,
      77,  1880,   356,    64,    65,  1926,   362,  1710,   962,   369,
      64,    65,  1881,   372,   374,   403,   818,   383,   265,  1081,
     390,   394,  1609,  1108,   397,  1679,   821,   599,   401,   540,
      64,    65,  1458,   402,   302,  1882,    78,   256,   434,   398,
     725,  1330,   317,  1439,  1333,  1690,   415,   419,   424,   425,
     429,   431,  1883,   582,  1089,   963,  1172,    64,    65,   257,
    1090,  1364,  1326,  1313,  1222,    64,    65,   435,  2659,   106,
      64,    65,   106,  1445,   694,    64,    65,  1686,   531,  1456,
     109,  1691,   111,  1406,   546,    64,    65,   844,   956,   541,
     111,   318,   828,   412,  1109,    54,   583,   604,  1443,   726,
     319,    76,   444,    64,    65,  1444,  1309,    79,   498,   258,
     506,   558,   511,   515,   863,  1214,  1215,  1216,  1464,   413,
     542,   386,    64,    65,   106,   476,   157,   320,  1662,  1672,
     497,   735,  1687,  1310,   738,   571,  1692,  1677,  1440,    64,
      65,   868,  1847, -1213,   245,   379,   829,  1587,   845,    64,
      65,   106,    64,    65,  1183,  1054,   957,   173,   387,  1055,
    1314,   307,  1184,   114,  1680,  1045,   109,   253,   532,   115,
     116,   114,   263,   469,  1223,  1110,  1299,   115,   116,   470,
     695,   376,   964,   266,   111,   299,   741,   111,    80,  1438,
     606,  1446,  1693,   684,   545,   355,  1688,   267,   547,   584,
    1287,   554,  1327,   275,   304,  1603,   632,   633,  1849,   678,
    1082,   605,  2653,  1465,   600,  1173,   471,   106,  1711,  1681,
     668,  1407,   609,   559,   366,  1852,  1459,   305,   670,   673,
    1056,   676,   680,   404,   682,   377,   117,    81,   626,   111,
     472,  2589,  1111,  1610,   692,  1046,  1667,   727,   760, -1068,
    1057,  1091,   965,   119,   702,   704,   308,   380,   268,   290,
    1080,   119,   966,  1475,  1103,   114,   111,   259,   114,   291,
     763,   115,   116,    66,   115,   116,   399,   159,   747,   748,
     750,   321,   752,   869,   236,   473,   755,   756,   749,   261,
    1083,  1408,  1020,   967,  1441,  1884,   292,   768,   770,  1927,
     381,   382,   149,   771,   548,  1448,   150,   151,   774,   776,
     149,  1058,  2660,   260,   150,   151,   777,  1457,  1021,   778,
     114,  1905,   117,  1468,  2654,   560,   115,   116,   474,   475,
     939,  1636,   111,  1409,   385,  1696,  1129,   788,   789,   940,
     941,   339,  1663,  1673,   793,   794,   795,   114,   796,   350,
     779,  1678,   561,   115,   116,   119,  1848,   817,   119,   361,
      64,    65,   803,  1506,  1027,  1828,   804,   474,  2655,  1466,
    1910,   809,   810,   811,   812,   813,   814,    55,   815,  1348,
     419,   819,   820,   109,  1668,  1960,   942,    83,  1349,  1350,
     419,   822,  1844,  1757,  1518,  1130,  1275,    99,   744,  1202,
     825,   713,  1758,  1759,   149,  1028,  1059,   149,   150,   151,
     119,   150,   151,   114,   780,  1873,   100,   555,    56,   115,
     116,  1381,  1850,   446,   447,   448,   449,   450,   451,  1113,
    1131,   452,   453,   454,   455,  1351,    57,   119,  1294,  1853,
     556,  1138,  1218,  1523,   851,   852,   864,  1022,  1134,  1760,
    1805,  1385,   613,  1808,  1669,  1524,   563,    64,    65,   149,
     715,   301,   860,   150,   151,    58,   564,   324,   101,    64,
      65,   270,  1628,   271,  1697,   874,   915,  1386,   900,  1140,
    1632,   781,   826,    59,   806,   807,   149,    60,   573,   880,
     150,   151,  1403,   565,  1085,   215,  1670,  1023,    61,  1683,
    1114,    64,    65,   119,  2692,   348,  1684,  1135,    84,  1139,
    1387,   216,   353,   943,   944,   354,  1388,   953,   911,  1295,
     630,   631,  1389,  1024,   358,  1276,   881,   882,   359,  1698,
      85,    64,    65,  1029,    86,  1382,   972,   364,  1141,   117,
    1390,  1145,    83,  1132,  1027,   873,   675,  1030,  1031,   102,
    1547,  2715,   149,   927,   360,  1048,   150,   151,   325,  1391,
      64,    65,  1352,  1353,   614,   782,   396,   566,   326,  1689,
     783,  1027,   745,   109,  1392,  1277,  1761,  1762,   517,   971,
    1699,  1115,   883,   945,    87,  1028,  1553,   272,   884,   736,
     739,   742,   518,   946,   947,   327,  1047,  1270,   948,  1060,
    1146,  1278,   406,   567,  1393,  1051,  1404,  2469,   721,  1548,
      64,    65,  1028,   109,   519,   706,   335,  1095,  1096,  1097,
    1098,  1559,    88,  1099,   949,  1101,   685,  1102,   419,  1104,
      89,    90,  1354,   520,   408,   836,   885,   615,  1032,  1033,
     103,  1394,  1355,  1356,   410,  1554,  1763,  1357,  1116,  1567,
     521,   886,    62,   522,  1395,  1136,  1764,  1765,  1281,  1165,
    1271,  1766,   686,    84,   887,  1396,   574,  1768,   568,   328,
     888,   731,   837,  1358,   707,   889,  1769,  1770,   523,   524,
    1560,  1779,   432,  1529,  1272,    85,  1142,  1767,   616,  2002,
    1780,  1781,  1397,   273,   798,   799,  1156,  1157,   445,  1158,
    1160,  1162,  1163,   456,  1398,   329,  1399,  1400,  1568,    64,
      65,   687,   617,  1029,  1175,  1176,   483,   246,  1431,   569,
     294,  1180,  1181,  1771,   484,  1038,   890,  1030,  1031,   117,
     525,   457,  1289,   467,   928,   929,   336,  1782,   526,    87,
    1029,  1187,  1188,  1189,   732,   891,  1401,   832,  1147,   330,
     892,   481,   893,  1571,  1030,  1031,   479,  1549,  1197,  1198,
    1199,  1273,  1201,   419,  1203,  1208,  1204,    64,    65,   117,
     331,   508,  1829,  1723,  1724,   894,   895,    88,  1832,  1639,
    1640,   930,  2549,   896,   391,    89,    90,  1207,   237,  1209,
    2253,  2254,  2255,  1555,   534,   708,  1039,   527,   528,  1211,
    1629,   897,   389,   247,   671,   332,   419,  1219,  2573,  2162,
    1274,  1221,  1572,   688,   337,   248,   238,   295,  1032,  1033,
    1725,   333,   709,   535,  2061,  2170,  1237,  1239,  1561,  1369,
      64,    65,  1432,   544,  1280,  1282,  1285,   550,   733,   833,
    1743,  1744,  1290,   553,  2074,  1032,  1033,  1296,   249,  1659,
    1772,  1773,  1641,  1339,  2189,  1412,  1569,   898,  1297,  2111,
    1830,  1450,  2114,   923,  1783,  1784,  1833,   572,   529,   551,
    2122,   578,  1650,  2125,  1305,   672,   392,  1040,  1790,  1791,
      93,  2133,  1413,   239,  2136,  1414,  2006,  1745,  1329,   836,
     296,  2143,    64,    65,   250,   602,    94,  1370,   240,   297,
    2619,  2620,  1076,   580,  2623,   603,  2625,   251,   931,   932,
    1831,  1540,  1541,   607,   834,  1415,  1834,  1063,  2630,  2631,
    1774,  1665,  1086,  2635,  2636,  1792,   837,  2639,  1674,   426,
    1775,  1776,  2640,  2641,  1785,  1777,  2078,  2079,    64,    65,
    1651,  1442,   611,  1416,  1786,  1787,  1417,  1726,  1727,  1788,
     368,   393,  1451,   623,   276,   241,  2551,  2256,   536,   619,
    1573,  1778,  1467,  1660,    64,    65,  1371,  1372,   586,   628,
      95,  1473,   629,  1077,   634,  1789,  2678,   620,   933,  2679,
     666,  1373,   311,  2080,  2682,  1501,   667,  1502,   934,   935,
    2685,   669,  1503,  1504,  1505,  2688,   242,    64,    65,   683,
     427,   690,  1511,    64,    65,  1512,   243,  1514,  1452,  1652,
    1653,    96,    64,    65,  1746,  1747,   691,  1728,   693,   936,
    2463,  1374,   699,  1516,  1654,  1517,  1284,  1729,  1730,  1520,
    1521,  2087,  2088,   697,   587,  1666,   705,  1542,  1543,   711,
     537,   729,  1675,  1527,  1528,    97,   730,   419,  1530,  1531,
     753,   621,  1793,  1794,  1078,  1533,  1418,  1534,  1731,   754,
    1536,  1191,  1537,   757,  1655,  1544,  1590,  2730,   312,   765,
    2733,   772,   538,   773,   588,    64,    65,  1821,  2089,   786,
     313,   428,   635,   636,  1748,   790,  1419,  2096,  2097,   787,
    2744,   277,    64,    65,  1749,  1750,   278,   791,   279,  1584,
     792,   775,  1597,  1585,  2751,  1586,   797,  2752,  2753,  1589,
    2081,  2082,   589,    64,  1159,    64,    65,   371,    64,    65,
    1166,  1167,  1795,   767,  1595,  1751,  1598,  1179,  1600,  1601,
    1602,  1604,  1796,  1797,  2098,  1607,  1608,   218,   637,   800,
      64,    65,   416,  1616,   638,   713,   416,   417,   418,  1637,
    1622,   639,   700,   640,  1623,  1624,  1625,   802,   641,   314,
     418,   642,   219,  1798,   419,  1630,  1657,   643,  1633,    64,
      65,  1827,   315,  1376,  1377,  2621,   824,   644,   823,  2325,
    2083,  1646,   831,   645,  1648,  1169,  1170,  2422,  2334,   840,
    2084,  2085,   646,  2632,   842,   220,   847,  2343,  2243,    64,
    1236,   714,   221,  2435,   715,  2090,  2091,   647,  2440,    64,
      65,  1825,   222,   223,   849,   160,   866,   161,   871,   224,
     876,  2086,   877,   701,  1509,  1510,   648,  1701,   878,  1702,
    1865,  1866,  1703,  1704,   879,  1705,   901,  1706,   902,   716,
     903,   649,   225,  1708,   905,  1709,   907,   162,    69,   912,
     650,   651,  1715,   909,    70,   163,   913,   917,   226,    64,
      65,  2099,  2100,  1376,  1377,   922,  1732,  2276,  1420,   924,
     925,   652,   227,   228,   717,  2092,   926,   938,  1742,   229,
      64,    65,  1870,   958,  1470,  2093,  2094,   937,   950,  2292,
     960,    71,   653,   961,   970,  1421,  1803,  1804,  1422,   230,
     968,  1423,   969,  1026,  1820,  1037,   654,  1035,   655,  1042,
    1092,  2709,   164,  1043,  1094,    72,  2095,  2712,  1093,  1105,
    1107,   656,   718,  1118,  1119,   719,   657,  1822,  1424,  1824,
    1826,  2101,   658,  1177,  1120,   231,  1121,  1122,  1515,   659,
    1123,  2102,  2103,  1124,  1125,  1126,  1127,  1144,  1522,   720,
    1149,  1837,   721,  1150,  1151,  1840,  1425,   660,  1152,  1426,
      73,   165,   722,  2543,  1153,  1154,  2546,  1155,  2548,  1168,
     661,   662,  2104,   663,  2749,  1171,  2750,   166,   167,  1869,
    1871,  2560,  2561,  1178,   168,   232,   169,  1182,  1185,  1877,
    1186,  1286,  1190,  1888,  1009,   233,  1192,  1193,  2575,  1205,
    1894,  1206,  1226,  2547,    74,    64,    65,  1843,  1010,  1376,
    1377,   436,   170,   664,  1899,  1227,  2559,  1011,  1228,  1901,
    1233,  2564,  1234,  1903,   234,  1906,  1907,  1012,  1909,  1911,
    1912,  1235,  1915,  1298,  1292,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1928,  1930,  1931,  1288,  1302,  1933,  1934,
    1935,  1936,  1303,  1306,  1307,  1613,  1614,  1013,  1942,  1943,
    1308,  1316,  1945,  1946,  1947,  1317,  1331,  1949,  1950,  1427,
    1318,  1319,  2194,  1321,  1323,  1322,  1014,   171,  1064,  1324,
    1953,  1954,   437,  1955,  1956,  1325,  1065,   458,  1332,    64,
      65,  1872,  1066,  1376,  1377,  1334,  1335,  1341,  1343,  1428,
    1344,  1346,  2454,   438,   439,   459,  1359,  1360,  1380,  1361,
     440,  2458,  1362,  1067,  1365,  1383,  1366,  1367,  1384,  1984,
    1405,  1015,   460,  1411,  1434,  1429,  1410,  2248,   441,  1430,
    1435,  1976,  1977,  1978,   461,  1068,  1980,  1433,   442,  1449,
    1436,  1982,  1985,  1069,  1987,  1988,  1989,  1455,  1990,  1991,
    1453,  1993,   462,  1460,  1996,  1997,   463,  1454,  1016,  1461,
    1462,  1463,  2477,  2000,  1469,  2479,  1471,   464,  2480,  2262,
    2481,  2004,  1472,  1594,  1508,  1519,  2009,  2010,  1525,  1526,
    1070,  1532,  1017,  1535,  2012,  1539,  1538,  2027,  1071,  1552,
    1557,  1558,  1563,  2014,  1564,  1566,  1164,  2033,  1565,  1575,
    1576,  1577,  2038,  1578,  1579,  1580,   465,  1592,  1593,  1606,
    1605,  1612,  1599,  1617,  1618,  1619,  1631,  1634,  1635,  1638,
    1647,  1018,  -432,  1019,  1649,  1658,  1661,  1685,  1694,  2042,
    1072,  1671,  1676,  1682,  1700,  1707,  1713,  1714,  1818,  1719,
    1738,  1073,  1695,  1741,  1823,  1752,  1754,  1756,  1799,  1800,
    1801,  2050,  2051,  1802,  1806,  1807,  2053,  1074,  2708,  1809,
    1810,  1811,  2056,  1814,  1845,  1817,  1836,  1835,  1839,  1838,
    1846,  1851,  1854,  1842,  1856,  1855,  1857,  1858,  1860,  1861,
    1862,  1867,  2066,  1863,  1864,  1886,  1995,  1891,  1902,  1904,
    2072,  2073,  1908,  1939,  1868,  1951,  1952,  1916,  1917,  1932,
    1874,  1957,  1958,  1959,  1963,  2109,  2110,  1961,  1887,  1962,
    1964,  1890,  1965,  2265,  1966,  1967,  2120,  2121,  1968,  1969,
    1895,  1896,  1970,  1971,  1972,  2105,  1973,  2131,  2132,  1974,
    1975,  1900,  1992,  1994,  1998,  2011,  2015,  2141,  2142,  2017,
    2018,  2019,  2052,  2147,  2020,  2054,  2055,  2116,  2058,  2059,
    2060,  2062,  2063,  2150,  2064,  2067,  2586,  2069,  2070,  2071,
    2075,  2076,  2449,  2077,  2106,  2107,  2108,  2112,  2113,  2157,
    2115,  2158,  2117,  2160,  2407,  2408,  2118,  2410,  2411,  2119,
    2123,  2414,  2415,  2124,  2127,  2126,  2128, -1081,  2129,  2130,
    2134,  2135,  2171,  2172,  2173,  2174,  2175,  2176,  2177,  2178,
    2179,  2137,  2138,  2139,  2140,  2144,  2145,  2214,  2146,  2148,
    2149,  2151,  2152,  2180,   286,  2154,  2185,  2161,  2187,  2163,
    2166,  2169,  2181,  2651,  2182,  2183,  2184,   805,  2188,  2235,
    2240,  2241,  2244,  2250,  2252,  2193,   419,  2266,  2267,  2268,
    2271,  2197,  2279,  2461,  2282,  2283,  2284,  2285,  2311,  2315,
    2200,  2201,  2202,  2203,  2204,  2205,  2206,  2207,  2208,  2209,
    2313,  2318,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,
    2230,  2231,  2232,  2233,  2320,  2236,  2321,  2237,  2238,  2239,
    2322,  2326,  2327,  2426,  2328,  2645,  2329,  2330,  2331,  2335,
    2336,   419,  2249,  2337,  2338,   433,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  2257,  2339,  2340,  2258,  2344,  2259,
    2345,  2261,  2346,   419,  2263,  2353,  2264,  2356,  2364,  2281,
    2367,  2370,  2371,  2269,  2270,  2373,  2376,  2377,  2378,  2381,
    2274,  2386,  2275,  2645,  2390,  2406,  2278,  2456,  2457,  2280,
    2459,  2427,  2465,  2428,   495,  2466,   502,   505,  2468,   510,
     514,  2429,  2430,  2431,  2432,  2434,  2471,  2472,  2312,  2473,
    2693,  2474,  2476,  2482,  2483,  2492,  2496,  2503,  2509,  2513,
    2533,  2516,  2522,  2530,  2536,  2541,  2553,   576,  2552,  2554,
    2555,  2556,  2557,  2314,  2572,  2579,  2581,   785,  2582,  2584,
    2585,  2317,  2591,  2618,  2624,   591,   597,  2627,  2628,  2629,
    2634,  2319,  2648,   681,  2649,  2323,  2324,  2650,  2652,  2662,
    2570,  2672,  2680,  2686,  2332,  2333,  2683,  2695,  2696,  2697,
    2704,  2707,  2732,  2341,  2342,  2717,  2718,  2724,  2736,  2347,
    2737,  2739,  2743,  2745,  2723,  2746,  2379,  2747,  2748,  2357,
    2358,  2594,  2657,  2433,  2642,  2694,   677,  2690,  1128,     0,
    2368,  2369,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2372,     0,   766,     0,     0,   698,     0,     0,     0,
    2374,     0,  2375,     0,     0,     0,     0,     0,     0,     0,
       0,  2165,     0,     0,     0,     0,     0,  2384,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2391,  2392,
    2393,  2394,  2395,  2396,  2397,  2398,  2399,  2400,  2401,     0,
    2699,  2701,     0,     0,  2404,     0,     0,  2190,   419,   419,
       0,   419,   419,     0,     0,   419,   419,  2416,  2417,  2418,
    2419,  2420,  2421,     0,  2423,  2424,  2425,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2436,  2437,  2438,  2439,     0,  2441,  2442,  2443,  2444,  2445,
    2446,     0,  2448,     0,     0,  2452,  2453,     0,     0,     0,
       0,     0,     0,     0,   801,     0,     0,  1476,     0,     0,
       0,     0,  1477,     0,  2460,   808,     0,   419,  2462,     0,
       0,     0,  2464,     0,   816,     0,  2467,     0,     0,     0,
       0,     0,     0,  1478,  1479,     0,  1480,  1481,     0,     0,
       0,     0,   850,     0,     0,     0,     0,  1482,     0,   855,
       0,     0,   856,     0,     0,     0,     0,   857,     0,  1483,
    1484,   859,     0,     0,     0,     0,     0,  1485,     0,     0,
    1486,  2484,  2486,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2495,     0,     0,     0,     0,  1487,     0,     0,
       0,  2497,   853,   854,  1488,  1489,     0,     0,  1490,     0,
    2506,     0,     0,     0,     0,   858,     0,  2508,     0,     0,
     861,     0,     0,     0,     0,     0,     0,     0,  2512,   872,
       0,     0,     0,   916,  2515,     0,     0,  2517,     0,     0,
    2518,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2524,     0,     0,     0,  2526,     0,     0,
       0,     0,     0,     0,     0,  1491,     0,  2527,  2528,     0,
       0,     0,     0,  2532,   419,     0,     0,  2535,   419,     0,
       0,     0,     0,  2540,     0,     0,  2544,  2545,     0,     0,
       0,     0,     0,     0,     0,   918,   919,   920,   921,     0,
       0,     0,     0,     0,     0,  2562,  2563,     0,  2565,  2566,
    2567,  2568,  2569,     0,   419,  2571,     0,     0,  1492,  2574,
       0,  2210,     0,     0,  1493,     0,     0,     0,     0,     0,
       0,  2583,  2211,     0,  1100,     0,  2587,     0,     0,  1494,
       0,  1106,     0,     0,     0,     0,     0,     0,  1495,     0,
       0,  2595,     0,     0,     0,  1062,  2596,  1064,  2212,     0,
    2598,     0,     0,     0,     0,  1065,     0,  2599,     0,     0,
       0,  1066,     0,  2602,     0,  1496,  1497,  2604,     0,     0,
    2605,     0,     0,     0,     0,     0,  2606,     0,     0,     0,
       0,  2610,  1067,  2612,     0,  2213,  1498,     0,     0,  2615,
    1312,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,     0,  2622,     0,  1068,     0,     0,     0,     0,     0,
       0,     0,  1069,     0,     0,   107,  2455,     0,  2667,     0,
    2633,     0,  1363,     0,  2637,     0,     0,     0,     0,     0,
    1499,     0,     0,     0,     0,     0,   108,     0,     0,     0,
       0,     0,     0,     0,  2656,     0,     0,     0,  1194,  1070,
       0,     0,   109,     0,     0,  1196,     0,  1071,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2670,     0,     0,
       0,     0,  2675,     0,  2677,     0,     0,     0,     0,     0,
       0,  2681,     0,     0,     0,     0,  2684,     0,     0,     0,
       0,  2687,     0,     0,  1195,     0,     0,   110,     0,  1072,
    1212,  1213,     0,     0,     0,  1217,  1200,  2706,  1220,     0,
    1073,     0,     0,  2698,  2700,   111,     0,     0,     0,  1229,
       0,     0,     0,     0,     0,     0,  1074,     0,     0,     0,
       0,     0,     0,     0,     0,  2214,     0,  2215,  2710,  2726,
       0,  2711,  2729,  1210,  2713,     0,     0,     0,     0,     0,
       0,   112,     0,     0,     0,  2719,  2720,  2721,  2722,     0,
       0,     0,     0,     0,     0,  1231,  1232,  2731,     0,     0,
    2734,     0,     0,     0,     0,     0,     0,  2738,     0,  2740,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,  2216,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,   115,   116,     0,     0,     0,  2558,   117,     0,
       0,     0,     0,   118,  1301,     0,     0,     0,     0,  1368,
       0,     0,     0,     0,     0,     0,     0,  2576,     0,     0,
       0,  2580,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
    2277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,  2287,  2288,  2289,     0,     0,
    2291,     0,  2293,  2294,     0,     0,  2296,  2297,  2298,     0,
       0,  2300,  2301,   281,     0,  2304,   119,  2306,  2307,  1447,
    2309,   342,     0,     0,     0,     0,     0,     0,   343,     0,
     109,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,   149,     0,     0,     0,   150,
     151,  1507,     0,     0,     0,   110,     0,     0,     0,     0,
       0,  1513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1716,  1717,  1718,     0,     0,     0,
       0,     0,     0,     0,  1720,  1721,  1722,     0,     0,     0,
       0,  1733,  1734,  1735,     0,     0,  1736,  1737,     0,  1739,
    1740,     0,     0,     0,     0,     0,     0,     0,  2380,   112,
       0,  2383,     0,     0,     0,     0,  2387,     0,     0,  2388,
       0,     0,  1591,     0,     0,     0,     0,     0,     0,  1812,
    1813,     0,     0,  1815,  1816,     0,     0,     0,  2403,     0,
       0,     0,     0,     0,     0,     0,   282,     0,     0,     0,
       0,     0,  1615,     0,     0,     0,     0,  1620,     0,     0,
       0,     0,  1588,     0,     0,     0,   117,  1626,     0,     0,
       0,   118,     0,     0,     0,     0,  2716,     0,     0,  1596,
       0,     0,   283,     0,     0,     0,     0,     0,  1644,  1645,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1621,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1627,     0,     0,     0,     0,     0,     0,
       0,     0,   344,     0,   345,  2470,     0,     0,     0,     0,
       0,     0,  1643,     0,     0,     0,     0,     0,     0,     0,
       0,   284,     0,  1656,     0,     0,     0,     0,  1664,     0,
       0,     0,     0,     0,     0,  2478,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1240,  1241,  1242,     0,  2521,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2529,     0,     0,     0,  1243,  1244,
       0,  2534,  1245,     0,  2537,  2538,     0,     0,     0,  1246,
       0,     0,  1247,     0,     0,     0,  1248,     0,     0,     0,
       0,  1819,     0,     0,  1249,  1250,     0,     0,     0,     0,
       0,     0,  1251,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,  1889,     0,     0,     0,     0,     0,
       0,  1841,     0,     0,   107,     0,     0,     0,     0,  1252,
    1253,     0,     0,  1254,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1255,
    1875,     0,     0,  1876,   107,     0,     0,     0,     0,     0,
       0,   109,     0,  1892,  1893,     0,     0,     0,  1256,     0,
       0,  1897,     0,     0,  1938,     0,     0,     0,  1898,     0,
    1944,     0,  2607,     0,     0,     0,     0,     0,     0,     0,
    1257,     0,     0,     0,     0,     0,     0,  2057,     0,  1258,
       0,  2617,     0,     0,     0,     0,   110,     0,     0,     0,
    2065,     0,     0,     0,     0,     0,     0,     0,  1937,     0,
    2068,  1940,  1941,     0,     0,     0,     0,     0,     0,     0,
    1948,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,  1259,     0,  1260,     0,     0,     0,     0,     0,  1261,
    1262,     0,     0,     0,     0,  1979,     0,  1981,     0,     0,
     112,     0,     0,  1986,  1263,     0,     0,     0,     0,     0,
    2668,  2669,     0,  2671,  1264,  2673,  2674,     0,  2676,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2001,     0,
     112,     0,  2153,     0,  2007,     0,     0,     0,     0,  1265,
       0,  1266,     0,     0,     0,     0,  1983,     0,     0,     0,
    2013,  1267,     0,     0,     0,     0,     0,   117,     0,     0,
       0,  1268,   118,  2022,  1999,     0,     0,     0,     0,  2703,
       0,  2029,     0,     0,     0,     0,     0,     0,     0,     0,
    2008,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,  1269,     0,     0,     0,     0,
       0,     0,  2016,     0,     0,     0,     0,  2021,     0,     0,
    2023,     0,  2024,  2025,  2026,  2028,  2735,     0,  2030,     0,
       0,  2031,     0,     0,  2032,  2034,     0,  2035,  2036,  2037,
    2039,     0,  2040,  2041,     0,     0,     0,     0,  2043,  2044,
    2045,     0,     0,  2046,  2047,     0,     0,     0,     0,  2048,
    2049,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2155,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2168,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2156,     0,     0,     0,  2159,     0,     0,
       0,     0,  2191,  2192,  2316,     0,     0,     0,     0,  2164,
       0,     0,  2167,     0,     0,     0,     0,     0,     0,  2195,
    2196,     0,     0,     0,  2198,  2199,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2186,     0,  2348,  2349,  2350,  2351,  2352,     0,
    2354,  2355,     0,     0,     0,  2359,  2360,  2361,  2362,  2363,
       0,  2365,  2366,     0,  2242,     0,     0,  2246,  2247,     0,
       0,     0,     0,   513,     0,  2251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2234,     0,
       0,  1230,     0,     0,     0,     0,     0,     0,     0,     0,
    2260,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,     0,     0,     0,     0,   109,  2272,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2286,     0,
       0,     0,     0,  2290,     0,     0,     0,     0,     0,  2295,
       0,     0,     0,     0,  2299,     0,     0,     0,  2302,     0,
     110,  2305,  2273,     0,  2308,   107,  2310,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2303,   500,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,  2485,     0,   110,  2487,  2488,
    2489,  2490,  2491,     0,  2493,  2494,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2498,  2499,  2500,  2501,
    2502,   117,  2504,  2505,     0,  2507,   118,     0,     0,     0,
       0,     0,     0,     0,     0,  2510,  2511,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2514,     0,     0,     0,
       0,   112,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2382,     0,     0,  2385,     0,     0,     0,     0,     0,     0,
       0,  2389,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2402,     0,     0,
    2405,  2447,     0,     0,     0,  2409,     0,     0,  2412,  2413,
       0,     0,     0,   118,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,  2597,     0,     0,     0,     0,     0,   501,
       0,     0,     0,     0,  2600,     0,  2601,     0,     0,     0,
    2603,     0,     0,     0,     0,     0,  2475,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,  2519,     0,     0,     0,
       0,     0,  2523,     0,     0,     0,  2525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2531,     0,  2663,     0,     0,  2664,     0,     0,
    2665,     0,  2666,     0,     0,     0,     0,   486,   487,     0,
       0,   488,     0,  2520,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   489,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,  2539,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2550,     0,     0,
       0,     0,  2592,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   592,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2593,   490,
       0,     0,     0,     0,     0,     0,     0,   593,     0,     0,
       0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2626,     0,     0,
       0,     0,     0,     0,     0,     0,   492,     0,     0,     0,
       0,     0,     0,     0,  2608,  2609,     0,  2611,     0,   118,
     110,     0,  2613,  2614,     0,     0,     0,  2616,     0,     0,
       0,     0,     0,     0,   594,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2638,     0,     0,     0,     0,     0,     0,     0,     0,   493,
       0,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,  2658,     0,  2689,     0,     0,     0,     0,
     595,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2702,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   118,   494,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2727,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2705,     0,     0,     0,     0,     0,
       0,     0,  2741,     0,     0,  2742,     0,     0,     0,     0,
       0,  2714,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2725,     0,     0,  2728,
       0,     0,   596,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   973,   974,   975,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   175,     0,     0,   176,
       0,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   976,   977,     0,     0,   978,   107,     0,   979,     0,
     178,     0,   179,   180,   181,   980,     0,     0,     0,   981,
       0,     0,   182,     0,   183,     0,     0,   982,   983,   184,
       0,   185,   186,   187,     0,   984,   985,   107,   188,     0,
     189,     0,     0,   109,     0,     0,     0,     0,     0,     0,
       0,     0,   986,     0,     0,     0,     0,     0,   987,     0,
       0,     0,   988,   989,     0,   107,   990,     0,     0,   190,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
       0,     0,   991,     0,     0,   191,     0,     0,   110,     0,
       0,     0,     0,   107,     0,   192,   193,     0,     0,   194,
       0,   992,  1300,   195,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,   993,     0,     0,   197,   198,     0,     0,
     199,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     200,     0,   112,     0,     0,     0,   994,   110,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
       0,     0,     0,   203,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,   995,   110,   996,     0,     0,     0,
       0,     0,   997,   998,     0,     0,   204,     0,   205,     0,
       0,     0,     0,     0,     0,     0,   999,  1000,     0,   117,
       0,   112,     0,     0,   118,     0,  1001,  1002,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   208,   112,
     117,     0,  1003,     0,  1004,   118,   209,     0,     0,     0,
       0,     0,     0,   210,     0,     0,  1005,     0,  1006,   211,
       0,   212,     0,     0,  1007,     0,     0,     0,     0,     0,
       0,     0,   504,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,  1008,     0,
       0,   118,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     1,     0,
       0,     2,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     7,     8,     9,     0,     0,     0,
       0,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,    11,     0,    12,    13,     0,     0,     0,     0,     0,
       0,     0,    14,    15,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    17,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,    22,     0,   951,     0,     0,     0,    23,   952,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,  1337,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    31,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,    35,     0,     0,     0,     0,     0,     0,
      36,     0,     0,    37,     0,     0,    38,     0,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,     0,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    47,     0,     0,     0,     0,     0,    48,
       0,     0,    49,    50,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,    51,     0,     0,     0,     0,     0,    52,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1338
};

static const yytype_int16 yycheck[] =
{
       3,   477,    50,  1423,  1121,   974,  1123,    32,    11,  1623,
       5,  1625,   655,     3,     4,   650,   651,     4,     5,     5,
       0,     4,     3,     4,    17,     4,     5,    27,     5,    32,
      32,     4,  1149,  1150,  1151,     5,     5,    40,    61,     3,
       4,     3,     4,     4,     4,    27,    49,    32,    48,    52,
       4,    51,    55,     3,     4,     5,    59,    20,    14,    62,
       3,     4,    62,    66,    67,     5,   433,    70,    57,    17,
      73,    74,    46,    40,    77,    27,   443,     4,    81,     5,
       3,     4,    27,    86,    37,    85,    40,    66,   113,     4,
      61,   945,    50,    36,   948,   130,    99,   100,   101,   102,
     103,   104,   102,    44,    99,    61,    97,     3,     4,    88,
     105,   965,    17,   163,   132,     3,     4,   120,    32,     4,
       3,     4,     4,   121,   148,     3,     4,   166,   209,     5,
      56,   166,   119,    27,    66,     3,     4,   191,    87,    65,
     119,    99,   191,     5,   111,    66,    87,     6,   257,   120,
     108,   279,   155,     3,     4,   264,   155,   111,   183,   138,
     185,    21,   187,   188,     4,   855,   856,   857,    36,    31,
     195,   137,     3,     4,     4,   178,    33,   135,    21,    21,
     183,    66,   221,   182,    66,   210,   221,    21,   131,     3,
       4,   164,    21,     0,    16,   185,   245,     4,   252,     3,
       4,     4,     3,     4,     4,    36,   155,   143,   174,    40,
     260,   192,    12,   200,   166,   208,    56,   227,   299,   206,
     207,   200,     5,   185,   242,   192,   916,   206,   207,   191,
     254,   191,   188,   222,   119,     4,    66,   119,   192,   221,
     243,   239,   277,   291,   197,    59,   285,   236,   180,   190,
     893,    61,   157,    66,   277,    59,   259,   260,    21,   284,
     208,   120,   185,   131,   191,   256,   228,     4,   231,   221,
     273,   165,   241,   133,   276,    21,   221,   300,   281,   282,
     111,   284,   285,   223,   287,   245,   212,   241,   265,   119,
     252,   276,   259,   267,   297,   288,    27,   268,   281,   279,
     131,   296,   258,   290,   307,   308,   287,   297,   297,   296,
     280,   290,   268,   299,   681,   200,   119,   296,   200,   306,
     281,   206,   207,   287,   206,   207,   241,    14,   331,   332,
     333,   289,   335,   306,    21,   297,   339,   340,   221,    26,
     288,   235,     4,   299,   287,   345,    33,   350,   351,   299,
     340,   341,   339,   356,   286,   998,   343,   344,   361,   362,
     339,   192,   276,   342,   343,   344,   369,   243,    30,   372,
     200,   221,   212,  1016,   297,   235,   206,   207,   340,   341,
       5,     4,   119,   277,    71,    27,    61,   390,   391,    14,
      15,   287,   235,   235,   397,   398,   399,   200,   401,   287,
      30,   235,   262,   206,   207,   290,   235,   432,   290,   287,
       3,     4,   415,  1048,    63,  1384,   419,   340,   341,   287,
     221,   424,   425,   426,   427,   428,   429,    12,   431,     5,
     433,   434,   435,    56,   165,  1552,    61,    28,    14,    15,
     443,   444,  1411,     5,  1079,   120,    30,    40,    13,   816,
     103,    61,    14,    15,   339,   104,   287,   339,   343,   344,
     290,   343,   344,   200,    94,  1434,    59,   277,    53,   206,
     207,   121,   235,   160,   161,   162,   163,   164,   165,    40,
     155,   168,   169,   170,   171,    61,    71,   290,    17,   235,
     300,    87,   859,     5,   497,   498,   521,   159,    61,    61,
    1354,    40,     5,  1357,   235,    17,    37,     3,     4,   339,
     120,    88,   515,   343,   344,   100,    47,     4,   111,     3,
       4,    64,  1212,    66,   166,   528,   574,    66,   553,    61,
    1220,   161,   185,   118,   421,   422,   339,   122,    16,   542,
     343,   344,   121,    74,   281,    83,   277,   209,   133,   257,
     111,     3,     4,   290,  2644,   227,   264,   120,   149,   155,
      99,    99,     0,   188,   189,     5,   105,   615,   571,    98,
     257,   258,   111,   235,   264,   159,     4,     5,     5,   221,
     171,     3,     4,   232,   175,   235,   634,     5,   120,   212,
     129,    61,    28,   268,    63,    79,   283,   246,   247,   192,
      61,  2691,   339,   606,     4,   254,   343,   344,    37,   148,
       3,     4,   188,   189,   117,   245,     5,   148,    47,  1262,
     250,    63,   187,    56,   163,   209,   188,   189,    45,   632,
    1273,   192,    60,   258,   225,   104,    61,   180,    66,   326,
     327,   328,    59,   268,   269,    74,   649,    66,   273,   652,
     120,   235,    31,   184,   193,   124,   235,  2271,   268,   120,
       3,     4,   104,    56,    81,    61,     4,   670,   671,   672,
     673,    61,   263,   676,   299,   678,    54,   680,   681,   682,
     271,   272,   258,   100,     5,   137,   114,   190,   337,   338,
     283,   230,   268,   269,     5,   120,   258,   273,   259,    61,
     117,   129,   287,   120,   243,   268,   268,   269,   204,   757,
     129,   273,    90,   149,   142,   254,   194,     5,   249,   148,
     148,    34,   174,   299,   120,   153,    14,    15,   145,   146,
     120,     5,   192,  1100,   153,   171,   268,   299,   241,   175,
      14,    15,   281,   286,     4,     5,   749,   750,     4,   752,
     753,   754,   755,   117,   293,   184,   295,   296,   120,     3,
       4,   139,   265,   232,   767,   768,   167,    26,   121,   300,
      70,   774,   775,    61,   175,    40,   204,   246,   247,   212,
     197,    66,   204,   118,    14,    15,   124,    61,   205,   225,
     232,   794,   795,   796,   107,   223,   335,    78,   268,   228,
     228,   167,   230,    61,   246,   247,   279,   268,   811,   812,
     813,   230,   815,   816,   817,   840,   819,     3,     4,   212,
     249,    33,   105,    14,    15,   253,   254,   263,   105,    24,
      25,    61,  2424,   261,    78,   271,   272,   840,    88,   842,
    1957,  1958,  1959,   268,     5,   241,   111,   264,   265,   852,
    1217,   279,   195,   112,    40,   284,   859,   860,  2450,  1828,
     279,   864,   120,   241,   202,   124,   116,   167,   337,   338,
      61,   300,   268,    89,  1728,  1844,   879,   880,   268,    82,
       3,     4,   235,    16,   887,   888,   889,    66,   201,   170,
      14,    15,   895,   278,  1748,   337,   338,   900,   157,   121,
     188,   189,    97,   951,  1873,    22,   268,   335,   911,  1763,
     193,   130,  1766,   600,   188,   189,   193,    89,   335,   228,
    1774,    72,    82,  1777,   927,   111,   170,   192,    14,    15,
      83,  1785,    49,   183,  1788,    52,  1626,    61,   944,   137,
     240,  1795,     3,     4,   203,     5,    99,   150,   198,   249,
    2542,  2543,    40,    31,  2546,     4,  2548,   216,   188,   189,
     243,    42,    43,     4,   245,    82,   243,   654,  2560,  2561,
     258,   121,   659,  2565,  2566,    61,   174,  2569,   121,    40,
     268,   269,  2574,  2575,   258,   273,    14,    15,     3,     4,
     150,   994,     5,   110,   268,   269,   113,   188,   189,   273,
     123,   245,   221,     5,   201,   255,  2426,  1976,     6,    93,
     268,   299,  1015,   235,     3,     4,   219,   220,   148,     4,
     173,  1024,     5,   111,     5,   299,  2618,   111,   258,  2621,
       5,   234,    26,    61,  2626,  1038,     4,  1040,   268,   269,
    2632,     5,  1045,  1046,  1047,  2637,   296,     3,     4,     4,
     111,     4,  1055,     3,     4,  1058,   306,  1060,   277,   219,
     220,   214,     3,     4,   188,   189,     4,   258,     4,   299,
      59,   274,     4,  1076,   234,  1078,    17,   268,   269,  1082,
    1083,    14,    15,     5,   214,   235,    97,   168,   169,   120,
      88,     5,   235,  1096,  1097,   248,     4,  1100,  1101,  1102,
     265,   185,   188,   189,   192,  1108,   223,  1110,   299,     4,
    1113,   798,  1115,     4,   274,   196,  1164,  2709,   112,     4,
    2712,     4,   120,     5,   254,     3,     4,     5,    61,     4,
     124,   192,     4,     5,   258,     4,   253,    14,    15,   195,
    2732,   338,     3,     4,   268,   269,   343,     4,   345,  1152,
       4,    12,  1177,  1156,  2746,  1158,     4,  2749,  2750,  1162,
     188,   189,   292,     3,     4,     3,     4,   123,     3,     4,
       4,     5,   258,   123,  1177,   299,  1179,    12,  1181,  1182,
    1183,  1184,   268,   269,    61,  1188,  1189,    19,    60,     5,
       3,     4,     9,  1196,    66,    61,     9,    10,    11,  1224,
    1203,    73,    40,    75,  1207,  1208,  1209,     5,    80,   203,
      11,    83,    44,   299,  1217,  1218,  1241,    89,  1221,     3,
       4,     5,   216,     7,     8,  2544,   264,    99,     5,  2083,
     258,  1234,   167,   105,  1237,     4,     5,  2206,  2092,     4,
     268,   269,   114,  2562,     4,    77,   175,  2101,  1938,     3,
       4,   117,    84,  2222,   120,   188,   189,   129,  2227,     3,
       4,     5,    94,    95,   167,    44,   194,    46,   194,   101,
       5,   299,     5,   111,     4,     5,   148,  1280,     4,  1282,
       4,     5,  1285,  1286,   194,  1288,   186,  1290,   186,   155,
      66,   163,   124,  1296,    66,  1298,    66,    76,   185,     5,
     172,   173,  1305,   221,   191,    84,   222,     5,   140,     3,
       4,   188,   189,     7,     8,     4,  1322,  2007,    22,     4,
       4,   193,   154,   155,   190,   258,   194,     5,  1334,   161,
       3,     4,     5,     5,  1021,   268,   269,    87,    87,  2029,
       4,   228,   214,     4,     4,    49,  1352,  1353,    52,   181,
       5,    55,     5,     5,  1379,    17,   228,    99,   230,     4,
      17,  2680,   141,     5,     4,   252,   299,  2686,    17,     4,
       4,   243,   238,     4,    97,   241,   248,  1380,    82,  1382,
    1383,   258,   254,    12,     5,   217,     5,    87,  1075,   261,
       4,   268,   269,     5,     5,    87,     5,     4,  1085,   265,
       5,  1404,   268,     5,     4,  1408,   110,   279,     4,   113,
     297,   190,   278,  2418,     5,     5,  2421,     5,  2423,     4,
     292,   293,   299,   295,  2743,     4,  2745,   206,   207,  1432,
    1433,  2436,  2437,     5,   213,   267,   215,    12,     4,  1442,
       4,   253,     4,  1446,    66,   277,     4,     4,  2453,     5,
    1453,     5,   164,  2422,   341,     3,     4,     5,    80,     7,
       8,    35,   241,   335,  1467,     5,  2435,    89,     4,  1472,
       4,  2440,     5,  1476,   306,  1478,  1479,    99,  1481,  1482,
    1483,     4,  1485,     5,   281,  1488,  1489,  1490,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,  1498,   253,     4,  1501,  1502,
    1503,  1504,     5,     5,     5,  1192,  1193,   129,  1511,  1512,
       5,     4,  1515,  1516,  1517,     4,     4,  1520,  1521,   223,
       5,     5,  1889,   266,     5,   266,   148,   306,    91,     5,
    1533,  1534,   106,  1536,  1537,     5,    99,    53,     4,     3,
       4,     5,   105,     7,     8,     5,     5,     5,     5,   253,
       5,     5,  2242,   127,   128,    71,     4,     4,   235,     5,
     134,  2251,     5,   126,     4,   235,     5,     5,   105,  1594,
       5,   193,    88,   105,   105,   279,   137,  1944,   152,    40,
       5,  1584,  1585,  1586,   100,   148,  1589,   235,   162,    40,
     208,  1594,  1595,   156,  1597,  1598,  1599,     5,  1601,  1602,
     239,  1604,   118,     4,  1607,  1608,   122,   208,   230,     5,
       5,   208,  2302,  1616,   208,  2305,     4,   133,  2308,  1986,
    2310,  1624,     4,    12,     5,     5,  1629,  1630,     5,     5,
     193,     4,   254,   111,  1637,     4,   111,  1662,   201,     5,
       5,     5,     4,  1646,     5,     4,     6,  1672,     5,     5,
       5,     4,  1677,     5,     5,     4,   172,     5,     5,     4,
       6,     5,    12,     4,     4,     4,     4,    38,    38,     5,
       4,   293,     0,   295,     5,   235,   235,   121,     4,  1682,
     243,   137,   235,   166,   204,   194,     4,     4,  1375,     4,
       4,   254,   243,     4,  1381,     5,     5,     5,   266,     5,
       5,  1704,  1705,     5,     4,     4,  1709,   270,  2677,     5,
       4,     4,  1715,     4,   235,     5,  1403,     5,     5,  1406,
     235,   235,   303,  1410,     4,   303,     4,     4,     4,     4,
       4,     4,  1738,   303,   303,     4,     6,     5,     5,   221,
    1746,  1747,   221,     5,  1431,     5,     4,   221,   221,   221,
    1437,     5,     5,     4,     4,  1761,  1762,     5,  1445,     5,
       4,  1448,     4,    12,     5,     5,  1772,  1773,     4,     4,
    1457,  1458,     5,     5,     4,   266,     5,  1783,  1784,     5,
       4,  1468,     5,     4,     4,     4,     4,  1793,  1794,     5,
       5,     5,     4,  1799,     5,     5,     4,   266,     5,     5,
       5,     4,     4,  1809,     5,     4,     6,     5,     5,     5,
       4,     4,   299,     5,     5,     5,     5,     4,     4,  1822,
       5,  1824,     5,  1826,  2191,  2192,     5,  2194,  2195,     5,
       4,  2198,  2199,     4,   266,     5,     5,   279,     5,     5,
       4,     4,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,
    1853,     5,     5,     5,     5,     4,     4,   279,     5,     4,
       4,     4,     4,     4,    32,     5,  1869,     5,  1871,     5,
       5,     5,     4,     6,     5,     4,     4,   420,     5,     5,
       4,     4,     4,     4,     4,  1888,  1889,     5,     5,     4,
       4,  1894,     5,  2260,     5,     5,     5,     5,     4,     4,
    1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,
       5,     4,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,     5,  1928,     5,  1930,  1931,  1932,
       5,     4,     4,   346,     5,  2578,     5,     5,     5,     4,
       4,  1944,  1945,     5,     5,   113,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,  1977,     5,     5,  1980,     4,  1982,
       4,  1984,     5,  1986,  1987,     4,  1989,     4,     4,  2014,
       4,     4,     4,  1996,  1997,     4,     4,     4,     4,     4,
    2003,     4,  2005,  2646,     4,     4,  2009,     4,     4,  2012,
       4,   346,     5,   346,   182,     5,   184,   185,     4,   187,
     188,   346,   346,   346,   346,   346,     5,     4,  2053,     4,
     346,     5,     5,     5,     4,     4,     4,     4,     4,     4,
    2407,     4,     4,     4,  2411,     4,     4,   215,     5,     5,
       5,     5,     4,  2056,     5,     5,     4,   376,     5,     5,
       4,  2067,     5,     4,     4,   233,   234,     5,     4,     4,
       4,  2077,     4,   286,     5,  2081,  2082,     5,     4,     4,
    2447,     4,     4,     4,  2090,  2091,     5,     5,     5,     4,
       4,     4,     4,  2099,  2100,     5,     5,     5,     5,  2105,
       5,     5,     4,     4,  2702,     5,  2154,     5,     5,  2115,
    2116,  2483,  2587,  2217,  2576,  2646,   284,  2642,   716,    -1,
    2126,  2127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2137,    -1,   346,    -1,    -1,   304,    -1,    -1,    -1,
    2146,    -1,  2148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1838,    -1,    -1,    -1,    -1,    -1,  2160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,    -1,
    2656,  2657,    -1,    -1,  2187,    -1,    -1,  1874,  2191,  2192,
      -1,  2194,  2195,    -1,    -1,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,    -1,  2207,  2208,  2209,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2223,  2224,  2225,  2226,    -1,  2228,  2229,  2230,  2231,  2232,
    2233,    -1,  2235,    -1,    -1,  2238,  2239,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   412,    -1,    -1,    22,    -1,    -1,
      -1,    -1,    27,    -1,  2257,   423,    -1,  2260,  2261,    -1,
      -1,    -1,  2265,    -1,   432,    -1,  2269,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,
      -1,    -1,   495,    -1,    -1,    -1,    -1,    62,    -1,   502,
      -1,    -1,   505,    -1,    -1,    -1,    -1,   510,    -1,    74,
      75,   514,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      85,  2314,  2318,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2328,    -1,    -1,    -1,    -1,   102,    -1,    -1,
      -1,  2337,   500,   501,   109,   110,    -1,    -1,   113,    -1,
    2346,    -1,    -1,    -1,    -1,   513,    -1,  2353,    -1,    -1,
     518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2364,   527,
      -1,    -1,    -1,   576,  2370,    -1,    -1,  2373,    -1,    -1,
    2376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2386,    -1,    -1,    -1,  2390,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   170,    -1,  2400,  2401,    -1,
      -1,    -1,    -1,  2406,  2407,    -1,    -1,  2410,  2411,    -1,
      -1,    -1,    -1,  2416,    -1,    -1,  2419,  2420,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   593,   594,   595,   596,    -1,
      -1,    -1,    -1,    -1,    -1,  2438,  2439,    -1,  2441,  2442,
    2443,  2444,  2445,    -1,  2447,  2448,    -1,    -1,   223,  2452,
      -1,    55,    -1,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,  2464,    66,    -1,   677,    -1,  2469,    -1,    -1,   244,
      -1,   684,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,
      -1,  2484,    -1,    -1,    -1,   653,  2492,    91,    92,    -1,
    2496,    -1,    -1,    -1,    -1,    99,    -1,  2503,    -1,    -1,
      -1,   105,    -1,  2509,    -1,   280,   281,  2513,    -1,    -1,
    2516,    -1,    -1,    -1,    -1,    -1,  2519,    -1,    -1,    -1,
      -1,  2524,   126,  2526,    -1,   129,   301,    -1,    -1,  2532,
     932,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,  2545,    -1,   148,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    19,  2243,    -1,  2606,    -1,
    2563,    -1,   964,    -1,  2567,    -1,    -1,    -1,    -1,    -1,
     345,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2587,    -1,    -1,    -1,   801,   193,
      -1,    -1,    56,    -1,    -1,   808,    -1,   201,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2610,    -1,    -1,
      -1,    -1,  2615,    -1,  2617,    -1,    -1,    -1,    -1,    -1,
      -1,  2624,    -1,    -1,    -1,    -1,  2629,    -1,    -1,    -1,
      -1,  2634,    -1,    -1,   802,    -1,    -1,   101,    -1,   243,
     853,   854,    -1,    -1,    -1,   858,   814,  2672,   861,    -1,
     254,    -1,    -1,  2656,  2657,   119,    -1,    -1,    -1,   872,
      -1,    -1,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   279,    -1,   281,  2681,  2704,
      -1,  2684,  2707,   851,  2687,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,  2698,  2699,  2700,  2701,    -1,
      -1,    -1,    -1,    -1,    -1,   873,   874,  2710,    -1,    -1,
    2713,    -1,    -1,    -1,    -1,    -1,    -1,  2720,    -1,  2722,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,   335,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,
      -1,    -1,   206,   207,    -1,    -1,    -1,  2434,   212,    -1,
      -1,    -1,    -1,   217,   922,    -1,    -1,    -1,    -1,   972,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2454,    -1,    -1,
      -1,  2458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
    2008,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,  2023,  2024,  2025,    -1,    -1,
    2028,    -1,  2030,  2031,    -1,    -1,  2034,  2035,  2036,    -1,
      -1,  2039,  2040,    39,    -1,  2043,   290,  2045,  2046,   997,
    2048,    16,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      56,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
      -1,    -1,    -1,    -1,    -1,   339,    -1,    -1,    -1,   343,
     344,  1049,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,  1059,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1306,  1307,  1308,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1316,  1317,  1318,    -1,    -1,    -1,
      -1,  1323,  1324,  1325,    -1,    -1,  1328,  1329,    -1,  1331,
    1332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2156,   155,
      -1,  2159,    -1,    -1,    -1,    -1,  2164,    -1,    -1,  2167,
      -1,    -1,  1165,    -1,    -1,    -1,    -1,    -1,    -1,  1361,
    1362,    -1,    -1,  1365,  1366,    -1,    -1,    -1,  2186,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,    -1,
      -1,    -1,  1195,    -1,    -1,    -1,    -1,  1200,    -1,    -1,
      -1,    -1,  1160,    -1,    -1,    -1,   212,  1210,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,  2693,    -1,    -1,  1177,
      -1,    -1,   228,    -1,    -1,    -1,    -1,    -1,  1231,  1232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1211,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   237,    -1,   239,  2273,    -1,    -1,    -1,    -1,
      -1,    -1,  1230,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,  1241,    -1,    -1,    -1,    -1,  1246,    -1,
      -1,    -1,    -1,    -1,    -1,  2303,    -1,    -1,    -1,    -1,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    -1,    -1,
      -1,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,  2382,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2402,    -1,    -1,    -1,    48,    49,
      -1,  2409,    52,    -1,  2412,  2413,    -1,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,  1379,    -1,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,  1447,    -1,    -1,    -1,    -1,    -1,
      -1,  1409,    -1,    -1,    19,    -1,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
    1438,    -1,    -1,  1441,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,  1451,  1452,    -1,    -1,    -1,   148,    -1,
      -1,  1459,    -1,    -1,  1507,    -1,    -1,    -1,  1466,    -1,
    1513,    -1,  2520,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,    -1,    -1,  1719,    -1,   179,
      -1,  2539,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
    1732,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1506,    -1,
    1742,  1509,  1510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1518,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,    -1,   229,
     230,    -1,    -1,    -1,    -1,  1588,    -1,  1590,    -1,    -1,
     155,    -1,    -1,  1596,   244,    -1,    -1,    -1,    -1,    -1,
    2608,  2609,    -1,  2611,   254,  2613,  2614,    -1,  2616,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1621,    -1,
     155,    -1,  1814,    -1,  1627,    -1,    -1,    -1,    -1,   279,
      -1,   281,    -1,    -1,    -1,    -1,  1594,    -1,    -1,    -1,
    1643,   291,    -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,
      -1,   301,   217,  1656,  1612,    -1,    -1,    -1,    -1,  2667,
      -1,  1664,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1628,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   217,    -1,    -1,   335,    -1,    -1,    -1,    -1,
      -1,    -1,  1650,    -1,    -1,    -1,    -1,  1655,    -1,    -1,
    1658,    -1,  1660,  1661,  1662,  1663,  2714,    -1,  1666,    -1,
      -1,  1669,    -1,    -1,  1672,  1673,    -1,  1675,  1676,  1677,
    1678,    -1,  1680,  1681,    -1,    -1,    -1,    -1,  1686,  1687,
    1688,    -1,    -1,  1691,  1692,    -1,    -1,    -1,    -1,  1697,
    1698,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1819,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1841,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1821,    -1,    -1,    -1,  1825,    -1,    -1,
      -1,    -1,  1875,  1876,  2066,    -1,    -1,    -1,    -1,  1837,
      -1,    -1,  1840,    -1,    -1,    -1,    -1,    -1,    -1,  1892,
    1893,    -1,    -1,    -1,  1897,  1898,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1870,    -1,  2106,  2107,  2108,  2109,  2110,    -1,
    2112,  2113,    -1,    -1,    -1,  2117,  2118,  2119,  2120,  2121,
      -1,  2123,  2124,    -1,  1937,    -1,    -1,  1940,  1941,    -1,
      -1,    -1,    -1,     4,    -1,  1948,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1926,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1983,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,  1999,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2021,    -1,
      -1,    -1,    -1,  2026,    -1,    -1,    -1,    -1,    -1,  2032,
      -1,    -1,    -1,    -1,  2037,    -1,    -1,    -1,  2041,    -1,
     101,  2044,  2000,    -1,  2047,    19,  2049,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2042,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,  2317,    -1,   101,  2320,  2321,
    2322,  2323,  2324,    -1,  2326,  2327,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2338,  2339,  2340,  2341,
    2342,   212,  2344,  2345,    -1,  2347,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2357,  2358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2368,    -1,    -1,    -1,
      -1,   155,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2158,    -1,    -1,  2161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2185,    -1,    -1,
    2188,  2234,    -1,    -1,    -1,  2193,    -1,    -1,  2196,  2197,
      -1,    -1,    -1,   217,    -1,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,    -1,  2495,    -1,    -1,    -1,    -1,    -1,   283,
      -1,    -1,    -1,    -1,  2506,    -1,  2508,    -1,    -1,    -1,
    2512,    -1,    -1,    -1,    -1,    -1,  2284,    -1,    -1,    -1,
      -1,    -1,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,
      -1,    -1,  2385,    -1,    -1,    -1,  2389,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2405,    -1,  2596,    -1,    -1,  2599,    -1,    -1,
    2602,    -1,  2604,    -1,    -1,    -1,    -1,    65,    66,    -1,
      -1,    69,    -1,  2381,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,  2414,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2425,    -1,    -1,
      -1,    -1,  2475,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2476,   167,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2550,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2522,  2523,    -1,  2525,    -1,   217,
     101,    -1,  2530,  2531,    -1,    -1,    -1,  2535,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2568,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,
      -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2591,    -1,  2638,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2658,    -1,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   217,   335,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2705,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2672,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2725,    -1,    -1,  2728,    -1,    -1,    -1,    -1,
      -1,  2689,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2704,    -1,    -1,  2707,
      -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    49,    -1,    -1,    52,    19,    -1,    55,    -1,
      65,    -1,    67,    68,    69,    62,    -1,    -1,    -1,    66,
      -1,    -1,    77,    -1,    79,    -1,    -1,    74,    75,    84,
      -1,    86,    87,    88,    -1,    82,    83,    19,    93,    -1,
      95,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,
      -1,    -1,   109,   110,    -1,    19,   113,    -1,    -1,   124,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,    -1,    -1,   140,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    19,    -1,   150,   151,    -1,    -1,   154,
      -1,   148,    56,   158,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,   170,    -1,    -1,   181,   182,    -1,    -1,
     185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     195,    -1,   155,    -1,    -1,    -1,   193,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,    -1,    -1,    -1,
      -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   155,   221,   101,   223,    -1,    -1,    -1,
      -1,    -1,   229,   230,    -1,    -1,   241,    -1,   243,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   243,   244,    -1,   212,
      -1,   155,    -1,    -1,   217,    -1,   253,   254,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,   283,   155,
     212,    -1,   279,    -1,   281,   217,   291,    -1,    -1,    -1,
      -1,    -1,    -1,   298,    -1,    -1,   293,    -1,   295,   304,
      -1,   306,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   275,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,   335,    -1,
      -1,   217,    -1,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,    -1,    -1,    -1,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,    41,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    96,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,   140,    -1,    -1,
     143,    -1,    -1,    -1,   147,   148,    -1,    -1,    -1,    -1,
      -1,   154,    -1,   155,    -1,    -1,    -1,   160,   160,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,   176,   177,   178,    -1,    -1,   181,   182,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   195,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   210,   211,   212,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   224,    -1,   226,    -1,    -1,    -1,    -1,    -1,    -1,
     233,    -1,    -1,   236,    -1,    -1,   239,    -1,   241,    -1,
     243,    -1,    -1,    -1,    -1,   248,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   282,
     283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   294,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,   305,   306,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,    -1,   336,    -1,    -1,    -1,    -1,    -1,   342,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   136,   140,   143,
     147,   148,   154,   160,   173,   176,   177,   178,   181,   182,
     195,   210,   211,   212,   224,   226,   233,   236,   239,   241,
     243,   248,   261,   267,   282,   283,   294,   296,   302,   305,
     306,   336,   342,   348,    66,    12,    53,    71,   100,   118,
     122,   133,   287,   380,     3,     4,   287,   349,   385,   185,
     191,   228,   252,   297,   341,   387,   279,     4,    40,   111,
     192,   241,   392,    28,   149,   171,   175,   225,   263,   271,
     272,   362,   394,    83,    99,   173,   214,   248,   395,    40,
      59,   111,   192,   283,   349,   404,     4,    19,    40,    56,
     101,   119,   155,   192,   200,   206,   207,   212,   217,   290,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   339,
     343,   344,   351,   359,   360,   361,   406,    33,   407,   351,
      44,    46,    76,    84,   141,   190,   206,   207,   213,   215,
     241,   306,   350,   143,   409,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   140,   150,   151,   154,   158,   160,   181,   182,   185,
     195,   210,   211,   218,   241,   243,   267,   282,   283,   291,
     298,   304,   306,   342,   410,    83,    99,   452,    19,    44,
      77,    84,    94,    95,   101,   124,   140,   154,   155,   161,
     181,   217,   267,   277,   306,   455,   351,    88,   116,   183,
     198,   255,   296,   306,   461,    16,    26,   112,   124,   157,
     203,   216,   464,   227,   482,     5,    66,    88,   138,   296,
     342,   351,   483,     5,   484,    57,   222,   236,   297,   500,
      64,    66,   180,   286,   519,    66,   201,   338,   343,   345,
     520,    39,   192,   228,   287,   349,   359,   361,   521,     5,
     296,   306,   351,   524,    70,   167,   240,   249,   525,     4,
     526,    88,   500,    61,   277,   300,   533,   192,   287,   349,
     534,    26,   112,   124,   203,   216,   536,    50,    99,   108,
     135,   289,   551,   552,     4,    37,    47,    74,   148,   184,
     228,   249,   284,   300,   375,     4,   124,   202,   553,   287,
     349,   555,    16,    23,   237,   239,   360,   556,   227,   560,
     287,   349,   561,     0,     5,    59,   349,   381,   264,     5,
       4,   287,   349,   382,     5,    32,   276,   383,   123,   349,
     384,   123,   349,   386,   349,     4,   191,   245,   390,   185,
     297,   340,   341,   349,   389,   351,   137,   174,   388,   195,
     349,    78,   170,   245,   349,   391,     5,   349,     4,   241,
     393,   349,   349,     5,   223,   396,    31,   397,     5,   398,
       5,   402,     5,    31,   403,   349,     9,    10,    11,   349,
     355,   356,   357,   358,   349,   349,    40,   111,   192,   349,
     405,   349,   192,   359,   361,   349,    35,   106,   127,   128,
     134,   152,   162,   364,   349,     4,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   117,    66,    53,    71,
      88,   100,   118,   122,   133,   172,   411,   118,   413,   185,
     191,   228,   252,   297,   340,   341,   349,   399,   414,   279,
     417,   167,   418,   167,   175,   420,    65,    66,    69,    91,
     167,   184,   204,   267,   335,   359,   422,   349,   361,   425,
      59,   283,   359,   426,   275,   359,   361,   427,    33,   428,
     359,   361,   429,     4,   359,   361,   430,    45,    59,    81,
     100,   117,   120,   145,   146,   197,   205,   264,   265,   335,
     434,   209,   299,   440,     5,    89,     6,    88,   120,   432,
       5,    65,   361,   431,    16,   500,    66,   180,   286,   441,
      66,   228,   442,   278,    61,   277,   300,   443,    21,   133,
     235,   262,   444,    37,    47,    74,   148,   184,   249,   300,
     445,   361,    89,    16,   194,   450,   359,   453,    72,   456,
      31,   457,    44,    87,   190,   458,   148,   214,   254,   292,
     459,   359,    18,    58,   115,   171,   283,   359,   460,     4,
     191,   463,     5,     4,     6,   120,   349,     4,     5,   241,
     465,     5,   467,     5,   117,   190,   241,   265,   468,    93,
     111,   185,   481,     5,   479,     5,   265,   480,     4,     5,
     351,   351,   349,   349,     5,     4,     5,    60,    66,    73,
      75,    80,    83,    89,    99,   105,   114,   129,   148,   163,
     172,   173,   193,   214,   228,   230,   243,   248,   254,   261,
     279,   292,   293,   295,   335,   485,     5,     4,   349,     5,
     349,    40,   111,   349,   523,   351,   349,   359,   361,   522,
     349,   364,   349,     4,   360,    54,    90,   139,   241,   527,
       4,     4,   349,     4,   148,   254,   528,     5,   359,     4,
      40,   111,   349,   535,   349,    97,    61,   120,   241,   268,
     537,   120,   550,    61,   117,   120,   155,   190,   238,   241,
     265,   268,   278,   539,   540,    61,   120,   268,   549,     5,
       4,    34,   107,   201,   532,    66,   351,   376,    66,   351,
     377,    66,   351,   378,    13,   187,   531,   349,   349,   221,
     349,   379,   349,   265,     4,   349,   349,     4,   559,     4,
     281,   557,     4,   281,   558,     4,   364,   123,   349,   562,
     349,   349,     4,     5,   349,    12,   349,   349,   349,    30,
      94,   161,   245,   250,   363,   363,     4,   195,   349,   349,
       4,     4,     4,   349,   349,   349,   349,     4,     4,     5,
       5,   359,     5,   349,   349,   355,   357,   357,   359,   349,
     349,   349,   349,   349,   349,   349,   359,   361,   358,   349,
     349,   358,   349,     5,   264,   103,   185,   412,   191,   245,
     415,   167,    78,   170,   245,   416,   137,   174,   400,   400,
       4,   419,     4,   421,   191,   252,   423,   175,   424,   167,
     364,   349,   349,   359,   359,   364,   364,   364,   359,   364,
     349,   359,   437,     4,   361,   435,   194,     4,   164,   306,
     436,   194,   359,    79,   349,   439,     5,     5,     4,   194,
     349,     4,     5,    60,    66,   114,   129,   142,   148,   153,
     204,   223,   228,   230,   253,   254,   261,   279,   335,   494,
     361,   186,   186,    66,   446,    66,   447,    66,   448,   221,
     449,   349,     5,   222,   451,   360,   364,     5,   359,   359,
     359,   359,     4,   351,     4,     4,   194,   349,    14,    15,
      61,   188,   189,   258,   268,   269,   299,    87,     5,     5,
      14,    15,    61,   188,   189,   258,   268,   269,   273,   299,
      87,   155,   160,   360,   471,   475,    87,   155,     5,   469,
       4,     4,    14,    61,   188,   258,   268,   299,     5,     5,
       4,   349,   360,    20,    21,    22,    48,    49,    52,    55,
      62,    66,    74,    75,    82,    83,    99,   105,   109,   110,
     113,   129,   148,   170,   193,   221,   223,   229,   230,   243,
     244,   253,   254,   279,   281,   293,   295,   301,   335,    66,
      80,    89,    99,   129,   148,   193,   230,   254,   293,   295,
       4,    30,   159,   209,   235,   488,     5,    63,   104,   232,
     246,   247,   337,   338,   493,    99,   486,    17,    40,   111,
     192,   492,     4,     5,    17,   208,   288,   349,   254,   493,
     501,   124,   493,   502,    36,    40,   111,   131,   192,   287,
     349,   503,   359,   351,    91,    99,   105,   126,   148,   156,
     193,   201,   243,   254,   270,   506,    40,   111,   192,     5,
     280,    17,   208,   288,   510,   281,   351,   511,     5,    99,
     105,   296,    17,    17,     4,   349,   349,   349,   349,   349,
     364,   349,   349,   358,   349,     4,   364,     4,    40,   111,
     192,   259,   529,    40,   111,   192,   259,   530,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   540,    61,
     120,   155,   268,   544,    61,   120,   268,   548,    87,   155,
      61,   120,   268,   542,     4,    61,   120,   268,   541,     5,
       5,     4,     4,     5,     5,     5,   349,   349,   349,     4,
     349,   554,   349,   349,     6,   360,     4,     5,     4,     4,
       5,     4,    97,   256,   365,   349,   349,    12,     5,    12,
     349,   349,    12,     4,    12,     4,     4,   349,   349,   349,
       4,   351,     4,     4,   364,   359,   364,   349,   349,   349,
     359,   349,   358,   349,   349,     5,     5,   349,   361,   349,
     359,   349,   364,   364,   365,   365,   365,   364,   358,   349,
     364,   349,   132,   242,   352,   438,   164,     5,     4,   364,
       4,   359,   359,     4,     5,     4,     4,   349,   433,   349,
      20,    21,    22,    48,    49,    52,    59,    62,    66,    74,
      75,    82,   109,   110,   113,   129,   148,   170,   179,   221,
     223,   229,   230,   244,   254,   279,   281,   291,   301,   335,
      66,   129,   153,   230,   279,    30,   159,   209,   235,   495,
     349,   204,   349,   496,    17,   349,   253,   506,   253,   204,
     349,   497,   281,   498,    17,    98,   349,   349,     5,   365,
      56,   359,     4,     5,   462,   349,     5,     5,     5,   155,
     182,   369,   369,   163,   260,   367,     4,     4,     5,     5,
     466,   266,   266,     5,     5,     5,    17,   157,   368,   368,
     367,     4,     4,   367,     5,     5,   470,   160,   334,   360,
     474,     5,   473,     5,     5,   477,     5,   478,     5,    14,
      15,    61,   188,   189,   258,   268,   269,   273,   299,     4,
       4,     5,     5,   369,   367,     4,     5,     5,   364,    82,
     150,   219,   220,   234,   274,   372,     7,     8,   349,   354,
     235,   121,   235,   235,   105,    40,    66,    99,   105,   111,
     129,   148,   163,   193,   230,   243,   254,   281,   293,   295,
     296,   335,   487,   121,   235,     5,    27,   165,   235,   277,
     137,   105,    22,    49,    52,    82,   110,   113,   223,   253,
      22,    49,    52,    55,    82,   110,   113,   223,   253,   279,
      40,   121,   235,   235,   105,     5,   208,    27,   221,    36,
     131,   287,   349,   257,   264,   121,   239,   359,   506,    40,
     130,   221,   277,   239,   208,     5,     5,   243,    27,   221,
       4,     5,     5,   208,    36,   131,   287,   349,   506,   208,
     351,     4,     4,   349,     5,   299,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   109,   110,
     113,   170,   223,   229,   244,   253,   280,   281,   301,   345,
     489,   349,   349,   349,   349,   349,   493,   359,     5,     4,
       5,   349,   349,   359,   349,   351,   349,   349,   493,     5,
     349,   349,   351,     5,    17,     5,     5,   349,   349,   358,
     349,   349,     4,   349,   349,   111,   349,   349,   111,     4,
      42,    43,   168,   169,   196,   374,   374,    61,   120,   268,
     538,   374,     5,    61,   120,   268,   543,     5,     5,    61,
     120,   268,   545,     4,     5,     5,     4,    61,   120,   268,
     547,    61,   120,   268,   546,     5,     5,     4,     5,     5,
       4,   374,   374,   374,   349,   349,   349,     4,   359,   349,
     360,   364,     5,     5,    12,   349,   359,   361,   349,    12,
     349,   349,   349,    59,   349,     6,     4,   349,   349,    46,
     267,   401,     5,   351,   351,   364,   349,     4,     4,     4,
     364,   359,   349,   349,   349,   349,   364,   359,   365,   358,
     349,     4,   365,   349,    38,    38,     4,   361,     5,    24,
      25,    97,   366,   359,   364,   364,   349,     4,   349,     5,
      82,   150,   219,   220,   234,   274,   359,   361,   235,   121,
     235,   235,    21,   235,   359,   121,   235,    27,   165,   235,
     277,   137,    21,   235,   121,   235,   235,    21,   235,    27,
     166,   221,   166,   257,   264,   121,   166,   221,   285,   506,
     130,   166,   221,   277,     4,   243,    27,   166,   221,   506,
     204,   349,   349,   349,   349,   349,   349,   194,   349,   349,
      20,   231,   454,     4,     4,   349,   369,   369,   369,     4,
     369,   369,   369,    14,    15,    61,   188,   189,   258,   268,
     269,   299,   368,   369,   369,   369,   369,   369,     4,   369,
     369,     4,   368,    14,    15,    61,   188,   189,   258,   268,
     269,   299,     5,   472,     5,   476,     5,     5,    14,    15,
      61,   188,   189,   258,   268,   269,   273,   299,     5,    14,
      15,    61,   188,   189,   258,   268,   269,   273,   299,     5,
      14,    15,    61,   188,   189,   258,   268,   269,   273,   299,
      14,    15,    61,   188,   189,   258,   268,   269,   299,   266,
       5,     5,     5,   368,   368,   367,     4,     4,   367,     5,
       4,     4,   369,   369,     4,   369,   369,     5,   351,   359,
     361,     5,   349,   351,   349,     5,   349,     5,   354,   105,
     193,   243,   105,   193,   243,     5,   351,   349,   351,     5,
     349,   359,   351,     5,   354,   235,   235,    21,   235,    21,
     235,   235,    21,   235,   303,   303,     4,     4,     4,   487,
       4,     4,     4,   303,   303,     4,     5,     4,   351,   349,
       5,   349,     5,   354,   351,   359,   359,   349,    27,    48,
      51,    62,    85,   102,   345,   370,     4,   351,   349,   364,
     351,     5,   359,   359,   349,   351,   351,   359,   359,   349,
     351,   349,     5,   349,   221,   221,   349,   349,   221,   349,
     221,   349,   349,   499,   507,   349,   221,   221,   349,   349,
     349,   349,   349,   349,   349,   349,     5,   299,   349,   490,
     349,   349,   221,   349,   349,   349,   349,   359,   364,     5,
     359,   359,   349,   349,   364,   349,   349,   349,   359,   349,
     349,     5,     4,   349,   349,   349,   349,     5,     5,     4,
     374,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   349,   349,   349,   364,
     349,   364,   349,   359,   361,   349,   364,   349,   349,   349,
     349,   349,     5,   349,     4,     6,   349,   349,     4,   359,
     349,   364,   175,   362,   349,   362,   365,   364,   359,   349,
     349,     4,   349,   364,   349,     4,   359,     5,     5,     5,
       5,   359,   364,   359,   359,   359,   359,   361,   359,   364,
     359,   359,   359,   361,   359,   359,   359,   359,   361,   359,
     359,   359,   349,   359,   359,   359,   359,   359,   359,   359,
     349,   349,     4,   349,     5,     4,   349,   369,     5,     5,
       5,   367,     4,     4,     5,   369,   368,     4,   369,     5,
       5,     5,   368,   368,   367,     4,     4,     5,    14,    15,
      61,   188,   189,   258,   268,   269,   299,    14,    15,    61,
     188,   189,   258,   268,   269,   299,    14,    15,    61,   188,
     189,   258,   268,   269,   299,   266,     5,     5,     5,   368,
     368,   367,     4,     4,   367,     5,   266,     5,     5,     5,
     368,   368,   367,     4,     4,   367,     5,   266,     5,     5,
       5,   368,   368,   367,     4,     4,   367,     5,     5,     5,
       5,   368,   368,   367,     4,     4,     5,   368,     4,     4,
     368,     4,     4,   369,     5,   364,   359,   349,   349,   359,
     349,     5,   354,     5,   359,   351,     5,   359,   364,     5,
     354,   349,   349,   349,   349,   349,   349,   349,   349,   349,
       4,     4,     5,     4,     4,   349,   359,   349,     5,   354,
     351,   364,   364,   349,   358,   364,   364,   349,   364,   364,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
      55,    66,    92,   129,   279,   281,   335,   504,   505,   506,
     517,   518,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   359,     5,   349,   349,   349,   349,
       4,     4,   364,   365,     4,   491,   364,   364,   358,   349,
       4,   364,     4,   374,   374,   374,   354,   349,   349,   349,
     364,   349,   358,   349,   349,    12,     5,     5,     4,   349,
     349,     4,   364,   359,   349,   349,   365,   366,   349,     5,
     349,   361,     5,     5,     5,     5,   364,   366,   366,   366,
     364,   366,   365,   366,   366,   364,   366,   366,   366,   364,
     366,   366,   364,   359,   366,   364,   366,   366,   364,   366,
     364,     4,   361,     5,   349,     4,   369,   368,     4,   368,
       5,     5,     5,   368,   368,   367,     4,     4,     5,     5,
       5,     5,   368,   368,   367,     4,     4,     5,     5,     5,
       5,   368,   368,   367,     4,     4,     5,   368,   369,   369,
     369,   369,   369,     4,   369,   369,     4,   368,   368,   369,
     369,   369,   369,   369,     4,   369,   369,     4,   368,   368,
       4,     4,   368,     4,   368,   368,     4,     4,     4,   360,
     366,     4,   359,   366,   349,   359,     4,   366,   366,   359,
       4,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   359,   366,   349,   359,     4,   358,   358,   359,
     358,   358,   359,   359,   358,   358,   349,   349,   349,   349,
     349,   349,   354,   349,   349,   349,   346,   346,   346,   346,
     346,   346,   346,   505,   346,   354,   349,   349,   349,   349,
     354,   349,   349,   349,   349,   349,   349,   364,   349,   299,
     353,   354,   349,   349,   365,   351,     4,     4,   365,     4,
     349,   358,   349,    59,   349,     5,     5,   349,     4,   362,
     366,     5,     4,     4,     5,   359,     5,   365,   366,   365,
     365,   365,     5,     4,   349,   369,   368,   369,   369,   369,
     369,   369,     4,   369,   369,   368,     4,   368,   369,   369,
     369,   369,   369,     4,   369,   369,   368,   369,   368,     4,
     369,   369,   368,     4,   369,   368,     4,   368,   368,   364,
     359,   366,     4,   364,   349,   364,   349,   349,   349,   366,
       4,   364,   349,   358,   366,   349,   358,   366,   366,   359,
     349,     4,   371,   371,   349,   349,   371,   354,   371,   507,
     359,   487,     5,     4,     5,     5,     5,     4,   351,   354,
     371,   371,   349,   349,   354,   349,   349,   349,   349,   349,
     358,   349,     5,   507,   349,   371,   351,   508,   509,     5,
     351,     4,     5,   349,     5,     4,     6,   349,    32,   276,
     408,     5,   364,   359,   408,   349,   368,   369,   368,   368,
     369,   369,   368,   369,   368,   368,   349,   366,   359,   359,
     349,   359,   349,   359,   359,   349,   359,   366,     4,   507,
     507,   353,   349,   507,     4,   507,   364,     5,     4,     4,
     507,   507,   353,   349,     4,   507,   507,   349,   359,   507,
     507,   507,   508,   514,   515,   506,   512,   513,     4,     5,
       5,     6,     4,   185,   297,   341,   349,   399,   359,    32,
     276,   373,     4,   369,   369,   369,   369,   360,   366,   366,
     349,   366,     4,   366,   366,   349,   366,   349,   507,   507,
       4,   349,   507,     5,   349,   507,     4,   349,   507,   364,
     514,   516,   517,   346,   513,     5,     5,     4,   349,   400,
     349,   400,   364,   366,     4,   359,   361,     4,   354,   353,
     349,   349,   353,   349,   359,   517,   351,     5,     5,   349,
     349,   349,   349,   373,     5,   359,   361,   364,   359,   361,
     507,   349,     4,   507,   349,   366,     5,     5,   349,     5,
     349,   364,   364,     4,   507,     4,     5,     5,     5,   353,
     353,   507,   507,   507
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
#line 451 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 453 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 7:
#line 454 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 9:
#line 456 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 16:
#line 463 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 21:
#line 468 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 22:
#line 469 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 471 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 31:
#line 478 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 35:
#line 482 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 485 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 490 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 492 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 494 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 496 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 503 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 504 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 507 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 508 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 509 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 510 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 511 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 512 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 513 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 514 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 515 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 516 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 517 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 518 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 521 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 69:
#line 523 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 70:
#line 524 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 525 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 526 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 528 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 74:
#line 529 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 530 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 531 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 534 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 78:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 80:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 81:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 82:
#line 541 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 83:
#line 542 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 84:
#line 545 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 85:
#line 546 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 547 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 550 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 88:
#line 553 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 556 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 560 "frame/parser.Y"
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

  case 91:
#line 572 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 92:
#line 579 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 586 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 94:
#line 593 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 95:
#line 594 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 96:
#line 595 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 97:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 98:
#line 597 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 99:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 100:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 101:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 102:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 103:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 104:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 105:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 106:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 107:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 108:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 109:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 110:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 111:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 112:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 113:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 114:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 115:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 116:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 117:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 118:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 119:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 120:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 121:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 122:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 123:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 124:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 125:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 126:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 127:
#line 630 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 128:
#line 631 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 129:
#line 634 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 130:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 131:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 132:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 133:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 134:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 135:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 136:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 137:
#line 644 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 138:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 140:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 141:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 142:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 143:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 144:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 146:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 147:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 148:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 149:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 150:
#line 661 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 151:
#line 662 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 152:
#line 663 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 153:
#line 666 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 154:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 155:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 156:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 157:
#line 672 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 158:
#line 673 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 159:
#line 674 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 160:
#line 677 "frame/parser.Y"
    {;}
    break;

  case 161:
#line 678 "frame/parser.Y"
    {;}
    break;

  case 162:
#line 679 "frame/parser.Y"
    {;}
    break;

  case 163:
#line 682 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 164:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 165:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 166:
#line 687 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 167:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 168:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 169:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 170:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 171:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 172:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 173:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 174:
#line 697 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 175:
#line 698 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 176:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 177:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 178:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 179:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 180:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 181:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 182:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 183:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 184:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 185:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 186:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 187:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 188:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 189:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 190:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 195:
#line 726 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 196:
#line 727 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 197:
#line 728 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 198:
#line 729 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 199:
#line 731 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 200:
#line 734 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 201:
#line 735 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 202:
#line 738 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 203:
#line 739 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 204:
#line 742 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 743 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 746 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 207:
#line 748 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 209:
#line 752 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 210:
#line 753 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 756 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 215:
#line 758 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 761 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 217:
#line 762 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 218:
#line 765 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 219:
#line 766 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 220:
#line 768 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 221:
#line 770 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 222:
#line 771 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 223:
#line 772 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 224:
#line 774 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 225:
#line 776 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 226:
#line 779 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 227:
#line 780 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 228:
#line 783 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 229:
#line 785 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 230:
#line 788 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 231:
#line 790 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 232:
#line 793 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 233:
#line 797 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 798 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 802 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 237:
#line 803 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 238:
#line 804 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 242:
#line 810 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 243:
#line 811 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 245:
#line 814 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 246:
#line 819 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 247:
#line 820 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 248:
#line 823 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 249:
#line 824 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 250:
#line 825 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 251:
#line 826 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 252:
#line 827 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 253:
#line 830 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 254:
#line 831 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 255:
#line 832 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 256:
#line 835 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 257:
#line 837 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 258:
#line 842 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 259:
#line 847 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 260:
#line 854 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 261:
#line 856 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 262:
#line 857 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 264:
#line 859 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 265:
#line 863 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 266:
#line 865 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 267:
#line 867 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 268:
#line 868 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 274:
#line 879 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 275:
#line 881 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 276:
#line 883 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 277:
#line 888 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 278:
#line 892 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 279:
#line 895 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 280:
#line 896 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 281:
#line 899 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 282:
#line 900 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 283:
#line 902 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 284:
#line 908 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 285:
#line 909 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 286:
#line 910 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 287:
#line 911 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 288:
#line 914 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 289:
#line 915 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 290:
#line 918 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 291:
#line 919 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 292:
#line 922 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 293:
#line 923 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 929 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 300:
#line 939 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 301:
#line 940 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 302:
#line 941 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 303:
#line 944 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 304:
#line 946 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 305:
#line 947 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 948 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 949 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 953 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 309:
#line 955 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 310:
#line 956 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 311:
#line 957 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 960 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 313:
#line 962 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 314:
#line 964 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 315:
#line 966 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 316:
#line 969 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 317:
#line 972 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 318:
#line 973 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 319:
#line 974 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 320:
#line 977 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 321:
#line 980 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 335:
#line 994 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 338:
#line 997 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 999 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 342:
#line 1002 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 343:
#line 1003 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 346:
#line 1006 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 347:
#line 1007 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 349:
#line 1010 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 351:
#line 1012 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 353:
#line 1014 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 355:
#line 1016 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 356:
#line 1018 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 357:
#line 1020 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1022 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 360:
#line 1025 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 361:
#line 1026 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 362:
#line 1027 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 363:
#line 1028 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 364:
#line 1029 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 365:
#line 1030 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 367:
#line 1032 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 368:
#line 1035 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 369:
#line 1036 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 370:
#line 1037 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 371:
#line 1040 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 372:
#line 1043 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 373:
#line 1045 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 374:
#line 1047 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 375:
#line 1048 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 376:
#line 1049 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 378:
#line 1051 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 380:
#line 1054 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 381:
#line 1060 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 382:
#line 1061 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 383:
#line 1064 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 384:
#line 1065 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 385:
#line 1066 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 386:
#line 1069 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 387:
#line 1070 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 389:
#line 1076 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 390:
#line 1078 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 391:
#line 1080 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 392:
#line 1083 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 394:
#line 1085 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 395:
#line 1089 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 396:
#line 1093 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 398:
#line 1095 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 399:
#line 1096 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 400:
#line 1097 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 401:
#line 1098 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 402:
#line 1099 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 404:
#line 1101 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 405:
#line 1102 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 406:
#line 1105 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 407:
#line 1106 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 408:
#line 1107 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 409:
#line 1110 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 410:
#line 1111 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 411:
#line 1115 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 412:
#line 1117 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 413:
#line 1125 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 414:
#line 1127 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 415:
#line 1129 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 416:
#line 1132 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 417:
#line 1134 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 418:
#line 1135 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 419:
#line 1138 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 420:
#line 1141 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1147 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 423:
#line 1149 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 424:
#line 1152 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 425:
#line 1156 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 426:
#line 1157 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 427:
#line 1159 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 428:
#line 1162 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1163 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 431:
#line 1167 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 432:
#line 1168 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 433:
#line 1169 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 434:
#line 1172 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 435:
#line 1174 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 436:
#line 1175 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 438:
#line 1177 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 442:
#line 1181 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 443:
#line 1182 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 444:
#line 1183 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 445:
#line 1185 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 447:
#line 1187 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 448:
#line 1190 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1192 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 450:
#line 1194 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1195 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 452:
#line 1196 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 453:
#line 1197 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1200 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 455:
#line 1204 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1206 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 457:
#line 1209 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 459:
#line 1214 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 460:
#line 1216 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 461:
#line 1218 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 463:
#line 1222 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 464:
#line 1223 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 465:
#line 1226 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 466:
#line 1227 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 467:
#line 1228 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 468:
#line 1231 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 469:
#line 1234 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 470:
#line 1235 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 471:
#line 1236 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 472:
#line 1239 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 473:
#line 1240 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 474:
#line 1241 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 475:
#line 1242 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 476:
#line 1243 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 477:
#line 1244 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 482:
#line 1251 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 483:
#line 1252 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 484:
#line 1253 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 485:
#line 1256 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 486:
#line 1257 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 487:
#line 1260 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 488:
#line 1261 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 489:
#line 1264 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 490:
#line 1265 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 491:
#line 1268 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 492:
#line 1269 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 493:
#line 1272 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 495:
#line 1274 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 496:
#line 1277 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 497:
#line 1278 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 499:
#line 1282 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 500:
#line 1286 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 502:
#line 1296 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 503:
#line 1297 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 504:
#line 1300 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 507:
#line 1303 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 508:
#line 1304 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 509:
#line 1305 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 510:
#line 1306 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 512:
#line 1308 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 513:
#line 1309 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 514:
#line 1310 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 516:
#line 1312 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 517:
#line 1313 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 518:
#line 1314 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 519:
#line 1315 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1319 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 522:
#line 1322 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 523:
#line 1323 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 524:
#line 1326 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 525:
#line 1327 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 526:
#line 1328 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 527:
#line 1329 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 528:
#line 1332 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 529:
#line 1333 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 530:
#line 1334 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 531:
#line 1335 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 532:
#line 1338 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1339 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1340 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1341 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1342 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 537:
#line 1343 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1346 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 539:
#line 1347 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 540:
#line 1348 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 543:
#line 1352 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 544:
#line 1353 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 545:
#line 1356 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 546:
#line 1359 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 547:
#line 1360 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1364 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 549:
#line 1366 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 550:
#line 1367 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1379 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 558:
#line 1381 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 559:
#line 1383 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 560:
#line 1384 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1386 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1388 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 563:
#line 1390 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1392 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1394 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1398 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 568:
#line 1399 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 569:
#line 1400 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 570:
#line 1401 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 571:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 572:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 573:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1410 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 577:
#line 1414 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1416 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1418 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1420 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1426 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 584:
#line 1428 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 585:
#line 1431 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 593:
#line 1443 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 594:
#line 1444 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1445 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1446 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1447 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 598:
#line 1448 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1450 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 600:
#line 1452 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 601:
#line 1453 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1454 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1455 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 604:
#line 1458 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1459 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1460 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1461 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 610:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 618:
#line 1478 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1481 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1484 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 621:
#line 1487 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 622:
#line 1490 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 623:
#line 1493 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 624:
#line 1496 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1499 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1502 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 627:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 632:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 634:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 635:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 639:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 647:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 654:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 655:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1601 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 664:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 667:
#line 1617 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1618 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1619 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1620 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 672:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 674:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 675:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1628 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 678:
#line 1632 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1633 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1634 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1635 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 684:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1645 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1647 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1648 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 690:
#line 1650 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1654 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1657 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 694:
#line 1658 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 695:
#line 1661 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 696:
#line 1662 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1663 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 698:
#line 1666 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 699:
#line 1673 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 700:
#line 1674 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 701:
#line 1675 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 702:
#line 1676 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 703:
#line 1677 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 704:
#line 1678 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 705:
#line 1679 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 706:
#line 1683 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 708:
#line 1691 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1692 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 710:
#line 1694 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 711:
#line 1696 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 712:
#line 1697 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 713:
#line 1698 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 715:
#line 1699 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 716:
#line 1700 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 717:
#line 1701 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 719:
#line 1703 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 720:
#line 1704 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1706 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 722:
#line 1708 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 723:
#line 1710 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 724:
#line 1713 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1715 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 726:
#line 1716 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 727:
#line 1718 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1721 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 729:
#line 1724 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1726 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1729 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 732:
#line 1732 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 733:
#line 1735 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 734:
#line 1738 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 735:
#line 1742 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 736:
#line 1746 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 737:
#line 1751 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 738:
#line 1755 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 739:
#line 1756 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1758 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1759 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1763 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 744:
#line 1765 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 746:
#line 1768 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1770 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1772 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 749:
#line 1775 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 750:
#line 1779 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 751:
#line 1783 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 752:
#line 1785 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 753:
#line 1787 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 754:
#line 1789 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 755:
#line 1791 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 756:
#line 1793 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 757:
#line 1795 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1797 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1799 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1801 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 761:
#line 1803 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 762:
#line 1805 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 763:
#line 1807 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1809 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1810 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1812 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1814 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 768:
#line 1815 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1816 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1818 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1820 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1821 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 773:
#line 1822 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1825 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1828 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1835 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1838 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 781:
#line 1842 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 782:
#line 1846 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 783:
#line 1851 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 784:
#line 1855 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 786:
#line 1857 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 787:
#line 1859 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1861 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 789:
#line 1865 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 790:
#line 1866 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 791:
#line 1867 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1869 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 793:
#line 1872 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 794:
#line 1875 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1878 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1879 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1881 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1884 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1888 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1890 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1891 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 802:
#line 1893 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 803:
#line 1896 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1899 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 805:
#line 1900 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1902 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1903 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 808:
#line 1904 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1906 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 810:
#line 1907 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1909 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1912 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 813:
#line 1915 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 814:
#line 1917 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 815:
#line 1918 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 819:
#line 1923 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 820:
#line 1924 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 823:
#line 1930 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 824:
#line 1931 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 825:
#line 1933 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1934 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1939 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1940 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 831:
#line 1941 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 832:
#line 1942 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 833:
#line 1943 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1944 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 835:
#line 1945 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 836:
#line 1946 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 837:
#line 1947 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 838:
#line 1948 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 839:
#line 1950 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 840:
#line 1952 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1953 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1954 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 843:
#line 1955 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1956 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1958 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1959 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1960 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 848:
#line 1961 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 849:
#line 1962 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1964 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 851:
#line 1965 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 852:
#line 1966 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 853:
#line 1967 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 854:
#line 1968 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 855:
#line 1969 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 856:
#line 1972 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 857:
#line 1973 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 858:
#line 1974 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 859:
#line 1975 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 860:
#line 1976 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 861:
#line 1977 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 862:
#line 1978 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 863:
#line 1979 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 864:
#line 1980 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 865:
#line 1981 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 866:
#line 1982 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 867:
#line 1983 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 868:
#line 1984 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 869:
#line 1985 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 870:
#line 1986 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 871:
#line 1987 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 872:
#line 1988 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 873:
#line 1989 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 874:
#line 1990 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 875:
#line 1991 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 876:
#line 1992 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 877:
#line 1995 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 878:
#line 1996 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 879:
#line 1997 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 880:
#line 1998 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 881:
#line 1999 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2001 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 883:
#line 2011 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 884:
#line 2019 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 885:
#line 2028 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 886:
#line 2036 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 887:
#line 2043 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 888:
#line 2050 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 889:
#line 2058 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 890:
#line 2066 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 891:
#line 2071 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2076 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2081 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2086 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2091 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2096 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2101 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2110 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2120 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2130 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2139 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2147 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2157 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2167 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2177 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2189 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2198 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2206 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 910:
#line 2208 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 911:
#line 2210 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 912:
#line 2215 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 913:
#line 2218 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 914:
#line 2222 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 915:
#line 2224 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2225 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 917:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 918:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 919:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 920:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 921:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 922:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 923:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 925:
#line 2238 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 926:
#line 2239 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 927:
#line 2240 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 928:
#line 2241 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 929:
#line 2242 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 930:
#line 2245 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2247 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 932:
#line 2249 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 933:
#line 2251 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 934:
#line 2253 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 935:
#line 2255 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 936:
#line 2257 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 937:
#line 2258 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 938:
#line 2259 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 939:
#line 2261 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2263 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 941:
#line 2265 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 942:
#line 2267 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 943:
#line 2269 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 944:
#line 2270 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 945:
#line 2271 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 946:
#line 2273 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 947:
#line 2275 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2278 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 949:
#line 2280 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 950:
#line 2282 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2283 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 952:
#line 2284 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 953:
#line 2285 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2287 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2288 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 956:
#line 2289 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2290 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 958:
#line 2291 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 959:
#line 2293 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2295 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2296 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2298 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2300 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2302 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2303 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 966:
#line 2305 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2307 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2308 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 969:
#line 2309 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2310 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2312 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2314 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 973:
#line 2317 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 974:
#line 2320 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2321 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2322 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2324 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 978:
#line 2327 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2330 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2331 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2332 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 982:
#line 2333 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2335 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2337 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2339 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2340 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2342 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2343 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 989:
#line 2344 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2345 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2346 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2348 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2350 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2352 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2354 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2356 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 998:
#line 2357 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 999:
#line 2359 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1000:
#line 2361 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1001:
#line 2362 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1002:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2365 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1006:
#line 2369 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1007:
#line 2370 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1008:
#line 2371 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1009:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2373 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1011:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1012:
#line 2376 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1013:
#line 2377 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1014:
#line 2379 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1015:
#line 2382 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1016:
#line 2383 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1017:
#line 2384 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1018:
#line 2385 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1019:
#line 2388 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1020:
#line 2389 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1021:
#line 2392 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1022:
#line 2393 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1023:
#line 2396 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1024:
#line 2397 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1025:
#line 2400 "frame/parser.Y"
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

  case 1026:
#line 2413 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1027:
#line 2414 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1028:
#line 2418 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1029:
#line 2419 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1031:
#line 2428 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1032:
#line 2433 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1033:
#line 2439 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1034:
#line 2441 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1035:
#line 2444 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2446 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1037:
#line 2449 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1038:
#line 2452 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1039:
#line 2453 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1040:
#line 2454 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1041:
#line 2455 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1042:
#line 2456 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1043:
#line 2457 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1044:
#line 2459 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1047:
#line 2466 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1048:
#line 2467 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1049:
#line 2468 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1050:
#line 2469 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1051:
#line 2470 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1052:
#line 2471 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1055:
#line 2476 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1056:
#line 2477 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1057:
#line 2478 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1058:
#line 2479 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1059:
#line 2480 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1060:
#line 2481 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1061:
#line 2482 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1062:
#line 2483 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1063:
#line 2484 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1064:
#line 2485 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1065:
#line 2486 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1068:
#line 2493 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1069:
#line 2494 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1071:
#line 2497 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1072:
#line 2498 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2499 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1074:
#line 2500 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2503 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1076:
#line 2504 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1079:
#line 2512 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2515 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1081:
#line 2516 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1085:
#line 2523 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1086:
#line 2526 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1087:
#line 2530 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1088:
#line 2531 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1089:
#line 2532 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1090:
#line 2533 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1091:
#line 2536 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1092:
#line 2537 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1093:
#line 2538 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1094:
#line 2539 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1095:
#line 2543 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1096:
#line 2544 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1097:
#line 2546 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1098:
#line 2551 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1100:
#line 2553 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2555 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1103:
#line 2558 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1104:
#line 2560 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1105:
#line 2565 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1106:
#line 2568 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2569 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1108:
#line 2570 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2573 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1110:
#line 2575 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1111:
#line 2579 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1113:
#line 2584 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1114:
#line 2585 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2586 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2587 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1117:
#line 2593 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1118:
#line 2594 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1119:
#line 2600 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1120:
#line 2601 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1121:
#line 2602 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1122:
#line 2603 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1125:
#line 2611 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2613 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1127:
#line 2614 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1128:
#line 2615 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1129:
#line 2619 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2620 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2621 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1132:
#line 2622 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1133:
#line 2625 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1134:
#line 2626 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1135:
#line 2629 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1136:
#line 2630 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1137:
#line 2631 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1138:
#line 2634 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1139:
#line 2635 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2636 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1141:
#line 2639 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1142:
#line 2640 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1144:
#line 2642 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1145:
#line 2643 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1146:
#line 2646 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1147:
#line 2647 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1148:
#line 2648 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1153:
#line 2655 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1154:
#line 2659 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2661 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1156:
#line 2663 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2668 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1159:
#line 2670 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2672 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2685 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1171:
#line 2686 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1172:
#line 2687 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2690 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2691 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2692 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2695 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2696 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1178:
#line 2697 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1179:
#line 2700 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2701 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2702 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2706 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2707 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2708 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2711 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2712 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2713 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1189:
#line 2716 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2717 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2718 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1192:
#line 2721 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2722 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2723 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2726 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2727 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2728 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2732 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2734 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2736 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2740 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1202:
#line 2744 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1203:
#line 2745 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1204:
#line 2748 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1205:
#line 2749 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1206:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1207:
#line 2751 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1208:
#line 2754 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1209:
#line 2756 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1210:
#line 2757 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1211:
#line 2759 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1213:
#line 2763 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1214:
#line 2765 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1215:
#line 2766 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1216:
#line 2772 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1217:
#line 2773 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1218:
#line 2777 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2779 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2784 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2785 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2786 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1226:
#line 2789 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2790 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2791 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1229:
#line 2794 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1230:
#line 2796 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1231:
#line 2801 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1232:
#line 2804 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1233:
#line 2811 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2813 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1235:
#line 2815 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1236:
#line 2820 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1238:
#line 2824 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1239:
#line 2825 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1240:
#line 2826 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2828 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1242:
#line 2830 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1243:
#line 2835 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10742 "frame/parser.C"
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


#line 2839 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

