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
     NONNAN_ = 458,
     NONZERO_ = 459,
     NOW_ = 460,
     NRRD_ = 461,
     NUMBER_ = 462,
     OBJECT_ = 463,
     OFF_ = 464,
     ON_ = 465,
     ONLY_ = 466,
     OPTION_ = 467,
     ORIENT_ = 468,
     PAN_ = 469,
     PANNER_ = 470,
     PARSER_ = 471,
     PASTE_ = 472,
     PERF_ = 473,
     PHOTO_ = 474,
     PHYSICAL_ = 475,
     PIXEL_ = 476,
     PLOT2D_ = 477,
     PLOT3D_ = 478,
     POINT_ = 479,
     POINTER_ = 480,
     POLYGON_ = 481,
     POSTSCRIPT_ = 482,
     POW_ = 483,
     PRECISION_ = 484,
     PRINT_ = 485,
     PRESERVE_ = 486,
     PROJECTION_ = 487,
     PROPERTY_ = 488,
     PUBLICATION_ = 489,
     PROS_ = 490,
     QUERY_ = 491,
     RADIAL_ = 492,
     RADIUS_ = 493,
     RANGE_ = 494,
     REGION_ = 495,
     REPLACE_ = 496,
     RESAMPLE_ = 497,
     RESET_ = 498,
     RESOLUTION_ = 499,
     RGB_ = 500,
     ROOT_ = 501,
     ROTATE_ = 502,
     RULER_ = 503,
     SAMPLE_ = 504,
     SAOIMAGE_ = 505,
     SAOTNG_ = 506,
     SAVE_ = 507,
     SCALE_ = 508,
     SCAN_ = 509,
     SCIENTIFIC_ = 510,
     SCOPE_ = 511,
     SEGMENT_ = 512,
     SELECT_ = 513,
     SET_ = 514,
     SEXAGESIMAL_ = 515,
     SHAPE_ = 516,
     SHARED_ = 517,
     SHIFT_ = 518,
     SHMID_ = 519,
     SHOW_ = 520,
     SIGMA_ = 521,
     SINH_ = 522,
     SIZE_ = 523,
     SLICE_ = 524,
     SMMAP_ = 525,
     SMOOTH_ = 526,
     SOCKET_ = 527,
     SOCKETGZ_ = 528,
     SOURCE_ = 529,
     SQRT_ = 530,
     SQUARED_ = 531,
     SSHARED_ = 532,
     STATS_ = 533,
     STATUS_ = 534,
     SUM_ = 535,
     SYSTEM_ = 536,
     TABLE_ = 537,
     TAG_ = 538,
     TEMPLATE_ = 539,
     TEXT_ = 540,
     THREADS_ = 541,
     THREED_ = 542,
     THRESHOLD_ = 543,
     THICK_ = 544,
     TRANSPARENCY_ = 545,
     TO_ = 546,
     TOGGLE_ = 547,
     TOPHAT_ = 548,
     TRUE_ = 549,
     TYPE_ = 550,
     UNDO_ = 551,
     UNHIGHLITE_ = 552,
     UNLOAD_ = 553,
     UNSELECT_ = 554,
     UPDATE_ = 555,
     USER_ = 556,
     VALUE_ = 557,
     VAR_ = 558,
     VIEW_ = 559,
     VECTOR_ = 560,
     VERSION_ = 561,
     VERTEX_ = 562,
     VERTICAL_ = 563,
     WARP_ = 564,
     WCS_ = 565,
     WCSA_ = 566,
     WCSB_ = 567,
     WCSC_ = 568,
     WCSD_ = 569,
     WCSE_ = 570,
     WCSF_ = 571,
     WCSG_ = 572,
     WCSH_ = 573,
     WCSI_ = 574,
     WCSJ_ = 575,
     WCSK_ = 576,
     WCSL_ = 577,
     WCSM_ = 578,
     WCSN_ = 579,
     WCSO_ = 580,
     WCSP_ = 581,
     WCSQ_ = 582,
     WCSR_ = 583,
     WCSS_ = 584,
     WCST_ = 585,
     WCSU_ = 586,
     WCSV_ = 587,
     WCSW_ = 588,
     WCSX_ = 589,
     WCSY_ = 590,
     WCSZ_ = 591,
     WCS0_ = 592,
     WFPC2_ = 593,
     WIDTH_ = 594,
     WIN32_ = 595,
     XML_ = 596,
     XY_ = 597,
     YES_ = 598,
     ZERO_ = 599,
     ZMAX_ = 600,
     ZSCALE_ = 601,
     ZOOM_ = 602
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
#define NONNAN_ 458
#define NONZERO_ 459
#define NOW_ 460
#define NRRD_ 461
#define NUMBER_ 462
#define OBJECT_ 463
#define OFF_ 464
#define ON_ 465
#define ONLY_ 466
#define OPTION_ 467
#define ORIENT_ 468
#define PAN_ 469
#define PANNER_ 470
#define PARSER_ 471
#define PASTE_ 472
#define PERF_ 473
#define PHOTO_ 474
#define PHYSICAL_ 475
#define PIXEL_ 476
#define PLOT2D_ 477
#define PLOT3D_ 478
#define POINT_ 479
#define POINTER_ 480
#define POLYGON_ 481
#define POSTSCRIPT_ 482
#define POW_ 483
#define PRECISION_ 484
#define PRINT_ 485
#define PRESERVE_ 486
#define PROJECTION_ 487
#define PROPERTY_ 488
#define PUBLICATION_ 489
#define PROS_ 490
#define QUERY_ 491
#define RADIAL_ 492
#define RADIUS_ 493
#define RANGE_ 494
#define REGION_ 495
#define REPLACE_ 496
#define RESAMPLE_ 497
#define RESET_ 498
#define RESOLUTION_ 499
#define RGB_ 500
#define ROOT_ 501
#define ROTATE_ 502
#define RULER_ 503
#define SAMPLE_ 504
#define SAOIMAGE_ 505
#define SAOTNG_ 506
#define SAVE_ 507
#define SCALE_ 508
#define SCAN_ 509
#define SCIENTIFIC_ 510
#define SCOPE_ 511
#define SEGMENT_ 512
#define SELECT_ 513
#define SET_ 514
#define SEXAGESIMAL_ 515
#define SHAPE_ 516
#define SHARED_ 517
#define SHIFT_ 518
#define SHMID_ 519
#define SHOW_ 520
#define SIGMA_ 521
#define SINH_ 522
#define SIZE_ 523
#define SLICE_ 524
#define SMMAP_ 525
#define SMOOTH_ 526
#define SOCKET_ 527
#define SOCKETGZ_ 528
#define SOURCE_ 529
#define SQRT_ 530
#define SQUARED_ 531
#define SSHARED_ 532
#define STATS_ 533
#define STATUS_ 534
#define SUM_ 535
#define SYSTEM_ 536
#define TABLE_ 537
#define TAG_ 538
#define TEMPLATE_ 539
#define TEXT_ 540
#define THREADS_ 541
#define THREED_ 542
#define THRESHOLD_ 543
#define THICK_ 544
#define TRANSPARENCY_ 545
#define TO_ 546
#define TOGGLE_ 547
#define TOPHAT_ 548
#define TRUE_ 549
#define TYPE_ 550
#define UNDO_ 551
#define UNHIGHLITE_ 552
#define UNLOAD_ 553
#define UNSELECT_ 554
#define UPDATE_ 555
#define USER_ 556
#define VALUE_ 557
#define VAR_ 558
#define VIEW_ 559
#define VECTOR_ 560
#define VERSION_ 561
#define VERTEX_ 562
#define VERTICAL_ 563
#define WARP_ 564
#define WCS_ 565
#define WCSA_ 566
#define WCSB_ 567
#define WCSC_ 568
#define WCSD_ 569
#define WCSE_ 570
#define WCSF_ 571
#define WCSG_ 572
#define WCSH_ 573
#define WCSI_ 574
#define WCSJ_ 575
#define WCSK_ 576
#define WCSL_ 577
#define WCSM_ 578
#define WCSN_ 579
#define WCSO_ 580
#define WCSP_ 581
#define WCSQ_ 582
#define WCSR_ 583
#define WCSS_ 584
#define WCST_ 585
#define WCSU_ 586
#define WCSV_ 587
#define WCSW_ 588
#define WCSX_ 589
#define WCSY_ 590
#define WCSZ_ 591
#define WCS0_ 592
#define WFPC2_ 593
#define WIDTH_ 594
#define WIN32_ 595
#define XML_ 596
#define XY_ 597
#define YES_ 598
#define ZERO_ 599
#define ZMAX_ 600
#define ZSCALE_ 601
#define ZOOM_ 602




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
#line 851 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 864 "frame/parser.C"

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
#define YYLAST   5690

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  352
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1256
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2780

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   602

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
       2,   351,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   349,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   350,   348,
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
     345,   346,   347
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
     343,   345,   347,   349,   351,   353,   355,   357,   359,   360,
     362,   364,   366,   368,   370,   372,   374,   375,   377,   379,
     380,   382,   384,   386,   387,   389,   391,   392,   394,   396,
     397,   399,   401,   402,   404,   406,   408,   410,   412,   414,
     416,   417,   419,   421,   423,   425,   427,   429,   431,   432,
     434,   436,   437,   439,   441,   443,   445,   447,   450,   453,
     456,   459,   462,   465,   468,   470,   473,   475,   478,   480,
     483,   485,   488,   491,   498,   501,   506,   509,   512,   515,
     519,   522,   525,   527,   530,   532,   535,   540,   546,   549,
     553,   559,   566,   568,   570,   572,   580,   592,   601,   614,
     616,   619,   622,   624,   626,   629,   632,   635,   638,   642,
     646,   649,   652,   654,   656,   658,   660,   662,   664,   666,
     669,   672,   675,   679,   682,   685,   688,   695,   706,   708,
     711,   713,   720,   731,   733,   736,   739,   742,   745,   748,
     751,   765,   779,   792,   805,   807,   808,   810,   812,   817,
     824,   826,   828,   830,   832,   834,   836,   838,   840,   842,
     847,   851,   856,   857,   864,   873,   876,   880,   884,   888,
     889,   894,   899,   904,   909,   913,   917,   919,   923,   929,
     934,   939,   943,   946,   947,   949,   951,   955,   958,   961,
     964,   967,   970,   973,   976,   979,   982,   985,   988,   991,
     994,   997,   999,  1002,  1005,  1010,  1020,  1023,  1026,  1029,
    1031,  1035,  1038,  1041,  1043,  1046,  1055,  1058,  1060,  1063,
    1065,  1068,  1070,  1075,  1085,  1088,  1090,  1092,  1094,  1096,
    1099,  1101,  1103,  1106,  1108,  1109,  1112,  1115,  1117,  1118,
    1121,  1124,  1126,  1128,  1131,  1134,  1137,  1139,  1141,  1143,
    1145,  1147,  1149,  1150,  1152,  1155,  1157,  1162,  1168,  1169,
    1172,  1174,  1180,  1183,  1186,  1188,  1190,  1192,  1195,  1197,
    1200,  1202,  1204,  1205,  1207,  1209,  1210,  1212,  1218,  1225,
    1229,  1236,  1240,  1242,  1246,  1248,  1250,  1252,  1256,  1263,
    1271,  1277,  1279,  1281,  1286,  1292,  1294,  1298,  1299,  1301,
    1304,  1306,  1311,  1313,  1316,  1318,  1321,  1325,  1328,  1330,
    1333,  1335,  1340,  1343,  1345,  1347,  1351,  1353,  1356,  1360,
    1363,  1364,  1366,  1371,  1374,  1375,  1380,  1386,  1392,  1393,
    1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1417,  1419,  1422,  1424,  1427,  1429,  1432,  1435,  1438,
    1441,  1443,  1445,  1447,  1448,  1450,  1451,  1453,  1454,  1456,
    1457,  1459,  1460,  1463,  1466,  1467,  1469,  1472,  1474,  1481,
    1487,  1489,  1491,  1493,  1496,  1499,  1501,  1503,  1505,  1507,
    1510,  1512,  1514,  1516,  1519,  1521,  1523,  1525,  1528,  1531,
    1534,  1535,  1537,  1538,  1540,  1542,  1544,  1546,  1548,  1550,
    1552,  1554,  1557,  1560,  1563,  1565,  1568,  1572,  1574,  1577,
    1580,  1585,  1592,  1594,  1605,  1607,  1610,  1614,  1618,  1621,
    1624,  1627,  1630,  1633,  1636,  1639,  1644,  1649,  1654,  1658,
    1662,  1668,  1673,  1678,  1683,  1687,  1691,  1695,  1699,  1702,
    1705,  1710,  1714,  1718,  1722,  1726,  1731,  1736,  1741,  1746,
    1752,  1757,  1764,  1772,  1777,  1782,  1788,  1791,  1795,  1799,
    1803,  1806,  1810,  1814,  1818,  1822,  1827,  1831,  1837,  1844,
    1848,  1852,  1857,  1861,  1865,  1869,  1873,  1877,  1883,  1887,
    1891,  1896,  1900,  1903,  1906,  1908,  1912,  1917,  1922,  1927,
    1932,  1937,  1944,  1949,  1954,  1960,  1965,  1970,  1975,  1980,
    1986,  1991,  1998,  2006,  2011,  2016,  2022,  2028,  2034,  2040,
    2046,  2052,  2060,  2066,  2072,  2079,  2084,  2089,  2094,  2099,
    2104,  2111,  2116,  2121,  2127,  2133,  2139,  2145,  2151,  2158,
    2164,  2172,  2181,  2187,  2193,  2200,  2204,  2208,  2212,  2216,
    2221,  2225,  2231,  2238,  2242,  2246,  2251,  2255,  2259,  2263,
    2267,  2271,  2277,  2281,  2285,  2290,  2295,  2300,  2304,  2310,
    2315,  2320,  2323,  2327,  2334,  2341,  2343,  2345,  2347,  2350,
    2353,  2356,  2360,  2364,  2367,  2380,  2383,  2386,  2388,  2392,
    2397,  2400,  2401,  2405,  2407,  2409,  2412,  2415,  2418,  2421,
    2424,  2429,  2434,  2439,  2443,  2448,  2454,  2463,  2470,  2475,
    2485,  2492,  2500,  2511,  2523,  2536,  2546,  2552,  2557,  2564,
    2568,  2574,  2580,  2587,  2593,  2598,  2608,  2619,  2631,  2641,
    2648,  2655,  2662,  2669,  2676,  2683,  2690,  2697,  2704,  2712,
    2720,  2723,  2728,  2733,  2738,  2743,  2749,  2754,  2759,  2765,
    2771,  2775,  2780,  2785,  2790,  2795,  2803,  2813,  2820,  2831,
    2843,  2856,  2866,  2870,  2873,  2877,  2883,  2891,  2896,  2900,
    2904,  2911,  2919,  2927,  2932,  2937,  2942,  2952,  2957,  2961,
    2966,  2974,  2982,  2985,  2989,  2993,  2997,  3002,  3005,  3008,
    3013,  3024,  3028,  3030,  3034,  3037,  3040,  3043,  3046,  3050,
    3056,  3061,  3067,  3070,  3078,  3082,  3085,  3088,  3092,  3095,
    3098,  3101,  3105,  3108,  3112,  3117,  3121,  3125,  3132,  3137,
    3140,  3144,  3147,  3150,  3155,  3159,  3163,  3166,  3170,  3172,
    3175,  3177,  3180,  3183,  3186,  3188,  3190,  3192,  3194,  3197,
    3199,  3202,  3205,  3207,  3210,  3213,  3215,  3218,  3220,  3222,
    3224,  3226,  3228,  3230,  3232,  3234,  3235,  3237,  3240,  3243,
    3246,  3250,  3256,  3264,  3272,  3279,  3286,  3293,  3300,  3306,
    3313,  3320,  3327,  3334,  3341,  3348,  3355,  3367,  3375,  3383,
    3391,  3401,  3411,  3422,  3435,  3448,  3451,  3453,  3456,  3460,
    3465,  3470,  3475,  3478,  3483,  3488,  3490,  3492,  3494,  3496,
    3498,  3500,  3502,  3504,  3507,  3509,  3511,  3513,  3517,  3521,
    3526,  3533,  3544,  3553,  3561,  3567,  3570,  3573,  3577,  3582,
    3588,  3592,  3598,  3604,  3608,  3613,  3619,  3625,  3631,  3635,
    3641,  3644,  3648,  3652,  3658,  3662,  3666,  3670,  3675,  3681,
    3687,  3691,  3697,  3703,  3707,  3712,  3718,  3724,  3727,  3730,
    3734,  3740,  3747,  3754,  3758,  3762,  3766,  3773,  3779,  3785,
    3788,  3792,  3796,  3802,  3809,  3813,  3816,  3819,  3823,  3826,
    3830,  3833,  3837,  3843,  3850,  3853,  3856,  3859,  3861,  3866,
    3871,  3873,  3876,  3879,  3882,  3885,  3888,  3891,  3894,  3898,
    3901,  3905,  3908,  3912,  3914,  3916,  3918,  3920,  3922,  3923,
    3926,  3927,  3930,  3931,  3933,  3934,  3935,  3937,  3939,  3941,
    3943,  3951,  3960,  3963,  3968,  3971,  3976,  3983,  3986,  3988,
    3990,  3994,  3998,  4000,  4005,  4008,  4010,  4014,  4018,  4023,
    4027,  4031,  4035,  4037,  4039,  4041,  4043,  4045,  4047,  4049,
    4051,  4053,  4055,  4057,  4059,  4061,  4063,  4066,  4067,  4068,
    4071,  4073,  4077,  4079,  4083,  4085,  4088,  4091,  4093,  4097,
    4098,  4099,  4102,  4105,  4107,  4111,  4117,  4119,  4122,  4125,
    4129,  4132,  4135,  4138,  4140,  4142,  4144,  4146,  4151,  4154,
    4158,  4162,  4165,  4169,  4172,  4175,  4178,  4182,  4186,  4190,
    4193,  4197,  4199,  4203,  4207,  4209,  4212,  4215,  4218,  4221,
    4231,  4238,  4240,  4242,  4244,  4246,  4249,  4252,  4256,  4260,
    4262,  4265,  4269,  4273,  4275,  4278,  4280,  4282,  4284,  4286,
    4288,  4291,  4294,  4299,  4301,  4304,  4307,  4310,  4314,  4316,
    4318,  4320,  4323,  4326,  4329,  4332,  4335,  4339,  4343,  4347,
    4351,  4355,  4359,  4363,  4365,  4368,  4371,  4374,  4378,  4381,
    4385,  4389,  4392,  4395,  4398,  4401,  4404,  4407,  4410,  4413,
    4416,  4419,  4422,  4425,  4428,  4431,  4435,  4439,  4443,  4446,
    4449,  4452,  4455,  4458,  4461,  4464,  4467,  4470,  4473,  4476,
    4479,  4483,  4487,  4491,  4496,  4503,  4506,  4508,  4510,  4512,
    4514,  4516,  4517,  4523,  4525,  4532,  4536,  4538,  4542,  4545,
    4548,  4552,  4556,  4559,  4562,  4565,  4568,  4571,  4574,  4578,
    4581,  4584,  4588,  4590,  4594,  4599,  4601,  4604,  4610,  4617,
    4624,  4627,  4629,  4632,  4635,  4641,  4648
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     353,     0,    -1,    96,   355,    -1,    44,   386,    -1,    41,
      66,     5,    -1,    46,   391,    -1,    59,    -1,    64,    -1,
      65,   393,    -1,    67,   283,     5,    -1,    68,   398,    -1,
      69,   400,    -1,    77,   401,    -1,    84,   410,    -1,    86,
     412,    -1,    87,   413,    -1,    95,   356,    -1,   125,   415,
      -1,   137,   416,    -1,   141,   458,    -1,   144,   461,    -1,
     148,    -1,   149,   356,    -1,   155,   467,    -1,   161,    16,
       4,    -1,   174,   470,    -1,   177,   488,    -1,   178,   489,
      -1,   179,   490,    -1,   182,   506,   491,    -1,   183,   525,
      -1,   196,    66,     5,    -1,   213,   526,    -1,   214,   527,
      -1,   215,   530,    -1,   236,    88,    -1,   229,   532,    -1,
     227,   531,    -1,   243,    -1,   240,   506,   534,    -1,   245,
     539,    -1,   247,   540,    -1,   252,   542,    -1,   265,    -1,
     271,   557,    -1,   286,     4,    -1,   287,   381,    -1,   298,
      -1,   300,   559,    -1,   306,    -1,   309,   561,    -1,   310,
     562,    -1,   340,   566,    -1,   347,   567,    -1,     3,    -1,
       4,    -1,   210,    -1,   209,    -1,   191,   356,    -1,   216,
     356,    -1,   218,   356,    -1,   310,   356,    -1,    44,   356,
      -1,    46,   356,    -1,    76,   356,    -1,    84,   356,    -1,
     142,   356,    -1,   245,   356,    -1,     4,    -1,   343,    -1,
     348,    -1,   210,    -1,   294,    -1,   201,    -1,   349,    -1,
     209,    -1,   119,    -1,    -1,   246,    38,    -1,   133,    38,
      -1,   246,    -1,   133,    -1,    -1,   359,    -1,   354,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
     360,   360,    -1,   361,   362,    -1,   362,   362,    -1,   354,
     354,    -1,   156,    -1,   220,    -1,   101,    -1,    19,    -1,
     365,    -1,   310,    -1,   311,    -1,   312,    -1,   313,    -1,
     314,    -1,   315,    -1,   316,    -1,   317,    -1,   318,    -1,
     319,    -1,   320,    -1,   321,    -1,   322,    -1,   323,    -1,
     324,    -1,   325,    -1,   326,    -1,   327,    -1,   328,    -1,
     329,    -1,   330,    -1,   331,    -1,   332,    -1,   333,    -1,
     334,    -1,   335,    -1,   336,    -1,   337,    -1,    56,    -1,
     215,    -1,    -1,   344,    -1,   204,    -1,   196,    -1,   203,
      -1,   239,    -1,   172,    -1,   176,    -1,   228,    -1,   275,
      -1,   276,    -1,    28,    -1,   267,    -1,   150,    -1,    30,
      -1,   254,    -1,   249,    -1,    94,    -1,   162,    -1,    -1,
     127,    -1,    35,    -1,   128,    -1,   163,    -1,   153,    -1,
     135,    -1,   106,    -1,    -1,    97,    -1,   260,    -1,    -1,
      97,    -1,    24,    -1,    25,    -1,    -1,   264,    -1,   164,
      -1,    -1,    17,    -1,   158,    -1,    -1,   156,    -1,   183,
      -1,    -1,    62,    -1,    48,    -1,   102,    -1,    85,    -1,
     350,    -1,    27,    -1,    51,    -1,    -1,     4,    -1,    82,
      -1,   151,    -1,   222,    -1,   223,    -1,   237,    -1,   278,
      -1,    -1,    32,    -1,   280,    -1,    -1,   197,    -1,    42,
      -1,    43,    -1,   169,    -1,   170,    -1,   304,   385,    -1,
      47,   382,    -1,    74,   383,    -1,   149,   384,    -1,   185,
     537,    -1,    37,   538,    -1,   253,   354,    -1,   231,    -1,
     288,   354,    -1,   356,    -1,    66,     5,    -1,   356,    -1,
      66,     5,    -1,   356,    -1,    66,     5,    -1,   354,   354,
      -1,   224,   354,   354,   354,   354,   354,    -1,    12,   387,
      -1,    71,     5,     5,     5,    -1,   100,     4,    -1,   118,
     388,    -1,   134,   389,    -1,    53,   268,     4,    -1,   291,
     390,    -1,   122,     5,    -1,    59,    -1,   354,   354,    -1,
     354,    -1,   354,   354,    -1,   354,    12,   354,   354,    -1,
     354,   354,    12,   354,   354,    -1,   291,   354,    -1,   291,
     354,   354,    -1,   291,   354,    12,   354,   354,    -1,   291,
     354,   354,    12,   354,   354,    -1,    32,    -1,   280,    -1,
     123,    -1,   354,   354,    12,    59,     5,     5,     5,    -1,
     354,   354,     4,   354,   354,    12,    59,     5,     5,     5,
       5,    -1,   354,   354,    12,   354,   354,     5,     5,     5,
      -1,   354,   354,     4,   354,   354,    12,   354,   354,     5,
       5,     5,     5,    -1,   354,    -1,   354,   354,    -1,   291,
     392,    -1,   123,    -1,   354,    -1,   354,   354,    -1,   256,
     394,    -1,   192,   395,    -1,   186,   396,    -1,   301,   354,
     354,    -1,   301,   196,   196,    -1,   346,   397,    -1,   231,
     356,    -1,   138,    -1,   175,    -1,   354,    -1,   186,    -1,
     346,    -1,   345,    -1,   301,    -1,     4,   369,    -1,   192,
     369,    -1,   249,     4,    -1,   354,     4,     4,    -1,    78,
     354,    -1,   249,     4,    -1,   171,     4,    -1,     4,   354,
     354,     4,     6,     4,    -1,   245,   354,   354,   354,   354,
     354,   354,     4,     6,     4,    -1,    40,    -1,   193,   399,
      -1,   111,    -1,     4,   354,   354,     4,     6,     4,    -1,
     245,   354,   354,   354,   354,   354,   354,     4,     6,     4,
      -1,   368,    -1,   176,   354,    -1,    83,   402,    -1,    99,
     403,    -1,   174,   404,    -1,   217,   408,    -1,   252,   409,
      -1,     5,     4,     4,   407,     4,     4,   368,   354,   405,
     406,   354,   354,     5,    -1,     5,     4,     4,   407,     4,
       4,   368,   354,   354,   406,   354,   354,     5,    -1,     5,
       4,     4,   407,     4,     4,   368,   354,   405,   354,   354,
       5,    -1,     5,     4,     4,   407,     4,     4,   368,   354,
     354,   354,   354,     5,    -1,   226,    -1,    -1,    31,    -1,
       5,    -1,     5,     5,     4,   356,    -1,     5,     4,   356,
       5,   364,   370,    -1,   186,    -1,   346,    -1,   345,    -1,
     301,    -1,   138,    -1,   175,    -1,   271,    -1,    46,    -1,
       5,    -1,     5,     5,     4,   356,    -1,     5,   364,   370,
      -1,    31,     5,   364,   370,    -1,    -1,   354,   354,   354,
     354,   364,   370,    -1,    59,   363,   364,   370,   354,   354,
     364,   372,    -1,   287,   411,    -1,    40,   354,   354,    -1,
     193,   354,   354,    -1,   111,   354,   354,    -1,    -1,   354,
     354,   364,   370,    -1,    40,   354,   354,     4,    -1,   193,
     354,   354,     4,    -1,   111,   354,   354,     4,    -1,   366,
     354,   354,    -1,   364,   370,   363,    -1,   356,    -1,   309,
     354,   354,    -1,    40,   193,   366,   354,   354,    -1,   193,
     366,   354,   354,    -1,    40,   193,   364,   363,    -1,   193,
     364,   363,    -1,    33,     4,    -1,    -1,    32,    -1,   280,
      -1,   144,   117,     5,    -1,    41,    66,    -1,    44,   417,
      -1,    46,   419,    -1,    65,   420,    -1,    68,   424,    -1,
      67,   423,    -1,    69,   426,    -1,    77,   428,    -1,    79,
     431,    -1,    84,   432,    -1,    86,   433,    -1,    88,   435,
      -1,    87,   434,    -1,    93,   436,    -1,    95,    -1,   124,
     440,    -1,   141,   446,    -1,   151,     5,     5,     4,    -1,
     152,    89,     5,     5,   354,   354,   366,     4,   414,    -1,
     155,   438,    -1,   159,   437,    -1,   161,    16,    -1,   186,
      -1,   182,   506,   500,    -1,   183,   447,    -1,   196,    66,
      -1,   213,    -1,   214,   448,    -1,   221,   282,   366,   354,
     354,     4,     4,     5,    -1,   245,   449,    -1,   247,    -1,
     271,   450,    -1,   286,    -1,   287,   451,    -1,   295,    -1,
     302,   366,   354,   354,    -1,   308,    89,     5,     5,   354,
     354,   366,     4,   414,    -1,   310,   456,    -1,   347,    -1,
     100,    -1,   118,    -1,   134,    -1,    53,   268,    -1,    88,
      -1,   122,    -1,    71,   418,    -1,   173,    -1,    -1,   186,
       5,    -1,   103,     5,    -1,   118,    -1,    -1,   405,   406,
      -1,   354,   406,    -1,   256,    -1,   192,    -1,   186,   421,
      -1,   301,   168,    -1,   346,   422,    -1,   231,    -1,   192,
      -1,   249,    -1,    78,    -1,   249,    -1,   171,    -1,    -1,
     283,    -1,   168,   425,    -1,     4,    -1,     4,   366,   354,
     354,    -1,     4,   354,   354,   368,   354,    -1,    -1,   168,
     427,    -1,   176,    -1,     4,   354,   354,   368,   354,    -1,
     364,   370,    -1,    65,   429,    -1,    66,    -1,    91,    -1,
     168,    -1,   207,   168,    -1,   185,    -1,    69,   430,    -1,
     271,    -1,   339,    -1,    -1,   192,    -1,   256,    -1,    -1,
     176,    -1,   354,   354,   364,   370,   371,    -1,   366,   354,
     354,   364,   370,   371,    -1,   364,   370,   371,    -1,    59,
     364,   370,   371,   364,   372,    -1,   287,   364,   370,    -1,
     366,    -1,   364,   370,   371,    -1,   279,    -1,    33,    -1,
     366,    -1,   364,   370,   371,    -1,   364,   370,   363,   354,
     354,     5,    -1,     4,   364,   370,   363,   354,   354,     5,
      -1,   366,   354,   354,     4,     4,    -1,     5,    -1,    65,
      -1,   366,   354,   354,     5,    -1,     6,     4,     4,     4,
       4,    -1,    88,    -1,   120,   195,   439,    -1,    -1,     4,
      -1,   354,   354,    -1,   198,    -1,    59,   364,   370,   371,
      -1,    81,    -1,   100,   443,    -1,    45,    -1,   117,   441,
      -1,   120,   195,   444,    -1,   146,   442,    -1,   147,    -1,
     208,   195,    -1,   268,    -1,   268,   364,   370,   372,    -1,
     269,   445,    -1,   339,    -1,     4,    -1,   366,   354,   354,
      -1,     4,    -1,   165,     5,    -1,     4,   165,     5,    -1,
     310,     4,    -1,    -1,   357,    -1,   357,   366,   354,   354,
      -1,   357,     4,    -1,    -1,   131,   156,   364,   370,    -1,
     131,   156,     4,   364,   370,    -1,   291,   156,   354,   364,
     370,    -1,    -1,   212,    -1,   303,    -1,    66,    -1,   181,
      -1,   239,    -1,   281,    -1,   290,    -1,   231,    -1,    61,
      -1,   281,    -1,   304,    -1,   134,    -1,   238,    -1,   238,
     187,    -1,   266,    -1,   266,   187,    -1,    21,    -1,   304,
     455,    -1,    47,   452,    -1,    74,   453,    -1,   149,   454,
      -1,   185,    -1,    37,    -1,   253,    -1,    -1,    66,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,   224,    -1,    -1,
      16,   457,    -1,   195,   365,    -1,    -1,   225,    -1,    83,
     459,    -1,    99,    -1,   364,   370,   371,   460,     5,     5,
      -1,   364,   370,   371,   460,     5,    -1,    20,    -1,   234,
      -1,    19,    -1,    44,   462,    -1,    77,   463,    -1,    84,
      -1,    94,    -1,    95,    -1,   101,    -1,   124,   464,    -1,
     141,    -1,   155,    -1,   162,    -1,   182,   465,    -1,   220,
      -1,   156,    -1,   271,    -1,   281,   364,    -1,   310,   466,
      -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,
      87,    -1,   191,    -1,   149,    -1,   258,    -1,   217,    -1,
     296,    -1,   364,    -1,    58,   364,    -1,   115,   364,    -1,
     172,   364,    -1,    18,    -1,   287,   364,    -1,   199,     4,
       4,    -1,   116,    -1,   184,     5,    -1,    88,   469,    -1,
     259,   120,   195,   468,    -1,   259,     6,     4,     4,     4,
       4,    -1,   300,    -1,   310,   354,   354,   354,   354,   354,
     354,   354,   354,     4,    -1,     5,    -1,     5,     4,    -1,
       4,     4,    56,    -1,     4,     4,   364,    -1,   192,   356,
      -1,    26,   471,    -1,   112,   473,    -1,   124,   474,    -1,
     158,   487,    -1,   206,   485,    -1,   219,   486,    -1,     5,
      14,     5,   375,    -1,     5,    15,     5,   375,    -1,     5,
      61,     5,   375,    -1,     5,   189,   375,    -1,     5,   190,
     375,    -1,     5,   262,   373,     4,   375,    -1,     5,   272,
       4,   375,    -1,     5,   273,     4,   375,    -1,     5,   303,
       5,   375,    -1,   245,    87,   472,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,    -1,     5,   190,    -1,     5,   262,   373,     4,    -1,
       5,   272,     4,    -1,     5,   273,     4,    -1,     5,   303,
       5,    -1,     5,     5,   270,    -1,     5,    14,     5,   375,
      -1,     5,    15,     5,   375,    -1,     5,    61,     5,   375,
      -1,     5,   189,   374,   375,    -1,     5,     5,   270,   374,
     375,    -1,     5,   190,   374,   375,    -1,     5,   262,   373,
       4,   374,   375,    -1,     5,   277,   373,     4,     4,   374,
     375,    -1,     5,   272,     4,   375,    -1,     5,   273,     4,
     375,    -1,     5,   303,     5,   374,   375,    -1,   269,   475,
      -1,   117,    87,   476,    -1,   245,   156,   484,    -1,   245,
      87,   483,    -1,   191,   477,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   189,
     374,    -1,     5,     5,   270,   374,    -1,     5,   190,   374,
      -1,     5,   262,   373,     4,   374,    -1,     5,   277,   373,
       4,     4,   374,    -1,     5,   272,     4,    -1,     5,   273,
       4,    -1,     5,   303,     5,   374,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,   374,    -1,     5,   190,   374,    -1,     5,   262,   373,
       4,   374,    -1,     5,   272,     4,    -1,     5,   273,     4,
      -1,     5,   303,     5,   374,    -1,   156,   161,   478,    -1,
     161,   479,    -1,   156,   480,    -1,   482,    -1,   156,   338,
     481,    -1,     5,    14,     5,   375,    -1,     5,    15,     5,
     375,    -1,     5,    61,     5,   375,    -1,     5,   189,   374,
     375,    -1,     5,   190,   374,   375,    -1,     5,   262,   373,
       4,   374,   375,    -1,     5,   272,     4,   375,    -1,     5,
     273,     4,   375,    -1,     5,   303,     5,   374,   375,    -1,
       5,    14,     5,   375,    -1,     5,    15,     5,   375,    -1,
       5,    61,     5,   375,    -1,     5,   189,   374,   375,    -1,
       5,     5,   270,   374,   375,    -1,     5,   190,   374,   375,
      -1,     5,   262,   373,     4,   374,   375,    -1,     5,   277,
     373,     4,     4,   374,   375,    -1,     5,   272,     4,   375,
      -1,     5,   273,     4,   375,    -1,     5,   303,     5,   374,
     375,    -1,   365,     5,    14,     5,   375,    -1,   365,     5,
      15,     5,   375,    -1,   365,     5,    61,     5,   375,    -1,
     365,     5,   189,   374,   375,    -1,   365,     5,   190,   374,
     375,    -1,   365,     5,   262,   373,     4,   374,   375,    -1,
     365,     5,   272,     4,   375,    -1,   365,     5,   273,     4,
     375,    -1,   365,     5,   303,     5,   374,   375,    -1,     5,
      14,     5,   375,    -1,     5,    15,     5,   375,    -1,     5,
      61,     5,   375,    -1,     5,   189,   374,   375,    -1,     5,
     190,   374,   375,    -1,     5,   262,   373,     4,   374,   375,
      -1,     5,   272,     4,   375,    -1,     5,   273,     4,   375,
      -1,     5,   303,     5,   374,   375,    -1,   365,     5,    14,
       5,   375,    -1,   365,     5,    15,     5,   375,    -1,   365,
       5,    61,     5,   375,    -1,   365,     5,   189,   374,   375,
      -1,   365,     5,     5,   270,   374,   375,    -1,   365,     5,
     190,   374,   375,    -1,   365,     5,   262,   373,     4,   374,
     375,    -1,   365,     5,   277,   373,     4,     4,   374,   375,
      -1,   365,     5,   272,     4,   375,    -1,   365,     5,   273,
       4,   375,    -1,   365,     5,   303,     5,   374,   375,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   189,   374,    -1,     5,     5,   270,   374,
      -1,     5,   190,   374,    -1,     5,   262,   373,     4,   374,
      -1,     5,   277,   373,     4,     4,   374,    -1,     5,   272,
       4,    -1,     5,   273,     4,    -1,     5,   303,     5,   374,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   189,   374,    -1,     5,   190,   374,
      -1,     5,   262,   373,     4,   374,    -1,     5,   272,     4,
      -1,     5,   273,     4,    -1,     5,   303,     5,   374,    -1,
       5,    14,     5,   375,    -1,     5,    61,     5,   375,    -1,
       5,   189,   375,    -1,     5,   262,   373,     4,   375,    -1,
       5,   272,     4,   375,    -1,     5,   303,     5,   375,    -1,
       5,     5,    -1,   269,     5,     5,    -1,    93,     4,     4,
       4,     4,     4,    -1,   186,     4,     4,     4,     4,     4,
      -1,   111,    -1,   230,    -1,   356,    -1,   139,   356,    -1,
      88,   356,    -1,    66,     5,    -1,     5,     4,     4,    -1,
     300,   354,   354,    -1,   347,   354,    -1,     5,     5,   365,
     370,     5,     5,   365,   370,   354,   365,   372,     5,    -1,
      60,   494,    -1,    66,     5,    -1,    80,    -1,    73,   499,
       5,    -1,    73,   499,   303,     5,    -1,    75,    99,    -1,
      -1,    83,   492,   495,    -1,    89,    -1,    99,    -1,    99,
      17,    -1,   105,   498,    -1,   114,     4,    -1,   129,     5,
      -1,   149,    17,    -1,   149,   211,   354,   354,    -1,   149,
     292,   354,   354,    -1,     4,    20,   378,   356,    -1,     4,
      21,   359,    -1,     4,    21,   359,   366,    -1,     4,    21,
     359,   364,   370,    -1,     4,    22,   238,   354,   354,     4,
     364,   372,    -1,     4,    22,   238,     5,   364,   372,    -1,
       4,    48,   121,   356,    -1,     4,    49,   238,   354,   354,
     354,     4,   364,   372,    -1,     4,    49,   238,     5,   364,
     372,    -1,     4,    48,   238,   354,   354,   364,   372,    -1,
       4,    52,   105,   359,   359,     4,   354,   354,   354,     4,
      -1,     4,    52,   105,   359,   359,     4,   354,   354,   354,
       4,   366,    -1,     4,    52,   105,   359,   359,     4,   354,
     354,   354,     4,   364,   370,    -1,     4,    52,   105,     5,
       5,   364,   370,   364,   372,    -1,     4,    55,   493,     5,
       5,    -1,     4,    62,   121,   356,    -1,     4,    62,   238,
     354,   364,   372,    -1,     4,    66,     5,    -1,     4,    74,
      27,   356,   356,    -1,     4,    74,   166,     5,     5,    -1,
       4,    74,   238,   354,   364,   372,    -1,     4,    74,   281,
     364,   370,    -1,     4,    75,   138,   356,    -1,     4,    82,
     105,   359,   359,     4,   354,   354,     4,    -1,     4,    82,
     105,   359,   359,     4,   354,   354,     4,   366,    -1,     4,
      82,   105,   359,   359,     4,   354,   354,     4,   364,   370,
      -1,     4,    82,   105,     5,     5,   364,   370,   364,   372,
      -1,     4,    83,    22,   238,   354,   354,    -1,     4,    83,
      49,   238,   354,   354,    -1,     4,    83,    52,    21,   354,
     354,    -1,     4,    83,    52,   238,   354,   354,    -1,     4,
      83,   110,   238,   354,   354,    -1,     4,    83,   113,    21,
     354,   354,    -1,     4,    83,   113,   238,   354,   354,    -1,
       4,    83,    82,    21,   354,   354,    -1,     4,    83,    82,
     238,   354,   354,    -1,     4,    83,   226,   307,     4,   354,
     354,    -1,     4,    83,   257,   307,     4,   354,   354,    -1,
       4,    99,    -1,     4,    99,    22,     4,    -1,     4,    99,
      49,     4,    -1,     4,    99,    52,     4,    -1,     4,    99,
     110,     4,    -1,     4,    99,    55,   493,     5,    -1,     4,
      99,   113,     4,    -1,     4,    99,    82,     4,    -1,     4,
      99,   226,   307,     4,    -1,     4,    99,   257,   307,     4,
      -1,     4,    99,   283,    -1,     4,    99,   283,     5,    -1,
       4,    99,   283,     4,    -1,     4,   105,    40,     4,    -1,
       4,   109,   121,   356,    -1,     4,   109,   238,   354,   354,
     364,   372,    -1,     4,   110,   238,   354,   354,   354,     4,
     364,   372,    -1,     4,   110,   238,     5,   364,   372,    -1,
       4,   113,   105,   359,   359,     4,   354,   354,   354,     4,
      -1,     4,   113,   105,   359,   359,     4,   354,   354,   354,
       4,   366,    -1,     4,   113,   105,   359,   359,     4,   354,
     354,   354,     4,   364,   370,    -1,     4,   113,   105,     5,
       5,   364,   370,   364,   372,    -1,     4,   129,     5,    -1,
       4,   149,    -1,     4,   149,   211,    -1,     4,   171,    27,
     356,   356,    -1,     4,   171,   224,   364,   370,   363,   363,
      -1,     4,   194,   354,   354,    -1,     4,   194,   132,    -1,
       4,   194,    36,    -1,     4,   194,   291,   364,   370,   363,
      -1,     4,   226,   243,   354,   354,   364,   372,    -1,     4,
     257,   243,   354,   354,   364,   372,    -1,     4,   224,   261,
     376,    -1,     4,   224,   268,     4,    -1,     4,   226,   121,
     356,    -1,     4,   232,   364,   370,   363,   363,   354,   364,
     372,    -1,     4,   233,   512,   356,    -1,     4,   247,    40,
      -1,     4,   248,   130,     5,    -1,     4,   248,   224,   364,
     370,   363,   363,    -1,     4,   248,   281,   364,   370,   364,
     372,    -1,     4,   258,    -1,     4,   258,   211,    -1,     4,
     283,     5,    -1,     4,   285,     5,    -1,     4,   285,   247,
     356,    -1,     4,   297,    -1,     4,   299,    -1,     4,   305,
      27,   356,    -1,     4,   305,   224,   364,   370,   363,   364,
     372,   354,   359,    -1,     4,   339,     4,    -1,   164,    -1,
     164,   354,   354,    -1,   173,   507,    -1,   174,   508,    -1,
     194,   509,    -1,   231,   356,    -1,   233,   512,   356,    -1,
     233,   512,   356,   354,   354,    -1,   247,    40,   354,   354,
      -1,   247,   193,   354,   354,     4,    -1,   247,   111,    -1,
     252,     5,   499,   364,   370,   371,   356,    -1,   252,   284,
       5,    -1,   258,   516,    -1,   265,   517,    -1,     5,    66,
       5,    -1,     5,    80,    -1,     5,    99,    -1,     5,    89,
      -1,     5,   129,     5,    -1,     5,   149,    -1,     5,   149,
     211,    -1,     5,   194,   354,   354,    -1,     5,   194,   132,
      -1,     5,   194,    36,    -1,     5,   194,   291,   364,   370,
     363,    -1,     5,   233,   512,   356,    -1,     5,   258,    -1,
       5,   258,   211,    -1,     5,   297,    -1,     5,   299,    -1,
     283,   105,     5,     5,    -1,   283,    99,     5,    -1,   283,
      99,    17,    -1,   283,     5,    -1,   283,   300,     5,    -1,
     217,    -1,   217,   364,    -1,   296,    -1,   297,    17,    -1,
     299,    17,    -1,   339,     4,    -1,   258,    -1,   299,    -1,
     149,    -1,   297,    -1,    40,   194,    -1,   194,    -1,   111,
     194,    -1,    40,   105,    -1,   105,    -1,   111,   105,    -1,
      40,   247,    -1,   247,    -1,   111,   247,    -1,    99,    -1,
     285,    -1,    66,    -1,   339,    -1,   233,    -1,   129,    -1,
     164,    -1,   300,    -1,    -1,     4,    -1,    30,   356,    -1,
     238,   354,    -1,   160,     4,    -1,   212,     4,   354,    -1,
      62,   354,   354,   354,   513,    -1,   109,   354,   354,   354,
     354,   358,   513,    -1,    48,   354,   354,   354,   354,   358,
     513,    -1,   226,   354,   354,   354,   354,   513,    -1,   257,
     354,   354,   354,   354,   513,    -1,   171,   354,   354,   354,
     354,   513,    -1,   305,   354,   354,   354,   354,   513,    -1,
     285,   354,   354,   358,   513,    -1,    62,   224,   354,   354,
     377,   513,    -1,    48,   224,   354,   354,   377,   513,    -1,
     102,   224,   354,   354,   377,   513,    -1,    85,   224,   354,
     354,   377,   513,    -1,   350,   224,   354,   354,   377,   513,
      -1,    27,   224,   354,   354,   377,   513,    -1,    51,   224,
     354,   354,   377,   513,    -1,   248,   354,   354,   354,   354,
     364,   370,   364,   372,     5,   513,    -1,    74,   354,   354,
     354,   364,   370,   513,    -1,   232,   354,   354,   354,   354,
     354,   513,    -1,    22,   354,   354,   354,   354,     4,   513,
      -1,   110,   354,   354,   354,   354,   354,     4,   358,   513,
      -1,    49,   354,   354,   354,   354,   354,     4,   358,   513,
      -1,    82,   354,   354,   359,   359,     4,   354,   354,     4,
     513,    -1,   113,   354,   354,   359,   359,     4,   354,   354,
     354,     4,   358,   513,    -1,    52,   354,   354,   359,   359,
       4,   354,   354,   354,     4,   358,   513,    -1,    75,   513,
      -1,   183,    -1,   284,   496,    -1,     5,   354,   354,    -1,
     303,     5,   354,   354,    -1,   354,   354,   303,     5,    -1,
       5,   364,   370,   363,    -1,     4,     4,    -1,    40,   354,
     354,     4,    -1,   193,   354,   354,     4,    -1,   111,    -1,
     104,    -1,   341,    -1,    63,    -1,   251,    -1,   250,    -1,
     235,    -1,   342,    -1,    60,   501,    -1,    66,    -1,   129,
      -1,   114,    -1,   143,   354,   354,    -1,   154,   354,   354,
      -1,     4,    20,    82,   364,    -1,     4,    20,   151,     5,
       5,     4,    -1,     4,    20,   222,     5,     5,     5,     5,
     364,   370,   379,    -1,     4,    20,   223,     5,     5,   364,
     370,   379,    -1,     4,    20,   237,     5,     5,     5,   364,
      -1,     4,    20,   278,   364,   370,    -1,   154,    17,    -1,
       4,    21,    -1,     4,    21,   366,    -1,     4,    21,   364,
     370,    -1,     4,    22,   238,   364,   372,    -1,     4,    48,
     121,    -1,     4,    49,   238,   364,   372,    -1,     4,    48,
     238,   364,   372,    -1,     4,    52,    21,    -1,     4,    52,
      21,   366,    -1,     4,    52,    21,   364,   370,    -1,     4,
      52,   238,   364,   372,    -1,     4,    59,   364,   370,   371,
      -1,     4,    62,   121,    -1,     4,    62,   238,   364,   372,
      -1,     4,    66,    -1,     4,    74,    27,    -1,     4,    74,
     166,    -1,     4,    74,   238,   364,   372,    -1,     4,    74,
     281,    -1,     4,    75,   138,    -1,     4,    82,    21,    -1,
       4,    82,    21,   366,    -1,     4,    82,    21,   364,   370,
      -1,     4,    82,   238,   364,   372,    -1,     4,   109,   121,
      -1,     4,   109,   238,   364,   372,    -1,     4,   110,   238,
     364,   372,    -1,     4,   113,    21,    -1,     4,   113,    21,
     366,    -1,     4,   113,    21,   364,   370,    -1,     4,   113,
     238,   364,   372,    -1,     4,   129,    -1,     4,   149,    -1,
       4,   171,    27,    -1,     4,   171,   167,   364,   372,    -1,
       4,   171,   224,   364,   370,   371,    -1,     4,   180,   167,
     354,   364,   372,    -1,     4,   226,   121,    -1,     4,   224,
     261,    -1,     4,   224,   268,    -1,     4,   232,   224,   364,
     370,   371,    -1,     4,   232,   167,   364,   372,    -1,     4,
     232,   289,   364,   372,    -1,     4,   233,    -1,     4,   233,
     512,    -1,     4,   248,   130,    -1,     4,   248,   167,   364,
     372,    -1,     4,   248,   224,   364,   370,   371,    -1,     4,
     248,   281,    -1,     4,   258,    -1,     4,   283,    -1,     4,
     283,     4,    -1,     4,   285,    -1,     4,   285,   247,    -1,
       4,   295,    -1,     4,   305,    27,    -1,     4,   305,   167,
     364,   372,    -1,     4,   305,   224,   364,   370,   371,    -1,
       4,   339,    -1,   149,   502,    -1,   149,   207,    -1,   207,
      -1,   226,   257,   354,   354,    -1,   257,   257,   354,   354,
      -1,   231,    -1,   233,   512,    -1,   258,   503,    -1,   258,
     207,    -1,   265,   504,    -1,     5,    66,    -1,     5,   129,
      -1,     5,   154,    -1,     5,   233,   512,    -1,     5,   283,
      -1,     5,   283,   207,    -1,   283,    17,    -1,   283,    98,
     195,    -1,   339,    -1,    30,    -1,   238,    -1,   160,    -1,
     212,    -1,    -1,   354,   354,    -1,    -1,   354,   354,    -1,
      -1,   285,    -1,    -1,    -1,   225,    -1,   240,    -1,   301,
      -1,    57,    -1,   499,   364,   370,   371,   356,   514,   520,
      -1,   258,   499,   364,   370,   371,   356,   514,   520,    -1,
     499,     5,    -1,   499,     5,   364,   370,    -1,   499,     4,
      -1,   499,     4,   364,   370,    -1,   124,     5,     5,   497,
       4,     5,    -1,   354,   354,    -1,   132,    -1,    36,    -1,
      40,   354,   354,    -1,   193,   354,   354,    -1,   111,    -1,
     291,   364,   370,   363,    -1,   510,   511,    -1,   511,    -1,
     512,   351,   356,    -1,    66,   351,     5,    -1,    92,   351,
       4,     4,    -1,   339,   351,     4,    -1,   129,   351,     5,
      -1,   285,   351,     5,    -1,   523,    -1,   524,    -1,   202,
      -1,   258,    -1,   149,    -1,    91,    -1,   126,    -1,   105,
      -1,   194,    -1,   247,    -1,    99,    -1,   157,    -1,   274,
      -1,   505,    -1,   505,   510,    -1,    -1,    -1,   515,   518,
      -1,    17,    -1,   211,   354,   354,    -1,   292,    -1,   292,
     354,   354,    -1,   356,    -1,   285,   356,    -1,   518,   519,
      -1,   519,    -1,   512,   351,   356,    -1,    -1,    -1,   521,
     522,    -1,   522,   523,    -1,   523,    -1,   283,   351,     5,
      -1,    55,   351,   493,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   181,   367,    -1,   239,   354,   354,    -1,   281,
     364,    -1,   290,   354,    -1,   181,     4,    -1,   350,    -1,
     348,    -1,   342,    -1,   202,    -1,   354,   354,   354,   354,
      -1,   354,   354,    -1,   366,   354,   354,    -1,   364,   370,
     363,    -1,   291,   528,    -1,    39,   354,   354,    -1,   193,
     529,    -1,   231,   356,    -1,   354,   354,    -1,   366,   354,
     354,    -1,   364,   370,   363,    -1,    40,   354,   354,    -1,
     354,   354,    -1,   111,   354,   354,    -1,   356,    -1,   310,
     365,   370,    -1,     5,     4,     4,    -1,   300,    -1,    70,
     533,    -1,   168,     4,    -1,   244,     4,    -1,   253,   354,
      -1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      -1,     4,     4,     4,     4,     4,     4,    -1,    54,    -1,
     140,    -1,   245,    -1,    90,    -1,   149,   535,    -1,   258,
     536,    -1,    40,   354,   354,    -1,   193,   354,   354,    -1,
     111,    -1,   263,   111,    -1,    40,   354,   354,    -1,   193,
     354,   354,    -1,   111,    -1,   263,   111,    -1,   188,    -1,
      13,    -1,   202,    -1,    34,    -1,   107,    -1,    61,     5,
      -1,   281,   364,    -1,   304,     4,     4,     4,    -1,   354,
      -1,   354,    97,    -1,   193,   541,    -1,   291,   354,    -1,
     291,   354,    97,    -1,    40,    -1,   354,    -1,   111,    -1,
      26,   543,    -1,   124,   545,    -1,   206,   555,    -1,   112,
     556,    -1,   219,     5,    -1,   120,     5,   380,    -1,    61,
       5,   380,    -1,   272,     4,   380,    -1,   245,    87,   544,
      -1,   120,     5,   380,    -1,    61,     5,   380,    -1,   272,
       4,   380,    -1,   546,    -1,   156,   546,    -1,   282,   547,
      -1,   269,   548,    -1,   117,    87,   549,    -1,   191,   550,
      -1,   245,   156,   552,    -1,   245,    87,   553,    -1,   242,
     554,    -1,   120,     5,    -1,    61,     5,    -1,   272,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   272,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   272,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   272,     4,    -1,   156,   551,
      -1,   120,     5,     4,    -1,    61,     5,     4,    -1,   272,
       4,     4,    -1,   120,     5,    -1,    61,     5,    -1,   272,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   272,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   272,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   272,     4,    -1,   120,
       5,   380,    -1,    61,     5,   380,    -1,   272,     4,   380,
      -1,   120,     5,     5,   380,    -1,   558,     4,     4,   354,
     354,   359,    -1,   558,     4,    -1,    99,    -1,    50,    -1,
     293,    -1,   136,    -1,   108,    -1,    -1,     4,   354,   354,
     354,   354,    -1,   205,    -1,   205,     4,   354,   354,   354,
     354,    -1,   124,   269,   560,    -1,     4,    -1,   354,   364,
     370,    -1,     4,     4,    -1,   354,   354,    -1,   291,   354,
     354,    -1,   365,   370,   371,    -1,    16,   565,    -1,   243,
       4,    -1,   241,   564,    -1,    23,   563,    -1,     4,     4,
      -1,     4,     5,    -1,   285,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   285,     4,     5,    -1,     4,    -1,
       4,   365,   370,    -1,     4,     6,   365,   370,    -1,   230,
      -1,   354,   354,    -1,   354,   354,    12,   354,   354,    -1,
     354,   354,    12,   366,   354,   354,    -1,   354,   354,    12,
     364,   370,   363,    -1,   291,   568,    -1,   123,    -1,   123,
     354,    -1,   354,   354,    -1,   354,   354,    12,   354,   354,
      -1,   354,   354,    12,   366,   354,   354,    -1,   354,   354,
      12,   364,   370,   363,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   456,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   510,   511,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   528,   530,
     531,   532,   533,   535,   536,   537,   538,   541,   542,   543,
     544,   545,   548,   549,   552,   553,   554,   557,   560,   563,
     566,   578,   585,   592,   600,   601,   602,   603,   604,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   637,   638,   641,
     642,   643,   644,   645,   646,   649,   650,   651,   652,   653,
     654,   655,   656,   659,   660,   661,   662,   663,   666,   667,
     668,   669,   670,   671,   672,   673,   676,   677,   678,   681,
     682,   683,   684,   687,   688,   689,   692,   693,   694,   697,
     698,   699,   702,   703,   704,   705,   706,   707,   708,   709,
     712,   713,   716,   717,   718,   719,   720,   721,   724,   725,
     726,   729,   730,   731,   732,   733,   734,   737,   738,   739,
     740,   741,   742,   743,   744,   745,   749,   750,   753,   754,
     757,   758,   761,   762,   766,   767,   768,   769,   770,   771,
     772,   773,   776,   777,   780,   781,   782,   784,   786,   787,
     788,   790,   794,   795,   798,   799,   801,   804,   806,   812,
     813,   814,   817,   818,   819,   822,   823,   824,   825,   826,
     827,   828,   834,   835,   838,   839,   840,   841,   842,   845,
     846,   847,   850,   851,   856,   861,   868,   870,   872,   873,
     874,   877,   879,   882,   883,   886,   887,   888,   889,   890,
     893,   895,   897,   902,   907,   910,   911,   914,   915,   916,
     923,   924,   925,   926,   929,   930,   933,   934,   937,   938,
     941,   943,   947,   948,   951,   953,   954,   955,   956,   959,
     960,   962,   963,   964,   967,   969,   971,   972,   974,   976,
     978,   980,   984,   987,   988,   989,   992,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1034,  1036,  1037,  1040,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1050,  1051,  1052,  1055,  1058,  1059,
    1061,  1063,  1064,  1065,  1066,  1067,  1068,  1075,  1076,  1079,
    1080,  1081,  1084,  1085,  1088,  1091,  1092,  1094,  1098,  1099,
    1100,  1103,  1107,  1109,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1120,  1121,  1122,  1125,  1126,  1129,  1131,  1139,
    1141,  1143,  1147,  1148,  1150,  1153,  1156,  1157,  1161,  1163,
    1166,  1171,  1172,  1173,  1177,  1178,  1179,  1182,  1183,  1184,
    1187,  1188,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1201,  1202,  1205,  1206,  1209,  1210,  1211,  1212,
    1215,  1218,  1220,  1223,  1227,  1228,  1230,  1232,  1236,  1237,
    1238,  1241,  1242,  1243,  1244,  1245,  1248,  1251,  1252,  1253,
    1256,  1257,  1258,  1259,  1260,  1261,  1264,  1265,  1266,  1267,
    1268,  1269,  1270,  1273,  1274,  1277,  1278,  1281,  1282,  1285,
    1286,  1289,  1290,  1291,  1294,  1295,  1298,  1299,  1302,  1305,
    1313,  1314,  1317,  1318,  1319,  1320,  1321,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1336,
    1339,  1340,  1343,  1344,  1345,  1346,  1349,  1350,  1351,  1352,
    1355,  1356,  1357,  1358,  1359,  1360,  1363,  1364,  1365,  1366,
    1367,  1368,  1370,  1371,  1376,  1377,  1380,  1382,  1384,  1387,
    1388,  1389,  1390,  1391,  1392,  1395,  1397,  1399,  1401,  1402,
    1404,  1406,  1408,  1410,  1412,  1415,  1416,  1417,  1418,  1419,
    1420,  1422,  1423,  1424,  1427,  1430,  1432,  1434,  1436,  1438,
    1440,  1442,  1444,  1447,  1449,  1451,  1453,  1454,  1455,  1456,
    1457,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1468,  1470,
    1471,  1472,  1475,  1476,  1477,  1478,  1479,  1480,  1482,  1483,
    1484,  1487,  1488,  1489,  1490,  1491,  1494,  1497,  1500,  1503,
    1506,  1509,  1512,  1515,  1518,  1523,  1526,  1529,  1532,  1535,
    1538,  1541,  1544,  1547,  1550,  1553,  1558,  1561,  1564,  1567,
    1570,  1573,  1576,  1579,  1582,  1587,  1589,  1591,  1593,  1595,
    1597,  1602,  1604,  1606,  1610,  1613,  1616,  1619,  1622,  1625,
    1628,  1631,  1634,  1637,  1640,  1645,  1646,  1647,  1648,  1649,
    1650,  1651,  1653,  1655,  1656,  1657,  1660,  1661,  1662,  1663,
    1664,  1665,  1667,  1668,  1669,  1672,  1674,  1676,  1677,  1679,
    1681,  1685,  1686,  1689,  1690,  1691,  1694,  1701,  1702,  1703,
    1704,  1705,  1706,  1707,  1710,  1718,  1719,  1720,  1721,  1723,
    1725,  1726,  1726,  1727,  1728,  1729,  1730,  1731,  1732,  1734,
    1735,  1737,  1740,  1743,  1744,  1745,  1748,  1751,  1754,  1755,
    1759,  1762,  1765,  1768,  1772,  1777,  1782,  1784,  1785,  1787,
    1788,  1790,  1792,  1794,  1796,  1797,  1799,  1801,  1805,  1810,
    1812,  1814,  1816,  1818,  1820,  1822,  1824,  1826,  1828,  1830,
    1833,  1834,  1836,  1838,  1839,  1841,  1843,  1844,  1845,  1847,
    1849,  1850,  1851,  1853,  1854,  1855,  1858,  1862,  1865,  1868,
    1872,  1877,  1883,  1884,  1885,  1887,  1888,  1892,  1894,  1895,
    1896,  1899,  1902,  1905,  1907,  1909,  1910,  1915,  1918,  1919,
    1920,  1923,  1927,  1928,  1930,  1931,  1932,  1934,  1935,  1937,
    1938,  1943,  1945,  1946,  1948,  1949,  1950,  1951,  1952,  1953,
    1955,  1957,  1959,  1960,  1962,  1963,  1965,  1967,  1968,  1969,
    1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1979,  1981,
    1982,  1983,  1984,  1986,  1987,  1988,  1989,  1990,  1992,  1993,
    1994,  1995,  1996,  1997,  2000,  2001,  2002,  2003,  2004,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2020,  2023,  2024,  2025,  2026,  2027,
    2028,  2036,  2043,  2052,  2061,  2068,  2075,  2083,  2091,  2098,
    2103,  2108,  2113,  2118,  2123,  2128,  2134,  2144,  2154,  2164,
    2171,  2181,  2191,  2200,  2212,  2225,  2230,  2231,  2234,  2236,
    2238,  2243,  2247,  2250,  2252,  2254,  2257,  2258,  2259,  2260,
    2261,  2262,  2263,  2266,  2267,  2268,  2269,  2270,  2271,  2273,
    2275,  2277,  2279,  2281,  2283,  2286,  2287,  2288,  2289,  2291,
    2294,  2295,  2297,  2299,  2300,  2301,  2303,  2306,  2309,  2310,
    2312,  2313,  2314,  2315,  2317,  2318,  2319,  2320,  2321,  2323,
    2325,  2326,  2328,  2331,  2332,  2333,  2335,  2337,  2338,  2339,
    2340,  2342,  2345,  2349,  2350,  2351,  2352,  2355,  2358,  2360,
    2361,  2362,  2363,  2365,  2368,  2369,  2371,  2372,  2373,  2374,
    2375,  2377,  2378,  2380,  2383,  2384,  2385,  2386,  2387,  2389,
    2391,  2392,  2393,  2394,  2396,  2398,  2399,  2400,  2401,  2402,
    2403,  2405,  2406,  2408,  2411,  2412,  2413,  2414,  2417,  2418,
    2421,  2422,  2425,  2426,  2429,  2442,  2443,  2447,  2448,  2452,
    2455,  2460,  2467,  2469,  2472,  2474,  2477,  2481,  2482,  2483,
    2484,  2485,  2486,  2487,  2491,  2492,  2495,  2496,  2497,  2498,
    2499,  2500,  2501,  2502,  2505,  2506,  2507,  2508,  2509,  2510,
    2511,  2512,  2513,  2514,  2515,  2518,  2519,  2522,  2523,  2523,
    2526,  2527,  2528,  2529,  2532,  2533,  2536,  2537,  2540,  2544,
    2545,  2545,  2548,  2549,  2552,  2555,  2559,  2560,  2561,  2562,
    2563,  2564,  2565,  2571,  2572,  2573,  2574,  2577,  2579,  2580,
    2585,  2587,  2588,  2589,  2590,  2593,  2594,  2599,  2603,  2604,
    2605,  2608,  2609,  2614,  2615,  2618,  2620,  2621,  2622,  2627,
    2629,  2635,  2636,  2637,  2638,  2641,  2642,  2645,  2647,  2649,
    2650,  2653,  2655,  2656,  2657,  2660,  2661,  2664,  2665,  2666,
    2669,  2670,  2671,  2674,  2675,  2676,  2677,  2678,  2681,  2682,
    2683,  2686,  2687,  2688,  2689,  2690,  2693,  2695,  2697,  2699,
    2702,  2704,  2706,  2709,  2710,  2711,  2712,  2713,  2714,  2715,
    2716,  2717,  2720,  2721,  2722,  2725,  2726,  2727,  2730,  2731,
    2732,  2735,  2736,  2737,  2740,  2741,  2742,  2743,  2746,  2747,
    2748,  2751,  2752,  2753,  2756,  2757,  2758,  2761,  2762,  2763,
    2766,  2768,  2770,  2774,  2778,  2780,  2785,  2788,  2789,  2790,
    2791,  2794,  2795,  2797,  2798,  2800,  2803,  2804,  2806,  2812,
    2813,  2816,  2818,  2819,  2820,  2821,  2824,  2825,  2826,  2829,
    2830,  2831,  2834,  2835,  2840,  2844,  2851,  2852,  2854,  2859,
    2861,  2864,  2865,  2866,  2867,  2869,  2874
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
  "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NONNAN_", "NONZERO_", "NOW_",
  "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_",
  "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_",
  "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_",
  "POLYGON_", "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
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
     595,   596,   597,   598,   599,   600,   601,   602,    89,    78,
      88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   352,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   354,   354,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   357,   357,   357,
     357,   357,   358,   358,   359,   359,   359,   360,   361,   362,
     363,   363,   363,   363,   364,   364,   364,   364,   364,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   366,   366,   367,
     367,   367,   367,   367,   367,   368,   368,   368,   368,   368,
     368,   368,   368,   369,   369,   369,   369,   369,   370,   370,
     370,   370,   370,   370,   370,   370,   371,   371,   371,   372,
     372,   372,   372,   373,   373,   373,   374,   374,   374,   375,
     375,   375,   376,   376,   376,   376,   376,   376,   376,   376,
     377,   377,   378,   378,   378,   378,   378,   378,   379,   379,
     379,   380,   380,   380,   380,   380,   380,   381,   381,   381,
     381,   381,   381,   381,   381,   381,   382,   382,   383,   383,
     384,   384,   385,   385,   386,   386,   386,   386,   386,   386,
     386,   386,   387,   387,   388,   388,   388,   388,   388,   388,
     388,   388,   389,   389,   390,   390,   390,   390,   390,   391,
     391,   391,   392,   392,   392,   393,   393,   393,   393,   393,
     393,   393,   394,   394,   395,   395,   395,   395,   395,   396,
     396,   396,   397,   397,   397,   397,   398,   398,   398,   398,
     398,   399,   399,   400,   400,   401,   401,   401,   401,   401,
     402,   402,   402,   402,   402,   403,   403,   404,   404,   404,
     405,   405,   405,   405,   406,   406,   407,   407,   408,   408,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   411,
     411,   411,   411,   411,   412,   412,   412,   412,   412,   412,
     412,   412,   413,   414,   414,   414,   415,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   417,   417,   417,   417,
     417,   417,   417,   417,   418,   418,   418,   419,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   421,   421,   422,
     422,   422,   423,   423,   424,   425,   425,   425,   426,   426,
     426,   427,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   429,   429,   429,   430,   430,   431,   431,   432,
     432,   432,   433,   433,   433,   434,   435,   435,   436,   436,
     436,   437,   437,   437,   438,   438,   438,   439,   439,   439,
     440,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   441,   441,   442,   442,   442,   442,
     443,   444,   444,   444,   445,   445,   445,   445,   446,   446,
     446,   447,   447,   447,   447,   447,   448,   449,   449,   449,
     450,   450,   450,   450,   450,   450,   451,   451,   451,   451,
     451,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   456,   456,   456,   457,   457,   458,   458,   459,   459,
     460,   460,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   462,
     463,   463,   464,   464,   464,   464,   465,   465,   465,   465,
     466,   466,   466,   466,   466,   466,   467,   467,   467,   467,
     467,   467,   467,   467,   468,   468,   469,   469,   469,   470,
     470,   470,   470,   470,   470,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   473,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   477,   477,   477,   477,   477,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   480,   480,   480,   480,
     480,   480,   480,   480,   480,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   483,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   485,   485,   485,   485,   485,
     485,   486,   486,   487,   487,   487,   488,   489,   489,   489,
     489,   489,   489,   489,   490,   491,   491,   491,   491,   491,
     491,   492,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   494,   494,   494,   494,   494,
     494,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   496,   496,
     496,   496,   497,   498,   498,   498,   499,   499,   499,   499,
     499,   499,   499,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   501,   501,   501,   501,   502,   502,
     503,   503,   504,   504,   505,   506,   506,   506,   506,   506,
     507,   507,   508,   508,   508,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   510,   510,   511,   511,   511,   511,
     511,   511,   511,   511,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   513,   513,   514,   515,   514,
     516,   516,   516,   516,   517,   517,   518,   518,   519,   520,
     521,   520,   522,   522,   523,   524,   525,   525,   525,   525,
     525,   525,   525,   526,   526,   526,   526,   527,   527,   527,
     527,   527,   527,   527,   527,   528,   528,   528,   529,   529,
     529,   530,   530,   530,   530,   531,   531,   531,   531,   532,
     532,   533,   533,   533,   533,   534,   534,   535,   535,   535,
     535,   536,   536,   536,   536,   537,   537,   538,   538,   538,
     539,   539,   539,   540,   540,   540,   540,   540,   541,   541,
     541,   542,   542,   542,   542,   542,   543,   543,   543,   543,
     544,   544,   544,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   546,   546,   546,   547,   547,   547,   548,   548,
     548,   549,   549,   549,   550,   550,   550,   550,   551,   551,
     551,   552,   552,   552,   553,   553,   553,   554,   554,   554,
     555,   555,   555,   556,   557,   557,   557,   558,   558,   558,
     558,   559,   559,   559,   559,   559,   560,   560,   560,   561,
     561,   562,   562,   562,   562,   562,   563,   563,   563,   564,
     564,   564,   565,   565,   565,   566,   567,   567,   567,   567,
     567,   568,   568,   568,   568,   568,   568
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
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     0,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     0,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     1,     2,     1,     2,
       1,     2,     2,     6,     2,     4,     2,     2,     2,     3,
       2,     2,     1,     2,     1,     2,     4,     5,     2,     3,
       5,     6,     1,     1,     1,     7,    11,     8,    12,     1,
       2,     2,     1,     1,     2,     2,     2,     2,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     3,     2,     2,     2,     6,    10,     1,     2,
       1,     6,    10,     1,     2,     2,     2,     2,     2,     2,
      13,    13,    12,    12,     1,     0,     1,     1,     4,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       3,     4,     0,     6,     8,     2,     3,     3,     3,     0,
       4,     4,     4,     4,     3,     3,     1,     3,     5,     4,
       4,     3,     2,     0,     1,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     4,     9,     2,     2,     2,     1,
       3,     2,     2,     1,     2,     8,     2,     1,     2,     1,
       2,     1,     4,     9,     2,     1,     1,     1,     1,     2,
       1,     1,     2,     1,     0,     2,     2,     1,     0,     2,
       2,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     0,     1,     2,     1,     4,     5,     0,     2,
       1,     5,     2,     2,     1,     1,     1,     2,     1,     2,
       1,     1,     0,     1,     1,     0,     1,     5,     6,     3,
       6,     3,     1,     3,     1,     1,     1,     3,     6,     7,
       5,     1,     1,     4,     5,     1,     3,     0,     1,     2,
       1,     4,     1,     2,     1,     2,     3,     2,     1,     2,
       1,     4,     2,     1,     1,     3,     1,     2,     3,     2,
       0,     1,     4,     2,     0,     4,     5,     5,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     2,     2,     0,     1,     2,     1,     6,     5,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     2,
       1,     1,     1,     2,     1,     1,     1,     2,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     1,     2,     3,     1,     2,     2,
       4,     6,     1,    10,     1,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     4,     4,     4,     3,     3,
       5,     4,     4,     4,     3,     3,     3,     3,     2,     2,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     2,     3,     3,     3,
       2,     3,     3,     3,     3,     4,     3,     5,     6,     3,
       3,     4,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     3,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     5,     5,     5,     5,
       5,     7,     5,     5,     6,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     5,     5,     5,     5,     6,     5,
       7,     8,     5,     5,     6,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     3,     5,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     1,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     4,     5,     8,     6,     4,     9,
       6,     7,    10,    11,    12,     9,     5,     4,     6,     3,
       5,     5,     6,     5,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     7,     3,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     2,
       3,     5,     7,     7,     6,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,    11,     7,     7,     7,
       9,     9,    10,    12,    12,     2,     1,     2,     3,     4,
       4,     4,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     4,
       6,    10,     8,     7,     5,     2,     2,     3,     4,     5,
       3,     5,     5,     3,     4,     5,     5,     5,     3,     5,
       2,     3,     3,     5,     3,     3,     3,     4,     5,     5,
       3,     5,     5,     3,     4,     5,     5,     2,     2,     3,
       5,     6,     6,     3,     3,     3,     6,     5,     5,     2,
       3,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     5,     6,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
       7,     8,     2,     4,     2,     4,     6,     2,     1,     1,
       3,     3,     1,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     2,
       1,     3,     1,     3,     1,     2,     2,     1,     3,     0,
       0,     2,     2,     1,     3,     5,     1,     2,     2,     3,
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
       1,     0,     5,     1,     6,     3,     1,     3,     2,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     1,     3,     4,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,   302,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1035,     0,
       0,     0,     0,     0,     0,     0,     0,  1035,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1221,    49,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    54,    55,     0,   239,     5,     0,
       0,     0,     0,     0,     0,     8,     0,     0,   268,   270,
       0,     0,    10,   140,   142,   135,   136,   137,   141,   138,
     139,   273,    11,     0,   285,     0,     0,     0,    12,     0,
       0,     0,     0,   309,     0,    13,    68,    97,     0,   127,
      96,    76,    94,     0,    73,    75,    71,   128,    95,    72,
       0,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    69,
      70,    74,   316,   148,    98,     0,    14,     0,    15,    16,
       0,     0,     0,     0,     0,     0,    57,    56,     0,     0,
       0,     0,     2,     0,    17,     0,     0,     0,   378,   392,
       0,   398,     0,     0,     0,     0,     0,     0,     0,   341,
       0,   468,     0,     0,     0,     0,     0,  1035,     0,   349,
       0,   353,     0,     0,     0,   357,     0,   359,     0,   361,
       0,     0,   501,   365,    18,     0,   507,    19,   512,     0,
     530,   515,   516,   517,   518,   532,   520,   521,   525,   522,
       0,   524,   526,     0,     0,    20,    22,     0,   547,     0,
       0,     0,   552,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   706,    26,     0,     0,     0,     0,     0,
       0,   707,    27,     0,    28,  1039,  1036,  1037,  1038,     0,
    1096,     0,   129,     0,     0,     0,    30,     0,  1106,  1105,
    1104,  1103,    32,     0,     0,     0,     0,     0,   148,     0,
      33,     0,  1124,     0,  1121,    34,     0,     0,     0,     0,
      37,     0,    36,    35,     0,     0,     0,     0,    40,     0,
       0,  1153,    41,     0,     0,     0,     0,     0,    42,  1217,
    1216,  1220,  1219,  1218,    44,     0,    45,     0,     0,     0,
       0,     0,   204,     0,     0,     0,    46,     0,     0,  1223,
      48,     0,     0,    50,     0,     0,     0,     0,   148,    51,
    1245,    52,     0,     0,    53,     1,     4,   222,     0,   214,
       0,     0,   216,     0,   224,   217,   221,   232,   233,   218,
     234,     0,   220,   242,   243,   241,   240,     0,     0,     0,
     247,   255,   258,   257,   256,   254,   246,   251,   252,   253,
     245,     0,     0,     0,     0,     0,     0,   250,     9,     0,
       0,     0,   269,     0,   274,     0,   284,   275,   286,   276,
     287,   277,   298,   278,     0,     0,   279,     0,    87,    88,
      89,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   305,     0,     0,     0,     0,     0,   150,   155,
     149,   151,   154,   153,   152,     0,     0,   322,    62,    63,
      64,    65,    66,    58,    59,    60,    67,    61,     0,   327,
       0,   374,   370,   366,   367,   371,   368,   373,   328,   377,
     329,   290,   382,   386,   381,   293,   292,   291,     0,     0,
     330,   393,   332,     0,   331,     0,   400,   333,   412,   404,
     415,   405,   406,   408,     0,   410,   411,   148,   334,     0,
       0,   335,     0,     0,   148,   336,   424,   148,   422,   337,
     425,   339,   148,   426,   338,     0,   148,     0,   340,   444,
       0,   442,   460,     0,     0,     0,   448,   440,     0,   450,
     464,   453,   342,   469,   470,   343,     0,     0,     0,   435,
       0,   346,   431,   432,     0,   347,   348,     0,   471,   472,
     473,   474,   475,   351,   352,   476,   354,     0,   477,   478,
     479,   356,   485,   480,   481,   483,   358,   491,   493,   495,
     497,   490,   492,   499,   360,     0,     0,   504,     0,   364,
     148,   506,     0,   513,   531,   514,   533,   534,   535,   519,
     536,   538,   537,   539,   523,   527,   544,     0,     0,     0,
       0,   540,   528,     0,     0,   549,   548,     0,     0,     0,
       0,    24,     0,     0,   559,     0,   560,     0,     0,     0,
       0,     0,   561,     0,   705,     0,   562,     0,   563,     0,
       0,   564,     0,   710,   709,   708,     0,   713,     0,     0,
       0,   885,     0,     0,     0,   717,   721,   723,   724,     0,
       0,     0,     0,   822,     0,     0,     0,   858,     0,     0,
       0,     0,     0,     0,     0,   860,     0,     0,     0,    29,
    1097,  1102,   132,   133,   131,   134,   130,  1098,     0,  1100,
    1101,    31,     0,     0,     0,     0,  1113,  1114,     0,   148,
       0,  1111,  1108,     0,     0,     0,   148,  1131,  1134,  1132,
    1133,  1125,  1126,  1127,  1128,     0,     0,     0,    39,  1150,
    1151,     0,  1158,  1160,  1159,  1155,  1156,  1154,     0,     0,
       0,     0,  1161,     0,  1164,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1162,  1173,     0,     0,     0,
    1163,  1165,  1215,  1148,  1149,  1147,   202,     0,   206,   198,
       0,   208,   199,     0,   210,   200,  1146,  1145,   201,   203,
     205,     0,     0,   197,     0,     0,     0,     0,  1229,  1242,
    1232,     0,     0,  1235,     0,     0,  1234,  1233,   156,  1251,
       0,  1250,  1246,   223,   219,     0,   228,     0,   225,     0,
     244,   143,   146,   147,   145,   144,   259,   260,   261,   249,
     248,   263,   265,   264,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,     0,   306,    93,    90,    91,    92,
     148,   308,   307,     0,     0,     0,     0,     0,     0,     0,
     321,     0,   317,   315,   314,   326,   369,     0,     0,   372,
     387,   388,   383,   384,   389,   391,   390,   385,   294,   295,
     380,   379,   395,   394,     0,   399,   413,   414,   403,   416,
     409,   407,   402,     0,     0,   148,   148,   156,   156,   156,
     148,     0,     0,   148,   443,   454,     0,   445,    77,   456,
       0,     0,   447,   449,   148,     0,     0,   452,     0,     0,
       0,   437,     0,     0,     0,     0,   934,   936,   935,     0,
    1028,     0,  1007,     0,  1010,     0,     0,  1030,  1032,     0,
    1023,   350,     0,   482,   484,   494,   487,   496,   488,   498,
     489,   500,   486,     0,     0,   505,   502,   503,   156,   529,
     541,   542,   543,   545,     0,   558,   546,     0,     0,     0,
       0,     0,     0,   169,   169,   163,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   166,   163,     0,     0,
     163,     0,     0,     0,     0,     0,   600,   624,     0,     0,
       0,   596,     0,     0,     0,     0,   169,   163,     0,     0,
     701,     0,   711,   712,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   770,     0,
       0,     0,     0,     0,   793,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   812,     0,     0,   817,   818,     0,
       0,     0,   838,   840,   839,     0,   842,     0,     0,   849,
     851,   852,   886,     0,     0,     0,     0,   715,   716,   928,
     926,   931,   930,   929,   927,   932,     0,   720,     0,   725,
       0,   925,     0,   726,   727,   728,   729,     0,     0,     0,
       0,     0,   824,     0,     0,   825,  1049,     0,  1052,  1048,
       0,     0,     0,   826,   859,   827,  1067,  1072,  1069,  1068,
    1066,  1073,  1070,  1064,  1071,  1065,  1074,     0,     0,   832,
       0,     0,     0,  1080,     0,  1082,   835,     0,  1084,   836,
     856,     0,     0,     0,   861,   862,   863,  1099,  1112,     0,
       0,  1119,  1115,     0,     0,     0,  1110,  1109,  1123,  1122,
       0,     0,  1139,     0,     0,  1135,     0,  1143,     0,     0,
    1136,     0,  1157,   191,   191,     0,   191,     0,  1183,     0,
    1182,  1174,     0,     0,     0,     0,  1178,     0,     0,     0,
    1181,     0,     0,     0,     0,     0,  1176,  1184,     0,     0,
       0,  1175,   191,   191,   191,     0,   207,   209,   211,     0,
     212,     0,    55,     0,  1225,     0,  1230,     0,   148,  1236,
    1237,     0,  1239,  1240,     0,   157,   158,  1231,  1252,  1253,
       0,   215,     0,   229,     0,     0,     0,     0,   262,     0,
       0,     0,     0,     0,     0,     0,     0,   300,   148,     0,
       0,     0,     0,   148,     0,   320,     0,   319,   376,   375,
       0,     0,     0,   148,     0,   156,   421,   419,   423,   427,
       0,     0,     0,   156,     0,    81,    80,   461,   446,     0,
     457,   459,   159,     0,     0,   344,     0,     0,    55,     0,
     436,     0,     0,   946,     0,     0,     0,     0,     0,     0,
     960,     0,     0,     0,     0,     0,     0,   977,   978,     0,
       0,     0,     0,     0,   989,     0,   995,   996,   998,  1000,
       0,  1004,  1015,  1016,  1017,     0,  1019,  1024,  1026,  1027,
    1025,   933,     0,  1006,     0,  1005,   945,     0,     0,  1011,
       0,  1013,     0,  1012,  1033,  1014,  1021,     0,     0,   362,
       0,     0,   556,   557,     0,   554,   550,     0,   169,   169,
     169,   170,   171,   568,   569,   165,   164,     0,   169,   169,
     169,     0,   574,   584,   166,   169,   169,   169,   167,   168,
     169,   169,     0,   169,   169,     0,   166,     0,   597,     0,
       0,     0,   623,     0,   622,     0,     0,   599,     0,   598,
       0,     0,     0,     0,   166,   166,   163,     0,     0,   163,
       0,     0,     0,   169,   169,   697,     0,   169,   169,   702,
       0,   182,   183,   184,   185,   186,   187,     0,    85,    86,
      84,   733,     0,     0,     0,     0,     0,     0,   879,   877,
     872,     0,   882,   866,   883,   869,   881,   875,   864,   878,
     867,   865,   884,   880,     0,     0,     0,   749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   780,     0,     0,     0,     0,     0,   792,   794,     0,
       0,   799,   798,     0,     0,   172,     0,     0,     0,   148,
       0,   808,     0,     0,     0,     0,   813,   814,   815,     0,
       0,     0,   821,   837,   841,   843,   846,   845,     0,     0,
       0,   850,   887,   889,     0,   888,   718,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1034,     0,     0,     0,
       0,     0,     0,     0,   916,     0,     0,     0,     0,     0,
       0,     0,     0,   722,     0,     0,     0,     0,   823,     0,
     148,     0,  1044,  1042,     0,     0,   148,  1047,   828,     0,
       0,     0,   834,     0,     0,  1085,   854,   855,     0,   857,
    1118,  1120,  1117,  1116,  1107,     0,     0,     0,  1140,     0,
       0,  1144,  1152,   193,   194,   195,   196,   192,  1167,  1166,
       0,     0,     0,  1169,  1168,   191,     0,     0,     0,  1177,
       0,     0,     0,     0,     0,  1194,     0,  1208,  1207,  1209,
       0,     0,     0,  1180,     0,     0,     0,  1179,  1189,  1188,
    1190,  1186,  1185,  1187,  1211,  1210,  1212,     0,     0,     0,
    1228,   148,     0,   148,  1243,  1238,  1241,     0,     0,   148,
       0,     0,     0,   226,     0,     0,     0,     0,     0,     0,
       0,     0,   297,   296,     0,     0,   288,   299,   301,     0,
     311,   313,   312,   310,   148,   318,     0,     0,     0,   156,
     148,     0,     0,     0,     0,   441,   455,    79,    78,   463,
       0,   458,   161,   162,   160,   451,     0,   148,     0,     0,
       0,   439,   433,     0,     0,     0,     0,     0,     0,   148,
     947,     0,   950,     0,     0,   953,     0,   148,   958,     0,
     961,   962,     0,   964,   965,   966,     0,   970,     0,     0,
     973,     0,   979,     0,     0,     0,   984,   985,   983,     0,
       0,     0,   990,   991,     0,     0,   994,   997,   999,  1001,
       0,     0,  1018,  1020,   937,  1029,   938,     0,     0,  1031,
    1022,     0,     0,   510,   511,     0,     0,   555,     0,   565,
     566,   567,   169,   571,   572,   573,     0,     0,     0,   578,
     579,   163,     0,     0,     0,   169,   585,   586,   587,   588,
     590,   166,   593,   594,     0,   169,     0,     0,     0,   166,
     166,   163,     0,     0,     0,     0,   621,     0,   625,     0,
       0,     0,     0,     0,   166,   166,   163,     0,     0,   163,
       0,     0,     0,     0,     0,   166,   166,   163,     0,     0,
     163,     0,     0,     0,     0,     0,   166,   166,   163,     0,
       0,   163,     0,     0,     0,     0,   166,   166,   163,     0,
       0,     0,   166,   601,   602,   603,   604,   606,     0,   609,
     610,     0,   166,     0,     0,   695,   696,   169,   699,   700,
       0,   732,   148,   734,     0,     0,   738,     0,     0,     0,
       0,     0,   871,   868,   874,   873,   870,   876,     0,   747,
       0,     0,     0,     0,   148,   754,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
     772,   773,     0,   777,   774,   776,     0,     0,   782,   781,
     783,   784,     0,     0,     0,     0,     0,     0,   148,   148,
     797,   178,   174,   179,   173,   176,   175,   177,   803,   804,
     805,     0,     0,   807,   809,   148,   148,     0,   816,   819,
     148,   148,   844,   848,   890,   719,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1075,   915,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   917,     0,     0,     0,     0,     0,   730,   731,
     148,   156,     0,   148,   148,  1050,  1051,     0,     0,   830,
       0,   148,  1081,  1083,   853,     0,  1137,  1138,  1141,  1142,
     191,   191,   191,  1213,  1192,  1191,  1193,  1196,  1195,  1199,
    1198,  1200,  1197,  1205,  1204,  1206,  1202,  1201,  1203,     0,
       0,  1222,  1227,     0,  1244,     0,   148,     0,  1247,     0,
       0,   230,     0,   227,     0,     0,     0,   266,     0,     0,
       0,     0,   148,     0,   303,   136,     0,   396,     0,   417,
     156,   159,     0,     0,   430,     0,   148,   465,   148,     0,
     434,   939,     0,     0,     0,     0,   148,   948,   159,   159,
     159,   148,   954,   159,   156,   159,   159,   148,   967,   159,
     159,   159,   148,   974,   159,   159,   148,     0,   159,   148,
     159,   159,   148,   159,   148,  1008,  1009,     0,     0,   509,
     551,     0,   570,   575,   576,   577,     0,   581,   582,   583,
     589,   169,   166,   595,   612,   613,   614,   615,   616,     0,
     618,   619,   166,     0,     0,     0,   166,   166,   163,     0,
       0,     0,     0,     0,     0,   166,   166,   163,     0,     0,
       0,     0,     0,     0,   166,   166,   163,     0,     0,     0,
     166,   169,   169,   169,   169,   169,     0,   169,   169,     0,
     166,   166,   169,   169,   169,   169,   169,     0,   169,   169,
       0,   166,   166,   675,   676,   677,   678,   680,     0,   683,
     684,     0,   166,   686,   687,   688,   689,   690,     0,   692,
     693,   166,   605,   166,     0,   611,     0,     0,   698,     0,
     735,   159,     0,     0,   159,     0,     0,     0,   746,   159,
     750,   751,   159,   753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   775,   778,   779,
       0,   159,     0,     0,     0,   795,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1076,  1055,     0,  1062,  1063,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,    82,     0,     0,   923,   924,   156,     0,     0,
       0,  1045,  1043,  1053,   829,   831,   156,  1130,  1171,  1170,
    1172,  1214,     0,  1224,  1254,     0,     0,  1249,  1248,   231,
       0,     0,     0,   271,     0,     0,     0,   289,   159,   397,
     401,   418,   420,     0,   428,   462,   466,   467,     0,     0,
       0,     0,     0,   944,   949,   952,   951,   955,   956,   957,
     959,   963,   968,   969,   971,   972,   975,   976,   980,   156,
     159,   987,   156,   988,   992,   156,  1002,   156,     0,     0,
     508,     0,   580,   591,   169,   166,   620,   169,   169,   169,
     169,   169,     0,   169,   169,   166,   169,   169,   169,   169,
     169,     0,   169,   169,   166,   169,   169,   169,   169,   169,
       0,   169,   169,   166,   169,   635,   636,   637,   638,   640,
     166,   643,   644,     0,   169,   169,   664,   665,   666,   667,
     669,   166,   672,   673,     0,   169,   679,   166,     0,   685,
     166,   694,   607,   166,   703,   704,   148,   737,     0,   159,
     740,     0,   148,     0,   748,   752,   148,     0,   759,   760,
     761,   762,   766,   767,   763,   764,   765,     0,     0,   159,
     787,     0,   148,     0,     0,   800,   159,     0,     0,   159,
     159,     0,   847,     0,   180,   180,     0,     0,   180,     0,
     180,  1034,     0,     0,     0,     0,     0,     0,     0,     0,
    1054,     0,     0,   180,   180,     0,     0,     0,     0,     0,
       0,     0,     0,   918,     0,     0,     0,  1034,    83,     0,
     180,     0,  1078,   922,     0,     0,     0,   213,  1256,  1255,
       0,     0,   235,     0,     0,     0,     0,   304,   429,   323,
     940,     0,   148,     0,   981,   982,   986,   993,  1003,   355,
     323,     0,   592,   617,   626,   627,   628,   629,   630,   166,
     632,   633,   169,   655,   656,   657,   658,   659,   166,   661,
     662,   169,   646,   647,   648,   649,   650,   166,   652,   653,
     169,   639,   169,   166,   645,   668,   169,   166,   674,   681,
     166,   691,   608,     0,   159,   741,     0,     0,     0,     0,
       0,   768,   769,   785,     0,     0,     0,   796,   801,     0,
     810,   811,   802,   159,     0,   181,  1034,  1034,    82,     0,
    1034,     0,  1034,   891,   148,     0,  1057,     0,  1060,  1094,
    1061,  1059,  1056,     0,  1034,  1034,    82,     0,     0,  1034,
    1034,     0,     0,  1034,   921,   919,   920,   898,  1034,  1034,
    1078,  1089,     0,  1046,   833,     0,     0,     0,   237,     0,
       0,     0,   324,   325,   345,     0,   188,   943,   363,     0,
     169,   634,   169,   663,   169,   654,   641,   169,   670,   169,
     682,     0,   736,   159,   159,     0,   159,     0,   159,   159,
       0,   159,     0,  1034,   904,   900,  1034,     0,   905,     0,
     899,  1034,     0,  1058,     0,   902,   901,  1034,     0,     0,
     896,   894,  1034,   148,   895,   897,   903,  1089,  1040,     0,
       0,  1079,  1087,  1129,     0,     0,     0,   267,   290,   293,
     291,     0,     0,   148,   189,   190,   942,   553,   631,   660,
     651,   642,   671,   159,   739,   745,     0,   758,   755,   786,
     791,     0,   806,     0,   909,   893,    82,     0,   907,  1095,
       0,   892,    82,     0,   908,     0,  1041,  1091,  1093,     0,
    1086,     0,     0,   272,     0,     0,     0,     0,   188,     0,
     742,   148,   756,   788,   820,  1034,     0,     0,  1034,     0,
     159,  1092,  1088,   236,     0,     0,     0,     0,     0,   941,
     714,   148,   743,   757,   148,   789,   911,     0,  1034,   910,
       0,     0,   238,   283,     0,   282,     0,   744,   790,    82,
     912,    82,  1034,   281,   280,  1034,  1034,   906,   914,   913
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1390,   172,   152,  1237,  2467,  2468,   422,   423,
     424,   425,   153,   154,   155,   677,    91,   796,   445,  1187,
    1655,  1327,  1340,  1323,  1898,  2566,  1387,  2686,  1558,   336,
     749,   752,   755,   763,    63,   359,   365,   369,   372,    68,
     375,    75,   390,   386,   380,   397,    82,   402,    92,    98,
     407,   409,   411,   479,   850,  1624,   413,   416,   105,   432,
     156,   158,  2614,   174,   214,   468,   839,   470,   480,   842,
     847,   482,   484,   853,   487,   855,   498,   858,   860,   501,
     505,   509,   511,   514,   518,   545,   541,  1250,   532,   877,
     882,   874,  1238,   887,   535,   553,   556,   561,   566,   574,
     916,   918,   920,   922,   579,   926,   217,   581,  1725,   235,
     583,   585,   589,   594,   602,   244,  1316,   605,   252,   614,
    1332,   616,   622,   971,  1348,   966,  1766,  1354,  1352,  1768,
     967,  1357,  1359,   628,   631,   626,   254,   262,   264,   669,
    1048,  1414,  1037,  1513,  1942,  2260,  1053,  1046,   911,  1291,
    1295,  1303,  1305,  1926,   269,  1062,  1065,  1073,  2232,  2233,
    2234,  1927,  2601,  2602,  1096,  1099,  2671,  2672,  2668,  2669,
    2717,  2235,  2236,   276,   282,   290,   691,   686,   295,   300,
     302,   701,   708,  1125,  1130,   758,   746,   308,   312,   715,
     318,   722,  1563,   735,   736,  1161,  1156,  1569,  1146,  1575,
    1587,  1583,  1150,   740,   724,   324,   325,   340,  1174,   343,
     349,   773,   776,   770,   351,   354,   781
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2088
static const yytype_int16 yypact[] =
{
    5115,    76,   446,   128, -2088, -2088,  1279,   -94,   399,   617,
     969,    28,  3293,   141,   118,  1186,    55,  5343,   462,  1583,
   -2088,   118,   977,   200,   803,    11,    88,   266,   -27,   507,
     313,   599,  3766,    10,   698,   491,   428,   -27, -2088,   -19,
     102,   801, -2088,   372,   546,   813, -2088,   380, -2088,   155,
    3877,   301,   164,   594,   630,   872,   348,   634,   680,   166,
     671,   -20,   827, -2088, -2088, -2088,  1009,   807, -2088,   213,
      20,   118,   -59,   606,   475, -2088,   714,   807, -2088, -2088,
      98,   807, -2088, -2088, -2088, -2088,   807, -2088, -2088, -2088,
   -2088, -2088, -2088,   109,   690,   739,   750,   135, -2088,   807,
    1417,   807,   807,   920,   807, -2088, -2088, -2088,   564, -2088,
   -2088, -2088, -2088,  4661, -2088, -2088, -2088, -2088, -2088, -2088,
     807, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088,  1155, -2088,   807, -2088,   766, -2088, -2088,
     118,   118,   118,   118,   118,   118, -2088, -2088,   118,   118,
     118,   118, -2088,   678, -2088,   734,  1448,   700,   189,   525,
     684,   -30,  4196,   445,  4712,  4633,   831,  4661,  1460, -2088,
      44,   -89,   873,   797,   503,    48,   885,   -27,   724, -2088,
     840, -2088,   695,   646,   104, -2088,    37, -2088,   512, -2088,
     511,   851,    60, -2088, -2088,  4902, -2088, -2088, -2088,   882,
     966, -2088, -2088, -2088, -2088,   607, -2088, -2088, -2088, -2088,
     521, -2088, -2088,  4902,  4276, -2088, -2088,    53, -2088,   994,
    1015,    80, -2088,   807, -2088,  1017,    45,  1029,    31,   676,
    1043,    33, -2088, -2088, -2088,  1019,  1048,   118,   118,   807,
     807, -2088, -2088,  1067, -2088, -2088, -2088, -2088, -2088,  2997,
   -2088,  1078,     0,   807,  4902,   807, -2088,  1081, -2088, -2088,
   -2088, -2088, -2088,   807,  1074,   118,  1032,   807,  1155,   807,
   -2088,  1033, -2088,  4813, -2088, -2088,   500,  1046,  1075,   807,
   -2088,  1091, -2088, -2088,   -77,  1100,  4902,  1112, -2088,  1123,
     807,  1022, -2088,   551,  1004,  1400,   458,  1126, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088,  1134, -2088,   510,    24,    58,
     116,   233, -2088,   807,   807,   244, -2088,   807,   875,  1137,
   -2088,   807,   807, -2088,  1152,    56,    69,  1163,  1155, -2088,
   -2088, -2088,  1037,   807, -2088, -2088, -2088, -2088,   807, -2088,
    1174,  1176, -2088,   807,   868, -2088, -2088, -2088, -2088, -2088,
   -2088,   807, -2088, -2088,   807, -2088, -2088,   115,   115,  1179,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088,   951,   807,   807,  1196,  1197,  1201, -2088, -2088,   807,
     807,   807, -2088,   807, -2088,  1207, -2088, -2088, -2088, -2088,
     843, -2088,  1209, -2088,  4902,  1210, -2088,   807, -2088, -2088,
   -2088,   807,  1211,  1213,  1213,  4902,   807,   807,   807,   807,
     807,   807, -2088,   807,  4661,  1417,   807,   807, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088,  1417,   807, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,  1220, -2088,
     967,    16, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088,  -108, -2088, -2088, -2088,  1069, -2088,   524,     9,     9,
   -2088, -2088, -2088,  1235, -2088,  1236, -2088, -2088,   -62, -2088,
    1066, -2088, -2088, -2088,  1076, -2088, -2088,  1155, -2088,   807,
     807, -2088,  4902,  4902,  1155, -2088, -2088,  1155, -2088, -2088,
   -2088, -2088,  1155, -2088, -2088,  4902,  1155,   807, -2088, -2088,
    4902, -2088, -2088,    35,  1050,    13, -2088, -2088,  1053,  4902,
     -83, -2088, -2088, -2088, -2088, -2088,  1245,  1246,  1251, -2088,
    1062, -2088, -2088, -2088,   807, -2088, -2088,   470, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088,   511, -2088, -2088,
   -2088, -2088, -2088, -2088,  1071,  1073, -2088, -2088,  1198,  1202,
    1203, -2088, -2088,  1047, -2088,   807,  1267,  1054,  4813, -2088,
    1155, -2088,  1273, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088,  4902,  4902,  4902,
    4902, -2088, -2088,  1277,   118, -2088, -2088,  1280,  1284,  1097,
     807, -2088,   333,  1206, -2088,  1293, -2088,   331,  1215,  4749,
       1,  1295, -2088,  1299, -2088,  1305, -2088,   240, -2088,  1307,
    1308, -2088,  1313, -2088, -2088, -2088,   807, -2088,  4813,  4594,
    1334,   496,  1317,   465,  1224, -2088, -2088, -2088,  1309,   745,
    1323,  1324,   180,   807,   307,   497,   147,  4902,   118,  1553,
     746,    21,   184,    14,    22, -2088,  1314,  1320,  1330, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,   807, -2088,
   -2088, -2088,   807,   807,   807,   807, -2088, -2088,   807,  1155,
     807, -2088,   807,  1417,   807,  1337,  1155, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088,  1369,   276,   359, -2088, -2088,
   -2088,  1372, -2088, -2088, -2088, -2088,  1282, -2088,  1376,  1377,
    1300,  1384, -2088,  1385, -2088,  1393,  1312,  1396,   494,   442,
     522,   469,   527,  1399,   591, -2088, -2088,  1401,  1404,  1407,
   -2088, -2088,  1408, -2088, -2088, -2088, -2088,  1413, -2088, -2088,
    1420, -2088, -2088,  1424, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088,   807,   807, -2088,   807,  1042,   807,   807, -2088,  1976,
   -2088,   906,  1418, -2088,  1055,  1426, -2088, -2088,   -31,   807,
     807, -2088,  1437, -2088, -2088,  1427,  1142,   807,  1438,   625,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088,  1449,  1450,   807,   807,   807,  1453,
     118,  1454,  1455,  1155,  4902, -2088, -2088, -2088, -2088, -2088,
    1155, -2088, -2088,   807,   807,   807,  4902,   807,  1417,   807,
   -2088,   807, -2088, -2088, -2088, -2088, -2088,  1447,  1461, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088,   445, -2088,   807, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088,  4902,   807,  1155,  1155,   -31,   -31,   -31,
    1155,  1417,   807,  1155, -2088, -2088,   807, -2088,     3,  1302,
    1463,  1456, -2088, -2088,  1155,  1321,  1328, -2088,  1466,  1468,
    1482,  1099,   807,  4599,    -1,   495, -2088, -2088, -2088,   807,
     169,  1012, -2088,  1232, -2088,  1553,  1238,   571,  1208,    90,
   -2088, -2088,   807, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088,   807,  1504, -2088, -2088, -2088,   -31, -2088,
   -2088, -2088, -2088, -2088,  4784, -2088, -2088,  1511,  1518,   807,
    1519,  1524,  1527,   752,   752,  -109,  1529,  1530,  1532,  1533,
    1269,  1270,  1536,  1537,  1540,    52,    52,  -109,  1545,  1546,
    -109,  1547,  1548,  5344,  1549,  1550, -2088, -2088,  1552,  1554,
     477, -2088,  1556,  1558,  1559,  1560,   752,  -109,  1564,  1566,
   -2088,  1567, -2088, -2088,  1155,   730,  1167,  1325,   -26,  1331,
    1446,  2450,   426,  1569,    99,  1439,  1470,   466,  1613,  1538,
     537,  1338,  1474,  1576,  1347,   178,   159,   350,   430,  4902,
    1553,  1543,   -45,  1341,  1374,  1581,    40, -2088, -2088,   480,
    1584,  1582, -2088, -2088, -2088,  1585,  1378,   182,  1553,  1382,
   -2088, -2088, -2088,   118,  1593,  1594,   807, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088,     8, -2088,  2678, -2088,
     807, -2088,   807, -2088, -2088, -2088, -2088,   807,   807,   807,
     465,  4902, -2088,  1595,  1104, -2088, -2088,   807, -2088, -2088,
     807,  4902,   807, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088,   118,   807, -2088,
     807,   465,  1596, -2088,   807,   807, -2088,   118, -2088, -2088,
   -2088,   132,  1598,  1601, -2088, -2088, -2088, -2088, -2088,   807,
     807, -2088, -2088,  1417,   807,   807, -2088, -2088, -2088, -2088,
    1606,   807, -2088,   807,  1502, -2088,   807, -2088,   807,  1508,
   -2088,  1616, -2088,   901,   901,   593,   901,  1617, -2088,   598,
   -2088, -2088,  1618,  1619,   611,  1624, -2088,  1625,  1627,  1632,
   -2088,   622,   661,  1633,  1636,  1639, -2088, -2088,  1641,  1643,
    1645, -2088,   901,   901,   901,   807, -2088, -2088, -2088,   807,
   -2088,   807,   533,  4902, -2088,   807, -2088,  4813,  1155, -2088,
   -2088,  1646, -2088, -2088,  1648, -2088, -2088, -2088, -2088,  1642,
    1032, -2088,   807,  1647,   807,   807,   807,  1035, -2088,  1623,
    1651,   807,   807,    -2,  1652,   118,   118, -2088,  1155,   807,
    1657,  1659,  1660,  1155,  4902, -2088,   807, -2088, -2088, -2088,
     807,   807,   807,  1155,  4902,   -31, -2088, -2088, -2088, -2088,
    1417,   807,  1662,   -31,   807,  1599,  1635,   400, -2088,  1665,
   -2088, -2088,  1018,  3849,   807, -2088,   807,  1667,  1674,   807,
   -2088,  1671,   795,  4661,  1443,   553,  1445,   113,  4902,   581,
   -2088,   251,  1551,   139,   615,  1452,   222, -2088, -2088,   414,
    1520,   639,  1565,   339,  1553,   992, -2088,  1681,  1441, -2088,
     550, -2088, -2088, -2088, -2088,  1553,  1484, -2088, -2088, -2088,
   -2088, -2088,   807, -2088,   807, -2088, -2088,   807,   807, -2088,
     807, -2088,   807, -2088, -2088, -2088, -2088,  1498,   807, -2088,
     807,    27, -2088, -2088,  1690,  1692, -2088,   807,   752,   752,
     752, -2088, -2088, -2088, -2088, -2088, -2088,  1693,   752,   752,
     752,   437, -2088, -2088,    52,   752,   752,   752, -2088, -2088,
     752,   752,  1694,   752,   752,  1695,    52,   950, -2088,  1696,
    1698,  1699, -2088,   479, -2088,   582,   907, -2088,  1013, -2088,
    1430,  1701,  1703,  1704,    52,    52,  -109,  1707,  1708,  -109,
    1711,  1709,  1713,   752,   752, -2088,  1717,   752,   752, -2088,
    1722, -2088, -2088, -2088, -2088, -2088, -2088,   118, -2088, -2088,
   -2088,  4661,  1204,   118,   807,  1335,  1367,   620, -2088, -2088,
   -2088,   708, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088,  1724,   118,   807, -2088,   118,  1725,
     807,  4902,   118,  1432,  1493,  1494,   245,   267,  1496,   394,
    1415,  1428,  1732,  1733,  1736,  2450,  1737,  1738,  1739,  1442,
    1444,  1147,  1740,   118,   807,  1381,  1440, -2088, -2088,   118,
    4902, -2088, -2088,  4902,   807,    -8,  1742,   118,   807,  1155,
     118, -2088,  1743,  4902,  4902,   807, -2088, -2088, -2088,   118,
     118,  4902, -2088, -2088, -2088, -2088, -2088, -2088,  4902,   807,
     118, -2088, -2088, -2088,   807, -2088, -2088,  1745,   807,  1528,
     289,   807,  1534,   807,   482,   807, -2088,   807,  1539,  1542,
     807,   807,   807,   807, -2088,   807,   807,   807,   807,    30,
     807,   807,  1544, -2088,   807,   807,   807,   807, -2088,  4902,
    1155,  1748,  4902,  4902,   807,   807,  1155, -2088,   807,   807,
     807,  4902, -2088,   807,   807, -2088, -2088, -2088,  1749, -2088,
   -2088, -2088, -2088, -2088, -2088,  1752,   807,   807, -2088,   807,
     807, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
    1755,  1756,  1753, -2088, -2088,   901,  1757,  1759,  1763, -2088,
    1794,  1795,  1796,  1797,  1800, -2088,  1801, -2088, -2088, -2088,
    1802,  1803,  1805, -2088,  1807,  1808,  1806, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088,   807,   807,   807,
   -2088,  1155,   807,  1155, -2088, -2088, -2088,  1032,   807,  1155,
     807,   807,   807, -2088,   807,   807,  1809,   807,  1811,  1810,
     807,   807, -2088, -2088,  1813,  4902, -2088, -2088, -2088,   807,
   -2088, -2088, -2088, -2088,  1155, -2088,   854,   807,   854,   -31,
    1155,  4902,   807,   807,  1814, -2088, -2088, -2088, -2088, -2088,
     807, -2088, -2088, -2088, -2088, -2088,  4902,  1155,  4902,   807,
    1815, -2088, -2088,  4902,  1816,  1819,  1823,  1826,  4902,  1155,
   -2088,  4902, -2088,  4902,  4902,  4661,  4902,  1155, -2088,  4902,
   -2088, -2088,  4902, -2088, -2088,  4661,  4902, -2088,  4902,  4902,
    4661,  4902, -2088,  4902,  4902,   807, -2088, -2088, -2088,  4902,
    4902,  4902, -2088, -2088,  4902,  4902, -2088, -2088, -2088, -2088,
    4902,  4902, -2088, -2088, -2088, -2088, -2088,   807,   807, -2088,
   -2088,  1829,   807, -2088, -2088,  1830,  1833, -2088,   807, -2088,
   -2088, -2088,   752, -2088, -2088, -2088,  1835,  1836,  1837, -2088,
   -2088,  -109,  1834,  1839,  1840,   752, -2088, -2088, -2088, -2088,
   -2088,    52, -2088, -2088,  1842,   752,  1843,  1844,  1845,    52,
      52,  -109,  1847,  1848,  1860,  1121, -2088,  1135, -2088,  1143,
    1574,  1861,  1862,  1863,    52,    52,  -109,  1849,  1865,  -109,
    1866,  1577,  1867,  1868,  1869,    52,    52,  -109,  1871,  1872,
    -109,  1875,  1612,  1879,  1880,  1881,    52,    52,  -109,  1883,
    1884,  -109,  1885,  1887,  1889,  1890,    52,    52,  -109,  1893,
    1896,  1897,    52, -2088, -2088, -2088, -2088, -2088,  1899, -2088,
   -2088,  1901,    52,  1902,  1903, -2088, -2088,   752, -2088, -2088,
    1904, -2088,  1155, -2088,  4902,   807, -2088,   807,  4902,   807,
    1905,  1167, -2088, -2088, -2088, -2088, -2088, -2088,  1906, -2088,
    4902,   118,  1907,  4902,  1155, -2088,  1918,  1167,   807,   807,
     807,   807,   807,   807,   807,   807,   807,  1920,  1933, -2088,
   -2088, -2088,  1934, -2088, -2088, -2088,  1939,  1940, -2088, -2088,
   -2088, -2088,   807,  4902,   807,  1941,  1167,   118,  1155,  1155,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088,   807,  1417, -2088, -2088,  1155,  1155,   807, -2088, -2088,
    1155,  1155, -2088, -2088, -2088, -2088,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,  2376, -2088,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   659,
    1942,   807, -2088,   807,   807,   807,  1945,  1946, -2088, -2088,
    1155,   -31,  1947,  1155,  1155, -2088, -2088,  1417,   807, -2088,
    1948,  1155, -2088, -2088, -2088,  1949, -2088, -2088, -2088, -2088,
     901,   901,   901, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,  1167,
     807, -2088, -2088,   807, -2088,   807,  1155,   807, -2088,  1417,
     807, -2088,   807, -2088,  1877,  1951,  1952, -2088,  1954,   807,
     807,  1955,  1155,  4902, -2088, -2088,   807, -2088,   807, -2088,
     -31,  1018,   807,  1956, -2088,   807,  1155, -2088,  1155,   511,
   -2088, -2088,  1957,  1958,  1960,  1961,  1155, -2088,  1018,  1018,
    1018,  1155, -2088,  1018,   -31,  1018,  1018,  1155, -2088,  1018,
    1018,  1018,  1155, -2088,  1018,  1018,  1155,  4902,  1018,  1155,
    1018,  1018,  1155,  1018,  1155, -2088, -2088,  1963,   511,  1964,
   -2088,   807, -2088, -2088, -2088, -2088,  1966, -2088, -2088, -2088,
   -2088,   752,    52, -2088, -2088, -2088, -2088, -2088, -2088,  1967,
   -2088, -2088,    52,  1968,  1969,  1970,    52,    52,  -109,  1972,
    1973,  1974,  1975,  1978,  1979,    52,    52,  -109,  1977,  1981,
    1983,  1984,  1986,  1988,    52,    52,  -109,  1982,  1991,  1993,
      52,   752,   752,   752,   752,   752,  1996,   752,   752,  1998,
      52,    52,   752,   752,   752,   752,   752,  1999,   752,   752,
    2000,    52,    52, -2088, -2088, -2088, -2088, -2088,  2001, -2088,
   -2088,  2004,    52, -2088, -2088, -2088, -2088, -2088,  2005, -2088,
   -2088,    52, -2088,    52,  2006, -2088,  2007,  2008, -2088,  4813,
   -2088,  1018,  2010,  4902,  1018,   807,  4902,  2012, -2088,  1018,
   -2088, -2088,  1018, -2088,  4902,  2014,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807, -2088, -2088, -2088,
    4902,  1018,   807,  4902,  2016, -2088,  1417,  1417,  4902,  1417,
    1417,  4902,  4902,  1417,  1417,   807,   807,   807,   807,   807,
     807,  1167,   807,   807,   807,  1469,  1557,  1609,  1621,  1670,
    1672,  1673,  2376, -2088,  1675, -2088, -2088,  1167,   807,   807,
     807,   807,  1167,   807,   807,   807,   807,   807,   807,  1155,
     807,  1503,  1167,   807,   807, -2088, -2088,   -31,   118,  2021,
    2023, -2088, -2088, -2088, -2088, -2088,   -31,  2024, -2088, -2088,
   -2088, -2088,   807, -2088, -2088,  1417,   807, -2088, -2088, -2088,
    1096,  2025,  2026, -2088,   807,  2028,   854, -2088,  1018, -2088,
   -2088, -2088, -2088,  2029, -2088, -2088, -2088, -2088,  2033,  2037,
    2038,  4902,  2040, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,   -31,
    1018, -2088,   -31, -2088, -2088,   -31, -2088,   -31,  2041,  2043,
   -2088,   807, -2088, -2088,   752,    52, -2088,   752,   752,   752,
     752,   752,  2044,   752,   752,    52,   752,   752,   752,   752,
     752,  2045,   752,   752,    52,   752,   752,   752,   752,   752,
    2046,   752,   752,    52,   752, -2088, -2088, -2088, -2088, -2088,
      52, -2088, -2088,  2047,   752,   752, -2088, -2088, -2088, -2088,
   -2088,    52, -2088, -2088,  2048,   752, -2088,    52,  2049, -2088,
      52, -2088, -2088,    52, -2088, -2088,  1155, -2088,  4902,  1018,
   -2088,  2050,  1155,   807, -2088, -2088,  1155,   807, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088,   807,   807,  1018,
   -2088,  2051,  1155,   807,  1417, -2088,  1018,   807,  1417,  1018,
    1018,  4902, -2088,   807,  2052,  2052,   807,   807,  2052,  1167,
    2052, -2088,  4902,  2450,  2053,  2056,  2057,  2058,  2059,  2063,
   -2088,   118,  1167,  2052,  2052,   807,   807,  1167,   807,   807,
     807,   807,   807, -2088,  1417,   807,  2064, -2088, -2088,   807,
    2052,   118,    41, -2088,  2065,   118,  2067, -2088, -2088, -2088,
    2068,   807, -2088,  2069,  2071,  1895,   807, -2088, -2088,   -16,
   -2088,  2072,  1155,  4902, -2088, -2088, -2088, -2088, -2088, -2088,
     -16,   807, -2088, -2088, -2088, -2088, -2088, -2088, -2088,    52,
   -2088, -2088,   752, -2088, -2088, -2088, -2088, -2088,    52, -2088,
   -2088,   752, -2088, -2088, -2088, -2088, -2088,    52, -2088, -2088,
     752, -2088,   752,    52, -2088, -2088,   752,    52, -2088, -2088,
      52, -2088, -2088,   807,  1018, -2088,  4902,  4902,   807,  4902,
     807, -2088, -2088, -2088,  4902,  4902,   807, -2088, -2088,  4902,
   -2088, -2088, -2088,  1018,  2074, -2088, -2088, -2088,  1167,   807,
   -2088,  2075, -2088, -2088,  1155,  2076, -2088,  2078, -2088, -2088,
   -2088, -2088, -2088,  2079, -2088, -2088,  1167,   807,  2082, -2088,
   -2088,   807,  4902, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
      41,  1685,  1553, -2088, -2088,  2084,  2086,  2087, -2088,  2036,
    2085,   108, -2088, -2088, -2088,  4902,    -7, -2088, -2088,  2089,
     752, -2088,   752, -2088,   752, -2088, -2088,   752, -2088,   752,
   -2088,  4813, -2088,  1018,  1018,   807,  1018,  2091,  1018,  1018,
     807,  1018,   807, -2088, -2088, -2088, -2088,  2092, -2088,   807,
   -2088, -2088,  2093, -2088,   807, -2088, -2088, -2088,  2095,   807,
   -2088, -2088, -2088,  1155, -2088, -2088, -2088,  1685, -2088,  1746,
    1706,  1553, -2088, -2088,  2096,  2097,  2099, -2088, -2088, -2088,
   -2088,   887,   887,  1155, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088,  1018, -2088, -2088,  2100, -2088,  4661, -2088,
   -2088,  2101, -2088,  1167, -2088, -2088,  1167,   807, -2088, -2088,
     807, -2088,  1167,   807, -2088,  4902, -2088,  1746, -2088,   118,
   -2088,  2102,  2103, -2088,   807,   807,   807,   807,    -7,  2104,
    4661,  1155, -2088,  4661, -2088, -2088,   807,  2108, -2088,   807,
    1018, -2088, -2088, -2088,  2109,  2111,   807,  2112,   807, -2088,
   -2088,  1155, -2088, -2088,  1155, -2088, -2088,  2114, -2088, -2088,
    2115,  2117, -2088, -2088,  2118, -2088,  2119, -2088, -2088,  1167,
   -2088,  1167, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2088, -2088,    -3, -2088,   672, -2088, -1391,  -983,  1523, -2088,
     741,  -384,  1851,   -49,    43, -2088, -1629,  1600,  1822,  -847,
     338,  -842,  1045,  1614, -2088, -1134, -2088,  -667, -1054, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088,  -535,  -473, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088,  -403, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -1433, -2088, -2088, -2088, -2088, -2088,  -644, -2088, -2088,
   -2088, -2088, -2088, -2088,   444, -2088, -2088, -2088, -2088,  -132,
    -654, -1509,  -494, -2088, -2088, -2088, -2088,  -558,  -541, -2088,
   -2088, -2087, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088,  1402, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088, -2088,
   -2088, -2088, -2088, -2088, -2088, -2088, -2088
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1227
static const yytype_int16 yytable[] =
{
      67,   348,  1872,  1391,   671,  1087,   851,  2016,   104,  2018,
    1061,  1064,   367,  1486,   106,   291,  2612,   879,   106,  1891,
    1227,  1228,  1229,    64,    65,  2684,  1091,  1100,   106,   287,
     265,    64,    65,    64,    65,  1939,   617,   311,   629,   875,
    1892, -1077,   305,  1893,  1622,  1468,   342,  1723,   885,   353,
     612,   830,   358,   542,  1894,  1325,   364,   603,   562,   371,
     771,   833,   106,   374,   376,  1282,  1185,   385,    99,  1338,
     392,   396,   706,   774,   399,   289,   577,  1895,   403,   388,
    1559,  1311,  1564,   404,   840,  1462,   608,   100,   968,   519,
     747,   109,   106,   255,  1896,  1393,   417,   421,   426,   427,
     431,   433,   400,   520,   109,    64,    65,  1306,  1594,  1595,
    1596,    64,    65,   543,   405,  1342,   389,   437,  1345,   837,
     106,  1101,   106,   533,   750,   521,  1418,  1102,  1283,   111,
     856,    64,    65,   111,  1675,  1376,  1235,  1536,   485,   101,
     414,   841,    54,   111,   522,   791,   486,   848,   618,  1537,
      64,    65,   446,  1284,   256,  1326,   436,   969,    64,    65,
    1685,   523,    64,    65,   524,   558,   415,    64,    65,    64,
      65,   563,    64,    65,   157,   478,   257,   111,   880,  1463,
     499,   707,   753,  1066,   849,    64,    65,  1067,  1307,    76,
     525,   526,    64,    65,   857,  1451,   672,  1056,   266,   173,
     609,  1093,   838,   673,   674,  1449,   381,   111,   886,   792,
    1339,   114,  1394,   267,   534,   114,   245,   377,  1476,   115,
     116,   102,   619,   115,   116,   114,   500,   258,   508,  1186,
     513,   517,  1285,   115,   116,   111,  1464,   111,   544,   675,
     610,   253,   527,  1690,   696,   604,   756,    64,    65,  1236,
     117,  1299,   528,   575,   974,   578,   636,   637,  1068,   114,
     368,  1724,   306,   117,  2613,  1419,  1860,   115,   116,  1623,
     678,   263,   680,  2685,   268,   564,   620,   793,  1680,  1069,
     682,   685,  1286,   688,   692,   307,   694,  1469,  1862,   114,
     613,  1452,    64,    65,  2678,   309,   704,   115,   116,  1097,
     621,   975,   630,   565,   119,  1092,   714,   716,   119,  1116,
     292,  1487,   529,   530,  1477,   103,  1121,   114,   119,   114,
     293,   382,  1103,   881, -1077,   115,   116,   115,   116,   690,
     759,   760,   762,  1940,   764,   406,   951,  1420,   767,   768,
    1070,   772,  1897,   401,   676,   952,   953,   940,   941,   780,
     782,  1676,   119,   149,   775,   783,  1460,   149,   150,   151,
     786,   788,   150,   151,   794,   383,   384,   149,   789,   795,
    1039,   790,   150,   151,  1480,   471,  1293,  1686,  1641,   277,
    1421,   472,   119,   531,   337,   559,  1645,  1122,   259,   800,
     801,  1057,   954,   310,   942,  1094,   805,   806,   807,  1126,
     808,   149,  1450,    77,  1649,   378,   150,   151,   560,  2679,
     119,  1040,   119,  1841,   815,  1865,  1519,  1681,   816,    66,
     473,   757,   319,   821,   822,   823,   824,   825,   826,   976,
     827,   149,   421,   831,   832,   260,   150,   151,  1071,    78,
    1857,  1692,   421,   834,  1215,   474,   341,  1531,    64,    65,
    1453,  1736,  1737,   476,  2680,   352,   109,   363,    55,   149,
    1691,   149,   379,  1886,   150,   151,   150,   151,   761,  1123,
    1127,   320,  1058,  1478,   893,   894,  1095,   829,    64,    65,
     321,   304,  1360,  1861,  1770,    64,    65,  1231,  1424,  1682,
     475,  1361,  1362,  1771,  1772,   301,   863,   864,  1738,    56,
    1032,   109,   977,  1142,   338,  1863,  1699,  1470,   322,   538,
      79,  1973,   978,  1918,   872,  1425,   303,    57,  1426,   737,
     955,   956,   943,   944,  1818,  1287,  1033,  1821,  1039,   927,
     895,   350,  1683, -1226,   476,   477,   896,  1600,  1363,  1124,
    1773,   892,  1041,   979,   743,   215,    58,  1415,  1427,   567,
     326,  1457,  1128,   393,   697,   725,  1151,  1042,  1043,   568,
    1039,   216,  1143,  1700,    59,  1060,   876,   109,    60,  1040,
     965,   270,   923,   271,    64,    65,  1428,  1709,   738,  1429,
      61,  1693,  2718,  1147,   897,   339,   569,  1781,  1153,   984,
     698,   539,    80,   957,   355,   945,  1782,  1783,  1144,   898,
     912,  1040,   844,   958,   959,   946,   947,   939,   960,    64,
      65,  1455,   718,   899,   727,   117,   360,   744,  1456,   900,
    1702,  1063,  1129,   540,   901,  1152,  1739,  1740,  1701,  1196,
    2741,  1712,  1866,   983,   961,   356,   948,  1197,  1694,   361,
     699,   547,  1148,  1784,    81,    83,   394,  1154,  1044,  1045,
    1059,   586,  1158,  1072,  1560,  1288,  1034,  2486,  1443,  1566,
     117,   570,    64,    65,  1416,   323,  1364,  1365,  1774,  1775,
     590,   719,  1572,  1458,  1672,  1107,   366,   902,   107,  1108,
    1109,  1110,  1111,  1580,   362,  1112,   159,  1114,   272,  1115,
     421,  1117,  1430,   236,   587,   845,   903,   571,   261,  1741,
    1041,   904,  1678,   905,  1471,   294,  1923,  1289,  1035,  1742,
    1743,  1159,   745,  1561,  1145,  1042,  1043,  1710,  1567,   398,
    1178,   408,  1584,  1431,   395,  1842,   117,   906,   907,  1542,
     739,  1573,  1041,  1290,  1036,   908,  1687,    62,   591,  1366,
    1744,  1776,  1581,   387,   410,   700,   273,  1042,  1043,  1367,
    1368,  1777,  1778,   909,  1369,   412,  1779,   434,  1169,  1170,
     110,  1171,  1173,  1175,  1176,   572,   733,    84,   296,   623,
     447,  1785,  1786,   846,  1711,  1444,  1188,  1189,  1301,   592,
    1370,  1585,  1780,  1193,  1194,  1050,  1088,   624,   274,    85,
     548,  1673,  2019,    86,  1149,   458,   720,   275,   588,  1155,
     459,   278,   391,  1200,  1201,  1202,  1044,  1045,   481,   910,
      64,    65,  1381,  1845,  1843,   112,   573,   593,   469,  1679,
    1210,  1211,  1212,   721,  1214,   421,  1216,   313,  1217,   246,
      64,    65,   448,   449,   450,   451,   452,   453,  1044,  1045,
     454,   455,   456,   457,  1787,    87,  1642,   810,   811,  1220,
     327,  1222,   483,  1688,  1788,  1789,  1051,  1089,  2177,  1790,
     328,  1224,   625,  1160,   510,  1562,   297,  1844,   421,  1232,
    1568,    64,    65,  1234,  2185,    64,    65,  1663,   536,   118,
     787,  1382,    83,  1574,    88,  1791,   537,   329,  1249,  1251,
      64,    65,    89,    90,  1582,  1221,  1292,  1294,  1297,  2076,
    1696,   546,  1846,  2204,  1302,   549,   554,  1697,  1321,  1308,
    1179,  1180,  1792,   314,  1351,   247,  2268,  2269,  2270,  2089,
    1309,  1793,  1794,    64,    65,   315,   555,   248,   557,   634,
     635,   357,  2573,  1586,  2126,  1322,  1317,  2129,  1052,  1090,
     576,   279,   298,  1553,  1554,  2137,  1664,   280,  2140,   281,
     370,   299,  1383,  1384,   582,  1847,  2148,   687,  2597,  2151,
     428,   249,   330,   550,  1756,  1757,  2158,  1385,  1795,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   584,   331,   606,
     748,   751,   754,  1454,    84,   551,  2271,   316,  1386,   250,
    2575,  1758,    64,    65,   552,    64,    65,  1665,  1666,   607,
     317,   611,   251,   632,  1479,   848,    85,  1803,  1804,  1296,
    2015,   429,  1667,  1485,   615,    64,    65,   695,    64,    65,
      64,    65,  1652,  1653,   332,    64,  1172,  1514,   627,  1515,
     702,   107,    93,   633,  1516,  1517,  1518,  2644,  2645,  1182,
    1183,  2648,   849,  2650,  1524,   237,   333,  1525,    94,  1527,
    1555,  1556,   638,  1668,  1805,  2655,  2656,    64,    65,   703,
    2660,  2661,    87,   670,  2664,  1529,   681,  1530,   109,  2665,
    2666,  1533,  1534,   238,  1616,   705,  1796,  1797,  1557,    64,
      65,   334,    64,  1248,  2258,   709,  1540,  1541,  1522,  1523,
     421,  1543,  1544,   430,   683,  1654,   711,   335,  1546,   717,
    1547,    88,  1703,  1549,   723,  1550,    64,    65,  1603,    89,
      90,   741,   373,   110,  2704,  2093,  2094,  2705,   742,  1759,
    1760,   766,  2708,    95,   765,    64,    65,   799,  2711,  2102,
    2103,  1878,  1879,  2714,  1192,  2480,   769,  2111,  2112,  1704,
     779,   239,  1597,   712,   818,   819,  1598,   777,  1599,  1798,
      64,    65,  1602,  2291,  1388,  1389,   240,  2646,   784,  1799,
    1800,   785,  2095,   798,  1801,   684,    96,  1608,   112,  1611,
     438,  1613,  1614,  1615,  1617,  2657,  2104,  2309,  1620,  1621,
     802,   803,  1806,  1807,  2113,   804,  1629,    64,    65,  1834,
    1802,   809,  1761,  1635,   812,   814,  1705,  1636,  1637,  1638,
     418,    97,  1762,  1763,   420,   835,  2756,   421,  1643,  2759,
     160,  1646,   161,  1610,   713,   836,   241,   843,  2439,   852,
     854,  1658,   859,  1659,   861,   878,  1661,   117,   883,  2770,
     888,   889,   118,  1764,  2452,   890,  2342,   891,   913,  2457,
     914,   439,   162,  2777,   915,  2351,  2778,  2779,   917,   919,
     163,   921,   924,  1706,  2360,  1808,   935,   242,   929,   925,
    1650,   934,   440,   441,   936,  1809,  1810,   243,   937,  1714,
     442,  1715,   938,   949,  1716,  1717,  1670,  1718,   950,  1719,
     970,  2567,   962,   972,  2570,  1721,  2572,  1722,   443,   973,
    2096,  2097,   980,   981,  1728,  2735,  1811,   982,   444,  2584,
    2585,  2738,  1038,  1047,  2105,  2106,  1049,  1054,   164,  1055,
    1075,  1104,  2114,  2115,  1106,  1098,  2599,  1105,    64,    65,
    1838,  1118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      64,    65,  1840,  1120,  1388,  1389,  1131,   165,  2775,  1132,
    2776,  1133,  1134,  2098,    64,    65,  1883,  1135,  1136,  1835,
    1137,  1837,  1839,  2099,  2100,   166,   167,  2107,  1138,  1139,
    1021,  1140,   168,  1157,   169,  2116,  1162,  2108,  2109,  1163,
    2471,  1164,  1165,  1850,  1022,  2117,  2118,  1853,  1166,  2475,
      64,    65,  1181,  1023,  2101,  1167,   418,   419,   420,  1168,
    1184,   170,  1191,  1024,  1833,    64,    65,  1856,  2110,  1388,
    1389,  1882,  1884,    64,    65,  1885,  2119,  1388,  1389,  1190,
    1195,  1890,  1218,  1198,  1199,  1901,  2571,  1203,  1205,  1206,
    1241,   725,  1907,  1025,   515,    69,  1219,  1239,  1240,  2583,
    1245,    70,  2494,  1246,  2588,  2496,  1912,  1243,  2497,   107,
    2498,  1914,  1204,  1026,  1244,  1916,  1247,  1919,  1920,  1298,
    1922,  1924,  1925,  1304,  1928,  1300,   171,  1931,  1932,  1933,
    1934,   460,  1935,  1936,  1937,  1938,  1941,  1943,  1944,  1310,
      71,  1946,  1947,  1948,  1949,  1314,   109,   726,  2209,   461,
     727,  1955,  1956,  1315,  1318,  1958,  1959,  1960,  1027,  1319,
    1962,  1963,  1320,  1328,  1329,    72,   462,  1330,  1331,  1333,
    1334,  1335,  1336,  1966,  1967,  1337,  1968,  1969,   463,  1343,
    1344,  1396,  1346,  1347,  1353,  1355,   728,  1356,  1448,  1358,
    1371,   110,  1372,  1392,  1373,  1374,   464,  1028,  1377,  1395,
     465,  1378,  1379,  2263,  1417,  1423,  1445,  1422,  1442,  1446,
      73,  1447,   466,  1461,  1465,  1466,  1467,  1473,  1472,  1475,
    1474,   729,  1029,  1481,  1989,  1990,  1991,  1483,  1484,  1993,
    1521,  1532,   218,  1538,  1995,  1998,  1539,  2000,  2001,  2002,
    1545,  2003,  2004,  1548,  2006,  2277,   112,  2009,  2010,  1551,
    1552,   467,  1565,  1570,  1571,    74,  2013,   219,  1576,  1618,
    1577,  1030,  1578,  1031,  2017,  1432,  1579,  1647,  1588,  2022,
    2023,  1589,   730,  1590,  1076,   731,  1591,  2025,  1592,  1593,
    1997,  1605,  1077,  1606,  1607,  1619,  2029,  1625,  1078,  1612,
     220,  1630,  1433,  1631,  1632,  1434,  1644,   221,  1435,   732,
    1651,  1660,   733,  1648,  -438,   117,  1662,   222,   223,  1079,
     118,  1671,   734,  1674,   224,  1707,  1698,  1695,  1708,  1684,
    1689,  1713,  2057,  1720,  1726,  1436,  1727,  1732,  1751,  1754,
    1812,  1765,  1080,  1767,  1769,  1482,  1813,   225,  1814,  1815,
    1081,  1819,  1820,  1823,  2065,  2066,  1822,  1824,  2042,  2068,
    2734,  1827,  1867,  1437,   226,  2071,  1438,  1830,  2048,  1848,
    1852,  1858,  1859,  2053,  1864,  1868,  1869,  1870,   227,   228,
    1871,  1873,  1874,  1875,  1880,   229,  1899,  1082,  1904,  1876,
    1915,  1877,  1917,  1952,  1964,  1083,  1965,  1972,  1921,  1528,
    1970,  1971,  1974,  1929,  1975,   230,  1930,  1976,  1945,  1535,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  1977,  1978,
    1084,  1979,  1980,   231,  1981,  1982,  2466,  1983,  1984,  1985,
    1988,  1085,  1986,  1987,  2005,  2007,  2008,  2011,  2024,  2030,
    2443,  2032,  2424,  2425,  2033,  2427,  2428,  1086,  2034,  2431,
    2432,  2035,  2172,  2067,  2173,  2069,  2175,  2070,  2077,  1439,
    2073,  2074,  2075,  2078,  2120,  2079,  2082,  2131,  2084,  2085,
    2086,  2090,  2091,  2127,   232,  2186,  2187,  2188,  2189,  2190,
    2191,  2192,  2193,  2194,   233,  2092,  2121,  2122,  2123,  2128,
    1440,  2130,  2132,  2133,  2134,  2138,  2139,  1626,  1627,  2200,
    2141,  2202,  2142,   288,  2143,  2144,  2145,  2149,  2150,  2280,
    2152,  2478,  2153,   234,  2154,  2155,  1441,  2159,  2208,   421,
    2160,  2610,  2161,  2163,  2212,  2164,  2166,  2167,  2444,  2169,
    2176,  2178,  2181,  2215,  2216,  2217,  2218,  2219,  2220,  2221,
    2222,  2223,  2224,  2184,  2195,  2237,  2238,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2196,  2251,  2197,
    2252,  2253,  2254,  2198,  2199,   817,  2203,  2250,  2670,  2255,
    2256,  2259,  2265,  2267,   421,  2264,  2281,  2282,  2283,  2286,
    2445,  2294,  2299,  2300,   435,  2301,  2302,  2328, -1090,  2330,
    2332,  2335,  2446,  2337,  2338,  2339,  2343,  2344,   797,  2345,
    2346,  2352,  1177,  2347,  2348,  2353,  2361,  2272,  2354,  2355,
    2273,  2356,  2274,  2357,  2276,  2362,   421,  2278,  2363,  2279,
    2370,  1341,  2373,  2381,  2384,  2387,  2284,  2285,  2388,  2390,
    2393,  2394,  2395,  2289,  2398,  2290,  2403,  2670,  2407,  2293,
    2423,  2447,  2295,  2448,  2449,  2473,  2451,  2474,  2476,  2229,
    2482,  2483,  2485,   497,  2488,   504,   507,  2489,   512,   516,
    2557,  2490,  2676,  2491,  2560,  2493,  2499,  2500,  2509,  2518,
    2527,  2533,  2537,  2540,  2546,  2554,  2565,  2719,  2576,  1831,
    2577,  2749,  2578,  2579,  2580,  1836,   580,  2581,  2331,  2596,
    2603,  2605,  2298,  2606,  2608,  2609,  2682,  2615,  2643,  2649,
    2594,  2652,  2653,  2654,   595,   601,  2659,  1849,  2673,  2677,
    1851,  2674,  2675,  2687,  1855,  2698,  2706,  2618,  2709,  2712,
    2450,  2721,  2722,  2723,  2730,  2733,  2667,  2743,  2744,  2750,
     693,  2329,  2758,  2720,  2762,  1881,  2763,  2765,  2769,  2771,
    2396,  1887,  2772,  2773,  2774,   679,  2716,     0,     0,  1900,
    1141,     0,  1903,     0,     0,     0,     0,   689,     0,     0,
       0,  1908,  1909,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1913,     0,     0,     0,     0,   710,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     778,     0,  2401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2408,  2409,  2410,  2411,  2412,  2413,  2414,
    2415,  2416,  2417,  2418,     0,     0,     0,     0,     0,  2421,
       0,     0,     0,   421,   421,     0,   421,   421,  2725,  2727,
     421,   421,  2433,  2434,  2435,  2436,  2437,  2438,     0,  2440,
    2441,  2442,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2453,  2454,  2455,  2456,     0,
    2458,  2459,  2460,  2461,  2462,  2463,     0,  2465,     0,     0,
    2469,  2470,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   813,     0,     0,     0,  2477,
       0,     0,   421,  2479,     0,     0,   820,  2481,     0,     0,
       0,  2484,     0,     0,     0,   828,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,   862,
       0,     0,     0,     0,     0,     0,   867,     0,  2501,   868,
       0,     0,     0,     0,   869,     0,     0,     0,   871,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   865,   866,     0,     0,     0,     0,  2292,
       0,     0,     0,     0,     0,     0,   870,     0,     0,     0,
       0,   873,     0,     0,     0,     0,  2304,  2305,  2306,  1745,
     884,  2308,     0,  2310,  2311,     0,     0,  2313,  2314,  2315,
       0,  1755,  2317,  2318,     0,     0,  2321,     0,  2323,  2324,
    2548,  2326,   928,     0,  2550,     0,     0,     0,     0,  1816,
    1817,     0,     0,     0,  2551,  2552,     0,     0,     0,     0,
    2556,   421,     0,     0,  2559,   421,     0,     0,     0,     0,
    2564,  2225,     0,  2568,  2569,     0,     0,     0,     0,     0,
       0,     0,  2226,     0,     0,     0,     0,     0,   930,   931,
     932,   933,  2586,  2587,     0,  2589,  2590,  2591,  2592,  2593,
       0,   421,  2595,     0,     0,     0,  2598,  1076,  2227,     0,
       0,     0,     0,     0,     0,  1077,     0,     0,  2607,     0,
       0,  1078,     0,  2611,     0,     0,     0,     0,     0,     0,
    1397,     0,     0,     0,     0,     0,     0,     0,  2619,     0,
       0,     0,  1079,     0,     0,  2228,     0,     0,  1074,  2397,
       0,  1113,  2400,     0,     0,     0,  1398,  2404,  1119,     0,
    2405,     0,     0,  2180,     0,  1080,     0,     0,     0,     0,
       0,     0,     0,  1081,     0,     0,     0,     0,     0,  2420,
    2631,     0,     0,     0,     0,  2635,     0,  2637,     0,  1399,
       0,     0,     0,  2640,     0,  1400,     0,     0,  1324,  2205,
       0,  1401,     0,     0,     0,     0,  2647,     0,     0,     0,
    1082,     0,     0,     0,     0,     0,     0,     0,  1083,  1402,
       0,     0,  2693,     0,  2658,     0,     0,     0,  2662,     0,
    1375,     0,     0,     0,     0,     0,     0,     0,     0,  1403,
       0,     0,     0,     0,     0,     0,     0,     0,  2681,     0,
       0,     0,     0,     0,  1404,     0,     0,     0,     0,     0,
       0,     0,     0,  1084,     0,     0,  2487,     0,     0,     0,
       0,     0,  2696,     0,  1085,  1207,     0,  2701,     0,  2703,
       0,     0,  1209,     0,  1405,     0,  2707,     0,     0,     0,
    1086,  2710,     0,     0,     0,     0,  2713,     0,  2495,  2229,
       0,  2230,     0,     0,     0,  1208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1213,  2724,  2726,
       0,     0,     0,  1406,     0,     0,     0,  1225,  1226,     0,
       0,     0,  1230,     0,     0,  1233,     0,  1407,     0,     0,
    1488,     0,     0,     0,  2736,  1489,  1242,  2737,  1408,     0,
    2739,     0,     0,     0,  1223,  2231,     0,     0,     0,     0,
       0,  2745,  2746,  2747,  2748,     0,  1490,  1491,     0,  1492,
    1493,     0,     0,  2757,     0,  1409,  2760,  2545,     0,     0,
    1494,  2732,     0,  2764,     0,  2766,     0,  1410,     0,  1411,
    1412,     0,  1495,  1496,     0,     0,     0,  2553,     0,     0,
    1497,     0,     0,  1498,  2558,     0,     0,  2561,  2562,     0,
       0,     0,     0,  2752,     0,     0,  2755,     0,     0,     0,
    1499,     0,     0,     0,     0,  1313,     0,  1500,  1501,  1413,
       0,  1502,     0,     0,     0,     0,  2081,     0,     0,     0,
       0,     0,     0,     0,  2087,  2088,  1380,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2124,
    2125,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2135,  2136,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2146,  2147,     0,     0,     0,     0,     0,     0,  1503,
       0,  2156,  2157,     0,     0,     0,     0,  2162,     0,     0,
    1459,  1504,     0,     0,     0,     0,     0,  2165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2632,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2642,     0,     0,  1505,     0,     0,     0,     0,     0,
    1506,     0,  1520,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1526,     0,     0,     0,  1507,     0,     0,     0,
    2472,     0,  1729,  1730,  1731,  1508,     0,     0,     0,     0,
       0,     0,  1733,  1734,  1735,     0,     0,     0,     0,  1746,
    1747,  1748,     0,     0,  1749,  1750,     0,  1752,  1753,     0,
       0,     0,  1509,  1510,     0,     0,     0,     0,     0,     0,
       0,  2694,  2695,     0,  2697,     0,  2699,  2700,     0,  2702,
       0,     0,     0,  1511,     0,     0,     0,  1825,  1826,     0,
       0,  1828,  1829,     0,     0,     0,     0,     0,     0,     0,
    1604,   639,   640,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1601,     0,     0,     0,  1512,     0,
    1628,  2729,     0,     0,     0,  1633,     0,     0,     0,     0,
       0,  1609,     0,     0,     0,  1639,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   641,     0,     0,
       0,     0,     0,   642,     0,  1634,     0,     0,     0,     0,
     643,     0,   644,     0,     0,  1640,     0,   645,  2761,     0,
     646,     0,     0,     0,     0,     0,   647,     0,     0,     0,
       0,     0,     0,     0,  1657,     0,   648,     0,     0,     0,
       0,     0,   649,     0,  1669,     0,     0,     0,     0,  1677,
       0,   650,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2582,     0,     0,   651,  2334,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2336,     0,     0,
       0,  2340,  2341,  2600,     0,     0,   652,  2604,     0,     0,
    2349,  2350,     0,     0,     0,     0,     0,     0,     0,  2358,
    2359,   653,     0,     0,     0,  2364,     0,     0,     0,     0,
     654,   655,     0,     0,     0,  2374,  2375,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2385,  2386,     0,     0,
       0,   656,     0,     0,     0,     0,     0,  2389,     0,     0,
       0,     0,     0,     0,     0,     0,  2391,     0,  2392,     0,
       0,     0,     0,     0,   657,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   658,     0,
     659,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1832,     0,   660,     0,     0,     0,     0,   661,
       0,     0,     0,     0,     0,   662,     0,     0,     0,     0,
       0,     0,   663,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1854,     0,     0,     0,     0,     0,     0,     0,
     664,  1902,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   665,   666,     0,   667,   106,     0,     0,
       0,  1888,     0,     0,  1889,     0,     0,     0,     0,     0,
       0,     0,   107,     0,  1905,  1906,     0,     0,     0,     0,
       0,     0,  1910,     0,     0,     0,     0,     0,     0,  1911,
       0,     0,     0,   108,     0,     0,   668,     0,     0,     0,
       0,     0,  1951,     0,     0,     0,  2072,     0,  1957,   109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2080,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2083,
    1950,     0,     0,  1953,  1954,     0,     0,     0,     0,     0,
    2503,     0,  1961,     0,     0,     0,     0,     0,     0,     0,
    2512,  2742,     0,     0,   110,     0,     0,     0,     0,  2521,
       0,     0,     0,     0,     0,     0,     0,     0,  2530,     0,
       0,     0,   111,     0,     0,  2532,     0,     0,     0,     0,
       0,     0,     0,  1992,     0,  1994,  2536,     0,     0,     0,
       0,  1999,  2539,     0,     0,  2541,     0,     0,  2542,     0,
       0,  2168,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,  2014,     0,  1996,     0,
       0,     0,  2020,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2012,     0,     0,  2027,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,  2037,  2021,     0,   114,     0,     0,     0,     0,  2044,
       0,     0,   115,   116,     0,     0,     0,  2026,   117,  2028,
       0,     0,     0,   118,  2031,     0,     0,     0,     0,  2036,
       0,     0,  2038,     0,  2039,  2040,  2041,  2043,     0,     0,
    2045,     0,     0,  2046,     0,     0,  2047,  2049,     0,  2050,
    2051,  2052,  2054,     0,  2055,  2056,     0,     0,     0,     0,
    2058,  2059,  2060,     0,  2620,  2061,  2062,     0,     0,     0,
       0,  2063,  2064,  2622,     0,     0,     0,     0,     0,     0,
       0,     0,  2624,     0,     0,     0,     0,     0,  2627,     0,
       0,     0,  2629,     0,     0,  2630,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,   149,     0,     0,     0,
       0,   150,   151,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2183,     0,     0,     0,
       0,     0,     0,     0,     0,  2171,     0,     0,     0,  2174,
       0,     0,     0,     0,     0,  2333,     0,     0,     0,     0,
       0,  2179,     0,     0,  2182,     0,     0,     0,     0,     0,
    2206,  2207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2210,  2211,     0,
       0,     0,  2213,  2214,  2201,  2365,  2366,  2367,  2368,  2369,
       0,  2371,  2372,     0,     0,     0,  2376,  2377,  2378,  2379,
    2380,     0,  2382,  2383,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,  2257,     0,     0,  2261,  2262,     0,     0,     0,
       0,     0,     0,  2266,     0,   107,     0,     0,     0,     0,
    2249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2275,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2287,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2296,     0,
    2297,     0,     0,  1656,     0,     0,     0,     0,  2303,     0,
       0,     0,     0,  2307,  2288,     0,     0,   110,   107,  2312,
       0,     0,     0,     0,  2316,     0,     0,     0,  2319,     0,
       0,  2322,     0,     0,  2325,     0,  2327,     0,     0,     0,
       0,     0,     0,   344,     0,     0,     0,     0,     0,     0,
     345,     0,     0,     0,     0,     0,     0,     0,  2320,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2502,     0,
     110,  2504,  2505,  2506,  2507,  2508,     0,  2510,  2511,   284,
    2513,  2514,  2515,  2516,  2517,     0,  2519,  2520,     0,  2522,
    2523,  2524,  2525,  2526,     0,  2528,  2529,     0,  2531,     0,
       0,   117,     0,     0,     0,     0,   118,     0,  2534,  2535,
       0,     0,     0,     0,     0,     0,     0,   285,     0,  2538,
       0,     0,     0,     0,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2399,     0,     0,  2402,     0,     0,
       0,     0,     0,     0,     0,  2406,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2419,     0,     0,  2422,     0,     0,   286,     0,  2426,
       0,     0,  2429,  2430,     0,     0,     0,     0,     0,   118,
       0,  2464,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   346,     0,
     347,     0,     0,     0,     0,     0,  2621,     0,     0,     0,
       0,     0,     0,     0,     0,  2623,     0,     0,     0,     0,
       0,     0,     0,     0,  2625,     0,  2626,     0,     0,     0,
    2628,     0,  2492,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   107,     0,     0,  2543,     0,
       0,     0,     0,     0,  2547,     0,     0,     0,  2549,     0,
       0,     0,     0,     0,  2688,     0,  2689,     0,  2690,     0,
       0,  2691,     0,  2692,  2555,     0,     0,     0,     0,  2544,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   488,   489,     0,     0,   490,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2563,     0,     0,     0,     0,   491,     0,     0,
       0,     0,     0,  2574,   596,   107,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2616,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   597,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2617,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   492,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,   493,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   598,     0,     0,     0,     0,  2651,  2633,  2634,     0,
    2636,     0,     0,   494,     0,  2638,  2639,     0,     0,     0,
    2641,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2663,     0,     0,     0,     0,   599,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2683,   495,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2715,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,  2728,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   496,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2731,
       0,     0,     0,  2753,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   600,     0,     0,  2740,     0,     0,     0,
       0,     0,     0,  2767,     0,     0,  2768,     0,     0,     0,
       0,  2751,     0,     0,  2754,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   985,   986,   987,     0,     0,  1252,
    1253,  1254,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   988,   989,     0,     0,   990,  1255,  1256,   991,
       0,  1257,   107,     0,     0,     0,   992,     0,  1258,     0,
     993,  1259,     0,     0,     0,  1260,     0,     0,   994,   995,
       0,     0,     0,  1261,  1262,     0,   996,   997,     0,     0,
     107,  1263,     0,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,   998,     0,     0,     0,     0,     0,   999,
       0,     0,     0,  1000,  1001,     0,     0,  1002,  1264,  1265,
       0,     0,  1266,     0,     0,     0,     0,   109,     0,     0,
       0,     0,     0,  1003,     0,     0,     0,     0,  1267,     0,
       0,   107,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,  1004,     0,     0,     0,     0,  1268,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,  1005,     0,     0,     0,     0,
    1269,   502,     0,     0,     0,     0,     0,     0,     0,  1270,
       0,     0,     0,     0,     0,     0,     0,     0,  1006,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,   112,  1007,     0,
    1008,     0,     0,  1271,     0,  1272,  1009,  1010,     0,     0,
       0,  1273,  1274,     0,     0,     0,     0,     0,     0,     0,
    1312,  1011,  1012,     0,     0,     0,     0,  1275,   117,     0,
       0,  1013,  1014,   118,     0,     0,     0,  1276,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   117,  1015,     0,  1016,
       0,   118,  1277,     0,  1278,   110,     0,     0,     0,     0,
       0,  1017,     0,  1018,  1279,     0,     0,     0,     0,  1019,
       0,     0,     0,     0,  1280,   963,     0,     0,     0,     0,
     964,     0,   506,     0,     0,     0,     0,     0,     0,     0,
       0,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,  1020,     0,     0,     0,     0,  1281,     0,
     112,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   503,
       0,     0,     0,   110,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,   112,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   118,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     1,     0,     0,     2,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     0,     0,     0,     0,     5,
       6,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
      14,    15,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,     0,     0,     0,    18,     0,     0,    19,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    35,     0,     0,     0,     0,     0,
       0,    36,     0,     0,     0,    37,     0,     0,    38,     0,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,   175,     0,    43,   176,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,   178,     0,
     179,   180,   181,    46,     0,    47,     0,     0,     0,     0,
     182,    48,   183,     0,    49,    50,     0,   184,     0,   185,
     186,   187,     0,     0,     0,     0,   188,     0,   189,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,   190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   191,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   192,   193,     0,     0,   194,     0,
       0,     0,   195,     0,   196,  1349,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   197,   198,     0,     0,   199,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   201,   202,     0,     0,
       0,     0,     0,     0,   203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   207,
     208,     0,     0,     0,     0,     0,     0,     0,   209,     0,
       0,     0,     0,     0,     0,   210,     0,     0,     0,     0,
       0,   211,     0,   212,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1350,     0,     0,     0,     0,     0,     0,     0,
     213
};

static const yytype_int16 yycheck[] =
{
       3,    50,  1435,   986,     4,   659,   479,  1636,    11,  1638,
     654,   655,    32,     5,     4,     5,    32,     4,     4,    27,
     867,   868,   869,     3,     4,    32,     5,     5,     4,    32,
      57,     3,     4,     3,     4,     5,     5,    40,     5,     4,
      48,     0,    61,    51,    46,     5,    49,    20,   131,    52,
       5,   435,    55,     5,    62,   164,    59,     4,    21,    62,
       4,   445,     4,    66,    67,    66,    97,    70,    40,    17,
      73,    74,   149,     4,    77,    32,    16,    85,    81,   138,
    1134,   928,  1136,    86,   192,   130,     6,    59,    87,    45,
      66,    56,     4,     5,   102,   121,    99,   100,   101,   102,
     103,   104,     4,    59,    56,     3,     4,    17,  1162,  1163,
    1164,     3,     4,    65,     5,   957,   175,   120,   960,   103,
       4,    99,     4,   212,    66,    81,    27,   105,   129,   119,
     192,     3,     4,   119,    21,   977,   133,     5,   168,   111,
       5,   249,    66,   119,   100,    30,   176,   138,   117,    17,
       3,     4,   155,   154,    66,   264,   113,   156,     3,     4,
      21,   117,     3,     4,   120,    61,    31,     3,     4,     3,
       4,   134,     3,     4,    33,   178,    88,   119,   165,   224,
     183,   258,    66,    36,   175,     3,     4,    40,    98,   283,
     146,   147,     3,     4,   256,    36,   196,    17,   225,   144,
     120,    17,   186,   203,   204,    27,   186,   119,   291,    94,
     158,   201,   238,   240,   303,   201,    16,     4,    36,   209,
     210,   193,   191,   209,   210,   201,   183,   139,   185,   260,
     187,   188,   233,   209,   210,   119,   281,   119,   195,   239,
     243,   230,   198,    21,   293,   192,    13,     3,     4,   246,
     215,   905,   208,   210,    14,   195,   259,   260,   111,   201,
     280,   234,   281,   215,   280,   166,    21,   209,   210,   271,
     273,     5,   275,   280,   301,   238,   245,   162,    27,   132,
     283,   284,   283,   286,   287,   304,   289,   247,    21,   201,
     245,   132,     3,     4,   186,   193,   299,   209,   210,   285,
     269,    61,   269,   266,   294,   284,   309,   310,   294,   693,
     300,   303,   268,   269,   132,   287,    40,   201,   294,   201,
     310,   301,   300,   310,   283,   209,   210,   209,   210,   286,
     333,   334,   335,   303,   337,   226,     5,   238,   341,   342,
     193,   285,   350,   245,   344,    14,    15,    14,    15,   352,
     353,   238,   294,   343,   285,   358,  1010,   343,   348,   349,
     363,   364,   348,   349,   249,   345,   346,   343,   371,   254,
      63,   374,   348,   349,  1028,   186,   207,   238,  1225,    66,
     281,   192,   294,   339,     4,   281,  1233,   111,   300,   392,
     393,   211,    61,   291,    61,   211,   399,   400,   401,    40,
     403,   343,   224,     4,     4,   192,   348,   349,   304,   301,
     294,   104,   294,  1396,   417,    21,  1060,   166,   421,   291,
     231,   188,    50,   426,   427,   428,   429,   430,   431,   189,
     433,   343,   435,   436,   437,   347,   348,   349,   291,    40,
    1423,    27,   445,   446,   828,   256,   291,  1091,     3,     4,
     291,    14,    15,   345,   346,   291,    56,   291,    12,   343,
     238,   343,   249,  1446,   348,   349,   348,   349,   224,   193,
     111,    99,   292,   291,     4,     5,   292,   434,     3,     4,
     108,    37,     5,   238,     5,     3,     4,   871,    22,   238,
     301,    14,    15,    14,    15,     4,   499,   500,    61,    53,
       4,    56,   262,    61,   124,   238,   167,    27,   136,     6,
     111,  1565,   272,   224,   517,    49,    88,    71,    52,    61,
     189,   190,   189,   190,  1366,    30,    30,  1369,    63,   578,
      60,   230,   281,     0,   345,   346,    66,     4,    61,   263,
      61,   544,   235,   303,    34,    83,   100,   121,    82,    37,
       4,   121,   193,    78,    54,    61,    87,   250,   251,    47,
      63,    99,   120,   224,   118,   258,   523,    56,   122,   104,
     619,    64,   575,    66,     3,     4,   110,    27,   120,   113,
     134,   167,  2669,    61,   114,   205,    74,     5,    61,   638,
      90,    88,   193,   262,     0,   262,    14,    15,   156,   129,
     557,   104,    78,   272,   273,   272,   273,   610,   277,     3,
       4,   261,    61,   143,   120,   215,   268,   107,   268,   149,
    1274,   124,   263,   120,   154,   156,   189,   190,   289,     4,
    2717,  1285,   238,   636,   303,     5,   303,    12,   224,     5,
     140,   197,   120,    61,   245,    28,   171,   120,   341,   342,
     653,    44,    61,   656,    61,   160,   160,  2286,   121,    61,
     215,   149,     3,     4,   238,   293,   189,   190,   189,   190,
     149,   120,    61,   243,   121,   678,     5,   207,    19,   682,
     683,   684,   685,    61,     4,   688,    14,   690,   181,   692,
     693,   694,   226,    21,    87,   171,   226,   185,    26,   262,
     235,   231,   121,   233,   224,    33,   224,   212,   212,   272,
     273,   120,   202,   120,   272,   250,   251,   167,   120,     5,
     769,    31,    61,   257,   249,   105,   215,   257,   258,  1113,
     272,   120,   235,   238,   238,   265,   121,   291,   217,   262,
     303,   262,   120,    71,     5,   245,   239,   250,   251,   272,
     273,   272,   273,   283,   277,     5,   277,   193,   761,   762,
     101,   764,   765,   766,   767,   253,   272,   150,    70,    93,
       4,   189,   190,   249,   224,   238,   779,   780,   207,   258,
     303,   120,   303,   786,   787,    40,    40,   111,   281,   172,
      66,   238,  1639,   176,   272,   117,   245,   290,   191,   272,
      66,   202,   196,   806,   807,   808,   341,   342,   283,   339,
       3,     4,    82,   105,   194,   156,   304,   296,   118,   238,
     823,   824,   825,   272,   827,   828,   829,    26,   831,    26,
       3,     4,   160,   161,   162,   163,   164,   165,   341,   342,
     168,   169,   170,   171,   262,   228,  1230,     4,     5,   852,
      37,   854,   168,   238,   272,   273,   111,   111,  1841,   277,
      47,   864,   186,   272,    33,   272,   168,   247,   871,   872,
     272,     3,     4,   876,  1857,     3,     4,    82,     5,   220,
      12,   151,    28,   272,   267,   303,    89,    74,   891,   892,
       3,     4,   275,   276,   272,   852,   899,   900,   901,  1741,
     261,    16,   194,  1886,   907,   181,    66,   268,   156,   912,
       4,     5,     5,   112,   963,   112,  1970,  1971,  1972,  1761,
     923,    14,    15,     3,     4,   124,   231,   124,   282,   257,
     258,    59,  2441,   272,  1776,   183,   939,  1779,   193,   193,
      89,   342,   244,    42,    43,  1787,   151,   348,  1790,   350,
     123,   253,   222,   223,    72,   247,  1798,   285,  2467,  1801,
      40,   158,   149,   239,    14,    15,  1808,   237,    61,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    31,   185,     5,
     328,   329,   330,  1006,   150,   281,  1989,   206,   278,   206,
    2443,    61,     3,     4,   290,     3,     4,   222,   223,     4,
     219,     4,   219,     4,  1027,   138,   172,    14,    15,    17,
     176,   111,   237,  1036,     5,     3,     4,     4,     3,     4,
       3,     4,    24,    25,   231,     3,     4,  1050,     5,  1052,
       4,    19,    83,     5,  1057,  1058,  1059,  2566,  2567,     4,
       5,  2570,   175,  2572,  1067,    88,   253,  1070,    99,  1072,
     169,   170,     5,   278,    61,  2584,  2585,     3,     4,     4,
    2589,  2590,   228,     5,  2593,  1088,     5,  1090,    56,  2598,
    2599,  1094,  1095,   116,    59,     4,   189,   190,   197,     3,
       4,   288,     3,     4,  1951,     5,  1109,  1110,     4,     5,
    1113,  1114,  1115,   193,    40,    97,     4,   304,  1121,    97,
    1123,   267,   130,  1126,   120,  1128,     3,     4,  1177,   275,
     276,     5,   123,   101,  2643,    14,    15,  2646,     4,   189,
     190,     4,  2651,   174,   269,     3,     4,   196,  2657,    14,
      15,     4,     5,  2662,    12,    59,     4,    14,    15,   167,
     123,   184,  1165,    40,   423,   424,  1169,     4,  1171,   262,
       3,     4,  1175,  2020,     7,     8,   199,  2568,     4,   272,
     273,     5,    61,     4,   277,   111,   217,  1190,   156,  1192,
      35,  1194,  1195,  1196,  1197,  2586,    61,  2044,  1201,  1202,
       4,     4,   189,   190,    61,     4,  1209,     3,     4,     5,
     303,     4,   262,  1216,     5,     5,   224,  1220,  1221,  1222,
       9,   252,   272,   273,    11,     5,  2735,  1230,  1231,  2738,
      44,  1234,    46,  1190,   111,   268,   259,   168,  2221,     4,
       4,  1244,   176,  1246,   168,   195,  1249,   215,   195,  2758,
       5,     5,   220,   303,  2237,     4,  2098,   195,   187,  2242,
     187,   106,    76,  2772,    66,  2107,  2775,  2776,    66,    66,
      84,   224,     5,   281,  2116,   262,   604,   300,     5,   225,
    1237,     4,   127,   128,     4,   272,   273,   310,     4,  1292,
     135,  1294,   195,    87,  1297,  1298,  1253,  1300,     5,  1302,
       5,  2435,    87,     4,  2438,  1308,  2440,  1310,   153,     4,
     189,   190,     5,     5,  1317,  2706,   303,     4,   163,  2453,
    2454,  2712,     5,    99,   189,   190,    17,     4,   142,     5,
     658,    17,   189,   190,     4,   663,  2470,    17,     3,     4,
       5,     4,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
       3,     4,     5,     4,     7,     8,     4,   191,  2769,    97,
    2771,     5,     5,   262,     3,     4,     5,    87,     4,  1392,
       5,  1394,  1395,   272,   273,   209,   210,   262,     5,    87,
      66,     5,   216,     4,   218,   262,     5,   272,   273,     5,
    2257,     4,     4,  1416,    80,   272,   273,  1420,     5,  2266,
       3,     4,     4,    89,   303,     5,     9,    10,    11,     5,
       4,   245,     5,    99,  1391,     3,     4,     5,   303,     7,
       8,  1444,  1445,     3,     4,     5,   303,     7,     8,    12,
      12,  1454,     5,     4,     4,  1458,  2439,     4,     4,     4,
       4,    61,  1465,   129,     4,   186,     5,   165,     5,  2452,
       4,   192,  2319,     5,  2457,  2322,  1479,   156,  2325,    19,
    2327,  1484,   810,   149,   156,  1488,     4,  1490,  1491,   257,
    1493,  1494,  1495,   285,  1497,   257,   310,  1500,  1501,  1502,
    1503,    53,  1505,  1506,  1507,  1508,  1509,  1510,  1511,     5,
     231,  1514,  1515,  1516,  1517,     4,    56,   117,  1902,    71,
     120,  1524,  1525,     5,     5,  1528,  1529,  1530,   194,     5,
    1533,  1534,     5,     4,     4,   256,    88,     5,     5,   270,
     270,     5,     5,  1546,  1547,     5,  1549,  1550,   100,     4,
       4,   105,     5,     5,     5,     5,   156,     5,   211,     5,
       4,   101,     4,   238,     5,     5,   118,   233,     4,   238,
     122,     5,     5,  1957,     5,   105,   238,   138,    40,   105,
     301,     5,   134,    40,   243,   211,     5,     5,     4,   211,
       5,   191,   258,   211,  1597,  1598,  1599,     4,     4,  1602,
       5,     5,    19,     5,  1607,  1608,     5,  1610,  1611,  1612,
       4,  1614,  1615,   111,  1617,  1999,   156,  1620,  1621,   111,
       4,   173,     5,     5,     5,   346,  1629,    44,     4,     6,
       5,   297,     5,   299,  1637,    22,     4,    38,     5,  1642,
    1643,     5,   242,     4,    91,   245,     5,  1650,     5,     4,
    1607,     5,    99,     5,    12,     4,  1659,     5,   105,    12,
      77,     4,    49,     4,     4,    52,     4,    84,    55,   269,
       5,     4,   272,    38,     0,   215,     5,    94,    95,   126,
     220,   238,   282,   238,   101,     4,   121,   167,   247,   138,
     238,   207,  1695,   195,     4,    82,     4,     4,     4,     4,
     270,     5,   149,     5,     5,  1033,     5,   124,     5,     5,
     157,     4,     4,     4,  1717,  1718,     5,     4,  1675,  1722,
    2703,     4,   307,   110,   141,  1728,   113,     5,  1685,     5,
       5,   238,   238,  1690,   238,   307,     4,     4,   155,   156,
       4,     4,     4,     4,     4,   162,     4,   194,     5,   307,
       5,   307,   224,     5,     5,   202,     4,     4,   224,  1087,
       5,     5,     5,   224,     5,   182,   224,     4,   224,  1097,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,     4,     4,
     247,     5,     5,   220,     4,     4,   303,     5,     5,     4,
       4,   258,     5,     5,     5,     4,     6,     4,     4,     4,
     351,     5,  2206,  2207,     5,  2209,  2210,   274,     5,  2213,
    2214,     5,  1835,     4,  1837,     5,  1839,     4,     4,   226,
       5,     5,     5,     4,   270,     5,     4,   270,     5,     5,
       5,     4,     4,     4,   271,  1858,  1859,  1860,  1861,  1862,
    1863,  1864,  1865,  1866,   281,     5,     5,     5,     5,     4,
     257,     5,     5,     5,     5,     4,     4,  1205,  1206,  1882,
       5,  1884,   270,    32,     5,     5,     5,     4,     4,    12,
       5,  2275,     5,   310,     5,     5,   283,     4,  1901,  1902,
       4,     6,     5,     4,  1907,     4,     4,     4,   351,     5,
       5,     5,     5,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,     5,     4,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,     4,  1941,     5,
    1943,  1944,  1945,     4,     4,   422,     5,     5,  2602,     4,
       4,     4,     4,     4,  1957,  1958,     5,     5,     4,     4,
     351,     5,     5,     5,   113,     5,     5,     4,   283,     5,
       4,     4,   351,     5,     5,     5,     4,     4,   378,     5,
       5,     4,     6,     5,     5,     4,     4,  1990,     5,     5,
    1993,     5,  1995,     5,  1997,     4,  1999,  2000,     5,  2002,
       4,   956,     4,     4,     4,     4,  2009,  2010,     4,     4,
       4,     4,     4,  2016,     4,  2018,     4,  2671,     4,  2022,
       4,   351,  2025,   351,   351,     4,   351,     4,     4,   283,
       5,     5,     4,   182,     5,   184,   185,     4,   187,   188,
    2424,     4,     6,     5,  2428,     5,     5,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,   351,     5,  1387,
       4,  2728,     5,     5,     5,  1393,   215,     4,  2071,     5,
       5,     4,  2029,     5,     5,     4,  2611,     5,     4,     4,
    2464,     5,     4,     4,   233,   234,     4,  1415,     4,     4,
    1418,     5,     5,     4,  1422,     4,     4,  2500,     5,     4,
    2232,     5,     5,     4,     4,     4,  2600,     5,     5,     5,
     288,  2068,     4,  2671,     5,  1443,     5,     5,     4,     4,
    2169,  1449,     5,     5,     5,   274,  2667,    -1,    -1,  1457,
     728,    -1,  1460,    -1,    -1,    -1,    -1,   286,    -1,    -1,
      -1,  1469,  1470,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1480,    -1,    -1,    -1,    -1,   306,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     348,    -1,  2175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,    -1,    -1,    -1,    -1,    -1,  2202,
      -1,    -1,    -1,  2206,  2207,    -1,  2209,  2210,  2681,  2682,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,    -1,  2222,
    2223,  2224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2238,  2239,  2240,  2241,    -1,
    2243,  2244,  2245,  2246,  2247,  2248,    -1,  2250,    -1,    -1,
    2253,  2254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   414,    -1,    -1,    -1,  2272,
      -1,    -1,  2275,  2276,    -1,    -1,   425,  2280,    -1,    -1,
      -1,  2284,    -1,    -1,    -1,   434,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,    -1,    -1,    -1,    -1,   497,
      -1,    -1,    -1,    -1,    -1,    -1,   504,    -1,  2331,   507,
      -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,   516,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   502,   503,    -1,    -1,    -1,    -1,  2021,
      -1,    -1,    -1,    -1,    -1,    -1,   515,    -1,    -1,    -1,
      -1,   520,    -1,    -1,    -1,    -1,  2038,  2039,  2040,  1334,
     529,  2043,    -1,  2045,  2046,    -1,    -1,  2049,  2050,  2051,
      -1,  1346,  2054,  2055,    -1,    -1,  2058,    -1,  2060,  2061,
    2403,  2063,   580,    -1,  2407,    -1,    -1,    -1,    -1,  1364,
    1365,    -1,    -1,    -1,  2417,  2418,    -1,    -1,    -1,    -1,
    2423,  2424,    -1,    -1,  2427,  2428,    -1,    -1,    -1,    -1,
    2433,    55,    -1,  2436,  2437,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,   597,   598,
     599,   600,  2455,  2456,    -1,  2458,  2459,  2460,  2461,  2462,
      -1,  2464,  2465,    -1,    -1,    -1,  2469,    91,    92,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,  2481,    -1,
      -1,   105,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2501,    -1,
      -1,    -1,   126,    -1,    -1,   129,    -1,    -1,   657,  2171,
      -1,   689,  2174,    -1,    -1,    -1,    66,  2179,   696,    -1,
    2182,    -1,    -1,  1851,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,  2201,
    2543,    -1,    -1,    -1,    -1,  2548,    -1,  2550,    -1,    99,
      -1,    -1,    -1,  2556,    -1,   105,    -1,    -1,   944,  1887,
      -1,   111,    -1,    -1,    -1,    -1,  2569,    -1,    -1,    -1,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   202,   129,
      -1,    -1,  2631,    -1,  2587,    -1,    -1,    -1,  2591,    -1,
     976,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2611,    -1,
      -1,    -1,    -1,    -1,   164,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   247,    -1,    -1,  2288,    -1,    -1,    -1,
      -1,    -1,  2635,    -1,   258,   813,    -1,  2640,    -1,  2642,
      -1,    -1,   820,    -1,   194,    -1,  2649,    -1,    -1,    -1,
     274,  2654,    -1,    -1,    -1,    -1,  2659,    -1,  2320,   283,
      -1,   285,    -1,    -1,    -1,   814,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   826,  2681,  2682,
      -1,    -1,    -1,   233,    -1,    -1,    -1,   865,   866,    -1,
      -1,    -1,   870,    -1,    -1,   873,    -1,   247,    -1,    -1,
      22,    -1,    -1,    -1,  2707,    27,   884,  2710,   258,    -1,
    2713,    -1,    -1,    -1,   863,   339,    -1,    -1,    -1,    -1,
      -1,  2724,  2725,  2726,  2727,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,  2736,    -1,   285,  2739,  2399,    -1,    -1,
      62,  2698,    -1,  2746,    -1,  2748,    -1,   297,    -1,   299,
     300,    -1,    74,    75,    -1,    -1,    -1,  2419,    -1,    -1,
      82,    -1,    -1,    85,  2426,    -1,    -1,  2429,  2430,    -1,
      -1,    -1,    -1,  2730,    -1,    -1,  2733,    -1,    -1,    -1,
     102,    -1,    -1,    -1,    -1,   934,    -1,   109,   110,   339,
      -1,   113,    -1,    -1,    -1,    -1,  1751,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1759,  1760,   984,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1774,
    1775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1785,  1786,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1796,  1797,    -1,    -1,    -1,    -1,    -1,    -1,   171,
      -1,  1806,  1807,    -1,    -1,    -1,    -1,  1812,    -1,    -1,
    1009,   183,    -1,    -1,    -1,    -1,    -1,  1822,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2544,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2563,    -1,    -1,   226,    -1,    -1,    -1,    -1,    -1,
     232,    -1,  1061,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1071,    -1,    -1,    -1,   248,    -1,    -1,    -1,
    2258,    -1,  1318,  1319,  1320,   257,    -1,    -1,    -1,    -1,
      -1,    -1,  1328,  1329,  1330,    -1,    -1,    -1,    -1,  1335,
    1336,  1337,    -1,    -1,  1340,  1341,    -1,  1343,  1344,    -1,
      -1,    -1,   284,   285,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2633,  2634,    -1,  2636,    -1,  2638,  2639,    -1,  2641,
      -1,    -1,    -1,   305,    -1,    -1,    -1,  1373,  1374,    -1,
      -1,  1377,  1378,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1178,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1173,    -1,    -1,    -1,   350,    -1,
    1208,  2693,    -1,    -1,    -1,  1213,    -1,    -1,    -1,    -1,
      -1,  1190,    -1,    -1,    -1,  1223,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,  1214,    -1,    -1,    -1,    -1,
      73,    -1,    75,    -1,    -1,  1224,    -1,    80,  2740,    -1,
      83,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1243,    -1,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,  1253,    -1,    -1,    -1,    -1,  1258,
      -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2451,    -1,    -1,   129,  2082,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2092,    -1,    -1,
      -1,  2096,  2097,  2471,    -1,    -1,   149,  2475,    -1,    -1,
    2105,  2106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2114,
    2115,   164,    -1,    -1,    -1,  2120,    -1,    -1,    -1,    -1,
     173,   174,    -1,    -1,    -1,  2130,  2131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2141,  2142,    -1,    -1,
      -1,   194,    -1,    -1,    -1,    -1,    -1,  2152,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2161,    -1,  2163,    -1,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1391,    -1,   247,    -1,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,    -1,    -1,
      -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1421,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     283,  1459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   296,   297,    -1,   299,     4,    -1,    -1,
      -1,  1450,    -1,    -1,  1453,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,  1463,  1464,    -1,    -1,    -1,    -1,
      -1,    -1,  1471,    -1,    -1,    -1,    -1,    -1,    -1,  1478,
      -1,    -1,    -1,    40,    -1,    -1,   339,    -1,    -1,    -1,
      -1,    -1,  1520,    -1,    -1,    -1,  1732,    -1,  1526,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1745,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1755,
    1519,    -1,    -1,  1522,  1523,    -1,    -1,    -1,    -1,    -1,
    2335,    -1,  1531,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2345,  2719,    -1,    -1,   101,    -1,    -1,    -1,    -1,  2354,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2363,    -1,
      -1,    -1,   119,    -1,    -1,  2370,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1601,    -1,  1603,  2381,    -1,    -1,    -1,
      -1,  1609,  2387,    -1,    -1,  2390,    -1,    -1,  2393,    -1,
      -1,  1827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,  1634,    -1,  1607,    -1,
      -1,    -1,  1640,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1625,    -1,    -1,  1657,
      -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,    -1,    -1,
      -1,  1669,  1641,    -1,   201,    -1,    -1,    -1,    -1,  1677,
      -1,    -1,   209,   210,    -1,    -1,    -1,  1656,   215,  1658,
      -1,    -1,    -1,   220,  1663,    -1,    -1,    -1,    -1,  1668,
      -1,    -1,  1671,    -1,  1673,  1674,  1675,  1676,    -1,    -1,
    1679,    -1,    -1,  1682,    -1,    -1,  1685,  1686,    -1,  1688,
    1689,  1690,  1691,    -1,  1693,  1694,    -1,    -1,    -1,    -1,
    1699,  1700,  1701,    -1,  2509,  1704,  1705,    -1,    -1,    -1,
      -1,  1710,  1711,  2518,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2527,    -1,    -1,    -1,    -1,    -1,  2533,    -1,
      -1,    -1,  2537,    -1,    -1,  2540,    -1,   294,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,
      -1,   348,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1832,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1854,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1834,    -1,    -1,    -1,  1838,
      -1,    -1,    -1,    -1,    -1,  2081,    -1,    -1,    -1,    -1,
      -1,  1850,    -1,    -1,  1853,    -1,    -1,    -1,    -1,    -1,
    1888,  1889,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1905,  1906,    -1,
      -1,    -1,  1910,  1911,  1883,  2121,  2122,  2123,  2124,  2125,
      -1,  2127,  2128,    -1,    -1,    -1,  2132,  2133,  2134,  2135,
    2136,    -1,  2138,  2139,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,  1950,    -1,    -1,  1953,  1954,    -1,    -1,    -1,
      -1,    -1,    -1,  1961,    -1,    19,    -1,    -1,    -1,    -1,
    1939,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1996,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2012,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2026,    -1,
    2028,    -1,    -1,     4,    -1,    -1,    -1,    -1,  2036,    -1,
      -1,    -1,    -1,  2041,  2013,    -1,    -1,   101,    19,  2047,
      -1,    -1,    -1,    -1,  2052,    -1,    -1,    -1,  2056,    -1,
      -1,  2059,    -1,    -1,  2062,    -1,  2064,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2057,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2334,    -1,
     101,  2337,  2338,  2339,  2340,  2341,    -1,  2343,  2344,   193,
    2346,  2347,  2348,  2349,  2350,    -1,  2352,  2353,    -1,  2355,
    2356,  2357,  2358,  2359,    -1,  2361,  2362,    -1,  2364,    -1,
      -1,   215,    -1,    -1,    -1,    -1,   220,    -1,  2374,  2375,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,  2385,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2173,    -1,    -1,  2176,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2200,    -1,    -1,  2203,    -1,    -1,   291,    -1,  2208,
      -1,    -1,  2211,  2212,    -1,    -1,    -1,    -1,    -1,   220,
      -1,  2249,    -1,    -1,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,    -1,
     243,    -1,    -1,    -1,    -1,    -1,  2512,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2521,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2530,    -1,  2532,    -1,    -1,    -1,
    2536,    -1,  2301,    -1,    -1,    -1,    -1,    -1,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    19,    -1,    -1,  2396,    -1,
      -1,    -1,    -1,    -1,  2402,    -1,    -1,    -1,  2406,    -1,
      -1,    -1,    -1,    -1,  2620,    -1,  2622,    -1,  2624,    -1,
      -1,  2627,    -1,  2629,  2422,    -1,    -1,    -1,    -1,  2398,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2431,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,  2442,    18,    19,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2492,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2493,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    -1,  2574,  2546,  2547,    -1,
    2549,    -1,    -1,   207,    -1,  2554,  2555,    -1,    -1,    -1,
    2559,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2592,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2615,   271,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2663,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2683,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,   339,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2698,
      -1,    -1,    -1,  2731,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   287,    -1,    -1,  2715,    -1,    -1,    -1,
      -1,    -1,    -1,  2751,    -1,    -1,  2754,    -1,    -1,    -1,
      -1,  2730,    -1,    -1,  2733,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    20,    21,    22,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    -1,    52,    48,    49,    55,
      -1,    52,    19,    -1,    -1,    -1,    62,    -1,    59,    -1,
      66,    62,    -1,    -1,    -1,    66,    -1,    -1,    74,    75,
      -1,    -1,    -1,    74,    75,    -1,    82,    83,    -1,    -1,
      19,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,   109,   110,    -1,    -1,   113,   109,   110,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    19,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,   171,    -1,    -1,    -1,    -1,
     171,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   156,   224,    -1,
     226,    -1,    -1,   224,    -1,   226,   232,   233,    -1,    -1,
      -1,   232,   233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,   247,   248,    -1,    -1,    -1,    -1,   248,   215,    -1,
      -1,   257,   258,   220,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,   283,    -1,   285,
      -1,   220,   283,    -1,   285,   101,    -1,    -1,    -1,    -1,
      -1,   297,    -1,   299,   295,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,   305,   156,    -1,    -1,    -1,    -1,
     161,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,   339,    -1,    -1,    -1,    -1,   339,    -1,
     156,    -1,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   287,
      -1,    -1,    -1,   101,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   156,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   220,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    64,
      65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    96,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,    -1,    -1,   141,    -1,    -1,   144,
      -1,    -1,    -1,   148,   149,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,
      -1,    -1,   177,   178,   179,    -1,    -1,   182,   183,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,   214,
     215,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,    -1,   229,    -1,    -1,    -1,    -1,    -1,
      -1,   236,    -1,    -1,    -1,   240,    -1,    -1,   243,    -1,
     245,    -1,   247,    -1,    -1,    -1,    -1,   252,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     265,    -1,    -1,    -1,    41,    -1,   271,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   286,   287,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,   298,    -1,   300,    -1,    -1,    -1,    -1,
      77,   306,    79,    -1,   309,   310,    -1,    84,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   151,   152,    -1,    -1,   155,    -1,
      -1,    -1,   159,    -1,   161,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214,    -1,    -1,
      -1,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,
     247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,
     287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,
      -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,
      -1,   308,    -1,   310,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   137,   141,   144,
     148,   149,   155,   161,   174,   177,   178,   179,   182,   183,
     196,   213,   214,   215,   227,   229,   236,   240,   243,   245,
     247,   252,   265,   271,   286,   287,   298,   300,   306,   309,
     310,   340,   347,   353,    66,    12,    53,    71,   100,   118,
     122,   134,   291,   386,     3,     4,   291,   354,   391,   186,
     192,   231,   256,   301,   346,   393,   283,     4,    40,   111,
     193,   245,   398,    28,   150,   172,   176,   228,   267,   275,
     276,   368,   400,    83,    99,   174,   217,   252,   401,    40,
      59,   111,   193,   287,   354,   410,     4,    19,    40,    56,
     101,   119,   156,   193,   201,   209,   210,   215,   220,   294,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   343,
     348,   349,   356,   364,   365,   366,   412,    33,   413,   356,
      44,    46,    76,    84,   142,   191,   209,   210,   216,   218,
     245,   310,   355,   144,   415,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   141,   151,   152,   155,   159,   161,   182,   183,   186,
     196,   213,   214,   221,   245,   247,   271,   286,   287,   295,
     302,   308,   310,   347,   416,    83,    99,   458,    19,    44,
      77,    84,    94,    95,   101,   124,   141,   155,   156,   162,
     182,   220,   271,   281,   310,   461,   356,    88,   116,   184,
     199,   259,   300,   310,   467,    16,    26,   112,   124,   158,
     206,   219,   470,   230,   488,     5,    66,    88,   139,   300,
     347,   356,   489,     5,   490,    57,   225,   240,   301,   506,
      64,    66,   181,   239,   281,   290,   525,    66,   202,   342,
     348,   350,   526,    39,   193,   231,   291,   354,   364,   366,
     527,     5,   300,   310,   356,   530,    70,   168,   244,   253,
     531,     4,   532,    88,   506,    61,   281,   304,   539,   193,
     291,   354,   540,    26,   112,   124,   206,   219,   542,    50,
      99,   108,   136,   293,   557,   558,     4,    37,    47,    74,
     149,   185,   231,   253,   288,   304,   381,     4,   124,   205,
     559,   291,   354,   561,    16,    23,   241,   243,   365,   562,
     230,   566,   291,   354,   567,     0,     5,    59,   354,   387,
     268,     5,     4,   291,   354,   388,     5,    32,   280,   389,
     123,   354,   390,   123,   354,   392,   354,     4,   192,   249,
     396,   186,   301,   345,   346,   354,   395,   356,   138,   175,
     394,   196,   354,    78,   171,   249,   354,   397,     5,   354,
       4,   245,   399,   354,   354,     5,   226,   402,    31,   403,
       5,   404,     5,   408,     5,    31,   409,   354,     9,    10,
      11,   354,   360,   361,   362,   363,   354,   354,    40,   111,
     193,   354,   411,   354,   193,   364,   366,   354,    35,   106,
     127,   128,   135,   153,   163,   370,   354,     4,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   117,    66,
      53,    71,    88,   100,   118,   122,   134,   173,   417,   118,
     419,   186,   192,   231,   256,   301,   345,   346,   354,   405,
     420,   283,   423,   168,   424,   168,   176,   426,    65,    66,
      69,    91,   168,   185,   207,   271,   339,   364,   428,   354,
     366,   431,    59,   287,   364,   432,   279,   364,   366,   433,
      33,   434,   364,   366,   435,     4,   364,   366,   436,    45,
      59,    81,   100,   117,   120,   146,   147,   198,   208,   268,
     269,   339,   440,   212,   303,   446,     5,    89,     6,    88,
     120,   438,     5,    65,   366,   437,    16,   506,    66,   181,
     239,   281,   290,   447,    66,   231,   448,   282,    61,   281,
     304,   449,    21,   134,   238,   266,   450,    37,    47,    74,
     149,   185,   253,   304,   451,   366,    89,    16,   195,   456,
     364,   459,    72,   462,    31,   463,    44,    87,   191,   464,
     149,   217,   258,   296,   465,   364,    18,    58,   115,   172,
     287,   364,   466,     4,   192,   469,     5,     4,     6,   120,
     354,     4,     5,   245,   471,     5,   473,     5,   117,   191,
     245,   269,   474,    93,   111,   186,   487,     5,   485,     5,
     269,   486,     4,     5,   356,   356,   354,   354,     5,     4,
       5,    60,    66,    73,    75,    80,    83,    89,    99,   105,
     114,   129,   149,   164,   173,   174,   194,   217,   231,   233,
     247,   252,   258,   265,   283,   296,   297,   299,   339,   491,
       5,     4,   196,   203,   204,   239,   344,   367,   354,   364,
     354,     5,   354,    40,   111,   354,   529,   356,   354,   364,
     366,   528,   354,   370,   354,     4,   365,    54,    90,   140,
     245,   533,     4,     4,   354,     4,   149,   258,   534,     5,
     364,     4,    40,   111,   354,   541,   354,    97,    61,   120,
     245,   272,   543,   120,   556,    61,   117,   120,   156,   191,
     242,   245,   269,   272,   282,   545,   546,    61,   120,   272,
     555,     5,     4,    34,   107,   202,   538,    66,   356,   382,
      66,   356,   383,    66,   356,   384,    13,   188,   537,   354,
     354,   224,   354,   385,   354,   269,     4,   354,   354,     4,
     565,     4,   285,   563,     4,   285,   564,     4,   370,   123,
     354,   568,   354,   354,     4,     5,   354,    12,   354,   354,
     354,    30,    94,   162,   249,   254,   369,   369,     4,   196,
     354,   354,     4,     4,     4,   354,   354,   354,   354,     4,
       4,     5,     5,   364,     5,   354,   354,   360,   362,   362,
     364,   354,   354,   354,   354,   354,   354,   354,   364,   366,
     363,   354,   354,   363,   354,     5,   268,   103,   186,   418,
     192,   249,   421,   168,    78,   171,   249,   422,   138,   175,
     406,   406,     4,   425,     4,   427,   192,   256,   429,   176,
     430,   168,   370,   354,   354,   364,   364,   370,   370,   370,
     364,   370,   354,   364,   443,     4,   366,   441,   195,     4,
     165,   310,   442,   195,   364,   131,   291,   445,     5,     5,
       4,   195,   354,     4,     5,    60,    66,   114,   129,   143,
     149,   154,   207,   226,   231,   233,   257,   258,   265,   283,
     339,   500,   366,   187,   187,    66,   452,    66,   453,    66,
     454,   224,   455,   354,     5,   225,   457,   365,   370,     5,
     364,   364,   364,   364,     4,   356,     4,     4,   195,   354,
      14,    15,    61,   189,   190,   262,   272,   273,   303,    87,
       5,     5,    14,    15,    61,   189,   190,   262,   272,   273,
     277,   303,    87,   156,   161,   365,   477,   482,    87,   156,
       5,   475,     4,     4,    14,    61,   189,   262,   272,   303,
       5,     5,     4,   354,   365,    20,    21,    22,    48,    49,
      52,    55,    62,    66,    74,    75,    82,    83,    99,   105,
     109,   110,   113,   129,   149,   171,   194,   224,   226,   232,
     233,   247,   248,   257,   258,   283,   285,   297,   299,   305,
     339,    66,    80,    89,    99,   129,   149,   194,   233,   258,
     297,   299,     4,    30,   160,   212,   238,   494,     5,    63,
     104,   235,   250,   251,   341,   342,   499,    99,   492,    17,
      40,   111,   193,   498,     4,     5,    17,   211,   292,   354,
     258,   499,   507,   124,   499,   508,    36,    40,   111,   132,
     193,   291,   354,   509,   364,   356,    91,    99,   105,   126,
     149,   157,   194,   202,   247,   258,   274,   512,    40,   111,
     193,     5,   284,    17,   211,   292,   516,   285,   356,   517,
       5,    99,   105,   300,    17,    17,     4,   354,   354,   354,
     354,   354,   354,   370,   354,   354,   363,   354,     4,   370,
       4,    40,   111,   193,   263,   535,    40,   111,   193,   263,
     536,     4,    97,     5,     5,    87,     4,     5,     5,    87,
       5,   546,    61,   120,   156,   272,   550,    61,   120,   272,
     554,    87,   156,    61,   120,   272,   548,     4,    61,   120,
     272,   547,     5,     5,     4,     4,     5,     5,     5,   354,
     354,   354,     4,   354,   560,   354,   354,     6,   365,     4,
       5,     4,     4,     5,     4,    97,   260,   371,   354,   354,
      12,     5,    12,   354,   354,    12,     4,    12,     4,     4,
     354,   354,   354,     4,   356,     4,     4,   370,   364,   370,
     354,   354,   354,   364,   354,   363,   354,   354,     5,     5,
     354,   366,   354,   364,   354,   370,   370,   371,   371,   371,
     370,   363,   354,   370,   354,   133,   246,   357,   444,   165,
       5,     4,   370,   156,   156,     4,     5,     4,     4,   354,
     439,   354,    20,    21,    22,    48,    49,    52,    59,    62,
      66,    74,    75,    82,   109,   110,   113,   129,   149,   171,
     180,   224,   226,   232,   233,   248,   258,   283,   285,   295,
     305,   339,    66,   129,   154,   233,   283,    30,   160,   212,
     238,   501,   354,   207,   354,   502,    17,   354,   257,   512,
     257,   207,   354,   503,   285,   504,    17,    98,   354,   354,
       5,   371,    56,   364,     4,     5,   468,   354,     5,     5,
       5,   156,   183,   375,   375,   164,   264,   373,     4,     4,
       5,     5,   472,   270,   270,     5,     5,     5,    17,   158,
     374,   374,   373,     4,     4,   373,     5,     5,   476,   161,
     338,   365,   480,     5,   479,     5,     5,   483,     5,   484,
       5,    14,    15,    61,   189,   190,   262,   272,   273,   277,
     303,     4,     4,     5,     5,   375,   373,     4,     5,     5,
     370,    82,   151,   222,   223,   237,   278,   378,     7,     8,
     354,   359,   238,   121,   238,   238,   105,    40,    66,    99,
     105,   111,   129,   149,   164,   194,   233,   247,   258,   285,
     297,   299,   300,   339,   493,   121,   238,     5,    27,   166,
     238,   281,   138,   105,    22,    49,    52,    82,   110,   113,
     226,   257,    22,    49,    52,    55,    82,   110,   113,   226,
     257,   283,    40,   121,   238,   238,   105,     5,   211,    27,
     224,    36,   132,   291,   354,   261,   268,   121,   243,   364,
     512,    40,   130,   224,   281,   243,   211,     5,     5,   247,
      27,   224,     4,     5,     5,   211,    36,   132,   291,   354,
     512,   211,   356,     4,     4,   354,     5,   303,    22,    27,
      48,    49,    51,    52,    62,    74,    75,    82,    85,   102,
     109,   110,   113,   171,   183,   226,   232,   248,   257,   284,
     285,   305,   350,   495,   354,   354,   354,   354,   354,   499,
     364,     5,     4,     5,   354,   354,   364,   354,   356,   354,
     354,   499,     5,   354,   354,   356,     5,    17,     5,     5,
     354,   354,   363,   354,   354,     4,   354,   354,   111,   354,
     354,   111,     4,    42,    43,   169,   170,   197,   380,   380,
      61,   120,   272,   544,   380,     5,    61,   120,   272,   549,
       5,     5,    61,   120,   272,   551,     4,     5,     5,     4,
      61,   120,   272,   553,    61,   120,   272,   552,     5,     5,
       4,     5,     5,     4,   380,   380,   380,   354,   354,   354,
       4,   364,   354,   365,   370,     5,     5,    12,   354,   364,
     366,   354,    12,   354,   354,   354,    59,   354,     6,     4,
     354,   354,    46,   271,   407,     5,   356,   356,   370,   354,
       4,     4,     4,   370,   364,   354,   354,   354,   354,   370,
     364,   371,   363,   354,     4,   371,   354,    38,    38,     4,
     366,     5,    24,    25,    97,   372,     4,   364,   354,   354,
       4,   354,     5,    82,   151,   222,   223,   237,   278,   364,
     366,   238,   121,   238,   238,    21,   238,   364,   121,   238,
      27,   166,   238,   281,   138,    21,   238,   121,   238,   238,
      21,   238,    27,   167,   224,   167,   261,   268,   121,   167,
     224,   289,   512,   130,   167,   224,   281,     4,   247,    27,
     167,   224,   512,   207,   354,   354,   354,   354,   354,   354,
     195,   354,   354,    20,   234,   460,     4,     4,   354,   375,
     375,   375,     4,   375,   375,   375,    14,    15,    61,   189,
     190,   262,   272,   273,   303,   374,   375,   375,   375,   375,
     375,     4,   375,   375,     4,   374,    14,    15,    61,   189,
     190,   262,   272,   273,   303,     5,   478,     5,   481,     5,
       5,    14,    15,    61,   189,   190,   262,   272,   273,   277,
     303,     5,    14,    15,    61,   189,   190,   262,   272,   273,
     277,   303,     5,    14,    15,    61,   189,   190,   262,   272,
     273,   277,   303,    14,    15,    61,   189,   190,   262,   272,
     273,   303,   270,     5,     5,     5,   374,   374,   373,     4,
       4,   373,     5,     4,     4,   375,   375,     4,   375,   375,
       5,   356,   364,   366,     5,   354,   356,   354,     5,   354,
       5,   359,   105,   194,   247,   105,   194,   247,     5,   356,
     354,   356,     5,   354,   364,   356,     5,   359,   238,   238,
      21,   238,    21,   238,   238,    21,   238,   307,   307,     4,
       4,     4,   493,     4,     4,     4,   307,   307,     4,     5,
       4,   356,   354,     5,   354,     5,   359,   356,   364,   364,
     354,    27,    48,    51,    62,    85,   102,   350,   376,     4,
     356,   354,   370,   356,     5,   364,   364,   354,   356,   356,
     364,   364,   354,   356,   354,     5,   354,   224,   224,   354,
     354,   224,   354,   224,   354,   354,   505,   513,   354,   224,
     224,   354,   354,   354,   354,   354,   354,   354,   354,     5,
     303,   354,   496,   354,   354,   224,   354,   354,   354,   354,
     364,   370,     5,   364,   364,   354,   354,   370,   354,   354,
     354,   364,   354,   354,     5,     4,   354,   354,   354,   354,
       5,     5,     4,   380,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   354,
     354,   354,   370,   354,   370,   354,   364,   366,   354,   370,
     354,   354,   354,   354,   354,     5,   354,     4,     6,   354,
     354,     4,   364,   354,   370,   176,   368,   354,   368,   371,
     370,   364,   354,   354,     4,   354,   364,   370,   364,   354,
       4,   364,     5,     5,     5,     5,   364,   370,   364,   364,
     364,   364,   366,   364,   370,   364,   364,   364,   366,   364,
     364,   364,   364,   366,   364,   364,   364,   354,   364,   364,
     364,   364,   364,   364,   364,   354,   354,     4,   354,     5,
       4,   354,   375,     5,     5,     5,   373,     4,     4,     5,
     375,   374,     4,   375,     5,     5,     5,   374,   374,   373,
       4,     4,     5,    14,    15,    61,   189,   190,   262,   272,
     273,   303,    14,    15,    61,   189,   190,   262,   272,   273,
     303,    14,    15,    61,   189,   190,   262,   272,   273,   303,
     270,     5,     5,     5,   374,   374,   373,     4,     4,   373,
       5,   270,     5,     5,     5,   374,   374,   373,     4,     4,
     373,     5,   270,     5,     5,     5,   374,   374,   373,     4,
       4,   373,     5,     5,     5,     5,   374,   374,   373,     4,
       4,     5,   374,     4,     4,   374,     4,     4,   375,     5,
     370,   364,   354,   354,   364,   354,     5,   359,     5,   364,
     356,     5,   364,   370,     5,   359,   354,   354,   354,   354,
     354,   354,   354,   354,   354,     4,     4,     5,     4,     4,
     354,   364,   354,     5,   359,   356,   370,   370,   354,   363,
     370,   370,   354,   370,   370,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,    55,    66,    92,   129,   283,
     285,   339,   510,   511,   512,   523,   524,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   364,
       5,   354,   354,   354,   354,     4,     4,   370,   371,     4,
     497,   370,   370,   363,   354,     4,   370,     4,   380,   380,
     380,   359,   354,   354,   354,   370,   354,   363,   354,   354,
      12,     5,     5,     4,   354,   354,     4,   370,   364,   354,
     354,   371,   372,   354,     5,   354,   370,   370,   366,     5,
       5,     5,     5,   370,   372,   372,   372,   370,   372,   371,
     372,   372,   370,   372,   372,   372,   370,   372,   372,   370,
     364,   372,   370,   372,   372,   370,   372,   370,     4,   366,
       5,   354,     4,   375,   374,     4,   374,     5,     5,     5,
     374,   374,   373,     4,     4,     5,     5,     5,     5,   374,
     374,   373,     4,     4,     5,     5,     5,     5,   374,   374,
     373,     4,     4,     5,   374,   375,   375,   375,   375,   375,
       4,   375,   375,     4,   374,   374,   375,   375,   375,   375,
     375,     4,   375,   375,     4,   374,   374,     4,     4,   374,
       4,   374,   374,     4,     4,     4,   365,   372,     4,   364,
     372,   354,   364,     4,   372,   372,   364,     4,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   364,
     372,   354,   364,     4,   363,   363,   364,   363,   363,   364,
     364,   363,   363,   354,   354,   354,   354,   354,   354,   359,
     354,   354,   354,   351,   351,   351,   351,   351,   351,   351,
     511,   351,   359,   354,   354,   354,   354,   359,   354,   354,
     354,   354,   354,   354,   370,   354,   303,   358,   359,   354,
     354,   371,   356,     4,     4,   371,     4,   354,   363,   354,
      59,   354,     5,     5,   354,     4,   368,   372,     5,     4,
       4,     5,   364,     5,   371,   372,   371,   371,   371,     5,
       4,   354,   375,   374,   375,   375,   375,   375,   375,     4,
     375,   375,   374,   375,   375,   375,   375,   375,     4,   375,
     375,   374,   375,   375,   375,   375,   375,     4,   375,   375,
     374,   375,   374,     4,   375,   375,   374,     4,   375,   374,
       4,   374,   374,   370,   364,   372,     4,   370,   354,   370,
     354,   354,   354,   372,     4,   370,   354,   363,   372,   354,
     363,   372,   372,   364,   354,     4,   377,   377,   354,   354,
     377,   359,   377,   513,   364,   493,     5,     4,     5,     5,
       5,     4,   356,   359,   377,   377,   354,   354,   359,   354,
     354,   354,   354,   354,   363,   354,     5,   513,   354,   377,
     356,   514,   515,     5,   356,     4,     5,   354,     5,     4,
       6,   354,    32,   280,   414,     5,   370,   364,   414,   354,
     374,   375,   374,   375,   374,   375,   375,   374,   375,   374,
     374,   354,   372,   364,   364,   354,   364,   354,   364,   364,
     354,   364,   372,     4,   513,   513,   358,   354,   513,     4,
     513,   370,     5,     4,     4,   513,   513,   358,   354,     4,
     513,   513,   354,   364,   513,   513,   513,   514,   520,   521,
     512,   518,   519,     4,     5,     5,     6,     4,   186,   301,
     346,   354,   405,   364,    32,   280,   379,     4,   375,   375,
     375,   375,   375,   365,   372,   372,   354,   372,     4,   372,
     372,   354,   372,   354,   513,   513,     4,   354,   513,     5,
     354,   513,     4,   354,   513,   370,   520,   522,   523,   351,
     519,     5,     5,     4,   354,   406,   354,   406,   370,   372,
       4,   364,   366,     4,   359,   358,   354,   354,   358,   354,
     364,   523,   356,     5,     5,   354,   354,   354,   354,   379,
       5,   364,   366,   370,   364,   366,   513,   354,     4,   513,
     354,   372,     5,     5,   354,     5,   354,   370,   370,     4,
     513,     4,     5,     5,     5,   358,   358,   513,   513,   513
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
#line 458 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 460 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 7:
#line 461 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 9:
#line 463 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 16:
#line 470 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 21:
#line 475 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 22:
#line 476 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 478 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 31:
#line 485 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 35:
#line 489 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 492 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 497 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 499 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 501 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 503 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 510 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 511 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 514 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 515 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 516 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 517 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 518 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 519 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 520 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 521 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 522 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 523 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 524 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 525 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 528 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 69:
#line 530 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 70:
#line 531 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 532 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 533 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 535 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 74:
#line 536 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 537 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 538 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 541 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 78:
#line 542 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 80:
#line 544 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 81:
#line 545 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 82:
#line 548 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 83:
#line 549 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 84:
#line 552 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 85:
#line 553 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 554 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 557 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 88:
#line 560 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 563 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 567 "frame/parser.Y"
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
#line 579 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
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
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 94:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 95:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 96:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 97:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 98:
#line 604 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 99:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 100:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 101:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 102:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 103:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 104:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 105:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 106:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 107:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 108:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 109:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 110:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 111:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 112:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 113:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 114:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 115:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 116:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 117:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 118:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 119:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 120:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 121:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 122:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 123:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 124:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 125:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 126:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 127:
#line 637 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 128:
#line 638 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 129:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 130:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 131:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 132:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 133:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 134:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 135:
#line 649 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 136:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 137:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 138:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 139:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 140:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 141:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 142:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 143:
#line 659 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 144:
#line 660 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 145:
#line 661 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 146:
#line 662 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 147:
#line 663 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 148:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 150:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 151:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 152:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 154:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 155:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 156:
#line 676 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 157:
#line 677 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 158:
#line 678 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 159:
#line 681 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 160:
#line 682 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 161:
#line 683 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 162:
#line 684 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 163:
#line 687 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 164:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 165:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 166:
#line 692 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 693 "frame/parser.Y"
    {;}
    break;

  case 168:
#line 694 "frame/parser.Y"
    {;}
    break;

  case 169:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 170:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 171:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 172:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 173:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 174:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 175:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 176:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 177:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 178:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 179:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 180:
#line 712 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 181:
#line 713 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 182:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 183:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 184:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 185:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 186:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 187:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 188:
#line 724 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 189:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 190:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 191:
#line 729 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 192:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 193:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 194:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 195:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 196:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 201:
#line 741 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 202:
#line 742 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 203:
#line 743 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 204:
#line 744 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 205:
#line 746 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 206:
#line 749 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 750 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 753 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 754 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 757 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 211:
#line 758 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 212:
#line 761 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 213:
#line 763 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 215:
#line 767 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 216:
#line 768 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 219:
#line 771 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 221:
#line 773 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 776 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 223:
#line 777 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 224:
#line 780 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 225:
#line 781 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 226:
#line 783 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 227:
#line 785 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 228:
#line 786 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 787 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 230:
#line 789 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 231:
#line 791 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 232:
#line 794 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 233:
#line 795 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 234:
#line 798 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 235:
#line 800 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 236:
#line 803 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 237:
#line 805 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 238:
#line 808 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 239:
#line 812 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 240:
#line 813 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 242:
#line 817 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 243:
#line 818 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 244:
#line 819 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 248:
#line 825 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 249:
#line 826 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 251:
#line 829 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 252:
#line 834 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 253:
#line 835 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 254:
#line 838 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 255:
#line 839 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 256:
#line 840 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 257:
#line 841 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 258:
#line 842 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 259:
#line 845 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 260:
#line 846 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 261:
#line 847 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 262:
#line 850 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 263:
#line 852 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 264:
#line 857 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 265:
#line 862 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 266:
#line 869 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 267:
#line 871 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 268:
#line 872 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 270:
#line 874 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 271:
#line 878 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 272:
#line 880 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 273:
#line 882 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 274:
#line 883 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 280:
#line 894 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 281:
#line 896 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 282:
#line 898 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 284:
#line 907 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 285:
#line 910 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 286:
#line 911 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 287:
#line 914 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 289:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 290:
#line 923 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 291:
#line 924 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 294:
#line 929 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 298:
#line 937 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 942 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 301:
#line 944 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 302:
#line 947 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 303:
#line 949 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 304:
#line 952 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 306:
#line 954 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 307:
#line 955 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 308:
#line 956 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 309:
#line 959 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 310:
#line 961 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 962 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 963 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 964 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 968 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 315:
#line 970 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 316:
#line 971 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 317:
#line 972 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 975 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 319:
#line 977 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 320:
#line 979 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 321:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 322:
#line 984 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 323:
#line 987 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 324:
#line 988 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 325:
#line 989 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 326:
#line 992 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 327:
#line 995 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 341:
#line 1009 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 344:
#line 1012 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1014 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 348:
#line 1017 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 349:
#line 1018 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 352:
#line 1021 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 353:
#line 1022 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 355:
#line 1025 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 357:
#line 1027 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 359:
#line 1029 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 361:
#line 1031 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 362:
#line 1033 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 363:
#line 1035 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 365:
#line 1037 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 366:
#line 1040 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 367:
#line 1041 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 368:
#line 1042 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 369:
#line 1043 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 370:
#line 1044 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 371:
#line 1045 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 373:
#line 1047 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 374:
#line 1050 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 375:
#line 1051 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 376:
#line 1052 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 377:
#line 1055 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 378:
#line 1058 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 379:
#line 1060 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 380:
#line 1062 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 381:
#line 1063 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 382:
#line 1064 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 384:
#line 1066 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 386:
#line 1069 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 387:
#line 1075 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 388:
#line 1076 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 389:
#line 1079 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 390:
#line 1080 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 391:
#line 1081 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 392:
#line 1084 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 393:
#line 1085 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 395:
#line 1091 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 396:
#line 1093 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 397:
#line 1095 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 398:
#line 1098 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 400:
#line 1100 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 401:
#line 1104 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 402:
#line 1108 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 404:
#line 1110 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 405:
#line 1111 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 406:
#line 1112 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 407:
#line 1113 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 408:
#line 1114 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 410:
#line 1116 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 411:
#line 1117 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 412:
#line 1120 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 413:
#line 1121 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 414:
#line 1122 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 415:
#line 1125 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 416:
#line 1126 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 417:
#line 1130 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 418:
#line 1132 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 419:
#line 1140 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 421:
#line 1144 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1147 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 423:
#line 1149 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 424:
#line 1150 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 425:
#line 1153 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 426:
#line 1156 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 427:
#line 1158 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 428:
#line 1162 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 429:
#line 1164 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 430:
#line 1167 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 431:
#line 1171 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 433:
#line 1174 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 434:
#line 1177 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 435:
#line 1178 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 437:
#line 1182 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 438:
#line 1183 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1184 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 440:
#line 1187 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 441:
#line 1189 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 442:
#line 1190 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 444:
#line 1192 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 448:
#line 1196 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 449:
#line 1197 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 450:
#line 1198 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 451:
#line 1200 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 453:
#line 1202 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 454:
#line 1205 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1207 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 456:
#line 1209 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 457:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 458:
#line 1211 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 459:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 460:
#line 1215 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 461:
#line 1219 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 463:
#line 1224 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 464:
#line 1227 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 465:
#line 1229 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 466:
#line 1231 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 467:
#line 1233 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (5)].real), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 468:
#line 1236 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 469:
#line 1237 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 470:
#line 1238 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 471:
#line 1241 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 472:
#line 1242 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 473:
#line 1243 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 474:
#line 1244 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 475:
#line 1245 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 476:
#line 1248 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 477:
#line 1251 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 478:
#line 1252 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 479:
#line 1253 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 480:
#line 1256 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 481:
#line 1257 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 482:
#line 1258 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 483:
#line 1259 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 484:
#line 1260 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 485:
#line 1261 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 490:
#line 1268 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 491:
#line 1269 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 493:
#line 1273 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 494:
#line 1274 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 495:
#line 1277 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 496:
#line 1278 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 497:
#line 1281 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 498:
#line 1282 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 499:
#line 1285 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 500:
#line 1286 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 501:
#line 1289 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 503:
#line 1291 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 504:
#line 1294 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 505:
#line 1295 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 507:
#line 1299 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 508:
#line 1303 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 509:
#line 1306 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 510:
#line 1313 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 511:
#line 1314 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 512:
#line 1317 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 515:
#line 1320 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 516:
#line 1321 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 517:
#line 1322 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 518:
#line 1323 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 520:
#line 1325 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 522:
#line 1327 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 524:
#line 1329 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 525:
#line 1330 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 526:
#line 1331 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 527:
#line 1332 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1336 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 530:
#line 1339 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 531:
#line 1340 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 532:
#line 1343 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 533:
#line 1344 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 534:
#line 1345 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 535:
#line 1346 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 536:
#line 1349 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 537:
#line 1350 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 538:
#line 1351 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 539:
#line 1352 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 540:
#line 1355 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 541:
#line 1356 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 542:
#line 1357 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1358 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1359 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 545:
#line 1360 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1363 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 547:
#line 1364 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 548:
#line 1365 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 551:
#line 1369 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 552:
#line 1370 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 553:
#line 1373 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 554:
#line 1376 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 555:
#line 1377 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1381 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 557:
#line 1383 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 558:
#line 1384 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1396 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1398 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1400 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1401 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 569:
#line 1403 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1405 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 571:
#line 1407 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1409 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1411 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1415 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1416 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1417 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1418 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1427 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 585:
#line 1431 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1439 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 590:
#line 1441 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1443 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 592:
#line 1445 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 593:
#line 1448 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1450 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1452 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 601:
#line 1460 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1461 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1462 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1463 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1464 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 606:
#line 1465 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1467 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 608:
#line 1469 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 609:
#line 1470 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1471 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1472 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 612:
#line 1475 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1476 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1477 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1478 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 618:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1495 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 632:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 642:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 643:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 655:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1598 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 661:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 669:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 671:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 672:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1638 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1641 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 675:
#line 1645 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 680:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 682:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 683:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1657 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 686:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1669 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1673 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1675 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1676 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 698:
#line 1678 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1680 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1682 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1685 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 702:
#line 1686 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 703:
#line 1689 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 704:
#line 1690 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1691 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 706:
#line 1694 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 707:
#line 1701 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 708:
#line 1702 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 709:
#line 1703 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 710:
#line 1704 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 714:
#line 1711 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 716:
#line 1719 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 717:
#line 1720 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 718:
#line 1722 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 719:
#line 1724 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 720:
#line 1725 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 721:
#line 1726 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 723:
#line 1727 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 724:
#line 1728 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 727:
#line 1731 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 728:
#line 1732 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 729:
#line 1734 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 730:
#line 1736 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 731:
#line 1738 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 732:
#line 1741 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1743 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 735:
#line 1746 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1749 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 737:
#line 1752 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 738:
#line 1754 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1757 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 740:
#line 1760 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1763 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 742:
#line 1766 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 743:
#line 1770 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 744:
#line 1774 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 745:
#line 1779 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 746:
#line 1783 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 747:
#line 1784 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1786 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1787 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 750:
#line 1789 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1791 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 752:
#line 1793 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1795 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1796 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 755:
#line 1798 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 756:
#line 1800 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 757:
#line 1803 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 758:
#line 1807 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1811 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1813 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1815 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1817 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1819 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1821 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1823 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1825 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1827 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1829 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 769:
#line 1831 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 770:
#line 1833 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 771:
#line 1835 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 772:
#line 1837 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1838 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1840 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1842 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 776:
#line 1843 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1844 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1846 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 779:
#line 1848 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1849 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1856 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 786:
#line 1860 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 787:
#line 1863 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1866 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 789:
#line 1870 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 790:
#line 1874 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 791:
#line 1879 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 792:
#line 1883 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 793:
#line 1884 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 794:
#line 1885 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 795:
#line 1887 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 796:
#line 1889 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 797:
#line 1893 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 798:
#line 1894 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 799:
#line 1895 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 800:
#line 1897 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 801:
#line 1900 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 802:
#line 1903 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 803:
#line 1906 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 804:
#line 1907 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1909 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1912 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 807:
#line 1916 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1918 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 809:
#line 1919 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 810:
#line 1921 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 811:
#line 1924 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1927 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 813:
#line 1928 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1930 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 815:
#line 1931 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1932 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1934 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 818:
#line 1935 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 819:
#line 1937 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1940 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 821:
#line 1943 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 822:
#line 1945 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 823:
#line 1946 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 827:
#line 1951 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 828:
#line 1952 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 829:
#line 1954 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 830:
#line 1956 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 831:
#line 1958 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 833:
#line 1961 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 837:
#line 1967 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1968 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 839:
#line 1969 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 840:
#line 1970 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 841:
#line 1971 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 842:
#line 1972 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1973 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 844:
#line 1974 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1982 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 851:
#line 1983 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1984 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1986 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 854:
#line 1987 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 1988 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 856:
#line 1989 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 857:
#line 1990 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1992 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 859:
#line 1993 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 860:
#line 1994 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 861:
#line 1995 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 862:
#line 1996 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 863:
#line 1997 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 865:
#line 2001 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 866:
#line 2002 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 867:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 868:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 869:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 870:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 871:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 872:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 873:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 874:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 875:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 876:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 877:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 878:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 879:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 880:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 881:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 882:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 883:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 884:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 885:
#line 2023 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 886:
#line 2024 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 887:
#line 2025 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 888:
#line 2026 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 889:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 890:
#line 2029 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 891:
#line 2039 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2047 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2056 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2064 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2071 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2078 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2086 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2094 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2099 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2104 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2109 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2119 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2124 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2129 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2138 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2148 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2158 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2167 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2175 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2185 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2195 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2205 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2217 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2226 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2230 "frame/parser.Y"
    {fr->markerCreateMaskCmd();;}
    break;

  case 918:
#line 2235 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 919:
#line 2237 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 920:
#line 2239 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 921:
#line 2244 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 922:
#line 2247 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 923:
#line 2251 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 924:
#line 2253 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 925:
#line 2254 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 926:
#line 2257 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 927:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 928:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 929:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 930:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 931:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 932:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 934:
#line 2267 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 935:
#line 2268 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 936:
#line 2269 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 937:
#line 2270 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 938:
#line 2271 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 939:
#line 2274 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2276 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 941:
#line 2278 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 942:
#line 2280 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 943:
#line 2282 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 944:
#line 2284 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 945:
#line 2286 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 946:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 947:
#line 2288 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 948:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2292 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 950:
#line 2294 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 951:
#line 2296 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 952:
#line 2298 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2299 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2300 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2304 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 957:
#line 2307 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2309 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 959:
#line 2311 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2312 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 961:
#line 2313 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2314 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2316 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2317 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2318 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2319 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 968:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2324 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2325 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2327 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2329 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2331 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2332 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2336 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2337 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 979:
#line 2339 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2341 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2343 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 982:
#line 2346 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 983:
#line 2349 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2350 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2351 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2353 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 987:
#line 2356 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2359 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2360 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2361 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2366 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2368 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 996:
#line 2371 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2372 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 998:
#line 2373 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1000:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2377 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2379 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2381 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1004:
#line 2383 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2385 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1007:
#line 2386 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1008:
#line 2388 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1009:
#line 2390 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1010:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1011:
#line 2392 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1013:
#line 2394 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1015:
#line 2398 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1016:
#line 2399 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1017:
#line 2400 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1018:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1019:
#line 2402 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1020:
#line 2403 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1021:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1022:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1023:
#line 2408 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1024:
#line 2411 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1025:
#line 2412 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1026:
#line 2413 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1027:
#line 2414 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1028:
#line 2417 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1029:
#line 2418 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1030:
#line 2421 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1031:
#line 2422 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1032:
#line 2425 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1033:
#line 2426 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1034:
#line 2429 "frame/parser.Y"
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

  case 1035:
#line 2442 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1036:
#line 2443 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1037:
#line 2447 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1038:
#line 2448 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1039:
#line 2452 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1040:
#line 2457 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1041:
#line 2462 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1042:
#line 2468 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1043:
#line 2470 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1044:
#line 2473 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1045:
#line 2475 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2478 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1047:
#line 2481 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2482 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1049:
#line 2483 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1050:
#line 2484 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1051:
#line 2485 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1052:
#line 2486 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1053:
#line 2488 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1056:
#line 2495 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1057:
#line 2496 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1058:
#line 2497 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1059:
#line 2498 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1060:
#line 2499 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1061:
#line 2500 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1064:
#line 2505 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1065:
#line 2506 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1066:
#line 2507 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1067:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1068:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1069:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1070:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1071:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1072:
#line 2513 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1073:
#line 2514 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1074:
#line 2515 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1077:
#line 2522 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1078:
#line 2523 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1080:
#line 2526 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1081:
#line 2527 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1082:
#line 2528 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1083:
#line 2529 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1084:
#line 2532 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1085:
#line 2533 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1088:
#line 2541 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1094:
#line 2552 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1095:
#line 2555 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1096:
#line 2559 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1097:
#line 2560 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1098:
#line 2561 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1099:
#line 2562 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1100:
#line 2563 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1101:
#line 2564 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1102:
#line 2565 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1103:
#line 2571 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1104:
#line 2572 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1105:
#line 2573 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1107:
#line 2578 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1108:
#line 2579 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1109:
#line 2581 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1110:
#line 2586 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1112:
#line 2588 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1114:
#line 2590 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2593 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1116:
#line 2595 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1117:
#line 2600 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1118:
#line 2603 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1119:
#line 2604 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1120:
#line 2605 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1121:
#line 2608 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1122:
#line 2610 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1123:
#line 2614 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1124:
#line 2615 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1125:
#line 2619 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1126:
#line 2620 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1127:
#line 2621 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2622 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1129:
#line 2628 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1130:
#line 2629 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1131:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1132:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1133:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1134:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1137:
#line 2646 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2648 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1139:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1140:
#line 2650 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1141:
#line 2654 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1142:
#line 2655 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2656 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1144:
#line 2657 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1145:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1146:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1147:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1148:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1149:
#line 2666 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1150:
#line 2669 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1151:
#line 2670 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1152:
#line 2671 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1153:
#line 2674 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1154:
#line 2675 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1156:
#line 2677 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1157:
#line 2678 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1158:
#line 2681 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1159:
#line 2682 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1160:
#line 2683 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1165:
#line 2690 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1166:
#line 2694 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1167:
#line 2696 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1168:
#line 2698 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2703 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1171:
#line 2705 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2707 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2720 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1183:
#line 2721 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1184:
#line 2722 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1185:
#line 2725 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2726 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2727 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1188:
#line 2730 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2731 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2732 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1191:
#line 2735 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2736 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2737 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2741 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2742 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2743 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2747 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2748 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1201:
#line 2751 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2752 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2753 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2757 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2758 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2761 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2762 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2763 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2767 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2769 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2771 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2775 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1214:
#line 2779 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1215:
#line 2781 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1216:
#line 2785 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1217:
#line 2788 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1218:
#line 2789 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1219:
#line 2790 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1220:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1221:
#line 2794 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1222:
#line 2796 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1223:
#line 2797 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1224:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1226:
#line 2803 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1227:
#line 2805 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1228:
#line 2806 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1229:
#line 2812 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1230:
#line 2813 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1231:
#line 2817 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1233:
#line 2819 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2824 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2825 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1238:
#line 2826 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1239:
#line 2829 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2830 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1241:
#line 2831 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1242:
#line 2834 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1243:
#line 2836 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1244:
#line 2841 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1245:
#line 2844 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1246:
#line 2851 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1247:
#line 2853 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1248:
#line 2855 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1249:
#line 2860 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1251:
#line 2864 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1252:
#line 2865 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1253:
#line 2866 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2868 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1255:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1256:
#line 2875 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10912 "frame/parser.C"
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


#line 2879 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

