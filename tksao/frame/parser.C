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
#define YYLAST   5600

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  347
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1243
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2751

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
     865,   869,   873,   877,   878,   882,   887,   892,   897,   901,
     905,   907,   911,   917,   922,   927,   931,   934,   935,   937,
     939,   943,   946,   949,   952,   955,   958,   961,   964,   967,
     970,   973,   976,   979,   982,   985,   987,   990,   993,   998,
    1008,  1011,  1014,  1017,  1019,  1023,  1026,  1029,  1031,  1034,
    1043,  1046,  1048,  1051,  1053,  1056,  1058,  1063,  1073,  1076,
    1078,  1080,  1082,  1084,  1087,  1089,  1091,  1094,  1096,  1097,
    1100,  1103,  1105,  1106,  1109,  1112,  1114,  1116,  1119,  1122,
    1125,  1127,  1129,  1131,  1133,  1135,  1137,  1138,  1140,  1143,
    1145,  1150,  1156,  1157,  1160,  1162,  1168,  1171,  1174,  1176,
    1178,  1180,  1183,  1185,  1188,  1190,  1192,  1193,  1195,  1197,
    1198,  1200,  1206,  1213,  1217,  1224,  1227,  1229,  1233,  1235,
    1237,  1239,  1243,  1250,  1258,  1264,  1266,  1268,  1273,  1279,
    1281,  1285,  1286,  1288,  1291,  1293,  1298,  1300,  1303,  1305,
    1308,  1312,  1315,  1317,  1320,  1322,  1327,  1330,  1332,  1334,
    1338,  1340,  1343,  1347,  1350,  1351,  1353,  1358,  1361,  1362,
    1366,  1370,  1375,  1376,  1378,  1380,  1382,  1384,  1386,  1388,
    1390,  1392,  1394,  1396,  1398,  1401,  1403,  1406,  1408,  1411,
    1414,  1417,  1420,  1422,  1424,  1426,  1427,  1429,  1430,  1432,
    1433,  1435,  1436,  1438,  1439,  1442,  1445,  1446,  1448,  1451,
    1453,  1460,  1466,  1468,  1470,  1472,  1475,  1478,  1480,  1482,
    1484,  1486,  1489,  1491,  1493,  1495,  1498,  1500,  1502,  1504,
    1507,  1510,  1513,  1514,  1516,  1517,  1519,  1521,  1523,  1525,
    1527,  1529,  1531,  1533,  1536,  1539,  1542,  1544,  1547,  1551,
    1553,  1556,  1559,  1564,  1571,  1573,  1584,  1586,  1589,  1593,
    1597,  1600,  1603,  1606,  1609,  1612,  1615,  1618,  1623,  1628,
    1633,  1637,  1641,  1647,  1652,  1657,  1662,  1666,  1670,  1674,
    1678,  1681,  1684,  1689,  1693,  1697,  1701,  1705,  1710,  1715,
    1720,  1725,  1731,  1736,  1743,  1751,  1756,  1761,  1767,  1770,
    1774,  1778,  1782,  1785,  1789,  1793,  1797,  1801,  1806,  1810,
    1816,  1823,  1827,  1831,  1836,  1840,  1844,  1848,  1852,  1856,
    1862,  1866,  1870,  1875,  1879,  1882,  1885,  1887,  1891,  1896,
    1901,  1906,  1911,  1916,  1923,  1928,  1933,  1939,  1944,  1949,
    1954,  1959,  1965,  1970,  1977,  1985,  1990,  1995,  2001,  2007,
    2013,  2019,  2025,  2031,  2039,  2045,  2051,  2058,  2064,  2070,
    2076,  2082,  2089,  2095,  2103,  2112,  2118,  2124,  2131,  2135,
    2139,  2143,  2147,  2151,  2157,  2161,  2165,  2170,  2174,  2178,
    2182,  2186,  2191,  2195,  2201,  2208,  2212,  2216,  2221,  2225,
    2229,  2233,  2237,  2241,  2247,  2251,  2255,  2260,  2265,  2270,
    2274,  2280,  2285,  2290,  2293,  2297,  2304,  2311,  2313,  2315,
    2317,  2320,  2323,  2326,  2330,  2334,  2337,  2350,  2353,  2356,
    2358,  2362,  2367,  2370,  2371,  2375,  2377,  2379,  2382,  2385,
    2388,  2391,  2394,  2399,  2404,  2409,  2413,  2418,  2424,  2433,
    2440,  2445,  2455,  2462,  2470,  2481,  2493,  2506,  2516,  2522,
    2527,  2534,  2538,  2544,  2550,  2557,  2563,  2568,  2578,  2589,
    2601,  2611,  2618,  2625,  2632,  2639,  2646,  2653,  2660,  2667,
    2674,  2682,  2690,  2693,  2698,  2703,  2708,  2713,  2719,  2724,
    2729,  2735,  2741,  2745,  2750,  2755,  2760,  2765,  2773,  2783,
    2790,  2801,  2813,  2826,  2836,  2840,  2843,  2847,  2853,  2861,
    2866,  2870,  2874,  2881,  2889,  2897,  2902,  2907,  2912,  2922,
    2927,  2931,  2936,  2944,  2952,  2955,  2959,  2963,  2967,  2972,
    2975,  2978,  2983,  2994,  2998,  3000,  3004,  3007,  3010,  3013,
    3016,  3020,  3026,  3031,  3037,  3040,  3048,  3052,  3055,  3058,
    3062,  3065,  3068,  3071,  3075,  3078,  3082,  3087,  3091,  3095,
    3102,  3107,  3110,  3114,  3117,  3120,  3125,  3129,  3133,  3136,
    3140,  3142,  3145,  3147,  3150,  3153,  3156,  3158,  3160,  3162,
    3164,  3167,  3169,  3172,  3175,  3177,  3180,  3183,  3185,  3188,
    3190,  3192,  3194,  3196,  3198,  3200,  3202,  3204,  3205,  3207,
    3210,  3213,  3216,  3220,  3226,  3234,  3242,  3249,  3256,  3263,
    3270,  3276,  3283,  3290,  3297,  3304,  3311,  3318,  3325,  3337,
    3345,  3353,  3361,  3371,  3381,  3392,  3405,  3418,  3421,  3424,
    3428,  3433,  3438,  3443,  3446,  3451,  3456,  3458,  3460,  3462,
    3464,  3466,  3468,  3470,  3472,  3475,  3477,  3479,  3481,  3485,
    3489,  3494,  3501,  3512,  3521,  3529,  3535,  3538,  3541,  3545,
    3550,  3556,  3560,  3566,  3572,  3576,  3581,  3587,  3593,  3599,
    3603,  3609,  3612,  3616,  3620,  3626,  3630,  3634,  3638,  3643,
    3649,  3655,  3659,  3665,  3671,  3675,  3680,  3686,  3692,  3695,
    3698,  3702,  3708,  3715,  3722,  3726,  3730,  3734,  3741,  3747,
    3753,  3756,  3760,  3764,  3770,  3777,  3781,  3784,  3787,  3791,
    3794,  3798,  3801,  3805,  3811,  3818,  3821,  3824,  3827,  3829,
    3834,  3839,  3841,  3844,  3847,  3850,  3853,  3856,  3859,  3862,
    3866,  3869,  3873,  3876,  3880,  3882,  3884,  3886,  3888,  3890,
    3891,  3894,  3895,  3898,  3899,  3901,  3902,  3903,  3905,  3907,
    3909,  3911,  3919,  3928,  3931,  3936,  3939,  3944,  3951,  3954,
    3956,  3958,  3962,  3966,  3968,  3973,  3976,  3978,  3982,  3986,
    3991,  3995,  3999,  4003,  4005,  4007,  4009,  4011,  4013,  4015,
    4017,  4019,  4021,  4023,  4025,  4027,  4029,  4031,  4034,  4035,
    4036,  4039,  4041,  4045,  4047,  4051,  4053,  4056,  4059,  4061,
    4065,  4066,  4067,  4070,  4073,  4075,  4079,  4085,  4087,  4090,
    4093,  4096,  4098,  4100,  4102,  4104,  4109,  4112,  4116,  4120,
    4123,  4127,  4130,  4133,  4136,  4140,  4144,  4148,  4151,  4155,
    4157,  4161,  4165,  4167,  4170,  4173,  4176,  4179,  4189,  4196,
    4198,  4200,  4202,  4204,  4207,  4210,  4214,  4218,  4220,  4223,
    4227,  4231,  4233,  4236,  4238,  4240,  4242,  4244,  4246,  4249,
    4252,  4257,  4259,  4262,  4265,  4268,  4272,  4274,  4276,  4278,
    4281,  4284,  4287,  4290,  4293,  4297,  4301,  4305,  4309,  4313,
    4317,  4321,  4323,  4326,  4329,  4332,  4336,  4339,  4343,  4347,
    4350,  4353,  4356,  4359,  4362,  4365,  4368,  4371,  4374,  4377,
    4380,  4383,  4386,  4389,  4393,  4397,  4401,  4404,  4407,  4410,
    4413,  4416,  4419,  4422,  4425,  4428,  4431,  4434,  4437,  4441,
    4445,  4449,  4454,  4461,  4463,  4465,  4467,  4469,  4471,  4472,
    4478,  4480,  4487,  4491,  4493,  4496,  4499,  4502,  4506,  4510,
    4513,  4516,  4519,  4522,  4525,  4528,  4532,  4535,  4538,  4542,
    4544,  4548,  4553,  4555,  4558,  4564,  4571,  4578,  4581,  4583,
    4586,  4589,  4595,  4602
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
     359,    -1,    40,   349,   349,     4,    -1,   192,   349,   349,
       4,    -1,   111,   349,   349,     4,    -1,   361,   349,   349,
      -1,   359,   364,   358,    -1,   351,    -1,   305,   349,   349,
      -1,    40,   192,   361,   349,   349,    -1,   192,   361,   349,
     349,    -1,    40,   192,   359,   358,    -1,   192,   359,   358,
      -1,    33,     4,    -1,    -1,    32,    -1,   276,    -1,   143,
     117,     5,    -1,    41,    66,    -1,    44,   411,    -1,    46,
     413,    -1,    65,   414,    -1,    68,   418,    -1,    67,   417,
      -1,    69,   420,    -1,    77,   422,    -1,    79,   425,    -1,
      84,   426,    -1,    86,   427,    -1,    88,   429,    -1,    87,
     428,    -1,    93,   430,    -1,    95,    -1,   124,   434,    -1,
     140,   440,    -1,   150,     5,     5,     4,    -1,   151,    89,
       5,     5,   349,   349,   361,     4,   408,    -1,   154,   432,
      -1,   158,   431,    -1,   160,    16,    -1,   185,    -1,   181,
     500,   494,    -1,   182,   441,    -1,   195,    66,    -1,   210,
      -1,   211,   442,    -1,   218,   278,   361,   349,   349,     4,
       4,     5,    -1,   241,   443,    -1,   243,    -1,   267,   444,
      -1,   282,    -1,   283,   445,    -1,   291,    -1,   298,   361,
     349,   349,    -1,   304,    89,     5,     5,   349,   349,   361,
       4,   408,    -1,   306,   450,    -1,   342,    -1,   100,    -1,
     118,    -1,   133,    -1,    53,   264,    -1,    88,    -1,   122,
      -1,    71,   412,    -1,   172,    -1,    -1,   185,     5,    -1,
     103,     5,    -1,   118,    -1,    -1,   399,   400,    -1,   349,
     400,    -1,   252,    -1,   191,    -1,   185,   415,    -1,   297,
     167,    -1,   341,   416,    -1,   228,    -1,   191,    -1,   245,
      -1,    78,    -1,   245,    -1,   170,    -1,    -1,   279,    -1,
     167,   419,    -1,     4,    -1,     4,   361,   349,   349,    -1,
       4,   349,   349,   362,   349,    -1,    -1,   167,   421,    -1,
     175,    -1,     4,   349,   349,   362,   349,    -1,   359,   364,
      -1,    65,   423,    -1,    66,    -1,    91,    -1,   167,    -1,
     204,   167,    -1,   184,    -1,    69,   424,    -1,   267,    -1,
     335,    -1,    -1,   191,    -1,   252,    -1,    -1,   175,    -1,
     349,   349,   359,   364,   365,    -1,   361,   349,   349,   359,
     364,   365,    -1,   359,   364,   365,    -1,    59,   359,   364,
     365,   359,   366,    -1,   283,   359,    -1,   361,    -1,   359,
     364,   365,    -1,   275,    -1,    33,    -1,   361,    -1,   359,
     364,   365,    -1,   359,   364,   358,   349,   349,     5,    -1,
       4,   359,   364,   358,   349,   349,     5,    -1,   361,   349,
     349,     4,     4,    -1,     5,    -1,    65,    -1,   361,   349,
     349,     5,    -1,     6,     4,     4,     4,     4,    -1,    88,
      -1,   120,   194,   433,    -1,    -1,     4,    -1,   349,   349,
      -1,   197,    -1,    59,   359,   364,   365,    -1,    81,    -1,
     100,   437,    -1,    45,    -1,   117,   435,    -1,   120,   194,
     438,    -1,   145,   436,    -1,   146,    -1,   205,   194,    -1,
     264,    -1,   264,   359,   364,   366,    -1,   265,   439,    -1,
     335,    -1,     4,    -1,   361,   349,   349,    -1,     4,    -1,
     164,     5,    -1,     4,   164,     5,    -1,   306,     4,    -1,
      -1,   352,    -1,   352,   361,   349,   349,    -1,   352,     4,
      -1,    -1,   349,   359,   364,    -1,    79,   359,   364,    -1,
      79,     4,   359,   364,    -1,    -1,   209,    -1,   299,    -1,
      66,    -1,   180,    -1,   286,    -1,   228,    -1,    61,    -1,
     277,    -1,   300,    -1,   133,    -1,   235,    -1,   235,   186,
      -1,   262,    -1,   262,   186,    -1,    21,    -1,   300,   449,
      -1,    47,   446,    -1,    74,   447,    -1,   148,   448,    -1,
     184,    -1,    37,    -1,   249,    -1,    -1,    66,    -1,    -1,
      66,    -1,    -1,    66,    -1,    -1,   221,    -1,    -1,    16,
     451,    -1,   194,   360,    -1,    -1,   222,    -1,    83,   453,
      -1,    99,    -1,   359,   364,   365,   454,     5,     5,    -1,
     359,   364,   365,   454,     5,    -1,    20,    -1,   231,    -1,
      19,    -1,    44,   456,    -1,    77,   457,    -1,    84,    -1,
      94,    -1,    95,    -1,   101,    -1,   124,   458,    -1,   140,
      -1,   154,    -1,   161,    -1,   181,   459,    -1,   217,    -1,
     155,    -1,   267,    -1,   277,   359,    -1,   306,   460,    -1,
      72,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,    87,
      -1,   190,    -1,   148,    -1,   254,    -1,   214,    -1,   292,
      -1,   359,    -1,   115,   359,    -1,    58,   359,    -1,   171,
     359,    -1,    18,    -1,   283,   359,    -1,   198,     4,     4,
      -1,   116,    -1,   183,     5,    -1,    88,   463,    -1,   255,
     120,   194,   462,    -1,   255,     6,     4,     4,     4,     4,
      -1,   296,    -1,   306,   349,   349,   349,   349,   349,   349,
     349,   349,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    56,    -1,     4,     4,   359,    -1,   191,   351,    -1,
      26,   465,    -1,   112,   467,    -1,   124,   468,    -1,   157,
     481,    -1,   203,   479,    -1,   216,   480,    -1,     5,    14,
       5,   369,    -1,     5,    15,     5,   369,    -1,     5,    61,
       5,   369,    -1,     5,   188,   369,    -1,     5,   189,   369,
      -1,     5,   258,   367,     4,   369,    -1,     5,   268,     4,
     369,    -1,     5,   269,     4,   369,    -1,     5,   299,     5,
     369,    -1,   241,    87,   466,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   188,
      -1,     5,   189,    -1,     5,   258,   367,     4,    -1,     5,
     268,     4,    -1,     5,   269,     4,    -1,     5,   299,     5,
      -1,     5,     5,   266,    -1,     5,    14,     5,   369,    -1,
       5,    15,     5,   369,    -1,     5,    61,     5,   369,    -1,
       5,   188,   368,   369,    -1,     5,     5,   266,   368,   369,
      -1,     5,   189,   368,   369,    -1,     5,   258,   367,     4,
     368,   369,    -1,     5,   273,   367,     4,     4,   368,   369,
      -1,     5,   268,     4,   369,    -1,     5,   269,     4,   369,
      -1,     5,   299,     5,   368,   369,    -1,   265,   469,    -1,
     117,    87,   470,    -1,   241,   155,   478,    -1,   241,    87,
     477,    -1,   190,   471,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   188,   368,
      -1,     5,     5,   266,   368,    -1,     5,   189,   368,    -1,
       5,   258,   367,     4,   368,    -1,     5,   273,   367,     4,
       4,   368,    -1,     5,   268,     4,    -1,     5,   269,     4,
      -1,     5,   299,     5,   368,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   188,
     368,    -1,     5,   189,   368,    -1,     5,   258,   367,     4,
     368,    -1,     5,   268,     4,    -1,     5,   269,     4,    -1,
       5,   299,     5,   368,    -1,   155,   160,   472,    -1,   160,
     473,    -1,   155,   474,    -1,   475,    -1,   155,   334,   476,
      -1,     5,    14,     5,   369,    -1,     5,    15,     5,   369,
      -1,     5,    61,     5,   369,    -1,     5,   188,   368,   369,
      -1,     5,   189,   368,   369,    -1,     5,   258,   367,     4,
     368,   369,    -1,     5,   268,     4,   369,    -1,     5,   269,
       4,   369,    -1,     5,   299,     5,   368,   369,    -1,     5,
      14,     5,   369,    -1,     5,    15,     5,   369,    -1,     5,
      61,     5,   369,    -1,     5,   188,   368,   369,    -1,     5,
       5,   266,   368,   369,    -1,     5,   189,   368,   369,    -1,
       5,   258,   367,     4,   368,   369,    -1,     5,   273,   367,
       4,     4,   368,   369,    -1,     5,   268,     4,   369,    -1,
       5,   269,     4,   369,    -1,     5,   299,     5,   368,   369,
      -1,   360,     5,    14,     5,   369,    -1,   360,     5,    15,
       5,   369,    -1,   360,     5,    61,     5,   369,    -1,   360,
       5,   188,   368,   369,    -1,   360,     5,   189,   368,   369,
      -1,   360,     5,   258,   367,     4,   368,   369,    -1,   360,
       5,   268,     4,   369,    -1,   360,     5,   269,     4,   369,
      -1,   360,     5,   299,     5,   368,   369,    -1,   360,     5,
      14,     5,   369,    -1,   360,     5,    15,     5,   369,    -1,
     360,     5,    61,     5,   369,    -1,   360,     5,   188,   368,
     369,    -1,   360,     5,     5,   266,   368,   369,    -1,   360,
       5,   189,   368,   369,    -1,   360,     5,   258,   367,     4,
     368,   369,    -1,   360,     5,   273,   367,     4,     4,   368,
     369,    -1,   360,     5,   268,     4,   369,    -1,   360,     5,
     269,     4,   369,    -1,   360,     5,   299,     5,   368,   369,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   188,   368,    -1,     5,   189,   368,
      -1,     5,   258,   367,     4,   368,    -1,     5,   268,     4,
      -1,     5,   269,     4,    -1,     5,   299,     5,   368,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   188,   368,    -1,     5,     5,   266,   368,
      -1,     5,   189,   368,    -1,     5,   258,   367,     4,   368,
      -1,     5,   273,   367,     4,     4,   368,    -1,     5,   268,
       4,    -1,     5,   269,     4,    -1,     5,   299,     5,   368,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   188,   368,    -1,     5,   189,   368,
      -1,     5,   258,   367,     4,   368,    -1,     5,   268,     4,
      -1,     5,   269,     4,    -1,     5,   299,     5,   368,    -1,
       5,    14,     5,   369,    -1,     5,    61,     5,   369,    -1,
       5,   188,   369,    -1,     5,   258,   367,     4,   369,    -1,
       5,   268,     4,   369,    -1,     5,   299,     5,   369,    -1,
       5,     5,    -1,   265,     5,     5,    -1,    93,     4,     4,
       4,     4,     4,    -1,   185,     4,     4,     4,     4,     4,
      -1,   111,    -1,   227,    -1,   351,    -1,   138,   351,    -1,
      88,   351,    -1,    66,     5,    -1,     5,     4,     4,    -1,
     296,   349,   349,    -1,   342,   349,    -1,     5,     5,   360,
     364,     5,     5,   360,   364,   349,   360,   366,     5,    -1,
      60,   488,    -1,    66,     5,    -1,    80,    -1,    73,   493,
       5,    -1,    73,   493,   299,     5,    -1,    75,    99,    -1,
      -1,    83,   486,   489,    -1,    89,    -1,    99,    -1,    99,
      17,    -1,   105,   492,    -1,   114,     4,    -1,   129,     5,
      -1,   148,    17,    -1,   148,   208,   349,   349,    -1,   148,
     288,   349,   349,    -1,     4,    20,   372,   351,    -1,     4,
      21,   354,    -1,     4,    21,   354,   361,    -1,     4,    21,
     354,   359,   364,    -1,     4,    22,   235,   349,   349,     4,
     359,   366,    -1,     4,    22,   235,     5,   359,   366,    -1,
       4,    48,   121,   351,    -1,     4,    49,   235,   349,   349,
     349,     4,   359,   366,    -1,     4,    49,   235,     5,   359,
     366,    -1,     4,    48,   235,   349,   349,   359,   366,    -1,
       4,    52,   105,   354,   354,     4,   349,   349,   349,     4,
      -1,     4,    52,   105,   354,   354,     4,   349,   349,   349,
       4,   361,    -1,     4,    52,   105,   354,   354,     4,   349,
     349,   349,     4,   359,   364,    -1,     4,    52,   105,     5,
       5,   359,   364,   359,   366,    -1,     4,    55,   487,     5,
       5,    -1,     4,    62,   121,   351,    -1,     4,    62,   235,
     349,   359,   366,    -1,     4,    66,     5,    -1,     4,    74,
      27,   351,   351,    -1,     4,    74,   165,     5,     5,    -1,
       4,    74,   235,   349,   359,   366,    -1,     4,    74,   277,
     359,   364,    -1,     4,    75,   137,   351,    -1,     4,    82,
     105,   354,   354,     4,   349,   349,     4,    -1,     4,    82,
     105,   354,   354,     4,   349,   349,     4,   361,    -1,     4,
      82,   105,   354,   354,     4,   349,   349,     4,   359,   364,
      -1,     4,    82,   105,     5,     5,   359,   364,   359,   366,
      -1,     4,    83,    22,   235,   349,   349,    -1,     4,    83,
      49,   235,   349,   349,    -1,     4,    83,    52,    21,   349,
     349,    -1,     4,    83,    52,   235,   349,   349,    -1,     4,
      83,   110,   235,   349,   349,    -1,     4,    83,   113,    21,
     349,   349,    -1,     4,    83,   113,   235,   349,   349,    -1,
       4,    83,    82,    21,   349,   349,    -1,     4,    83,    82,
     235,   349,   349,    -1,     4,    83,   223,   303,     4,   349,
     349,    -1,     4,    83,   253,   303,     4,   349,   349,    -1,
       4,    99,    -1,     4,    99,    22,     4,    -1,     4,    99,
      49,     4,    -1,     4,    99,    52,     4,    -1,     4,    99,
     110,     4,    -1,     4,    99,    55,   487,     5,    -1,     4,
      99,   113,     4,    -1,     4,    99,    82,     4,    -1,     4,
      99,   223,   303,     4,    -1,     4,    99,   253,   303,     4,
      -1,     4,    99,   279,    -1,     4,    99,   279,     5,    -1,
       4,    99,   279,     4,    -1,     4,   105,    40,     4,    -1,
       4,   109,   121,   351,    -1,     4,   109,   235,   349,   349,
     359,   366,    -1,     4,   110,   235,   349,   349,   349,     4,
     359,   366,    -1,     4,   110,   235,     5,   359,   366,    -1,
       4,   113,   105,   354,   354,     4,   349,   349,   349,     4,
      -1,     4,   113,   105,   354,   354,     4,   349,   349,   349,
       4,   361,    -1,     4,   113,   105,   354,   354,     4,   349,
     349,   349,     4,   359,   364,    -1,     4,   113,   105,     5,
       5,   359,   364,   359,   366,    -1,     4,   129,     5,    -1,
       4,   148,    -1,     4,   148,   208,    -1,     4,   170,    27,
     351,   351,    -1,     4,   170,   221,   359,   364,   358,   358,
      -1,     4,   193,   349,   349,    -1,     4,   193,   131,    -1,
       4,   193,    36,    -1,     4,   193,   287,   359,   364,   358,
      -1,     4,   223,   239,   349,   349,   359,   366,    -1,     4,
     253,   239,   349,   349,   359,   366,    -1,     4,   221,   257,
     370,    -1,     4,   221,   264,     4,    -1,     4,   223,   121,
     351,    -1,     4,   229,   359,   364,   358,   358,   349,   359,
     366,    -1,     4,   230,   506,   351,    -1,     4,   243,    40,
      -1,     4,   244,   130,     5,    -1,     4,   244,   221,   359,
     364,   358,   358,    -1,     4,   244,   277,   359,   364,   359,
     366,    -1,     4,   254,    -1,     4,   254,   208,    -1,     4,
     279,     5,    -1,     4,   281,     5,    -1,     4,   281,   243,
     351,    -1,     4,   293,    -1,     4,   295,    -1,     4,   301,
      27,   351,    -1,     4,   301,   221,   359,   364,   358,   359,
     366,   349,   354,    -1,     4,   335,     4,    -1,   163,    -1,
     163,   349,   349,    -1,   172,   501,    -1,   173,   502,    -1,
     193,   503,    -1,   228,   351,    -1,   230,   506,   351,    -1,
     230,   506,   351,   349,   349,    -1,   243,    40,   349,   349,
      -1,   243,   192,   349,   349,     4,    -1,   243,   111,    -1,
     248,     5,   493,   359,   364,   365,   351,    -1,   248,   280,
       5,    -1,   254,   510,    -1,   261,   511,    -1,     5,    66,
       5,    -1,     5,    80,    -1,     5,    99,    -1,     5,    89,
      -1,     5,   129,     5,    -1,     5,   148,    -1,     5,   148,
     208,    -1,     5,   193,   349,   349,    -1,     5,   193,   131,
      -1,     5,   193,    36,    -1,     5,   193,   287,   359,   364,
     358,    -1,     5,   230,   506,   351,    -1,     5,   254,    -1,
       5,   254,   208,    -1,     5,   293,    -1,     5,   295,    -1,
     279,   105,     5,     5,    -1,   279,    99,     5,    -1,   279,
      99,    17,    -1,   279,     5,    -1,   279,   296,     5,    -1,
     214,    -1,   214,   359,    -1,   292,    -1,   293,    17,    -1,
     295,    17,    -1,   335,     4,    -1,   254,    -1,   295,    -1,
     148,    -1,   293,    -1,    40,   193,    -1,   193,    -1,   111,
     193,    -1,    40,   105,    -1,   105,    -1,   111,   105,    -1,
      40,   243,    -1,   243,    -1,   111,   243,    -1,    99,    -1,
     281,    -1,    66,    -1,   335,    -1,   230,    -1,   129,    -1,
     163,    -1,   296,    -1,    -1,     4,    -1,    30,   351,    -1,
     235,   349,    -1,   159,     4,    -1,   209,     4,   349,    -1,
      62,   349,   349,   349,   507,    -1,   109,   349,   349,   349,
     349,   353,   507,    -1,    48,   349,   349,   349,   349,   353,
     507,    -1,   223,   349,   349,   349,   349,   507,    -1,   253,
     349,   349,   349,   349,   507,    -1,   170,   349,   349,   349,
     349,   507,    -1,   301,   349,   349,   349,   349,   507,    -1,
     281,   349,   349,   353,   507,    -1,    62,   221,   349,   349,
     371,   507,    -1,    48,   221,   349,   349,   371,   507,    -1,
     102,   221,   349,   349,   371,   507,    -1,    85,   221,   349,
     349,   371,   507,    -1,   345,   221,   349,   349,   371,   507,
      -1,    27,   221,   349,   349,   371,   507,    -1,    51,   221,
     349,   349,   371,   507,    -1,   244,   349,   349,   349,   349,
     359,   364,   359,   366,     5,   507,    -1,    74,   349,   349,
     349,   359,   364,   507,    -1,   229,   349,   349,   349,   349,
     349,   507,    -1,    22,   349,   349,   349,   349,     4,   507,
      -1,   110,   349,   349,   349,   349,   349,     4,   353,   507,
      -1,    49,   349,   349,   349,   349,   349,     4,   353,   507,
      -1,    82,   349,   349,   354,   354,     4,   349,   349,     4,
     507,    -1,   113,   349,   349,   354,   354,     4,   349,   349,
     349,     4,   353,   507,    -1,    52,   349,   349,   354,   354,
       4,   349,   349,   349,     4,   353,   507,    -1,    75,   507,
      -1,   280,   490,    -1,     5,   349,   349,    -1,   299,     5,
     349,   349,    -1,   349,   349,   299,     5,    -1,     5,   359,
     364,   358,    -1,     4,     4,    -1,    40,   349,   349,     4,
      -1,   192,   349,   349,     4,    -1,   111,    -1,   104,    -1,
     337,    -1,    63,    -1,   247,    -1,   246,    -1,   232,    -1,
     338,    -1,    60,   495,    -1,    66,    -1,   129,    -1,   114,
      -1,   142,   349,   349,    -1,   153,   349,   349,    -1,     4,
      20,    82,   359,    -1,     4,    20,   150,     5,     5,     4,
      -1,     4,    20,   219,     5,     5,     5,     5,   359,   364,
     373,    -1,     4,    20,   220,     5,     5,   359,   364,   373,
      -1,     4,    20,   234,     5,     5,     5,   359,    -1,     4,
      20,   274,   359,   364,    -1,   153,    17,    -1,     4,    21,
      -1,     4,    21,   361,    -1,     4,    21,   359,   364,    -1,
       4,    22,   235,   359,   366,    -1,     4,    48,   121,    -1,
       4,    49,   235,   359,   366,    -1,     4,    48,   235,   359,
     366,    -1,     4,    52,    21,    -1,     4,    52,    21,   361,
      -1,     4,    52,    21,   359,   364,    -1,     4,    52,   235,
     359,   366,    -1,     4,    59,   359,   364,   365,    -1,     4,
      62,   121,    -1,     4,    62,   235,   359,   366,    -1,     4,
      66,    -1,     4,    74,    27,    -1,     4,    74,   165,    -1,
       4,    74,   235,   359,   366,    -1,     4,    74,   277,    -1,
       4,    75,   137,    -1,     4,    82,    21,    -1,     4,    82,
      21,   361,    -1,     4,    82,    21,   359,   364,    -1,     4,
      82,   235,   359,   366,    -1,     4,   109,   121,    -1,     4,
     109,   235,   359,   366,    -1,     4,   110,   235,   359,   366,
      -1,     4,   113,    21,    -1,     4,   113,    21,   361,    -1,
       4,   113,    21,   359,   364,    -1,     4,   113,   235,   359,
     366,    -1,     4,   129,    -1,     4,   148,    -1,     4,   170,
      27,    -1,     4,   170,   166,   359,   366,    -1,     4,   170,
     221,   359,   364,   365,    -1,     4,   179,   166,   349,   359,
     366,    -1,     4,   223,   121,    -1,     4,   221,   257,    -1,
       4,   221,   264,    -1,     4,   229,   221,   359,   364,   365,
      -1,     4,   229,   166,   359,   366,    -1,     4,   229,   285,
     359,   366,    -1,     4,   230,    -1,     4,   230,   506,    -1,
       4,   244,   130,    -1,     4,   244,   166,   359,   366,    -1,
       4,   244,   221,   359,   364,   365,    -1,     4,   244,   277,
      -1,     4,   254,    -1,     4,   279,    -1,     4,   279,     4,
      -1,     4,   281,    -1,     4,   281,   243,    -1,     4,   291,
      -1,     4,   301,    27,    -1,     4,   301,   166,   359,   366,
      -1,     4,   301,   221,   359,   364,   365,    -1,     4,   335,
      -1,   148,   496,    -1,   148,   204,    -1,   204,    -1,   223,
     253,   349,   349,    -1,   253,   253,   349,   349,    -1,   228,
      -1,   230,   506,    -1,   254,   497,    -1,   254,   204,    -1,
     261,   498,    -1,     5,    66,    -1,     5,   129,    -1,     5,
     153,    -1,     5,   230,   506,    -1,     5,   279,    -1,     5,
     279,   204,    -1,   279,    17,    -1,   279,    98,   194,    -1,
     335,    -1,    30,    -1,   235,    -1,   159,    -1,   209,    -1,
      -1,   349,   349,    -1,    -1,   349,   349,    -1,    -1,   281,
      -1,    -1,    -1,   222,    -1,   236,    -1,   297,    -1,    57,
      -1,   493,   359,   364,   365,   351,   508,   514,    -1,   254,
     493,   359,   364,   365,   351,   508,   514,    -1,   493,     5,
      -1,   493,     5,   359,   364,    -1,   493,     4,    -1,   493,
       4,   359,   364,    -1,   124,     5,     5,   491,     4,     5,
      -1,   349,   349,    -1,   131,    -1,    36,    -1,    40,   349,
     349,    -1,   192,   349,   349,    -1,   111,    -1,   287,   359,
     364,   358,    -1,   504,   505,    -1,   505,    -1,   506,   346,
     351,    -1,    66,   346,     5,    -1,    92,   346,     4,     4,
      -1,   335,   346,     4,    -1,   129,   346,     5,    -1,   281,
     346,     5,    -1,   517,    -1,   518,    -1,   201,    -1,   254,
      -1,   148,    -1,    91,    -1,   126,    -1,   105,    -1,   193,
      -1,   243,    -1,    99,    -1,   156,    -1,   270,    -1,   499,
      -1,   499,   504,    -1,    -1,    -1,   509,   512,    -1,    17,
      -1,   208,   349,   349,    -1,   288,    -1,   288,   349,   349,
      -1,   351,    -1,   281,   351,    -1,   512,   513,    -1,   513,
      -1,   506,   346,   351,    -1,    -1,    -1,   515,   516,    -1,
     516,   517,    -1,   517,    -1,   279,   346,     5,    -1,    55,
     346,   487,     5,     5,    -1,    64,    -1,    66,     5,    -1,
     180,     4,    -1,   286,   349,    -1,   345,    -1,   343,    -1,
     338,    -1,   201,    -1,   349,   349,   349,   349,    -1,   349,
     349,    -1,   361,   349,   349,    -1,   359,   364,   358,    -1,
     287,   522,    -1,    39,   349,   349,    -1,   192,   523,    -1,
     228,   351,    -1,   349,   349,    -1,   361,   349,   349,    -1,
     359,   364,   358,    -1,    40,   349,   349,    -1,   349,   349,
      -1,   111,   349,   349,    -1,   351,    -1,   306,   360,   364,
      -1,     5,     4,     4,    -1,   296,    -1,    70,   527,    -1,
     167,     4,    -1,   240,     4,    -1,   249,   349,    -1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    -1,     4,
       4,     4,     4,     4,     4,    -1,    54,    -1,   139,    -1,
     241,    -1,    90,    -1,   148,   529,    -1,   254,   530,    -1,
      40,   349,   349,    -1,   192,   349,   349,    -1,   111,    -1,
     259,   111,    -1,    40,   349,   349,    -1,   192,   349,   349,
      -1,   111,    -1,   259,   111,    -1,   187,    -1,    13,    -1,
     201,    -1,    34,    -1,   107,    -1,    61,     5,    -1,   277,
     359,    -1,   300,     4,     4,     4,    -1,   349,    -1,   349,
      97,    -1,   192,   535,    -1,   287,   349,    -1,   287,   349,
      97,    -1,    40,    -1,   349,    -1,   111,    -1,    26,   537,
      -1,   124,   539,    -1,   203,   549,    -1,   112,   550,    -1,
     216,     5,    -1,   120,     5,   374,    -1,    61,     5,   374,
      -1,   268,     4,   374,    -1,   241,    87,   538,    -1,   120,
       5,   374,    -1,    61,     5,   374,    -1,   268,     4,   374,
      -1,   540,    -1,   155,   540,    -1,   278,   541,    -1,   265,
     542,    -1,   117,    87,   543,    -1,   190,   544,    -1,   241,
     155,   546,    -1,   241,    87,   547,    -1,   238,   548,    -1,
     120,     5,    -1,    61,     5,    -1,   268,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   268,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   268,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   268,     4,    -1,   155,   545,    -1,   120,
       5,     4,    -1,    61,     5,     4,    -1,   268,     4,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   268,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   268,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   268,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   268,     4,    -1,   120,     5,   374,
      -1,    61,     5,   374,    -1,   268,     4,   374,    -1,   120,
       5,     5,   374,    -1,   552,     4,     4,   349,   349,   354,
      -1,    99,    -1,    50,    -1,   289,    -1,   135,    -1,   108,
      -1,    -1,     4,   349,   349,   349,   349,    -1,   202,    -1,
     202,     4,   349,   349,   349,   349,    -1,   124,   265,   554,
      -1,     4,    -1,     4,     4,    -1,   349,   359,    -1,   349,
     349,    -1,   287,   349,   349,    -1,   360,   364,   365,    -1,
      16,   559,    -1,   239,     4,    -1,   237,   558,    -1,    23,
     557,    -1,     4,     4,    -1,     4,     5,    -1,   281,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   281,     4,
       5,    -1,     4,    -1,     4,   360,   364,    -1,     4,     6,
     360,   364,    -1,   227,    -1,   349,   349,    -1,   349,   349,
      12,   349,   349,    -1,   349,   349,    12,   361,   349,   349,
      -1,   349,   349,    12,   359,   364,   358,    -1,   287,   562,
      -1,   123,    -1,   123,   349,    -1,   349,   349,    -1,   349,
     349,    12,   349,   349,    -1,   349,   349,    12,   361,   349,
     349,    -1,   349,   349,    12,   359,   364,   358,    -1
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
     939,   940,   941,   944,   945,   946,   947,   948,   951,   953,
     955,   956,   958,   960,   962,   964,   968,   971,   972,   973,
     976,   979,   980,   981,   982,   983,   984,   985,   986,   987,
     988,   989,   990,   991,   992,   993,   994,   995,   996,   997,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1018,  1020,  1021,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,  1034,  1035,
    1036,  1039,  1042,  1043,  1045,  1047,  1048,  1049,  1050,  1051,
    1052,  1059,  1060,  1063,  1064,  1065,  1068,  1069,  1072,  1075,
    1076,  1078,  1082,  1083,  1084,  1087,  1091,  1093,  1094,  1095,
    1096,  1097,  1098,  1099,  1100,  1101,  1104,  1105,  1106,  1109,
    1110,  1113,  1115,  1123,  1125,  1127,  1130,  1131,  1133,  1136,
    1139,  1140,  1144,  1146,  1149,  1154,  1155,  1156,  1160,  1161,
    1162,  1165,  1166,  1167,  1170,  1171,  1173,  1174,  1175,  1176,
    1177,  1178,  1179,  1180,  1181,  1182,  1184,  1185,  1188,  1189,
    1192,  1193,  1194,  1195,  1198,  1201,  1203,  1206,  1210,  1211,
    1213,  1215,  1219,  1220,  1221,  1224,  1225,  1226,  1229,  1232,
    1233,  1234,  1237,  1238,  1239,  1240,  1241,  1242,  1245,  1246,
    1247,  1248,  1249,  1250,  1251,  1254,  1255,  1258,  1259,  1262,
    1263,  1266,  1267,  1270,  1271,  1272,  1275,  1276,  1279,  1280,
    1283,  1286,  1294,  1295,  1298,  1299,  1300,  1301,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1317,  1320,  1321,  1324,  1325,  1326,  1327,  1330,  1331,
    1332,  1333,  1336,  1337,  1338,  1339,  1340,  1341,  1344,  1345,
    1346,  1347,  1348,  1349,  1351,  1352,  1357,  1358,  1361,  1363,
    1365,  1368,  1369,  1370,  1371,  1372,  1373,  1376,  1378,  1380,
    1382,  1383,  1385,  1387,  1389,  1391,  1393,  1396,  1397,  1398,
    1399,  1400,  1401,  1403,  1404,  1405,  1408,  1411,  1413,  1415,
    1417,  1419,  1421,  1423,  1425,  1428,  1430,  1432,  1434,  1435,
    1436,  1437,  1438,  1441,  1442,  1443,  1444,  1445,  1446,  1447,
    1449,  1451,  1452,  1453,  1456,  1457,  1458,  1459,  1460,  1461,
    1463,  1464,  1465,  1468,  1469,  1470,  1471,  1472,  1475,  1478,
    1481,  1484,  1487,  1490,  1493,  1496,  1499,  1504,  1507,  1510,
    1513,  1516,  1519,  1522,  1525,  1528,  1531,  1534,  1539,  1542,
    1545,  1548,  1551,  1554,  1557,  1560,  1563,  1568,  1571,  1574,
    1577,  1580,  1583,  1586,  1589,  1592,  1595,  1598,  1603,  1605,
    1606,  1607,  1608,  1609,  1611,  1612,  1613,  1615,  1616,  1617,
    1618,  1619,  1620,  1621,  1623,  1625,  1626,  1627,  1630,  1631,
    1632,  1633,  1634,  1635,  1637,  1638,  1639,  1642,  1644,  1646,
    1647,  1649,  1651,  1655,  1656,  1659,  1660,  1661,  1664,  1671,
    1672,  1673,  1674,  1675,  1676,  1677,  1680,  1688,  1689,  1690,
    1691,  1693,  1695,  1696,  1696,  1697,  1698,  1699,  1700,  1701,
    1702,  1704,  1705,  1707,  1710,  1713,  1714,  1715,  1718,  1721,
    1724,  1725,  1729,  1732,  1735,  1738,  1742,  1747,  1752,  1754,
    1755,  1757,  1758,  1760,  1762,  1764,  1766,  1767,  1769,  1771,
    1775,  1780,  1782,  1784,  1786,  1788,  1790,  1792,  1794,  1796,
    1798,  1800,  1803,  1804,  1806,  1808,  1809,  1811,  1813,  1814,
    1815,  1817,  1819,  1820,  1821,  1823,  1824,  1825,  1828,  1832,
    1835,  1838,  1842,  1847,  1853,  1854,  1855,  1857,  1858,  1862,
    1864,  1865,  1866,  1869,  1872,  1875,  1877,  1879,  1880,  1885,
    1888,  1889,  1890,  1893,  1897,  1898,  1900,  1901,  1902,  1904,
    1905,  1907,  1908,  1913,  1915,  1916,  1918,  1919,  1920,  1921,
    1922,  1923,  1925,  1927,  1929,  1930,  1932,  1933,  1935,  1937,
    1938,  1939,  1940,  1941,  1942,  1943,  1944,  1945,  1946,  1947,
    1949,  1951,  1952,  1953,  1954,  1956,  1957,  1958,  1959,  1960,
    1962,  1963,  1964,  1965,  1966,  1967,  1970,  1971,  1972,  1973,
    1974,  1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,
    1984,  1985,  1986,  1987,  1988,  1989,  1990,  1993,  1994,  1995,
    1996,  1997,  1998,  2006,  2013,  2022,  2031,  2038,  2045,  2053,
    2061,  2068,  2073,  2078,  2083,  2088,  2093,  2098,  2104,  2114,
    2124,  2134,  2141,  2151,  2161,  2170,  2182,  2195,  2200,  2203,
    2205,  2207,  2212,  2216,  2219,  2221,  2223,  2226,  2227,  2228,
    2229,  2230,  2231,  2232,  2235,  2236,  2237,  2238,  2239,  2240,
    2242,  2244,  2246,  2248,  2250,  2252,  2255,  2256,  2257,  2258,
    2260,  2263,  2264,  2266,  2268,  2269,  2270,  2272,  2275,  2278,
    2279,  2281,  2282,  2283,  2284,  2286,  2287,  2288,  2289,  2290,
    2292,  2294,  2295,  2297,  2300,  2301,  2302,  2304,  2306,  2307,
    2308,  2309,  2311,  2314,  2318,  2319,  2320,  2321,  2324,  2327,
    2329,  2330,  2331,  2332,  2334,  2337,  2338,  2340,  2341,  2342,
    2343,  2344,  2346,  2347,  2349,  2352,  2353,  2354,  2355,  2356,
    2358,  2360,  2361,  2362,  2363,  2365,  2367,  2368,  2369,  2370,
    2371,  2372,  2374,  2375,  2377,  2380,  2381,  2382,  2383,  2386,
    2387,  2390,  2391,  2394,  2395,  2398,  2411,  2412,  2416,  2417,
    2421,  2424,  2429,  2436,  2438,  2441,  2443,  2446,  2450,  2451,
    2452,  2453,  2454,  2455,  2456,  2460,  2461,  2464,  2465,  2466,
    2467,  2468,  2469,  2470,  2471,  2474,  2475,  2476,  2477,  2478,
    2479,  2480,  2481,  2482,  2483,  2484,  2487,  2488,  2491,  2492,
    2492,  2495,  2496,  2497,  2498,  2501,  2502,  2505,  2506,  2509,
    2513,  2514,  2514,  2517,  2518,  2521,  2524,  2528,  2529,  2530,
    2531,  2534,  2535,  2536,  2537,  2540,  2542,  2543,  2548,  2550,
    2551,  2552,  2553,  2556,  2557,  2562,  2566,  2567,  2568,  2571,
    2572,  2577,  2578,  2581,  2583,  2584,  2585,  2590,  2592,  2598,
    2599,  2600,  2601,  2604,  2605,  2608,  2610,  2612,  2613,  2616,
    2618,  2619,  2620,  2623,  2624,  2627,  2628,  2629,  2632,  2633,
    2634,  2637,  2638,  2639,  2640,  2641,  2644,  2645,  2646,  2649,
    2650,  2651,  2652,  2653,  2656,  2658,  2660,  2662,  2665,  2667,
    2669,  2672,  2673,  2674,  2675,  2676,  2677,  2678,  2679,  2680,
    2683,  2684,  2685,  2688,  2689,  2690,  2693,  2694,  2695,  2698,
    2699,  2700,  2703,  2704,  2705,  2706,  2709,  2710,  2711,  2714,
    2715,  2716,  2719,  2720,  2721,  2724,  2725,  2726,  2729,  2731,
    2733,  2737,  2741,  2743,  2746,  2747,  2748,  2749,  2752,  2753,
    2755,  2756,  2758,  2761,  2762,  2766,  2769,  2770,  2773,  2775,
    2776,  2777,  2778,  2781,  2782,  2783,  2786,  2787,  2788,  2791,
    2792,  2797,  2801,  2808,  2809,  2811,  2816,  2818,  2821,  2822,
    2823,  2824,  2826,  2831
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
       3,     3,     3,     0,     3,     4,     4,     4,     3,     3,
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
       1,     5,     6,     3,     6,     2,     1,     3,     1,     1,
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
     396,     0,     0,   142,   415,   150,   150,   150,   142,     0,
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
     304,     0,   314,     0,   313,   370,   369,     0,     0,     0,
     142,     0,   150,   413,   417,   421,     0,     0,     0,   150,
       0,    81,    80,   455,   440,     0,   451,   453,   153,     0,
     142,   142,   338,     0,     0,    55,     0,   430,     0,     0,
     937,     0,     0,     0,     0,     0,     0,   951,     0,     0,
       0,     0,     0,     0,   968,   969,     0,     0,     0,     0,
       0,   980,     0,   986,   987,   989,   991,     0,   995,  1006,
    1007,  1008,     0,  1010,  1015,  1017,  1018,  1016,   924,     0,
     997,     0,   996,   936,     0,     0,  1002,     0,  1004,     0,
    1003,  1024,  1005,  1012,     0,     0,   356,     0,     0,   548,
     549,     0,   546,   542,     0,   163,   163,   163,   164,   165,
     560,   561,   159,   158,     0,   163,   163,   163,     0,   566,
     576,   160,   163,   163,   163,   161,   162,   163,   163,     0,
     163,   163,     0,   160,     0,   589,     0,     0,     0,   615,
       0,   614,     0,     0,   591,     0,   590,     0,     0,     0,
       0,   160,   160,   157,     0,     0,   157,     0,     0,     0,
     163,   163,   689,     0,   163,   163,   694,     0,   176,   177,
     178,   179,   180,   181,     0,    85,    86,    84,   725,     0,
       0,     0,     0,     0,     0,   871,   869,   864,     0,   874,
     858,   875,   861,   873,   867,   856,   870,   859,   857,   876,
     872,     0,     0,     0,   741,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   772,     0,
       0,     0,     0,     0,   784,   786,     0,     0,   791,   790,
       0,     0,   166,     0,     0,     0,   142,     0,   800,     0,
       0,     0,     0,   805,   806,   807,     0,     0,     0,   813,
     829,   833,   835,   838,   837,     0,     0,     0,   842,   879,
     881,     0,   880,   710,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1025,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   714,
       0,     0,     0,     0,   815,     0,   142,     0,  1035,  1033,
       0,     0,   142,  1038,   820,     0,     0,     0,   826,     0,
       0,  1076,   846,   847,     0,   849,  1106,  1108,  1105,  1104,
    1095,     0,     0,     0,  1128,     0,     0,  1132,  1140,   187,
     188,   189,   190,   186,  1155,  1154,     0,     0,     0,  1157,
    1156,   185,     0,     0,     0,  1165,     0,     0,     0,     0,
       0,  1182,     0,  1196,  1195,  1197,     0,     0,     0,  1168,
       0,     0,     0,  1167,  1177,  1176,  1178,  1174,  1173,  1175,
    1199,  1198,  1200,     0,     0,     0,  1214,  1215,     0,   142,
    1230,  1225,  1228,     0,     0,   142,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,     0,   291,   290,
       0,     0,   282,   293,   295,     0,   305,   307,   306,   142,
     312,     0,     0,     0,   150,   142,     0,     0,     0,     0,
     435,   449,    79,    78,   457,     0,   452,   155,   156,   154,
     445,   142,   460,   459,     0,     0,   433,   427,     0,     0,
       0,     0,     0,     0,   142,   938,     0,   941,     0,     0,
     944,     0,   142,   949,     0,   952,   953,     0,   955,   956,
     957,     0,   961,     0,     0,   964,     0,   970,     0,     0,
       0,   975,   976,   974,     0,     0,     0,   981,   982,     0,
       0,   985,   988,   990,   992,     0,     0,  1009,  1011,   928,
    1020,   929,     0,     0,  1022,  1013,     0,     0,   502,   503,
       0,     0,   547,     0,   557,   558,   559,   163,   563,   564,
     565,     0,     0,     0,   570,   571,   157,     0,     0,     0,
     163,   577,   578,   579,   580,   582,   160,   585,   586,     0,
     163,     0,     0,     0,   160,   160,   157,     0,     0,     0,
       0,   613,     0,   617,     0,     0,     0,     0,     0,   160,
     160,   157,     0,     0,   157,     0,     0,     0,     0,     0,
     160,   160,   157,     0,     0,   157,     0,     0,     0,     0,
       0,   160,   160,   157,     0,     0,   157,     0,     0,     0,
       0,   160,   160,   157,     0,     0,     0,   160,   593,   594,
     595,   596,   598,     0,   601,   602,     0,   160,     0,     0,
     687,   688,   163,   691,   692,     0,   724,   142,   726,     0,
       0,   730,     0,     0,     0,     0,     0,   863,   860,   866,
     865,   862,   868,     0,   739,     0,     0,     0,     0,   142,
     746,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   763,   764,   765,     0,   769,   766,
     768,     0,     0,   774,   773,   775,   776,     0,     0,     0,
       0,     0,     0,   142,   142,   789,   172,   168,   173,   167,
     170,   169,   171,   795,   796,   797,     0,     0,   799,   801,
     142,   142,     0,   808,   811,   142,   142,   836,   840,   882,
     711,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1066,   907,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   908,     0,     0,
       0,     0,     0,   722,   723,   142,   150,     0,   142,   142,
    1041,  1042,     0,     0,   822,     0,   142,  1072,  1074,   845,
       0,  1125,  1126,  1129,  1130,   185,   185,   185,  1201,  1180,
    1179,  1181,  1184,  1183,  1187,  1186,  1188,  1185,  1193,  1192,
    1194,  1190,  1189,  1191,     0,     0,  1209,     0,  1231,     0,
     142,     0,  1234,     0,     0,   224,     0,   221,     0,     0,
       0,   260,     0,     0,     0,     0,   142,     0,   297,   130,
       0,   390,     0,   411,   150,   153,     0,     0,   424,     0,
     461,     0,   428,   930,     0,     0,     0,     0,   142,   939,
     153,   153,   153,   142,   945,   153,   150,   153,   153,   142,
     958,   153,   153,   153,   142,   965,   153,   153,   142,     0,
     153,   142,   153,   153,   142,   153,   142,   999,  1000,     0,
       0,   501,   543,     0,   562,   567,   568,   569,     0,   573,
     574,   575,   581,   163,   160,   587,   604,   605,   606,   607,
     608,     0,   610,   611,   160,     0,     0,     0,   160,   160,
     157,     0,     0,     0,     0,     0,     0,   160,   160,   157,
       0,     0,     0,     0,     0,     0,   160,   160,   157,     0,
       0,     0,   160,   163,   163,   163,   163,   163,     0,   163,
     163,     0,   160,   160,   163,   163,   163,   163,   163,     0,
     163,   163,     0,   160,   160,   667,   668,   669,   670,   672,
       0,   675,   676,     0,   160,   678,   679,   680,   681,   682,
       0,   684,   685,   160,   597,   160,     0,   603,     0,     0,
     690,     0,   727,   153,     0,     0,   153,     0,     0,     0,
     738,   153,   742,   743,   153,   745,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   767,
     770,   771,     0,   153,     0,     0,     0,   787,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1067,  1046,     0,  1053,  1054,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   142,     0,     0,    82,     0,     0,   914,   915,   150,
       0,     0,     0,  1036,  1034,  1044,   821,   823,   150,  1118,
    1159,  1158,  1160,  1202,     0,  1211,  1241,     0,     0,  1236,
    1235,   225,     0,     0,     0,   265,     0,     0,     0,   283,
     153,   391,   395,   412,   414,     0,   422,   456,     0,     0,
       0,     0,     0,   935,   940,   943,   942,   946,   947,   948,
     950,   954,   959,   960,   962,   963,   966,   967,   971,   150,
     153,   978,   150,   979,   983,   150,   993,   150,     0,     0,
     500,     0,   572,   583,   163,   160,   612,   163,   163,   163,
     163,   163,     0,   163,   163,   160,   658,   659,   660,   661,
     662,     0,   664,   665,   160,   163,   163,   163,   163,   163,
       0,   163,   163,   160,   163,   627,   628,   629,   630,   632,
     160,   635,   636,     0,   163,   163,   647,   648,   649,   650,
     652,   160,   655,   656,     0,   163,   671,   160,     0,   677,
     160,   686,   599,   160,   695,   696,   142,   729,     0,   153,
     732,     0,   142,     0,   740,   744,   142,     0,   751,   752,
     753,   754,   758,   759,   755,   756,   757,     0,     0,   153,
     779,     0,   142,     0,     0,   792,   153,     0,     0,   153,
     153,     0,   839,     0,   174,   174,     0,     0,   174,     0,
     174,  1025,     0,     0,     0,     0,     0,     0,     0,     0,
    1045,     0,     0,   174,   174,     0,     0,     0,     0,     0,
       0,     0,     0,   909,     0,     0,     0,  1025,    83,     0,
     174,     0,  1069,   913,     0,     0,     0,   207,  1243,  1242,
       0,     0,   229,     0,     0,     0,     0,   298,   423,   317,
     931,     0,   142,     0,   972,   973,   977,   984,   994,   349,
     317,     0,   584,   609,   618,   619,   620,   621,   622,   160,
     624,   625,   163,   160,   666,   638,   639,   640,   641,   642,
     160,   644,   645,   163,   631,   163,   160,   637,   651,   163,
     160,   657,   673,   160,   683,   600,     0,   153,   733,     0,
       0,     0,     0,     0,   760,   761,   777,     0,     0,     0,
     788,   793,     0,   802,   803,   794,   153,     0,   175,  1025,
    1025,    82,     0,  1025,     0,  1025,   883,   142,     0,  1048,
       0,  1051,  1085,  1052,  1050,  1047,     0,  1025,  1025,    82,
       0,     0,  1025,  1025,     0,     0,  1025,   912,   910,   911,
     890,  1025,  1025,  1069,  1080,     0,  1037,   825,     0,     0,
       0,   231,     0,     0,     0,   318,   319,   339,     0,   182,
     934,   357,     0,   163,   626,   663,   163,   646,   633,   163,
     653,   163,   674,     0,   728,   153,   153,     0,   153,     0,
     153,   153,     0,   153,     0,  1025,   896,   892,  1025,     0,
     897,     0,   891,  1025,     0,  1049,     0,   894,   893,  1025,
       0,     0,   888,   886,  1025,   142,   887,   889,   895,  1080,
    1031,     0,     0,  1070,  1078,  1117,     0,     0,     0,   261,
     284,   287,   285,     0,     0,   142,   183,   184,   933,   545,
     623,   643,   634,   654,   153,   731,   737,     0,   750,   747,
     778,   783,     0,   798,     0,   901,   885,    82,     0,   899,
    1086,     0,   884,    82,     0,   900,     0,  1032,  1082,  1084,
       0,  1077,     0,     0,   266,     0,     0,     0,     0,   182,
       0,   734,   142,   748,   780,   812,  1025,     0,     0,  1025,
       0,   153,  1083,  1079,   230,     0,     0,     0,     0,     0,
     932,   706,   142,   735,   749,   142,   781,   903,     0,  1025,
     902,     0,     0,   232,   277,     0,   276,     0,   736,   782,
      82,   904,    82,  1025,   275,   274,  1025,  1025,   898,   906,
     905
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1377,   172,   152,  1223,  2447,  2448,   420,   421,
     422,   423,   153,   154,   155,    91,   784,   443,  1174,  1640,
    1314,  1327,  1310,  1883,  2539,  1374,  2658,  1544,   334,   737,
     740,   743,   751,    63,   357,   363,   367,   370,    68,   373,
      75,   388,   384,   378,   395,    82,   400,    92,    98,   405,
     407,   409,   477,   838,  1610,   411,   414,   105,   430,   156,
     158,  2587,   174,   214,   466,   827,   468,   478,   830,   835,
     480,   482,   841,   485,   843,   496,   846,   848,   499,   503,
     507,   509,   512,   516,   543,   539,  1237,   530,   865,   870,
     862,  1224,   875,   533,   549,   552,   557,   562,   570,   904,
     906,   908,   910,   575,   914,   217,   577,  1710,   235,   579,
     581,   585,   590,   598,   244,  1303,   601,   252,   610,  1319,
     612,   618,   959,  1335,   954,  1751,  1341,  1339,   955,  1753,
    1344,  1346,   624,   627,   622,   254,   262,   264,   665,  1036,
    1401,  1025,  1499,  1927,  2242,  1041,  1034,   899,  1278,  1282,
    1290,  1292,  1911,   269,  1050,  1053,  1061,  2214,  2215,  2216,
    1912,  2574,  2575,  1084,  1087,  2643,  2644,  2640,  2641,  2688,
    2217,  2218,   274,   280,   288,   679,   674,   293,   298,   300,
     689,   696,  1112,  1117,   746,   734,   306,   310,   703,   316,
     710,  1549,   723,   724,  1148,  1143,  1555,  1133,  1561,  1573,
    1569,  1137,   728,   712,   322,   323,   338,  1161,   341,   347,
     761,   764,   758,   349,   352,   769
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2522
static const yytype_int16 yypact[] =
{
    5195,   118,   495,    44, -2522, -2522,   849,  -111,   570,    17,
    1171,   160,  3569,   156,   414,  1789,    27,  5229,    46,   679,
   -2522,   414,   464,   183,  1234,   -23,   177,   236,   164,   444,
     393,   509,  1010,   139,   629,   477,   438,   164, -2522,   101,
      47,  1095, -2522,   416,   553,  1378, -2522,   443, -2522,    73,
    2869,   338,    84,   604,   675,   916,   388,   677,   681,   104,
     682,    -7,    87, -2522, -2522, -2522,   568,   595, -2522,    81,
       0,   414,   -19,   539,   257, -2522,   688,   595, -2522, -2522,
      49,   595, -2522, -2522, -2522, -2522,   595, -2522, -2522, -2522,
   -2522, -2522, -2522,    52,   664,   696,   721,   634, -2522,   595,
    1254,   595,   595,   898,   595, -2522, -2522, -2522,   544, -2522,
   -2522, -2522, -2522,  4723, -2522, -2522, -2522, -2522, -2522, -2522,
     595, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  1260, -2522,   595, -2522,   751, -2522, -2522,
     414,   414,   414,   414,   414,   414, -2522, -2522,   414,   414,
     414,   414, -2522,   662, -2522,   732,  1517,   667,   110,   538,
     658,   -35,  4315,   556,  4781,  4285,   796,  4723,  3952, -2522,
      57,   336,   827,   747,    66,   576,   822,   164,    37, -2522,
     776, -2522,   620,   577,   137, -2522,   158, -2522,   102, -2522,
     363,   770,    22, -2522, -2522,  4902, -2522, -2522, -2522,   791,
     834, -2522, -2522, -2522, -2522,   373, -2522, -2522, -2522, -2522,
     -67, -2522, -2522,  4902,  4370, -2522, -2522,   214, -2522,   866,
     871,   462, -2522,   595, -2522,   886,   114,   922,   116,   839,
     924,    38, -2522, -2522, -2522,   933,   940,   414,   414,   595,
     595, -2522, -2522,   947, -2522, -2522, -2522, -2522, -2522,  3844,
   -2522,   959,   977,   595, -2522,  1000, -2522, -2522, -2522, -2522,
   -2522,   595,  1085,   414,  2521,   595,  1260,   595, -2522,  1006,
   -2522,  4869, -2522, -2522,   887,  1014,  1018,   595, -2522,  1024,
   -2522, -2522,   -17,  1025,  4902,  1028, -2522,  1185,   595,   941,
   -2522,   554,   926,   919,   112,  1046, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  1052, -2522,    99,    29,   197,   248,   439,
   -2522,   595,   595,   168, -2522,   595,   795,  1072, -2522,   595,
     595, -2522,  1092,    31,    36,  1104,  1260, -2522, -2522, -2522,
     840,   595, -2522, -2522, -2522, -2522,   595, -2522,  1109,  1110,
   -2522,   595,  1083, -2522, -2522, -2522, -2522, -2522, -2522,   595,
   -2522, -2522,   595, -2522, -2522,   654,   654,  1125, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,   936,
     595,   595,  1137,  1141,  1152, -2522, -2522,   595,   595,   595,
   -2522,   595, -2522,  1154, -2522, -2522, -2522, -2522,   890, -2522,
    1161, -2522,  4902,  1163, -2522,   595, -2522, -2522, -2522,   595,
    1166,  1159,  1159,  4902,   595,   595,   595,   595,   595,   595,
   -2522,   595,  4723,  1254,   595,   595, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  1254,   595, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522,  1172, -2522,   931,   453,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,   -87,
   -2522, -2522, -2522,  1016, -2522,   -34,   647,   647, -2522, -2522,
   -2522,  1197, -2522,  1204, -2522, -2522,   -57, -2522,  1036, -2522,
   -2522, -2522,  1049, -2522, -2522,  1260, -2522,   595,   595, -2522,
    4902,  4902,  1260, -2522, -2522,  1260, -2522, -2522, -2522, -2522,
    1260, -2522, -2522,  4902,  1260,   595, -2522, -2522,  4902, -2522,
   -2522,   499,  1029,     5, -2522, -2522,  1030,  4902,   954, -2522,
   -2522, -2522, -2522, -2522,  1213,  1221,  1224, -2522,  1035, -2522,
   -2522, -2522,   595, -2522, -2522,   574, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,   363, -2522, -2522, -2522, -2522, -2522, -2522,
    1045,  1060, -2522, -2522,  1182,  1189,  1195, -2522, -2522,  1011,
   -2522,   595,  1262,  1055,  4869, -2522,  1260, -2522,  1263, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  4902,  4902,  4902,  4902, -2522, -2522,  1275,
     414, -2522, -2522,  1276,  1281,  1105,   595, -2522,     8,  1202,
   -2522,  1297, -2522,   508,  1218,  5233,   377,  1305, -2522,  1309,
   -2522,  1341, -2522,    25, -2522,  1342,  1343, -2522,  1346, -2522,
   -2522, -2522,   595, -2522,  4869,  4684,  1557,    50,  1352,   486,
    1270, -2522, -2522, -2522,  1344,   537,  1355,  1357,     4,   595,
     915,   376,   187,  4902,   414,  1564,   719,    53,    56,   263,
       6, -2522,  1358,  1364,  1373, -2522, -2522, -2522, -2522, -2522,
     595,   595,   595,   595, -2522, -2522,   595,  1260,   595, -2522,
     595,  1254,   595,  1379,  1260, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  1380,   335,   417, -2522, -2522, -2522,  1382,
   -2522, -2522, -2522, -2522,  1285, -2522,  1387,  1388,  1308,  1392,
   -2522,  1393, -2522,  1394,  1310,  1397,   329,   663,   582,   463,
     605,  1404,   625, -2522, -2522,  1406,  1409,  1413, -2522, -2522,
    1414, -2522, -2522, -2522, -2522,  1415, -2522, -2522,  1418, -2522,
   -2522,  1419, -2522, -2522, -2522, -2522, -2522, -2522, -2522,   595,
     595, -2522,   595,   945,   595,   595, -2522,  1228, -2522,   967,
    1422, -2522,  1003,  1423, -2522, -2522,    -8,   595,   595, -2522,
    1420, -2522, -2522,  1425,  1088,   595,  1421,   149, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522,  1427,  1430,   595,   595,   595,  1431,   414,  1435,
    1436,  1260,  4902, -2522, -2522, -2522, -2522, -2522,  1260, -2522,
   -2522,   595,   595,   595,  4902,   595,  1254,   595, -2522,   595,
   -2522, -2522, -2522, -2522, -2522,  1438,  1439, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
     556, -2522,   595, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522,  4902,   595,  1260, -2522,    -8,    -8,    -8,  1260,  1254,
     595,  1260, -2522, -2522,   595, -2522,   -64,  1277,  1440,  1443,
   -2522, -2522,  1260,  4136,  4902, -2522,  1444,  1448,  1450,  1061,
     595,  4689,   507,   474, -2522, -2522, -2522,   595,   502,   966,
   -2522,  1203, -2522,  1564,  1205,   531,  1174,    67, -2522, -2522,
     595, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522,   595,  1452, -2522, -2522, -2522,    -8, -2522, -2522, -2522,
   -2522, -2522,  4841, -2522, -2522,  1455,  1456,   595,  1457,  1460,
    1461,   445,   445,   -53,  1463,  1466,  1468,  1471,  1194,  1214,
    1477,  1478,  1490,    77,    77,   -53,  1467,  1492,   -53,  1496,
    1497,  5266,  1498,  1499, -2522, -2522,  1500,  1504,   532, -2522,
    1510,  1514,  1518,  1519,   445,   -53,  1515,  1520, -2522,  1522,
   -2522, -2522,  1260,   848,  1236,  1287,   -42,  1293,  1426,  1019,
     390,  1560,   108,  1434,  1462,  1193,   968,  1528,   437,  1338,
    1470,  1571,  1371,    28,    89,  -127,   -80,  4902,  1564,  1537,
     734,  1345,  1384,  1578,   107, -2522, -2522,    88,  1582,  1591,
   -2522, -2522, -2522,  1594,  1399,   124,  1564,  1400, -2522, -2522,
   -2522,   414,  1583,  1597,   595, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522,     9, -2522,   891, -2522,   595, -2522,
     595, -2522, -2522, -2522, -2522,   595,   595,   595,   486,  4902,
   -2522,  1604,  1098, -2522, -2522,   595, -2522, -2522,   595,  4902,
     595, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522,   414,   595, -2522,   595,   486,
    1605, -2522,   595,   595, -2522,   414, -2522, -2522, -2522,   789,
    1606,  1608, -2522, -2522, -2522, -2522,   595,   595, -2522, -2522,
    1254,   595,   595, -2522, -2522, -2522, -2522,  1598,   595, -2522,
     595,  1505, -2522,   595, -2522,   595,  1507, -2522,  1616, -2522,
    1041,  1041,   700,  1041,  1621, -2522,   706, -2522, -2522,  1624,
    1625,   780,  1617, -2522,  1629,  1633,  1636, -2522,   790,   801,
    1637,  1640,  1643, -2522, -2522,  1646,  1649,  1654, -2522,  1041,
    1041,  1041,   595, -2522, -2522, -2522,   595, -2522,   595,   146,
    4902, -2522,   595, -2522,  4869,  1260, -2522, -2522,  1655, -2522,
   -2522,  1656, -2522, -2522, -2522, -2522,  1652,  2521, -2522,   595,
    1653,   595,   595,   595,   956, -2522,  1660,  1663,   595,   595,
     -22,  1665,   414,   414, -2522,  1260,   595,  1664,  1668,  1669,
   -2522,  4902, -2522,   595, -2522, -2522, -2522,   595,   595,   595,
    1260,  4902,    -8, -2522, -2522, -2522,  1254,   595,  1671,    -8,
     595,  1638,  1642,   505, -2522,  1676, -2522, -2522,   117,  4902,
    1260,  1260, -2522,   595,  1678,  1683,   595, -2522,  1679,   920,
    4723,  1453,   455,  1458,   130,  4902,   480, -2522,   241,  1548,
     173,   540,  1459,   201, -2522, -2522,   450,  1521,   380,  1574,
     746,  1564,   768, -2522,  1688,  1454, -2522,   578, -2522, -2522,
   -2522, -2522,  1564,  1494, -2522, -2522, -2522, -2522, -2522,   595,
   -2522,   595, -2522, -2522,   595,   595, -2522,   595, -2522,   595,
   -2522, -2522, -2522, -2522,  1502,   595, -2522,   595,    16, -2522,
   -2522,  1697,  1705, -2522,   595,   445,   445,   445, -2522, -2522,
   -2522, -2522, -2522, -2522,  1707,   445,   445,   445,   395, -2522,
   -2522,    77,   445,   445,   445, -2522, -2522,   445,   445,  1711,
     445,   445,  1713,    77,   470, -2522,  1714,  1716,  1717, -2522,
     726, -2522,   865,  1375, -2522,   693, -2522,  1465,  1720,  1721,
    1722,    77,    77,   -53,  1724,  1725,   -53,  1727,  1730,  1732,
     445,   445, -2522,  1734,   445,   445, -2522,  1735, -2522, -2522,
   -2522, -2522, -2522, -2522,   414, -2522, -2522, -2522,  4723,  1147,
     414,   595,  1304,  1348,   449, -2522, -2522, -2522,   457, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522,  1736,   414,   595, -2522,   414,  1737,   595,  4902,   414,
    1360,  1508,  1509,   203,   223,  1511,   266,  1445,  1446,  1743,
    1747,  1748,  1019,  1752,  1755,  1756,  1464,  1473,  1132,  1758,
     414,   595,  1369,  1402, -2522, -2522,   414,  4902, -2522, -2522,
    4902,   595,   -20,  1759,   414,   595,  1260,   414, -2522,  1763,
    4902,  4902,   595, -2522, -2522, -2522,   414,   414,  4902, -2522,
   -2522, -2522, -2522, -2522, -2522,  4902,   595,   414, -2522, -2522,
   -2522,   595, -2522, -2522,  1764,   595,  1549,   430,   595,  1550,
     595,   468,   595, -2522,   595,  1552,  1553,   595,   595,   595,
     595,   595,   595,   595,   595,    14,   595,   595,  1558, -2522,
     595,   595,   595,   595, -2522,  4902,  1260,  1773,  4902,  4902,
     595,   595,  1260, -2522,   595,   595,   595,  4902, -2522,   595,
     595, -2522, -2522, -2522,  1775, -2522, -2522, -2522, -2522, -2522,
   -2522,  1777,   595,   595, -2522,   595,   595, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522,  1778,  1781,  1785, -2522,
   -2522,  1041,  1783,  1786,  1788, -2522,  1790,  1792,  1793,  1794,
    1796, -2522,  1797, -2522, -2522, -2522,  1798,  1800,  1802, -2522,
    1803,  1804,  1806, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,   595,   595,   595, -2522, -2522,   595,  1260,
   -2522, -2522, -2522,  2521,   595,  1260,   595,   595,   595, -2522,
     595,   595,  1807,   595,  1809,  1733,   595,   595, -2522, -2522,
    1810,  4902, -2522, -2522, -2522,   595, -2522, -2522, -2522,  1260,
   -2522,  1482,   595,  1482,    -8,  1260,  4902,   595,   595,  1811,
   -2522, -2522, -2522, -2522, -2522,   595, -2522, -2522, -2522, -2522,
   -2522,  1260, -2522, -2522,   595,  1812, -2522, -2522,  4902,  1815,
    1817,  1818,  1819,  4902,  1260, -2522,  4902, -2522,  4902,  4902,
    4723,  4902,  1260, -2522,  4902, -2522, -2522,  4902, -2522, -2522,
    4723,  4902, -2522,  4902,  4902,  4723,  4902, -2522,  4902,  4902,
     595, -2522, -2522, -2522,  4902,  4902,  4902, -2522, -2522,  4902,
    4902, -2522, -2522, -2522, -2522,  4902,  4902, -2522, -2522, -2522,
   -2522, -2522,   595,   595, -2522, -2522,  1821,   595, -2522, -2522,
    1822,  1824, -2522,   595, -2522, -2522, -2522,   445, -2522, -2522,
   -2522,  1825,  1826,  1827, -2522, -2522,   -53,  1832,  1833,  1834,
     445, -2522, -2522, -2522, -2522, -2522,    77, -2522, -2522,  1845,
     445,  1846,  1850,  1851,    77,    77,   -53,  1856,  1858,  1862,
     728, -2522,   874, -2522,  1102,  1516,  1863,  1864,  1865,    77,
      77,   -53,  1859,  1870,   -53,  1873,  1524,  1874,  1876,  1877,
      77,    77,   -53,  1871,  1883,   -53,  1885,  1531,  1886,  1887,
    1888,    77,    77,   -53,  1884,  1890,   -53,  1891,  1892,  1903,
    1904,    77,    77,   -53,  1918,  1920,  1923,    77, -2522, -2522,
   -2522, -2522, -2522,  1927, -2522, -2522,  1930,    77,  1931,  1932,
   -2522, -2522,   445, -2522, -2522,  1933, -2522,  1260, -2522,  4902,
     595, -2522,   595,  4902,   595,  1936,  1236, -2522, -2522, -2522,
   -2522, -2522, -2522,  1939, -2522,  4902,   414,  1940,  4902,  1260,
   -2522,  1941,  1236,   595,   595,   595,   595,   595,   595,   595,
     595,   595,  1943,  1945, -2522, -2522, -2522,  1946, -2522, -2522,
   -2522,  1948,  1949, -2522, -2522, -2522, -2522,   595,  4902,   595,
    1950,  1236,   414,  1260,  1260, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522,   595,  1254, -2522, -2522,
    1260,  1260,   595, -2522, -2522,  1260,  1260, -2522, -2522, -2522,
   -2522,   595,   595,   595,   595,   595,   595,   595,   595,   595,
     595,  1523, -2522,   595,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,  3902,  1951,   595, -2522,   595,   595,
     595,  1953,  1954, -2522, -2522,  1260,    -8,  1955,  1260,  1260,
   -2522, -2522,  1254,   595, -2522,  1958,  1260, -2522, -2522, -2522,
    1961, -2522, -2522, -2522, -2522,  1041,  1041,  1041, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522,  1236,   595, -2522,   595, -2522,   595,
    1260,   595, -2522,  1254,   595, -2522,   595, -2522,  1814,  1964,
    1965, -2522,  1962,   595,   595,  1967,  1260,  4902, -2522, -2522,
     595, -2522,   595, -2522,    -8,   117,   595,  1968, -2522,   595,
   -2522,   363, -2522, -2522,  1970,  1972,  1977,  1979,  1260, -2522,
     117,   117,   117,  1260, -2522,   117,    -8,   117,   117,  1260,
   -2522,   117,   117,   117,  1260, -2522,   117,   117,  1260,  4902,
     117,  1260,   117,   117,  1260,   117,  1260, -2522, -2522,  1981,
     363,  1982, -2522,   595, -2522, -2522, -2522, -2522,  1984, -2522,
   -2522, -2522, -2522,   445,    77, -2522, -2522, -2522, -2522, -2522,
   -2522,  1985, -2522, -2522,    77,  1987,  1988,  1989,    77,    77,
     -53,  1994,  1996,  2000,  2002,  2003,  2004,    77,    77,   -53,
    2006,  2008,  2010,  2013,  2014,  2016,    77,    77,   -53,  2018,
    2020,  2021,    77,   445,   445,   445,   445,   445,  2023,   445,
     445,  2024,    77,    77,   445,   445,   445,   445,   445,  2027,
     445,   445,  2028,    77,    77, -2522, -2522, -2522, -2522, -2522,
    2029, -2522, -2522,  2030,    77, -2522, -2522, -2522, -2522, -2522,
    2031, -2522, -2522,    77, -2522,    77,  2032, -2522,  2033,  2034,
   -2522,  4869, -2522,   117,  2035,  4902,   117,   595,  4902,  2036,
   -2522,   117, -2522, -2522,   117, -2522,  4902,  2037,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,   595, -2522,
   -2522, -2522,  4902,   117,   595,  4902,  2038, -2522,  1254,  1254,
    4902,  1254,  1254,  4902,  4902,  1254,  1254,   595,   595,   595,
     595,   595,   595,  1236,   595,   595,   595,  1483,  1699,  1700,
    1701,  1702,  1703,  1706,  1523, -2522,  1709, -2522, -2522,  1236,
     595,   595,   595,   595,  1236,   595,   595,   595,   595,   595,
     595,  1260,   595,  1539,  1236,   595,   595, -2522, -2522,    -8,
     414,  2047,  2049, -2522, -2522, -2522, -2522, -2522,    -8,  2052,
   -2522, -2522, -2522, -2522,   595, -2522, -2522,  1254,   595, -2522,
   -2522, -2522,  1068,  2053,  2054, -2522,   595,  2063,  1482, -2522,
     117, -2522, -2522, -2522, -2522,  2064, -2522, -2522,  2067,  2068,
    2072,  4902,  2073, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,    -8,
     117, -2522,    -8, -2522, -2522,    -8, -2522,    -8,  2074,  2069,
   -2522,   595, -2522, -2522,   445,    77, -2522,   445,   445,   445,
     445,   445,  2076,   445,   445,    77, -2522, -2522, -2522, -2522,
   -2522,  2080, -2522, -2522,    77,   445,   445,   445,   445,   445,
    2081,   445,   445,    77,   445, -2522, -2522, -2522, -2522, -2522,
      77, -2522, -2522,  2084,   445,   445, -2522, -2522, -2522, -2522,
   -2522,    77, -2522, -2522,  2087,   445, -2522,    77,  2088, -2522,
      77, -2522, -2522,    77, -2522, -2522,  1260, -2522,  4902,   117,
   -2522,  2090,  1260,   595, -2522, -2522,  1260,   595, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522,   595,   595,   117,
   -2522,  2092,  1260,   595,  1254, -2522,   117,   595,  1254,   117,
     117,  4902, -2522,   595,  2093,  2093,   595,   595,  2093,  1236,
    2093, -2522,  4902,  1019,  2094,  2096,  2097,  2098,  2099,  2101,
   -2522,   414,  1236,  2093,  2093,   595,   595,  1236,   595,   595,
     595,   595,   595, -2522,  1254,   595,  2102, -2522, -2522,   595,
    2093,   414,    20, -2522,  2103,   414,  2105, -2522, -2522, -2522,
    2106,   595, -2522,  2107,  2110,  1889,   595, -2522, -2522,    -2,
   -2522,  2111,  1260,  4902, -2522, -2522, -2522, -2522, -2522, -2522,
      -2,   595, -2522, -2522, -2522, -2522, -2522, -2522, -2522,    77,
   -2522, -2522,   445,    77, -2522, -2522, -2522, -2522, -2522, -2522,
      77, -2522, -2522,   445, -2522,   445,    77, -2522, -2522,   445,
      77, -2522, -2522,    77, -2522, -2522,   595,   117, -2522,  4902,
    4902,   595,  4902,   595, -2522, -2522, -2522,  4902,  4902,   595,
   -2522, -2522,  4902, -2522, -2522, -2522,   117,  2113, -2522, -2522,
   -2522,  1236,   595, -2522,  2114, -2522, -2522,  1260,  2116, -2522,
    2118, -2522, -2522, -2522, -2522, -2522,  2121, -2522, -2522,  1236,
     595,  2122, -2522, -2522,   595,  4902, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,    20,  1675,  1564, -2522, -2522,  2123,  2124,
    2126, -2522,  1944,  2128,    23, -2522, -2522, -2522,  4902,    34,
   -2522, -2522,  2130,   445, -2522, -2522,   445, -2522, -2522,   445,
   -2522,   445, -2522,  4869, -2522,   117,   117,   595,   117,  2131,
     117,   117,   595,   117,   595, -2522, -2522, -2522, -2522,  2132,
   -2522,   595, -2522, -2522,  2133, -2522,   595, -2522, -2522, -2522,
    2135,   595, -2522, -2522, -2522,  1260, -2522, -2522, -2522,  1675,
   -2522,  1746,  1769,  1564, -2522, -2522,  2136,  2137,  2139, -2522,
   -2522, -2522, -2522,   842,   842,  1260, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522,   117, -2522, -2522,  2140, -2522,  4723,
   -2522, -2522,  2141, -2522,  1236, -2522, -2522,  1236,   595, -2522,
   -2522,   595, -2522,  1236,   595, -2522,  4902, -2522,  1746, -2522,
     414, -2522,  2142,  2143, -2522,   595,   595,   595,   595,    34,
    2144,  4723,  1260, -2522,  4723, -2522, -2522,   595,  2146, -2522,
     595,   117, -2522, -2522, -2522,  2147,  2148,   595,  2150,   595,
   -2522, -2522,  1260, -2522, -2522,  1260, -2522, -2522,  2152, -2522,
   -2522,  2153,  2154, -2522, -2522,  2155, -2522,  2156, -2522, -2522,
    1236, -2522,  1236, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2522, -2522,    -3, -2522,   328, -2522, -1636,  -968,  1566, -2522,
     777,  -228,  1829,   -45,    43, -1611,  1692,  1784,  -733,   764,
    -839,  1196,   759, -2522, -1146, -2522,  -601, -1089, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522,  -483,  -476, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522,  -370, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -1420, -2522, -2522, -2522, -2522, -2522,  -635, -2522, -2522, -2522,
   -2522, -2522, -2522,   333, -2522, -2522, -2522, -2522,   -86,  -642,
    -686,  -436, -2522, -2522, -2522, -2522,  -497,  -488, -2522, -2522,
   -2521, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522,  1442, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522, -2522,
   -2522, -2522, -2522, -2522, -2522, -2522
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1214
static const yytype_int16 yytable[] =
{
      67,   839,  1857,    64,    65,   346,  1378,  1876,   104,   867,
    2000,  1088,  2002,  1075,  1473,  1049,  1052,    64,    65,  1924,
   -1068,  1044,   928,   929,  1608,   365,    64,    65,  1877,   285,
    2585,  1878,  1545,   106,  1550,   759,  1708,   309,   573,   962,
     762,  1444,  1879,   625,   832,    83,   340,    64,    65,   351,
      64,    65,   356,   398,  1020,  1436,   362,   403,  1079,   369,
    1580,  1581,  1582,   372,   374,  1880,  2656,   383,  1221,   930,
     390,   394,   536,  1081,   397,   287,    64,    65,   401,  1380,
    1021,   586,  1881,   402,  1293,   375,   963,    64,    65,  1172,
      64,    65,    64,    65,  1325,   735,   415,   419,   424,   425,
     429,   431,   517,   546,   828,  1089,  1329,    64,    65,  1332,
    1312,  1090,  1455,    64,    65,  1457,   518,   435,   386,   608,
    2689,   613,  1213,  1214,  1215,  1438,  1363,    64,    65,   215,
    1442,   694,   483,   731,   844,  1405,   833,  1443,   519,   563,
     484,  1637,  1638,   106,   289,   216, -1213,   587,   111,   564,
    1586,  1660,   444,  1183,   537,   387,   434,   520,   829,  1445,
    1463,  1184,   303,    64,    65,  1294,    84,  2712,    76,   868,
     173,    64,    65,   725,   521,   476,   565,   522,  1222,   558,
     497,   106,   255,  1298,    54,   379,   538,   588,    85,   157,
      64,    65,    86,  1381,  1670,   845,   931,   932,   554,   245,
      99,   106,   523,   524,   253,   818,   732,  1313,  2650,  1022,
     368,   834,  1045,   964,  1639,   821,   574,   547,   599,   100,
    1439,   265,  1675,  1054,  1845,   589,   498,  1055,   506,   114,
     511,   515,   726,   614,  1326,   115,   116,   695,   542,   307,
     606,   263,    87,   256,  1847,  1609,   684,  1709,  1173,  1437,
     566,  1286,   106,   571,   525,  1464,   632,   633,   111,  1023,
      64,    65,   526,   738,  1082,   257,   933,   106,  1665,   366,
     668,   101,   376,  1406,  2586,   404,   934,   935,   670,   673,
      88,   676,   680,   965,   682,  1024,   567,  1850,    89,    90,
     399,   559,  1046,   966,   692,   469,   111,   380,  1056, -1068,
     733,   470,  1091,   626,   702,   704,   615,   936,  1474,  1458,
    2657,   869,   760,  1925,   741,   258,   111,   763,  1057,   119,
    2651,   527,   528,   548,   967,  1882,   377,   678,   747,   748,
     750,    66,   752,  1080,   308,   391,   755,   756,   471,   114,
     381,   382,   159,  1407,  1083,   115,   116,   768,   770,   236,
    1456,   568,   102,   771,   261,   609,  1447,   616,   774,   776,
     339,   292,   472,   474,  2652,  1661,   777,   111,   149,   778,
     302,   350,   150,   151,  1467,  1108,  1440,   114,   304,  1058,
     727,   617,   111,   115,   116,  1408,   266,   788,   789,   749,
     713,   361,   529,   560,   793,   794,   795,   114,   796,   385,
     267,   305,   569,   115,   116,   600,  1666,   473,  1671,  1721,
    1722,  1465,   803,  1505,   555,  1826,   804,   582,   106,   109,
     561,   809,   810,   811,   812,   813,   814,   392,   815,   119,
     419,   819,   820,    64,    65,   290,  1676,   556,  1846,  1027,
     419,   822,  1842,   103,  1517,   291,  1109,   335,   114,   715,
     474,   475,   744,  1103,   115,   116,  1723,  1113,  1848,   275,
     583,   268,  1958,   114,   956,  1871,   317,   119,   604,   115,
     116,    64,    65,   259,  1059,   817,  1667,  1677,   149,  1626,
    1028,   299,   150,   151,  1741,  1742,  1630,   119,   446,   447,
     448,   449,   450,   451,   851,   852,   452,   453,   454,   455,
    1051,  1851,   393,   863,  1274,    64,    65,    55,   270,  1634,
     271,  1402,   860,   939,  1803,   318,   149,  1806,  1668,   260,
     150,   151,   940,   941,   319,   874,   301,  1110,  1114,   915,
     545,  1743,   957,   111,    64,    65,   149,  1347,   119,   880,
     150,   151,    64,    65,  1085,   531,  1348,  1349,    56,  1027,
    1138,   320,   237,   119,  1827,   109,   825,   324,  1430,    64,
      65,   109,  1830,   584,   864,   348,    57,   336,   911,   942,
     953,    64,    65,  1269,    77,   117,  1657,  1038,   881,   882,
     238,   540,   605,  1724,  1725,   630,   631,   149,  1202,   972,
    1028,   150,   151,  1350,  1111,    58,   900,   721,    64,    65,
    1308,  1663,   149,   927,   353,  1694,   150,   151,  1029,  1115,
      78,   675,   109,    59,   114,   706,  1678,    60,  1139,  1687,
     115,   116,  1030,  1031,   272,  1403,   745,  1309,    61,   971,
    1697,  1217,   109,  1275,   883,   532,  1270,  1681,   826,   412,
     884,   541,  1828,  1134,  1682,   337,  1047,   239,  1039,  1060,
    1831,  1903,   358,  1726,   736,   739,   742,  2466,  1744,  1745,
    1271,  1672,   240,  1727,  1728,   413,  1140,  1095,  1096,  1097,
    1098,  1679,  1431,  1099,   707,  1101,  1116,  1102,   419,  1104,
     354,    79,   359,  1276,   779,   360,  1145,   364,   885,  1908,
    1658,   371,  1829,   396,  1729,   406,   943,   944,   218,   294,
    1832,   408,  1135,   886,   119,   321,  1280,  1788,  1789,  1277,
     276,   117,  1165,  1032,  1033,  1664,   887,   117,  1029,   241,
    1351,  1352,   888,   219,  1129,  1141,   410,   889,  1746,  1040,
     273,  1755,  1030,  1031,   389,  1288,   432,  1272,  1747,  1748,
    1756,  1757,  2075,  2076,  1695,  1146,  1156,  1157,   780,  1158,
    1160,  1162,  1163,   149,  1790,   445,   220,   150,   151,  1076,
     242,  1546,    80,   221,  1175,  1176,   945,  1552,   117,  1749,
     243,  1180,  1181,   222,   223,  1673,   946,   947,   890,   456,
     224,   948,    62,  1130,   836,   467,  1273,  1758,   117,  2077,
    1353,  1187,  1188,  1189,  1522,   708,   295,   891,   457,  1696,
    1354,  1355,   892,   225,   893,  1356,  1523,   949,  1197,  1198,
    1199,    81,  1201,   419,  1203,   781,  1204,   479,  1131,   226,
    1547,   837,   709,  1032,  1033,   481,  1553,   894,   895,   508,
    1077,  1357,   534,   227,   228,   896,   535,  1207,   544,  1209,
     229,  1558,   550,    64,    65,    64,    65,   277,   551,  1211,
    1136,  1566,   278,   897,   279,   553,   419,  1218,  2159,   572,
     230,  1220,  1570,   578,  1449,   580,  2250,  2251,  2252,   296,
    1766,   602,  1528,  1142,  2167,   603,  1236,  1238,   297,  1767,
    1768,  1791,  1792,  1208,  1279,  1281,  1284,  2058,  2084,  2085,
     607,  2003,  1289,  1147,   798,   799,   231,  1295,  1688,   782,
    1559,    64,    65,  2186,   783,  2618,  1338,  2071,  1296,   898,
    1567,  1078,  1684,  1475,  1759,  1760,  2078,  2079,  1476,    64,
      65,  1571,  2108,  2629,  1304,  2111,  1769,   611,   923,   623,
    1368,  1132,   619,  2119,  1689,  2086,  2122,   628,   426,  1477,
    1478,   685,  1479,  1480,  2130,   629,   232,  2133,    64,  1159,
     620,  1793,   634,  1481,  2140,  1450,   233,    64,    65,    64,
      65,  1794,  1795,   767,   666,  1482,  1483,  1685,  1548,    64,
      65,  1166,  1167,  1484,  1554,   355,  1485,   686,  1027,   836,
     713,   667,  1063,  1283,  1761,   234,  2080,  1086,  1627,  1690,
    1419,  1441,  1796,  1486,  1762,  1763,  2081,  2082,  1369,  1764,
    1487,  1488,  1648,  2548,  1489,   669,  2253,  1169,  1170,   427,
     683,  1451,  1466,    64,    65,  1602,   837,  1420,   690,  1028,
    1421,  1472,   691,  1422,   621,  1765,   687,  2083,   693,   107,
     697,  1686,   699,   873,    69,  1500,   714,  1501,   705,   715,
      70,  2706,  1502,  1503,  1504,  1691,   711,  2709,  1560,   281,
    1423,   729,  1510,  1770,  1771,  1511,   730,  1513,  1568,  1384,
     753,  1490,  2087,  2088,    64,  1235,   109,  1370,  1371,  1572,
    1649,    64,    65,  1515,   716,  1516,   754,    71,  1424,  1519,
    1520,  1425,  1372,  1539,  1540,  1385,    64,    65,    64,    65,
     428,    64,    65,  1526,  1527,   775,   757,   419,  1529,  1530,
    1179,    72,  1508,  1509,  2746,  1532,  2747,  1533,   765,   717,
    1535,   110,  1536,   772,  1491,   773,  2093,  2094,  1386,  1589,
    1492,   311,  1373,  1772,  1387,   671,  1191,  2460,   688,   786,
    1388,   787,  2089,  1773,  1774,  1493,  1863,  1864,  1775,  1650,
    1651,   790,  2090,  2091,  1494,   791,    73,  1029,  1389,  1583,
      64,    65,  1819,  1584,  1652,  1585,   792,   718,   797,  1588,
     719,  1030,  1031,  2095,  1776,   112,   800,  1390,   802,  1048,
     418,  1495,  1496,  2092,  1594,   416,  1597,   823,  1599,  1600,
    1601,  1603,  1391,   831,   720,  1606,  1607,   721,    64,    65,
      74,  1426,  1497,  1615,  1653,   824,   672,   722,   806,   807,
    1620,   840,   282,  2240,  1621,  1622,  1623,   312,   842,  1541,
    1542,   847,  1392,   419,  1628,  1411,   849,  1631,   876,   313,
    1596,  1427,   117,   866,   871,   700,   877,   118,   878,   879,
    1644,   901,   909,  1646,  1164,  2419,  1498,  1543,   283,    64,
      65,  2322,  1412,  1375,  1376,  1413,   902,  1428,   903,  1393,
    2331,  2432,  1032,  1033,    93,   905,  2437,    64,    65,  2340,
     246,   907,  1394,   416,   417,   418,  1635,   912,   917,  2540,
      94,  2273,  2543,  1395,  2545,  1414,  1699,   913,  1700,   922,
     924,  1701,  1702,  1655,  1703,   925,  1704,  2557,  2558,   937,
    2096,  2097,  1706,  2289,  1707,   436,   701,   284,   314,   926,
    1396,  1713,   938,  1415,  2572,   950,  1416,    64,    65,  1823,
     958,   315,  1397,   960,  1398,  1399,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    95,   961,   247,   968,   969,  1469,
     970,    64,    65,  1825,  1400,  1375,  1376,  1026,   248,  1042,
    2098,  1037,  1043,    64,    65,  1841,   437,  1375,  1376,  1035,
    2099,  2100,    64,    65,  1868,  1092,  1820,  1094,  1822,  1824,
    1777,  1093,  1119,  1105,  1107,    96,  1118,   438,   439,  1778,
    1779,   249,  1120,  1121,   440,  1122,  1123,  1126,  1124,  1125,
    1835,  2101,  1127,  1514,  1838,    64,    65,  1870,  1144,  1375,
    1376,  1149,   441,  1521,  1150,   325,  1417,  1151,  1152,    97,
    1153,  1818,   442,  1154,  1155,   326,  1168,  1171,  1867,  1869,
    1178,  1185,  1177,  1182,  1186,  1190,  1780,   250,  1875,  1192,
    1193,  1225,  1886,  1205,  1206,  1226,  1418,  1227,  1232,  1892,
     251,  2544,   327,  1233,  1234,  1291,  1285,  1297,  1287,  1301,
    1320,  1302,  1305,  1897,  2556,  1306,  1307,  1315,  1899,  2561,
    1316,  1330,  1901,  1317,  1904,  1905,  1318,  1907,  1909,  1910,
    1321,  1913,  1322,  1323,  1916,  1917,  1918,  1919,  1920,  1921,
    1922,  1923,  1926,  1928,  1929,  1324,  1331,  1931,  1932,  1933,
    1934,  1333,  1334,  1340,  1342,  1343,  2451,  1940,  1941,  1345,
      83,  1943,  1944,  1945,  1358,  2455,  1947,  1948,  1359,  1364,
    1612,  1613,  1379,  1360,  1361,  1365,   328,  1366,  1382,  1951,
    1952,  1383,  1953,  1954,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   329,  1781,  1782,  1404,  2474,  1410,  1429,  2476,
     458,  1409,  2477,  1432,  2478,  1433,  1434,  1448,  2207,  1435,
    1974,  1975,  1976,  1454,  1452,  1977,  1459,  1470,   459,  2208,
    1979,  1982,  1453,  1984,  1985,  1986,  1460,  1987,  1988,  1461,
    1990,  1471,  1531,  1993,  1994,   460,   330,  1462,  1468,  1507,
    1518,  1524,  1997,  1525,  1064,  2209,  1534,   461,  1537,  2001,
    1538,  1562,  1065,  1009,  2006,  2007,  1551,   331,  1066,  1556,
    1557,    84,  2009,  1783,  1563,   462,  1981,  1010,  1564,   463,
    1565,  2011,  1574,  1784,  1785,  1575,  1011,  1576,  1786,  1067,
     464,  1577,  2210,    85,  1578,  1064,  1012,  1999,  1579,  2191,
    1591,  1592,   332,  1065,  1593,  1598,  1604,  1605,  1616,  1066,
    1611,  1068,  1617,  1618,  1787,  1629,  1632,  2039,   333,  1069,
    1633,  1636,  1645,  -432,  1647,  1669,  1013,  1680,  1656,   465,
    1067,  1311,  1692,  1659,  1674,  1683,  1705,  1693,  1698,  2047,
    2048,  1711,  1816,  2024,  2050,  1014,  2705,    87,  1821,  1712,
    2053,  1717,  1068,  2030,  2245,  1736,  1070,  1739,  2035,  1750,
    1069,  1752,  1754,  1362,  1071,  1798,  1799,  1800,  1804,  1805,
    1834,  1797,  1807,  1836,  1808,  2546,  1809,  1840,  1812,  1992,
    1815,  1833,  1837,  1843,  1844,    88,  1849,  1854,  1852,  1853,
    1015,  1855,  1856,    89,    90,  2259,  1858,  1070,  1866,  1859,
    1860,  2570,  1865,  1884,  1872,  1071,  1072,  1861,  1889,  1900,
    1902,  1906,  1885,  1914,  1915,  1888,  1862,  1073,  1937,  1930,
    1949,  1950,  2102,  1955,  1893,  1894,  1956,  1016,  1959,  1957,
    2113,  1960,  1961,  1074,  1962,  1898,  1963,  2124,  1964,  1965,
    1966,  1967,  2211,  1968,  2212,  1969,  1970,  1072,  1971,  1972,
    1973,  1017,  1989,  1991,  1995,  2008,  2012,  2154,  1073,  2155,
    2014,  2157,  2015,  2016,  2017,  2049,  2262,  2051,  2052,  2423,
    2055,  2056,  2057,   160,  1074,   161,  2059,  2060,  2446,  2061,
    2168,  2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,  2064,
    1018,  2066,  1019,  2616,  2617,  2067,  2068,  2620,  2213,  2622,
    2072,   286,  2073,  2109,  2182,   162,  2184,  2074,  2103,  2104,
    2105,  2627,  2628,   163,  2110,  2120,  2632,  2633,  2112,  2114,
    2636,  2115,  2116,  2190,   419,  2637,  2638,  2121,  2131,  2194,
    2123,  2125,  2126,  2127,  2132,  2583,  2134,  2135,  2197,  2198,
    2199,  2200,  2201,  2202,  2203,  2204,  2205,  2206,  2136,  2137,
    2219,  2220,  2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,
    2229,  2230,  2141,  2233,  2142,  2234,  2235,  2236,  2143,  2675,
     164,  2145,  2676,  2642,  2146,  2148,  2149,  2679,  2151,   419,
    2246,  2158,   433,  2682,  2160,  2163,  2166,  2177,  2685,  2178,
    2648,  2179,  2180,  2181, -1081,  2185,  2232,  2237,  2238,  2241,
    2404,  2405,  2247,  2407,  2408,  2249,  2265,  2411,  2412,  2263,
    2264,  2268,  2254,  2276,  2255,  2279,  2256,  2280,  2258,   165,
     419,  2260,  2281,  2261,  2282,  2308,   805,  2310,  2312,  2315,
    2266,  2267,  2317,  2318,  2319,   166,   167,  2271,  2323,  2272,
    2324,  2642,   168,  2275,   169,  2325,  2277,  2326,  2327,  2328,
    2332,   495,  2333,   502,   505,  2334,   510,   514,  2335,  2336,
    2727,  2337,  2341,  2730,  2342,  2211,  2343,  2350,  2353,  2458,
     170,  2361,  2364,  2367,  2368,  2370,  2373,  2374,  2375,  2378,
    2383,  2387,  2403,  2741,   576,  2424,  2425,  2426,  2427,  2428,
    2311,  2453,  2429,  2454,  2278,  2431,  2456,  2748,  2462,  2463,
    2749,  2750,   591,   597,  1714,  1715,  1716,  2465,   785,  2468,
     681,  2469,  2470,  2480,  1718,  1719,  1720,  2471,  2473,  2479,
    2489,  1731,  1732,  1733,  2493,  2500,  1734,  1735,  2506,  1737,
    1738,  2510,  2513,  2309,  2519,   171,  2527,  2538,  2720,  2549,
    2550,  2654,  2551,  2552,  2553,  2554,  2376,  2569,  2576,  2578,
    2591,  2579,  2581,   677,  2582,  2690,  2588,  2615,  2621,  1810,
    1811,  2624,  2625,  1813,  1814,  2626,  2631,  2645,  2430,  2646,
     766,  2647,  2649,   698,  2659,  2669,  2677,  2639,  2680,  2683,
    1328,  2692,  2693,  2694,  2701,  2704,  2691,  2714,  2715,  2721,
    2729,  2687,  2733,  2734,  2381,  2736,  2740,  2742,  1128,  2743,
    2744,  2745,     0,     0,  2162,  2388,  2389,  2390,  2391,  2392,
    2393,  2394,  2395,  2396,  2397,  2398,  2530,  2696,  2698,     0,
    2533,  2401,     0,     0,     0,   419,   419,     0,   419,   419,
       0,     0,   419,   419,  2413,  2414,  2415,  2416,  2417,  2418,
    2187,  2420,  2421,  2422,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2567,  2433,  2434,  2435,
    2436,     0,  2438,  2439,  2440,  2441,  2442,  2443,     0,  2445,
       0,     0,  2449,  2450,     0,     0,     0,     0,     0,     0,
       0,   801,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2457,   808,     0,   419,  2459,     0,     0,     0,  2461,
       0,   816,     0,  2464,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   850,
       0,     0,     0,     0,     0,     0,   855,     0,     0,   856,
       0,     0,     0,     0,   857,     0,     0,     0,   859,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   853,
     854,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   858,     0,     0,     0,     0,   861,     0,     0,
       0,     0,     0,     0,     0,     0,   872,     0,     0,     0,
     916,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2521,     0,     0,     0,  2523,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2524,  2525,     0,     0,     0,     0,
    2529,   419,     0,     0,  2532,   419,     0,     0,     0,     0,
    2537,     0,     0,  2541,  2542,     0,     0,     0,     0,     0,
       0,     0,   918,   919,   920,   921,     0,     0,     0,     0,
       0,     0,  2559,  2560,     0,  2562,  2563,  2564,  2565,  2566,
       0,   419,  2568,     0,     0,     0,  2571,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2580,     0,
       0,  1100,     0,  2584,     0,     0,     0,     0,  1106,     0,
       0,     0,     0,     0,     0,     0,  2054,     0,  2592,     0,
       0,     0,  1062,     0,     0,     0,     0,     0,     0,  2062,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2065,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2603,     0,     0,     0,  1730,  2607,     0,
    2609,     0,     0,     0,    64,    65,  2612,     0,     0,  1740,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2619,
     107,     0,     0,     0,     0,     0,     0,  1801,  1802,     0,
       0,     0,     0,     0,     0,     0,     0,  2630,  2664,     0,
       0,  2634,     0,     0,     0,     0,     0,     0,  2452,     0,
       0,  2150,     0,     0,     0,     0,     0,   109,     0,     0,
       0,  2653,     0,     0,     0,  1194,     0,     0,     0,     0,
       0,     0,  1196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2667,     0,     0,     0,     0,  2672,
       0,  2674,     0,     0,     0,     0,     0,     0,  2678,     0,
       0,     0,   110,  2681,     0,     0,     0,     0,  2684,     0,
       0,  1195,     0,     0,     0,     0,     0,  1212,     0,     0,
       0,     0,  1216,  1200,     0,  1219,     0,     0,     0,     0,
    2695,  2697,     0,     0,     0,     0,  1228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2707,   112,     0,  2708,     0,
    1210,  2710,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2716,  2717,  2718,  2719,     0,     0,     0,     0,
       0,     0,  1230,  1231,  2728,     0,     0,  2731,     0,     0,
       0,     0,  2703,     0,  2735,     0,  2737,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,  2723,     0,     0,  2726,     0,     0,
       0,  1300,     0,     0,     0,     0,  1367,     0,     0,  2555,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2274,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2573,
       0,     0,     0,  2577,  2284,  2285,  2286,     0,     0,  2288,
       0,  2290,  2291,     0,     0,  2293,  2294,  2295,     0,     0,
    2297,  2298,     0,     0,  2301,     0,  2303,  2304,     0,  2306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2313,     0,     0,     0,  1446,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,  2345,  2346,  2347,  2348,  2349,     0,  2351,  2352,
       0,     0,     0,  2356,  2357,  2358,  2359,  2360,  1506,  2362,
    2363,     0,     0,     0,     0,   342,     0,     0,  1512,     0,
       0,     0,   343,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2377,     0,     0,
    2380,     0,     0,     0,     0,  2384,     0,     0,  2385,     0,
       0,     0,  2063,     0,     0,     0,     0,     0,     0,     0,
    2069,  2070,     0,     0,     0,     0,     0,  2400,     0,  1590,
       0,     0,     0,     0,     0,  2106,  2107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2117,  2118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2128,  2129,  1614,
       0,     0,     0,     0,     0,     0,     0,  2138,  2139,  1587,
       0,     0,     0,  2144,  1624,     0,     0,     0,     0,     0,
       0,     0,     0,  2147,     0,     0,  1595,     0,     0,     0,
       0,     0,     0,     0,  1642,  1643,     0,     0,  2713,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1619,     0,     0,     0,  2467,     0,     0,     0,     0,     0,
    1625,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1641,     0,
       0,     0,     0,     0,  2475,     0,     0,     0,     0,  1654,
       0,     0,     0,  2482,  1662,     0,  2484,  2485,  2486,  2487,
    2488,     0,  2490,  2491,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2495,  2496,  2497,  2498,  2499,     0,
    2501,  2502,     0,  2504,     0,     0,   344,     0,   345,     0,
       0,     0,     0,  2507,  2508,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2511,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2518,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2526,     0,     0,     0,     0,     0,     0,
    2531,     0,     0,  2534,  2535,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,  1817,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1887,     0,     0,     0,     0,     0,     0,  1839,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2594,     0,     0,     0,     0,     0,     0,     0,     0,
    2314,     0,  2597,     0,  2598,     0,  1873,     0,  2600,  1874,
    2316,     0,     0,     0,  2320,  2321,     0,     0,     0,  1890,
    1891,  2604,     0,  2329,  2330,     0,     0,  1895,     0,     0,
    1936,     0,  2338,  2339,  1896,     0,  1942,     0,  2344,     0,
    2614,     0,     0,     0,     0,     0,     0,     0,  2354,  2355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2365,
    2366,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2369,     0,     0,     0,  1935,     0,     0,  1938,  1939,  2371,
       0,  2372,     0,     0,     0,     0,  1946,     0,     0,     0,
       0,     0,  2660,     0,     0,  2661,     0,     0,  2662,     0,
    2663,     0,     0,     0,     0,     0,     0,     0,     0,  2665,
    2666,     0,  2668,  1978,  2670,  2671,     0,  2673,     0,  1983,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1998,     0,     0,     0,     0,     0,  2004,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1980,     0,     0,  2010,     0,     0,  2700,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2019,     0,
    1996,     0,     0,     0,     0,     0,  2026,     0,     0,     0,
       0,     0,     0,     0,     0,  2005,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2732,     0,  2013,     0,     0,
       0,     0,  2018,     0,     0,  2020,     0,  2021,  2022,  2023,
    2025,     0,     0,  2027,     0,     0,  2028,     0,     0,  2029,
    2031,     0,  2032,  2033,  2034,  2036,     0,  2037,  2038,     0,
       0,  2483,     0,  2040,  2041,  2042,     0,     0,  2043,  2044,
       0,  2492,     0,     0,  2045,  2046,     0,     0,     0,     0,
    2494,     0,     0,     0,     0,     0,     0,     0,     0,  2503,
       0,     0,     0,     0,     0,     0,  2505,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2509,     0,     0,
       0,     0,     0,  2512,     0,     0,  2514,     0,     0,  2515,
       0,     0,     0,   106,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2152,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2165,     0,   109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2153,     0,
       0,     0,  2156,     0,     0,     0,     0,  2188,  2189,     0,
       0,     0,     0,     0,  2161,     0,     0,  2164,     0,     0,
     110,     0,     0,     0,  2192,  2193,     0,     0,     0,  2195,
    2196,     0,     0,     0,     0,  2593,     0,     0,   111,  2595,
       0,     0,     0,     0,     0,     0,  2596,  2183,     0,     0,
       0,     0,  2599,     0,     0,     0,  2601,     0,     0,  2602,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2239,
       0,     0,  2243,  2244,   112,     0,     0,     0,     0,     0,
    2248,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2231,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,  2257,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,   115,   116,     0,     0,     0,
    2269,   117,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2283,     0,     0,     0,     0,  2287,     0,     0,
       0,     0,     0,  2292,     0,     0,     0,     0,  2296,     0,
       0,     0,  2299,     0,     0,  2302,  2270,     0,  2305,     0,
    2307,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   635,   636,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,  2300,     0,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   637,    64,    65,     0,   149,     0,
     638,     0,   150,   151,     0,     0,     0,   639,     0,   640,
       0,   107,     0,     0,   641,     0,     0,   642,     0,     0,
       0,     0,     0,   643,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   644,     0,     0,     0,     0,     0,   645,
       0,     0,     0,     0,     0,     0,   513,     0,   646,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,   647,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2379,     0,     0,  2382,     0,     0,
       0,     0,   648,     0,     0,  2386,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,   649,   109,     0,
       0,  2399,     0,     0,  2402,  2444,   650,   651,     0,  2406,
       0,     0,  2409,  2410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   652,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,   112,   653,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   654,     0,   655,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   656,     0,     0,
       0,     0,   657,     0,     0,     0,     0,     0,   658,     0,
       0,     0,     0,     0,     0,   659,     0,   112,     0,     0,
    2472,     0,     0,     0,     0,     0,     0,     0,     0,   118,
       0,     0,     0,   660,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   661,   662,     0,   663,
    1229,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,     0,     0,     0,
    2516,     0,     0,     0,   117,     0,  2520,     0,     0,   118,
    2522,     0,     0,     0,     0,     0,     0,     0,     0,   664,
       0,     0,     0,     0,     0,     0,  2528,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2517,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   110,     0,     0,
    2536,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2547,     0,     0,     0,     0,  2589,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2590,     0,   107,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2623,     0,     0,   107,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,     0,     0,     0,  2605,  2606,
       0,  2608,     0,   118,     0,     0,  2610,  2611,     0,     0,
       0,  2613,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     486,   487,     0,     0,   488,     0,   110,     0,   592,   107,
       0,     0,     0,     0,  2635,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   489,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,  2655,     0,  2686,
       0,     0,     0,     0,     0,     0,     0,     0,   593,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2699,
     112,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     112,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,     0,     0,   594,  2724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,  2702,   491,
       0,     0,   118,     0,     0,     0,  2738,     0,     0,  2739,
       0,     0,     0,     0,     0,  2711,     0,     0,     0,   492,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
    2722,     0,   118,  2725,     0,     0,     0,     0,     0,     0,
       0,   595,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   493,     0,     0,     0,     0,   118,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     494,     0,     0,   596,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   973,   974,   975,     0,     0,  1239,
    1240,  1241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   976,   977,     0,     0,   978,  1242,  1243,   979,
       0,  1244,   107,     0,     0,     0,   980,     0,  1245,     0,
     981,  1246,     0,     0,     0,  1247,     0,     0,   982,   983,
       0,     0,     0,  1248,  1249,     0,   984,   985,     0,     0,
       0,  1250,     0,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,   986,     0,     0,     0,     0,     0,   987,
       0,     0,     0,   988,   989,     0,     0,   990,  1251,  1252,
     107,     0,  1253,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   991,     0,     0,     0,     0,  1254,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,   992,     0,     0,     0,     0,  1255,     0,     0,
     500,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   993,     0,     0,     0,     0,  1256,
     107,     0,     0,     0,     0,     0,     0,     0,  1257,     0,
       0,     0,     0,     0,     0,     0,     0,   994,   112,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1299,     0,     0,
       0,     0,     0,     0,     0,   995,     0,   996,     0,     0,
    1258,     0,  1259,   997,   998,     0,     0,     0,  1260,  1261,
       0,   107,     0,     0,     0,     0,     0,   999,  1000,     0,
       0,     0,     0,  1262,     0,   117,   112,  1001,  1002,     0,
     118,     0,   110,  1263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1003,     0,  1004,     0,     0,  1264,     0,
    1265,     0,     0,     0,     0,     0,     0,  1005,     0,  1006,
    1266,     0,     0,     0,     0,  1007,     0,     0,     0,     0,
    1267,     0,     0,     0,     0,     0,   112,     0,   118,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1008,
       0,     0,     0,     0,  1268,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   112,   118,     0,
       0,     0,     0,     0,   501,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     1,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
     175,     0,    10,   176,     0,   177,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
      14,    15,     0,     0,   178,     0,   179,   180,   181,     0,
       0,     0,     0,     0,     0,     0,   182,     0,   183,     0,
       0,     0,     0,   184,     0,   185,   186,   187,     0,     0,
      16,     0,   188,     0,   189,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,    20,    21,     0,     0,     0,     0,     0,    22,
       0,     0,     0,   190,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,   191,
       0,    25,    26,    27,     0,     0,    28,    29,     0,   192,
     193,     0,     0,   194,     0,     0,     0,   195,   951,   196,
      30,     0,     0,   952,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    32,    33,     0,     0,
     197,   198,     0,     0,   199,     0,     0,     0,     0,    34,
       0,    35,     0,     0,   200,     0,  1336,     0,    36,     0,
       0,    37,     0,     0,    38,     0,    39,     0,    40,   201,
     202,     0,     0,    41,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
     204,     0,   205,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    47,     0,     0,     0,     0,   206,    48,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   207,   208,     0,     0,     0,     0,     0,     0,     0,
     209,     0,     0,     0,     0,     0,     0,   210,     0,     0,
       0,    51,     0,   211,     0,   212,     0,    52,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,   213,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1337
};

static const yytype_int16 yycheck[] =
{
       3,   477,  1422,     3,     4,    50,   974,    27,    11,     4,
    1621,     5,  1623,   655,     5,   650,   651,     3,     4,     5,
       0,    17,    14,    15,    46,    32,     3,     4,    48,    32,
      32,    51,  1121,     4,  1123,     4,    20,    40,    16,    14,
       4,   121,    62,     5,    78,    28,    49,     3,     4,    52,
       3,     4,    55,     4,     4,    27,    59,     5,     5,    62,
    1149,  1150,  1151,    66,    67,    85,    32,    70,   132,    61,
      73,    74,     6,    17,    77,    32,     3,     4,    81,   121,
      30,   148,   102,    86,    17,     4,    61,     3,     4,    97,
       3,     4,     3,     4,    17,    66,    99,   100,   101,   102,
     103,   104,    45,    66,   191,    99,   945,     3,     4,   948,
     163,   105,     5,     3,     4,    27,    59,   120,   137,     5,
    2641,     5,   855,   856,   857,    36,   965,     3,     4,    83,
     257,   148,   167,    34,   191,    27,   170,   264,    81,    37,
     175,    24,    25,     4,     5,    99,     0,   214,   119,    47,
       4,    21,   155,     4,    88,   174,   113,   100,   245,   239,
      36,    12,    61,     3,     4,    98,   149,  2688,   279,   164,
     143,     3,     4,    61,   117,   178,    74,   120,   242,    21,
     183,     4,     5,   916,    66,   185,   120,   254,   171,    33,
       3,     4,   175,   235,    21,   252,   188,   189,    61,    16,
      40,     4,   145,   146,   227,   433,   107,   260,   185,   159,
     123,   245,   208,   188,    97,   443,   194,   180,     4,    59,
     131,    57,    21,    36,    21,   292,   183,    40,   185,   200,
     187,   188,   120,   117,   157,   206,   207,   254,   195,   192,
     243,     5,   225,    66,    21,   267,   291,   231,   256,   221,
     148,   893,     4,   210,   197,   131,   259,   260,   119,   209,
       3,     4,   205,    66,   208,    88,   258,     4,    27,   276,
     273,   111,   191,   165,   276,   223,   268,   269,   281,   282,
     263,   284,   285,   258,   287,   235,   184,    21,   271,   272,
     241,   133,   288,   268,   297,   185,   119,   297,   111,   279,
     201,   191,   296,   265,   307,   308,   190,   299,   299,   221,
     276,   306,   281,   299,    66,   138,   119,   281,   131,   290,
     297,   264,   265,   286,   299,   345,   245,   284,   331,   332,
     333,   287,   335,   280,   287,    78,   339,   340,   228,   200,
     340,   341,    14,   235,   288,   206,   207,   350,   351,    21,
     243,   249,   192,   356,    26,   241,   998,   241,   361,   362,
     287,    33,   252,   340,   341,   235,   369,   119,   339,   372,
      37,   287,   343,   344,  1016,    40,   287,   200,   277,   192,
     268,   265,   119,   206,   207,   277,   222,   390,   391,   221,
      61,   287,   335,   235,   397,   398,   399,   200,   401,    71,
     236,   300,   300,   206,   207,   191,   165,   297,   235,    14,
      15,   287,   415,  1048,   277,  1383,   419,    44,     4,    56,
     262,   424,   425,   426,   427,   428,   429,   170,   431,   290,
     433,   434,   435,     3,     4,   296,   235,   300,   235,    63,
     443,   444,  1410,   283,  1079,   306,   111,     4,   200,   120,
     340,   341,    13,   681,   206,   207,    61,    40,   235,    66,
      87,   297,  1551,   200,    87,  1433,    50,   290,     6,   206,
     207,     3,     4,   296,   287,   432,   235,    27,   339,  1212,
     104,     4,   343,   344,    14,    15,  1219,   290,   160,   161,
     162,   163,   164,   165,   497,   498,   168,   169,   170,   171,
     124,   235,   245,     4,    30,     3,     4,    12,    64,     4,
      66,   121,   515,     5,  1353,    99,   339,  1356,   277,   342,
     343,   344,    14,    15,   108,   528,    88,   192,   111,   574,
     197,    61,   155,   119,     3,     4,   339,     5,   290,   542,
     343,   344,     3,     4,   281,   209,    14,    15,    53,    63,
      87,   135,    88,   290,   105,    56,   103,     4,   121,     3,
       4,    56,   105,   190,   521,   227,    71,   124,   571,    61,
     615,     3,     4,    66,     4,   212,   121,    40,     4,     5,
     116,     5,   120,   188,   189,   257,   258,   339,   816,   634,
     104,   343,   344,    61,   259,   100,   553,   268,     3,     4,
     155,   121,   339,   606,     0,    27,   343,   344,   232,   192,
      40,   283,    56,   118,   200,    61,   166,   122,   155,  1261,
     206,   207,   246,   247,   180,   235,   187,   182,   133,   632,
    1272,   859,    56,   159,    60,   299,   129,   257,   185,     5,
      66,    65,   193,    61,   264,   202,   649,   183,   111,   652,
     193,   221,   264,   258,   326,   327,   328,  2268,   188,   189,
     153,   121,   198,   268,   269,    31,    61,   670,   671,   672,
     673,   221,   235,   676,   120,   678,   259,   680,   681,   682,
       5,   111,     5,   209,    30,     4,    61,     5,   114,   221,
     235,   123,   243,     5,   299,    31,   188,   189,    19,    70,
     243,     5,   120,   129,   290,   289,   204,    14,    15,   235,
     201,   212,   757,   337,   338,   235,   142,   212,   232,   255,
     188,   189,   148,    44,    61,   120,     5,   153,   258,   192,
     286,     5,   246,   247,   195,   204,   192,   230,   268,   269,
      14,    15,    14,    15,   166,   120,   749,   750,    94,   752,
     753,   754,   755,   339,    61,     4,    77,   343,   344,    40,
     296,    61,   192,    84,   767,   768,   258,    61,   212,   299,
     306,   774,   775,    94,    95,   235,   268,   269,   204,   117,
     101,   273,   287,   120,   137,   118,   279,    61,   212,    61,
     258,   794,   795,   796,     5,   241,   167,   223,    66,   221,
     268,   269,   228,   124,   230,   273,    17,   299,   811,   812,
     813,   241,   815,   816,   817,   161,   819,   279,   155,   140,
     120,   174,   268,   337,   338,   167,   120,   253,   254,    33,
     111,   299,     5,   154,   155,   261,    89,   840,    16,   842,
     161,    61,    66,     3,     4,     3,     4,   338,   228,   852,
     268,    61,   343,   279,   345,   278,   859,   860,  1826,    89,
     181,   864,    61,    72,   130,    31,  1955,  1956,  1957,   240,
       5,     5,  1100,   268,  1842,     4,   879,   880,   249,    14,
      15,   188,   189,   840,   887,   888,   889,  1726,    14,    15,
       4,  1624,   895,   268,     4,     5,   217,   900,   130,   245,
     120,     3,     4,  1871,   250,  2541,   951,  1746,   911,   335,
     120,   192,   166,    22,   188,   189,   188,   189,    27,     3,
       4,   120,  1761,  2559,   927,  1764,    61,     5,   600,     5,
      82,   268,    93,  1772,   166,    61,  1775,     4,    40,    48,
      49,    54,    51,    52,  1783,     5,   267,  1786,     3,     4,
     111,   258,     5,    62,  1793,   221,   277,     3,     4,     3,
       4,   268,   269,   123,     5,    74,    75,   221,   268,     3,
       4,     4,     5,    82,   268,    59,    85,    90,    63,   137,
      61,     4,   654,    17,   258,   306,   258,   659,  1216,   221,
      22,   994,   299,   102,   268,   269,   268,   269,   150,   273,
     109,   110,    82,  2423,   113,     5,  1974,     4,     5,   111,
       4,   277,  1015,     3,     4,    59,   174,    49,     4,   104,
      52,  1024,     4,    55,   185,   299,   139,   299,     4,    19,
       5,   285,     4,    79,   185,  1038,   117,  1040,    97,   120,
     191,  2677,  1045,  1046,  1047,   277,   120,  2683,   268,    39,
      82,     5,  1055,   188,   189,  1058,     4,  1060,   268,    40,
     265,   170,   188,   189,     3,     4,    56,   219,   220,   268,
     150,     3,     4,  1076,   155,  1078,     4,   228,   110,  1082,
    1083,   113,   234,    42,    43,    66,     3,     4,     3,     4,
     192,     3,     4,  1096,  1097,    12,     4,  1100,  1101,  1102,
      12,   252,     4,     5,  2740,  1108,  2742,  1110,     4,   190,
    1113,   101,  1115,     4,   223,     5,    14,    15,    99,  1164,
     229,    26,   274,   258,   105,    40,   798,    59,   241,     4,
     111,   195,   258,   268,   269,   244,     4,     5,   273,   219,
     220,     4,   268,   269,   253,     4,   297,   232,   129,  1152,
       3,     4,     5,  1156,   234,  1158,     4,   238,     4,  1162,
     241,   246,   247,    61,   299,   155,     5,   148,     5,   254,
      11,   280,   281,   299,  1177,     9,  1179,     5,  1181,  1182,
    1183,  1184,   163,   167,   265,  1188,  1189,   268,     3,     4,
     341,   223,   301,  1196,   274,   264,   111,   278,   421,   422,
    1203,     4,   192,  1936,  1207,  1208,  1209,   112,     4,   168,
     169,   175,   193,  1216,  1217,    22,   167,  1220,     5,   124,
    1177,   253,   212,   194,   194,    40,     5,   217,     4,   194,
    1233,   186,   221,  1236,     6,  2203,   345,   196,   228,     3,
       4,  2080,    49,     7,     8,    52,   186,   279,    66,   230,
    2089,  2219,   337,   338,    83,    66,  2224,     3,     4,  2098,
      26,    66,   243,     9,    10,    11,  1223,     5,     5,  2415,
      99,  2004,  2418,   254,  2420,    82,  1279,   222,  1281,     4,
       4,  1284,  1285,  1240,  1287,     4,  1289,  2433,  2434,    87,
     188,   189,  1295,  2026,  1297,    35,   111,   287,   203,   194,
     281,  1304,     5,   110,  2450,    87,   113,     3,     4,     5,
       5,   216,   293,     4,   295,   296,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   173,     4,   112,     5,     5,  1021,
       4,     3,     4,     5,   335,     7,     8,     5,   124,     4,
     258,    17,     5,     3,     4,     5,   106,     7,     8,    99,
     268,   269,     3,     4,     5,    17,  1379,     4,  1381,  1382,
       5,    17,    97,     4,     4,   214,     4,   127,   128,    14,
      15,   157,     5,     5,   134,    87,     4,    87,     5,     5,
    1403,   299,     5,  1075,  1407,     3,     4,     5,     4,     7,
       8,     5,   152,  1085,     5,    37,   223,     4,     4,   248,
       5,  1378,   162,     5,     5,    47,     4,     4,  1431,  1432,
       5,     4,    12,    12,     4,     4,    61,   203,  1441,     4,
       4,   164,  1445,     5,     5,     5,   253,     4,     4,  1452,
     216,  2419,    74,     5,     4,   281,   253,     5,   253,     4,
     266,     5,     5,  1466,  2432,     5,     5,     4,  1471,  2437,
       4,     4,  1475,     5,  1477,  1478,     5,  1480,  1481,  1482,
     266,  1484,     5,     5,  1487,  1488,  1489,  1490,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,     5,     4,  1500,  1501,  1502,
    1503,     5,     5,     5,     5,     5,  2239,  1510,  1511,     5,
      28,  1514,  1515,  1516,     4,  2248,  1519,  1520,     4,     4,
    1192,  1193,   235,     5,     5,     5,   148,     5,   235,  1532,
    1533,   105,  1535,  1536,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   184,   188,   189,     5,  2299,   105,    40,  2302,
      53,   137,  2305,   235,  2307,   105,     5,    40,    55,   208,
    1583,  1584,  1585,     5,   239,  1588,     4,     4,    71,    66,
    1593,  1594,   208,  1596,  1597,  1598,     5,  1600,  1601,     5,
    1603,     4,     4,  1606,  1607,    88,   228,   208,   208,     5,
       5,     5,  1615,     5,    91,    92,   111,   100,   111,  1622,
       4,     4,    99,    66,  1627,  1628,     5,   249,   105,     5,
       5,   149,  1635,   258,     5,   118,  1593,    80,     5,   122,
       4,  1644,     5,   268,   269,     5,    89,     4,   273,   126,
     133,     5,   129,   171,     5,    91,    99,   175,     4,  1887,
       5,     5,   284,    99,    12,    12,     6,     4,     4,   105,
       5,   148,     4,     4,   299,     4,    38,  1680,   300,   156,
      38,     5,     4,     0,     5,   137,   129,   166,   235,   172,
     126,   932,     4,   235,   235,   121,   194,   243,   204,  1702,
    1703,     4,  1374,  1660,  1707,   148,  2674,   225,  1380,     4,
    1713,     4,   148,  1670,  1942,     4,   193,     4,  1675,     5,
     156,     5,     5,   964,   201,     5,     5,     5,     4,     4,
    1402,   266,     5,  1405,     4,  2421,     4,  1409,     4,     6,
       5,     5,     5,   235,   235,   263,   235,     4,   303,   303,
     193,     4,     4,   271,   272,  1983,     4,   193,  1430,     4,
       4,  2447,     4,     4,  1436,   201,   243,   303,     5,     5,
     221,   221,  1444,   221,   221,  1447,   303,   254,     5,   221,
       5,     4,   266,     5,  1456,  1457,     5,   230,     5,     4,
     266,     5,     4,   270,     4,  1467,     4,   266,     5,     5,
       4,     4,   279,     5,   281,     5,     4,   243,     5,     5,
       4,   254,     5,     4,     4,     4,     4,  1820,   254,  1822,
       5,  1824,     5,     5,     5,     4,    12,     5,     4,   346,
       5,     5,     5,    44,   270,    46,     4,     4,   299,     5,
    1843,  1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,     4,
     293,     5,   295,  2539,  2540,     5,     5,  2543,   335,  2545,
       4,    32,     4,     4,  1867,    76,  1869,     5,     5,     5,
       5,  2557,  2558,    84,     4,     4,  2562,  2563,     5,     5,
    2566,     5,     5,  1886,  1887,  2571,  2572,     4,     4,  1892,
       5,     5,     5,     5,     4,     6,     5,     5,  1901,  1902,
    1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,     5,     5,
    1913,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,     4,  1926,     4,  1928,  1929,  1930,     5,  2615,
     141,     4,  2618,  2575,     4,     4,     4,  2623,     5,  1942,
    1943,     5,   113,  2629,     5,     5,     5,     4,  2634,     4,
       6,     5,     4,     4,   279,     5,     5,     4,     4,     4,
    2188,  2189,     4,  2191,  2192,     4,     4,  2195,  2196,     5,
       5,     4,  1975,     5,  1977,     5,  1979,     5,  1981,   190,
    1983,  1984,     5,  1986,     5,     4,   420,     5,     4,     4,
    1993,  1994,     5,     5,     5,   206,   207,  2000,     4,  2002,
       4,  2643,   213,  2006,   215,     5,  2009,     5,     5,     5,
       4,   182,     4,   184,   185,     5,   187,   188,     5,     5,
    2706,     5,     4,  2709,     4,   279,     5,     4,     4,  2257,
     241,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,  2729,   215,   346,   346,   346,   346,   346,
    2053,     4,   346,     4,  2011,   346,     4,  2743,     5,     5,
    2746,  2747,   233,   234,  1305,  1306,  1307,     4,   376,     5,
     286,     4,     4,     4,  1315,  1316,  1317,     5,     5,     5,
       4,  1322,  1323,  1324,     4,     4,  1327,  1328,     4,  1330,
    1331,     4,     4,  2050,     4,   306,     4,     4,  2699,     5,
       4,  2584,     5,     5,     5,     4,  2151,     5,     5,     4,
    2480,     5,     5,   284,     4,   346,     5,     4,     4,  1360,
    1361,     5,     4,  1364,  1365,     4,     4,     4,  2214,     5,
     346,     5,     4,   304,     4,     4,     4,  2573,     5,     4,
     944,     5,     5,     4,     4,     4,  2643,     5,     5,     5,
       4,  2639,     5,     5,  2157,     5,     4,     4,   716,     5,
       5,     5,    -1,    -1,  1836,  2168,  2169,  2170,  2171,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2404,  2653,  2654,    -1,
    2408,  2184,    -1,    -1,    -1,  2188,  2189,    -1,  2191,  2192,
      -1,    -1,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    1872,  2204,  2205,  2206,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2444,  2220,  2221,  2222,
    2223,    -1,  2225,  2226,  2227,  2228,  2229,  2230,    -1,  2232,
      -1,    -1,  2235,  2236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2254,   423,    -1,  2257,  2258,    -1,    -1,    -1,  2262,
      -1,   432,    -1,  2266,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   495,
      -1,    -1,    -1,    -1,    -1,    -1,   502,    -1,    -1,   505,
      -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,   514,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2311,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   500,
     501,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   513,    -1,    -1,    -1,    -1,   518,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   527,    -1,    -1,    -1,
     576,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2383,    -1,    -1,    -1,  2387,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2397,  2398,    -1,    -1,    -1,    -1,
    2403,  2404,    -1,    -1,  2407,  2408,    -1,    -1,    -1,    -1,
    2413,    -1,    -1,  2416,  2417,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   593,   594,   595,   596,    -1,    -1,    -1,    -1,
      -1,    -1,  2435,  2436,    -1,  2438,  2439,  2440,  2441,  2442,
      -1,  2444,  2445,    -1,    -1,    -1,  2449,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2461,    -1,
      -1,   677,    -1,  2466,    -1,    -1,    -1,    -1,   684,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1717,    -1,  2481,    -1,
      -1,    -1,   653,    -1,    -1,    -1,    -1,    -1,    -1,  1730,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1740,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2516,    -1,    -1,    -1,  1321,  2521,    -1,
    2523,    -1,    -1,    -1,     3,     4,  2529,    -1,    -1,  1333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2542,
      19,    -1,    -1,    -1,    -1,    -1,    -1,  1351,  1352,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2560,  2603,    -1,
      -1,  2564,    -1,    -1,    -1,    -1,    -1,    -1,  2240,    -1,
      -1,  1812,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,  2584,    -1,    -1,    -1,   801,    -1,    -1,    -1,    -1,
      -1,    -1,   808,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2607,    -1,    -1,    -1,    -1,  2612,
      -1,  2614,    -1,    -1,    -1,    -1,    -1,    -1,  2621,    -1,
      -1,    -1,   101,  2626,    -1,    -1,    -1,    -1,  2631,    -1,
      -1,   802,    -1,    -1,    -1,    -1,    -1,   853,    -1,    -1,
      -1,    -1,   858,   814,    -1,   861,    -1,    -1,    -1,    -1,
    2653,  2654,    -1,    -1,    -1,    -1,   872,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2678,   155,    -1,  2681,    -1,
     851,  2684,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2695,  2696,  2697,  2698,    -1,    -1,    -1,    -1,
      -1,    -1,   873,   874,  2707,    -1,    -1,  2710,    -1,    -1,
      -1,    -1,  2669,    -1,  2717,    -1,  2719,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,  2701,    -1,    -1,  2704,    -1,    -1,
      -1,   922,    -1,    -1,    -1,    -1,   972,    -1,    -1,  2431,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2005,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2451,
      -1,    -1,    -1,  2455,  2020,  2021,  2022,    -1,    -1,  2025,
      -1,  2027,  2028,    -1,    -1,  2031,  2032,  2033,    -1,    -1,
    2036,  2037,    -1,    -1,  2040,    -1,  2042,  2043,    -1,  2045,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2063,    -1,    -1,    -1,   997,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2103,  2104,  2105,  2106,  2107,    -1,  2109,  2110,
      -1,    -1,    -1,  2114,  2115,  2116,  2117,  2118,  1049,  2120,
    2121,    -1,    -1,    -1,    -1,    16,    -1,    -1,  1059,    -1,
      -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2153,    -1,    -1,
    2156,    -1,    -1,    -1,    -1,  2161,    -1,    -1,  2164,    -1,
      -1,    -1,  1736,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1744,  1745,    -1,    -1,    -1,    -1,    -1,  2183,    -1,  1165,
      -1,    -1,    -1,    -1,    -1,  1759,  1760,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1770,  1771,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1781,  1782,  1195,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1791,  1792,  1160,
      -1,    -1,    -1,  1797,  1210,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1807,    -1,    -1,  1177,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1230,  1231,    -1,    -1,  2690,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1201,    -1,    -1,    -1,  2270,    -1,    -1,    -1,    -1,    -1,
    1211,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1229,    -1,
      -1,    -1,    -1,    -1,  2300,    -1,    -1,    -1,    -1,  1240,
      -1,    -1,    -1,  2314,  1245,    -1,  2317,  2318,  2319,  2320,
    2321,    -1,  2323,  2324,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2335,  2336,  2337,  2338,  2339,    -1,
    2341,  2342,    -1,  2344,    -1,    -1,   237,    -1,   239,    -1,
      -1,    -1,    -1,  2354,  2355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2365,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2399,    -1,    -1,    -1,    -1,    -1,    -1,
    2406,    -1,    -1,  2409,  2410,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    -1,    -1,    -1,    -1,  1378,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1446,    -1,    -1,    -1,    -1,    -1,    -1,  1408,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2492,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2064,    -1,  2503,    -1,  2505,    -1,  1437,    -1,  2509,  1440,
    2074,    -1,    -1,    -1,  2078,  2079,    -1,    -1,    -1,  1450,
    1451,  2517,    -1,  2087,  2088,    -1,    -1,  1458,    -1,    -1,
    1506,    -1,  2096,  2097,  1465,    -1,  1512,    -1,  2102,    -1,
    2536,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2112,  2113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2123,
    2124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2134,    -1,    -1,    -1,  1505,    -1,    -1,  1508,  1509,  2143,
      -1,  2145,    -1,    -1,    -1,    -1,  1517,    -1,    -1,    -1,
      -1,    -1,  2593,    -1,    -1,  2596,    -1,    -1,  2599,    -1,
    2601,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2605,
    2606,    -1,  2608,  1589,  2610,  2611,    -1,  2613,    -1,  1595,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1619,    -1,    -1,    -1,    -1,    -1,  1625,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1593,    -1,    -1,  1641,    -1,    -1,  2664,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1654,    -1,
    1611,    -1,    -1,    -1,    -1,    -1,  1662,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1626,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2711,    -1,  1648,    -1,    -1,
      -1,    -1,  1653,    -1,    -1,  1656,    -1,  1658,  1659,  1660,
    1661,    -1,    -1,  1664,    -1,    -1,  1667,    -1,    -1,  1670,
    1671,    -1,  1673,  1674,  1675,  1676,    -1,  1678,  1679,    -1,
      -1,  2315,    -1,  1684,  1685,  1686,    -1,    -1,  1689,  1690,
      -1,  2325,    -1,    -1,  1695,  1696,    -1,    -1,    -1,    -1,
    2334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2343,
      -1,    -1,    -1,    -1,    -1,    -1,  2350,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2361,    -1,    -1,
      -1,    -1,    -1,  2367,    -1,    -1,  2370,    -1,    -1,  2373,
      -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1817,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1839,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1819,    -1,
      -1,    -1,  1823,    -1,    -1,    -1,    -1,  1873,  1874,    -1,
      -1,    -1,    -1,    -1,  1835,    -1,    -1,  1838,    -1,    -1,
     101,    -1,    -1,    -1,  1890,  1891,    -1,    -1,    -1,  1895,
    1896,    -1,    -1,    -1,    -1,  2489,    -1,    -1,   119,  2493,
      -1,    -1,    -1,    -1,    -1,    -1,  2500,  1868,    -1,    -1,
      -1,    -1,  2506,    -1,    -1,    -1,  2510,    -1,    -1,  2513,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1935,
      -1,    -1,  1938,  1939,   155,    -1,    -1,    -1,    -1,    -1,
    1946,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1924,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   192,    -1,    -1,  1980,    -1,    -1,    -1,    -1,   200,
      -1,    -1,    -1,    -1,    -1,   206,   207,    -1,    -1,    -1,
    1996,   212,    -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2018,    -1,    -1,    -1,    -1,  2023,    -1,    -1,
      -1,    -1,    -1,  2029,    -1,    -1,    -1,    -1,  2034,    -1,
      -1,    -1,  2038,    -1,    -1,  2041,  1997,    -1,  2044,    -1,
    2046,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2039,    -1,
      -1,    -1,    -1,    -1,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    -1,    60,     3,     4,    -1,   339,    -1,
      66,    -1,   343,   344,    -1,    -1,    -1,    73,    -1,    75,
      -1,    19,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2155,    -1,    -1,  2158,    -1,    -1,
      -1,    -1,   148,    -1,    -1,  2166,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   163,    56,    -1,
      -1,  2182,    -1,    -1,  2185,  2231,   172,   173,    -1,  2190,
      -1,    -1,  2193,  2194,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   155,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   228,    -1,   230,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   243,    -1,    -1,
      -1,    -1,   248,    -1,    -1,    -1,    -1,    -1,   254,    -1,
      -1,    -1,    -1,    -1,    -1,   261,    -1,   155,    -1,    -1,
    2281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   292,   293,    -1,   295,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
    2376,    -1,    -1,    -1,   212,    -1,  2382,    -1,    -1,   217,
    2386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2378,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,    -1,   101,    -1,    -1,
    2411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2422,    -1,    -1,    -1,    -1,  2472,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2473,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2547,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,  2519,  2520,
      -1,  2522,    -1,   217,    -1,    -1,  2527,  2528,    -1,    -1,
      -1,  2532,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    -1,    -1,    69,    -1,   101,    -1,    18,    19,
      -1,    -1,    -1,    -1,  2565,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,  2588,    -1,  2635,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2655,
     155,    -1,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     155,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   167,    -1,    -1,   115,  2702,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,  2669,   184,
      -1,    -1,   217,    -1,    -1,    -1,  2722,    -1,    -1,  2725,
      -1,    -1,    -1,    -1,    -1,  2686,    -1,    -1,    -1,   204,
      -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,    -1,
    2701,    -1,   217,  2704,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
      -1,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,    -1,
     335,    -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,    20,    21,    22,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    48,    49,    55,
      -1,    52,    19,    -1,    -1,    -1,    62,    -1,    59,    -1,
      66,    62,    -1,    -1,    -1,    66,    -1,    -1,    74,    75,
      -1,    -1,    -1,    74,    75,    -1,    82,    83,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,   109,   110,    -1,    -1,   113,   109,   110,
      19,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,   148,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    -1,   170,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,   155,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   221,    -1,   223,    -1,    -1,
     221,    -1,   223,   229,   230,    -1,    -1,    -1,   229,   230,
      -1,    19,    -1,    -1,    -1,    -1,    -1,   243,   244,    -1,
      -1,    -1,    -1,   244,    -1,   212,   155,   253,   254,    -1,
     217,    -1,   101,   254,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   279,    -1,   281,    -1,    -1,   279,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,   295,
     291,    -1,    -1,    -1,    -1,   301,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,   155,    -1,   217,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,   335,    -1,    -1,    -1,    -1,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   155,   217,    -1,
      -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,    -1,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,    -1,    -1,    -1,    -1,    -1,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,
      65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    77,    44,    -1,    46,    -1,    -1,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,    -1,    -1,    65,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    -1,    -1,
     125,    -1,    93,    -1,    95,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,   140,    -1,    -1,   143,    -1,
      -1,    -1,   147,   148,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,   124,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,   140,
      -1,   176,   177,   178,    -1,    -1,   181,   182,    -1,   150,
     151,    -1,    -1,   154,    -1,    -1,    -1,   158,   155,   160,
     195,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,   212,    -1,    -1,
     181,   182,    -1,    -1,   185,    -1,    -1,    -1,    -1,   224,
      -1,   226,    -1,    -1,   195,    -1,   160,    -1,   233,    -1,
      -1,   236,    -1,    -1,   239,    -1,   241,    -1,   243,   210,
     211,    -1,    -1,   248,    -1,    -1,    -1,   218,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   261,    -1,    -1,    -1,
      -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     241,    -1,   243,    -1,    -1,    -1,    -1,   282,   283,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,
      -1,   296,    -1,    -1,    -1,    -1,   267,   302,    -1,    -1,
     305,   306,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   282,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,    -1,    -1,    -1,    -1,    -1,   298,    -1,    -1,
      -1,   336,    -1,   304,    -1,   306,    -1,   342,    -1,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,    -1,    -1,    -1,
      -1,   342,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334
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
     359,   349,   364,   365,   365,   365,   364,   358,   349,   364,
     349,   132,   242,   352,   438,   164,     5,     4,   364,     4,
     359,   359,     4,     5,     4,     4,   349,   433,   349,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   109,   110,   113,   129,   148,   170,   179,   221,   223,
     229,   230,   244,   254,   279,   281,   291,   301,   335,    66,
     129,   153,   230,   279,    30,   159,   209,   235,   495,   349,
     204,   349,   496,    17,   349,   253,   506,   253,   204,   349,
     497,   281,   498,    17,    98,   349,   349,     5,   365,    56,
     359,     4,     5,   462,   349,     5,     5,     5,   155,   182,
     369,   369,   163,   260,   367,     4,     4,     5,     5,   466,
     266,   266,     5,     5,     5,    17,   157,   368,   368,   367,
       4,     4,   367,     5,     5,   470,   160,   334,   360,   474,
       5,   473,     5,     5,   477,     5,   478,     5,    14,    15,
      61,   188,   189,   258,   268,   269,   273,   299,     4,     4,
       5,     5,   369,   367,     4,     5,     5,   364,    82,   150,
     219,   220,   234,   274,   372,     7,     8,   349,   354,   235,
     121,   235,   235,   105,    40,    66,    99,   105,   111,   129,
     148,   163,   193,   230,   243,   254,   281,   293,   295,   296,
     335,   487,   121,   235,     5,    27,   165,   235,   277,   137,
     105,    22,    49,    52,    82,   110,   113,   223,   253,    22,
      49,    52,    55,    82,   110,   113,   223,   253,   279,    40,
     121,   235,   235,   105,     5,   208,    27,   221,    36,   131,
     287,   349,   257,   264,   121,   239,   359,   506,    40,   130,
     221,   277,   239,   208,     5,     5,   243,    27,   221,     4,
       5,     5,   208,    36,   131,   287,   349,   506,   208,   351,
       4,     4,   349,     5,   299,    22,    27,    48,    49,    51,
      52,    62,    74,    75,    82,    85,   102,   109,   110,   113,
     170,   223,   229,   244,   253,   280,   281,   301,   345,   489,
     349,   349,   349,   349,   349,   493,   359,     5,     4,     5,
     349,   349,   359,   349,   351,   349,   349,   493,     5,   349,
     349,   351,     5,    17,     5,     5,   349,   349,   358,   349,
     349,     4,   349,   349,   111,   349,   349,   111,     4,    42,
      43,   168,   169,   196,   374,   374,    61,   120,   268,   538,
     374,     5,    61,   120,   268,   543,     5,     5,    61,   120,
     268,   545,     4,     5,     5,     4,    61,   120,   268,   547,
      61,   120,   268,   546,     5,     5,     4,     5,     5,     4,
     374,   374,   374,   349,   349,   349,     4,   359,   349,   360,
     364,     5,     5,    12,   349,   359,   361,   349,    12,   349,
     349,   349,    59,   349,     6,     4,   349,   349,    46,   267,
     401,     5,   351,   351,   364,   349,     4,     4,     4,   359,
     349,   349,   349,   349,   364,   359,   365,   358,   349,     4,
     365,   349,    38,    38,     4,   361,     5,    24,    25,    97,
     366,   359,   364,   364,   349,     4,   349,     5,    82,   150,
     219,   220,   234,   274,   359,   361,   235,   121,   235,   235,
      21,   235,   359,   121,   235,    27,   165,   235,   277,   137,
      21,   235,   121,   235,   235,    21,   235,    27,   166,   221,
     166,   257,   264,   121,   166,   221,   285,   506,   130,   166,
     221,   277,     4,   243,    27,   166,   221,   506,   204,   349,
     349,   349,   349,   349,   349,   194,   349,   349,    20,   231,
     454,     4,     4,   349,   369,   369,   369,     4,   369,   369,
     369,    14,    15,    61,   188,   189,   258,   268,   269,   299,
     368,   369,   369,   369,   369,   369,     4,   369,   369,     4,
     368,    14,    15,    61,   188,   189,   258,   268,   269,   299,
       5,   472,     5,   476,     5,     5,    14,    15,    61,   188,
     189,   258,   268,   269,   273,   299,     5,    14,    15,    61,
     188,   189,   258,   268,   269,   273,   299,     5,    14,    15,
      61,   188,   189,   258,   268,   269,   273,   299,    14,    15,
      61,   188,   189,   258,   268,   269,   299,   266,     5,     5,
       5,   368,   368,   367,     4,     4,   367,     5,     4,     4,
     369,   369,     4,   369,   369,     5,   351,   359,   361,     5,
     349,   351,   349,     5,   349,     5,   354,   105,   193,   243,
     105,   193,   243,     5,   351,   349,   351,     5,   349,   359,
     351,     5,   354,   235,   235,    21,   235,    21,   235,   235,
      21,   235,   303,   303,     4,     4,     4,   487,     4,     4,
       4,   303,   303,     4,     5,     4,   351,   349,     5,   349,
       5,   354,   351,   359,   359,   349,    27,    48,    51,    62,
      85,   102,   345,   370,     4,   351,   349,   364,   351,     5,
     359,   359,   349,   351,   351,   359,   359,   349,   351,   349,
       5,   349,   221,   221,   349,   349,   221,   349,   221,   349,
     349,   499,   507,   349,   221,   221,   349,   349,   349,   349,
     349,   349,   349,   349,     5,   299,   349,   490,   349,   349,
     221,   349,   349,   349,   349,   359,   364,     5,   359,   359,
     349,   349,   364,   349,   349,   349,   359,   349,   349,     5,
       4,   349,   349,   349,   349,     5,     5,     4,   374,     5,
       5,     4,     4,     4,     5,     5,     4,     4,     5,     5,
       4,     5,     5,     4,   349,   349,   349,   349,   364,   349,
     359,   361,   349,   364,   349,   349,   349,   349,   349,     5,
     349,     4,     6,   349,   349,     4,   359,   349,   364,   175,
     362,   349,   362,   365,   364,   359,   349,   349,     4,   349,
     364,   349,     4,   359,     5,     5,     5,     5,   359,   364,
     359,   359,   359,   359,   361,   359,   364,   359,   359,   359,
     361,   359,   359,   359,   359,   361,   359,   359,   359,   349,
     359,   359,   359,   359,   359,   359,   359,   349,   349,     4,
     349,     5,     4,   349,   369,     5,     5,     5,   367,     4,
       4,     5,   369,   368,     4,   369,     5,     5,     5,   368,
     368,   367,     4,     4,     5,    14,    15,    61,   188,   189,
     258,   268,   269,   299,    14,    15,    61,   188,   189,   258,
     268,   269,   299,    14,    15,    61,   188,   189,   258,   268,
     269,   299,   266,     5,     5,     5,   368,   368,   367,     4,
       4,   367,     5,   266,     5,     5,     5,   368,   368,   367,
       4,     4,   367,     5,   266,     5,     5,     5,   368,   368,
     367,     4,     4,   367,     5,     5,     5,     5,   368,   368,
     367,     4,     4,     5,   368,     4,     4,   368,     4,     4,
     369,     5,   364,   359,   349,   349,   359,   349,     5,   354,
       5,   359,   351,     5,   359,   364,     5,   354,   349,   349,
     349,   349,   349,   349,   349,   349,   349,     4,     4,     5,
       4,     4,   349,   359,   349,     5,   354,   351,   364,   364,
     349,   358,   364,   364,   349,   364,   364,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,    55,    66,    92,
     129,   279,   281,   335,   504,   505,   506,   517,   518,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   359,     5,   349,   349,   349,   349,     4,     4,   364,
     365,     4,   491,   364,   364,   358,   349,     4,   364,     4,
     374,   374,   374,   354,   349,   349,   349,   364,   349,   358,
     349,   349,    12,     5,     5,     4,   349,   349,     4,   364,
     359,   349,   349,   365,   366,   349,     5,   349,   361,     5,
       5,     5,     5,   364,   366,   366,   366,   364,   366,   365,
     366,   366,   364,   366,   366,   366,   364,   366,   366,   364,
     359,   366,   364,   366,   366,   364,   366,   364,     4,   361,
       5,   349,     4,   369,   368,     4,   368,     5,     5,     5,
     368,   368,   367,     4,     4,     5,     5,     5,     5,   368,
     368,   367,     4,     4,     5,     5,     5,     5,   368,   368,
     367,     4,     4,     5,   368,   369,   369,   369,   369,   369,
       4,   369,   369,     4,   368,   368,   369,   369,   369,   369,
     369,     4,   369,   369,     4,   368,   368,     4,     4,   368,
       4,   368,   368,     4,     4,     4,   360,   366,     4,   359,
     366,   349,   359,     4,   366,   366,   359,     4,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   359,
     366,   349,   359,     4,   358,   358,   359,   358,   358,   359,
     359,   358,   358,   349,   349,   349,   349,   349,   349,   354,
     349,   349,   349,   346,   346,   346,   346,   346,   346,   346,
     505,   346,   354,   349,   349,   349,   349,   354,   349,   349,
     349,   349,   349,   349,   364,   349,   299,   353,   354,   349,
     349,   365,   351,     4,     4,   365,     4,   349,   358,   349,
      59,   349,     5,     5,   349,     4,   362,   366,     5,     4,
       4,     5,   359,     5,   365,   366,   365,   365,   365,     5,
       4,   349,   369,   368,   369,   369,   369,   369,   369,     4,
     369,   369,   368,     4,   368,   369,   369,   369,   369,   369,
       4,   369,   369,   368,   369,   368,     4,   369,   369,   368,
       4,   369,   368,     4,   368,   368,   364,   359,   366,     4,
     364,   349,   364,   349,   349,   349,   366,     4,   364,   349,
     358,   366,   349,   358,   366,   366,   359,   349,     4,   371,
     371,   349,   349,   371,   354,   371,   507,   359,   487,     5,
       4,     5,     5,     5,     4,   351,   354,   371,   371,   349,
     349,   354,   349,   349,   349,   349,   349,   358,   349,     5,
     507,   349,   371,   351,   508,   509,     5,   351,     4,     5,
     349,     5,     4,     6,   349,    32,   276,   408,     5,   364,
     359,   408,   349,   368,   369,   368,   368,   369,   369,   368,
     369,   368,   368,   349,   366,   359,   359,   349,   359,   349,
     359,   359,   349,   359,   366,     4,   507,   507,   353,   349,
     507,     4,   507,   364,     5,     4,     4,   507,   507,   353,
     349,     4,   507,   507,   349,   359,   507,   507,   507,   508,
     514,   515,   506,   512,   513,     4,     5,     5,     6,     4,
     185,   297,   341,   349,   399,   359,    32,   276,   373,     4,
     369,   369,   369,   369,   360,   366,   366,   349,   366,     4,
     366,   366,   349,   366,   349,   507,   507,     4,   349,   507,
       5,   349,   507,     4,   349,   507,   364,   514,   516,   517,
     346,   513,     5,     5,     4,   349,   400,   349,   400,   364,
     366,     4,   359,   361,     4,   354,   353,   349,   349,   353,
     349,   359,   517,   351,     5,     5,   349,   349,   349,   349,
     373,     5,   359,   361,   364,   359,   361,   507,   349,     4,
     507,   349,   366,     5,     5,   349,     5,   349,   364,   364,
       4,   507,     4,     5,     5,     5,   353,   353,   507,   507,
     507
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
#line 945 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 305:
#line 946 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 947 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 948 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 952 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 309:
#line 954 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 310:
#line 955 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 311:
#line 956 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 959 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 313:
#line 961 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 314:
#line 963 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 315:
#line 965 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 316:
#line 968 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 317:
#line 971 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 318:
#line 972 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 319:
#line 973 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 320:
#line 976 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 321:
#line 979 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 335:
#line 993 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 338:
#line 996 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 998 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 342:
#line 1001 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 343:
#line 1002 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 346:
#line 1005 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 347:
#line 1006 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 349:
#line 1009 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 351:
#line 1011 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 353:
#line 1013 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 355:
#line 1015 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 356:
#line 1017 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 357:
#line 1019 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1021 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 360:
#line 1024 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 361:
#line 1025 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 362:
#line 1026 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 363:
#line 1027 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 364:
#line 1028 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 365:
#line 1029 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 367:
#line 1031 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 368:
#line 1034 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 369:
#line 1035 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 370:
#line 1036 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 371:
#line 1039 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 372:
#line 1042 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 373:
#line 1044 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 374:
#line 1046 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 375:
#line 1047 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 376:
#line 1048 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 378:
#line 1050 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 380:
#line 1053 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 381:
#line 1059 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 382:
#line 1060 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 383:
#line 1063 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 384:
#line 1064 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 385:
#line 1065 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 386:
#line 1068 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 387:
#line 1069 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 389:
#line 1075 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 390:
#line 1077 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 391:
#line 1079 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 392:
#line 1082 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 394:
#line 1084 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 395:
#line 1088 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 396:
#line 1092 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 398:
#line 1094 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 399:
#line 1095 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 400:
#line 1096 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 401:
#line 1097 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 402:
#line 1098 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 404:
#line 1100 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 405:
#line 1101 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 406:
#line 1104 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 407:
#line 1105 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 408:
#line 1106 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 409:
#line 1109 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 410:
#line 1110 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 411:
#line 1114 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 412:
#line 1116 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 413:
#line 1124 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 414:
#line 1126 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 415:
#line 1127 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 416:
#line 1130 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 417:
#line 1132 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 418:
#line 1133 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 419:
#line 1136 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 420:
#line 1139 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 421:
#line 1141 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1145 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 423:
#line 1147 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 424:
#line 1150 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 425:
#line 1154 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 426:
#line 1155 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 427:
#line 1157 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 428:
#line 1160 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1161 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 431:
#line 1165 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 432:
#line 1166 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 433:
#line 1167 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 434:
#line 1170 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 435:
#line 1172 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 436:
#line 1173 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 438:
#line 1175 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 442:
#line 1179 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 443:
#line 1180 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 444:
#line 1181 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 445:
#line 1183 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 447:
#line 1185 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 448:
#line 1188 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1190 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 450:
#line 1192 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1193 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 452:
#line 1194 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 453:
#line 1195 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1198 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 455:
#line 1202 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1204 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 457:
#line 1207 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 458:
#line 1210 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 459:
#line 1212 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 460:
#line 1214 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd(2, (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 461:
#line 1216 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 462:
#line 1219 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 463:
#line 1220 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 464:
#line 1221 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 465:
#line 1224 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 466:
#line 1225 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 467:
#line 1226 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 468:
#line 1229 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 469:
#line 1232 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 470:
#line 1233 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 471:
#line 1234 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 472:
#line 1237 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 473:
#line 1238 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 474:
#line 1239 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 475:
#line 1240 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 476:
#line 1241 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 477:
#line 1242 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 482:
#line 1249 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 483:
#line 1250 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 484:
#line 1251 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 485:
#line 1254 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 486:
#line 1255 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 487:
#line 1258 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 488:
#line 1259 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 489:
#line 1262 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 490:
#line 1263 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 491:
#line 1266 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 492:
#line 1267 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 493:
#line 1270 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 495:
#line 1272 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 496:
#line 1275 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 497:
#line 1276 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 499:
#line 1280 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 500:
#line 1284 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 501:
#line 1287 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 502:
#line 1294 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 503:
#line 1295 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 504:
#line 1298 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 507:
#line 1301 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 508:
#line 1302 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 509:
#line 1303 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 510:
#line 1304 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 512:
#line 1306 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 513:
#line 1307 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 514:
#line 1308 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 516:
#line 1310 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 517:
#line 1311 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 518:
#line 1312 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 519:
#line 1313 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1317 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 522:
#line 1320 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 523:
#line 1321 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 524:
#line 1324 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 525:
#line 1325 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 526:
#line 1326 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 527:
#line 1327 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 528:
#line 1330 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 529:
#line 1331 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 530:
#line 1332 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 531:
#line 1333 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 532:
#line 1336 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1337 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1338 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1339 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1340 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 537:
#line 1341 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1344 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 539:
#line 1345 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 540:
#line 1346 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 543:
#line 1350 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 544:
#line 1351 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 545:
#line 1354 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 546:
#line 1357 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 547:
#line 1358 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1362 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 549:
#line 1364 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 550:
#line 1365 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1377 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 558:
#line 1379 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 559:
#line 1381 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 560:
#line 1382 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1384 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1386 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 563:
#line 1388 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1390 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1392 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1396 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 568:
#line 1397 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 569:
#line 1398 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 570:
#line 1399 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 571:
#line 1400 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 572:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 573:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1408 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 577:
#line 1412 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1414 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1416 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1418 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1420 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 582:
#line 1422 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1424 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 584:
#line 1426 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 585:
#line 1429 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1431 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1433 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 593:
#line 1441 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 594:
#line 1442 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1443 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1444 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1445 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 598:
#line 1446 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1448 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 600:
#line 1450 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 601:
#line 1451 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1452 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1453 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 604:
#line 1456 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1457 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1458 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1459 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1460 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 610:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 618:
#line 1476 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1479 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1482 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 621:
#line 1485 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 622:
#line 1488 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 623:
#line 1491 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 624:
#line 1494 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1497 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 627:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 632:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 634:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 635:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 639:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 647:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 654:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 655:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 664:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 667:
#line 1615 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1616 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1617 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1618 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1619 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 672:
#line 1620 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 674:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 675:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 678:
#line 1630 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1631 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1632 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1633 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1634 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 684:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1643 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1645 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1646 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 690:
#line 1648 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1650 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1655 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 695:
#line 1659 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 696:
#line 1660 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1661 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 698:
#line 1664 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 699:
#line 1671 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 700:
#line 1672 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 701:
#line 1673 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 702:
#line 1674 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 703:
#line 1675 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 704:
#line 1676 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 705:
#line 1677 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 706:
#line 1681 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 708:
#line 1689 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1690 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 710:
#line 1692 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 711:
#line 1694 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 712:
#line 1695 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 713:
#line 1696 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 715:
#line 1697 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 716:
#line 1698 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 717:
#line 1699 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 719:
#line 1701 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 720:
#line 1702 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1704 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 722:
#line 1706 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 723:
#line 1708 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 724:
#line 1711 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1713 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 726:
#line 1714 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 727:
#line 1716 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1719 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 729:
#line 1722 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1724 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1727 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 732:
#line 1730 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 733:
#line 1733 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 734:
#line 1736 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 735:
#line 1740 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 736:
#line 1744 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 737:
#line 1749 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 738:
#line 1753 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 739:
#line 1754 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1756 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1757 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 742:
#line 1759 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1761 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 744:
#line 1763 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1765 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 746:
#line 1766 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1768 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1770 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 749:
#line 1773 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 750:
#line 1777 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 751:
#line 1781 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 752:
#line 1783 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 753:
#line 1785 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 754:
#line 1787 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 755:
#line 1789 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 756:
#line 1791 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 757:
#line 1793 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1795 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1797 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1799 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 761:
#line 1801 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 762:
#line 1803 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 763:
#line 1805 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1807 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1808 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1810 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1812 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 768:
#line 1813 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1814 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1816 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1818 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1819 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 773:
#line 1820 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 774:
#line 1821 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1823 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1824 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1826 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 778:
#line 1830 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 781:
#line 1840 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 782:
#line 1844 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 783:
#line 1849 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 784:
#line 1853 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 785:
#line 1854 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 786:
#line 1855 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 787:
#line 1857 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1859 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 789:
#line 1863 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 790:
#line 1864 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 791:
#line 1865 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1867 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 793:
#line 1870 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 794:
#line 1873 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1876 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1877 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1879 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1882 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1886 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1888 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1889 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 802:
#line 1891 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 803:
#line 1894 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1897 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 805:
#line 1898 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1900 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1901 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 808:
#line 1902 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1904 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 810:
#line 1905 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1907 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1910 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 813:
#line 1913 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 814:
#line 1915 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 815:
#line 1916 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 821:
#line 1924 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 822:
#line 1926 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 823:
#line 1928 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 824:
#line 1929 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 825:
#line 1931 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1932 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1938 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 831:
#line 1939 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 832:
#line 1940 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 833:
#line 1941 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1942 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 835:
#line 1943 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 836:
#line 1944 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 837:
#line 1945 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 838:
#line 1946 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 839:
#line 1948 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 840:
#line 1950 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1951 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1952 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 843:
#line 1953 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1954 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1956 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1957 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1958 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 848:
#line 1959 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 849:
#line 1960 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1962 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 851:
#line 1963 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 852:
#line 1964 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 853:
#line 1965 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 854:
#line 1966 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 855:
#line 1967 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 856:
#line 1970 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 857:
#line 1971 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 858:
#line 1972 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 859:
#line 1973 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 860:
#line 1974 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 861:
#line 1975 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 862:
#line 1976 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 863:
#line 1977 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 864:
#line 1978 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 865:
#line 1979 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 866:
#line 1980 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 867:
#line 1981 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 868:
#line 1982 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 869:
#line 1983 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 870:
#line 1984 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 871:
#line 1985 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 872:
#line 1986 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 873:
#line 1987 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 874:
#line 1988 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 875:
#line 1989 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 876:
#line 1990 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 877:
#line 1993 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 878:
#line 1994 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 879:
#line 1995 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 880:
#line 1996 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 881:
#line 1997 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 1999 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 883:
#line 2009 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 884:
#line 2017 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 885:
#line 2026 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 886:
#line 2034 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 887:
#line 2041 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 888:
#line 2048 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 889:
#line 2056 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 890:
#line 2064 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 891:
#line 2069 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2074 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2079 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2084 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2089 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2094 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2099 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2108 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2118 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2128 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2137 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2145 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2155 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2165 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2175 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2187 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2196 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2204 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 910:
#line 2206 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 911:
#line 2208 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 912:
#line 2213 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 913:
#line 2216 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 914:
#line 2220 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 915:
#line 2222 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2223 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 917:
#line 2226 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 918:
#line 2227 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 919:
#line 2228 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 920:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 921:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 922:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 923:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 925:
#line 2236 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 926:
#line 2237 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 927:
#line 2238 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 928:
#line 2239 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 929:
#line 2240 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 930:
#line 2243 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2245 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 932:
#line 2247 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 933:
#line 2249 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 934:
#line 2251 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 935:
#line 2253 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 936:
#line 2255 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 937:
#line 2256 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 938:
#line 2257 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 939:
#line 2259 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2261 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 941:
#line 2263 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 942:
#line 2265 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 943:
#line 2267 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 944:
#line 2268 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 945:
#line 2269 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 946:
#line 2271 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 947:
#line 2273 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2276 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 949:
#line 2278 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 950:
#line 2280 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2281 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 952:
#line 2282 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 953:
#line 2283 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2285 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2286 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 956:
#line 2287 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2288 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 958:
#line 2289 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 959:
#line 2291 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2293 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2294 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2296 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2298 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2300 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2301 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 966:
#line 2303 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2305 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2306 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 969:
#line 2307 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2308 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2310 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2312 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 973:
#line 2315 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 974:
#line 2318 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2319 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2320 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2322 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 978:
#line 2325 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2328 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2329 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2330 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 982:
#line 2331 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2333 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2335 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2337 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2338 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2340 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2341 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 989:
#line 2342 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2343 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2344 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2346 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2348 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2350 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2352 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2354 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 998:
#line 2355 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 999:
#line 2357 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1000:
#line 2359 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1001:
#line 2360 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1002:
#line 2361 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2363 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1006:
#line 2367 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1007:
#line 2368 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1008:
#line 2369 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1009:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2371 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1011:
#line 2372 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1012:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1013:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1014:
#line 2377 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1015:
#line 2380 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1016:
#line 2381 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1017:
#line 2382 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1018:
#line 2383 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1019:
#line 2386 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1020:
#line 2387 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1021:
#line 2390 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1022:
#line 2391 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1023:
#line 2394 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1024:
#line 2395 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1025:
#line 2398 "frame/parser.Y"
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
#line 2411 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1027:
#line 2412 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1028:
#line 2416 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1029:
#line 2417 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1030:
#line 2421 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1031:
#line 2426 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1032:
#line 2431 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1033:
#line 2437 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1034:
#line 2439 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1035:
#line 2442 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2444 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1037:
#line 2447 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1038:
#line 2450 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1039:
#line 2451 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1040:
#line 2452 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1041:
#line 2453 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1042:
#line 2454 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1043:
#line 2455 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1044:
#line 2457 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1047:
#line 2464 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1048:
#line 2465 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1049:
#line 2466 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1050:
#line 2467 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1051:
#line 2468 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1052:
#line 2469 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1055:
#line 2474 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1056:
#line 2475 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1057:
#line 2476 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1058:
#line 2477 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1059:
#line 2478 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1060:
#line 2479 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1061:
#line 2480 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1062:
#line 2481 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1063:
#line 2482 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1064:
#line 2483 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1065:
#line 2484 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1068:
#line 2491 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1069:
#line 2492 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1071:
#line 2495 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1072:
#line 2496 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2497 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1074:
#line 2498 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2501 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1076:
#line 2502 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1079:
#line 2510 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2513 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1081:
#line 2514 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1085:
#line 2521 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1086:
#line 2524 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1087:
#line 2528 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1088:
#line 2529 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1089:
#line 2530 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1090:
#line 2531 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1091:
#line 2534 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1092:
#line 2535 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1093:
#line 2536 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1094:
#line 2537 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1095:
#line 2541 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1096:
#line 2542 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1097:
#line 2544 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1098:
#line 2549 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1100:
#line 2551 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2553 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1103:
#line 2556 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1104:
#line 2558 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1105:
#line 2563 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1106:
#line 2566 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2567 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1108:
#line 2568 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2571 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1110:
#line 2573 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1111:
#line 2577 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1112:
#line 2578 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1113:
#line 2582 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1114:
#line 2583 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2584 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2585 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1117:
#line 2591 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1118:
#line 2592 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1119:
#line 2598 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1120:
#line 2599 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1121:
#line 2600 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1122:
#line 2601 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1125:
#line 2609 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2611 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1129:
#line 2617 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2618 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2619 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1132:
#line 2620 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1133:
#line 2623 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1134:
#line 2624 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1135:
#line 2627 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1136:
#line 2628 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1137:
#line 2629 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1138:
#line 2632 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1139:
#line 2633 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2634 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1141:
#line 2637 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1142:
#line 2638 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1144:
#line 2640 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1145:
#line 2641 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1146:
#line 2644 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1147:
#line 2645 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1148:
#line 2646 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1153:
#line 2653 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1154:
#line 2657 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2659 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1156:
#line 2661 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2666 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1159:
#line 2668 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2670 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2683 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1171:
#line 2684 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1172:
#line 2685 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2688 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2689 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2690 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2693 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2694 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1178:
#line 2695 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1179:
#line 2698 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2699 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2700 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2704 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2705 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2706 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2709 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2710 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2711 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1189:
#line 2714 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2715 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2716 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1192:
#line 2719 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2720 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2721 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2724 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2725 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2726 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2730 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2732 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2734 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2738 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1202:
#line 2742 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1203:
#line 2743 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1204:
#line 2746 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1205:
#line 2747 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1206:
#line 2748 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1207:
#line 2749 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1208:
#line 2752 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1209:
#line 2754 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1210:
#line 2755 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1211:
#line 2757 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1213:
#line 2761 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1214:
#line 2762 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1215:
#line 2766 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2769 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1217:
#line 2770 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1218:
#line 2774 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2776 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2781 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2782 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1226:
#line 2786 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2787 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2788 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1229:
#line 2791 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1230:
#line 2793 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1231:
#line 2798 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1232:
#line 2801 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1233:
#line 2808 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1235:
#line 2812 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1236:
#line 2817 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1238:
#line 2821 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1239:
#line 2822 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1240:
#line 2823 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2825 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1242:
#line 2827 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1243:
#line 2832 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10791 "frame/parser.C"
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


#line 2836 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

