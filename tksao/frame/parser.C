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
     FROM_ = 386,
     FRONT_ = 387,
     FULL_ = 388,
     FUNCTION_ = 389,
     GALACTIC_ = 390,
     GAUSSIAN_ = 391,
     GET_ = 392,
     GLOBAL_ = 393,
     GRAPHICS_ = 394,
     GRAY_ = 395,
     GRID_ = 396,
     GZ_ = 397,
     HANDLE_ = 398,
     HAS_ = 399,
     HEAD_ = 400,
     HEADER_ = 401,
     HEIGHT_ = 402,
     HIDE_ = 403,
     HIGHLITE_ = 404,
     HISTEQU_ = 405,
     HISTOGRAM_ = 406,
     HORIZONTAL_ = 407,
     ICRS_ = 408,
     ID_ = 409,
     IIS_ = 410,
     IMAGE_ = 411,
     INCLUDE_ = 412,
     INCR_ = 413,
     INFO_ = 414,
     ITERATION_ = 415,
     IRAF_ = 416,
     IRAFMIN_ = 417,
     J2000_ = 418,
     KEY_ = 419,
     KEYWORD_ = 420,
     LABEL_ = 421,
     LENGTH_ = 422,
     LEVEL_ = 423,
     LITTLE_ = 424,
     LITTLEENDIAN_ = 425,
     LINE_ = 426,
     LINEAR_ = 427,
     LIST_ = 428,
     LOAD_ = 429,
     LOCAL_ = 430,
     LOG_ = 431,
     MACOSX_ = 432,
     MAGNIFIER_ = 433,
     MATCH_ = 434,
     MAP_ = 435,
     MARK_ = 436,
     MARKER_ = 437,
     MASK_ = 438,
     MESSAGE_ = 439,
     METHOD_ = 440,
     MINMAX_ = 441,
     MINOR_ = 442,
     MIP_ = 443,
     MMAP_ = 444,
     MMAPINCR_ = 445,
     MOSAIC_ = 446,
     MODE_ = 447,
     MOTION_ = 448,
     MOVE_ = 449,
     NAME_ = 450,
     NAN_ = 451,
     NATIVE_ = 452,
     NAXES_ = 453,
     NEW_ = 454,
     NEXT_ = 455,
     NO_ = 456,
     NONE_ = 457,
     NONZERO_ = 458,
     NOW_ = 459,
     NRRD_ = 460,
     NUMBER_ = 461,
     OBJECT_ = 462,
     OFF_ = 463,
     ON_ = 464,
     ONLY_ = 465,
     OPTION_ = 466,
     ORIENT_ = 467,
     PAN_ = 468,
     PANNER_ = 469,
     PARSER_ = 470,
     PASTE_ = 471,
     PERF_ = 472,
     PHOTO_ = 473,
     PHYSICAL_ = 474,
     PIXEL_ = 475,
     PLOT2D_ = 476,
     PLOT3D_ = 477,
     POINT_ = 478,
     POINTER_ = 479,
     POLYGON_ = 480,
     POSTSCRIPT_ = 481,
     POW_ = 482,
     PRECISION_ = 483,
     PRINT_ = 484,
     PRESERVE_ = 485,
     PROJECTION_ = 486,
     PROPERTY_ = 487,
     PUBLICATION_ = 488,
     PROS_ = 489,
     QUERY_ = 490,
     RADIAL_ = 491,
     RADIUS_ = 492,
     RANGE_ = 493,
     REGION_ = 494,
     REPLACE_ = 495,
     RESAMPLE_ = 496,
     RESET_ = 497,
     RESOLUTION_ = 498,
     RGB_ = 499,
     ROOT_ = 500,
     ROTATE_ = 501,
     RULER_ = 502,
     SAMPLE_ = 503,
     SAOIMAGE_ = 504,
     SAOTNG_ = 505,
     SAVE_ = 506,
     SCALE_ = 507,
     SCAN_ = 508,
     SCIENTIFIC_ = 509,
     SCOPE_ = 510,
     SEGMENT_ = 511,
     SELECT_ = 512,
     SET_ = 513,
     SEXAGESIMAL_ = 514,
     SHAPE_ = 515,
     SHARED_ = 516,
     SHIFT_ = 517,
     SHMID_ = 518,
     SHOW_ = 519,
     SIGMA_ = 520,
     SINH_ = 521,
     SIZE_ = 522,
     SLICE_ = 523,
     SMMAP_ = 524,
     SMOOTH_ = 525,
     SOCKET_ = 526,
     SOCKETGZ_ = 527,
     SOURCE_ = 528,
     SQRT_ = 529,
     SQUARED_ = 530,
     SSHARED_ = 531,
     STATS_ = 532,
     STATUS_ = 533,
     SUM_ = 534,
     SYSTEM_ = 535,
     TABLE_ = 536,
     TAG_ = 537,
     TEMPLATE_ = 538,
     TEXT_ = 539,
     THREADS_ = 540,
     THREED_ = 541,
     THRESHOLD_ = 542,
     THICK_ = 543,
     TRANSPARENCY_ = 544,
     TO_ = 545,
     TOGGLE_ = 546,
     TOPHAT_ = 547,
     TRUE_ = 548,
     TYPE_ = 549,
     UNDO_ = 550,
     UNHIGHLITE_ = 551,
     UNLOAD_ = 552,
     UNSELECT_ = 553,
     UPDATE_ = 554,
     USER_ = 555,
     VALUE_ = 556,
     VAR_ = 557,
     VIEW_ = 558,
     VECTOR_ = 559,
     VERSION_ = 560,
     VERTEX_ = 561,
     VERTICAL_ = 562,
     WARP_ = 563,
     WCS_ = 564,
     WCSA_ = 565,
     WCSB_ = 566,
     WCSC_ = 567,
     WCSD_ = 568,
     WCSE_ = 569,
     WCSF_ = 570,
     WCSG_ = 571,
     WCSH_ = 572,
     WCSI_ = 573,
     WCSJ_ = 574,
     WCSK_ = 575,
     WCSL_ = 576,
     WCSM_ = 577,
     WCSN_ = 578,
     WCSO_ = 579,
     WCSP_ = 580,
     WCSQ_ = 581,
     WCSR_ = 582,
     WCSS_ = 583,
     WCST_ = 584,
     WCSU_ = 585,
     WCSV_ = 586,
     WCSW_ = 587,
     WCSX_ = 588,
     WCSY_ = 589,
     WCSZ_ = 590,
     WCS0_ = 591,
     WFPC2_ = 592,
     WIDTH_ = 593,
     WIN32_ = 594,
     XML_ = 595,
     XY_ = 596,
     YES_ = 597,
     ZERO_ = 598,
     ZMAX_ = 599,
     ZSCALE_ = 600,
     ZOOM_ = 601
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
#define FROM_ 386
#define FRONT_ 387
#define FULL_ 388
#define FUNCTION_ 389
#define GALACTIC_ 390
#define GAUSSIAN_ 391
#define GET_ 392
#define GLOBAL_ 393
#define GRAPHICS_ 394
#define GRAY_ 395
#define GRID_ 396
#define GZ_ 397
#define HANDLE_ 398
#define HAS_ 399
#define HEAD_ 400
#define HEADER_ 401
#define HEIGHT_ 402
#define HIDE_ 403
#define HIGHLITE_ 404
#define HISTEQU_ 405
#define HISTOGRAM_ 406
#define HORIZONTAL_ 407
#define ICRS_ 408
#define ID_ 409
#define IIS_ 410
#define IMAGE_ 411
#define INCLUDE_ 412
#define INCR_ 413
#define INFO_ 414
#define ITERATION_ 415
#define IRAF_ 416
#define IRAFMIN_ 417
#define J2000_ 418
#define KEY_ 419
#define KEYWORD_ 420
#define LABEL_ 421
#define LENGTH_ 422
#define LEVEL_ 423
#define LITTLE_ 424
#define LITTLEENDIAN_ 425
#define LINE_ 426
#define LINEAR_ 427
#define LIST_ 428
#define LOAD_ 429
#define LOCAL_ 430
#define LOG_ 431
#define MACOSX_ 432
#define MAGNIFIER_ 433
#define MATCH_ 434
#define MAP_ 435
#define MARK_ 436
#define MARKER_ 437
#define MASK_ 438
#define MESSAGE_ 439
#define METHOD_ 440
#define MINMAX_ 441
#define MINOR_ 442
#define MIP_ 443
#define MMAP_ 444
#define MMAPINCR_ 445
#define MOSAIC_ 446
#define MODE_ 447
#define MOTION_ 448
#define MOVE_ 449
#define NAME_ 450
#define NAN_ 451
#define NATIVE_ 452
#define NAXES_ 453
#define NEW_ 454
#define NEXT_ 455
#define NO_ 456
#define NONE_ 457
#define NONZERO_ 458
#define NOW_ 459
#define NRRD_ 460
#define NUMBER_ 461
#define OBJECT_ 462
#define OFF_ 463
#define ON_ 464
#define ONLY_ 465
#define OPTION_ 466
#define ORIENT_ 467
#define PAN_ 468
#define PANNER_ 469
#define PARSER_ 470
#define PASTE_ 471
#define PERF_ 472
#define PHOTO_ 473
#define PHYSICAL_ 474
#define PIXEL_ 475
#define PLOT2D_ 476
#define PLOT3D_ 477
#define POINT_ 478
#define POINTER_ 479
#define POLYGON_ 480
#define POSTSCRIPT_ 481
#define POW_ 482
#define PRECISION_ 483
#define PRINT_ 484
#define PRESERVE_ 485
#define PROJECTION_ 486
#define PROPERTY_ 487
#define PUBLICATION_ 488
#define PROS_ 489
#define QUERY_ 490
#define RADIAL_ 491
#define RADIUS_ 492
#define RANGE_ 493
#define REGION_ 494
#define REPLACE_ 495
#define RESAMPLE_ 496
#define RESET_ 497
#define RESOLUTION_ 498
#define RGB_ 499
#define ROOT_ 500
#define ROTATE_ 501
#define RULER_ 502
#define SAMPLE_ 503
#define SAOIMAGE_ 504
#define SAOTNG_ 505
#define SAVE_ 506
#define SCALE_ 507
#define SCAN_ 508
#define SCIENTIFIC_ 509
#define SCOPE_ 510
#define SEGMENT_ 511
#define SELECT_ 512
#define SET_ 513
#define SEXAGESIMAL_ 514
#define SHAPE_ 515
#define SHARED_ 516
#define SHIFT_ 517
#define SHMID_ 518
#define SHOW_ 519
#define SIGMA_ 520
#define SINH_ 521
#define SIZE_ 522
#define SLICE_ 523
#define SMMAP_ 524
#define SMOOTH_ 525
#define SOCKET_ 526
#define SOCKETGZ_ 527
#define SOURCE_ 528
#define SQRT_ 529
#define SQUARED_ 530
#define SSHARED_ 531
#define STATS_ 532
#define STATUS_ 533
#define SUM_ 534
#define SYSTEM_ 535
#define TABLE_ 536
#define TAG_ 537
#define TEMPLATE_ 538
#define TEXT_ 539
#define THREADS_ 540
#define THREED_ 541
#define THRESHOLD_ 542
#define THICK_ 543
#define TRANSPARENCY_ 544
#define TO_ 545
#define TOGGLE_ 546
#define TOPHAT_ 547
#define TRUE_ 548
#define TYPE_ 549
#define UNDO_ 550
#define UNHIGHLITE_ 551
#define UNLOAD_ 552
#define UNSELECT_ 553
#define UPDATE_ 554
#define USER_ 555
#define VALUE_ 556
#define VAR_ 557
#define VIEW_ 558
#define VECTOR_ 559
#define VERSION_ 560
#define VERTEX_ 561
#define VERTICAL_ 562
#define WARP_ 563
#define WCS_ 564
#define WCSA_ 565
#define WCSB_ 566
#define WCSC_ 567
#define WCSD_ 568
#define WCSE_ 569
#define WCSF_ 570
#define WCSG_ 571
#define WCSH_ 572
#define WCSI_ 573
#define WCSJ_ 574
#define WCSK_ 575
#define WCSL_ 576
#define WCSM_ 577
#define WCSN_ 578
#define WCSO_ 579
#define WCSP_ 580
#define WCSQ_ 581
#define WCSR_ 582
#define WCSS_ 583
#define WCST_ 584
#define WCSU_ 585
#define WCSV_ 586
#define WCSW_ 587
#define WCSX_ 588
#define WCSY_ 589
#define WCSZ_ 590
#define WCS0_ 591
#define WFPC2_ 592
#define WIDTH_ 593
#define WIN32_ 594
#define XML_ 595
#define XY_ 596
#define YES_ 597
#define ZERO_ 598
#define ZMAX_ 599
#define ZSCALE_ 600
#define ZOOM_ 601




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
#line 52 "frame/parser.Y"
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
#line 849 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 862 "frame/parser.C"

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
#define YYLAST   5469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  351
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1254
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2778

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   601

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
       2,   350,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   348,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   349,   347,
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
     345,   346
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
     323,   325,   327,   329,   331,   333,   335,   337,   339,   341,
     343,   345,   347,   349,   351,   353,   355,   356,   358,   360,
     362,   364,   366,   368,   370,   371,   373,   375,   376,   378,
     380,   382,   383,   385,   387,   388,   390,   392,   393,   395,
     397,   398,   400,   402,   404,   406,   408,   410,   412,   413,
     415,   417,   419,   421,   423,   425,   427,   428,   430,   432,
     433,   435,   437,   439,   441,   443,   446,   449,   452,   455,
     458,   461,   464,   466,   469,   471,   474,   476,   479,   481,
     484,   487,   494,   497,   502,   505,   508,   511,   515,   518,
     521,   523,   526,   528,   531,   536,   542,   545,   549,   555,
     562,   564,   566,   568,   576,   588,   597,   610,   612,   615,
     618,   620,   622,   625,   628,   631,   634,   638,   642,   645,
     648,   650,   652,   654,   656,   658,   660,   662,   665,   668,
     671,   675,   678,   681,   684,   691,   702,   704,   707,   709,
     716,   727,   729,   732,   735,   738,   741,   744,   747,   761,
     775,   788,   801,   803,   804,   806,   808,   813,   820,   822,
     824,   826,   828,   830,   832,   834,   836,   838,   843,   847,
     852,   853,   860,   869,   872,   876,   880,   884,   885,   890,
     895,   900,   905,   909,   913,   915,   919,   925,   930,   935,
     939,   942,   943,   945,   947,   951,   954,   957,   960,   963,
     966,   969,   972,   975,   978,   981,   984,   987,   990,   993,
     995,   998,  1001,  1006,  1016,  1019,  1022,  1025,  1027,  1031,
    1034,  1037,  1039,  1042,  1051,  1054,  1056,  1059,  1061,  1064,
    1066,  1071,  1081,  1084,  1086,  1088,  1090,  1092,  1095,  1097,
    1099,  1102,  1104,  1105,  1108,  1111,  1113,  1114,  1117,  1120,
    1122,  1124,  1127,  1130,  1133,  1135,  1137,  1139,  1141,  1143,
    1145,  1146,  1148,  1151,  1153,  1158,  1164,  1165,  1168,  1170,
    1176,  1179,  1182,  1184,  1186,  1188,  1191,  1193,  1196,  1198,
    1200,  1201,  1203,  1205,  1206,  1208,  1214,  1221,  1225,  1232,
    1236,  1238,  1242,  1244,  1246,  1248,  1252,  1259,  1267,  1273,
    1275,  1277,  1282,  1288,  1290,  1294,  1295,  1297,  1300,  1302,
    1307,  1309,  1312,  1314,  1317,  1321,  1324,  1326,  1329,  1331,
    1336,  1339,  1341,  1343,  1347,  1349,  1352,  1356,  1359,  1360,
    1362,  1367,  1370,  1371,  1376,  1382,  1388,  1389,  1391,  1393,
    1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1418,  1420,  1423,  1425,  1428,  1431,  1434,  1437,  1439,
    1441,  1443,  1444,  1446,  1447,  1449,  1450,  1452,  1453,  1455,
    1456,  1459,  1462,  1463,  1465,  1468,  1470,  1477,  1483,  1485,
    1487,  1489,  1492,  1495,  1497,  1499,  1501,  1503,  1506,  1508,
    1510,  1512,  1515,  1517,  1519,  1521,  1524,  1527,  1530,  1531,
    1533,  1534,  1536,  1538,  1540,  1542,  1544,  1546,  1548,  1550,
    1553,  1556,  1559,  1561,  1564,  1568,  1570,  1573,  1576,  1581,
    1588,  1590,  1601,  1603,  1606,  1610,  1614,  1617,  1620,  1623,
    1626,  1629,  1632,  1635,  1640,  1645,  1650,  1654,  1658,  1664,
    1669,  1674,  1679,  1683,  1687,  1691,  1695,  1698,  1701,  1706,
    1710,  1714,  1718,  1722,  1727,  1732,  1737,  1742,  1748,  1753,
    1760,  1768,  1773,  1778,  1784,  1787,  1791,  1795,  1799,  1802,
    1806,  1810,  1814,  1818,  1823,  1827,  1833,  1840,  1844,  1848,
    1853,  1857,  1861,  1865,  1869,  1873,  1879,  1883,  1887,  1892,
    1896,  1899,  1902,  1904,  1908,  1913,  1918,  1923,  1928,  1933,
    1940,  1945,  1950,  1956,  1961,  1966,  1971,  1976,  1982,  1987,
    1994,  2002,  2007,  2012,  2018,  2024,  2030,  2036,  2042,  2048,
    2056,  2062,  2068,  2075,  2080,  2085,  2090,  2095,  2100,  2107,
    2112,  2117,  2123,  2129,  2135,  2141,  2147,  2154,  2160,  2168,
    2177,  2183,  2189,  2196,  2200,  2204,  2208,  2212,  2217,  2221,
    2227,  2234,  2238,  2242,  2247,  2251,  2255,  2259,  2263,  2267,
    2273,  2277,  2281,  2286,  2291,  2296,  2300,  2306,  2311,  2316,
    2319,  2323,  2330,  2337,  2339,  2341,  2343,  2346,  2349,  2352,
    2356,  2360,  2363,  2376,  2379,  2382,  2384,  2388,  2393,  2396,
    2397,  2401,  2403,  2405,  2408,  2411,  2414,  2417,  2420,  2425,
    2430,  2435,  2439,  2444,  2450,  2459,  2466,  2471,  2481,  2488,
    2496,  2507,  2519,  2532,  2542,  2548,  2553,  2560,  2564,  2570,
    2576,  2583,  2589,  2594,  2604,  2615,  2627,  2637,  2644,  2651,
    2658,  2665,  2672,  2679,  2686,  2693,  2700,  2708,  2716,  2719,
    2724,  2729,  2734,  2739,  2745,  2750,  2755,  2761,  2767,  2771,
    2776,  2781,  2786,  2791,  2799,  2809,  2816,  2827,  2839,  2852,
    2862,  2866,  2869,  2873,  2879,  2887,  2892,  2896,  2900,  2907,
    2915,  2923,  2928,  2933,  2938,  2948,  2953,  2957,  2962,  2970,
    2978,  2981,  2985,  2989,  2993,  2998,  3001,  3004,  3009,  3020,
    3024,  3026,  3030,  3033,  3036,  3039,  3042,  3046,  3052,  3057,
    3063,  3066,  3074,  3078,  3081,  3084,  3088,  3091,  3094,  3097,
    3101,  3104,  3108,  3113,  3117,  3121,  3128,  3133,  3136,  3140,
    3143,  3146,  3151,  3155,  3159,  3162,  3166,  3168,  3171,  3173,
    3176,  3179,  3182,  3184,  3186,  3188,  3190,  3193,  3195,  3198,
    3201,  3203,  3206,  3209,  3211,  3214,  3216,  3218,  3220,  3222,
    3224,  3226,  3228,  3230,  3231,  3233,  3236,  3239,  3242,  3246,
    3252,  3260,  3268,  3275,  3282,  3289,  3296,  3302,  3309,  3316,
    3323,  3330,  3337,  3344,  3351,  3363,  3371,  3379,  3387,  3397,
    3407,  3418,  3431,  3444,  3447,  3449,  3452,  3456,  3461,  3466,
    3471,  3474,  3479,  3484,  3486,  3488,  3490,  3492,  3494,  3496,
    3498,  3500,  3503,  3505,  3507,  3509,  3513,  3517,  3522,  3529,
    3540,  3549,  3557,  3563,  3566,  3569,  3573,  3578,  3584,  3588,
    3594,  3600,  3604,  3609,  3615,  3621,  3627,  3631,  3637,  3640,
    3644,  3648,  3654,  3658,  3662,  3666,  3671,  3677,  3683,  3687,
    3693,  3699,  3703,  3708,  3714,  3720,  3723,  3726,  3730,  3736,
    3743,  3750,  3754,  3758,  3762,  3769,  3775,  3781,  3784,  3788,
    3792,  3798,  3805,  3809,  3812,  3815,  3819,  3822,  3826,  3829,
    3833,  3839,  3846,  3849,  3852,  3855,  3857,  3862,  3867,  3869,
    3872,  3875,  3878,  3881,  3884,  3887,  3890,  3894,  3897,  3901,
    3904,  3908,  3910,  3912,  3914,  3916,  3918,  3919,  3922,  3923,
    3926,  3927,  3929,  3930,  3931,  3933,  3935,  3937,  3939,  3947,
    3956,  3959,  3964,  3967,  3972,  3979,  3982,  3984,  3986,  3990,
    3994,  3996,  4001,  4004,  4006,  4010,  4014,  4019,  4023,  4027,
    4031,  4033,  4035,  4037,  4039,  4041,  4043,  4045,  4047,  4049,
    4051,  4053,  4055,  4057,  4059,  4062,  4063,  4064,  4067,  4069,
    4073,  4075,  4079,  4081,  4084,  4087,  4089,  4093,  4094,  4095,
    4098,  4101,  4103,  4107,  4113,  4115,  4118,  4121,  4125,  4128,
    4131,  4134,  4136,  4138,  4140,  4142,  4147,  4150,  4154,  4158,
    4161,  4165,  4168,  4171,  4174,  4178,  4182,  4186,  4189,  4193,
    4195,  4199,  4203,  4205,  4208,  4211,  4214,  4217,  4227,  4234,
    4236,  4238,  4240,  4242,  4245,  4248,  4252,  4256,  4258,  4261,
    4265,  4269,  4271,  4274,  4276,  4278,  4280,  4282,  4284,  4287,
    4290,  4295,  4297,  4300,  4303,  4306,  4310,  4312,  4314,  4316,
    4319,  4322,  4325,  4328,  4331,  4335,  4339,  4343,  4347,  4351,
    4355,  4359,  4361,  4364,  4367,  4370,  4374,  4377,  4381,  4385,
    4388,  4391,  4394,  4397,  4400,  4403,  4406,  4409,  4412,  4415,
    4418,  4421,  4424,  4427,  4431,  4435,  4439,  4442,  4445,  4448,
    4451,  4454,  4457,  4460,  4463,  4466,  4469,  4472,  4475,  4479,
    4483,  4487,  4492,  4499,  4502,  4504,  4506,  4508,  4510,  4512,
    4513,  4519,  4521,  4528,  4532,  4534,  4538,  4541,  4544,  4548,
    4552,  4555,  4558,  4561,  4564,  4567,  4570,  4574,  4577,  4580,
    4584,  4586,  4590,  4595,  4597,  4600,  4606,  4613,  4620,  4623,
    4625,  4628,  4631,  4637,  4644
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     352,     0,    -1,    96,   354,    -1,    44,   385,    -1,    41,
      66,     5,    -1,    46,   390,    -1,    59,    -1,    64,    -1,
      65,   392,    -1,    67,   282,     5,    -1,    68,   397,    -1,
      69,   399,    -1,    77,   400,    -1,    84,   409,    -1,    86,
     411,    -1,    87,   412,    -1,    95,   355,    -1,   125,   414,
      -1,   137,   415,    -1,   141,   457,    -1,   144,   460,    -1,
     148,    -1,   149,   355,    -1,   155,   466,    -1,   161,    16,
       4,    -1,   174,   469,    -1,   177,   487,    -1,   178,   488,
      -1,   179,   489,    -1,   182,   505,   490,    -1,   183,   524,
      -1,   196,    66,     5,    -1,   212,   525,    -1,   213,   526,
      -1,   214,   529,    -1,   235,    88,    -1,   228,   531,    -1,
     226,   530,    -1,   242,    -1,   239,   505,   533,    -1,   244,
     538,    -1,   246,   539,    -1,   251,   541,    -1,   264,    -1,
     270,   556,    -1,   285,     4,    -1,   286,   380,    -1,   297,
      -1,   299,   558,    -1,   305,    -1,   308,   560,    -1,   309,
     561,    -1,   339,   565,    -1,   346,   566,    -1,     3,    -1,
       4,    -1,   209,    -1,   208,    -1,   191,   355,    -1,   215,
     355,    -1,   217,   355,    -1,   309,   355,    -1,    44,   355,
      -1,    46,   355,    -1,    76,   355,    -1,    84,   355,    -1,
     142,   355,    -1,   244,   355,    -1,     4,    -1,   342,    -1,
     347,    -1,   209,    -1,   293,    -1,   201,    -1,   348,    -1,
     208,    -1,   119,    -1,    -1,   245,    38,    -1,   133,    38,
      -1,   245,    -1,   133,    -1,    -1,   358,    -1,   353,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
     359,   359,    -1,   360,   361,    -1,   361,   361,    -1,   353,
     353,    -1,   156,    -1,   219,    -1,   101,    -1,    19,    -1,
     364,    -1,   309,    -1,   310,    -1,   311,    -1,   312,    -1,
     313,    -1,   314,    -1,   315,    -1,   316,    -1,   317,    -1,
     318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,    -1,
     323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,    -1,
     328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,    -1,
     333,    -1,   334,    -1,   335,    -1,   336,    -1,    56,    -1,
     214,    -1,    -1,   343,    -1,   203,    -1,   238,    -1,   172,
      -1,   176,    -1,   227,    -1,   274,    -1,   275,    -1,    28,
      -1,   266,    -1,   150,    -1,    30,    -1,   253,    -1,   248,
      -1,    94,    -1,   162,    -1,    -1,   127,    -1,    35,    -1,
     128,    -1,   163,    -1,   153,    -1,   135,    -1,   106,    -1,
      -1,    97,    -1,   259,    -1,    -1,    97,    -1,    24,    -1,
      25,    -1,    -1,   263,    -1,   164,    -1,    -1,    17,    -1,
     158,    -1,    -1,   156,    -1,   183,    -1,    -1,    62,    -1,
      48,    -1,   102,    -1,    85,    -1,   349,    -1,    27,    -1,
      51,    -1,    -1,     4,    -1,    82,    -1,   151,    -1,   221,
      -1,   222,    -1,   236,    -1,   277,    -1,    -1,    32,    -1,
     279,    -1,    -1,   197,    -1,    42,    -1,    43,    -1,   169,
      -1,   170,    -1,   303,   384,    -1,    47,   381,    -1,    74,
     382,    -1,   149,   383,    -1,   185,   536,    -1,    37,   537,
      -1,   252,   353,    -1,   230,    -1,   287,   353,    -1,   355,
      -1,    66,     5,    -1,   355,    -1,    66,     5,    -1,   355,
      -1,    66,     5,    -1,   353,   353,    -1,   223,   353,   353,
     353,   353,   353,    -1,    12,   386,    -1,    71,     5,     5,
       5,    -1,   100,     4,    -1,   118,   387,    -1,   134,   388,
      -1,    53,   267,     4,    -1,   290,   389,    -1,   122,     5,
      -1,    59,    -1,   353,   353,    -1,   353,    -1,   353,   353,
      -1,   353,    12,   353,   353,    -1,   353,   353,    12,   353,
     353,    -1,   290,   353,    -1,   290,   353,   353,    -1,   290,
     353,    12,   353,   353,    -1,   290,   353,   353,    12,   353,
     353,    -1,    32,    -1,   279,    -1,   123,    -1,   353,   353,
      12,    59,     5,     5,     5,    -1,   353,   353,     4,   353,
     353,    12,    59,     5,     5,     5,     5,    -1,   353,   353,
      12,   353,   353,     5,     5,     5,    -1,   353,   353,     4,
     353,   353,    12,   353,   353,     5,     5,     5,     5,    -1,
     353,    -1,   353,   353,    -1,   290,   391,    -1,   123,    -1,
     353,    -1,   353,   353,    -1,   255,   393,    -1,   192,   394,
      -1,   186,   395,    -1,   300,   353,   353,    -1,   300,   196,
     196,    -1,   345,   396,    -1,   230,   355,    -1,   138,    -1,
     175,    -1,   353,    -1,   186,    -1,   345,    -1,   344,    -1,
     300,    -1,     4,   368,    -1,   192,   368,    -1,   248,     4,
      -1,   353,     4,     4,    -1,    78,   353,    -1,   248,     4,
      -1,   171,     4,    -1,     4,   353,   353,     4,     6,     4,
      -1,   244,   353,   353,   353,   353,   353,   353,     4,     6,
       4,    -1,    40,    -1,   193,   398,    -1,   111,    -1,     4,
     353,   353,     4,     6,     4,    -1,   244,   353,   353,   353,
     353,   353,   353,     4,     6,     4,    -1,   367,    -1,   176,
     353,    -1,    83,   401,    -1,    99,   402,    -1,   174,   403,
      -1,   216,   407,    -1,   251,   408,    -1,     5,     4,     4,
     406,     4,     4,   367,   353,   404,   405,   353,   353,     5,
      -1,     5,     4,     4,   406,     4,     4,   367,   353,   353,
     405,   353,   353,     5,    -1,     5,     4,     4,   406,     4,
       4,   367,   353,   404,   353,   353,     5,    -1,     5,     4,
       4,   406,     4,     4,   367,   353,   353,   353,   353,     5,
      -1,   225,    -1,    -1,    31,    -1,     5,    -1,     5,     5,
       4,   355,    -1,     5,     4,   355,     5,   363,   369,    -1,
     186,    -1,   345,    -1,   344,    -1,   300,    -1,   138,    -1,
     175,    -1,   270,    -1,    46,    -1,     5,    -1,     5,     5,
       4,   355,    -1,     5,   363,   369,    -1,    31,     5,   363,
     369,    -1,    -1,   353,   353,   353,   353,   363,   369,    -1,
      59,   362,   363,   369,   353,   353,   363,   371,    -1,   286,
     410,    -1,    40,   353,   353,    -1,   193,   353,   353,    -1,
     111,   353,   353,    -1,    -1,   353,   353,   363,   369,    -1,
      40,   353,   353,     4,    -1,   193,   353,   353,     4,    -1,
     111,   353,   353,     4,    -1,   365,   353,   353,    -1,   363,
     369,   362,    -1,   355,    -1,   308,   353,   353,    -1,    40,
     193,   365,   353,   353,    -1,   193,   365,   353,   353,    -1,
      40,   193,   363,   362,    -1,   193,   363,   362,    -1,    33,
       4,    -1,    -1,    32,    -1,   279,    -1,   144,   117,     5,
      -1,    41,    66,    -1,    44,   416,    -1,    46,   418,    -1,
      65,   419,    -1,    68,   423,    -1,    67,   422,    -1,    69,
     425,    -1,    77,   427,    -1,    79,   430,    -1,    84,   431,
      -1,    86,   432,    -1,    88,   434,    -1,    87,   433,    -1,
      93,   435,    -1,    95,    -1,   124,   439,    -1,   141,   445,
      -1,   151,     5,     5,     4,    -1,   152,    89,     5,     5,
     353,   353,   365,     4,   413,    -1,   155,   437,    -1,   159,
     436,    -1,   161,    16,    -1,   186,    -1,   182,   505,   499,
      -1,   183,   446,    -1,   196,    66,    -1,   212,    -1,   213,
     447,    -1,   220,   281,   365,   353,   353,     4,     4,     5,
      -1,   244,   448,    -1,   246,    -1,   270,   449,    -1,   285,
      -1,   286,   450,    -1,   294,    -1,   301,   365,   353,   353,
      -1,   307,    89,     5,     5,   353,   353,   365,     4,   413,
      -1,   309,   455,    -1,   346,    -1,   100,    -1,   118,    -1,
     134,    -1,    53,   267,    -1,    88,    -1,   122,    -1,    71,
     417,    -1,   173,    -1,    -1,   186,     5,    -1,   103,     5,
      -1,   118,    -1,    -1,   404,   405,    -1,   353,   405,    -1,
     255,    -1,   192,    -1,   186,   420,    -1,   300,   168,    -1,
     345,   421,    -1,   230,    -1,   192,    -1,   248,    -1,    78,
      -1,   248,    -1,   171,    -1,    -1,   282,    -1,   168,   424,
      -1,     4,    -1,     4,   365,   353,   353,    -1,     4,   353,
     353,   367,   353,    -1,    -1,   168,   426,    -1,   176,    -1,
       4,   353,   353,   367,   353,    -1,   363,   369,    -1,    65,
     428,    -1,    66,    -1,    91,    -1,   168,    -1,   206,   168,
      -1,   185,    -1,    69,   429,    -1,   270,    -1,   338,    -1,
      -1,   192,    -1,   255,    -1,    -1,   176,    -1,   353,   353,
     363,   369,   370,    -1,   365,   353,   353,   363,   369,   370,
      -1,   363,   369,   370,    -1,    59,   363,   369,   370,   363,
     371,    -1,   286,   363,   369,    -1,   365,    -1,   363,   369,
     370,    -1,   278,    -1,    33,    -1,   365,    -1,   363,   369,
     370,    -1,   363,   369,   362,   353,   353,     5,    -1,     4,
     363,   369,   362,   353,   353,     5,    -1,   365,   353,   353,
       4,     4,    -1,     5,    -1,    65,    -1,   365,   353,   353,
       5,    -1,     6,     4,     4,     4,     4,    -1,    88,    -1,
     120,   195,   438,    -1,    -1,     4,    -1,   353,   353,    -1,
     198,    -1,    59,   363,   369,   370,    -1,    81,    -1,   100,
     442,    -1,    45,    -1,   117,   440,    -1,   120,   195,   443,
      -1,   146,   441,    -1,   147,    -1,   207,   195,    -1,   267,
      -1,   267,   363,   369,   371,    -1,   268,   444,    -1,   338,
      -1,     4,    -1,   365,   353,   353,    -1,     4,    -1,   165,
       5,    -1,     4,   165,     5,    -1,   309,     4,    -1,    -1,
     356,    -1,   356,   365,   353,   353,    -1,   356,     4,    -1,
      -1,   131,   156,   363,   369,    -1,   131,   156,     4,   363,
     369,    -1,   290,   156,   353,   363,   369,    -1,    -1,   211,
      -1,   302,    -1,    66,    -1,   181,    -1,   238,    -1,   280,
      -1,   289,    -1,   230,    -1,    61,    -1,   280,    -1,   303,
      -1,   134,    -1,   237,    -1,   237,   187,    -1,   265,    -1,
     265,   187,    -1,    21,    -1,   303,   454,    -1,    47,   451,
      -1,    74,   452,    -1,   149,   453,    -1,   185,    -1,    37,
      -1,   252,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,
      66,    -1,    -1,   223,    -1,    -1,    16,   456,    -1,   195,
     364,    -1,    -1,   224,    -1,    83,   458,    -1,    99,    -1,
     363,   369,   370,   459,     5,     5,    -1,   363,   369,   370,
     459,     5,    -1,    20,    -1,   233,    -1,    19,    -1,    44,
     461,    -1,    77,   462,    -1,    84,    -1,    94,    -1,    95,
      -1,   101,    -1,   124,   463,    -1,   141,    -1,   155,    -1,
     162,    -1,   182,   464,    -1,   219,    -1,   156,    -1,   270,
      -1,   280,   363,    -1,   309,   465,    -1,    72,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    87,    -1,   191,    -1,
     149,    -1,   257,    -1,   216,    -1,   295,    -1,   363,    -1,
      58,   363,    -1,   115,   363,    -1,   172,   363,    -1,    18,
      -1,   286,   363,    -1,   199,     4,     4,    -1,   116,    -1,
     184,     5,    -1,    88,   468,    -1,   258,   120,   195,   467,
      -1,   258,     6,     4,     4,     4,     4,    -1,   299,    -1,
     309,   353,   353,   353,   353,   353,   353,   353,   353,     4,
      -1,     5,    -1,     5,     4,    -1,     4,     4,    56,    -1,
       4,     4,   363,    -1,   192,   355,    -1,    26,   470,    -1,
     112,   472,    -1,   124,   473,    -1,   158,   486,    -1,   205,
     484,    -1,   218,   485,    -1,     5,    14,     5,   374,    -1,
       5,    15,     5,   374,    -1,     5,    61,     5,   374,    -1,
       5,   189,   374,    -1,     5,   190,   374,    -1,     5,   261,
     372,     4,   374,    -1,     5,   271,     4,   374,    -1,     5,
     272,     4,   374,    -1,     5,   302,     5,   374,    -1,   244,
      87,   471,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   189,    -1,     5,   190,
      -1,     5,   261,   372,     4,    -1,     5,   271,     4,    -1,
       5,   272,     4,    -1,     5,   302,     5,    -1,     5,     5,
     269,    -1,     5,    14,     5,   374,    -1,     5,    15,     5,
     374,    -1,     5,    61,     5,   374,    -1,     5,   189,   373,
     374,    -1,     5,     5,   269,   373,   374,    -1,     5,   190,
     373,   374,    -1,     5,   261,   372,     4,   373,   374,    -1,
       5,   276,   372,     4,     4,   373,   374,    -1,     5,   271,
       4,   374,    -1,     5,   272,     4,   374,    -1,     5,   302,
       5,   373,   374,    -1,   268,   474,    -1,   117,    87,   475,
      -1,   244,   156,   483,    -1,   244,    87,   482,    -1,   191,
     476,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,   373,    -1,     5,     5,
     269,   373,    -1,     5,   190,   373,    -1,     5,   261,   372,
       4,   373,    -1,     5,   276,   372,     4,     4,   373,    -1,
       5,   271,     4,    -1,     5,   272,     4,    -1,     5,   302,
       5,   373,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   189,   373,    -1,     5,
     190,   373,    -1,     5,   261,   372,     4,   373,    -1,     5,
     271,     4,    -1,     5,   272,     4,    -1,     5,   302,     5,
     373,    -1,   156,   161,   477,    -1,   161,   478,    -1,   156,
     479,    -1,   481,    -1,   156,   337,   480,    -1,     5,    14,
       5,   374,    -1,     5,    15,     5,   374,    -1,     5,    61,
       5,   374,    -1,     5,   189,   373,   374,    -1,     5,   190,
     373,   374,    -1,     5,   261,   372,     4,   373,   374,    -1,
       5,   271,     4,   374,    -1,     5,   272,     4,   374,    -1,
       5,   302,     5,   373,   374,    -1,     5,    14,     5,   374,
      -1,     5,    15,     5,   374,    -1,     5,    61,     5,   374,
      -1,     5,   189,   373,   374,    -1,     5,     5,   269,   373,
     374,    -1,     5,   190,   373,   374,    -1,     5,   261,   372,
       4,   373,   374,    -1,     5,   276,   372,     4,     4,   373,
     374,    -1,     5,   271,     4,   374,    -1,     5,   272,     4,
     374,    -1,     5,   302,     5,   373,   374,    -1,   364,     5,
      14,     5,   374,    -1,   364,     5,    15,     5,   374,    -1,
     364,     5,    61,     5,   374,    -1,   364,     5,   189,   373,
     374,    -1,   364,     5,   190,   373,   374,    -1,   364,     5,
     261,   372,     4,   373,   374,    -1,   364,     5,   271,     4,
     374,    -1,   364,     5,   272,     4,   374,    -1,   364,     5,
     302,     5,   373,   374,    -1,     5,    14,     5,   374,    -1,
       5,    15,     5,   374,    -1,     5,    61,     5,   374,    -1,
       5,   189,   373,   374,    -1,     5,   190,   373,   374,    -1,
       5,   261,   372,     4,   373,   374,    -1,     5,   271,     4,
     374,    -1,     5,   272,     4,   374,    -1,     5,   302,     5,
     373,   374,    -1,   364,     5,    14,     5,   374,    -1,   364,
       5,    15,     5,   374,    -1,   364,     5,    61,     5,   374,
      -1,   364,     5,   189,   373,   374,    -1,   364,     5,     5,
     269,   373,   374,    -1,   364,     5,   190,   373,   374,    -1,
     364,     5,   261,   372,     4,   373,   374,    -1,   364,     5,
     276,   372,     4,     4,   373,   374,    -1,   364,     5,   271,
       4,   374,    -1,   364,     5,   272,     4,   374,    -1,   364,
       5,   302,     5,   373,   374,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   189,
     373,    -1,     5,     5,   269,   373,    -1,     5,   190,   373,
      -1,     5,   261,   372,     4,   373,    -1,     5,   276,   372,
       4,     4,   373,    -1,     5,   271,     4,    -1,     5,   272,
       4,    -1,     5,   302,     5,   373,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,   373,    -1,     5,   190,   373,    -1,     5,   261,   372,
       4,   373,    -1,     5,   271,     4,    -1,     5,   272,     4,
      -1,     5,   302,     5,   373,    -1,     5,    14,     5,   374,
      -1,     5,    61,     5,   374,    -1,     5,   189,   374,    -1,
       5,   261,   372,     4,   374,    -1,     5,   271,     4,   374,
      -1,     5,   302,     5,   374,    -1,     5,     5,    -1,   268,
       5,     5,    -1,    93,     4,     4,     4,     4,     4,    -1,
     186,     4,     4,     4,     4,     4,    -1,   111,    -1,   229,
      -1,   355,    -1,   139,   355,    -1,    88,   355,    -1,    66,
       5,    -1,     5,     4,     4,    -1,   299,   353,   353,    -1,
     346,   353,    -1,     5,     5,   364,   369,     5,     5,   364,
     369,   353,   364,   371,     5,    -1,    60,   493,    -1,    66,
       5,    -1,    80,    -1,    73,   498,     5,    -1,    73,   498,
     302,     5,    -1,    75,    99,    -1,    -1,    83,   491,   494,
      -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,   497,
      -1,   114,     4,    -1,   129,     5,    -1,   149,    17,    -1,
     149,   210,   353,   353,    -1,   149,   291,   353,   353,    -1,
       4,    20,   377,   355,    -1,     4,    21,   358,    -1,     4,
      21,   358,   365,    -1,     4,    21,   358,   363,   369,    -1,
       4,    22,   237,   353,   353,     4,   363,   371,    -1,     4,
      22,   237,     5,   363,   371,    -1,     4,    48,   121,   355,
      -1,     4,    49,   237,   353,   353,   353,     4,   363,   371,
      -1,     4,    49,   237,     5,   363,   371,    -1,     4,    48,
     237,   353,   353,   363,   371,    -1,     4,    52,   105,   358,
     358,     4,   353,   353,   353,     4,    -1,     4,    52,   105,
     358,   358,     4,   353,   353,   353,     4,   365,    -1,     4,
      52,   105,   358,   358,     4,   353,   353,   353,     4,   363,
     369,    -1,     4,    52,   105,     5,     5,   363,   369,   363,
     371,    -1,     4,    55,   492,     5,     5,    -1,     4,    62,
     121,   355,    -1,     4,    62,   237,   353,   363,   371,    -1,
       4,    66,     5,    -1,     4,    74,    27,   355,   355,    -1,
       4,    74,   166,     5,     5,    -1,     4,    74,   237,   353,
     363,   371,    -1,     4,    74,   280,   363,   369,    -1,     4,
      75,   138,   355,    -1,     4,    82,   105,   358,   358,     4,
     353,   353,     4,    -1,     4,    82,   105,   358,   358,     4,
     353,   353,     4,   365,    -1,     4,    82,   105,   358,   358,
       4,   353,   353,     4,   363,   369,    -1,     4,    82,   105,
       5,     5,   363,   369,   363,   371,    -1,     4,    83,    22,
     237,   353,   353,    -1,     4,    83,    49,   237,   353,   353,
      -1,     4,    83,    52,    21,   353,   353,    -1,     4,    83,
      52,   237,   353,   353,    -1,     4,    83,   110,   237,   353,
     353,    -1,     4,    83,   113,    21,   353,   353,    -1,     4,
      83,   113,   237,   353,   353,    -1,     4,    83,    82,    21,
     353,   353,    -1,     4,    83,    82,   237,   353,   353,    -1,
       4,    83,   225,   306,     4,   353,   353,    -1,     4,    83,
     256,   306,     4,   353,   353,    -1,     4,    99,    -1,     4,
      99,    22,     4,    -1,     4,    99,    49,     4,    -1,     4,
      99,    52,     4,    -1,     4,    99,   110,     4,    -1,     4,
      99,    55,   492,     5,    -1,     4,    99,   113,     4,    -1,
       4,    99,    82,     4,    -1,     4,    99,   225,   306,     4,
      -1,     4,    99,   256,   306,     4,    -1,     4,    99,   282,
      -1,     4,    99,   282,     5,    -1,     4,    99,   282,     4,
      -1,     4,   105,    40,     4,    -1,     4,   109,   121,   355,
      -1,     4,   109,   237,   353,   353,   363,   371,    -1,     4,
     110,   237,   353,   353,   353,     4,   363,   371,    -1,     4,
     110,   237,     5,   363,   371,    -1,     4,   113,   105,   358,
     358,     4,   353,   353,   353,     4,    -1,     4,   113,   105,
     358,   358,     4,   353,   353,   353,     4,   365,    -1,     4,
     113,   105,   358,   358,     4,   353,   353,   353,     4,   363,
     369,    -1,     4,   113,   105,     5,     5,   363,   369,   363,
     371,    -1,     4,   129,     5,    -1,     4,   149,    -1,     4,
     149,   210,    -1,     4,   171,    27,   355,   355,    -1,     4,
     171,   223,   363,   369,   362,   362,    -1,     4,   194,   353,
     353,    -1,     4,   194,   132,    -1,     4,   194,    36,    -1,
       4,   194,   290,   363,   369,   362,    -1,     4,   225,   242,
     353,   353,   363,   371,    -1,     4,   256,   242,   353,   353,
     363,   371,    -1,     4,   223,   260,   375,    -1,     4,   223,
     267,     4,    -1,     4,   225,   121,   355,    -1,     4,   231,
     363,   369,   362,   362,   353,   363,   371,    -1,     4,   232,
     511,   355,    -1,     4,   246,    40,    -1,     4,   247,   130,
       5,    -1,     4,   247,   223,   363,   369,   362,   362,    -1,
       4,   247,   280,   363,   369,   363,   371,    -1,     4,   257,
      -1,     4,   257,   210,    -1,     4,   282,     5,    -1,     4,
     284,     5,    -1,     4,   284,   246,   355,    -1,     4,   296,
      -1,     4,   298,    -1,     4,   304,    27,   355,    -1,     4,
     304,   223,   363,   369,   362,   363,   371,   353,   358,    -1,
       4,   338,     4,    -1,   164,    -1,   164,   353,   353,    -1,
     173,   506,    -1,   174,   507,    -1,   194,   508,    -1,   230,
     355,    -1,   232,   511,   355,    -1,   232,   511,   355,   353,
     353,    -1,   246,    40,   353,   353,    -1,   246,   193,   353,
     353,     4,    -1,   246,   111,    -1,   251,     5,   498,   363,
     369,   370,   355,    -1,   251,   283,     5,    -1,   257,   515,
      -1,   264,   516,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   129,     5,
      -1,     5,   149,    -1,     5,   149,   210,    -1,     5,   194,
     353,   353,    -1,     5,   194,   132,    -1,     5,   194,    36,
      -1,     5,   194,   290,   363,   369,   362,    -1,     5,   232,
     511,   355,    -1,     5,   257,    -1,     5,   257,   210,    -1,
       5,   296,    -1,     5,   298,    -1,   282,   105,     5,     5,
      -1,   282,    99,     5,    -1,   282,    99,    17,    -1,   282,
       5,    -1,   282,   299,     5,    -1,   216,    -1,   216,   363,
      -1,   295,    -1,   296,    17,    -1,   298,    17,    -1,   338,
       4,    -1,   257,    -1,   298,    -1,   149,    -1,   296,    -1,
      40,   194,    -1,   194,    -1,   111,   194,    -1,    40,   105,
      -1,   105,    -1,   111,   105,    -1,    40,   246,    -1,   246,
      -1,   111,   246,    -1,    99,    -1,   284,    -1,    66,    -1,
     338,    -1,   232,    -1,   129,    -1,   164,    -1,   299,    -1,
      -1,     4,    -1,    30,   355,    -1,   237,   353,    -1,   160,
       4,    -1,   211,     4,   353,    -1,    62,   353,   353,   353,
     512,    -1,   109,   353,   353,   353,   353,   357,   512,    -1,
      48,   353,   353,   353,   353,   357,   512,    -1,   225,   353,
     353,   353,   353,   512,    -1,   256,   353,   353,   353,   353,
     512,    -1,   171,   353,   353,   353,   353,   512,    -1,   304,
     353,   353,   353,   353,   512,    -1,   284,   353,   353,   357,
     512,    -1,    62,   223,   353,   353,   376,   512,    -1,    48,
     223,   353,   353,   376,   512,    -1,   102,   223,   353,   353,
     376,   512,    -1,    85,   223,   353,   353,   376,   512,    -1,
     349,   223,   353,   353,   376,   512,    -1,    27,   223,   353,
     353,   376,   512,    -1,    51,   223,   353,   353,   376,   512,
      -1,   247,   353,   353,   353,   353,   363,   369,   363,   371,
       5,   512,    -1,    74,   353,   353,   353,   363,   369,   512,
      -1,   231,   353,   353,   353,   353,   353,   512,    -1,    22,
     353,   353,   353,   353,     4,   512,    -1,   110,   353,   353,
     353,   353,   353,     4,   357,   512,    -1,    49,   353,   353,
     353,   353,   353,     4,   357,   512,    -1,    82,   353,   353,
     358,   358,     4,   353,   353,     4,   512,    -1,   113,   353,
     353,   358,   358,     4,   353,   353,   353,     4,   357,   512,
      -1,    52,   353,   353,   358,   358,     4,   353,   353,   353,
       4,   357,   512,    -1,    75,   512,    -1,   183,    -1,   283,
     495,    -1,     5,   353,   353,    -1,   302,     5,   353,   353,
      -1,   353,   353,   302,     5,    -1,     5,   363,   369,   362,
      -1,     4,     4,    -1,    40,   353,   353,     4,    -1,   193,
     353,   353,     4,    -1,   111,    -1,   104,    -1,   340,    -1,
      63,    -1,   250,    -1,   249,    -1,   234,    -1,   341,    -1,
      60,   500,    -1,    66,    -1,   129,    -1,   114,    -1,   143,
     353,   353,    -1,   154,   353,   353,    -1,     4,    20,    82,
     363,    -1,     4,    20,   151,     5,     5,     4,    -1,     4,
      20,   221,     5,     5,     5,     5,   363,   369,   378,    -1,
       4,    20,   222,     5,     5,   363,   369,   378,    -1,     4,
      20,   236,     5,     5,     5,   363,    -1,     4,    20,   277,
     363,   369,    -1,   154,    17,    -1,     4,    21,    -1,     4,
      21,   365,    -1,     4,    21,   363,   369,    -1,     4,    22,
     237,   363,   371,    -1,     4,    48,   121,    -1,     4,    49,
     237,   363,   371,    -1,     4,    48,   237,   363,   371,    -1,
       4,    52,    21,    -1,     4,    52,    21,   365,    -1,     4,
      52,    21,   363,   369,    -1,     4,    52,   237,   363,   371,
      -1,     4,    59,   363,   369,   370,    -1,     4,    62,   121,
      -1,     4,    62,   237,   363,   371,    -1,     4,    66,    -1,
       4,    74,    27,    -1,     4,    74,   166,    -1,     4,    74,
     237,   363,   371,    -1,     4,    74,   280,    -1,     4,    75,
     138,    -1,     4,    82,    21,    -1,     4,    82,    21,   365,
      -1,     4,    82,    21,   363,   369,    -1,     4,    82,   237,
     363,   371,    -1,     4,   109,   121,    -1,     4,   109,   237,
     363,   371,    -1,     4,   110,   237,   363,   371,    -1,     4,
     113,    21,    -1,     4,   113,    21,   365,    -1,     4,   113,
      21,   363,   369,    -1,     4,   113,   237,   363,   371,    -1,
       4,   129,    -1,     4,   149,    -1,     4,   171,    27,    -1,
       4,   171,   167,   363,   371,    -1,     4,   171,   223,   363,
     369,   370,    -1,     4,   180,   167,   353,   363,   371,    -1,
       4,   225,   121,    -1,     4,   223,   260,    -1,     4,   223,
     267,    -1,     4,   231,   223,   363,   369,   370,    -1,     4,
     231,   167,   363,   371,    -1,     4,   231,   288,   363,   371,
      -1,     4,   232,    -1,     4,   232,   511,    -1,     4,   247,
     130,    -1,     4,   247,   167,   363,   371,    -1,     4,   247,
     223,   363,   369,   370,    -1,     4,   247,   280,    -1,     4,
     257,    -1,     4,   282,    -1,     4,   282,     4,    -1,     4,
     284,    -1,     4,   284,   246,    -1,     4,   294,    -1,     4,
     304,    27,    -1,     4,   304,   167,   363,   371,    -1,     4,
     304,   223,   363,   369,   370,    -1,     4,   338,    -1,   149,
     501,    -1,   149,   206,    -1,   206,    -1,   225,   256,   353,
     353,    -1,   256,   256,   353,   353,    -1,   230,    -1,   232,
     511,    -1,   257,   502,    -1,   257,   206,    -1,   264,   503,
      -1,     5,    66,    -1,     5,   129,    -1,     5,   154,    -1,
       5,   232,   511,    -1,     5,   282,    -1,     5,   282,   206,
      -1,   282,    17,    -1,   282,    98,   195,    -1,   338,    -1,
      30,    -1,   237,    -1,   160,    -1,   211,    -1,    -1,   353,
     353,    -1,    -1,   353,   353,    -1,    -1,   284,    -1,    -1,
      -1,   224,    -1,   239,    -1,   300,    -1,    57,    -1,   498,
     363,   369,   370,   355,   513,   519,    -1,   257,   498,   363,
     369,   370,   355,   513,   519,    -1,   498,     5,    -1,   498,
       5,   363,   369,    -1,   498,     4,    -1,   498,     4,   363,
     369,    -1,   124,     5,     5,   496,     4,     5,    -1,   353,
     353,    -1,   132,    -1,    36,    -1,    40,   353,   353,    -1,
     193,   353,   353,    -1,   111,    -1,   290,   363,   369,   362,
      -1,   509,   510,    -1,   510,    -1,   511,   350,   355,    -1,
      66,   350,     5,    -1,    92,   350,     4,     4,    -1,   338,
     350,     4,    -1,   129,   350,     5,    -1,   284,   350,     5,
      -1,   522,    -1,   523,    -1,   202,    -1,   257,    -1,   149,
      -1,    91,    -1,   126,    -1,   105,    -1,   194,    -1,   246,
      -1,    99,    -1,   157,    -1,   273,    -1,   504,    -1,   504,
     509,    -1,    -1,    -1,   514,   517,    -1,    17,    -1,   210,
     353,   353,    -1,   291,    -1,   291,   353,   353,    -1,   355,
      -1,   284,   355,    -1,   517,   518,    -1,   518,    -1,   511,
     350,   355,    -1,    -1,    -1,   520,   521,    -1,   521,   522,
      -1,   522,    -1,   282,   350,     5,    -1,    55,   350,   492,
       5,     5,    -1,    64,    -1,    66,     5,    -1,   181,   366,
      -1,   238,   353,   353,    -1,   280,   363,    -1,   289,   353,
      -1,   181,     4,    -1,   349,    -1,   347,    -1,   341,    -1,
     202,    -1,   353,   353,   353,   353,    -1,   353,   353,    -1,
     365,   353,   353,    -1,   363,   369,   362,    -1,   290,   527,
      -1,    39,   353,   353,    -1,   193,   528,    -1,   230,   355,
      -1,   353,   353,    -1,   365,   353,   353,    -1,   363,   369,
     362,    -1,    40,   353,   353,    -1,   353,   353,    -1,   111,
     353,   353,    -1,   355,    -1,   309,   364,   369,    -1,     5,
       4,     4,    -1,   299,    -1,    70,   532,    -1,   168,     4,
      -1,   243,     4,    -1,   252,   353,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    54,    -1,   140,    -1,   244,    -1,
      90,    -1,   149,   534,    -1,   257,   535,    -1,    40,   353,
     353,    -1,   193,   353,   353,    -1,   111,    -1,   262,   111,
      -1,    40,   353,   353,    -1,   193,   353,   353,    -1,   111,
      -1,   262,   111,    -1,   188,    -1,    13,    -1,   202,    -1,
      34,    -1,   107,    -1,    61,     5,    -1,   280,   363,    -1,
     303,     4,     4,     4,    -1,   353,    -1,   353,    97,    -1,
     193,   540,    -1,   290,   353,    -1,   290,   353,    97,    -1,
      40,    -1,   353,    -1,   111,    -1,    26,   542,    -1,   124,
     544,    -1,   205,   554,    -1,   112,   555,    -1,   218,     5,
      -1,   120,     5,   379,    -1,    61,     5,   379,    -1,   271,
       4,   379,    -1,   244,    87,   543,    -1,   120,     5,   379,
      -1,    61,     5,   379,    -1,   271,     4,   379,    -1,   545,
      -1,   156,   545,    -1,   281,   546,    -1,   268,   547,    -1,
     117,    87,   548,    -1,   191,   549,    -1,   244,   156,   551,
      -1,   244,    87,   552,    -1,   241,   553,    -1,   120,     5,
      -1,    61,     5,    -1,   271,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   271,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   271,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   271,     4,    -1,   156,   550,    -1,   120,     5,     4,
      -1,    61,     5,     4,    -1,   271,     4,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   271,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   271,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   271,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   271,     4,    -1,   120,     5,   379,    -1,    61,
       5,   379,    -1,   271,     4,   379,    -1,   120,     5,     5,
     379,    -1,   557,     4,     4,   353,   353,   358,    -1,   557,
       4,    -1,    99,    -1,    50,    -1,   292,    -1,   136,    -1,
     108,    -1,    -1,     4,   353,   353,   353,   353,    -1,   204,
      -1,   204,     4,   353,   353,   353,   353,    -1,   124,   268,
     559,    -1,     4,    -1,   353,   363,   369,    -1,     4,     4,
      -1,   353,   353,    -1,   290,   353,   353,    -1,   364,   369,
     370,    -1,    16,   564,    -1,   242,     4,    -1,   240,   563,
      -1,    23,   562,    -1,     4,     4,    -1,     4,     5,    -1,
     284,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     284,     4,     5,    -1,     4,    -1,     4,   364,   369,    -1,
       4,     6,   364,   369,    -1,   229,    -1,   353,   353,    -1,
     353,   353,    12,   353,   353,    -1,   353,   353,    12,   365,
     353,   353,    -1,   353,   353,    12,   363,   369,   362,    -1,
     290,   567,    -1,   123,    -1,   123,   353,    -1,   353,   353,
      -1,   353,   353,    12,   353,   353,    -1,   353,   353,    12,
     365,   353,   353,    -1,   353,   353,    12,   363,   369,   362,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   455,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   509,   510,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   524,   527,   529,
     530,   531,   532,   534,   535,   536,   537,   540,   541,   542,
     543,   544,   547,   548,   551,   552,   553,   556,   559,   562,
     565,   577,   584,   591,   599,   600,   601,   602,   603,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630,   631,   632,   633,   636,   637,   640,
     641,   642,   643,   646,   647,   648,   649,   650,   651,   652,
     653,   656,   657,   658,   659,   660,   663,   664,   665,   666,
     667,   668,   669,   670,   673,   674,   675,   678,   679,   680,
     681,   684,   685,   686,   689,   690,   691,   694,   695,   696,
     699,   700,   701,   702,   703,   704,   705,   706,   709,   710,
     713,   714,   715,   716,   717,   718,   721,   722,   723,   726,
     727,   728,   729,   730,   731,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   746,   747,   750,   751,   754,   755,
     758,   759,   763,   764,   765,   766,   767,   768,   769,   770,
     773,   774,   777,   778,   779,   781,   783,   784,   785,   787,
     791,   792,   795,   796,   798,   801,   803,   809,   810,   811,
     814,   815,   816,   819,   820,   821,   822,   823,   824,   825,
     831,   832,   835,   836,   837,   838,   839,   842,   843,   844,
     847,   848,   853,   858,   865,   867,   869,   870,   871,   874,
     876,   879,   880,   883,   884,   885,   886,   887,   890,   892,
     894,   899,   904,   907,   908,   911,   912,   913,   920,   921,
     922,   923,   926,   927,   930,   931,   934,   935,   938,   940,
     944,   945,   948,   950,   951,   952,   953,   956,   957,   959,
     960,   961,   964,   966,   968,   969,   971,   973,   975,   977,
     981,   984,   985,   986,   989,   992,   993,   994,   995,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,
    1007,  1008,  1009,  1010,  1012,  1013,  1014,  1015,  1016,  1017,
    1018,  1019,  1020,  1021,  1023,  1024,  1025,  1026,  1027,  1028,
    1029,  1031,  1033,  1034,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1047,  1048,  1049,  1052,  1055,  1056,  1058,  1060,
    1061,  1062,  1063,  1064,  1065,  1072,  1073,  1076,  1077,  1078,
    1081,  1082,  1085,  1088,  1089,  1091,  1095,  1096,  1097,  1100,
    1104,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,
    1117,  1118,  1119,  1122,  1123,  1126,  1128,  1136,  1138,  1140,
    1144,  1145,  1147,  1150,  1153,  1154,  1158,  1160,  1163,  1168,
    1169,  1170,  1174,  1175,  1176,  1179,  1180,  1181,  1184,  1185,
    1187,  1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,
    1198,  1199,  1202,  1203,  1206,  1207,  1208,  1209,  1212,  1215,
    1217,  1220,  1224,  1225,  1227,  1229,  1233,  1234,  1235,  1238,
    1239,  1240,  1241,  1242,  1245,  1248,  1249,  1250,  1253,  1254,
    1255,  1256,  1257,  1258,  1261,  1262,  1263,  1264,  1265,  1266,
    1267,  1270,  1271,  1274,  1275,  1278,  1279,  1282,  1283,  1286,
    1287,  1288,  1291,  1292,  1295,  1296,  1299,  1302,  1310,  1311,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1333,  1336,  1337,
    1340,  1341,  1342,  1343,  1346,  1347,  1348,  1349,  1352,  1353,
    1354,  1355,  1356,  1357,  1360,  1361,  1362,  1363,  1364,  1365,
    1367,  1368,  1373,  1374,  1377,  1379,  1381,  1384,  1385,  1386,
    1387,  1388,  1389,  1392,  1394,  1396,  1398,  1399,  1401,  1403,
    1405,  1407,  1409,  1412,  1413,  1414,  1415,  1416,  1417,  1419,
    1420,  1421,  1424,  1427,  1429,  1431,  1433,  1435,  1437,  1439,
    1441,  1444,  1446,  1448,  1450,  1451,  1452,  1453,  1454,  1457,
    1458,  1459,  1460,  1461,  1462,  1463,  1465,  1467,  1468,  1469,
    1472,  1473,  1474,  1475,  1476,  1477,  1479,  1480,  1481,  1484,
    1485,  1486,  1487,  1488,  1491,  1494,  1497,  1500,  1503,  1506,
    1509,  1512,  1515,  1520,  1523,  1526,  1529,  1532,  1535,  1538,
    1541,  1544,  1547,  1550,  1555,  1558,  1561,  1564,  1567,  1570,
    1573,  1576,  1579,  1584,  1586,  1588,  1590,  1592,  1594,  1599,
    1601,  1603,  1607,  1610,  1613,  1616,  1619,  1622,  1625,  1628,
    1631,  1634,  1637,  1642,  1643,  1644,  1645,  1646,  1647,  1648,
    1650,  1652,  1653,  1654,  1657,  1658,  1659,  1660,  1661,  1662,
    1664,  1665,  1666,  1669,  1671,  1673,  1674,  1676,  1678,  1682,
    1683,  1686,  1687,  1688,  1691,  1698,  1699,  1700,  1701,  1702,
    1703,  1704,  1707,  1715,  1716,  1717,  1718,  1720,  1722,  1723,
    1723,  1724,  1725,  1726,  1727,  1728,  1729,  1731,  1732,  1734,
    1737,  1740,  1741,  1742,  1745,  1748,  1751,  1752,  1756,  1759,
    1762,  1765,  1769,  1774,  1779,  1781,  1782,  1784,  1785,  1787,
    1789,  1791,  1793,  1794,  1796,  1798,  1802,  1807,  1809,  1811,
    1813,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1830,  1831,
    1833,  1835,  1836,  1838,  1840,  1841,  1842,  1844,  1846,  1847,
    1848,  1850,  1851,  1852,  1855,  1859,  1862,  1865,  1869,  1874,
    1880,  1881,  1882,  1884,  1885,  1889,  1891,  1892,  1893,  1896,
    1899,  1902,  1904,  1906,  1907,  1912,  1915,  1916,  1917,  1920,
    1924,  1925,  1927,  1928,  1929,  1931,  1932,  1934,  1935,  1940,
    1942,  1943,  1945,  1946,  1947,  1948,  1949,  1950,  1952,  1954,
    1956,  1957,  1959,  1960,  1962,  1964,  1965,  1966,  1967,  1968,
    1969,  1970,  1971,  1972,  1973,  1974,  1976,  1978,  1979,  1980,
    1981,  1983,  1984,  1985,  1986,  1987,  1989,  1990,  1991,  1992,
    1993,  1994,  1997,  1998,  1999,  2000,  2001,  2002,  2003,  2004,
    2005,  2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,
    2015,  2016,  2017,  2020,  2021,  2022,  2023,  2024,  2025,  2033,
    2040,  2049,  2058,  2065,  2072,  2080,  2088,  2095,  2100,  2105,
    2110,  2115,  2120,  2125,  2131,  2141,  2151,  2161,  2168,  2178,
    2188,  2197,  2209,  2222,  2227,  2228,  2231,  2233,  2235,  2240,
    2244,  2247,  2249,  2251,  2254,  2255,  2256,  2257,  2258,  2259,
    2260,  2263,  2264,  2265,  2266,  2267,  2268,  2270,  2272,  2274,
    2276,  2278,  2280,  2283,  2284,  2285,  2286,  2288,  2291,  2292,
    2294,  2296,  2297,  2298,  2300,  2303,  2306,  2307,  2309,  2310,
    2311,  2312,  2314,  2315,  2316,  2317,  2318,  2320,  2322,  2323,
    2325,  2328,  2329,  2330,  2332,  2334,  2335,  2336,  2337,  2339,
    2342,  2346,  2347,  2348,  2349,  2352,  2355,  2357,  2358,  2359,
    2360,  2362,  2365,  2366,  2368,  2369,  2370,  2371,  2372,  2374,
    2375,  2377,  2380,  2381,  2382,  2383,  2384,  2386,  2388,  2389,
    2390,  2391,  2393,  2395,  2396,  2397,  2398,  2399,  2400,  2402,
    2403,  2405,  2408,  2409,  2410,  2411,  2414,  2415,  2418,  2419,
    2422,  2423,  2426,  2439,  2440,  2444,  2445,  2449,  2452,  2457,
    2464,  2466,  2469,  2471,  2474,  2478,  2479,  2480,  2481,  2482,
    2483,  2484,  2488,  2489,  2492,  2493,  2494,  2495,  2496,  2497,
    2498,  2499,  2502,  2503,  2504,  2505,  2506,  2507,  2508,  2509,
    2510,  2511,  2512,  2515,  2516,  2519,  2520,  2520,  2523,  2524,
    2525,  2526,  2529,  2530,  2533,  2534,  2537,  2541,  2542,  2542,
    2545,  2546,  2549,  2552,  2556,  2557,  2558,  2559,  2560,  2561,
    2562,  2568,  2569,  2570,  2571,  2574,  2576,  2577,  2582,  2584,
    2585,  2586,  2587,  2590,  2591,  2596,  2600,  2601,  2602,  2605,
    2606,  2611,  2612,  2615,  2617,  2618,  2619,  2624,  2626,  2632,
    2633,  2634,  2635,  2638,  2639,  2642,  2644,  2646,  2647,  2650,
    2652,  2653,  2654,  2657,  2658,  2661,  2662,  2663,  2666,  2667,
    2668,  2671,  2672,  2673,  2674,  2675,  2678,  2679,  2680,  2683,
    2684,  2685,  2686,  2687,  2690,  2692,  2694,  2696,  2699,  2701,
    2703,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,
    2717,  2718,  2719,  2722,  2723,  2724,  2727,  2728,  2729,  2732,
    2733,  2734,  2737,  2738,  2739,  2740,  2743,  2744,  2745,  2748,
    2749,  2750,  2753,  2754,  2755,  2758,  2759,  2760,  2763,  2765,
    2767,  2771,  2775,  2777,  2782,  2785,  2786,  2787,  2788,  2791,
    2792,  2794,  2795,  2797,  2800,  2801,  2803,  2809,  2810,  2813,
    2815,  2816,  2817,  2818,  2821,  2822,  2823,  2826,  2827,  2828,
    2831,  2832,  2837,  2841,  2848,  2849,  2851,  2856,  2858,  2861,
    2862,  2863,  2864,  2866,  2871
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
  "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONZERO_", "NOW_", "NRRD_",
  "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_",
  "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_",
  "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_",
  "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESET_",
  "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_",
  "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_",
  "SQRT_", "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUM_", "SYSTEM_",
  "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_",
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
  "internalSystem", "maskType", "scaleType", "minmaxMode", "skyFrame",
  "skyFormat", "skyDist", "shmType", "incrLoad", "layerType", "pointShape",
  "pointSize", "analysisMethod", "analysisParam", "endian", "threed",
  "threedBorder", "threedCompass", "threedHighlite", "threedView", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fitsy", "get", "getBin", "getBinCols",
  "getBlock", "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
     595,   596,   597,   598,   599,   600,   601,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   351,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   353,   353,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   356,   356,   356,
     356,   356,   357,   357,   358,   358,   358,   359,   360,   361,
     362,   362,   362,   362,   363,   363,   363,   363,   363,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   365,   365,   366,
     366,   366,   366,   367,   367,   367,   367,   367,   367,   367,
     367,   368,   368,   368,   368,   368,   369,   369,   369,   369,
     369,   369,   369,   369,   370,   370,   370,   371,   371,   371,
     371,   372,   372,   372,   373,   373,   373,   374,   374,   374,
     375,   375,   375,   375,   375,   375,   375,   375,   376,   376,
     377,   377,   377,   377,   377,   377,   378,   378,   378,   379,
     379,   379,   379,   379,   379,   380,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   381,   382,   382,   383,   383,
     384,   384,   385,   385,   385,   385,   385,   385,   385,   385,
     386,   386,   387,   387,   387,   387,   387,   387,   387,   387,
     388,   388,   389,   389,   389,   389,   389,   390,   390,   390,
     391,   391,   391,   392,   392,   392,   392,   392,   392,   392,
     393,   393,   394,   394,   394,   394,   394,   395,   395,   395,
     396,   396,   396,   396,   397,   397,   397,   397,   397,   398,
     398,   399,   399,   400,   400,   400,   400,   400,   401,   401,
     401,   401,   401,   402,   402,   403,   403,   403,   404,   404,
     404,   404,   405,   405,   406,   406,   407,   407,   408,   408,
     409,   409,   409,   409,   409,   409,   409,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   413,   413,   413,   414,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   416,   416,   416,   416,   416,   416,
     416,   416,   417,   417,   417,   418,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   420,   420,   421,   421,   421,
     422,   422,   423,   424,   424,   424,   425,   425,   425,   426,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     428,   428,   428,   429,   429,   430,   430,   431,   431,   431,
     432,   432,   432,   433,   434,   434,   435,   435,   435,   436,
     436,   436,   437,   437,   437,   438,   438,   438,   439,   439,
     439,   439,   439,   439,   439,   439,   439,   439,   439,   439,
     439,   439,   440,   440,   441,   441,   441,   441,   442,   443,
     443,   443,   444,   444,   444,   444,   445,   445,   445,   446,
     446,   446,   446,   446,   447,   448,   448,   448,   449,   449,
     449,   449,   449,   449,   450,   450,   450,   450,   450,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   455,   456,   456,   457,   457,   458,   458,   459,   459,
     460,   460,   460,   460,   460,   460,   460,   460,   460,   460,
     460,   460,   460,   460,   460,   460,   460,   461,   462,   462,
     463,   463,   463,   463,   464,   464,   464,   464,   465,   465,
     465,   465,   465,   465,   466,   466,   466,   466,   466,   466,
     466,   466,   467,   467,   468,   468,   468,   469,   469,   469,
     469,   469,   469,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   472,   473,   473,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   477,
     477,   477,   477,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   478,   478,   479,   479,   479,   479,   479,   479,
     479,   479,   479,   480,   480,   480,   480,   480,   480,   480,
     480,   480,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   483,   483,   483,   483,   483,   483,
     483,   483,   483,   484,   484,   484,   484,   484,   484,   485,
     485,   486,   486,   486,   487,   488,   488,   488,   488,   488,
     488,   488,   489,   490,   490,   490,   490,   490,   490,   491,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   492,   492,   492,   492,   492,   492,   492,
     492,   492,   492,   493,   493,   493,   493,   493,   493,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   495,   495,   495,   495,
     496,   497,   497,   497,   498,   498,   498,   498,   498,   498,
     498,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   499,   499,   499,   499,   499,   499,   499,   499,
     499,   499,   500,   500,   500,   500,   501,   501,   502,   502,
     503,   503,   504,   505,   505,   505,   505,   505,   506,   506,
     507,   507,   507,   507,   507,   508,   508,   508,   508,   508,
     508,   508,   509,   509,   510,   510,   510,   510,   510,   510,
     510,   510,   511,   511,   511,   511,   511,   511,   511,   511,
     511,   511,   511,   512,   512,   513,   514,   513,   515,   515,
     515,   515,   516,   516,   517,   517,   518,   519,   520,   519,
     521,   521,   522,   523,   524,   524,   524,   524,   524,   524,
     524,   525,   525,   525,   525,   526,   526,   526,   526,   526,
     526,   526,   526,   527,   527,   527,   528,   528,   528,   529,
     529,   529,   529,   530,   530,   530,   530,   531,   531,   532,
     532,   532,   532,   533,   533,   534,   534,   534,   534,   535,
     535,   535,   535,   536,   536,   537,   537,   537,   538,   538,
     538,   539,   539,   539,   539,   539,   540,   540,   540,   541,
     541,   541,   541,   541,   542,   542,   542,   542,   543,   543,
     543,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     545,   545,   545,   546,   546,   546,   547,   547,   547,   548,
     548,   548,   549,   549,   549,   549,   550,   550,   550,   551,
     551,   551,   552,   552,   552,   553,   553,   553,   554,   554,
     554,   555,   556,   556,   556,   557,   557,   557,   557,   558,
     558,   558,   558,   558,   559,   559,   559,   560,   560,   561,
     561,   561,   561,   561,   562,   562,   562,   563,   563,   563,
     564,   564,   564,   565,   566,   566,   566,   566,   566,   567,
     567,   567,   567,   567,   567
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     6,     2,     4,     2,     2,     2,     3,     2,     2,
       1,     2,     1,     2,     4,     5,     2,     3,     5,     6,
       1,     1,     1,     7,    11,     8,    12,     1,     2,     2,
       1,     1,     2,     2,     2,     2,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     2,     2,     2,     6,    10,     1,     2,     1,     6,
      10,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     4,     9,     2,     2,     2,     1,     3,     2,
       2,     1,     2,     8,     2,     1,     2,     1,     2,     1,
       4,     9,     2,     1,     1,     1,     1,     2,     1,     1,
       2,     1,     0,     2,     2,     1,     0,     2,     2,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       0,     1,     1,     0,     1,     5,     6,     3,     6,     3,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     1,
       1,     4,     5,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       4,     2,     0,     4,     5,     5,     0,     1,     1,     1,
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
      10,    12,    12,     2,     1,     2,     3,     4,     4,     4,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     4,     6,    10,
       8,     7,     5,     2,     2,     3,     4,     5,     3,     5,
       5,     3,     4,     5,     5,     5,     3,     5,     2,     3,
       3,     5,     3,     3,     3,     4,     5,     5,     3,     5,
       5,     3,     4,     5,     5,     2,     2,     3,     5,     6,
       6,     3,     3,     3,     6,     5,     5,     2,     3,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     7,     8,
       2,     4,     2,     4,     6,     2,     1,     1,     3,     3,
       1,     4,     2,     1,     3,     3,     4,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     1,     3,
       1,     3,     1,     2,     2,     1,     3,     0,     0,     2,
       2,     1,     3,     5,     1,     2,     2,     3,     2,     2,
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
       5,     1,     6,     3,     1,     3,     2,     2,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     2,     2,     3,
       1,     3,     4,     1,     2,     5,     6,     6,     2,     1,
       2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   300,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1033,     0,
       0,     0,     0,     0,     0,     0,     0,  1033,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1219,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   237,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   266,   268,
       0,     0,    10,   138,   140,   133,   134,   135,   139,   136,
     137,   271,    11,     0,   283,     0,     0,     0,    12,     0,
       0,     0,     0,   307,     0,    13,    68,    97,     0,   127,
      96,    76,    94,     0,    73,    75,    71,   128,    95,    72,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    69,
      70,    74,   314,   146,    98,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,    57,    56,     0,     0,
       0,     0,     2,     0,    17,     0,     0,     0,   376,   390,
       0,   396,     0,     0,     0,     0,     0,     0,     0,   339,
       0,   466,     0,     0,     0,     0,     0,  1033,     0,   347,
       0,   351,     0,     0,     0,   355,     0,   357,     0,   359,
       0,     0,   499,   363,    18,     0,   505,    19,   510,     0,
     528,   513,   514,   515,   516,   530,   518,   519,   523,   520,
       0,   522,   524,     0,     0,    20,    22,     0,   545,     0,
       0,     0,   550,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   704,    26,     0,     0,     0,     0,     0,
       0,   705,    27,     0,    28,  1037,  1034,  1035,  1036,     0,
    1094,     0,   129,     0,     0,     0,    30,     0,  1104,  1103,
    1102,  1101,    32,     0,     0,     0,     0,     0,   146,     0,
      33,     0,  1122,     0,  1119,    34,     0,     0,     0,     0,
      37,     0,    36,    35,     0,     0,     0,     0,    40,     0,
       0,  1151,    41,     0,     0,     0,     0,     0,    42,  1215,
    1214,  1218,  1217,  1216,    44,     0,    45,     0,     0,     0,
       0,     0,   202,     0,     0,     0,    46,     0,     0,  1221,
      48,     0,     0,    50,     0,     0,     0,     0,   146,    51,
    1243,    52,     0,     0,    53,     1,     4,   220,     0,   212,
       0,     0,   214,     0,   222,   215,   219,   230,   231,   216,
     232,     0,   218,   240,   241,   239,   238,     0,     0,     0,
     245,   253,   256,   255,   254,   252,   244,   249,   250,   251,
     243,     0,     0,     0,     0,     0,     0,   248,     9,     0,
       0,     0,   267,     0,   272,     0,   282,   273,   284,   274,
     285,   275,   296,   276,     0,     0,   277,     0,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   303,     0,     0,     0,     0,     0,   148,   153,
     147,   149,   152,   151,   150,     0,     0,   320,    62,    63,
      64,    65,    66,    58,    59,    60,    67,    61,     0,   325,
       0,   372,   368,   364,   365,   369,   366,   371,   326,   375,
     327,   288,   380,   384,   379,   291,   290,   289,     0,     0,
     328,   391,   330,     0,   329,     0,   398,   331,   410,   402,
     413,   403,   404,   406,     0,   408,   409,   146,   332,     0,
       0,   333,     0,     0,   146,   334,   422,   146,   420,   335,
     423,   337,   146,   424,   336,     0,   146,     0,   338,   442,
       0,   440,   458,     0,     0,     0,   446,   438,     0,   448,
     462,   451,   340,   467,   468,   341,     0,     0,     0,   433,
       0,   344,   429,   430,     0,   345,   346,     0,   469,   470,
     471,   472,   473,   349,   350,   474,   352,     0,   475,   476,
     477,   354,   483,   478,   479,   481,   356,   489,   491,   493,
     495,   488,   490,   497,   358,     0,     0,   502,     0,   362,
     146,   504,     0,   511,   529,   512,   531,   532,   533,   517,
     534,   536,   535,   537,   521,   525,   542,     0,     0,     0,
       0,   538,   526,     0,     0,   547,   546,     0,     0,     0,
       0,    24,     0,     0,   557,     0,   558,     0,     0,     0,
       0,     0,   559,     0,   703,     0,   560,     0,   561,     0,
       0,   562,     0,   708,   707,   706,     0,   711,     0,     0,
       0,   883,     0,     0,     0,   715,   719,   721,   722,     0,
       0,     0,     0,   820,     0,     0,     0,   856,     0,     0,
       0,     0,     0,     0,     0,   858,     0,     0,     0,    29,
    1095,  1100,   131,   132,   130,  1096,     0,  1098,  1099,    31,
       0,     0,     0,     0,  1111,  1112,     0,   146,     0,  1109,
    1106,     0,     0,     0,   146,  1129,  1132,  1130,  1131,  1123,
    1124,  1125,  1126,     0,     0,     0,    39,  1148,  1149,     0,
    1156,  1158,  1157,  1153,  1154,  1152,     0,     0,     0,     0,
    1159,     0,  1162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1160,  1171,     0,     0,     0,  1161,  1163,
    1213,  1146,  1147,  1145,   200,     0,   204,   196,     0,   206,
     197,     0,   208,   198,  1144,  1143,   199,   201,   203,     0,
       0,   195,     0,     0,     0,     0,  1227,  1240,  1230,     0,
       0,  1233,     0,     0,  1232,  1231,   154,  1249,     0,  1248,
    1244,   221,   217,     0,   226,     0,   223,     0,   242,   141,
     144,   145,   143,   142,   257,   258,   259,   247,   246,   261,
     263,   262,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   146,     0,   304,    93,    90,    91,    92,   146,   306,
     305,     0,     0,     0,     0,     0,     0,     0,   319,     0,
     315,   313,   312,   324,   367,     0,     0,   370,   385,   386,
     381,   382,   387,   389,   388,   383,   292,   293,   378,   377,
     393,   392,     0,   397,   411,   412,   401,   414,   407,   405,
     400,     0,     0,   146,   146,   154,   154,   154,   146,     0,
       0,   146,   441,   452,     0,   443,    77,   454,     0,     0,
     445,   447,   146,     0,     0,   450,     0,     0,     0,   435,
       0,     0,     0,     0,   932,   934,   933,     0,  1026,     0,
    1005,     0,  1008,     0,     0,  1028,  1030,     0,  1021,   348,
       0,   480,   482,   492,   485,   494,   486,   496,   487,   498,
     484,     0,     0,   503,   500,   501,   154,   527,   539,   540,
     541,   543,     0,   556,   544,     0,     0,     0,     0,     0,
       0,   167,   167,   161,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,   161,     0,
       0,     0,     0,     0,   598,   622,     0,     0,     0,   594,
       0,     0,     0,     0,   167,   161,     0,     0,   699,     0,
     709,   710,   146,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,     0,     0,     0,
       0,     0,   791,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   810,     0,     0,   815,   816,     0,     0,     0,
     836,   838,   837,     0,   840,     0,     0,   847,   849,   850,
     884,     0,     0,     0,     0,   713,   714,   926,   924,   929,
     928,   927,   925,   930,     0,   718,     0,   723,     0,   923,
       0,   724,   725,   726,   727,     0,     0,     0,     0,     0,
     822,     0,     0,   823,  1047,     0,  1050,  1046,     0,     0,
       0,   824,   857,   825,  1065,  1070,  1067,  1066,  1064,  1071,
    1068,  1062,  1069,  1063,  1072,     0,     0,   830,     0,     0,
       0,  1078,     0,  1080,   833,     0,  1082,   834,   854,     0,
       0,     0,   859,   860,   861,  1097,  1110,     0,     0,  1117,
    1113,     0,     0,     0,  1108,  1107,  1121,  1120,     0,     0,
    1137,     0,     0,  1133,     0,  1141,     0,     0,  1134,     0,
    1155,   189,   189,     0,   189,     0,  1181,     0,  1180,  1172,
       0,     0,     0,     0,  1176,     0,     0,     0,  1179,     0,
       0,     0,     0,     0,  1174,  1182,     0,     0,     0,  1173,
     189,   189,   189,     0,   205,   207,   209,     0,   210,     0,
      55,     0,  1223,     0,  1228,     0,   146,  1234,  1235,     0,
    1237,  1238,     0,   155,   156,  1229,  1250,  1251,     0,   213,
       0,   227,     0,     0,     0,     0,   260,     0,     0,     0,
       0,     0,     0,     0,     0,   298,   146,     0,     0,     0,
       0,   146,     0,   318,     0,   317,   374,   373,     0,     0,
       0,   146,     0,   154,   419,   417,   421,   425,     0,     0,
       0,   154,     0,    81,    80,   459,   444,     0,   455,   457,
     157,     0,     0,   342,     0,     0,    55,     0,   434,     0,
       0,   944,     0,     0,     0,     0,     0,     0,   958,     0,
       0,     0,     0,     0,     0,   975,   976,     0,     0,     0,
       0,     0,   987,     0,   993,   994,   996,   998,     0,  1002,
    1013,  1014,  1015,     0,  1017,  1022,  1024,  1025,  1023,   931,
       0,  1004,     0,  1003,   943,     0,     0,  1009,     0,  1011,
       0,  1010,  1031,  1012,  1019,     0,     0,   360,     0,     0,
     554,   555,     0,   552,   548,     0,   167,   167,   167,   168,
     169,   566,   567,   163,   162,     0,   167,   167,   167,     0,
     572,   582,   164,   167,   167,   167,   165,   166,   167,   167,
       0,   167,   167,     0,   164,     0,   595,     0,     0,     0,
     621,     0,   620,     0,     0,   597,     0,   596,     0,     0,
       0,     0,   164,   164,   161,     0,     0,   161,     0,     0,
       0,   167,   167,   695,     0,   167,   167,   700,     0,   180,
     181,   182,   183,   184,   185,     0,    85,    86,    84,   731,
       0,     0,     0,     0,     0,     0,   877,   875,   870,     0,
     880,   864,   881,   867,   879,   873,   862,   876,   865,   863,
     882,   878,     0,     0,     0,   747,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   778,
       0,     0,     0,     0,     0,   790,   792,     0,     0,   797,
     796,     0,     0,   170,     0,     0,     0,   146,     0,   806,
       0,     0,     0,     0,   811,   812,   813,     0,     0,     0,
     819,   835,   839,   841,   844,   843,     0,     0,     0,   848,
     885,   887,     0,   886,   716,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1032,     0,     0,     0,     0,     0,
       0,     0,   914,     0,     0,     0,     0,     0,     0,     0,
       0,   720,     0,     0,     0,     0,   821,     0,   146,     0,
    1042,  1040,     0,     0,   146,  1045,   826,     0,     0,     0,
     832,     0,     0,  1083,   852,   853,     0,   855,  1116,  1118,
    1115,  1114,  1105,     0,     0,     0,  1138,     0,     0,  1142,
    1150,   191,   192,   193,   194,   190,  1165,  1164,     0,     0,
       0,  1167,  1166,   189,     0,     0,     0,  1175,     0,     0,
       0,     0,     0,  1192,     0,  1206,  1205,  1207,     0,     0,
       0,  1178,     0,     0,     0,  1177,  1187,  1186,  1188,  1184,
    1183,  1185,  1209,  1208,  1210,     0,     0,     0,  1226,   146,
       0,   146,  1241,  1236,  1239,     0,     0,   146,     0,     0,
       0,   224,     0,     0,     0,     0,     0,     0,     0,     0,
     295,   294,     0,     0,   286,   297,   299,     0,   309,   311,
     310,   308,   146,   316,     0,     0,     0,   154,   146,     0,
       0,     0,     0,   439,   453,    79,    78,   461,     0,   456,
     159,   160,   158,   449,     0,   146,     0,     0,     0,   437,
     431,     0,     0,     0,     0,     0,     0,   146,   945,     0,
     948,     0,     0,   951,     0,   146,   956,     0,   959,   960,
       0,   962,   963,   964,     0,   968,     0,     0,   971,     0,
     977,     0,     0,     0,   982,   983,   981,     0,     0,     0,
     988,   989,     0,     0,   992,   995,   997,   999,     0,     0,
    1016,  1018,   935,  1027,   936,     0,     0,  1029,  1020,     0,
       0,   508,   509,     0,     0,   553,     0,   563,   564,   565,
     167,   569,   570,   571,     0,     0,     0,   576,   577,   161,
       0,     0,     0,   167,   583,   584,   585,   586,   588,   164,
     591,   592,     0,   167,     0,     0,     0,   164,   164,   161,
       0,     0,     0,     0,   619,     0,   623,     0,     0,     0,
       0,     0,   164,   164,   161,     0,     0,   161,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,   161,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,     0,   164,   164,   161,     0,     0,     0,
     164,   599,   600,   601,   602,   604,     0,   607,   608,     0,
     164,     0,     0,   693,   694,   167,   697,   698,     0,   730,
     146,   732,     0,     0,   736,     0,     0,     0,     0,     0,
     869,   866,   872,   871,   868,   874,     0,   745,     0,     0,
       0,     0,   146,   752,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   769,   770,   771,
       0,   775,   772,   774,     0,     0,   780,   779,   781,   782,
       0,     0,     0,     0,     0,     0,   146,   146,   795,   176,
     172,   177,   171,   174,   173,   175,   801,   802,   803,     0,
       0,   805,   807,   146,   146,     0,   814,   817,   146,   146,
     842,   846,   888,   717,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1073,   913,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     915,     0,     0,     0,     0,     0,   728,   729,   146,   154,
       0,   146,   146,  1048,  1049,     0,     0,   828,     0,   146,
    1079,  1081,   851,     0,  1135,  1136,  1139,  1140,   189,   189,
     189,  1211,  1190,  1189,  1191,  1194,  1193,  1197,  1196,  1198,
    1195,  1203,  1202,  1204,  1200,  1199,  1201,     0,     0,  1220,
    1225,     0,  1242,     0,   146,     0,  1245,     0,     0,   228,
       0,   225,     0,     0,     0,   264,     0,     0,     0,     0,
     146,     0,   301,   134,     0,   394,     0,   415,   154,   157,
       0,     0,   428,     0,   146,   463,   146,     0,   432,   937,
       0,     0,     0,     0,   146,   946,   157,   157,   157,   146,
     952,   157,   154,   157,   157,   146,   965,   157,   157,   157,
     146,   972,   157,   157,   146,     0,   157,   146,   157,   157,
     146,   157,   146,  1006,  1007,     0,     0,   507,   549,     0,
     568,   573,   574,   575,     0,   579,   580,   581,   587,   167,
     164,   593,   610,   611,   612,   613,   614,     0,   616,   617,
     164,     0,     0,     0,   164,   164,   161,     0,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,     0,     0,
       0,     0,   164,   164,   161,     0,     0,     0,   164,   167,
     167,   167,   167,   167,     0,   167,   167,     0,   164,   164,
     167,   167,   167,   167,   167,     0,   167,   167,     0,   164,
     164,   673,   674,   675,   676,   678,     0,   681,   682,     0,
     164,   684,   685,   686,   687,   688,     0,   690,   691,   164,
     603,   164,     0,   609,     0,     0,   696,     0,   733,   157,
       0,     0,   157,     0,     0,     0,   744,   157,   748,   749,
     157,   751,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   773,   776,   777,     0,   157,
       0,     0,     0,   793,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1074,  1053,     0,  1060,  1061,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   146,     0,     0,
      82,     0,     0,   921,   922,   154,     0,     0,     0,  1043,
    1041,  1051,   827,   829,   154,  1128,  1169,  1168,  1170,  1212,
       0,  1222,  1252,     0,     0,  1247,  1246,   229,     0,     0,
       0,   269,     0,     0,     0,   287,   157,   395,   399,   416,
     418,     0,   426,   460,   464,   465,     0,     0,     0,     0,
       0,   942,   947,   950,   949,   953,   954,   955,   957,   961,
     966,   967,   969,   970,   973,   974,   978,   154,   157,   985,
     154,   986,   990,   154,  1000,   154,     0,     0,   506,     0,
     578,   589,   167,   164,   618,   167,   167,   167,   167,   167,
       0,   167,   167,   164,   167,   167,   167,   167,   167,     0,
     167,   167,   164,   167,   167,   167,   167,   167,     0,   167,
     167,   164,   167,   633,   634,   635,   636,   638,   164,   641,
     642,     0,   167,   167,   662,   663,   664,   665,   667,   164,
     670,   671,     0,   167,   677,   164,     0,   683,   164,   692,
     605,   164,   701,   702,   146,   735,     0,   157,   738,     0,
     146,     0,   746,   750,   146,     0,   757,   758,   759,   760,
     764,   765,   761,   762,   763,     0,     0,   157,   785,     0,
     146,     0,     0,   798,   157,     0,     0,   157,   157,     0,
     845,     0,   178,   178,     0,     0,   178,     0,   178,  1032,
       0,     0,     0,     0,     0,     0,     0,     0,  1052,     0,
       0,   178,   178,     0,     0,     0,     0,     0,     0,     0,
       0,   916,     0,     0,     0,  1032,    83,     0,   178,     0,
    1076,   920,     0,     0,     0,   211,  1254,  1253,     0,     0,
     233,     0,     0,     0,     0,   302,   427,   321,   938,     0,
     146,     0,   979,   980,   984,   991,  1001,   353,   321,     0,
     590,   615,   624,   625,   626,   627,   628,   164,   630,   631,
     167,   653,   654,   655,   656,   657,   164,   659,   660,   167,
     644,   645,   646,   647,   648,   164,   650,   651,   167,   637,
     167,   164,   643,   666,   167,   164,   672,   679,   164,   689,
     606,     0,   157,   739,     0,     0,     0,     0,     0,   766,
     767,   783,     0,     0,     0,   794,   799,     0,   808,   809,
     800,   157,     0,   179,  1032,  1032,    82,     0,  1032,     0,
    1032,   889,   146,     0,  1055,     0,  1058,  1092,  1059,  1057,
    1054,     0,  1032,  1032,    82,     0,     0,  1032,  1032,     0,
       0,  1032,   919,   917,   918,   896,  1032,  1032,  1076,  1087,
       0,  1044,   831,     0,     0,     0,   235,     0,     0,     0,
     322,   323,   343,     0,   186,   941,   361,     0,   167,   632,
     167,   661,   167,   652,   639,   167,   668,   167,   680,     0,
     734,   157,   157,     0,   157,     0,   157,   157,     0,   157,
       0,  1032,   902,   898,  1032,     0,   903,     0,   897,  1032,
       0,  1056,     0,   900,   899,  1032,     0,     0,   894,   892,
    1032,   146,   893,   895,   901,  1087,  1038,     0,     0,  1077,
    1085,  1127,     0,     0,     0,   265,   288,   291,   289,     0,
       0,   146,   187,   188,   940,   551,   629,   658,   649,   640,
     669,   157,   737,   743,     0,   756,   753,   784,   789,     0,
     804,     0,   907,   891,    82,     0,   905,  1093,     0,   890,
      82,     0,   906,     0,  1039,  1089,  1091,     0,  1084,     0,
       0,   270,     0,     0,     0,     0,   186,     0,   740,   146,
     754,   786,   818,  1032,     0,     0,  1032,     0,   157,  1090,
    1086,   234,     0,     0,     0,     0,     0,   939,   712,   146,
     741,   755,   146,   787,   909,     0,  1032,   908,     0,     0,
     236,   281,     0,   280,     0,   742,   788,    82,   910,    82,
    1032,   279,   278,  1032,  1032,   904,   912,   911
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1388,   172,   152,  1235,  2465,  2466,   422,   423,
     424,   425,   153,   154,   155,   675,    91,   794,   445,  1185,
    1653,  1325,  1338,  1321,  1896,  2564,  1385,  2684,  1556,   336,
     747,   750,   753,   761,    63,   359,   365,   369,   372,    68,
     375,    75,   390,   386,   380,   397,    82,   402,    92,    98,
     407,   409,   411,   479,   848,  1622,   413,   416,   105,   432,
     156,   158,  2612,   174,   214,   468,   837,   470,   480,   840,
     845,   482,   484,   851,   487,   853,   498,   856,   858,   501,
     505,   509,   511,   514,   518,   545,   541,  1248,   532,   875,
     880,   872,  1236,   885,   535,   553,   556,   561,   566,   574,
     914,   916,   918,   920,   579,   924,   217,   581,  1723,   235,
     583,   585,   589,   594,   602,   244,  1314,   605,   252,   614,
    1330,   616,   622,   969,  1346,   964,  1764,  1352,  1350,  1766,
     965,  1355,  1357,   628,   631,   626,   254,   262,   264,   669,
    1046,  1412,  1035,  1511,  1940,  2258,  1051,  1044,   909,  1289,
    1293,  1301,  1303,  1924,   269,  1060,  1063,  1071,  2230,  2231,
    2232,  1925,  2599,  2600,  1094,  1097,  2669,  2670,  2666,  2667,
    2715,  2233,  2234,   276,   282,   290,   689,   684,   295,   300,
     302,   699,   706,  1123,  1128,   756,   744,   308,   312,   713,
     318,   720,  1561,   733,   734,  1159,  1154,  1567,  1144,  1573,
    1585,  1581,  1148,   738,   722,   324,   325,   340,  1172,   343,
     349,   771,   774,   768,   351,   354,   779
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2530
static const yytype_int16 yypact[] =
{
    5076,   125,   482,    51, -2530, -2530,   951,  -112,    68,   455,
     774,    99,  1044,   190,   198,  1632,    49,  5123,   603,  2476,
   -2530,   198,  1085,   244,   779,   259,   110,   493,   181,   414,
     443,   679,  3253,   120,   695,   518,   464,   181, -2530,    -4,
     150,   832, -2530,    32,   582,   851, -2530,    43, -2530,    88,
    1983,   380,    91,   630,   666,   141,   425,   704,   710,   103,
     721,    -1,   968, -2530, -2530, -2530,   991,   804, -2530,   160,
      57,   198,   -10,   174,   193, -2530,   730,   804, -2530, -2530,
      83,   804, -2530, -2530, -2530, -2530,   804, -2530, -2530, -2530,
   -2530, -2530, -2530,   100,   748,   782,   784,   164, -2530,   804,
    1268,   804,   804,   824,   804, -2530, -2530, -2530,   606, -2530,
   -2530, -2530, -2530,  4693, -2530, -2530, -2530, -2530, -2530, -2530,
     804, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530,  1127, -2530,   804, -2530,   811, -2530, -2530,
     198,   198,   198,   198,   198,   198, -2530, -2530,   198,   198,
     198,   198, -2530,   728, -2530,   795,  1530,   738,    35,   586,
     715,   590,  4124,   523,  4745,  4661,   856,  4693,  3501, -2530,
     431,   -89,   887,   817,   733,   556,   895,   181,   515, -2530,
     853, -2530,   687,   652,   171, -2530,    22, -2530,   825, -2530,
      34,   835,    16, -2530, -2530,  1237, -2530, -2530, -2530,   874,
     923, -2530, -2530, -2530, -2530,   521, -2530, -2530, -2530, -2530,
     883, -2530, -2530,  1237,  4305, -2530, -2530,    58, -2530,   962,
     960,   635, -2530,   804, -2530,   966,   118,   978,   298,   847,
     980,     5, -2530, -2530, -2530,   969,   987,   198,   198,   804,
     804, -2530, -2530,   993, -2530, -2530, -2530, -2530, -2530,   711,
   -2530,   997,    13,   804,  1237,   804, -2530,  1003, -2530, -2530,
   -2530, -2530, -2530,   804,   983,   198,  3320,   804,  1127,   804,
   -2530,   984, -2530,  4055, -2530, -2530,   790,   992,  1009,   804,
   -2530,  1017, -2530, -2530,   -33,  1022,  1237,  1031, -2530,  1121,
     804,   943, -2530,   343,   926,  1465,   -16,  1046, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530,  1052, -2530,   610,     0,    11,
      44,   107, -2530,   804,   804,   143, -2530,   804,   791,  1060,
   -2530,   804,   804, -2530,  1062,    10,    18,  1066,  1127, -2530,
   -2530, -2530,  1035,   804, -2530, -2530, -2530, -2530,   804, -2530,
    1068,  1075, -2530,   804,  1057, -2530, -2530, -2530, -2530, -2530,
   -2530,   804, -2530, -2530,   804, -2530, -2530,   475,   475,  1084,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530,   896,   804,   804,  1091,  1111,  1118, -2530, -2530,   804,
     804,   804, -2530,   804, -2530,  1123, -2530, -2530, -2530, -2530,
     976, -2530,  1128, -2530,  1237,  1131, -2530,   804, -2530, -2530,
   -2530,   804,  1130,  1133,  1133,  1237,   804,   804,   804,   804,
     804,   804, -2530,   804,  4693,  1268,   804,   804, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530,  1268,   804, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,  1136, -2530,
     888,   -27, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530,   -43, -2530, -2530, -2530,  1004, -2530,   519,   445,   445,
   -2530, -2530, -2530,  1178, -2530,  1182, -2530, -2530,   528, -2530,
    1023, -2530, -2530, -2530,  1034, -2530, -2530,  1127, -2530,   804,
     804, -2530,  1237,  1237,  1127, -2530, -2530,  1127, -2530, -2530,
   -2530, -2530,  1127, -2530, -2530,  1237,  1127,   804, -2530, -2530,
    1237, -2530, -2530,   450,  1010,    17, -2530, -2530,  1027,  1237,
     328, -2530, -2530, -2530, -2530, -2530,  1222,  1223,  1226, -2530,
    1036, -2530, -2530, -2530,   804, -2530, -2530,  1069, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530,    34, -2530, -2530,
   -2530, -2530, -2530, -2530,  1049,  1053, -2530, -2530,  1176,  1183,
    1191, -2530, -2530,  1037, -2530,   804,  1256,  1040,  4055, -2530,
    1127, -2530,  1261, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530,  1237,  1237,  1237,
    1237, -2530, -2530,  1269,   198, -2530, -2530,  1270,  1272,  1093,
     804, -2530,   221,  1211, -2530,  1286, -2530,   283,  1215,  2060,
       6,  1299, -2530,  1305, -2530,  1307, -2530,    14, -2530,  1312,
    1319, -2530,  1330, -2530, -2530, -2530,   804, -2530,  4055,  4622,
    1880,   408,  1331,   270,  1236, -2530, -2530, -2530,  1323,   653,
    1337,  1339,    23,   804,   250,   406,   147,  1237,   198,  1858,
     810,    25,    24,   186,    37, -2530,  1325,  1329,  1343, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530,   804, -2530, -2530, -2530,
     804,   804,   804,   804, -2530, -2530,   804,  1127,   804, -2530,
     804,  1268,   804,  1344,  1127, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530,  1377,   405,   446, -2530, -2530, -2530,  1378,
   -2530, -2530, -2530, -2530,  1288, -2530,  1392,  1393,  1296,  1395,
   -2530,  1397, -2530,  1401,  1332,  1407,   442,   440,   454,    48,
     497,  1412,   502, -2530, -2530,  1415,  1417,  1419, -2530, -2530,
    1424, -2530, -2530, -2530, -2530,  1428, -2530, -2530,  1429, -2530,
   -2530,  1430, -2530, -2530, -2530, -2530, -2530, -2530, -2530,   804,
     804, -2530,   804,  1116,   804,   804, -2530,  1476, -2530,  1126,
    1433, -2530,  1163,  1434, -2530, -2530,   411,   804,   804, -2530,
    1431, -2530, -2530,  1436,  1147,   804,  1438,   520, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530,  1441,  1442,   804,   804,   804,  1444,   198,  1448,
    1450,  1127,  1237, -2530, -2530, -2530, -2530, -2530,  1127, -2530,
   -2530,   804,   804,   804,  1237,   804,  1268,   804, -2530,   804,
   -2530, -2530, -2530, -2530, -2530,  1437,  1452, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
     523, -2530,   804, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530,  1237,   804,  1127,  1127,   411,   411,   411,  1127,  1268,
     804,  1127, -2530, -2530,   804, -2530,   -64,  1290,  1453,  1455,
   -2530, -2530,  1127,  1308,  1313, -2530,  1457,  1458,  1467,  1173,
     804,  4627,   317,   541, -2530, -2530, -2530,   804,   157,  1038,
   -2530,  1216, -2530,  1858,  1219,   462,  1193,   494, -2530, -2530,
     804, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530,   804,  1475, -2530, -2530, -2530,   411, -2530, -2530, -2530,
   -2530, -2530,  4780, -2530, -2530,  1480,  1482,   804,  1486,  1488,
    1489,   381,   381,   386,  1495,  1503,  1508,  1509,  1239,  1246,
    1511,  1512,  1516,    36,    36,   386,  1523,  1526,   386,  1527,
    1528,  3632,  1529,  1532, -2530, -2530,  1533,  1534,   434, -2530,
    1531,  1536,  1538,  1572,   381,   386,  1574,  1576, -2530,  1579,
   -2530, -2530,  1127,  1188,   789,  1349,   -63,  1350,  1483,   850,
     -53,  1584,   -11,  1460,  1485,   787,  1618,  1551,   356,  1358,
    1491,  1594,  1394,   241,    82,   313,   334,  1237,  1858,  1560,
     594,  1366,  1403,  1609,    31, -2530, -2530,   458,  1613,  1614,
   -2530, -2530, -2530,  1615,  1413,    85,  1858,  1416, -2530, -2530,
   -2530,   198,  1621,  1623,   804, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530,    21, -2530,  3998, -2530,   804, -2530,
     804, -2530, -2530, -2530, -2530,   804,   804,   804,   270,  1237,
   -2530,  1617,  1189, -2530, -2530,   804, -2530, -2530,   804,  1237,
     804, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530,   198,   804, -2530,   804,   270,
    1624, -2530,   804,   804, -2530,   198, -2530, -2530, -2530,   201,
    1626,  1628, -2530, -2530, -2530, -2530, -2530,   804,   804, -2530,
   -2530,  1268,   804,   804, -2530, -2530, -2530, -2530,  1630,   804,
   -2530,   804,  1517, -2530,   804, -2530,   804,  1524, -2530,  1635,
   -2530,   909,   909,   514,   909,  1631, -2530,   527, -2530, -2530,
    1636,  1637,   542,  1639, -2530,  1641,  1644,  1640, -2530,   564,
     611,  1645,  1648,  1655, -2530, -2530,  1658,  1663,  1656, -2530,
     909,   909,   909,   804, -2530, -2530, -2530,   804, -2530,   804,
     959,  1237, -2530,   804, -2530,  4055,  1127, -2530, -2530,  1664,
   -2530, -2530,  1666, -2530, -2530, -2530, -2530,  1660,  3320, -2530,
     804,  1662,   804,   804,   804,  1012, -2530,  1671,  1675,   804,
     804,    97,  1676,   198,   198, -2530,  1127,   804,  1678,  1679,
    1681,  1127,  1237, -2530,   804, -2530, -2530, -2530,   804,   804,
     804,  1127,  1237,   411, -2530, -2530, -2530, -2530,  1268,   804,
    1682,   411,   804,  1642,  1649,   483, -2530,  1684, -2530, -2530,
     102,  3683,   804, -2530,   804,  1687,  1693,   804, -2530,  1689,
    1245,  4693,  1459,   417,  1461,   136,  1237,   426, -2530,   180,
    1557,   145,   463,  1462,   151, -2530, -2530,   509,  1535,   368,
    1580,   -34,  1858,   852, -2530,  1700,  1451, -2530,   540, -2530,
   -2530, -2530, -2530,  1858,  1499, -2530, -2530, -2530, -2530, -2530,
     804, -2530,   804, -2530, -2530,   804,   804, -2530,   804, -2530,
     804, -2530, -2530, -2530, -2530,  1515,   804, -2530,   804,   112,
   -2530, -2530,  1703,  1707, -2530,   804,   381,   381,   381, -2530,
   -2530, -2530, -2530, -2530, -2530,  1710,   381,   381,   381,   643,
   -2530, -2530,    36,   381,   381,   381, -2530, -2530,   381,   381,
    1711,   381,   381,  1715,    36,   815, -2530,  1716,  1717,  1720,
   -2530,  1142, -2530,  1160,  1390, -2530,   840, -2530,  1463,  1729,
    1730,  1732,    36,    36,   386,  1734,  1735,   386,  1736,  1738,
    1739,   381,   381, -2530,  1740,   381,   381, -2530,  1742, -2530,
   -2530, -2530, -2530, -2530, -2530,   198, -2530, -2530, -2530,  4693,
    1204,   198,   804,  1243,  1278,   -21, -2530, -2530, -2530,   772,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530,  1743,   198,   804, -2530,   198,  1744,   804,  1237,
     198,  1315,  1513,  1514,   194,   207,  1518,   216,  1414,  1439,
    1749,  1750,  1752,   850,  1754,  1755,  1756,  1464,  1466,  1209,
    1757,   198,   804,  1303,  1422, -2530, -2530,   198,  1237, -2530,
   -2530,  1237,   804,    86,  1759,   198,   804,  1127,   198, -2530,
    1761,  1237,  1237,   804, -2530, -2530, -2530,   198,   198,  1237,
   -2530, -2530, -2530, -2530, -2530, -2530,  1237,   804,   198, -2530,
   -2530, -2530,   804, -2530, -2530,  1763,   804,  1541,   227,   804,
    1546,   804,   238,   804, -2530,   804,  1548,  1550,   804,   804,
     804,   804, -2530,   804,   804,   804,   804,    20,   804,   804,
    1554, -2530,   804,   804,   804,   804, -2530,  1237,  1127,  1773,
    1237,  1237,   804,   804,  1127, -2530,   804,   804,   804,  1237,
   -2530,   804,   804, -2530, -2530, -2530,  1774, -2530, -2530, -2530,
   -2530, -2530, -2530,  1776,   804,   804, -2530,   804,   804, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,  1808,  1809,
    1777, -2530, -2530,   909,  1810,  1812,  1814, -2530,  1815,  1817,
    1819,  1820,  1818, -2530,  1822, -2530, -2530, -2530,  1824,  1826,
    1823, -2530,  1828,  1830,  1832, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530,   804,   804,   804, -2530,  1127,
     804,  1127, -2530, -2530, -2530,  3320,   804,  1127,   804,   804,
     804, -2530,   804,   804,  1833,   804,  1835,  1831,   804,   804,
   -2530, -2530,  1838,  1237, -2530, -2530, -2530,   804, -2530, -2530,
   -2530, -2530,  1127, -2530,   604,   804,   604,   411,  1127,  1237,
     804,   804,  1840, -2530, -2530, -2530, -2530, -2530,   804, -2530,
   -2530, -2530, -2530, -2530,  1237,  1127,  1237,   804,  1841, -2530,
   -2530,  1237,  1845,  1847,  1859,  1860,  1237,  1127, -2530,  1237,
   -2530,  1237,  1237,  4693,  1237,  1127, -2530,  1237, -2530, -2530,
    1237, -2530, -2530,  4693,  1237, -2530,  1237,  1237,  4693,  1237,
   -2530,  1237,  1237,   804, -2530, -2530, -2530,  1237,  1237,  1237,
   -2530, -2530,  1237,  1237, -2530, -2530, -2530, -2530,  1237,  1237,
   -2530, -2530, -2530, -2530, -2530,   804,   804, -2530, -2530,  1842,
     804, -2530, -2530,  1861,  1863, -2530,   804, -2530, -2530, -2530,
     381, -2530, -2530, -2530,  1864,  1865,  1866, -2530, -2530,   386,
    1868,  1869,  1870,   381, -2530, -2530, -2530, -2530, -2530,    36,
   -2530, -2530,  1874,   381,  1875,  1876,  1877,    36,    36,   386,
    1879,  1881,  1882,   908, -2530,   963, -2530,  1386,  1471,  1883,
    1884,  1885,    36,    36,   386,  1887,  1888,   386,  1889,  1582,
    1890,  1893,  1894,    36,    36,   386,  1897,  1899,   386,  1900,
    1599,  1901,  1902,  1903,    36,    36,   386,  1905,  1906,   386,
    1916,  1917,  1930,  1932,    36,    36,   386,  1938,  1940,  1942,
      36, -2530, -2530, -2530, -2530, -2530,  1941, -2530, -2530,  1944,
      36,  1946,  1947, -2530, -2530,   381, -2530, -2530,  1949, -2530,
    1127, -2530,  1237,   804, -2530,   804,  1237,   804,  1950,   789,
   -2530, -2530, -2530, -2530, -2530, -2530,  1953, -2530,  1237,   198,
    1954,  1237,  1127, -2530,  1956,   789,   804,   804,   804,   804,
     804,   804,   804,   804,   804,  1958,  1960, -2530, -2530, -2530,
    1961, -2530, -2530, -2530,  1964,  1966, -2530, -2530, -2530, -2530,
     804,  1237,   804,  1967,   789,   198,  1127,  1127, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,   804,
    1268, -2530, -2530,  1127,  1127,   804, -2530, -2530,  1127,  1127,
   -2530, -2530, -2530, -2530,   804,   804,   804,   804,   804,   804,
     804,   804,   804,   804,  2633, -2530,   804,   804,   804,   804,
     804,   804,   804,   804,   804,   804,   804,  3447,  1968,   804,
   -2530,   804,   804,   804,  1970,  1971, -2530, -2530,  1127,   411,
    1973,  1127,  1127, -2530, -2530,  1268,   804, -2530,  1974,  1127,
   -2530, -2530, -2530,  1976, -2530, -2530, -2530, -2530,   909,   909,
     909, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530,   789,   804, -2530,
   -2530,   804, -2530,   804,  1127,   804, -2530,  1268,   804, -2530,
     804, -2530,  1851,  1977,  1978, -2530,  1982,   804,   804,  1985,
    1127,  1237, -2530, -2530,   804, -2530,   804, -2530,   411,   102,
     804,  1986, -2530,   804,  1127, -2530,  1127,    34, -2530, -2530,
    1993,  1996,  1997,  1998,  1127, -2530,   102,   102,   102,  1127,
   -2530,   102,   411,   102,   102,  1127, -2530,   102,   102,   102,
    1127, -2530,   102,   102,  1127,  1237,   102,  1127,   102,   102,
    1127,   102,  1127, -2530, -2530,  2004,    34,  2005, -2530,   804,
   -2530, -2530, -2530, -2530,  2010, -2530, -2530, -2530, -2530,   381,
      36, -2530, -2530, -2530, -2530, -2530, -2530,  2012, -2530, -2530,
      36,  2013,  2014,  2017,    36,    36,   386,  2019,  2020,  2021,
    2023,  2025,  2026,    36,    36,   386,  2028,  2029,  2031,  2032,
    2034,  2035,    36,    36,   386,  2030,  2037,  2038,    36,   381,
     381,   381,   381,   381,  2042,   381,   381,  2045,    36,    36,
     381,   381,   381,   381,   381,  2046,   381,   381,  2047,    36,
      36, -2530, -2530, -2530, -2530, -2530,  2049, -2530, -2530,  2050,
      36, -2530, -2530, -2530, -2530, -2530,  2051, -2530, -2530,    36,
   -2530,    36,  2052, -2530,  2055,  2057, -2530,  4055, -2530,   102,
    2059,  1237,   102,   804,  1237,  2061, -2530,   102, -2530, -2530,
     102, -2530,  1237,  2063,   804,   804,   804,   804,   804,   804,
     804,   804,   804,   804,   804, -2530, -2530, -2530,  1237,   102,
     804,  1237,  2064, -2530,  1268,  1268,  1237,  1268,  1268,  1237,
    1237,  1268,  1268,   804,   804,   804,   804,   804,   804,   789,
     804,   804,   804,  1543,  1692,  1714,  1725,  1728,  1731,  1733,
    2633, -2530,  1737, -2530, -2530,   789,   804,   804,   804,   804,
     789,   804,   804,   804,   804,   804,   804,  1127,   804,  1602,
     789,   804,   804, -2530, -2530,   411,   198,  2075,  2076, -2530,
   -2530, -2530, -2530, -2530,   411,  2078, -2530, -2530, -2530, -2530,
     804, -2530, -2530,  1268,   804, -2530, -2530, -2530,  1054,  2079,
    2080, -2530,   804,  2082,   604, -2530,   102, -2530, -2530, -2530,
   -2530,  2083, -2530, -2530, -2530, -2530,  2085,  2086,  2087,  1237,
    2088, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530,   411,   102, -2530,
     411, -2530, -2530,   411, -2530,   411,  2089,  2091, -2530,   804,
   -2530, -2530,   381,    36, -2530,   381,   381,   381,   381,   381,
    2093,   381,   381,    36,   381,   381,   381,   381,   381,  2094,
     381,   381,    36,   381,   381,   381,   381,   381,  2095,   381,
     381,    36,   381, -2530, -2530, -2530, -2530, -2530,    36, -2530,
   -2530,  2096,   381,   381, -2530, -2530, -2530, -2530, -2530,    36,
   -2530, -2530,  2097,   381, -2530,    36,  2098, -2530,    36, -2530,
   -2530,    36, -2530, -2530,  1127, -2530,  1237,   102, -2530,  2099,
    1127,   804, -2530, -2530,  1127,   804, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530,   804,   804,   102, -2530,  2101,
    1127,   804,  1268, -2530,   102,   804,  1268,   102,   102,  1237,
   -2530,   804,  2103,  2103,   804,   804,  2103,   789,  2103, -2530,
    1237,   850,  2104,  2106,  2108,  2109,  2111,  2107, -2530,   198,
     789,  2103,  2103,   804,   804,   789,   804,   804,   804,   804,
     804, -2530,  1268,   804,  2112, -2530, -2530,   804,  2103,   198,
      27, -2530,  2114,   198,  2116, -2530, -2530, -2530,  2117,   804,
   -2530,  2118,  2120,  1878,   804, -2530, -2530,    12, -2530,  2123,
    1127,  1237, -2530, -2530, -2530, -2530, -2530, -2530,    12,   804,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530,    36, -2530, -2530,
     381, -2530, -2530, -2530, -2530, -2530,    36, -2530, -2530,   381,
   -2530, -2530, -2530, -2530, -2530,    36, -2530, -2530,   381, -2530,
     381,    36, -2530, -2530,   381,    36, -2530, -2530,    36, -2530,
   -2530,   804,   102, -2530,  1237,  1237,   804,  1237,   804, -2530,
   -2530, -2530,  1237,  1237,   804, -2530, -2530,  1237, -2530, -2530,
   -2530,   102,  2121, -2530, -2530, -2530,   789,   804, -2530,  2125,
   -2530, -2530,  1127,  2127, -2530,  2126, -2530, -2530, -2530, -2530,
   -2530,  2129, -2530, -2530,   789,   804,  2131, -2530, -2530,   804,
    1237, -2530, -2530, -2530, -2530, -2530, -2530, -2530,    27,  1604,
    1858, -2530, -2530,  2132,  2138,  2139, -2530,  1975,  2142,    77,
   -2530, -2530, -2530,  1237,    41, -2530, -2530,  2143,   381, -2530,
     381, -2530,   381, -2530, -2530,   381, -2530,   381, -2530,  4055,
   -2530,   102,   102,   804,   102,  2144,   102,   102,   804,   102,
     804, -2530, -2530, -2530, -2530,  2145, -2530,   804, -2530, -2530,
    2146, -2530,   804, -2530, -2530, -2530,  2148,   804, -2530, -2530,
   -2530,  1127, -2530, -2530, -2530,  1604, -2530,  1705,  1741,  1858,
   -2530, -2530,  2149,  2150,  2152, -2530, -2530, -2530, -2530,    47,
      47,  1127, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530,   102, -2530, -2530,  2153, -2530,  4693, -2530, -2530,  2154,
   -2530,   789, -2530, -2530,   789,   804, -2530, -2530,   804, -2530,
     789,   804, -2530,  1237, -2530,  1705, -2530,   198, -2530,  2155,
    2156, -2530,   804,   804,   804,   804,    41,  2157,  4693,  1127,
   -2530,  4693, -2530, -2530,   804,  2159, -2530,   804,   102, -2530,
   -2530, -2530,  2160,  2161,   804,  2162,   804, -2530, -2530,  1127,
   -2530, -2530,  1127, -2530, -2530,  2164, -2530, -2530,  2165,  2166,
   -2530, -2530,  2167, -2530,  2168, -2530, -2530,   789, -2530,   789,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2530, -2530,    -3, -2530,   580, -2530, -1778,  -919,  1603, -2530,
     796,  -135,  1542,   -49,    79, -2530, -1625,  1772,  1846,  -847,
     765,  -846,   764,  1803, -2530, -1123, -2530,  -605, -1127, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530,  -456,  -473, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530,  -339, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -1430, -2530, -2530, -2530, -2530, -2530,  -642, -2530, -2530,
   -2530, -2530, -2530, -2530,   104, -2530, -2530, -2530, -2530,   -66,
    -657, -1922,  -424, -2530, -2530, -2530, -2530,  -494,  -488, -2530,
   -2530, -2529, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530,  1454, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530, -2530,
   -2530, -2530, -2530, -2530, -2530, -2530, -2530
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1225
static const yytype_int16 yytable[] =
{
      67,   348,  1085,  1870,   106,  1557,   849,  1562,   104,  2014,
     629,  2016,  1059,  1062,   769,   106,  1416,   671,  1225,  1226,
    1227,   877,   772,    64,    65,  1937,  1484, -1075,   972,   287,
    1089,   367,   577,  1592,  1593,  1594,  1466,   311,    64,    65,
    1054,  1091,  1098,   562,  2610,   735,   342,   337,   106,   353,
      64,    65,   358,  1336,    64,    65,   364,   305,  1391,   371,
      64,    65,   603,   374,   376,  1389,   745,   385,  1413,  1233,
     392,   396,    77,  2682,   399,   973,   835,   748,   403,  1309,
      64,    65,   319,   404,  1840,    64,    65,   400,    64,    65,
     109,    64,    65,   966,    64,    65,   417,   421,   426,   427,
     431,   433,    64,    65,   736,   405,    64,    65,    78,  1340,
     751,   289,  1343,  1889,   106,   255,   704,   437,  1449,   111,
     754,  1474,   533,   612,   106,   291,  1650,  1651,   388,  1374,
     111,   320,  1721,  1697,  1890,  1149,  1099,  1891,  2716,    99,
     321,   304,  1100,  1620,    64,    65,    64,    65,  1892,   838,
      64,    65,   446,    64,    65,  1417,   563,  1673,   100,   836,
      64,    65,   967,   111,   377,   389,  1683,   338,   322,   414,
      76,  1893,  1688,  1841,  1392,   478,   256,    64,    65,    79,
     499,  1234,   878,  1064,  1414,   846,  2739,  1065,  1894,  1698,
     106,    54,   436,   173,  1337,   415,    64,    65,   257,  1652,
     357,   114,   106,   974,  1150,   839,  1534,  1678,   115,   116,
     101,   578,   114,   534,  1450,  1858,   672,  1475,  1535,   115,
     116,   471,   847,   157,   705,  1842,  1418,   472,  1860,   111,
      64,    65,   558,  1055,  1092,   938,   939,  1863,   265,   111,
     610,    64,    65,   381,   694,   114,  1297,   339,   117,   258,
     604,   673,   115,   116,  1699,   737,   636,   637,  1066,   564,
     245,    80,   500,  2676,   508,   473,   513,   517,  1447,  1419,
     676,   393,   678,   630,   544,   975,   306,  1467,   368,  1067,
     680,   683,   940,   686,   690,   976,   692,   565,   949,   575,
     474,  2611,   102,   119,   770,   755,   702,   950,   951,   307,
     828,   547,   773,   617,   119,   111,   712,   714,  1090, -1075,
     831,   114,    81,  1037,  1056,  1093,   977,   111,   115,   116,
    2683,   114,  1938,  1485,   323,   406,   879,   401,   115,   116,
     757,   758,   760,  1037,   762,   475,  1101,   119,   765,   766,
    1068,    66,   149,   309,   952,  1722,  1679,   150,   151,   778,
     780,  1458,   378,   149,  1038,   781,   674,   382,   150,   151,
     784,   786,   613,  1291,   394,   688,   759,  1621,   787,  1478,
     391,   788,  1451,  1674,  1038,  1476,  1639,  2677,   341,   476,
     477,   352,  1684,  1280,  1643,   103,   149,   114,  1689,   798,
     799,   150,   151,   363,   115,   116,   803,   804,   805,   114,
     806,   383,   384,   119,   716,   266,   115,   116,   379,   259,
     941,   942,  1030,   119,   813,   618,  1517,  1680,   814,   292,
     267,   476,  2678,   819,   820,   821,   822,   823,   824,   293,
     825,  1859,   421,   829,   830,  1895,  1971,  1069,  1031,  1358,
     310,   395,   421,   832,  1861,  1119,  1281,  1529,  1359,  1360,
    1916,   559,   149,  1864,   873,  1455,   260,   150,   151,   883,
    1681,  1921,   149,   717,  1448,    64,    65,   150,   151,  1037,
    1095,  1282,   953,   954,   560,  1839,   519,  1441,   270,   119,
     271,   268,   943,    83,  1039,  1468,  1124,  1647,   253,   619,
     520,   119,   944,   945,    55,  1361,   861,   862,   263,  1040,
    1041,  1140,  1855,   723,  1039,   789,   109,  1058,  1183,   277,
    1038,  1304,   521,   827,   870,  1145,  1120,  2571,  1816,  1040,
    1041,  1819,   301,   946,  1194,  1884,    64,    65,   149,   925,
    1061,   522,  1195,   150,   151,    56,  1690,  1319,  1670,   109,
     149,   890,   620,  2595,   955,   150,   151,  1676,   523,  1283,
    1323,   524,   303,    57,   956,   957,  1114,  1125,  1151,   958,
    1141,   542,   725,  1156,  1320,   586,   621,  1707,  1032,   790,
     963,  1285,   921,  1453,  1146,  1558,  1456,   525,   526,   109,
    1454,   548,    58,   846,  1685,   959,   326,   718,  1564,   982,
    1042,  1043,  1305,  1442,   159,   272,  1142,   842,  1121,  1284,
      59,   236,   874,  1570,    60,    84,   261,   937,   587,   350,
    1042,  1043,   109,   294,   719,  1700,    61,  1152,   884,  1033,
     847,   543,  1157,  1362,  1363,  1578,  1710,    85,  1694,   527,
     355,    86,    83,   981,  1559,  1695,   910,   791,   528,  1126,
    1039,   608,  2642,  2643,   741,  1034,  2646,  1565,  2648,  1324,
    1057,   387,   273,  1070,  1671,  1040,  1041,  1734,  1735,  2484,
    2653,  2654,  1571,  1677,   117,  2658,  2659,  1122,  1299,  2662,
    1184,   356,  1582,  1105,  2663,  2664,  1691,  1106,  1107,  1108,
    1109,  1469,    87,  1110,  1579,  1112,   215,  1113,   421,  1115,
     843,  1213,   360,  1048,   274,  1364,   549,   117,   529,   530,
    1686,  1286,   216,   275,  1736,  1365,  1366,  1708,  1127,   361,
    1367,  1143,   588,   731,   362,   639,   640,   742,  1176,  2702,
     854,    88,  2703,   792,  1460,  1147,   366,  2706,   793,    89,
      90,  1583,  1692,  2709,  1229,   398,  1368,   117,  2712,   538,
     448,   449,   450,   451,   452,   453,  1042,  1043,   454,   455,
     456,   457,  1287,   550,    84,   609,  1167,  1168,   485,  1169,
    1171,  1173,  1174,  1709,  1049,   296,   486,   844,  1153,   531,
     117,   641,    62,  1158,  1186,  1187,    85,   642,  1288,   408,
    2013,  1191,  1192,   855,   643,  1560,   644,   410,  2644,   412,
    2017,   645,    64,    65,   646,   551,  1386,  1387,  1566,   434,
     647,  1198,  1199,  1200,   552,   246,  2655,    64,    65,  1422,
     648,  2754,   743,  1572,  2757,   447,   649,  1461,  1208,  1209,
    1210,   539,  1212,   421,  1214,   650,  1215,    64,    65,  1754,
    1755,    87,  1737,  1738,  2768,  1580,  1423,   634,   635,  1424,
     651,  2266,  2267,  2268,   695,   458,  1050,  1218,  2775,  1220,
    1086,  2776,  2777,   540,  1801,  1802,   469,    93,   313,  1222,
     652,   459,   567,   297,   428,   685,   421,  1230,   481,  1425,
      88,  1232,   568,    94,  1462,   653,  1756,  1843,    89,    90,
     696,   278,  1584,   483,   654,   655,  1247,  1249,   327,   510,
    1395,   247,   536,  2074,  1290,  1292,  1295,  1426,   328,   569,
    1427,  1803,  1300,   248,  1739,   656,   537,  1306,   746,   749,
     752,   546,  1349,  2087,  1740,  1741,  1396,   555,  1307,   554,
    2175,  1087,  2091,  2092,   576,   329,  2733,   657,  2124,  1219,
     697,  2127,  2736,   557,  1315,   429,  2183,   249,   298,  2135,
     623,   658,  2138,   659,   314,  1742,   582,   299,    95,  1397,
    2146,  1551,  1552,  2149,   584,  1398,   315,   660,   624, -1224,
    2156,  1399,   661,  1598,   607,  2202,  1844,   606,   662,  2093,
     611,    64,    65,   632,   570,   663,  1540,  2100,  2101,  1400,
     808,   809,  1701,   615,   250,   627,    64,    65,   693,  2773,
      96,  2774,   633,   664,    64,    65,   700,   251,   638,  1401,
     330,  1452,   670,  1088,  1757,  1758,   665,   666,   679,   667,
     571,  2573,  1428,   701,  1402,    64,    65,   430,  1845,  1702,
     279,   703,  1477,   681,  2102,    97,   280,   707,   281,  1804,
    1805,  1483,   590,   625,   698,   709,   331,   316,    64,    65,
     715,    64,    65,  1429,  1403,  1512,   721,  1513,   106,   668,
     317,   739,  1514,  1515,  1516,  1294,   740,    64,    65,   763,
      64,    65,  1522,   107,   764,  1523,   767,  1525,  2269,   785,
     775,  1614,   782,   891,   892,  1703,  1759,   572,  1553,  1554,
     783,   332,  1404,  1527,   108,  1528,  1760,  1761,   796,  1531,
    1532,   370,   797,  1640,   682,   800,  1405,  2094,  2095,   591,
     109,  1806,  2256,   333,  1538,  1539,  1555,  1406,   421,  1541,
    1542,  1807,  1808,  2478,   373,   801,  1544,  1762,  1545,    64,
    1170,  1547,   802,  1548,    64,    65,  1601,   807,   573,   893,
    1177,  1178,  1704,   810,  1407,   894,   812,    69,   334,   418,
     592,   833,  1809,    70,   420,   110,  1408,  1768,  1409,  1410,
      64,    65,  2103,  2104,   335,   834,  1769,  1770,   777,  1190,
    1595,   710,   438,   111,  1596,  1779,  1597,  1180,  1181,  2096,
    1600,  2289,   841,   237,  1780,  1781,    64,  1246,   593,  2097,
    2098,    71,   850,   895,   933,  1606,   852,  1609,  1411,  1611,
    1612,  1613,  1615,  1520,  1521,  2307,  1618,  1619,   896,   857,
     112,   238,   859,  1771,  1627,   876,    72,    64,    65,  1832,
    2099,  1633,   897,  1876,  1877,  1634,  1635,  1636,   898,   816,
     817,  1782,   881,   899,  2105,   421,  1641,   886,   887,  1644,
     888,   889,   711,   439,  2106,  2107,   911,   113,  1073,  1656,
     912,  1657,   913,  1096,  1659,   114,    64,    65,  1836,   915,
    2340,    73,   115,   116,   440,   441,   107,   917,   117,  2349,
     919,   922,   442,   118,   923,  2108,   927,  1608,  2358,   239,
    1379,    64,    65,   932,   934,   900,   935,   418,   419,   420,
     443,    64,    65,  1838,   240,  1386,  1387,  1712,   936,  1713,
     444,   948,  1714,  1715,   901,  1716,    74,  1717,   947,   902,
    2437,   903,   960,  1719,   968,  1720,    64,    65,  1881,   970,
    2565,   971,  1726,  2568,  1648,  2570,  2450,   978,    64,    65,
    1854,  2455,  1386,  1387,   979,   904,   905,  1661,  2582,  2583,
    1668,  1772,  1773,   906,   980,  1045,  1036,   119,   110,  1380,
    1047,  1052,  1102,   241,  1053,  2597,  1103,  1104,  1116,  1783,
    1784,   907,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,  1118,  1129,  1133,   242,  1130,   149,  1833,  1202,  1835,
    1837,   150,   151,   112,   243,  1790,  1662,  1131,  1132,  1134,
    2109,  2110,  1135,  1774,  1791,  1792,  1136,   908,  2469,  1381,
    1382,  1848,  1138,  1775,  1776,  1851,  1155,  2473,  1777,  1137,
    1160,  1785,  1161,  1162,  1383,    64,    65,  1883,  1163,  1386,
    1387,  1786,  1787,  1164,  1165,  1166,  1788,  1179,  1182,  1880,
    1882,  1189,  1216,  1188,  1778,  1196,  1197,  2111,  1201,  1888,
    1193,  1793,  1203,  1899,  1204,  1237,   118,  1217,  1238,  1239,
    1905,  1243,  1789,  1244,  1241,  1384,  1663,  1664,  1831,  1242,
    2492,  1245,  1296,  2494,  1910,  1298,  2495,  1302,  2496,  1912,
    1308,  1665,  1175,  1914,  1312,  1917,  1918,  1313,  1920,  1922,
    1923,  1316,  1926,  1317,  1318,  1929,  1930,  1931,  1932,  1326,
    1933,  1934,  1935,  1936,  1939,  1941,  1942,  1327,  1331,  1944,
    1945,  1946,  1947,  1328,  1329,  1332,  1333,  1334,  2569,  1953,
    1954,  1335,  1666,  1956,  1957,  1958,   723,  1341,  1960,  1961,
    1342,  2581,  1344,  1345,  1351,  1369,  2586,  1353,  1354,  1356,
    1370,  1964,  1965,  1371,  1966,  1967,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   288,  2112,  2113,  1372,  1375,  1794,
    1795,  1376,   724,   460,  1377,   725,  1390,  1393,  1394,  1415,
    1421,  1440,  1987,  1988,  1989,  1443,  1444,  1991,  1420,  1445,
    1459,   461,  1993,  1996,  1446,  1998,  1999,  2000,  1463,  2001,
    2002,  1480,  2004,  1464,  1465,  2007,  2008,  1470,   462,  1471,
    1472,   726,  1519,  1473,  2011,  1481,  1479,  1482,  1546,  1530,
     463,  1536,  2015,  1537,  1543,  1549,  1563,  2020,  2021,  1550,
    1430,  1568,  1569,  1574,  1577,  2023,  1575,  2114,   464,  1576,
    1586,  1796,   465,  1587,  2027,   435,   727,  2115,  2116,  1588,
    1591,  1797,  1798,  1589,   466,  1526,  1799,  1431,  1590,  1603,
    1432,  1604,  1605,  1433,  1610,  1533,   160,  1616,   161,  1617,
    1645,  1623,  1628,  1629,  1995,  1630,  1642,  1646,  2117,  1649,
    2055,  1658,  1800,  -436,  1660,  1682,  1669,  1706,  1672,  1687,
    1434,  1696,  1693,   467,  1705,  1711,   728,  1724,   162,   729,
    1718,  1725,  2063,  2064,  1730,  1749,   163,  2066,  1339,  1752,
    1865,  1763,  1765,  2069,   497,  1767,   504,   507,  1435,   512,
     516,  1436,  1810,   730,  1811,  1812,   731,  1813,  1817,  1818,
    2118,  1820,  1821,  1822,  1825,  1866,   732,  1828,  1846,  1850,
    1856,  1857,  2040,  1867,  1868,  1862,  1869,   580,  1871,  1872,
    1873,  1878,  2046,  1897,  1915,  2207,  1902,  2051,  1913,  1919,
    1874,  1927,  1875,  1928,   164,   595,   601,  1943,  1950,  1962,
    1963,  1970,  2732,  1624,  1625,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1968,  1969,  1972,   677,  1973,  1974,  1975,
    2261,  1976,  1979,   165,  1977,  1978,  1980,  1983,   687,  1981,
    2170,  1982,  2171,  1984,  2173,  1985,  1986,  2006,  2003,  2005,
     166,   167,  2009,  1437,  2022,  2028,  2065,   168,   708,   169,
    2030,  2129,  2031,  2184,  2185,  2186,  2187,  2188,  2189,  2190,
    2191,  2192,  2275,  2278,  2032,  2033,  2067,  2068,  2140,  2071,
    2072,  2073,  2075,  2076,  1438,  2077,   170,  2198,  2080,  2200,
    2082,  2083,  2084,  2088,  2608,  2089, -1088,  2090,  2119,  2120,
    2121,  2125,  2126,  2441,  2128,  2130,  2206,   421,  2131,  2132,
    1439,  2136,  2210,  2137,  2464,  2139,  2141,  2142,  2143,  2147,
    2148,  2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,
    2222,  2150,  2151,  2235,  2236,  2237,  2238,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2246,  2152,  2249,  2153,  2250,  2251,
    2252,   171,  2157,  2668,  2158,  2161,  1019,  2159,  2162,  1074,
    2164,  2165,   421,  2262,  2167,  2174,   811,  1075,  2176,  2179,
    1020,  2182,  2193,  1076,  2194,  1829,  2195,   818,  2196,  1021,
    2197,  1834,  2201,  2248,  2253,  2254,   826,  2257,  2263,  1022,
    2265,  2674,  2279,  2280,  1077,  2270,  2281,  2227,  2271,  2284,
    2272,  2292,  2274,  1847,   421,  2276,  1849,  2277,  2297,   344,
    1853,  2298,  2299,  2300,  2282,  2283,   345,  1078,  2326,  1023,
    2328,  2287,  2668,  2288,  2330,  1079,  2333,  2291,  2335,  2336,
    2293,  1879,  2337,  2341,  2342,   815,  2343,  1885,  2344,  1024,
    2345,  2346,  2350,  2351,  2359,  1898,  2352,  2353,  1901,  2354,
    2355,  2360,  2442,  2361,   863,   864,  2368,  1906,  1907,  2371,
    2379,  2382,  1080,  2385,  2386,  2388,  2391,   868,  1911,  2392,
    1081,  2393,   871,  2396,  2443,  2401,  2329,  2405,  2421,  2422,
    2423,   882,  2425,  2426,  1025,  2444,  2429,  2430,  2445,  2471,
    2472,  2446,  2474,  2447,  2480,  2481,  2483,  2449,  2486,  2487,
    2488,  2717,  2489,  2491,  2497,  2498,  1743,  2507,  2516,  2525,
    2531,  2535,  2538,  2544,  1082,  2552,  2296,  2563,  1753,  2574,
    2575,  2579,  1026,  2576,  2577,  1083,  2578,  2594,  2394,  2601,
    2603,  2747,  2604,  2606,  2607,  2641,  1814,  1815,  2613,  2647,
    2651,  1084,  2650,  2652,   691,  2657,  2671,  1027,  2476,   928,
     929,   930,   931,  2672,  2673,  2327,  2675,  2685,  2696,  2704,
     795,  2707,  2710,  2680,  2719,  2720,  2721,  2728,  2731,  2616,
    2741,  2742,  2748,  2756,  2448,  2760,  2761,  2763,  2767,  2769,
    2399,  2770,  2771,  2772,  2665,  2718,  1028,  2714,  1029,     0,
    1139,  2406,  2407,  2408,  2409,  2410,  2411,  2412,  2413,  2414,
    2415,  2416,     0,     0,   776,     0,     0,  2419,     0,  1072,
       0,   421,   421,     0,   421,   421,  2723,  2725,   421,   421,
    2431,  2432,  2433,  2434,  2435,  2436,   961,  2438,  2439,  2440,
       0,   962,     0,   346,     0,   347,     0,     0,     0,     0,
       0,     0,     0,  2451,  2452,  2453,  2454,     0,  2456,  2457,
    2458,  2459,  2460,  2461,     0,  2463,     0,     0,  2467,  2468,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2475,     0,     0,
     421,  2477,     0,     0,     0,  2479,     0,     0,     0,  2482,
       0,     0,     0,     0,     0,     0,     0,  2555,     0,     0,
       0,  2558,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,  2499,  2592,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   860,     0,     0,     0,     0,     0,     0,
     865,     0,     0,   866,  1206,     0,     0,     0,   867,     0,
       0,     0,   869,     0,     0,     0,  1211,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,  2546,     0,
       0,     0,  2548,  1221,     0,     0,     0,     0,     0,     0,
       0,     0,  2549,  2550,     0,     0,     0,     0,  2554,   421,
       0,     0,  2557,   421,     0,     0,   926,     0,  2562,  2178,
       0,  2566,  2567,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2584,  2585,     0,  2587,  2588,  2589,  2590,  2591,     0,   421,
    2593,     0,     0,     0,  2596,  2203,     0,     0,     0,     0,
       0,     0,     0,     0,  1311,     0,  2605,     0,     0,     0,
       0,  2609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   218,  2617,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2079,     0,     0,     0,     0,     0,     0,
     219,  2085,  2086,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1111,     0,     0,  2122,  2123,  2629,     0,
    1117,     0,     0,  2633,     0,  2635,     0,  2133,  2134,  1457,
       0,  2638,     0,   220,     0,     0,     0,     0,  2144,  2145,
     221,     0,     0,     0,  2645,     0,     0,     0,  2154,  2155,
     222,   223,     0,     0,  2160,     0,     0,   224,     0,     0,
    2691,     0,  2656,     0,  2163,     0,  2660,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,  1518,     0,     0,     0,     0,  2679,     0,     0,     0,
       0,  1524,     0,     0,     0,     0,     0,   226,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2694,   227,   228,     0,     0,  2699,     0,  2701,   229,     0,
       0,     0,     0,     0,  2705,     0,     0,     0,     0,  2708,
       0,     0,     0,     0,  2711,     0,     0,  1205,   230,     0,
       0,     0,     0,     0,  1207,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2722,  2724,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2223,     0,
       0,     0,     0,     0,     0,   231,     0,     0,     0,  2224,
       0,     0,  2734,     0,     0,  2735,     0,     0,  2737,  1223,
    1224,     0,     0,  1599,  1228,     0,     0,  1231,     0,  2743,
    2744,  2745,  2746,     0,  1074,  2225,     0,     0,  1240,     0,
    1607,  2755,  1075,     0,  2758,     0,     0,     0,  1076,     0,
       0,  2762,     0,  2764,     0,  1322,   232,     0,     0,     0,
       0,     0,     0,     0,  1632,     0,   233,     0,     0,  1077,
       0,     0,  2226,     0,  1638,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2730,     0,  1373,     0,     0,
       0,     0,  1078,  1655,  2290,   234,     0,     0,     0,     0,
    1079,     0,     0,  1667,     0,     0,     0,     0,  1675,     0,
       0,  2302,  2303,  2304,     0,     0,  2306,  2750,  2308,  2309,
    2753,     0,  2311,  2312,  2313,     0,     0,  2315,  2316,     0,
       0,  2319,     0,  2321,  2322,     0,  2324,  1080,  1378,     0,
       0,     0,     0,     0,     0,  1081,  2470,     0,     0,     0,
       0,     0,     0,     0,  2332,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2334,     0,     0,     0,  2338,  2339,
       0,     0,     0,     0,     0,     0,     0,  2347,  2348,     0,
       0,     0,     0,     0,     0,     0,  2356,  2357,     0,  1082,
       0,     0,  2362,     0,     0,     0,     0,     0,     0,     0,
    1083,     0,  2372,  2373,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2383,  2384,     0,  1084,     0,     0,     0,
       0,     0,     0,     0,  2387,  2227,     0,  2228,     0,     0,
       0,     0,     0,  2389,     0,  2390,     0,     0,     0,     0,
       0,  1830,     0,     0,  2395,     0,     0,  2398,     0,     0,
       0,     0,  2402,     0,     0,  2403,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1852,     0,     0,  2418,     0,     0,     0,     0,     0,
       0,  2229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1886,     0,     0,  1887,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1903,  1904,     0,     0,     0,     0,     0,
       0,  1908,     0,     0,     0,     0,     0,     0,  1909,     0,
       0,     0,  1602,     0,     0,     0,     0,     0,     0,  2580,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2598,
       0,  2485,  1626,  2602,     0,     0,     0,  1631,     0,  1948,
       0,     0,  1951,  1952,     0,     0,     0,  1637,     0,     0,
       0,  1959,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2493,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2501,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2510,     0,     0,
       0,     0,     0,     0,     0,     0,  2519,     0,     0,  1727,
    1728,  1729,     0,     0,     0,  2528,     0,     0,     0,  1731,
    1732,  1733,  2530,     0,     0,     0,  1744,  1745,  1746,     0,
       0,  1747,  1748,  2534,  1750,  1751,     0,  1994,     0,  2537,
       0,     0,  2539,     0,     0,  2540,     0,     0,     0,     0,
       0,     0,  2543,     0,     0,  2010,     0,     0,     0,     0,
       0,     0,     0,     0,  1823,  1824,     0,     0,  1826,  1827,
       0,  2019,  2551,     0,     0,     0,     0,     0,     0,  2556,
       0,     0,  2559,  2560,     0,     0,  2024,     0,  2026,     0,
       0,     0,     0,  2029,     0,     0,     0,     0,  2034,     0,
       0,  2036,     0,  2037,  2038,  2039,  2041,     0,     0,  2043,
       0,     0,  2044,     0,     0,  2045,  2047,     0,  2048,  2049,
    2050,  2052,     0,  2053,  2054,     0,     0,     0,     0,  2056,
    2057,  2058,     0,     0,  2059,  2060,     0,     0,     0,     0,
    2061,  2062,     0,     0,     0,     0,    64,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2618,   107,     0,     0,     0,     0,     0,     0,     0,
    2620,     0,     0,     0,     0,     0,     0,     0,     0,  2622,
       0,     0,   283,     0,     0,  2625,     0,  2740,     0,  2627,
       0,     0,  2628,  1900,     0,     0,     0,  2630,     0,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    64,    65,     0,  2640,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1949,     0,     0,     0,     0,     0,
    1955,     0,     0,     0,  2169,     0,   109,     0,  2172,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2177,     0,     0,  2180,     0,     0,  2692,  2693,     0,  2695,
       0,  2697,  2698,     0,  2700,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,  2199,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1990,   284,  1992,     0,     0,
      64,    65,     0,  1997,     0,     0,  2727,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   117,     0,     0,
       0,     0,   118,     0,     0,     0,   112,     0,  2012,  2247,
       0,     0,     0,   285,  2018,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2025,     0,  2759,     0,   515,     0,     0,     0,     0,
       0,     0,     0,  2035,     0,     0,     0,     0,     0,     0,
     107,  2042,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2070,   117,     0,     0,     0,     0,   118,
       0,     0,     0,   286,     0,     0,  2078,     0,   110,     0,
       0,     0,     0,  2286,     0,     0,  2081,   109,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,  2318,     0,     0,
       0,     0,   110,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2166,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   112,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2168,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1654,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2181,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2397,     0,   117,  2400,     0,     0,     0,
     118,     0,     0,     0,  2404,     0,     0,     0,     0,     0,
       0,     0,  2204,  2205,     0,     0,     0,     0,     0,     0,
    2417,     0,     0,  2420,     0,     0,     0,     0,  2424,  2208,
    2209,  2427,  2428,     0,  2211,  2212,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   110,     0,     0,     0,     0,     0,
       0,     0,     0,  1347,  2255,     0,     0,  2259,  2260,     0,
       0,     0,     0,     0,     0,  2264,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   112,
    2273,  2490,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2285,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2294,     0,  2295,     0,     0,     0,     0,     0,     0,     0,
    2301,     0,  2331,     0,     0,  2305,     0,     0,     0,     0,
       0,  2310,     0,     0,     0,     0,  2314,     0,     0,     0,
    2317,     0,   118,  2320,     0,     0,  2323,     0,  2325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2363,  2364,  2365,  2366,  2367,     0,  2369,  2370,
       0,     0,     0,  2374,  2375,  2376,  2377,  2378,  2542,  2380,
    2381,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1348,
       0,  2561,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2572,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1486,     0,     0,     0,     0,  1487,     0,     0,     0,     0,
       0,     0,     0,  2615,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1488,  1489,     0,  1490,
    1491,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1492,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1493,  1494,     0,     0,     0,     0,     0,     0,
    1495,     0,     0,  1496,     0,     0,  2631,  2632,     0,  2634,
       0,     0,     0,  2462,  2636,  2637,     0,     0,     0,  2639,
    1497,     0,     0,     0,     0,     0,     0,  1498,  1499,     0,
       0,  1500,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2661,     0,     0,  2500,     0,     0,  2502,  2503,
    2504,  2505,  2506,   107,  2508,  2509,     0,  2511,  2512,  2513,
    2514,  2515,     0,  2517,  2518,  2681,  2520,  2521,  2522,  2523,
    2524,     0,  2526,  2527,     0,  2529,     0,     0,     0,  1501,
       0,     0,     0,     0,     0,  2532,  2533,     0,     0,     0,
       0,  1502,     0,     0,     0,     0,  2536,     0,     0,   488,
     489,     0,     0,   490,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   491,     0,     0,     0,     0,
       0,     0,     0,  1503,     0,   110,     0,     0,     0,  1504,
       0,     0,     0,     0,     0,     0,     0,     0,  2729,     0,
    2541,     0,     0,     0,     0,  1505,  2545,     0,     0,     0,
    2547,     0,     0,     0,  1506,  2738,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2553,     0,     0,     0,
    2749,     0,     0,  2752,     0,     0,     0,     0,     0,     0,
     112,  1507,  1508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   492,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1509,     0,     0,     0,     0,     0,     0,   493,
       0,     0,     0,  2619,     0,     0,     0,     0,     0,     0,
       0,     0,  2621,   596,   107,     0,     0,     0,     0,     0,
     494,  2623,     0,  2624,     0,     0,  2614,  2626,     0,     0,
       0,     0,     0,   118,     0,     0,     0,  1510,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   597,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,   495,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2649,     0,
     598,  2686,     0,  2687,     0,  2688,     0,     0,  2689,     0,
    2690,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   112,   496,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   599,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2713,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   118,     0,     0,  2726,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2751,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   600,     0,     0,     0,  2765,     0,     0,  2766,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   983,   984,   985,     0,     0,  1250,  1251,  1252,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     986,   987,     0,     0,   988,  1253,  1254,   989,     0,  1255,
     107,     0,     0,     0,   990,     0,  1256,     0,   991,  1257,
       0,     0,     0,  1258,     0,     0,   992,   993,     0,     0,
       0,  1259,  1260,     0,   994,   995,     0,     0,     0,  1261,
       0,     0,   107,     0,     0,     0,     0,   109,     0,     0,
       0,   996,     0,     0,     0,     0,     0,   997,     0,     0,
       0,   998,   999,     0,     0,  1000,  1262,  1263,     0,     0,
    1264,     0,     0,     0,     0,     0,     0,     0,     0,   109,
       0,  1001,     0,     0,     0,     0,  1265,     0,     0,     0,
       0,     0,   110,     0,   107,     0,     0,     0,     0,     0,
       0,  1002,     0,     0,     0,     0,  1266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1003,   110,     0,     0,     0,  1267,   107,
       0,     0,     0,     0,   502,     0,     0,  1268,     0,     0,
       0,     0,     0,     0,     0,     0,  1004,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1310,     0,     0,     0,
       0,     0,     0,     0,     0,  1005,   110,  1006,     0,   112,
    1269,     0,  1270,  1007,  1008,     0,     0,     0,  1271,  1272,
       0,     0,     0,     0,     0,     0,     0,     0,  1009,  1010,
       0,     0,     0,     0,  1273,   117,     0,     0,  1011,  1012,
     118,   110,     0,     0,  1274,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,  1013,     0,  1014,   117,     0,  1275,
       0,  1276,   118,     0,     0,     0,     0,     0,  1015,     0,
    1016,  1277,     0,     0,     0,     0,  1017,     0,     0,     0,
       0,  1278,     0,     0,     0,     0,   112,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1018,     0,     0,     0,   118,  1279,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   118,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,   503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     1,     0,     0,
       2,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,   175,     0,     0,   176,     0,   177,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
     179,   180,   181,     0,     0,     0,     0,     0,     0,     0,
     182,    16,   183,     0,     0,     0,     0,   184,     0,   185,
     186,   187,     0,    17,     0,     0,   188,    18,   189,     0,
      19,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,     0,     0,
      24,     0,     0,    25,    26,    27,     0,     0,    28,    29,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,    30,     0,   192,   193,     0,     0,   194,     0,
       0,     0,   195,     0,   196,     0,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,   197,   198,     0,     0,   199,
       0,    36,     0,     0,     0,    37,     0,     0,    38,   200,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,     0,
      42,     0,     0,   203,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,   204,     0,   205,
       0,     0,     0,    46,     0,    47,     0,     0,     0,     0,
       0,    48,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,   206,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   207,   208,
       0,     0,     0,     0,     0,    51,     0,   209,     0,     0,
       0,     0,    52,     0,   210,     0,     0,     0,     0,     0,
     211,     0,   212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,    50,   659,  1433,     4,  1132,   479,  1134,    11,  1634,
       5,  1636,   654,   655,     4,     4,    27,     4,   865,   866,
     867,     4,     4,     3,     4,     5,     5,     0,    14,    32,
       5,    32,    16,  1160,  1161,  1162,     5,    40,     3,     4,
      17,    17,     5,    21,    32,    61,    49,     4,     4,    52,
       3,     4,    55,    17,     3,     4,    59,    61,   121,    62,
       3,     4,     4,    66,    67,   984,    66,    70,   121,   133,
      73,    74,     4,    32,    77,    61,   103,    66,    81,   926,
       3,     4,    50,    86,   105,     3,     4,     4,     3,     4,
      56,     3,     4,    87,     3,     4,    99,   100,   101,   102,
     103,   104,     3,     4,   120,     5,     3,     4,    40,   955,
      66,    32,   958,    27,     4,     5,   149,   120,    36,   119,
      13,    36,   211,     5,     4,     5,    24,    25,   138,   975,
     119,    99,    20,   167,    48,    87,    99,    51,  2667,    40,
     108,    37,   105,    46,     3,     4,     3,     4,    62,   192,
       3,     4,   155,     3,     4,   166,   134,    21,    59,   186,
       3,     4,   156,   119,     4,   175,    21,   124,   136,     5,
     282,    85,    21,   194,   237,   178,    66,     3,     4,   111,
     183,   245,   165,    36,   237,   138,  2715,    40,   102,   223,
       4,    66,   113,   144,   158,    31,     3,     4,    88,    97,
      59,   201,     4,   189,   156,   248,     5,    27,   208,   209,
     111,   195,   201,   302,   132,    21,   203,   132,    17,   208,
     209,   186,   175,    33,   257,   246,   237,   192,    21,   119,
       3,     4,    61,   210,   210,    14,    15,    21,    57,   119,
     243,     3,     4,   186,   293,   201,   903,   204,   214,   139,
     192,   238,   208,   209,   288,   271,   259,   260,   111,   237,
      16,   193,   183,   186,   185,   230,   187,   188,    27,   280,
     273,    78,   275,   268,   195,   261,   280,   246,   279,   132,
     283,   284,    61,   286,   287,   271,   289,   265,     5,   210,
     255,   279,   193,   293,   284,   188,   299,    14,    15,   303,
     435,   197,   284,     5,   293,   119,   309,   310,   283,   282,
     445,   201,   244,    63,   291,   291,   302,   119,   208,   209,
     279,   201,   302,   302,   292,   225,   309,   244,   208,   209,
     333,   334,   335,    63,   337,   300,   299,   293,   341,   342,
     193,   290,   342,   193,    61,   233,   166,   347,   348,   352,
     353,  1008,   192,   342,   104,   358,   343,   300,   347,   348,
     363,   364,   244,   206,   171,   286,   223,   270,   371,  1026,
     196,   374,   290,   237,   104,   290,  1223,   300,   290,   344,
     345,   290,   237,    66,  1231,   286,   342,   201,   237,   392,
     393,   347,   348,   290,   208,   209,   399,   400,   401,   201,
     403,   344,   345,   293,    61,   224,   208,   209,   248,   299,
     189,   190,     4,   293,   417,   117,  1058,   237,   421,   299,
     239,   344,   345,   426,   427,   428,   429,   430,   431,   309,
     433,   237,   435,   436,   437,   349,  1563,   290,    30,     5,
     290,   248,   445,   446,   237,    40,   129,  1089,    14,    15,
     223,   280,   342,   237,     4,   121,   346,   347,   348,   131,
     280,   223,   342,   120,   223,     3,     4,   347,   348,    63,
     284,   154,   189,   190,   303,  1394,    45,   121,    64,   293,
      66,   300,   261,    28,   234,    27,    40,     4,   229,   191,
      59,   293,   271,   272,    12,    61,   499,   500,     5,   249,
     250,    61,  1421,    61,   234,    30,    56,   257,    97,    66,
     104,    17,    81,   434,   517,    61,   111,  2439,  1364,   249,
     250,  1367,     4,   302,     4,  1444,     3,     4,   342,   578,
     124,   100,    12,   347,   348,    53,    27,   156,   121,    56,
     342,   544,   244,  2465,   261,   347,   348,   121,   117,   232,
     164,   120,    88,    71,   271,   272,   691,   111,    61,   276,
     120,     5,   120,    61,   183,    44,   268,    27,   160,    94,
     619,    30,   575,   260,   120,    61,   242,   146,   147,    56,
     267,    66,   100,   138,   121,   302,     4,   244,    61,   638,
     340,   341,    98,   237,    14,   181,   156,    78,   193,   282,
     118,    21,   523,    61,   122,   150,    26,   610,    87,   229,
     340,   341,    56,    33,   271,  1272,   134,   120,   290,   211,
     175,    65,   120,   189,   190,    61,  1283,   172,   260,   198,
       0,   176,    28,   636,   120,   267,   557,   162,   207,   193,
     234,     6,  2564,  2565,    34,   237,  2568,   120,  2570,   263,
     653,    71,   238,   656,   237,   249,   250,    14,    15,  2284,
    2582,  2583,   120,   237,   214,  2587,  2588,   262,   206,  2591,
     259,     5,    61,   676,  2596,  2597,   167,   680,   681,   682,
     683,   223,   227,   686,   120,   688,    83,   690,   691,   692,
     171,   826,   267,    40,   280,   261,   181,   214,   267,   268,
     237,   160,    99,   289,    61,   271,   272,   167,   262,     5,
     276,   271,   191,   271,     4,     4,     5,   107,   767,  2641,
     192,   266,  2644,   248,   130,   271,     5,  2649,   253,   274,
     275,   120,   223,  2655,   869,     5,   302,   214,  2660,     6,
     160,   161,   162,   163,   164,   165,   340,   341,   168,   169,
     170,   171,   211,   238,   150,   120,   759,   760,   168,   762,
     763,   764,   765,   223,   111,    70,   176,   248,   271,   338,
     214,    60,   290,   271,   777,   778,   172,    66,   237,    31,
     176,   784,   785,   255,    73,   271,    75,     5,  2566,     5,
    1637,    80,     3,     4,    83,   280,     7,     8,   271,   193,
      89,   804,   805,   806,   289,    26,  2584,     3,     4,    22,
      99,  2733,   202,   271,  2736,     4,   105,   223,   821,   822,
     823,    88,   825,   826,   827,   114,   829,     3,     4,    14,
      15,   227,   189,   190,  2756,   271,    49,   257,   258,    52,
     129,  1968,  1969,  1970,    54,   117,   193,   850,  2770,   852,
      40,  2773,  2774,   120,    14,    15,   118,    83,    26,   862,
     149,    66,    37,   168,    40,   285,   869,   870,   282,    82,
     266,   874,    47,    99,   280,   164,    61,   105,   274,   275,
      90,   202,   271,   168,   173,   174,   889,   890,    37,    33,
      40,   112,     5,  1739,   897,   898,   899,   110,    47,    74,
     113,    61,   905,   124,   261,   194,    89,   910,   328,   329,
     330,    16,   961,  1759,   271,   272,    66,   230,   921,    66,
    1839,   111,    14,    15,    89,    74,  2704,   216,  1774,   850,
     140,  1777,  2710,   281,   937,   111,  1855,   158,   243,  1785,
      93,   230,  1788,   232,   112,   302,    72,   252,   174,    99,
    1796,    42,    43,  1799,    31,   105,   124,   246,   111,     0,
    1806,   111,   251,     4,     4,  1884,   194,     5,   257,    61,
       4,     3,     4,     4,   149,   264,  1111,    14,    15,   129,
       4,     5,   130,     5,   205,     5,     3,     4,     4,  2767,
     216,  2769,     5,   282,     3,     4,     4,   218,     5,   149,
     149,  1004,     5,   193,   189,   190,   295,   296,     5,   298,
     185,  2441,   225,     4,   164,     3,     4,   193,   246,   167,
     341,     4,  1025,    40,    61,   251,   347,     5,   349,   189,
     190,  1034,   149,   186,   244,     4,   185,   205,     3,     4,
      97,     3,     4,   256,   194,  1048,   120,  1050,     4,   338,
     218,     5,  1055,  1056,  1057,    17,     4,     3,     4,   268,
       3,     4,  1065,    19,     4,  1068,     4,  1070,  1987,    12,
       4,    59,     4,     4,     5,   223,   261,   252,   169,   170,
       5,   230,   232,  1086,    40,  1088,   271,   272,     4,  1092,
    1093,   123,   196,  1228,   111,     4,   246,   189,   190,   216,
      56,   261,  1949,   252,  1107,  1108,   197,   257,  1111,  1112,
    1113,   271,   272,    59,   123,     4,  1119,   302,  1121,     3,
       4,  1124,     4,  1126,     3,     4,  1175,     4,   303,    60,
       4,     5,   280,     5,   284,    66,     5,   186,   287,     9,
     257,     5,   302,   192,    11,   101,   296,     5,   298,   299,
       3,     4,   189,   190,   303,   267,    14,    15,   123,    12,
    1163,    40,    35,   119,  1167,     5,  1169,     4,     5,   261,
    1173,  2018,   168,    88,    14,    15,     3,     4,   295,   271,
     272,   230,     4,   114,   604,  1188,     4,  1190,   338,  1192,
    1193,  1194,  1195,     4,     5,  2042,  1199,  1200,   129,   176,
     156,   116,   168,    61,  1207,   195,   255,     3,     4,     5,
     302,  1214,   143,     4,     5,  1218,  1219,  1220,   149,   423,
     424,    61,   195,   154,   261,  1228,  1229,     5,     5,  1232,
       4,   195,   111,   106,   271,   272,   187,   193,   658,  1242,
     187,  1244,    66,   663,  1247,   201,     3,     4,     5,    66,
    2096,   300,   208,   209,   127,   128,    19,    66,   214,  2105,
     223,     5,   135,   219,   224,   302,     5,  1188,  2114,   184,
      82,     3,     4,     4,     4,   206,     4,     9,    10,    11,
     153,     3,     4,     5,   199,     7,     8,  1290,   195,  1292,
     163,     5,  1295,  1296,   225,  1298,   345,  1300,    87,   230,
    2219,   232,    87,  1306,     5,  1308,     3,     4,     5,     4,
    2433,     4,  1315,  2436,  1235,  2438,  2235,     5,     3,     4,
       5,  2240,     7,     8,     5,   256,   257,    82,  2451,  2452,
    1251,   189,   190,   264,     4,    99,     5,   293,   101,   151,
      17,     4,    17,   258,     5,  2468,    17,     4,     4,   189,
     190,   282,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,     4,     4,    87,   299,    97,   342,  1390,   808,  1392,
    1393,   347,   348,   156,   309,     5,   151,     5,     5,     4,
      14,    15,     5,   261,    14,    15,     5,   338,  2255,   221,
     222,  1414,     5,   271,   272,  1418,     4,  2264,   276,    87,
       5,   261,     5,     4,   236,     3,     4,     5,     4,     7,
       8,   271,   272,     5,     5,     5,   276,     4,     4,  1442,
    1443,     5,     5,    12,   302,     4,     4,    61,     4,  1452,
      12,    61,     4,  1456,     4,   165,   219,     5,     5,     4,
    1463,     4,   302,     5,   156,   277,   221,   222,  1389,   156,
    2317,     4,   256,  2320,  1477,   256,  2323,   284,  2325,  1482,
       5,   236,     6,  1486,     4,  1488,  1489,     5,  1491,  1492,
    1493,     5,  1495,     5,     5,  1498,  1499,  1500,  1501,     4,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,     4,   269,  1512,
    1513,  1514,  1515,     5,     5,   269,     5,     5,  2437,  1522,
    1523,     5,   277,  1526,  1527,  1528,    61,     4,  1531,  1532,
       4,  2450,     5,     5,     5,     4,  2455,     5,     5,     5,
       4,  1544,  1545,     5,  1547,  1548,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,    32,   189,   190,     5,     4,   189,
     190,     5,   117,    53,     5,   120,   237,   237,   105,     5,
     105,    40,  1595,  1596,  1597,   237,   105,  1600,   138,     5,
      40,    71,  1605,  1606,   210,  1608,  1609,  1610,   242,  1612,
    1613,  1031,  1615,   210,     5,  1618,  1619,     4,    88,     5,
       5,   156,     5,   210,  1627,     4,   210,     4,   111,     5,
     100,     5,  1635,     5,     4,   111,     5,  1640,  1641,     4,
      22,     5,     5,     4,     4,  1648,     5,   261,   118,     5,
       5,   261,   122,     5,  1657,   113,   191,   271,   272,     4,
       4,   271,   272,     5,   134,  1085,   276,    49,     5,     5,
      52,     5,    12,    55,    12,  1095,    44,     6,    46,     4,
      38,     5,     4,     4,  1605,     4,     4,    38,   302,     5,
    1693,     4,   302,     0,     5,   138,   237,   246,   237,   237,
      82,   121,   167,   173,     4,   206,   241,     4,    76,   244,
     195,     4,  1715,  1716,     4,     4,    84,  1720,   954,     4,
     306,     5,     5,  1726,   182,     5,   184,   185,   110,   187,
     188,   113,   269,   268,     5,     5,   271,     5,     4,     4,
     269,     5,     4,     4,     4,   306,   281,     5,     5,     5,
     237,   237,  1673,     4,     4,   237,     4,   215,     4,     4,
       4,     4,  1683,     4,   223,  1900,     5,  1688,     5,   223,
     306,   223,   306,   223,   142,   233,   234,   223,     5,     5,
       4,     4,  2701,  1203,  1204,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,     5,     5,     5,   274,     5,     4,     4,
    1955,     4,     4,   191,     5,     5,     4,     4,   286,     5,
    1833,     5,  1835,     5,  1837,     5,     4,     6,     5,     4,
     208,   209,     4,   225,     4,     4,     4,   215,   306,   217,
       5,   269,     5,  1856,  1857,  1858,  1859,  1860,  1861,  1862,
    1863,  1864,  1997,    12,     5,     5,     5,     4,   269,     5,
       5,     5,     4,     4,   256,     5,   244,  1880,     4,  1882,
       5,     5,     5,     4,     6,     4,   282,     5,     5,     5,
       5,     4,     4,   350,     5,     5,  1899,  1900,     5,     5,
     282,     4,  1905,     4,   302,     5,     5,     5,     5,     4,
       4,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,     5,     5,  1926,  1927,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,     5,  1939,     5,  1941,  1942,
    1943,   309,     4,  2600,     4,     4,    66,     5,     4,    91,
       4,     4,  1955,  1956,     5,     5,   414,    99,     5,     5,
      80,     5,     4,   105,     4,  1385,     5,   425,     4,    89,
       4,  1391,     5,     5,     4,     4,   434,     4,     4,    99,
       4,     6,     5,     5,   126,  1988,     4,   282,  1991,     4,
    1993,     5,  1995,  1413,  1997,  1998,  1416,  2000,     5,    16,
    1420,     5,     5,     5,  2007,  2008,    23,   149,     4,   129,
       5,  2014,  2669,  2016,     4,   157,     4,  2020,     5,     5,
    2023,  1441,     5,     4,     4,   422,     5,  1447,     5,   149,
       5,     5,     4,     4,     4,  1455,     5,     5,  1458,     5,
       5,     4,   350,     5,   502,   503,     4,  1467,  1468,     4,
       4,     4,   194,     4,     4,     4,     4,   515,  1478,     4,
     202,     4,   520,     4,   350,     4,  2069,     4,     4,  2204,
    2205,   529,  2207,  2208,   194,   350,  2211,  2212,   350,     4,
       4,   350,     4,   350,     5,     5,     4,   350,     5,     4,
       4,   350,     5,     5,     5,     4,  1332,     4,     4,     4,
       4,     4,     4,     4,   246,     4,  2027,     4,  1344,     5,
       4,     4,   232,     5,     5,   257,     5,     5,  2167,     5,
       4,  2726,     5,     5,     4,     4,  1362,  1363,     5,     4,
       4,   273,     5,     4,   288,     4,     4,   257,  2273,   597,
     598,   599,   600,     5,     5,  2066,     4,     4,     4,     4,
     378,     5,     4,  2609,     5,     5,     4,     4,     4,  2498,
       5,     5,     5,     4,  2230,     5,     5,     5,     4,     4,
    2173,     5,     5,     5,  2598,  2669,   296,  2665,   298,    -1,
     726,  2184,  2185,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,    -1,    -1,   348,    -1,    -1,  2200,    -1,   657,
      -1,  2204,  2205,    -1,  2207,  2208,  2679,  2680,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,   156,  2220,  2221,  2222,
      -1,   161,    -1,   240,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2236,  2237,  2238,  2239,    -1,  2241,  2242,
    2243,  2244,  2245,  2246,    -1,  2248,    -1,    -1,  2251,  2252,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2270,    -1,    -1,
    2273,  2274,    -1,    -1,    -1,  2278,    -1,    -1,    -1,  2282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2422,    -1,    -1,
      -1,  2426,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,    -1,    -1,    -1,  2329,  2462,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,
     504,    -1,    -1,   507,   812,    -1,    -1,    -1,   512,    -1,
      -1,    -1,   516,    -1,    -1,    -1,   824,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    -1,  2401,    -1,
      -1,    -1,  2405,   861,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2415,  2416,    -1,    -1,    -1,    -1,  2421,  2422,
      -1,    -1,  2425,  2426,    -1,    -1,   580,    -1,  2431,  1849,
      -1,  2434,  2435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2453,  2454,    -1,  2456,  2457,  2458,  2459,  2460,    -1,  2462,
    2463,    -1,    -1,    -1,  2467,  1885,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   932,    -1,  2479,    -1,    -1,    -1,
      -1,  2484,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,  2499,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1749,    -1,    -1,    -1,    -1,    -1,    -1,
      44,  1757,  1758,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   687,    -1,    -1,  1772,  1773,  2541,    -1,
     694,    -1,    -1,  2546,    -1,  2548,    -1,  1783,  1784,  1007,
      -1,  2554,    -1,    77,    -1,    -1,    -1,    -1,  1794,  1795,
      84,    -1,    -1,    -1,  2567,    -1,    -1,    -1,  1804,  1805,
      94,    95,    -1,    -1,  1810,    -1,    -1,   101,    -1,    -1,
    2629,    -1,  2585,    -1,  1820,    -1,  2589,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,  1059,    -1,    -1,    -1,    -1,  2609,    -1,    -1,    -1,
      -1,  1069,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2633,   155,   156,    -1,    -1,  2638,    -1,  2640,   162,    -1,
      -1,    -1,    -1,    -1,  2647,    -1,    -1,    -1,    -1,  2652,
      -1,    -1,    -1,    -1,  2657,    -1,    -1,   811,   182,    -1,
      -1,    -1,    -1,    -1,   818,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2679,  2680,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,    66,
      -1,    -1,  2705,    -1,    -1,  2708,    -1,    -1,  2711,   863,
     864,    -1,    -1,  1171,   868,    -1,    -1,   871,    -1,  2722,
    2723,  2724,  2725,    -1,    91,    92,    -1,    -1,   882,    -1,
    1188,  2734,    99,    -1,  2737,    -1,    -1,    -1,   105,    -1,
      -1,  2744,    -1,  2746,    -1,   942,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1212,    -1,   280,    -1,    -1,   126,
      -1,    -1,   129,    -1,  1222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2696,    -1,   974,    -1,    -1,
      -1,    -1,   149,  1241,  2019,   309,    -1,    -1,    -1,    -1,
     157,    -1,    -1,  1251,    -1,    -1,    -1,    -1,  1256,    -1,
      -1,  2036,  2037,  2038,    -1,    -1,  2041,  2728,  2043,  2044,
    2731,    -1,  2047,  2048,  2049,    -1,    -1,  2052,  2053,    -1,
      -1,  2056,    -1,  2058,  2059,    -1,  2061,   194,   982,    -1,
      -1,    -1,    -1,    -1,    -1,   202,  2256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2080,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2090,    -1,    -1,    -1,  2094,  2095,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2103,  2104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2112,  2113,    -1,   246,
      -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     257,    -1,  2128,  2129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2139,  2140,    -1,   273,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2150,   282,    -1,   284,    -1,    -1,
      -1,    -1,    -1,  2159,    -1,  2161,    -1,    -1,    -1,    -1,
      -1,  1389,    -1,    -1,  2169,    -1,    -1,  2172,    -1,    -1,
      -1,    -1,  2177,    -1,    -1,  2180,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1419,    -1,    -1,  2199,    -1,    -1,    -1,    -1,    -1,
      -1,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1448,    -1,    -1,  1451,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1461,  1462,    -1,    -1,    -1,    -1,    -1,
      -1,  1469,    -1,    -1,    -1,    -1,    -1,    -1,  1476,    -1,
      -1,    -1,  1176,    -1,    -1,    -1,    -1,    -1,    -1,  2449,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2469,
      -1,  2286,  1206,  2473,    -1,    -1,    -1,  1211,    -1,  1517,
      -1,    -1,  1520,  1521,    -1,    -1,    -1,  1221,    -1,    -1,
      -1,  1529,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2333,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2343,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2352,    -1,    -1,  1316,
    1317,  1318,    -1,    -1,    -1,  2361,    -1,    -1,    -1,  1326,
    1327,  1328,  2368,    -1,    -1,    -1,  1333,  1334,  1335,    -1,
      -1,  1338,  1339,  2379,  1341,  1342,    -1,  1605,    -1,  2385,
      -1,    -1,  2388,    -1,    -1,  2391,    -1,    -1,    -1,    -1,
      -1,    -1,  2397,    -1,    -1,  1623,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1371,  1372,    -1,    -1,  1375,  1376,
      -1,  1639,  2417,    -1,    -1,    -1,    -1,    -1,    -1,  2424,
      -1,    -1,  2427,  2428,    -1,    -1,  1654,    -1,  1656,    -1,
      -1,    -1,    -1,  1661,    -1,    -1,    -1,    -1,  1666,    -1,
      -1,  1669,    -1,  1671,  1672,  1673,  1674,    -1,    -1,  1677,
      -1,    -1,  1680,    -1,    -1,  1683,  1684,    -1,  1686,  1687,
    1688,  1689,    -1,  1691,  1692,    -1,    -1,    -1,    -1,  1697,
    1698,  1699,    -1,    -1,  1702,  1703,    -1,    -1,    -1,    -1,
    1708,  1709,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2507,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2525,
      -1,    -1,    39,    -1,    -1,  2531,    -1,  2717,    -1,  2535,
      -1,    -1,  2538,  1457,    -1,    -1,    -1,  2542,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,  2561,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1518,    -1,    -1,    -1,    -1,    -1,
    1524,    -1,    -1,    -1,  1832,    -1,    56,    -1,  1836,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1848,    -1,    -1,  1851,    -1,    -1,  2631,  2632,    -1,  2634,
      -1,  2636,  2637,    -1,  2639,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,  1881,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1599,   193,  1601,    -1,    -1,
       3,     4,    -1,  1607,    -1,    -1,  2691,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,   214,    -1,    -1,
      -1,    -1,   219,    -1,    -1,    -1,   156,    -1,  1632,  1937,
      -1,    -1,    -1,   230,  1638,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1655,    -1,  2738,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1667,    -1,    -1,    -1,    -1,    -1,    -1,
      19,  1675,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1730,   214,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,   290,    -1,    -1,  1743,    -1,   101,    -1,
      -1,    -1,    -1,  2011,    -1,    -1,  1753,    56,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2055,    -1,    -1,
      -1,    -1,   101,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1825,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1830,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1852,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2171,    -1,   214,  2174,    -1,    -1,    -1,
     219,    -1,    -1,    -1,  2182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1886,  1887,    -1,    -1,    -1,    -1,    -1,    -1,
    2198,    -1,    -1,  2201,    -1,    -1,    -1,    -1,  2206,  1903,
    1904,  2209,  2210,    -1,  1908,  1909,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   161,  1948,    -1,    -1,  1951,  1952,    -1,
      -1,    -1,    -1,    -1,    -1,  1959,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,   156,
    1994,  2299,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2010,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2024,    -1,  2026,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2034,    -1,  2079,    -1,    -1,  2039,    -1,    -1,    -1,    -1,
      -1,  2045,    -1,    -1,    -1,    -1,  2050,    -1,    -1,    -1,
    2054,    -1,   219,  2057,    -1,    -1,  2060,    -1,  2062,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2119,  2120,  2121,  2122,  2123,    -1,  2125,  2126,
      -1,    -1,    -1,  2130,  2131,  2132,  2133,  2134,  2396,  2136,
    2137,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      -1,  2429,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2440,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      22,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2491,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    85,    -1,    -1,  2544,  2545,    -1,  2547,
      -1,    -1,    -1,  2247,  2552,  2553,    -1,    -1,    -1,  2557,
     102,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2590,    -1,    -1,  2332,    -1,    -1,  2335,  2336,
    2337,  2338,  2339,    19,  2341,  2342,    -1,  2344,  2345,  2346,
    2347,  2348,    -1,  2350,  2351,  2613,  2353,  2354,  2355,  2356,
    2357,    -1,  2359,  2360,    -1,  2362,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,  2372,  2373,    -1,    -1,    -1,
      -1,   183,    -1,    -1,    -1,    -1,  2383,    -1,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   225,    -1,   101,    -1,    -1,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2696,    -1,
    2394,    -1,    -1,    -1,    -1,   247,  2400,    -1,    -1,    -1,
    2404,    -1,    -1,    -1,   256,  2713,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2420,    -1,    -1,    -1,
    2728,    -1,    -1,  2731,    -1,    -1,    -1,    -1,    -1,    -1,
     156,   283,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   304,    -1,    -1,    -1,    -1,    -1,    -1,   185,
      -1,    -1,    -1,  2510,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2519,    18,    19,    -1,    -1,    -1,    -1,    -1,
     206,  2528,    -1,  2530,    -1,    -1,  2490,  2534,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2572,    -1,
     115,  2618,    -1,  2620,    -1,  2622,    -1,    -1,  2625,    -1,
    2627,    -1,    -1,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   156,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2661,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   219,    -1,    -1,  2681,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2729,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,    -1,    -1,  2749,    -1,    -1,  2752,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    20,    21,    22,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    48,    49,    55,    -1,    52,
      19,    -1,    -1,    -1,    62,    -1,    59,    -1,    66,    62,
      -1,    -1,    -1,    66,    -1,    -1,    74,    75,    -1,    -1,
      -1,    74,    75,    -1,    82,    83,    -1,    -1,    -1,    82,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,   109,   110,    -1,    -1,   113,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,   129,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,   101,    -1,    -1,    -1,   171,    19,
      -1,    -1,    -1,    -1,    59,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   101,   225,    -1,   156,
     223,    -1,   225,   231,   232,    -1,    -1,    -1,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   247,
      -1,    -1,    -1,    -1,   247,   214,    -1,    -1,   256,   257,
     219,   101,    -1,    -1,   257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   156,    -1,    -1,   282,    -1,   284,   214,    -1,   282,
      -1,   284,   219,    -1,    -1,    -1,    -1,    -1,   296,    -1,
     298,   294,    -1,    -1,    -1,    -1,   304,    -1,    -1,    -1,
      -1,   304,    -1,    -1,    -1,    -1,   156,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     338,    -1,    -1,    -1,   219,   338,    -1,    -1,    -1,    -1,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,    -1,   219,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
      -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,    41,    -1,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    41,    -1,    -1,    44,    -1,    46,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,   125,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    -1,   137,    -1,    -1,    93,   141,    95,    -1,
     144,    -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
     174,    -1,    -1,   177,   178,   179,    -1,    -1,   182,   183,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   196,    -1,   151,   152,    -1,    -1,   155,    -1,
      -1,    -1,   159,    -1,   161,    -1,    -1,    -1,   212,   213,
     214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   226,    -1,   228,   182,   183,    -1,    -1,   186,
      -1,   235,    -1,    -1,    -1,   239,    -1,    -1,   242,   196,
     244,    -1,   246,    -1,    -1,    -1,    -1,   251,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,   213,    -1,    -1,    -1,
     264,    -1,    -1,   220,    -1,    -1,   270,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,   286,    -1,    -1,    -1,    -1,   244,    -1,   246,
      -1,    -1,    -1,   297,    -1,   299,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,   308,   309,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   270,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,   286,
      -1,    -1,    -1,    -1,    -1,   339,    -1,   294,    -1,    -1,
      -1,    -1,   346,    -1,   301,    -1,    -1,    -1,    -1,    -1,
     307,    -1,   309,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   346
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   137,   141,   144,
     148,   149,   155,   161,   174,   177,   178,   179,   182,   183,
     196,   212,   213,   214,   226,   228,   235,   239,   242,   244,
     246,   251,   264,   270,   285,   286,   297,   299,   305,   308,
     309,   339,   346,   352,    66,    12,    53,    71,   100,   118,
     122,   134,   290,   385,     3,     4,   290,   353,   390,   186,
     192,   230,   255,   300,   345,   392,   282,     4,    40,   111,
     193,   244,   397,    28,   150,   172,   176,   227,   266,   274,
     275,   367,   399,    83,    99,   174,   216,   251,   400,    40,
      59,   111,   193,   286,   353,   409,     4,    19,    40,    56,
     101,   119,   156,   193,   201,   208,   209,   214,   219,   293,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   342,
     347,   348,   355,   363,   364,   365,   411,    33,   412,   355,
      44,    46,    76,    84,   142,   191,   208,   209,   215,   217,
     244,   309,   354,   144,   414,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   141,   151,   152,   155,   159,   161,   182,   183,   186,
     196,   212,   213,   220,   244,   246,   270,   285,   286,   294,
     301,   307,   309,   346,   415,    83,    99,   457,    19,    44,
      77,    84,    94,    95,   101,   124,   141,   155,   156,   162,
     182,   219,   270,   280,   309,   460,   355,    88,   116,   184,
     199,   258,   299,   309,   466,    16,    26,   112,   124,   158,
     205,   218,   469,   229,   487,     5,    66,    88,   139,   299,
     346,   355,   488,     5,   489,    57,   224,   239,   300,   505,
      64,    66,   181,   238,   280,   289,   524,    66,   202,   341,
     347,   349,   525,    39,   193,   230,   290,   353,   363,   365,
     526,     5,   299,   309,   355,   529,    70,   168,   243,   252,
     530,     4,   531,    88,   505,    61,   280,   303,   538,   193,
     290,   353,   539,    26,   112,   124,   205,   218,   541,    50,
      99,   108,   136,   292,   556,   557,     4,    37,    47,    74,
     149,   185,   230,   252,   287,   303,   380,     4,   124,   204,
     558,   290,   353,   560,    16,    23,   240,   242,   364,   561,
     229,   565,   290,   353,   566,     0,     5,    59,   353,   386,
     267,     5,     4,   290,   353,   387,     5,    32,   279,   388,
     123,   353,   389,   123,   353,   391,   353,     4,   192,   248,
     395,   186,   300,   344,   345,   353,   394,   355,   138,   175,
     393,   196,   353,    78,   171,   248,   353,   396,     5,   353,
       4,   244,   398,   353,   353,     5,   225,   401,    31,   402,
       5,   403,     5,   407,     5,    31,   408,   353,     9,    10,
      11,   353,   359,   360,   361,   362,   353,   353,    40,   111,
     193,   353,   410,   353,   193,   363,   365,   353,    35,   106,
     127,   128,   135,   153,   163,   369,   353,     4,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   117,    66,
      53,    71,    88,   100,   118,   122,   134,   173,   416,   118,
     418,   186,   192,   230,   255,   300,   344,   345,   353,   404,
     419,   282,   422,   168,   423,   168,   176,   425,    65,    66,
      69,    91,   168,   185,   206,   270,   338,   363,   427,   353,
     365,   430,    59,   286,   363,   431,   278,   363,   365,   432,
      33,   433,   363,   365,   434,     4,   363,   365,   435,    45,
      59,    81,   100,   117,   120,   146,   147,   198,   207,   267,
     268,   338,   439,   211,   302,   445,     5,    89,     6,    88,
     120,   437,     5,    65,   365,   436,    16,   505,    66,   181,
     238,   280,   289,   446,    66,   230,   447,   281,    61,   280,
     303,   448,    21,   134,   237,   265,   449,    37,    47,    74,
     149,   185,   252,   303,   450,   365,    89,    16,   195,   455,
     363,   458,    72,   461,    31,   462,    44,    87,   191,   463,
     149,   216,   257,   295,   464,   363,    18,    58,   115,   172,
     286,   363,   465,     4,   192,   468,     5,     4,     6,   120,
     353,     4,     5,   244,   470,     5,   472,     5,   117,   191,
     244,   268,   473,    93,   111,   186,   486,     5,   484,     5,
     268,   485,     4,     5,   355,   355,   353,   353,     5,     4,
       5,    60,    66,    73,    75,    80,    83,    89,    99,   105,
     114,   129,   149,   164,   173,   174,   194,   216,   230,   232,
     246,   251,   257,   264,   282,   295,   296,   298,   338,   490,
       5,     4,   203,   238,   343,   366,   353,   363,   353,     5,
     353,    40,   111,   353,   528,   355,   353,   363,   365,   527,
     353,   369,   353,     4,   364,    54,    90,   140,   244,   532,
       4,     4,   353,     4,   149,   257,   533,     5,   363,     4,
      40,   111,   353,   540,   353,    97,    61,   120,   244,   271,
     542,   120,   555,    61,   117,   120,   156,   191,   241,   244,
     268,   271,   281,   544,   545,    61,   120,   271,   554,     5,
       4,    34,   107,   202,   537,    66,   355,   381,    66,   355,
     382,    66,   355,   383,    13,   188,   536,   353,   353,   223,
     353,   384,   353,   268,     4,   353,   353,     4,   564,     4,
     284,   562,     4,   284,   563,     4,   369,   123,   353,   567,
     353,   353,     4,     5,   353,    12,   353,   353,   353,    30,
      94,   162,   248,   253,   368,   368,     4,   196,   353,   353,
       4,     4,     4,   353,   353,   353,   353,     4,     4,     5,
       5,   363,     5,   353,   353,   359,   361,   361,   363,   353,
     353,   353,   353,   353,   353,   353,   363,   365,   362,   353,
     353,   362,   353,     5,   267,   103,   186,   417,   192,   248,
     420,   168,    78,   171,   248,   421,   138,   175,   405,   405,
       4,   424,     4,   426,   192,   255,   428,   176,   429,   168,
     369,   353,   353,   363,   363,   369,   369,   369,   363,   369,
     353,   363,   442,     4,   365,   440,   195,     4,   165,   309,
     441,   195,   363,   131,   290,   444,     5,     5,     4,   195,
     353,     4,     5,    60,    66,   114,   129,   143,   149,   154,
     206,   225,   230,   232,   256,   257,   264,   282,   338,   499,
     365,   187,   187,    66,   451,    66,   452,    66,   453,   223,
     454,   353,     5,   224,   456,   364,   369,     5,   363,   363,
     363,   363,     4,   355,     4,     4,   195,   353,    14,    15,
      61,   189,   190,   261,   271,   272,   302,    87,     5,     5,
      14,    15,    61,   189,   190,   261,   271,   272,   276,   302,
      87,   156,   161,   364,   476,   481,    87,   156,     5,   474,
       4,     4,    14,    61,   189,   261,   271,   302,     5,     5,
       4,   353,   364,    20,    21,    22,    48,    49,    52,    55,
      62,    66,    74,    75,    82,    83,    99,   105,   109,   110,
     113,   129,   149,   171,   194,   223,   225,   231,   232,   246,
     247,   256,   257,   282,   284,   296,   298,   304,   338,    66,
      80,    89,    99,   129,   149,   194,   232,   257,   296,   298,
       4,    30,   160,   211,   237,   493,     5,    63,   104,   234,
     249,   250,   340,   341,   498,    99,   491,    17,    40,   111,
     193,   497,     4,     5,    17,   210,   291,   353,   257,   498,
     506,   124,   498,   507,    36,    40,   111,   132,   193,   290,
     353,   508,   363,   355,    91,    99,   105,   126,   149,   157,
     194,   202,   246,   257,   273,   511,    40,   111,   193,     5,
     283,    17,   210,   291,   515,   284,   355,   516,     5,    99,
     105,   299,    17,    17,     4,   353,   353,   353,   353,   353,
     353,   369,   353,   353,   362,   353,     4,   369,     4,    40,
     111,   193,   262,   534,    40,   111,   193,   262,   535,     4,
      97,     5,     5,    87,     4,     5,     5,    87,     5,   545,
      61,   120,   156,   271,   549,    61,   120,   271,   553,    87,
     156,    61,   120,   271,   547,     4,    61,   120,   271,   546,
       5,     5,     4,     4,     5,     5,     5,   353,   353,   353,
       4,   353,   559,   353,   353,     6,   364,     4,     5,     4,
       4,     5,     4,    97,   259,   370,   353,   353,    12,     5,
      12,   353,   353,    12,     4,    12,     4,     4,   353,   353,
     353,     4,   355,     4,     4,   369,   363,   369,   353,   353,
     353,   363,   353,   362,   353,   353,     5,     5,   353,   365,
     353,   363,   353,   369,   369,   370,   370,   370,   369,   362,
     353,   369,   353,   133,   245,   356,   443,   165,     5,     4,
     369,   156,   156,     4,     5,     4,     4,   353,   438,   353,
      20,    21,    22,    48,    49,    52,    59,    62,    66,    74,
      75,    82,   109,   110,   113,   129,   149,   171,   180,   223,
     225,   231,   232,   247,   257,   282,   284,   294,   304,   338,
      66,   129,   154,   232,   282,    30,   160,   211,   237,   500,
     353,   206,   353,   501,    17,   353,   256,   511,   256,   206,
     353,   502,   284,   503,    17,    98,   353,   353,     5,   370,
      56,   363,     4,     5,   467,   353,     5,     5,     5,   156,
     183,   374,   374,   164,   263,   372,     4,     4,     5,     5,
     471,   269,   269,     5,     5,     5,    17,   158,   373,   373,
     372,     4,     4,   372,     5,     5,   475,   161,   337,   364,
     479,     5,   478,     5,     5,   482,     5,   483,     5,    14,
      15,    61,   189,   190,   261,   271,   272,   276,   302,     4,
       4,     5,     5,   374,   372,     4,     5,     5,   369,    82,
     151,   221,   222,   236,   277,   377,     7,     8,   353,   358,
     237,   121,   237,   237,   105,    40,    66,    99,   105,   111,
     129,   149,   164,   194,   232,   246,   257,   284,   296,   298,
     299,   338,   492,   121,   237,     5,    27,   166,   237,   280,
     138,   105,    22,    49,    52,    82,   110,   113,   225,   256,
      22,    49,    52,    55,    82,   110,   113,   225,   256,   282,
      40,   121,   237,   237,   105,     5,   210,    27,   223,    36,
     132,   290,   353,   260,   267,   121,   242,   363,   511,    40,
     130,   223,   280,   242,   210,     5,     5,   246,    27,   223,
       4,     5,     5,   210,    36,   132,   290,   353,   511,   210,
     355,     4,     4,   353,     5,   302,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   109,   110,
     113,   171,   183,   225,   231,   247,   256,   283,   284,   304,
     349,   494,   353,   353,   353,   353,   353,   498,   363,     5,
       4,     5,   353,   353,   363,   353,   355,   353,   353,   498,
       5,   353,   353,   355,     5,    17,     5,     5,   353,   353,
     362,   353,   353,     4,   353,   353,   111,   353,   353,   111,
       4,    42,    43,   169,   170,   197,   379,   379,    61,   120,
     271,   543,   379,     5,    61,   120,   271,   548,     5,     5,
      61,   120,   271,   550,     4,     5,     5,     4,    61,   120,
     271,   552,    61,   120,   271,   551,     5,     5,     4,     5,
       5,     4,   379,   379,   379,   353,   353,   353,     4,   363,
     353,   364,   369,     5,     5,    12,   353,   363,   365,   353,
      12,   353,   353,   353,    59,   353,     6,     4,   353,   353,
      46,   270,   406,     5,   355,   355,   369,   353,     4,     4,
       4,   369,   363,   353,   353,   353,   353,   369,   363,   370,
     362,   353,     4,   370,   353,    38,    38,     4,   365,     5,
      24,    25,    97,   371,     4,   363,   353,   353,     4,   353,
       5,    82,   151,   221,   222,   236,   277,   363,   365,   237,
     121,   237,   237,    21,   237,   363,   121,   237,    27,   166,
     237,   280,   138,    21,   237,   121,   237,   237,    21,   237,
      27,   167,   223,   167,   260,   267,   121,   167,   223,   288,
     511,   130,   167,   223,   280,     4,   246,    27,   167,   223,
     511,   206,   353,   353,   353,   353,   353,   353,   195,   353,
     353,    20,   233,   459,     4,     4,   353,   374,   374,   374,
       4,   374,   374,   374,    14,    15,    61,   189,   190,   261,
     271,   272,   302,   373,   374,   374,   374,   374,   374,     4,
     374,   374,     4,   373,    14,    15,    61,   189,   190,   261,
     271,   272,   302,     5,   477,     5,   480,     5,     5,    14,
      15,    61,   189,   190,   261,   271,   272,   276,   302,     5,
      14,    15,    61,   189,   190,   261,   271,   272,   276,   302,
       5,    14,    15,    61,   189,   190,   261,   271,   272,   276,
     302,    14,    15,    61,   189,   190,   261,   271,   272,   302,
     269,     5,     5,     5,   373,   373,   372,     4,     4,   372,
       5,     4,     4,   374,   374,     4,   374,   374,     5,   355,
     363,   365,     5,   353,   355,   353,     5,   353,     5,   358,
     105,   194,   246,   105,   194,   246,     5,   355,   353,   355,
       5,   353,   363,   355,     5,   358,   237,   237,    21,   237,
      21,   237,   237,    21,   237,   306,   306,     4,     4,     4,
     492,     4,     4,     4,   306,   306,     4,     5,     4,   355,
     353,     5,   353,     5,   358,   355,   363,   363,   353,    27,
      48,    51,    62,    85,   102,   349,   375,     4,   355,   353,
     369,   355,     5,   363,   363,   353,   355,   355,   363,   363,
     353,   355,   353,     5,   353,   223,   223,   353,   353,   223,
     353,   223,   353,   353,   504,   512,   353,   223,   223,   353,
     353,   353,   353,   353,   353,   353,   353,     5,   302,   353,
     495,   353,   353,   223,   353,   353,   353,   353,   363,   369,
       5,   363,   363,   353,   353,   369,   353,   353,   353,   363,
     353,   353,     5,     4,   353,   353,   353,   353,     5,     5,
       4,   379,     5,     5,     4,     4,     4,     5,     5,     4,
       4,     5,     5,     4,     5,     5,     4,   353,   353,   353,
     369,   353,   369,   353,   363,   365,   353,   369,   353,   353,
     353,   353,   353,     5,   353,     4,     6,   353,   353,     4,
     363,   353,   369,   176,   367,   353,   367,   370,   369,   363,
     353,   353,     4,   353,   363,   369,   363,   353,     4,   363,
       5,     5,     5,     5,   363,   369,   363,   363,   363,   363,
     365,   363,   369,   363,   363,   363,   365,   363,   363,   363,
     363,   365,   363,   363,   363,   353,   363,   363,   363,   363,
     363,   363,   363,   353,   353,     4,   353,     5,     4,   353,
     374,     5,     5,     5,   372,     4,     4,     5,   374,   373,
       4,   374,     5,     5,     5,   373,   373,   372,     4,     4,
       5,    14,    15,    61,   189,   190,   261,   271,   272,   302,
      14,    15,    61,   189,   190,   261,   271,   272,   302,    14,
      15,    61,   189,   190,   261,   271,   272,   302,   269,     5,
       5,     5,   373,   373,   372,     4,     4,   372,     5,   269,
       5,     5,     5,   373,   373,   372,     4,     4,   372,     5,
     269,     5,     5,     5,   373,   373,   372,     4,     4,   372,
       5,     5,     5,     5,   373,   373,   372,     4,     4,     5,
     373,     4,     4,   373,     4,     4,   374,     5,   369,   363,
     353,   353,   363,   353,     5,   358,     5,   363,   355,     5,
     363,   369,     5,   358,   353,   353,   353,   353,   353,   353,
     353,   353,   353,     4,     4,     5,     4,     4,   353,   363,
     353,     5,   358,   355,   369,   369,   353,   362,   369,   369,
     353,   369,   369,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,    55,    66,    92,   129,   282,   284,   338,
     509,   510,   511,   522,   523,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   363,     5,   353,
     353,   353,   353,     4,     4,   369,   370,     4,   496,   369,
     369,   362,   353,     4,   369,     4,   379,   379,   379,   358,
     353,   353,   353,   369,   353,   362,   353,   353,    12,     5,
       5,     4,   353,   353,     4,   369,   363,   353,   353,   370,
     371,   353,     5,   353,   369,   369,   365,     5,     5,     5,
       5,   369,   371,   371,   371,   369,   371,   370,   371,   371,
     369,   371,   371,   371,   369,   371,   371,   369,   363,   371,
     369,   371,   371,   369,   371,   369,     4,   365,     5,   353,
       4,   374,   373,     4,   373,     5,     5,     5,   373,   373,
     372,     4,     4,     5,     5,     5,     5,   373,   373,   372,
       4,     4,     5,     5,     5,     5,   373,   373,   372,     4,
       4,     5,   373,   374,   374,   374,   374,   374,     4,   374,
     374,     4,   373,   373,   374,   374,   374,   374,   374,     4,
     374,   374,     4,   373,   373,     4,     4,   373,     4,   373,
     373,     4,     4,     4,   364,   371,     4,   363,   371,   353,
     363,     4,   371,   371,   363,     4,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   363,   371,   353,
     363,     4,   362,   362,   363,   362,   362,   363,   363,   362,
     362,   353,   353,   353,   353,   353,   353,   358,   353,   353,
     353,   350,   350,   350,   350,   350,   350,   350,   510,   350,
     358,   353,   353,   353,   353,   358,   353,   353,   353,   353,
     353,   353,   369,   353,   302,   357,   358,   353,   353,   370,
     355,     4,     4,   370,     4,   353,   362,   353,    59,   353,
       5,     5,   353,     4,   367,   371,     5,     4,     4,     5,
     363,     5,   370,   371,   370,   370,   370,     5,     4,   353,
     374,   373,   374,   374,   374,   374,   374,     4,   374,   374,
     373,   374,   374,   374,   374,   374,     4,   374,   374,   373,
     374,   374,   374,   374,   374,     4,   374,   374,   373,   374,
     373,     4,   374,   374,   373,     4,   374,   373,     4,   373,
     373,   369,   363,   371,     4,   369,   353,   369,   353,   353,
     353,   371,     4,   369,   353,   362,   371,   353,   362,   371,
     371,   363,   353,     4,   376,   376,   353,   353,   376,   358,
     376,   512,   363,   492,     5,     4,     5,     5,     5,     4,
     355,   358,   376,   376,   353,   353,   358,   353,   353,   353,
     353,   353,   362,   353,     5,   512,   353,   376,   355,   513,
     514,     5,   355,     4,     5,   353,     5,     4,     6,   353,
      32,   279,   413,     5,   369,   363,   413,   353,   373,   374,
     373,   374,   373,   374,   374,   373,   374,   373,   373,   353,
     371,   363,   363,   353,   363,   353,   363,   363,   353,   363,
     371,     4,   512,   512,   357,   353,   512,     4,   512,   369,
       5,     4,     4,   512,   512,   357,   353,     4,   512,   512,
     353,   363,   512,   512,   512,   513,   519,   520,   511,   517,
     518,     4,     5,     5,     6,     4,   186,   300,   345,   353,
     404,   363,    32,   279,   378,     4,   374,   374,   374,   374,
     374,   364,   371,   371,   353,   371,     4,   371,   371,   353,
     371,   353,   512,   512,     4,   353,   512,     5,   353,   512,
       4,   353,   512,   369,   519,   521,   522,   350,   518,     5,
       5,     4,   353,   405,   353,   405,   369,   371,     4,   363,
     365,     4,   358,   357,   353,   353,   357,   353,   363,   522,
     355,     5,     5,   353,   353,   353,   353,   378,     5,   363,
     365,   369,   363,   365,   512,   353,     4,   512,   353,   371,
       5,     5,   353,     5,   353,   369,   369,     4,   512,     4,
       5,     5,     5,   357,   357,   512,   512,   512
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
#line 457 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 459 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 7:
#line 460 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 9:
#line 462 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 16:
#line 469 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 21:
#line 474 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 22:
#line 475 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 477 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 31:
#line 484 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 35:
#line 488 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 491 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 496 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 498 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 500 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 502 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 509 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 510 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 513 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 514 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 515 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 516 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 517 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 518 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 519 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 520 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 521 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 522 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 523 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 524 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 527 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 69:
#line 529 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 70:
#line 530 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 531 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 532 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 534 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 74:
#line 535 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 536 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 537 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 540 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 78:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 542 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 80:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 81:
#line 544 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 82:
#line 547 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 83:
#line 548 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 84:
#line 551 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 85:
#line 552 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 553 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 556 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 88:
#line 559 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 562 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 566 "frame/parser.Y"
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
#line 578 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
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
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 94:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 95:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 96:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 97:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 98:
#line 603 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 99:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 100:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 101:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 102:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 103:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 104:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 105:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 106:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 107:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 108:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 109:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 110:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 111:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 112:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 113:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 114:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 115:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 116:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 117:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 118:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 119:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 120:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 121:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 122:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 123:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 124:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 125:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 126:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 127:
#line 636 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 128:
#line 637 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 129:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 130:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 131:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 132:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 133:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 134:
#line 647 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 135:
#line 648 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 136:
#line 649 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 137:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 138:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 139:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 140:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 141:
#line 656 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 142:
#line 657 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 143:
#line 658 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 144:
#line 659 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 145:
#line 660 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 146:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 147:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 148:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 149:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 150:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 151:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 152:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 153:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 154:
#line 673 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 674 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 675 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 678 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 679 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 680 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 681 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 689 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 690 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 691 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 709 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 710 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 715 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 727 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 728 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 738 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 739 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 740 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 741 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 743 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 746 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 747 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 750 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 751 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 754 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 755 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 758 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 760 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 213:
#line 764 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 214:
#line 765 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 217:
#line 768 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 219:
#line 770 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 220:
#line 773 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 221:
#line 774 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 222:
#line 777 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 223:
#line 778 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 224:
#line 780 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 225:
#line 782 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 226:
#line 783 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 784 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 228:
#line 786 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 229:
#line 788 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 230:
#line 791 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 231:
#line 792 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 232:
#line 795 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 233:
#line 797 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 234:
#line 800 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 235:
#line 802 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 236:
#line 805 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 237:
#line 809 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 238:
#line 810 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 241:
#line 815 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 242:
#line 816 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 246:
#line 822 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 247:
#line 823 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 249:
#line 826 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 250:
#line 831 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 251:
#line 832 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 252:
#line 835 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 253:
#line 836 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 254:
#line 837 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 255:
#line 838 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 256:
#line 839 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 257:
#line 842 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 258:
#line 843 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 259:
#line 844 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 260:
#line 847 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 261:
#line 849 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 262:
#line 854 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 263:
#line 859 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 264:
#line 866 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 265:
#line 868 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 266:
#line 869 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 268:
#line 871 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 269:
#line 875 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 270:
#line 877 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 271:
#line 879 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 272:
#line 880 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 278:
#line 891 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 279:
#line 893 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 280:
#line 895 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 282:
#line 904 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 283:
#line 907 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 284:
#line 908 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 285:
#line 911 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 286:
#line 912 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 287:
#line 914 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 288:
#line 920 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 289:
#line 921 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 290:
#line 922 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 291:
#line 923 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 292:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 293:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 294:
#line 930 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 939 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 299:
#line 941 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 944 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 301:
#line 946 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 302:
#line 949 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 304:
#line 951 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 305:
#line 952 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 306:
#line 953 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 308:
#line 958 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 959 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 310:
#line 960 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 961 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 965 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 313:
#line 967 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 314:
#line 968 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 315:
#line 969 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 317:
#line 974 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 318:
#line 976 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 319:
#line 978 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 320:
#line 981 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 321:
#line 984 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 322:
#line 985 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 323:
#line 986 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 325:
#line 992 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 339:
#line 1006 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 342:
#line 1009 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 343:
#line 1011 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 346:
#line 1014 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 347:
#line 1015 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 350:
#line 1018 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 351:
#line 1019 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 353:
#line 1022 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 355:
#line 1024 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 357:
#line 1026 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 359:
#line 1028 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 360:
#line 1030 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 361:
#line 1032 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 363:
#line 1034 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 364:
#line 1037 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 365:
#line 1038 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 366:
#line 1039 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 367:
#line 1040 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 368:
#line 1041 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 369:
#line 1042 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 371:
#line 1044 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 372:
#line 1047 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 373:
#line 1048 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 374:
#line 1049 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 375:
#line 1052 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 376:
#line 1055 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 377:
#line 1057 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 378:
#line 1059 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 379:
#line 1060 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 380:
#line 1061 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 382:
#line 1063 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 384:
#line 1066 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 385:
#line 1072 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 386:
#line 1073 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 387:
#line 1076 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 388:
#line 1077 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 389:
#line 1078 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 390:
#line 1081 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 391:
#line 1082 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 393:
#line 1088 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 394:
#line 1090 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 395:
#line 1092 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 396:
#line 1095 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 398:
#line 1097 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 399:
#line 1101 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 400:
#line 1105 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 402:
#line 1107 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 403:
#line 1108 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 404:
#line 1109 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 405:
#line 1110 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 406:
#line 1111 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 408:
#line 1113 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 409:
#line 1114 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 410:
#line 1117 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 411:
#line 1118 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 412:
#line 1119 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 413:
#line 1122 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 414:
#line 1123 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 415:
#line 1127 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 416:
#line 1129 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 417:
#line 1137 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 418:
#line 1139 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 420:
#line 1144 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 421:
#line 1146 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1147 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 423:
#line 1150 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 424:
#line 1153 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 425:
#line 1155 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 426:
#line 1159 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 427:
#line 1161 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 428:
#line 1164 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 429:
#line 1168 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 430:
#line 1169 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 431:
#line 1171 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 432:
#line 1174 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 433:
#line 1175 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 435:
#line 1179 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 436:
#line 1180 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 437:
#line 1181 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 438:
#line 1184 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 439:
#line 1186 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 440:
#line 1187 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 442:
#line 1189 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 446:
#line 1193 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 447:
#line 1194 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 448:
#line 1195 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 449:
#line 1197 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 451:
#line 1199 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 452:
#line 1202 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 453:
#line 1204 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 454:
#line 1206 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1207 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 456:
#line 1208 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 457:
#line 1209 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 459:
#line 1216 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 460:
#line 1218 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 461:
#line 1221 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 462:
#line 1224 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 463:
#line 1226 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 464:
#line 1228 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 465:
#line 1230 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (5)].real), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 466:
#line 1233 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 467:
#line 1234 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 468:
#line 1235 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 469:
#line 1238 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 473:
#line 1242 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 475:
#line 1248 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 476:
#line 1249 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 477:
#line 1250 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 478:
#line 1253 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 479:
#line 1254 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 480:
#line 1255 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 481:
#line 1256 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 482:
#line 1257 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 483:
#line 1258 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 488:
#line 1265 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 489:
#line 1266 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 490:
#line 1267 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 491:
#line 1270 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 492:
#line 1271 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 493:
#line 1274 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 494:
#line 1275 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 495:
#line 1278 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 496:
#line 1279 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 497:
#line 1282 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 498:
#line 1283 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 499:
#line 1286 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 501:
#line 1288 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 502:
#line 1291 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 503:
#line 1292 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 505:
#line 1296 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 506:
#line 1300 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 507:
#line 1303 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 508:
#line 1310 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 509:
#line 1311 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 510:
#line 1314 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 513:
#line 1317 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 514:
#line 1318 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 515:
#line 1319 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 516:
#line 1320 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 518:
#line 1322 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 519:
#line 1323 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 520:
#line 1324 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 522:
#line 1326 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 523:
#line 1327 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 524:
#line 1328 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 525:
#line 1329 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1333 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 528:
#line 1336 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 529:
#line 1337 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 530:
#line 1340 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 531:
#line 1341 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 532:
#line 1342 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 533:
#line 1343 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 534:
#line 1346 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 535:
#line 1347 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 536:
#line 1348 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 537:
#line 1349 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 538:
#line 1352 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 539:
#line 1353 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 540:
#line 1354 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 541:
#line 1355 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 542:
#line 1356 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 543:
#line 1357 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1360 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 545:
#line 1361 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 546:
#line 1362 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 549:
#line 1366 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 550:
#line 1367 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 551:
#line 1370 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 552:
#line 1373 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 553:
#line 1374 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 554:
#line 1378 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 555:
#line 1380 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 556:
#line 1381 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 563:
#line 1393 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1395 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1397 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1398 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 567:
#line 1400 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 568:
#line 1402 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 569:
#line 1404 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1406 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1408 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1412 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1413 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1414 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1415 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 577:
#line 1416 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 578:
#line 1418 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 583:
#line 1428 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1430 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 585:
#line 1432 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 588:
#line 1438 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1440 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 590:
#line 1442 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 591:
#line 1445 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1447 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1449 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 599:
#line 1457 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1458 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 601:
#line 1459 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1460 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1461 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 604:
#line 1462 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1464 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 606:
#line 1466 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 607:
#line 1467 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1468 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1469 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 610:
#line 1472 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1473 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1474 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1475 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1476 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1478 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 616:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 624:
#line 1492 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1495 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 630:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 640:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 641:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 650:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 653:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 654:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1595 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 659:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 667:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 669:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 670:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 673:
#line 1642 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1643 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 678:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 680:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 681:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 684:
#line 1657 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1658 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1659 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 693:
#line 1670 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 695:
#line 1673 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 696:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 697:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1682 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 700:
#line 1683 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 701:
#line 1686 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 702:
#line 1687 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 703:
#line 1688 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 704:
#line 1691 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 705:
#line 1698 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 706:
#line 1699 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 707:
#line 1700 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 708:
#line 1701 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1702 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 710:
#line 1703 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 711:
#line 1704 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 712:
#line 1708 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 714:
#line 1716 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 715:
#line 1717 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 716:
#line 1719 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 717:
#line 1721 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 718:
#line 1722 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 721:
#line 1724 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 722:
#line 1725 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 723:
#line 1726 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 725:
#line 1728 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 726:
#line 1729 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 727:
#line 1731 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 728:
#line 1733 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 729:
#line 1735 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 730:
#line 1738 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1740 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 732:
#line 1741 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1746 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 735:
#line 1749 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 736:
#line 1751 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 737:
#line 1754 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 738:
#line 1757 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1760 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 740:
#line 1763 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 741:
#line 1767 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 742:
#line 1771 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 743:
#line 1776 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 744:
#line 1780 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 745:
#line 1781 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1783 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 747:
#line 1784 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 748:
#line 1786 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1788 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 750:
#line 1790 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1792 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1793 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1795 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 754:
#line 1797 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 755:
#line 1800 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 756:
#line 1804 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 757:
#line 1808 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1810 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1812 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1814 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1816 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1818 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1820 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1822 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1824 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1826 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 767:
#line 1828 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 768:
#line 1830 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 769:
#line 1832 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1834 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1839 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 774:
#line 1840 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1841 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1843 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 777:
#line 1845 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 778:
#line 1846 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 779:
#line 1847 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 780:
#line 1848 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 784:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 785:
#line 1860 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 786:
#line 1863 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 787:
#line 1867 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 788:
#line 1871 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 789:
#line 1876 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 790:
#line 1880 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 791:
#line 1881 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 792:
#line 1882 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 793:
#line 1884 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 794:
#line 1886 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 795:
#line 1890 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 796:
#line 1891 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 797:
#line 1892 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 798:
#line 1894 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 799:
#line 1897 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 800:
#line 1900 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 801:
#line 1903 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 802:
#line 1904 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 803:
#line 1906 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1909 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1913 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1915 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1916 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 808:
#line 1918 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 809:
#line 1921 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1924 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1925 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1927 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 813:
#line 1928 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 814:
#line 1929 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1931 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 816:
#line 1932 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 817:
#line 1934 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1937 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 819:
#line 1940 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 820:
#line 1942 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 821:
#line 1943 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 825:
#line 1948 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 826:
#line 1949 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 827:
#line 1951 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 828:
#line 1953 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 829:
#line 1955 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 830:
#line 1956 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1964 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 837:
#line 1966 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 838:
#line 1967 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 839:
#line 1968 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 841:
#line 1970 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 842:
#line 1971 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 843:
#line 1972 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 844:
#line 1973 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 849:
#line 1980 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1981 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1983 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 852:
#line 1984 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 853:
#line 1985 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 854:
#line 1986 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 855:
#line 1987 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1989 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 857:
#line 1990 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 858:
#line 1991 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 859:
#line 1992 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 860:
#line 1993 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 861:
#line 1994 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 862:
#line 1997 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 864:
#line 1999 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 865:
#line 2000 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 866:
#line 2001 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 867:
#line 2002 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 868:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 869:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 870:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 871:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 872:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 873:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 874:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 875:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 876:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 877:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 878:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 879:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 880:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 881:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 882:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 883:
#line 2020 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 884:
#line 2021 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 885:
#line 2022 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 886:
#line 2023 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 887:
#line 2024 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 888:
#line 2026 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 889:
#line 2036 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 890:
#line 2044 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 891:
#line 2053 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2061 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2068 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2075 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2083 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2091 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2096 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2101 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2106 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2111 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2116 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2121 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2126 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2135 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2145 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2155 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2164 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2172 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2182 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2192 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2202 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2214 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2223 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2227 "frame/parser.Y"
    {fr->markerCreateMaskCmd();;}
    break;

  case 916:
#line 2232 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 917:
#line 2234 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 918:
#line 2236 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 919:
#line 2241 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 920:
#line 2244 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 921:
#line 2248 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 922:
#line 2250 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 923:
#line 2251 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 924:
#line 2254 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 925:
#line 2255 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 926:
#line 2256 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 927:
#line 2257 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 928:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 929:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 930:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 932:
#line 2264 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 933:
#line 2265 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 934:
#line 2266 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 935:
#line 2267 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 936:
#line 2268 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 937:
#line 2271 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2273 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 939:
#line 2275 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 940:
#line 2277 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 941:
#line 2279 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 942:
#line 2281 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 943:
#line 2283 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 945:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 946:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 947:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2291 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 949:
#line 2293 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 950:
#line 2295 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2296 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 952:
#line 2297 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 953:
#line 2299 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2304 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2306 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2308 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 959:
#line 2310 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 960:
#line 2311 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2314 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2315 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2316 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2317 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 966:
#line 2319 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2321 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2322 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2324 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2326 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2328 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2329 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 973:
#line 2331 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2333 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 976:
#line 2335 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 977:
#line 2336 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2340 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 980:
#line 2343 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 981:
#line 2346 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2347 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2348 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2350 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2353 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2356 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 987:
#line 2357 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2358 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2361 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 992:
#line 2365 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 994:
#line 2368 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 996:
#line 2370 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2372 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2374 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2378 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2382 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1005:
#line 2383 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1006:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1007:
#line 2387 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1008:
#line 2388 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1009:
#line 2389 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1011:
#line 2391 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1013:
#line 2395 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1014:
#line 2396 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1015:
#line 2397 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1016:
#line 2398 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1017:
#line 2399 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1018:
#line 2400 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1019:
#line 2402 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1020:
#line 2403 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1021:
#line 2405 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1022:
#line 2408 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1023:
#line 2409 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1024:
#line 2410 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1025:
#line 2411 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1026:
#line 2414 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1027:
#line 2415 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1028:
#line 2418 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1029:
#line 2419 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1030:
#line 2422 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1031:
#line 2423 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1032:
#line 2426 "frame/parser.Y"
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

  case 1033:
#line 2439 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1034:
#line 2440 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1035:
#line 2444 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1036:
#line 2445 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1037:
#line 2449 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1038:
#line 2454 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1039:
#line 2459 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1040:
#line 2465 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1041:
#line 2467 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1042:
#line 2470 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1043:
#line 2472 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1044:
#line 2475 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1045:
#line 2478 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1046:
#line 2479 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1047:
#line 2480 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1048:
#line 2481 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1049:
#line 2482 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1050:
#line 2483 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1051:
#line 2485 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1054:
#line 2492 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1055:
#line 2493 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1056:
#line 2494 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1057:
#line 2495 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1058:
#line 2496 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1059:
#line 2497 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1062:
#line 2502 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1063:
#line 2503 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1064:
#line 2504 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1065:
#line 2505 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1066:
#line 2506 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1068:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1069:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1070:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1071:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1072:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1075:
#line 2519 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1076:
#line 2520 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1078:
#line 2523 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1079:
#line 2524 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1080:
#line 2525 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1081:
#line 2526 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1082:
#line 2529 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1083:
#line 2530 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1086:
#line 2538 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1092:
#line 2549 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1093:
#line 2552 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1094:
#line 2556 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1095:
#line 2557 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1096:
#line 2558 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1097:
#line 2559 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1098:
#line 2560 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1099:
#line 2561 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1100:
#line 2562 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1101:
#line 2568 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1102:
#line 2569 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1103:
#line 2570 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1104:
#line 2571 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1105:
#line 2575 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1106:
#line 2576 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1107:
#line 2578 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1108:
#line 2583 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1110:
#line 2585 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1112:
#line 2587 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2590 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1114:
#line 2592 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1115:
#line 2597 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1116:
#line 2600 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1117:
#line 2601 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2602 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1119:
#line 2605 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1120:
#line 2607 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1121:
#line 2611 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1122:
#line 2612 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1123:
#line 2616 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2617 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2618 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2619 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1127:
#line 2625 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1128:
#line 2626 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1129:
#line 2632 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1130:
#line 2633 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1131:
#line 2634 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1132:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1135:
#line 2643 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2645 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1137:
#line 2646 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1138:
#line 2647 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1139:
#line 2651 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2652 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1141:
#line 2653 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1142:
#line 2654 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1143:
#line 2657 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1145:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1146:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1147:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1148:
#line 2666 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1149:
#line 2667 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2668 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1151:
#line 2671 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1152:
#line 2672 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1154:
#line 2674 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1155:
#line 2675 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1156:
#line 2678 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1157:
#line 2679 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1158:
#line 2680 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1163:
#line 2687 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1164:
#line 2691 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1165:
#line 2693 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1166:
#line 2695 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1168:
#line 2700 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1169:
#line 2702 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2704 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2717 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2718 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1182:
#line 2719 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2722 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1184:
#line 2723 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2724 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1186:
#line 2727 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2728 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2729 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1189:
#line 2732 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2733 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2734 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2738 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1194:
#line 2739 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2740 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2743 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2748 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2749 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2750 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2753 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2758 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2759 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2760 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2764 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1209:
#line 2766 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1210:
#line 2768 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2772 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1212:
#line 2776 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1213:
#line 2778 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1214:
#line 2782 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1215:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1216:
#line 2786 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1217:
#line 2787 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1218:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1219:
#line 2791 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1220:
#line 2793 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1221:
#line 2794 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1222:
#line 2796 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1224:
#line 2800 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1225:
#line 2802 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1226:
#line 2803 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1227:
#line 2809 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1228:
#line 2810 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1229:
#line 2814 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1231:
#line 2816 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2821 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2822 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1236:
#line 2823 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1237:
#line 2826 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2827 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1239:
#line 2828 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1240:
#line 2831 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1241:
#line 2833 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1242:
#line 2838 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1243:
#line 2841 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1244:
#line 2848 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1245:
#line 2850 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1246:
#line 2852 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1247:
#line 2857 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1249:
#line 2861 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1250:
#line 2862 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1251:
#line 2863 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1252:
#line 2865 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1253:
#line 2867 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1254:
#line 2872 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10854 "frame/parser.C"
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


#line 2876 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

