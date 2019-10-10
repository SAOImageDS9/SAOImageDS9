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
#define YYLAST   5508

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  352
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1259
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2787

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
     326,   327,   329,   331,   333,   335,   337,   339,   341,   343,
     345,   347,   349,   351,   353,   355,   357,   359,   361,   363,
     364,   366,   368,   370,   372,   374,   376,   378,   379,   381,
     383,   384,   386,   388,   390,   391,   393,   395,   396,   398,
     400,   401,   403,   405,   406,   408,   410,   412,   414,   416,
     418,   420,   421,   423,   425,   427,   429,   431,   433,   435,
     436,   438,   440,   441,   443,   445,   447,   449,   451,   454,
     457,   460,   463,   466,   469,   472,   474,   477,   479,   482,
     484,   487,   489,   492,   495,   502,   505,   510,   513,   516,
     519,   523,   526,   529,   531,   534,   536,   539,   544,   550,
     553,   557,   563,   570,   572,   574,   576,   584,   596,   605,
     618,   620,   623,   626,   628,   630,   633,   636,   639,   642,
     646,   650,   653,   656,   658,   660,   662,   664,   666,   668,
     670,   673,   676,   679,   683,   686,   689,   692,   699,   710,
     712,   715,   717,   724,   735,   737,   740,   743,   746,   749,
     752,   755,   769,   783,   796,   809,   811,   812,   814,   816,
     821,   828,   830,   832,   834,   836,   838,   840,   842,   844,
     846,   851,   855,   860,   861,   868,   877,   880,   884,   888,
     892,   893,   898,   903,   908,   913,   917,   921,   923,   927,
     933,   938,   943,   947,   950,   951,   953,   955,   959,   962,
     965,   968,   971,   974,   977,   980,   983,   986,   989,   992,
     995,   998,  1001,  1003,  1006,  1009,  1014,  1024,  1027,  1030,
    1033,  1035,  1039,  1042,  1045,  1047,  1050,  1059,  1062,  1064,
    1067,  1069,  1072,  1074,  1079,  1089,  1092,  1094,  1096,  1098,
    1100,  1103,  1105,  1107,  1110,  1112,  1113,  1116,  1119,  1121,
    1122,  1125,  1128,  1130,  1132,  1135,  1138,  1141,  1143,  1145,
    1147,  1149,  1151,  1153,  1154,  1156,  1159,  1161,  1166,  1172,
    1173,  1176,  1178,  1184,  1187,  1190,  1192,  1194,  1196,  1199,
    1201,  1204,  1206,  1208,  1209,  1211,  1213,  1214,  1216,  1222,
    1229,  1233,  1240,  1244,  1246,  1250,  1252,  1254,  1256,  1260,
    1267,  1275,  1281,  1283,  1285,  1290,  1296,  1298,  1302,  1303,
    1305,  1308,  1310,  1315,  1317,  1320,  1322,  1325,  1329,  1332,
    1334,  1337,  1339,  1344,  1347,  1349,  1351,  1355,  1357,  1360,
    1364,  1367,  1368,  1370,  1372,  1377,  1380,  1381,  1383,  1388,
    1394,  1400,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,
    1417,  1419,  1421,  1423,  1425,  1427,  1429,  1432,  1434,  1437,
    1439,  1442,  1445,  1448,  1451,  1453,  1455,  1457,  1458,  1460,
    1461,  1463,  1464,  1466,  1467,  1469,  1470,  1473,  1476,  1477,
    1479,  1482,  1484,  1491,  1497,  1499,  1501,  1503,  1506,  1509,
    1511,  1513,  1515,  1517,  1520,  1522,  1524,  1526,  1529,  1531,
    1533,  1535,  1538,  1541,  1544,  1545,  1547,  1548,  1550,  1552,
    1554,  1556,  1558,  1560,  1562,  1564,  1567,  1570,  1573,  1575,
    1578,  1582,  1584,  1587,  1590,  1595,  1602,  1604,  1615,  1617,
    1620,  1624,  1628,  1631,  1634,  1637,  1640,  1643,  1646,  1649,
    1654,  1659,  1664,  1668,  1672,  1678,  1683,  1688,  1693,  1697,
    1701,  1705,  1709,  1712,  1715,  1720,  1724,  1728,  1732,  1736,
    1741,  1746,  1751,  1756,  1762,  1767,  1774,  1782,  1787,  1792,
    1798,  1801,  1805,  1809,  1813,  1816,  1820,  1824,  1828,  1832,
    1837,  1841,  1847,  1854,  1858,  1862,  1867,  1871,  1875,  1879,
    1883,  1887,  1893,  1897,  1901,  1906,  1910,  1913,  1916,  1918,
    1922,  1927,  1932,  1937,  1942,  1947,  1954,  1959,  1964,  1970,
    1975,  1980,  1985,  1990,  1996,  2001,  2008,  2016,  2021,  2026,
    2032,  2038,  2044,  2050,  2056,  2062,  2070,  2076,  2082,  2089,
    2094,  2099,  2104,  2109,  2114,  2121,  2126,  2131,  2137,  2143,
    2149,  2155,  2161,  2168,  2174,  2182,  2191,  2197,  2203,  2210,
    2214,  2218,  2222,  2226,  2231,  2235,  2241,  2248,  2252,  2256,
    2261,  2265,  2269,  2273,  2277,  2281,  2287,  2291,  2295,  2300,
    2305,  2310,  2314,  2320,  2325,  2330,  2333,  2337,  2344,  2351,
    2353,  2355,  2357,  2360,  2363,  2366,  2370,  2374,  2377,  2390,
    2393,  2396,  2398,  2402,  2407,  2410,  2411,  2415,  2417,  2419,
    2422,  2425,  2428,  2431,  2434,  2439,  2444,  2449,  2453,  2458,
    2464,  2473,  2480,  2485,  2495,  2502,  2510,  2521,  2533,  2546,
    2556,  2562,  2567,  2574,  2578,  2584,  2590,  2597,  2603,  2608,
    2618,  2629,  2641,  2651,  2658,  2665,  2672,  2679,  2686,  2693,
    2700,  2707,  2714,  2722,  2730,  2733,  2738,  2743,  2748,  2753,
    2759,  2764,  2769,  2775,  2781,  2785,  2790,  2795,  2800,  2805,
    2813,  2823,  2830,  2841,  2853,  2866,  2876,  2880,  2883,  2887,
    2893,  2901,  2906,  2910,  2914,  2921,  2929,  2937,  2942,  2947,
    2952,  2962,  2967,  2971,  2976,  2984,  2992,  2995,  2999,  3003,
    3007,  3012,  3015,  3018,  3023,  3034,  3038,  3040,  3044,  3047,
    3050,  3053,  3056,  3060,  3066,  3071,  3077,  3080,  3088,  3092,
    3095,  3098,  3102,  3105,  3108,  3111,  3115,  3118,  3122,  3127,
    3131,  3135,  3142,  3147,  3150,  3154,  3157,  3160,  3165,  3169,
    3173,  3176,  3180,  3182,  3185,  3187,  3190,  3193,  3196,  3198,
    3200,  3202,  3204,  3207,  3209,  3212,  3215,  3217,  3220,  3223,
    3225,  3228,  3230,  3232,  3234,  3236,  3238,  3240,  3242,  3244,
    3245,  3247,  3250,  3253,  3256,  3260,  3266,  3274,  3282,  3289,
    3296,  3303,  3310,  3316,  3323,  3330,  3337,  3344,  3351,  3358,
    3365,  3377,  3385,  3393,  3401,  3411,  3421,  3432,  3445,  3458,
    3461,  3464,  3468,  3473,  3478,  3483,  3486,  3491,  3496,  3498,
    3500,  3502,  3504,  3506,  3508,  3510,  3512,  3515,  3517,  3519,
    3521,  3525,  3529,  3538,  3545,  3556,  3565,  3573,  3579,  3582,
    3585,  3589,  3594,  3600,  3604,  3610,  3616,  3620,  3625,  3631,
    3637,  3643,  3647,  3653,  3656,  3660,  3664,  3670,  3674,  3678,
    3682,  3687,  3693,  3699,  3703,  3709,  3715,  3719,  3724,  3730,
    3736,  3739,  3742,  3746,  3752,  3759,  3766,  3770,  3774,  3778,
    3785,  3791,  3797,  3800,  3804,  3808,  3814,  3821,  3825,  3828,
    3831,  3835,  3838,  3842,  3845,  3849,  3855,  3862,  3865,  3868,
    3871,  3873,  3878,  3883,  3885,  3888,  3891,  3894,  3897,  3900,
    3903,  3906,  3910,  3913,  3917,  3920,  3924,  3926,  3928,  3930,
    3932,  3934,  3935,  3938,  3939,  3942,  3943,  3945,  3946,  3947,
    3949,  3951,  3953,  3955,  3963,  3972,  3975,  3980,  3983,  3988,
    3995,  3998,  4000,  4002,  4006,  4010,  4012,  4017,  4020,  4022,
    4026,  4030,  4035,  4039,  4043,  4047,  4049,  4051,  4053,  4055,
    4057,  4059,  4061,  4063,  4065,  4067,  4069,  4071,  4073,  4075,
    4078,  4079,  4080,  4083,  4085,  4089,  4091,  4095,  4097,  4100,
    4103,  4105,  4109,  4110,  4111,  4114,  4117,  4119,  4123,  4129,
    4131,  4134,  4137,  4141,  4144,  4147,  4150,  4152,  4154,  4156,
    4158,  4163,  4166,  4170,  4174,  4177,  4181,  4184,  4187,  4190,
    4194,  4198,  4202,  4205,  4209,  4211,  4215,  4219,  4221,  4224,
    4227,  4230,  4233,  4243,  4250,  4252,  4254,  4256,  4258,  4261,
    4264,  4268,  4272,  4274,  4277,  4281,  4285,  4287,  4290,  4292,
    4294,  4296,  4298,  4300,  4303,  4306,  4311,  4313,  4316,  4319,
    4322,  4326,  4328,  4330,  4332,  4335,  4338,  4341,  4344,  4347,
    4351,  4355,  4359,  4363,  4367,  4371,  4375,  4377,  4380,  4383,
    4386,  4390,  4393,  4397,  4401,  4404,  4407,  4410,  4413,  4416,
    4419,  4422,  4425,  4428,  4431,  4434,  4437,  4440,  4443,  4447,
    4451,  4455,  4458,  4461,  4464,  4467,  4470,  4473,  4476,  4479,
    4482,  4485,  4488,  4491,  4495,  4499,  4503,  4508,  4515,  4518,
    4520,  4522,  4524,  4526,  4528,  4529,  4535,  4537,  4544,  4548,
    4550,  4553,  4557,  4560,  4564,  4568,  4571,  4574,  4577,  4580,
    4583,  4586,  4590,  4593,  4596,  4600,  4602,  4606,  4611,  4613,
    4616,  4622,  4629,  4636,  4639,  4641,  4644,  4647,  4653,  4660
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     353,     0,    -1,    96,   355,    -1,    44,   386,    -1,    41,
      66,     5,    -1,    41,    66,   140,    -1,    46,   391,    -1,
      59,    -1,    64,    -1,    65,   393,    -1,    67,   283,     5,
      -1,    68,   398,    -1,    69,   400,    -1,    77,   401,    -1,
      84,   410,    -1,    86,   412,    -1,    87,   413,    -1,    95,
     356,    -1,   125,   415,    -1,   137,   416,    -1,   141,   458,
      -1,   144,   461,    -1,   148,    -1,   149,   356,    -1,   155,
     467,    -1,   161,    16,     4,    -1,   174,   470,    -1,   177,
     488,    -1,   178,   489,    -1,   179,   490,    -1,   182,   506,
     491,    -1,   183,   525,    -1,   196,    66,     5,    -1,   213,
     526,    -1,   214,   527,    -1,   215,   530,    -1,   236,    88,
      -1,   229,   532,    -1,   227,   531,    -1,   243,    -1,   240,
     506,   534,    -1,   245,   539,    -1,   247,   540,    -1,   252,
     542,    -1,   265,    -1,   271,   557,    -1,   286,     4,    -1,
     287,   381,    -1,   298,    -1,   300,   559,    -1,   306,    -1,
     309,   561,    -1,   310,   562,    -1,   340,   566,    -1,   347,
     567,    -1,     3,    -1,     4,    -1,   210,    -1,   209,    -1,
     191,   356,    -1,   216,   356,    -1,   218,   356,    -1,   310,
     356,    -1,    44,   356,    -1,    46,   356,    -1,    76,   356,
      -1,    84,   356,    -1,   142,   356,    -1,   245,   356,    -1,
       4,    -1,   343,    -1,   348,    -1,   210,    -1,   294,    -1,
     201,    -1,   349,    -1,   209,    -1,   119,    -1,    -1,   246,
      38,    -1,   133,    38,    -1,   246,    -1,   133,    -1,    -1,
     359,    -1,   354,    -1,     7,    -1,     8,    -1,     9,    -1,
      10,    -1,    11,    -1,   360,   360,    -1,   361,   362,    -1,
     362,   362,    -1,   354,   354,    -1,   156,    -1,   220,    -1,
     101,    -1,    19,    -1,   365,    -1,   310,    -1,   311,    -1,
     312,    -1,   313,    -1,   314,    -1,   315,    -1,   316,    -1,
     317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,
     322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,
     327,    -1,   328,    -1,   329,    -1,   330,    -1,   331,    -1,
     332,    -1,   333,    -1,   334,    -1,   335,    -1,   336,    -1,
     337,    -1,    56,    -1,   215,    -1,    -1,   344,    -1,   204,
      -1,   196,    -1,   203,    -1,   239,    -1,   172,    -1,   176,
      -1,   228,    -1,   275,    -1,   276,    -1,    28,    -1,   267,
      -1,   150,    -1,    30,    -1,   254,    -1,   249,    -1,    94,
      -1,   162,    -1,    -1,   127,    -1,    35,    -1,   128,    -1,
     163,    -1,   153,    -1,   135,    -1,   106,    -1,    -1,    97,
      -1,   260,    -1,    -1,    97,    -1,    24,    -1,    25,    -1,
      -1,   264,    -1,   164,    -1,    -1,    17,    -1,   158,    -1,
      -1,   156,    -1,   183,    -1,    -1,    62,    -1,    48,    -1,
     102,    -1,    85,    -1,   350,    -1,    27,    -1,    51,    -1,
      -1,     4,    -1,    82,    -1,   151,    -1,   222,    -1,   223,
      -1,   237,    -1,   278,    -1,    -1,    32,    -1,   280,    -1,
      -1,   197,    -1,    42,    -1,    43,    -1,   169,    -1,   170,
      -1,   304,   385,    -1,    47,   382,    -1,    74,   383,    -1,
     149,   384,    -1,   185,   537,    -1,    37,   538,    -1,   253,
     354,    -1,   231,    -1,   288,   354,    -1,   356,    -1,    66,
       5,    -1,   356,    -1,    66,     5,    -1,   356,    -1,    66,
       5,    -1,   354,   354,    -1,   224,   354,   354,   354,   354,
     354,    -1,    12,   387,    -1,    71,     5,     5,     5,    -1,
     100,     4,    -1,   118,   388,    -1,   134,   389,    -1,    53,
     268,     4,    -1,   291,   390,    -1,   122,     5,    -1,    59,
      -1,   354,   354,    -1,   354,    -1,   354,   354,    -1,   354,
      12,   354,   354,    -1,   354,   354,    12,   354,   354,    -1,
     291,   354,    -1,   291,   354,   354,    -1,   291,   354,    12,
     354,   354,    -1,   291,   354,   354,    12,   354,   354,    -1,
      32,    -1,   280,    -1,   123,    -1,   354,   354,    12,    59,
       5,     5,     5,    -1,   354,   354,     4,   354,   354,    12,
      59,     5,     5,     5,     5,    -1,   354,   354,    12,   354,
     354,     5,     5,     5,    -1,   354,   354,     4,   354,   354,
      12,   354,   354,     5,     5,     5,     5,    -1,   354,    -1,
     354,   354,    -1,   291,   392,    -1,   123,    -1,   354,    -1,
     354,   354,    -1,   256,   394,    -1,   192,   395,    -1,   186,
     396,    -1,   301,   354,   354,    -1,   301,   196,   196,    -1,
     346,   397,    -1,   231,   356,    -1,   138,    -1,   175,    -1,
     354,    -1,   186,    -1,   346,    -1,   345,    -1,   301,    -1,
       4,   369,    -1,   192,   369,    -1,   249,     4,    -1,   354,
       4,     4,    -1,    78,   354,    -1,   249,     4,    -1,   171,
       4,    -1,     4,   354,   354,     4,     6,     4,    -1,   245,
     354,   354,   354,   354,   354,   354,     4,     6,     4,    -1,
      40,    -1,   193,   399,    -1,   111,    -1,     4,   354,   354,
       4,     6,     4,    -1,   245,   354,   354,   354,   354,   354,
     354,     4,     6,     4,    -1,   368,    -1,   176,   354,    -1,
      83,   402,    -1,    99,   403,    -1,   174,   404,    -1,   217,
     408,    -1,   252,   409,    -1,     5,     4,     4,   407,     4,
       4,   368,   354,   405,   406,   354,   354,     5,    -1,     5,
       4,     4,   407,     4,     4,   368,   354,   354,   406,   354,
     354,     5,    -1,     5,     4,     4,   407,     4,     4,   368,
     354,   405,   354,   354,     5,    -1,     5,     4,     4,   407,
       4,     4,   368,   354,   354,   354,   354,     5,    -1,   226,
      -1,    -1,    31,    -1,     5,    -1,     5,     5,     4,   356,
      -1,     5,     4,   356,     5,   364,   370,    -1,   186,    -1,
     346,    -1,   345,    -1,   301,    -1,   138,    -1,   175,    -1,
     271,    -1,    46,    -1,     5,    -1,     5,     5,     4,   356,
      -1,     5,   364,   370,    -1,    31,     5,   364,   370,    -1,
      -1,   354,   354,   354,   354,   364,   370,    -1,    59,   363,
     364,   370,   354,   354,   364,   372,    -1,   287,   411,    -1,
      40,   354,   354,    -1,   193,   354,   354,    -1,   111,   354,
     354,    -1,    -1,   354,   354,   364,   370,    -1,    40,   354,
     354,     4,    -1,   193,   354,   354,     4,    -1,   111,   354,
     354,     4,    -1,   366,   354,   354,    -1,   364,   370,   363,
      -1,   356,    -1,   309,   354,   354,    -1,    40,   193,   366,
     354,   354,    -1,   193,   366,   354,   354,    -1,    40,   193,
     364,   363,    -1,   193,   364,   363,    -1,    33,     4,    -1,
      -1,    32,    -1,   280,    -1,   144,   117,     5,    -1,    41,
      66,    -1,    44,   417,    -1,    46,   419,    -1,    65,   420,
      -1,    68,   424,    -1,    67,   423,    -1,    69,   426,    -1,
      77,   428,    -1,    79,   431,    -1,    84,   432,    -1,    86,
     433,    -1,    88,   435,    -1,    87,   434,    -1,    93,   436,
      -1,    95,    -1,   124,   440,    -1,   141,   446,    -1,   151,
       5,     5,     4,    -1,   152,    89,     5,     5,   354,   354,
     366,     4,   414,    -1,   155,   438,    -1,   159,   437,    -1,
     161,    16,    -1,   186,    -1,   182,   506,   500,    -1,   183,
     447,    -1,   196,    66,    -1,   213,    -1,   214,   448,    -1,
     221,   282,   366,   354,   354,     4,     4,     5,    -1,   245,
     449,    -1,   247,    -1,   271,   450,    -1,   286,    -1,   287,
     451,    -1,   295,    -1,   302,   366,   354,   354,    -1,   308,
      89,     5,     5,   354,   354,   366,     4,   414,    -1,   310,
     456,    -1,   347,    -1,   100,    -1,   118,    -1,   134,    -1,
      53,   268,    -1,    88,    -1,   122,    -1,    71,   418,    -1,
     173,    -1,    -1,   186,     5,    -1,   103,     5,    -1,   118,
      -1,    -1,   405,   406,    -1,   354,   406,    -1,   256,    -1,
     192,    -1,   186,   421,    -1,   301,   168,    -1,   346,   422,
      -1,   231,    -1,   192,    -1,   249,    -1,    78,    -1,   249,
      -1,   171,    -1,    -1,   283,    -1,   168,   425,    -1,     4,
      -1,     4,   366,   354,   354,    -1,     4,   354,   354,   368,
     354,    -1,    -1,   168,   427,    -1,   176,    -1,     4,   354,
     354,   368,   354,    -1,   364,   370,    -1,    65,   429,    -1,
      66,    -1,    91,    -1,   168,    -1,   207,   168,    -1,   185,
      -1,    69,   430,    -1,   271,    -1,   339,    -1,    -1,   192,
      -1,   256,    -1,    -1,   176,    -1,   354,   354,   364,   370,
     371,    -1,   366,   354,   354,   364,   370,   371,    -1,   364,
     370,   371,    -1,    59,   364,   370,   371,   364,   372,    -1,
     287,   364,   370,    -1,   366,    -1,   364,   370,   371,    -1,
     279,    -1,    33,    -1,   366,    -1,   364,   370,   371,    -1,
     364,   370,   363,   354,   354,     5,    -1,     4,   364,   370,
     363,   354,   354,     5,    -1,   366,   354,   354,     4,     4,
      -1,     5,    -1,    65,    -1,   366,   354,   354,     5,    -1,
       6,     4,     4,     4,     4,    -1,    88,    -1,   120,   195,
     439,    -1,    -1,     4,    -1,   354,   354,    -1,   198,    -1,
      59,   364,   370,   371,    -1,    81,    -1,   100,   443,    -1,
      45,    -1,   117,   441,    -1,   120,   195,   444,    -1,   146,
     442,    -1,   147,    -1,   208,   195,    -1,   268,    -1,   268,
     364,   370,   372,    -1,   269,   445,    -1,   339,    -1,     4,
      -1,   366,   354,   354,    -1,     4,    -1,   165,     5,    -1,
       4,   165,     5,    -1,   310,     4,    -1,    -1,     4,    -1,
     357,    -1,   357,   366,   354,   354,    -1,   357,     4,    -1,
      -1,     4,    -1,   131,   156,   364,   370,    -1,   131,   156,
       4,   364,   370,    -1,   291,   156,   354,   364,   370,    -1,
      -1,   212,    -1,   303,    -1,    66,    -1,   181,    -1,   239,
      -1,   281,    -1,   290,    -1,    81,    -1,   231,    -1,    61,
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
      -1,   284,   496,    -1,     5,   354,   354,    -1,   303,     5,
     354,   354,    -1,   354,   354,   303,     5,    -1,     5,   364,
     370,   363,    -1,     4,     4,    -1,    40,   354,   354,     4,
      -1,   193,   354,   354,     4,    -1,   111,    -1,   104,    -1,
     341,    -1,    63,    -1,   251,    -1,   250,    -1,   235,    -1,
     342,    -1,    60,   501,    -1,    66,    -1,   129,    -1,   114,
      -1,   143,   354,   354,    -1,   154,   354,   354,    -1,     4,
      20,    82,     5,     5,     5,   364,     4,    -1,     4,    20,
     151,     5,     5,     4,    -1,     4,    20,   222,     5,     5,
       5,     5,   364,   370,   379,    -1,     4,    20,   223,     5,
       5,   364,   370,   379,    -1,     4,    20,   237,     5,     5,
       5,   364,    -1,     4,    20,   278,   364,   370,    -1,   154,
      17,    -1,     4,    21,    -1,     4,    21,   366,    -1,     4,
      21,   364,   370,    -1,     4,    22,   238,   364,   372,    -1,
       4,    48,   121,    -1,     4,    49,   238,   364,   372,    -1,
       4,    48,   238,   364,   372,    -1,     4,    52,    21,    -1,
       4,    52,    21,   366,    -1,     4,    52,    21,   364,   370,
      -1,     4,    52,   238,   364,   372,    -1,     4,    59,   364,
     370,   371,    -1,     4,    62,   121,    -1,     4,    62,   238,
     364,   372,    -1,     4,    66,    -1,     4,    74,    27,    -1,
       4,    74,   166,    -1,     4,    74,   238,   364,   372,    -1,
       4,    74,   281,    -1,     4,    75,   138,    -1,     4,    82,
      21,    -1,     4,    82,    21,   366,    -1,     4,    82,    21,
     364,   370,    -1,     4,    82,   238,   364,   372,    -1,     4,
     109,   121,    -1,     4,   109,   238,   364,   372,    -1,     4,
     110,   238,   364,   372,    -1,     4,   113,    21,    -1,     4,
     113,    21,   366,    -1,     4,   113,    21,   364,   370,    -1,
       4,   113,   238,   364,   372,    -1,     4,   129,    -1,     4,
     149,    -1,     4,   171,    27,    -1,     4,   171,   167,   364,
     372,    -1,     4,   171,   224,   364,   370,   371,    -1,     4,
     180,   167,   354,   364,   372,    -1,     4,   226,   121,    -1,
       4,   224,   261,    -1,     4,   224,   268,    -1,     4,   232,
     224,   364,   370,   371,    -1,     4,   232,   167,   364,   372,
      -1,     4,   232,   289,   364,   372,    -1,     4,   233,    -1,
       4,   233,   512,    -1,     4,   248,   130,    -1,     4,   248,
     167,   364,   372,    -1,     4,   248,   224,   364,   370,   371,
      -1,     4,   248,   281,    -1,     4,   258,    -1,     4,   283,
      -1,     4,   283,     4,    -1,     4,   285,    -1,     4,   285,
     247,    -1,     4,   295,    -1,     4,   305,    27,    -1,     4,
     305,   167,   364,   372,    -1,     4,   305,   224,   364,   370,
     371,    -1,     4,   339,    -1,   149,   502,    -1,   149,   207,
      -1,   207,    -1,   226,   257,   354,   354,    -1,   257,   257,
     354,   354,    -1,   231,    -1,   233,   512,    -1,   258,   503,
      -1,   258,   207,    -1,   265,   504,    -1,     5,    66,    -1,
       5,   129,    -1,     5,   154,    -1,     5,   233,   512,    -1,
       5,   283,    -1,     5,   283,   207,    -1,   283,    17,    -1,
     283,    98,   195,    -1,   339,    -1,    30,    -1,   238,    -1,
     160,    -1,   212,    -1,    -1,   354,   354,    -1,    -1,   354,
     354,    -1,    -1,   285,    -1,    -1,    -1,   225,    -1,   240,
      -1,   301,    -1,    57,    -1,   499,   364,   370,   371,   356,
     514,   520,    -1,   258,   499,   364,   370,   371,   356,   514,
     520,    -1,   499,     5,    -1,   499,     5,   364,   370,    -1,
     499,     4,    -1,   499,     4,   364,   370,    -1,   124,     5,
       5,   497,     4,     5,    -1,   354,   354,    -1,   132,    -1,
      36,    -1,    40,   354,   354,    -1,   193,   354,   354,    -1,
     111,    -1,   291,   364,   370,   363,    -1,   510,   511,    -1,
     511,    -1,   512,   351,   356,    -1,    66,   351,     5,    -1,
      92,   351,     4,     4,    -1,   339,   351,     4,    -1,   129,
     351,     5,    -1,   285,   351,     5,    -1,   523,    -1,   524,
      -1,   202,    -1,   258,    -1,   149,    -1,    91,    -1,   126,
      -1,   105,    -1,   194,    -1,   247,    -1,    99,    -1,   157,
      -1,   274,    -1,   505,    -1,   505,   510,    -1,    -1,    -1,
     515,   518,    -1,    17,    -1,   211,   354,   354,    -1,   292,
      -1,   292,   354,   354,    -1,   356,    -1,   285,   356,    -1,
     518,   519,    -1,   519,    -1,   512,   351,   356,    -1,    -1,
      -1,   521,   522,    -1,   522,   523,    -1,   523,    -1,   283,
     351,     5,    -1,    55,   351,   493,     5,     5,    -1,    64,
      -1,    66,     5,    -1,   181,   367,    -1,   239,   354,   354,
      -1,   281,   364,    -1,   290,   354,    -1,   181,     4,    -1,
     350,    -1,   348,    -1,   342,    -1,   202,    -1,   354,   354,
     354,   354,    -1,   354,   354,    -1,   366,   354,   354,    -1,
     364,   370,   363,    -1,   291,   528,    -1,    39,   354,   354,
      -1,   193,   529,    -1,   231,   356,    -1,   354,   354,    -1,
     366,   354,   354,    -1,   364,   370,   363,    -1,    40,   354,
     354,    -1,   354,   354,    -1,   111,   354,   354,    -1,   356,
      -1,   310,   365,   370,    -1,     5,     4,     4,    -1,   300,
      -1,    70,   533,    -1,   168,     4,    -1,   244,     4,    -1,
     253,   354,    -1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,    -1,     4,     4,     4,     4,     4,     4,    -1,
      54,    -1,   140,    -1,   245,    -1,    90,    -1,   149,   535,
      -1,   258,   536,    -1,    40,   354,   354,    -1,   193,   354,
     354,    -1,   111,    -1,   263,   111,    -1,    40,   354,   354,
      -1,   193,   354,   354,    -1,   111,    -1,   263,   111,    -1,
     188,    -1,    13,    -1,   202,    -1,    34,    -1,   107,    -1,
      61,     5,    -1,   281,   364,    -1,   304,     4,     4,     4,
      -1,   354,    -1,   354,    97,    -1,   193,   541,    -1,   291,
     354,    -1,   291,   354,    97,    -1,    40,    -1,   354,    -1,
     111,    -1,    26,   543,    -1,   124,   545,    -1,   206,   555,
      -1,   112,   556,    -1,   219,     5,    -1,   120,     5,   380,
      -1,    61,     5,   380,    -1,   272,     4,   380,    -1,   245,
      87,   544,    -1,   120,     5,   380,    -1,    61,     5,   380,
      -1,   272,     4,   380,    -1,   546,    -1,   156,   546,    -1,
     282,   547,    -1,   269,   548,    -1,   117,    87,   549,    -1,
     191,   550,    -1,   245,   156,   552,    -1,   245,    87,   553,
      -1,   242,   554,    -1,   120,     5,    -1,    61,     5,    -1,
     272,     4,    -1,   120,     5,    -1,    61,     5,    -1,   272,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   272,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   272,     4,    -1,
     156,   551,    -1,   120,     5,     4,    -1,    61,     5,     4,
      -1,   272,     4,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   272,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     272,     4,    -1,   120,     5,    -1,    61,     5,    -1,   272,
       4,    -1,   120,     5,    -1,    61,     5,    -1,   272,     4,
      -1,   120,     5,   380,    -1,    61,     5,   380,    -1,   272,
       4,   380,    -1,   120,     5,     5,   380,    -1,   558,     4,
       4,   354,   354,   359,    -1,   558,     4,    -1,    99,    -1,
      50,    -1,   293,    -1,   136,    -1,   108,    -1,    -1,     4,
     354,   354,   354,   354,    -1,   205,    -1,   205,     4,   354,
     354,   354,   354,    -1,   124,   269,   560,    -1,     4,    -1,
       4,     4,    -1,   354,   364,   370,    -1,   354,   354,    -1,
     291,   354,   354,    -1,   365,   370,   371,    -1,    16,   565,
      -1,   243,     4,    -1,   241,   564,    -1,    23,   563,    -1,
       4,     4,    -1,     4,     5,    -1,   285,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   285,     4,     5,    -1,
       4,    -1,     4,   365,   370,    -1,     4,     6,   365,   370,
      -1,   230,    -1,   354,   354,    -1,   354,   354,    12,   354,
     354,    -1,   354,   354,    12,   366,   354,   354,    -1,   354,
     354,    12,   364,   370,   363,    -1,   291,   568,    -1,   123,
      -1,   123,   354,    -1,   354,   354,    -1,   354,   354,    12,
     354,   354,    -1,   354,   354,    12,   366,   354,   354,    -1,
     354,   354,    12,   364,   370,   363,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   456,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   511,   512,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   529,
     531,   532,   533,   534,   536,   537,   538,   539,   542,   543,
     544,   545,   546,   549,   550,   553,   554,   555,   558,   561,
     564,   567,   579,   586,   593,   601,   602,   603,   604,   605,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   626,   627,
     628,   629,   630,   631,   632,   633,   634,   635,   638,   639,
     642,   643,   644,   645,   646,   647,   650,   651,   652,   653,
     654,   655,   656,   657,   660,   661,   662,   663,   664,   667,
     668,   669,   670,   671,   672,   673,   674,   677,   678,   679,
     682,   683,   684,   685,   688,   689,   690,   693,   694,   695,
     698,   699,   700,   703,   704,   705,   706,   707,   708,   709,
     710,   713,   714,   717,   718,   719,   720,   721,   722,   725,
     726,   727,   730,   731,   732,   733,   734,   735,   738,   739,
     740,   741,   742,   743,   744,   745,   746,   750,   751,   754,
     755,   758,   759,   762,   763,   767,   768,   769,   770,   771,
     772,   773,   774,   777,   778,   781,   782,   783,   785,   787,
     788,   789,   791,   795,   796,   799,   800,   802,   805,   807,
     813,   814,   815,   818,   819,   820,   823,   824,   825,   826,
     827,   828,   829,   835,   836,   839,   840,   841,   842,   843,
     846,   847,   848,   851,   852,   857,   862,   869,   871,   873,
     874,   875,   878,   880,   883,   884,   887,   888,   889,   890,
     891,   894,   896,   898,   903,   908,   911,   912,   915,   916,
     917,   924,   925,   926,   927,   930,   931,   934,   935,   938,
     939,   942,   944,   948,   949,   952,   954,   955,   956,   957,
     960,   961,   963,   964,   965,   968,   970,   972,   973,   975,
     977,   979,   981,   985,   988,   989,   990,   993,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1010,  1011,  1012,  1013,  1014,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1035,  1037,  1038,  1041,  1042,  1043,
    1044,  1045,  1046,  1047,  1048,  1051,  1052,  1053,  1056,  1059,
    1060,  1062,  1064,  1065,  1066,  1067,  1068,  1069,  1076,  1077,
    1080,  1081,  1082,  1085,  1086,  1089,  1092,  1093,  1095,  1099,
    1100,  1101,  1104,  1108,  1110,  1111,  1112,  1113,  1114,  1115,
    1116,  1117,  1118,  1121,  1122,  1123,  1126,  1127,  1130,  1132,
    1140,  1142,  1144,  1148,  1149,  1151,  1154,  1157,  1158,  1162,
    1164,  1167,  1172,  1173,  1174,  1178,  1179,  1180,  1183,  1184,
    1185,  1188,  1189,  1191,  1192,  1193,  1194,  1195,  1196,  1197,
    1198,  1199,  1200,  1202,  1203,  1206,  1207,  1210,  1211,  1212,
    1213,  1216,  1217,  1220,  1222,  1225,  1229,  1230,  1231,  1233,
    1235,  1239,  1240,  1241,  1244,  1245,  1246,  1247,  1248,  1249,
    1252,  1255,  1256,  1257,  1260,  1261,  1262,  1263,  1264,  1265,
    1268,  1269,  1270,  1271,  1272,  1273,  1274,  1277,  1278,  1281,
    1282,  1285,  1286,  1289,  1290,  1293,  1294,  1295,  1298,  1299,
    1302,  1303,  1306,  1309,  1317,  1318,  1321,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,
    1335,  1336,  1337,  1340,  1343,  1344,  1347,  1348,  1349,  1350,
    1353,  1354,  1355,  1356,  1359,  1360,  1361,  1362,  1363,  1364,
    1367,  1368,  1369,  1370,  1371,  1372,  1374,  1375,  1380,  1381,
    1384,  1386,  1388,  1391,  1392,  1393,  1394,  1395,  1396,  1399,
    1401,  1403,  1405,  1406,  1408,  1410,  1412,  1414,  1416,  1419,
    1420,  1421,  1422,  1423,  1424,  1426,  1427,  1428,  1431,  1434,
    1436,  1438,  1440,  1442,  1444,  1446,  1448,  1451,  1453,  1455,
    1457,  1458,  1459,  1460,  1461,  1464,  1465,  1466,  1467,  1468,
    1469,  1470,  1472,  1474,  1475,  1476,  1479,  1480,  1481,  1482,
    1483,  1484,  1486,  1487,  1488,  1491,  1492,  1493,  1494,  1495,
    1498,  1501,  1504,  1507,  1510,  1513,  1516,  1519,  1522,  1527,
    1530,  1533,  1536,  1539,  1542,  1545,  1548,  1551,  1554,  1557,
    1562,  1565,  1568,  1571,  1574,  1577,  1580,  1583,  1586,  1591,
    1593,  1595,  1597,  1599,  1601,  1606,  1608,  1610,  1614,  1617,
    1620,  1623,  1626,  1629,  1632,  1635,  1638,  1641,  1644,  1649,
    1650,  1651,  1652,  1653,  1654,  1655,  1657,  1659,  1660,  1661,
    1664,  1665,  1666,  1667,  1668,  1669,  1671,  1672,  1673,  1676,
    1678,  1680,  1681,  1683,  1685,  1689,  1690,  1693,  1694,  1695,
    1698,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1714,  1722,
    1723,  1724,  1725,  1727,  1729,  1730,  1730,  1731,  1732,  1733,
    1734,  1735,  1736,  1738,  1739,  1741,  1744,  1747,  1748,  1749,
    1752,  1755,  1758,  1759,  1763,  1766,  1769,  1772,  1776,  1781,
    1786,  1788,  1789,  1791,  1792,  1794,  1796,  1798,  1800,  1801,
    1803,  1805,  1809,  1814,  1816,  1818,  1820,  1822,  1824,  1826,
    1828,  1830,  1832,  1834,  1837,  1838,  1840,  1842,  1843,  1845,
    1847,  1848,  1849,  1851,  1853,  1854,  1855,  1857,  1858,  1859,
    1862,  1866,  1869,  1872,  1876,  1881,  1887,  1888,  1889,  1891,
    1892,  1896,  1898,  1899,  1900,  1903,  1906,  1909,  1911,  1913,
    1914,  1919,  1922,  1923,  1924,  1927,  1931,  1932,  1934,  1935,
    1936,  1938,  1939,  1941,  1942,  1947,  1949,  1950,  1952,  1953,
    1954,  1955,  1956,  1957,  1959,  1961,  1963,  1964,  1966,  1967,
    1969,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,
    1980,  1981,  1983,  1985,  1986,  1987,  1988,  1990,  1991,  1992,
    1993,  1994,  1996,  1997,  1998,  1999,  2000,  2001,  2004,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,  2027,
    2028,  2029,  2030,  2031,  2032,  2040,  2047,  2056,  2065,  2072,
    2079,  2087,  2095,  2102,  2107,  2112,  2117,  2122,  2127,  2132,
    2138,  2148,  2158,  2168,  2175,  2185,  2195,  2204,  2216,  2229,
    2234,  2237,  2239,  2241,  2246,  2250,  2253,  2255,  2257,  2260,
    2261,  2262,  2263,  2264,  2265,  2266,  2269,  2270,  2271,  2272,
    2273,  2274,  2276,  2278,  2280,  2282,  2284,  2286,  2289,  2290,
    2291,  2292,  2294,  2297,  2298,  2300,  2302,  2303,  2304,  2306,
    2309,  2312,  2313,  2315,  2316,  2317,  2318,  2320,  2321,  2322,
    2323,  2324,  2326,  2328,  2329,  2331,  2334,  2335,  2336,  2338,
    2340,  2341,  2342,  2343,  2345,  2348,  2352,  2353,  2354,  2355,
    2358,  2361,  2363,  2364,  2365,  2366,  2368,  2371,  2372,  2374,
    2375,  2376,  2377,  2378,  2380,  2381,  2383,  2386,  2387,  2388,
    2389,  2390,  2392,  2394,  2395,  2396,  2397,  2399,  2401,  2402,
    2403,  2404,  2405,  2406,  2408,  2409,  2411,  2414,  2415,  2416,
    2417,  2420,  2421,  2424,  2425,  2428,  2429,  2432,  2445,  2446,
    2450,  2451,  2455,  2458,  2463,  2470,  2472,  2475,  2477,  2480,
    2484,  2485,  2486,  2487,  2488,  2489,  2490,  2494,  2495,  2498,
    2499,  2500,  2501,  2502,  2503,  2504,  2505,  2508,  2509,  2510,
    2511,  2512,  2513,  2514,  2515,  2516,  2517,  2518,  2521,  2522,
    2525,  2526,  2526,  2529,  2530,  2531,  2532,  2535,  2536,  2539,
    2540,  2543,  2547,  2548,  2548,  2551,  2552,  2555,  2558,  2562,
    2563,  2564,  2565,  2566,  2567,  2568,  2574,  2575,  2576,  2577,
    2580,  2582,  2583,  2588,  2590,  2591,  2592,  2593,  2596,  2597,
    2602,  2606,  2607,  2608,  2611,  2612,  2617,  2618,  2621,  2623,
    2624,  2625,  2630,  2632,  2638,  2639,  2640,  2641,  2644,  2645,
    2648,  2650,  2652,  2653,  2656,  2658,  2659,  2660,  2663,  2664,
    2667,  2668,  2669,  2672,  2673,  2674,  2677,  2678,  2679,  2680,
    2681,  2684,  2685,  2686,  2689,  2690,  2691,  2692,  2693,  2696,
    2698,  2700,  2702,  2705,  2707,  2709,  2712,  2713,  2714,  2715,
    2716,  2717,  2718,  2719,  2720,  2723,  2724,  2725,  2728,  2729,
    2730,  2733,  2734,  2735,  2738,  2739,  2740,  2743,  2744,  2745,
    2746,  2749,  2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,
    2764,  2765,  2766,  2769,  2771,  2773,  2777,  2781,  2783,  2788,
    2791,  2792,  2793,  2794,  2797,  2798,  2800,  2801,  2803,  2806,
    2807,  2808,  2812,  2813,  2816,  2818,  2819,  2820,  2821,  2824,
    2825,  2826,  2829,  2830,  2831,  2834,  2835,  2840,  2844,  2851,
    2852,  2854,  2859,  2861,  2864,  2865,  2866,  2867,  2869,  2874
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
     353,   353,   353,   353,   353,   354,   354,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   357,   357,
     357,   357,   357,   358,   358,   359,   359,   359,   360,   361,
     362,   363,   363,   363,   363,   364,   364,   364,   364,   364,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   366,   366,
     367,   367,   367,   367,   367,   367,   368,   368,   368,   368,
     368,   368,   368,   368,   369,   369,   369,   369,   369,   370,
     370,   370,   370,   370,   370,   370,   370,   371,   371,   371,
     372,   372,   372,   372,   373,   373,   373,   374,   374,   374,
     375,   375,   375,   376,   376,   376,   376,   376,   376,   376,
     376,   377,   377,   378,   378,   378,   378,   378,   378,   379,
     379,   379,   380,   380,   380,   380,   380,   380,   381,   381,
     381,   381,   381,   381,   381,   381,   381,   382,   382,   383,
     383,   384,   384,   385,   385,   386,   386,   386,   386,   386,
     386,   386,   386,   387,   387,   388,   388,   388,   388,   388,
     388,   388,   388,   389,   389,   390,   390,   390,   390,   390,
     391,   391,   391,   392,   392,   392,   393,   393,   393,   393,
     393,   393,   393,   394,   394,   395,   395,   395,   395,   395,
     396,   396,   396,   397,   397,   397,   397,   398,   398,   398,
     398,   398,   399,   399,   400,   400,   401,   401,   401,   401,
     401,   402,   402,   402,   402,   402,   403,   403,   404,   404,
     404,   405,   405,   405,   405,   406,   406,   407,   407,   408,
     408,   409,   409,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   411,   411,   411,   412,   412,   412,   412,   412,
     412,   412,   412,   413,   414,   414,   414,   415,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   417,   417,   417,
     417,   417,   417,   417,   417,   418,   418,   418,   419,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   421,   421,
     422,   422,   422,   423,   423,   424,   425,   425,   425,   426,
     426,   426,   427,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   428,   429,   429,   429,   430,   430,   431,   431,
     432,   432,   432,   433,   433,   433,   434,   435,   435,   436,
     436,   436,   437,   437,   437,   438,   438,   438,   439,   439,
     439,   440,   440,   440,   440,   440,   440,   440,   440,   440,
     440,   440,   440,   440,   440,   441,   441,   442,   442,   442,
     442,   443,   443,   444,   444,   444,   445,   445,   445,   445,
     445,   446,   446,   446,   447,   447,   447,   447,   447,   447,
     448,   449,   449,   449,   450,   450,   450,   450,   450,   450,
     451,   451,   451,   451,   451,   451,   451,   452,   452,   453,
     453,   454,   454,   455,   455,   456,   456,   456,   457,   457,
     458,   458,   459,   459,   460,   460,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   462,   463,   463,   464,   464,   464,   464,
     465,   465,   465,   465,   466,   466,   466,   466,   466,   466,
     467,   467,   467,   467,   467,   467,   467,   467,   468,   468,
     469,   469,   469,   470,   470,   470,   470,   470,   470,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   472,
     472,   472,   472,   472,   472,   472,   472,   472,   473,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   477,   477,   477,   477,   477,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   479,
     480,   480,   480,   480,   480,   480,   480,   480,   480,   481,
     481,   481,   481,   481,   481,   481,   481,   481,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   482,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   483,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   485,
     485,   485,   485,   485,   485,   486,   486,   487,   487,   487,
     488,   489,   489,   489,   489,   489,   489,   489,   490,   491,
     491,   491,   491,   491,   491,   492,   491,   491,   491,   491,
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
     491,   491,   491,   491,   491,   491,   491,   491,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   496,   496,   496,   496,   497,   498,   498,   498,   499,
     499,   499,   499,   499,   499,   499,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   501,   501,   501,
     501,   502,   502,   503,   503,   504,   504,   505,   506,   506,
     506,   506,   506,   507,   507,   508,   508,   508,   508,   508,
     509,   509,   509,   509,   509,   509,   509,   510,   510,   511,
     511,   511,   511,   511,   511,   511,   511,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   512,   513,   513,
     514,   515,   514,   516,   516,   516,   516,   517,   517,   518,
     518,   519,   520,   521,   520,   522,   522,   523,   524,   525,
     525,   525,   525,   525,   525,   525,   526,   526,   526,   526,
     527,   527,   527,   527,   527,   527,   527,   527,   528,   528,
     528,   529,   529,   529,   530,   530,   530,   530,   531,   531,
     531,   531,   532,   532,   533,   533,   533,   533,   534,   534,
     535,   535,   535,   535,   536,   536,   536,   536,   537,   537,
     538,   538,   538,   539,   539,   539,   540,   540,   540,   540,
     540,   541,   541,   541,   542,   542,   542,   542,   542,   543,
     543,   543,   543,   544,   544,   544,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   546,   546,   546,   547,   547,
     547,   548,   548,   548,   549,   549,   549,   550,   550,   550,
     550,   551,   551,   551,   552,   552,   552,   553,   553,   553,
     554,   554,   554,   555,   555,   555,   556,   557,   557,   557,
     558,   558,   558,   558,   559,   559,   559,   559,   559,   560,
     560,   560,   561,   561,   562,   562,   562,   562,   562,   563,
     563,   563,   564,   564,   564,   565,   565,   565,   566,   567,
     567,   567,   567,   567,   568,   568,   568,   568,   568,   568
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
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     2,     2,     2,     6,    10,     1,
       2,     1,     6,    10,     1,     2,     2,     2,     2,     2,
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     4,     4,     4,     4,     3,     3,     1,     3,     5,
       4,     4,     3,     2,     0,     1,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     4,     9,     2,     2,     2,
       1,     3,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     9,     2,     1,     1,     1,     1,
       2,     1,     1,     2,     1,     0,     2,     2,     1,     0,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     4,     5,     0,
       2,     1,     5,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     0,     1,     1,     0,     1,     5,     6,
       3,     6,     3,     1,     3,     1,     1,     1,     3,     6,
       7,     5,     1,     1,     4,     5,     1,     3,     0,     1,
       2,     1,     4,     1,     2,     1,     2,     3,     2,     1,
       2,     1,     4,     2,     1,     1,     3,     1,     2,     3,
       2,     0,     1,     1,     4,     2,     0,     1,     4,     5,
       5,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     0,     2,     2,     0,     1,
       2,     1,     6,     5,     1,     1,     1,     2,     2,     1,
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
       2,     1,     3,     4,     2,     0,     3,     1,     1,     2,
       2,     2,     2,     2,     4,     4,     4,     3,     4,     5,
       8,     6,     4,     9,     6,     7,    10,    11,    12,     9,
       5,     4,     6,     3,     5,     5,     6,     5,     4,     9,
      10,    11,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     7,     2,     4,     4,     4,     4,     5,
       4,     4,     5,     5,     3,     4,     4,     4,     4,     7,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       7,     4,     3,     3,     6,     7,     7,     4,     4,     4,
       9,     4,     3,     4,     7,     7,     2,     3,     3,     3,
       4,     2,     2,     4,    10,     3,     1,     3,     2,     2,
       2,     2,     3,     5,     4,     5,     2,     7,     3,     2,
       2,     3,     2,     2,     2,     3,     2,     3,     4,     3,
       3,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      11,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     8,     6,    10,     8,     7,     5,     2,     2,
       3,     4,     5,     3,     5,     5,     3,     4,     5,     5,
       5,     3,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     3,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     3,     6,
       5,     5,     2,     3,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     5,     6,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     7,     8,     2,     4,     2,     4,     6,
       2,     1,     1,     3,     3,     1,     4,     2,     1,     3,
       3,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     2,     1,     3,     1,     3,     1,     2,     2,
       1,     3,     0,     0,     2,     2,     1,     3,     5,     1,
       2,     2,     3,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     9,     6,     1,     1,     1,     1,     2,     2,
       3,     3,     1,     2,     3,     3,     1,     2,     1,     1,
       1,     1,     1,     2,     2,     4,     1,     2,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     2,     2,     2,
       3,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     4,     6,     2,     1,
       1,     1,     1,     1,     0,     5,     1,     6,     3,     1,
       2,     3,     2,     3,     3,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     3,     1,     3,     4,     1,     2,
       5,     6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   303,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1038,     0,
       0,     0,     0,     0,     0,     0,     0,  1038,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1224,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   240,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   269,   271,
       0,     0,    11,   141,   143,   136,   137,   138,   142,   139,
     140,   274,    12,     0,   286,     0,     0,     0,    13,     0,
       0,     0,     0,   310,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   317,   149,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   379,   393,
       0,   399,     0,     0,     0,     0,     0,     0,     0,   342,
       0,   471,     0,     0,     0,     0,     0,  1038,     0,   350,
       0,   354,     0,     0,     0,   358,     0,   360,     0,   362,
       0,     0,   505,   366,    19,     0,   511,    20,   516,     0,
     534,   519,   520,   521,   522,   536,   524,   525,   529,   526,
       0,   528,   530,     0,     0,    21,    23,     0,   551,     0,
       0,     0,   556,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   710,    27,     0,     0,     0,     0,     0,
       0,   711,    28,     0,    29,  1042,  1039,  1040,  1041,     0,
    1099,     0,   130,     0,     0,     0,    31,     0,  1109,  1108,
    1107,  1106,    33,     0,     0,     0,     0,     0,   149,     0,
      34,     0,  1127,     0,  1124,    35,     0,     0,     0,     0,
      38,     0,    37,    36,     0,     0,     0,     0,    41,     0,
       0,  1156,    42,     0,     0,     0,     0,     0,    43,  1220,
    1219,  1223,  1222,  1221,    45,     0,    46,     0,     0,     0,
       0,     0,   205,     0,     0,     0,    47,     0,     0,  1226,
      49,     0,     0,    51,     0,     0,     0,     0,   149,    52,
    1248,    53,     0,     0,    54,     1,     4,     5,   223,     0,
     215,     0,     0,   217,     0,   225,   218,   222,   233,   234,
     219,   235,     0,   221,   243,   244,   242,   241,     0,     0,
       0,   248,   256,   259,   258,   257,   255,   247,   252,   253,
     254,   246,     0,     0,     0,     0,     0,     0,   251,    10,
       0,     0,     0,   270,     0,   275,     0,   285,   276,   287,
     277,   288,   278,   299,   279,     0,     0,   280,     0,    88,
      89,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,     0,     0,     0,     0,     0,   151,
     156,   150,   152,   155,   154,   153,     0,     0,   323,    63,
      64,    65,    66,    67,    59,    60,    61,    68,    62,     0,
     328,     0,   375,   371,   367,   368,   372,   369,   374,   329,
     378,   330,   291,   383,   387,   382,   294,   293,   292,     0,
       0,   331,   394,   333,     0,   332,     0,   401,   334,   413,
     405,   416,   406,   407,   409,     0,   411,   412,   149,   335,
       0,     0,   336,     0,     0,   149,   337,   425,   149,   423,
     338,   426,   340,   149,   427,   339,     0,   149,     0,   341,
     445,     0,   443,   461,     0,     0,     0,   449,   441,     0,
     451,   466,   454,   343,   472,   473,   344,     0,     0,     0,
     436,     0,   347,   432,   433,     0,   348,   349,     0,   474,
     479,   475,   476,   477,   478,   352,   353,   480,   355,     0,
     481,   482,   483,   357,   489,   484,   485,   487,   359,   495,
     497,   499,   501,   494,   496,   503,   361,     0,     0,   508,
       0,   365,   149,   510,     0,   517,   535,   518,   537,   538,
     539,   523,   540,   542,   541,   543,   527,   531,   548,     0,
       0,     0,     0,   544,   532,     0,     0,   553,   552,     0,
       0,     0,     0,    25,     0,     0,   563,     0,   564,     0,
       0,     0,     0,     0,   565,     0,   709,     0,   566,     0,
     567,     0,     0,   568,     0,   714,   713,   712,     0,   717,
       0,     0,     0,   889,     0,     0,     0,   721,   725,   727,
     728,     0,     0,     0,     0,   826,     0,     0,     0,   862,
       0,     0,     0,     0,     0,     0,     0,   864,     0,     0,
       0,    30,  1100,  1105,   133,   134,   132,   135,   131,  1101,
       0,  1103,  1104,    32,     0,     0,     0,     0,  1116,  1117,
       0,   149,     0,  1114,  1111,     0,     0,     0,   149,  1134,
    1137,  1135,  1136,  1128,  1129,  1130,  1131,     0,     0,     0,
      40,  1153,  1154,     0,  1161,  1163,  1162,  1158,  1159,  1157,
       0,     0,     0,     0,  1164,     0,  1167,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1165,  1176,     0,
       0,     0,  1166,  1168,  1218,  1151,  1152,  1150,   203,     0,
     207,   199,     0,   209,   200,     0,   211,   201,  1149,  1148,
     202,   204,   206,     0,     0,   198,     0,     0,     0,     0,
    1232,  1245,  1235,     0,     0,  1238,     0,     0,  1237,  1236,
     157,  1254,     0,  1253,  1249,   224,   220,     0,   229,     0,
     226,     0,   245,   144,   147,   148,   146,   145,   260,   261,
     262,   250,   249,   264,   266,   265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   149,     0,   307,    94,    91,
      92,    93,   149,   309,   308,     0,     0,     0,     0,     0,
       0,     0,   322,     0,   318,   316,   315,   327,   370,     0,
       0,   373,   388,   389,   384,   385,   390,   392,   391,   386,
     295,   296,   381,   380,   396,   395,     0,   400,   414,   415,
     404,   417,   410,   408,   403,     0,     0,   149,   149,   157,
     157,   157,   149,     0,     0,   149,   462,   444,   455,     0,
     446,    78,   457,     0,     0,   448,   450,   149,   467,     0,
       0,   453,     0,     0,     0,   438,     0,     0,     0,     0,
     937,   939,   938,     0,  1031,     0,  1010,     0,  1013,     0,
       0,  1033,  1035,     0,  1026,   351,     0,   486,   488,   498,
     491,   500,   492,   502,   493,   504,   490,     0,     0,   509,
     506,   507,   157,   533,   545,   546,   547,   549,     0,   562,
     550,     0,     0,     0,     0,     0,     0,   170,   170,   164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
     167,   164,     0,     0,   164,     0,     0,     0,     0,     0,
     604,   628,     0,     0,     0,   600,     0,     0,     0,     0,
     170,   164,     0,     0,   705,     0,   715,   716,   149,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   774,     0,     0,     0,     0,     0,   797,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   816,     0,
       0,   821,   822,     0,     0,     0,   842,   844,   843,     0,
     846,     0,     0,   853,   855,   856,   890,     0,     0,     0,
       0,   719,   720,   931,   929,   934,   933,   932,   930,   935,
       0,   724,     0,   729,     0,   928,     0,   730,   731,   732,
     733,     0,     0,     0,     0,     0,   828,     0,     0,   829,
    1052,     0,  1055,  1051,     0,     0,     0,   830,   863,   831,
    1070,  1075,  1072,  1071,  1069,  1076,  1073,  1067,  1074,  1068,
    1077,     0,     0,   836,     0,     0,     0,  1083,     0,  1085,
     839,     0,  1087,   840,   860,     0,     0,     0,   865,   866,
     867,  1102,  1115,     0,     0,  1122,  1118,     0,     0,     0,
    1113,  1112,  1126,  1125,     0,     0,  1142,     0,     0,  1138,
       0,  1146,     0,     0,  1139,     0,  1160,   192,   192,     0,
     192,     0,  1186,     0,  1185,  1177,     0,     0,     0,     0,
    1181,     0,     0,     0,  1184,     0,     0,     0,     0,     0,
    1179,  1187,     0,     0,     0,  1178,   192,   192,   192,     0,
     208,   210,   212,     0,   213,     0,    56,     0,  1228,     0,
    1233,     0,   149,  1239,  1240,     0,  1242,  1243,     0,   158,
     159,  1234,  1255,  1256,     0,   216,     0,   230,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,     0,
       0,   301,   149,     0,     0,     0,     0,   149,     0,   321,
       0,   320,   377,   376,     0,     0,     0,   149,     0,   157,
     422,   420,   424,   428,     0,     0,     0,   157,     0,    82,
      81,   463,   447,     0,   458,   460,   160,     0,     0,   345,
       0,     0,    56,     0,   437,     0,     0,   949,     0,     0,
       0,     0,     0,     0,   963,     0,     0,     0,     0,     0,
       0,   980,   981,     0,     0,     0,     0,     0,   992,     0,
     998,   999,  1001,  1003,     0,  1007,  1018,  1019,  1020,     0,
    1022,  1027,  1029,  1030,  1028,   936,     0,  1009,     0,  1008,
     948,     0,     0,  1014,     0,  1016,     0,  1015,  1036,  1017,
    1024,     0,     0,   363,     0,     0,   560,   561,     0,   558,
     554,     0,   170,   170,   170,   171,   172,   572,   573,   166,
     165,     0,   170,   170,   170,     0,   578,   588,   167,   170,
     170,   170,   168,   169,   170,   170,     0,   170,   170,     0,
     167,     0,   601,     0,     0,     0,   627,     0,   626,     0,
       0,   603,     0,   602,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,   170,   170,   701,
       0,   170,   170,   706,     0,   183,   184,   185,   186,   187,
     188,     0,    86,    87,    85,   737,     0,     0,     0,     0,
       0,     0,   883,   881,   876,     0,   886,   870,   887,   873,
     885,   879,   868,   882,   871,   869,   888,   884,     0,     0,
       0,   753,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   784,     0,     0,     0,     0,
       0,   796,   798,     0,     0,   803,   802,     0,     0,   173,
       0,     0,     0,   149,     0,   812,     0,     0,     0,     0,
     817,   818,   819,     0,     0,     0,   825,   841,   845,   847,
     850,   849,     0,     0,     0,   854,   891,   893,     0,   892,
     722,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1037,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   726,     0,     0,     0,
       0,   827,     0,   149,     0,  1047,  1045,     0,     0,   149,
    1050,   832,     0,     0,     0,   838,     0,     0,  1088,   858,
     859,     0,   861,  1121,  1123,  1120,  1119,  1110,     0,     0,
       0,  1143,     0,     0,  1147,  1155,   194,   195,   196,   197,
     193,  1170,  1169,     0,     0,     0,  1172,  1171,   192,     0,
       0,     0,  1180,     0,     0,     0,     0,     0,  1197,     0,
    1211,  1210,  1212,     0,     0,     0,  1183,     0,     0,     0,
    1182,  1192,  1191,  1193,  1189,  1188,  1190,  1214,  1213,  1215,
       0,     0,     0,  1230,   149,     0,   149,  1246,  1241,  1244,
       0,     0,   149,     0,     0,     0,   227,     0,     0,     0,
       0,     0,     0,     0,     0,   298,   297,     0,     0,   289,
     300,   302,     0,   312,   314,   313,   311,   149,   319,     0,
       0,     0,   157,   149,     0,     0,     0,     0,   442,   456,
      80,    79,   465,     0,   459,   162,   163,   161,   452,     0,
     149,     0,     0,     0,   440,   434,     0,     0,     0,     0,
       0,     0,   149,   950,     0,   953,     0,     0,   956,     0,
     149,   961,     0,   964,   965,     0,   967,   968,   969,     0,
     973,     0,     0,   976,     0,   982,     0,     0,     0,   987,
     988,   986,     0,     0,     0,   993,   994,     0,     0,   997,
    1000,  1002,  1004,     0,     0,  1021,  1023,   940,  1032,   941,
       0,     0,  1034,  1025,     0,     0,   514,   515,     0,     0,
     559,     0,   569,   570,   571,   170,   575,   576,   577,     0,
       0,     0,   582,   583,   164,     0,     0,     0,   170,   589,
     590,   591,   592,   594,   167,   597,   598,     0,   170,     0,
       0,     0,   167,   167,   164,     0,     0,     0,     0,   625,
       0,   629,     0,     0,     0,     0,     0,   167,   167,   164,
       0,     0,   164,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,     0,     0,   167,
     167,   164,     0,     0,   164,     0,     0,     0,     0,   167,
     167,   164,     0,     0,     0,   167,   605,   606,   607,   608,
     610,     0,   613,   614,     0,   167,     0,     0,   699,   700,
     170,   703,   704,     0,   736,   149,   738,     0,     0,   742,
       0,     0,     0,     0,     0,   875,   872,   878,   877,   874,
     880,     0,   751,     0,     0,     0,     0,   149,   758,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   775,   776,   777,     0,   781,   778,   780,     0,
       0,   786,   785,   787,   788,     0,     0,     0,     0,     0,
       0,   149,   149,   801,   179,   175,   180,   174,   177,   176,
     178,   807,   808,   809,     0,     0,   811,   813,   149,   149,
       0,   820,   823,   149,   149,   848,   852,   894,   723,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1078,
     919,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   920,     0,     0,     0,     0,
       0,   734,   735,   149,   157,     0,   149,   149,  1053,  1054,
       0,     0,   834,     0,   149,  1084,  1086,   857,     0,  1140,
    1141,  1144,  1145,   192,   192,   192,  1216,  1195,  1194,  1196,
    1199,  1198,  1202,  1201,  1203,  1200,  1208,  1207,  1209,  1205,
    1204,  1206,     0,     0,  1225,  1231,     0,  1247,     0,   149,
       0,  1250,     0,     0,   231,     0,   228,     0,     0,     0,
     267,     0,     0,     0,     0,   149,     0,   304,   137,     0,
     397,     0,   418,   157,   160,     0,     0,   431,     0,   149,
     468,   149,     0,   435,     0,     0,     0,     0,     0,   149,
     951,   160,   160,   160,   149,   957,   160,   157,   160,   160,
     149,   970,   160,   160,   160,   149,   977,   160,   160,   149,
       0,   160,   149,   160,   160,   149,   160,   149,  1011,  1012,
       0,     0,   513,   555,     0,   574,   579,   580,   581,     0,
     585,   586,   587,   593,   170,   167,   599,   616,   617,   618,
     619,   620,     0,   622,   623,   167,     0,     0,     0,   167,
     167,   164,     0,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,     0,     0,     0,     0,   167,   167,   164,
       0,     0,     0,   167,   170,   170,   170,   170,   170,     0,
     170,   170,     0,   167,   167,   170,   170,   170,   170,   170,
       0,   170,   170,     0,   167,   167,   679,   680,   681,   682,
     684,     0,   687,   688,     0,   167,   690,   691,   692,   693,
     694,     0,   696,   697,   167,   609,   167,     0,   615,     0,
       0,   702,     0,   739,   160,     0,     0,   160,     0,     0,
       0,   750,   160,   754,   755,   160,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     779,   782,   783,     0,   160,     0,     0,     0,   799,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1079,  1058,     0,  1065,  1066,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   149,     0,     0,    83,     0,     0,   926,   927,
     157,     0,     0,     0,  1048,  1046,  1056,   833,   835,   157,
    1133,  1174,  1173,  1175,  1217,     0,  1227,  1257,     0,     0,
    1252,  1251,   232,     0,     0,     0,   272,     0,     0,     0,
     290,   160,   398,   402,   419,   421,     0,   429,   464,   469,
     470,     0,     0,     0,     0,     0,     0,   947,   952,   955,
     954,   958,   959,   960,   962,   966,   971,   972,   974,   975,
     978,   979,   983,   157,   160,   990,   157,   991,   995,   157,
    1005,   157,     0,     0,   512,     0,   584,   595,   170,   167,
     624,   170,   170,   170,   170,   170,     0,   170,   170,   167,
     170,   170,   170,   170,   170,     0,   170,   170,   167,   170,
     170,   170,   170,   170,     0,   170,   170,   167,   170,   639,
     640,   641,   642,   644,   167,   647,   648,     0,   170,   170,
     668,   669,   670,   671,   673,   167,   676,   677,     0,   170,
     683,   167,     0,   689,   167,   698,   611,   167,   707,   708,
     149,   741,     0,   160,   744,     0,   149,     0,   752,   756,
     149,     0,   763,   764,   765,   766,   770,   771,   767,   768,
     769,     0,     0,   160,   791,     0,   149,     0,     0,   804,
     160,     0,     0,   160,   160,     0,   851,     0,   181,   181,
       0,     0,   181,     0,   181,  1037,     0,     0,     0,     0,
       0,     0,     0,     0,  1057,     0,     0,   181,   181,     0,
       0,     0,     0,     0,     0,     0,     0,   921,     0,     0,
       0,  1037,    84,     0,   181,     0,  1081,   925,     0,     0,
       0,   214,  1259,  1258,     0,     0,   236,     0,     0,     0,
       0,   305,   430,   324,     0,   943,     0,   149,     0,   984,
     985,   989,   996,  1006,   356,   324,     0,   596,   621,   630,
     631,   632,   633,   634,   167,   636,   637,   170,   659,   660,
     661,   662,   663,   167,   665,   666,   170,   650,   651,   652,
     653,   654,   167,   656,   657,   170,   643,   170,   167,   649,
     672,   170,   167,   678,   685,   167,   695,   612,     0,   160,
     745,     0,     0,     0,     0,     0,   772,   773,   789,     0,
       0,     0,   800,   805,     0,   814,   815,   806,   160,     0,
     182,  1037,  1037,    83,     0,  1037,     0,  1037,   895,   149,
       0,  1060,     0,  1063,  1097,  1064,  1062,  1059,     0,  1037,
    1037,    83,     0,     0,  1037,  1037,     0,     0,  1037,   924,
     922,   923,   902,  1037,  1037,  1081,  1092,     0,  1049,   837,
       0,     0,     0,   238,     0,     0,     0,   325,   326,   346,
       0,     0,   189,   946,   364,     0,   170,   638,   170,   667,
     170,   658,   645,   170,   674,   170,   686,     0,   740,   160,
     160,     0,   160,     0,   160,   160,     0,   160,     0,  1037,
     908,   904,  1037,     0,   909,     0,   903,  1037,     0,  1061,
       0,   906,   905,  1037,     0,     0,   900,   898,  1037,   149,
     899,   901,   907,  1092,  1043,     0,     0,  1082,  1090,  1132,
       0,     0,     0,   268,   291,   294,   292,     0,     0,   942,
     149,   190,   191,   945,   557,   635,   664,   655,   646,   675,
     160,   743,   749,     0,   762,   759,   790,   795,     0,   810,
       0,   913,   897,    83,     0,   911,  1098,     0,   896,    83,
       0,   912,     0,  1044,  1094,  1096,     0,  1089,     0,     0,
     273,     0,     0,     0,     0,   189,     0,   746,   149,   760,
     792,   824,  1037,     0,     0,  1037,     0,   160,  1095,  1091,
     237,     0,     0,     0,     0,     0,   944,   718,   149,   747,
     761,   149,   793,   915,     0,  1037,   914,     0,     0,   239,
     284,     0,   283,     0,   748,   794,    83,   916,    83,  1037,
     282,   281,  1037,  1037,   910,   918,   917
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1394,   172,   152,  1241,  2471,  2472,   423,   424,
     425,   426,   153,   154,   155,   679,    91,   798,   446,  1191,
    1658,  1331,  1344,  1327,  1901,  2571,  1391,  2693,  1561,   336,
     751,   754,   757,   765,    63,   360,   366,   370,   373,    68,
     376,    75,   391,   387,   381,   398,    82,   403,    92,    98,
     408,   410,   412,   480,   852,  1627,   414,   417,   105,   433,
     156,   158,  2619,   174,   214,   469,   841,   471,   481,   844,
     849,   483,   485,   855,   488,   857,   499,   860,   862,   502,
     506,   510,   512,   515,   519,   546,   542,  1254,   533,   880,
     885,   877,  1242,   891,   536,   555,   558,   563,   568,   576,
     920,   922,   924,   926,   581,   930,   217,   583,  1728,   235,
     585,   587,   591,   596,   604,   244,  1320,   607,   252,   616,
    1336,   618,   624,   975,  1352,   970,  1769,  1358,  1356,  1771,
     971,  1361,  1363,   630,   633,   628,   254,   262,   264,   671,
    1052,  1418,  1041,  1516,  1945,  2263,  1057,  1050,   915,  1295,
    1299,  1307,  1309,  1929,   269,  1066,  1069,  1077,  2235,  2236,
    2237,  1930,  2606,  2607,  1100,  1103,  2677,  2678,  2674,  2675,
    2724,  2238,  2239,   276,   282,   290,   693,   688,   295,   300,
     302,   703,   710,  1129,  1134,   760,   748,   308,   312,   717,
     318,   724,  1566,   737,   738,  1165,  1160,  1572,  1150,  1578,
    1590,  1586,  1154,   742,   726,   324,   325,   340,  1178,   343,
     349,   775,   778,   772,   351,   354,   783
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2544
static const yytype_int16 yypact[] =
{
    4933,    82,   435,    23, -2544, -2544,  1027,  -148,   590,   850,
     847,   577,   419,   118,   142,  1232,    51,  5161,    86,  1306,
   -2544,   142,   723,   163,   917,   -18,   108,   228,   339,   429,
     394,  1016,  3228,   179,   895,   231,   414,   339, -2544,   -27,
     151,   915, -2544,     8,   509,  1100, -2544,    77, -2544,    29,
    3750,   286,    32,   525,   106,   877,   288,   572,   620,    69,
     644,    -4,   830, -2544, -2544, -2544,   934,   159, -2544,   145,
      39,   142,    -7,    91,   638, -2544,   661,   159, -2544, -2544,
      40,   159, -2544, -2544, -2544, -2544,   159, -2544, -2544, -2544,
   -2544, -2544, -2544,    45,   654,   710,   713,   122, -2544,   159,
    1388,   159,   159,  1008,   159, -2544, -2544, -2544,   527, -2544,
   -2544, -2544, -2544,  4482, -2544, -2544, -2544, -2544, -2544, -2544,
     159, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  1259, -2544,   159, -2544,   777, -2544, -2544,
     142,   142,   142,   142,   142,   142, -2544, -2544,   142,   142,
     142,   142, -2544,   693, -2544,   746,  1513,   699,   136,   548,
     668,   488,  3938,   604,  4533,  4447,   832,  4482,  3420, -2544,
      47,   -93,   869,   817,   639,   839,   903,   339,   718, -2544,
     863, -2544,   708,   673,   -13, -2544,   144, -2544,   472, -2544,
     487,   892,   218, -2544, -2544,  4720, -2544, -2544, -2544,   941,
     986, -2544, -2544, -2544, -2544,   517, -2544, -2544, -2544, -2544,
     558, -2544, -2544,  4720,  3994, -2544, -2544,   248, -2544,  1014,
    1026,   109, -2544,   159, -2544,  1031,    57,  1047,   289,   983,
    1062,    52, -2544, -2544, -2544,  1068,  1074,   142,   142,   159,
     159, -2544, -2544,  1085, -2544, -2544, -2544, -2544, -2544,  2918,
   -2544,  1087,    20,   159,  4720,   159, -2544,  1104, -2544, -2544,
   -2544, -2544, -2544,   159,  1040,   142,  3366,   159,  1259,   159,
   -2544,  1114, -2544,  3539, -2544, -2544,   478,  1116,  1126,   159,
   -2544,  1129, -2544, -2544,   -41,  1130,  4720,  1142, -2544,  1302,
     159,  1045, -2544,   406,  1037,   886,   401,  1154, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,  1158, -2544,   787,    -1,    10,
     156,    48, -2544,   159,   159,   194, -2544,   159,   902,  1175,
   -2544,   159,   159, -2544,  1183,    27,   110,  1185,  1259, -2544,
   -2544, -2544,   964,   159, -2544, -2544, -2544, -2544, -2544,   159,
   -2544,  1186,  1189, -2544,   159,  1260, -2544, -2544, -2544, -2544,
   -2544, -2544,   159, -2544, -2544,   159, -2544, -2544,   377,   377,
    1196, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,  1010,   159,   159,  1200,  1208,  1211, -2544, -2544,
     159,   159,   159, -2544,   159, -2544,  1224, -2544, -2544, -2544,
   -2544,   595, -2544,  1225, -2544,  4720,  1252, -2544,   159, -2544,
   -2544, -2544,   159,  1266,  1258,  1258,  4720,   159,   159,   159,
     159,   159,   159, -2544,   159,  4482,  1388,   159,   159, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544,  1388,   159, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1272,
   -2544,  1011,   365, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,   374, -2544, -2544, -2544,  1118, -2544,   430,   845,
     845, -2544, -2544, -2544,  1284, -2544,  1287, -2544, -2544,   -66,
   -2544,  1128, -2544, -2544, -2544,  1134, -2544, -2544,  1259, -2544,
     159,   159, -2544,  4720,  4720,  1259, -2544, -2544,  1259, -2544,
   -2544, -2544, -2544,  1259, -2544, -2544,  4720,  1259,   159, -2544,
   -2544,  4720, -2544,  1303,    80,  1115,     1, -2544, -2544,  1120,
    4720,    12, -2544, -2544, -2544, -2544, -2544,  1312,  1314,  1316,
   -2544,  1131, -2544, -2544, -2544,   159, -2544, -2544,   441, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,   487,
   -2544, -2544, -2544, -2544, -2544, -2544,  1140,  1156, -2544, -2544,
    1263,  1283,  1291, -2544, -2544,  1135, -2544,   159,  1357,  1144,
    3539, -2544,  1259, -2544,  1358, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  4720,
    4720,  4720,  4720, -2544, -2544,  1366,   142, -2544, -2544,  1376,
    1380,  1194,   159, -2544,    73,  1315, -2544,  1400, -2544,   583,
    1321,  3464,    36,  1405, -2544,  1407, -2544,  1410, -2544,   111,
   -2544,  1413,  1414, -2544,  1411, -2544, -2544, -2544,   159, -2544,
    3539,  4340,   855,   373,  1415,   728,  1325, -2544, -2544, -2544,
    1408,   951,  1422,  1423,    21,   159,   617,   914,    50,  4720,
     142,  1483,  1034,    42,    62,   169,    25, -2544,  1426,  1432,
    1435, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
     159, -2544, -2544, -2544,   159,   159,   159,   159, -2544, -2544,
     159,  1259,   159, -2544,   159,  1388,   159,  1436,  1259, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1447,   413,   454,
   -2544, -2544, -2544,  1448, -2544, -2544, -2544, -2544,  1330, -2544,
    1451,  1452,  1371,  1456, -2544,  1458, -2544,  1459,  1383,  1462,
     425,   759,   439,   436,   442,  1475,   499, -2544, -2544,  1476,
    1481,  1486, -2544, -2544,  1489, -2544, -2544, -2544, -2544,  1482,
   -2544, -2544,  1492, -2544, -2544,  1494, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,   159,   159, -2544,   159,   838,   159,   159,
   -2544,  1834, -2544,   854,  1496, -2544,   946,  1508, -2544, -2544,
     323,   159,   159, -2544,  1501, -2544, -2544,  1514,  1364,   159,
    1510,   879, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544,  1516,  1527,   159,   159,
     159,  1528,   142,  1531,  1536,  1259,  4720, -2544, -2544, -2544,
   -2544, -2544,  1259, -2544, -2544,   159,   159,   159,  4720,   159,
    1388,   159, -2544,   159, -2544, -2544, -2544, -2544, -2544,  1538,
    1539, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,   604, -2544,   159, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,  4720,   159,  1259,  1259,   323,
     323,   323,  1259,  1388,   159,  1259, -2544, -2544, -2544,   159,
   -2544,     4,  1387,  1540,  1537, -2544, -2544,  1259, -2544,  1392,
    1402, -2544,  1557,  1559,  1558,   991,   159,  4450,  1038,   752,
   -2544, -2544, -2544,   159,   210,   154, -2544,  1311, -2544,  1483,
    1313,   691,  1286,   104, -2544, -2544,   159, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544,   159,  1564, -2544,
   -2544, -2544,   323, -2544, -2544, -2544, -2544, -2544,  4571, -2544,
   -2544,  1568,  1570,   159,  1573,  1574,  1575,     3,     3,   -73,
    1569,  1579,  1580,  1581,  1319,  1320,  1586,  1587,  1588,    60,
      60,   -73,  1590,  1591,   -73,  1595,  1598,  5162,  1599,  1600,
   -2544, -2544,  1617,  1618,   600, -2544,  1592,  1620,  1621,  1622,
       3,   -73,  1624,  1629, -2544,  1634, -2544, -2544,  1259,  1002,
    1348,  1403,   -32,  1406,  1520,  2895,   -17,  1641,   344,  1511,
    1547,  1177,  1596,  1614,   355,  1417,  1551,  1652,  1449,    55,
     201,   328,   -36,  4720,  1483,  1623,   -21,  1418,  1453,  1653,
      63, -2544, -2544,   224,  1658,  1660, -2544, -2544, -2544,  1661,
    1457,   261,  1483,  1460, -2544, -2544, -2544,   142,  1663,  1668,
     159, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
       2, -2544,  2794, -2544,   159, -2544,   159, -2544, -2544, -2544,
   -2544,   159,   159,   159,   728,  4720, -2544,  1669,   993, -2544,
   -2544,   159, -2544, -2544,   159,  4720,   159, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,   142,   159, -2544,   159,   728,  1670, -2544,   159,   159,
   -2544,   142, -2544, -2544, -2544,   128,  1671,  1674, -2544, -2544,
   -2544, -2544, -2544,   159,   159, -2544, -2544,  1388,   159,   159,
   -2544, -2544, -2544, -2544,  1676,   159, -2544,   159,  1562, -2544,
     159, -2544,   159,  1571, -2544,  1677, -2544,  1039,  1039,   542,
    1039,  1678, -2544,   589, -2544, -2544,  1679,  1682,   737,  1684,
   -2544,  1685,  1686,  1688, -2544,   764,   768,  1689,  1691,  1693,
   -2544, -2544,  1694,  1695,  1697, -2544,  1039,  1039,  1039,   159,
   -2544, -2544, -2544,   159, -2544,   159,   466,  4720, -2544,   159,
   -2544,  3539,  1259, -2544, -2544,  1698, -2544, -2544,  1699, -2544,
   -2544, -2544, -2544,  1681,  3366, -2544,   159,  1690,   159,   159,
     159,  1082, -2544,  1683,  1701,   159,   159,   -29,  1702,   142,
     142, -2544,  1259,   159,  1704,  1706,  1707,  1259,  4720, -2544,
     159, -2544, -2544, -2544,   159,   159,   159,  1259,  4720,   323,
   -2544, -2544, -2544, -2544,  1388,   159,  1708,   323,   159,  1675,
    1696,   185, -2544,  1709, -2544, -2544,   813,  3603,   159, -2544,
     159,  1711,  1716,   159, -2544,  1714,  1138,  4482,  1488,   375,
    1491,    89,  4720,   433, -2544,   405,  1560,   117,   452,  1499,
     149, -2544, -2544,   742,  1553,   547,  1603,   -74,  1483,   926,
   -2544,  1723,  1493, -2544,   747, -2544, -2544, -2544, -2544,  1483,
    1532, -2544, -2544, -2544, -2544, -2544,   159, -2544,   159, -2544,
   -2544,   159,   159, -2544,   159, -2544,   159, -2544, -2544, -2544,
   -2544,  1543,   159, -2544,   159,    35, -2544, -2544,  1738,  1739,
   -2544,   159,     3,     3,     3, -2544, -2544, -2544, -2544, -2544,
   -2544,  1740,     3,     3,     3,   275, -2544, -2544,    60,     3,
       3,     3, -2544, -2544,     3,     3,  1741,     3,     3,  1742,
      60,   360, -2544,  1744,  1745,  1746, -2544,   835, -2544,   911,
     971, -2544,   397, -2544,  1477,  1747,  1748,  1749,    60,    60,
     -73,  1751,  1752,   -73,  1754,  1789,  1790,     3,     3, -2544,
    1793,     3,     3, -2544,  1785, -2544, -2544, -2544, -2544, -2544,
   -2544,   142, -2544, -2544, -2544,  4482,  1249,   142,   159,  1309,
    1428,   369, -2544, -2544, -2544,   851, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,  1794,   142,
     159, -2544,   142,  1795,   159,  4720,   142,  1468,  1563,  1565,
     166,   167,  1566,   178,  1495,  1498,  1802,  1803,  1804,  2895,
    1805,  1806,  1807,  1505,  1506,  1101,  1810,   142,   159,  1333,
    1552, -2544, -2544,   142,  4720, -2544, -2544,  4720,   159,    18,
    1811,   142,   159,  1259,   142, -2544,  1812,  4720,  4720,   159,
   -2544, -2544, -2544,   142,   142,  4720, -2544, -2544, -2544, -2544,
   -2544, -2544,  4720,   159,   142, -2544, -2544, -2544,   159, -2544,
   -2544,  1814,   159,  1597,   245,   159,  1601,   159,   263,   159,
   -2544,   159,  1602,  1604,   159,   159,   159,   159,   159,   159,
     159,   159,    16,   159,   159,  1605, -2544,   159,   159,   159,
     159, -2544,  4720,  1259,  1815,  4720,  4720,   159,   159,  1259,
   -2544,   159,   159,   159,  4720, -2544,   159,   159, -2544, -2544,
   -2544,  1818, -2544, -2544, -2544, -2544, -2544, -2544,  1820,   159,
     159, -2544,   159,   159, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  1822,  1826,  1828, -2544, -2544,  1039,  1829,
    1831,  1839, -2544,  1840,  1841,  1833,  1842,  1844, -2544,  1845,
   -2544, -2544, -2544,  1846,  1847,  1850, -2544,  1851,  1862,  1864,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
     159,   159,   159, -2544,  1259,   159,  1259, -2544, -2544, -2544,
    3366,   159,  1259,   159,   159,   159, -2544,   159,   159,  1865,
     159,  1867,  1792,   159,   159, -2544, -2544,  1868,  4720, -2544,
   -2544, -2544,   159, -2544, -2544, -2544, -2544,  1259, -2544,  1006,
     159,  1006,   323,  1259,  4720,   159,   159,  1869, -2544, -2544,
   -2544, -2544, -2544,   159, -2544, -2544, -2544, -2544, -2544,  4720,
    1259,  4720,   159,  1870, -2544, -2544,  1871,  1872,  1873,  1875,
    1876,  4720,  1259, -2544,  4720, -2544,  4720,  4720,  4482,  4720,
    1259, -2544,  4720, -2544, -2544,  4720, -2544, -2544,  4482,  4720,
   -2544,  4720,  4720,  4482,  4720, -2544,  4720,  4720,   159, -2544,
   -2544, -2544,  4720,  4720,  4720, -2544, -2544,  4720,  4720, -2544,
   -2544, -2544, -2544,  4720,  4720, -2544, -2544, -2544, -2544, -2544,
     159,   159, -2544, -2544,  1879,   159, -2544, -2544,  1880,  1882,
   -2544,   159, -2544, -2544, -2544,     3, -2544, -2544, -2544,  1883,
    1884,  1885, -2544, -2544,   -73,  1887,  1888,  1889,     3, -2544,
   -2544, -2544, -2544, -2544,    60, -2544, -2544,  1891,     3,  1892,
    1893,  1895,    60,    60,   -73,  1899,  1900,  1901,   515, -2544,
     743, -2544,   913,  1546,  1903,  1904,  1905,    60,    60,   -73,
    1907,  1908,   -73,  1909,  1576,  1910,  1921,  1922,    60,    60,
     -73,  1936,  1938,   -73,  1941,  1585,  1942,  1943,  1944,    60,
      60,   -73,  1946,  1947,   -73,  1948,  1949,  1950,  1954,    60,
      60,   -73,  1956,  1957,  1958,    60, -2544, -2544, -2544, -2544,
   -2544,  1960, -2544, -2544,  1961,    60,  1962,  1963, -2544, -2544,
       3, -2544, -2544,  1964, -2544,  1259, -2544,  4720,   159, -2544,
     159,  4720,   159,  1967,  1348, -2544, -2544, -2544, -2544, -2544,
   -2544,  1970, -2544,  4720,   142,  1971,  4720,  1259, -2544,  1972,
    1348,   159,   159,   159,   159,   159,   159,   159,   159,   159,
    1974,  1975, -2544, -2544, -2544,  1976, -2544, -2544, -2544,  1978,
    1979, -2544, -2544, -2544, -2544,   159,  4720,   159,  1980,  1348,
     142,  1259,  1259, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,   159,  1388, -2544, -2544,  1259,  1259,
     159, -2544, -2544,  1259,  1259, -2544, -2544, -2544, -2544,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,  1280,
   -2544,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,  1450,  1981,   159, -2544,   159,   159,   159,  1983,
    1984, -2544, -2544,  1259,   323,  1985,  1259,  1259, -2544, -2544,
    1388,   159, -2544,  1987,  1259, -2544, -2544, -2544,  1988, -2544,
   -2544, -2544, -2544,  1039,  1039,  1039, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,  1348,   159, -2544, -2544,   159, -2544,   159,  1259,
     159, -2544,  1388,   159, -2544,   159, -2544,  1821,  1989,  1993,
   -2544,  1992,   159,   159,  1999,  1259,  4720, -2544, -2544,   159,
   -2544,   159, -2544,   323,   813,   159,  2000, -2544,   159,  1259,
   -2544,  1259,   487, -2544,  2001,  2003,  2007,  2008,  2009,  1259,
   -2544,   813,   813,   813,  1259, -2544,   813,   323,   813,   813,
    1259, -2544,   813,   813,   813,  1259, -2544,   813,   813,  1259,
    4720,   813,  1259,   813,   813,  1259,   813,  1259, -2544, -2544,
    2011,   487,  2012, -2544,   159, -2544, -2544, -2544, -2544,  2017,
   -2544, -2544, -2544, -2544,     3,    60, -2544, -2544, -2544, -2544,
   -2544, -2544,  2020, -2544, -2544,    60,  2022,  2023,  2025,    60,
      60,   -73,  2027,  2028,  2029,  2030,  2031,  2032,    60,    60,
     -73,  2034,  2035,  2036,  2037,  2038,  2039,    60,    60,   -73,
    2041,  2042,  2043,    60,     3,     3,     3,     3,     3,  2045,
       3,     3,  2046,    60,    60,     3,     3,     3,     3,     3,
    2048,     3,     3,  2049,    60,    60, -2544, -2544, -2544, -2544,
   -2544,  2051, -2544, -2544,  2052,    60, -2544, -2544, -2544, -2544,
   -2544,  2053, -2544, -2544,    60, -2544,    60,  2055, -2544,  2057,
    2058, -2544,  3539, -2544,   813,  2059,  4720,   813,   159,  4720,
    2060, -2544,   813, -2544, -2544,   813, -2544,  4720,  2061,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
   -2544, -2544, -2544,  4720,   813,   159,  4720,  2062, -2544,  1388,
    1388,  4720,  1388,  1388,  4720,  4720,  1388,  1388,   159,   159,
     159,   159,   159,   159,  1348,   159,   159,   159,  1518,  1524,
    1542,  1545,  1554,  1611,  1633,  1280, -2544,  1717, -2544, -2544,
    1348,   159,   159,   159,   159,  1348,   159,   159,   159,   159,
     159,   159,  1259,   159,  1584,  1348,   159,   159, -2544, -2544,
     323,   142,  2063,  2065, -2544, -2544, -2544, -2544, -2544,   323,
    2066, -2544, -2544, -2544, -2544,   159, -2544, -2544,  1388,   159,
   -2544, -2544, -2544,  1237,  2068,  2069, -2544,   159,  2072,  1006,
   -2544,   813, -2544, -2544, -2544, -2544,  2073, -2544, -2544, -2544,
   -2544,  2076,  2077,  2079,  2081,  4720,  2082, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,   323,   813, -2544,   323, -2544, -2544,   323,
   -2544,   323,  2083,  2085, -2544,   159, -2544, -2544,     3,    60,
   -2544,     3,     3,     3,     3,     3,  2086,     3,     3,    60,
       3,     3,     3,     3,     3,  2087,     3,     3,    60,     3,
       3,     3,     3,     3,  2090,     3,     3,    60,     3, -2544,
   -2544, -2544, -2544, -2544,    60, -2544, -2544,  2091,     3,     3,
   -2544, -2544, -2544, -2544, -2544,    60, -2544, -2544,  2093,     3,
   -2544,    60,  2094, -2544,    60, -2544, -2544,    60, -2544, -2544,
    1259, -2544,  4720,   813, -2544,  2095,  1259,   159, -2544, -2544,
    1259,   159, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544,   159,   159,   813, -2544,  2096,  1259,   159,  1388, -2544,
     813,   159,  1388,   813,   813,  4720, -2544,   159,  2097,  2097,
     159,   159,  2097,  1348,  2097, -2544,  4720,  2895,  2099,  2098,
    2102,  2103,  2104,  2106, -2544,   142,  1348,  2097,  2097,   159,
     159,  1348,   159,   159,   159,   159,   159, -2544,  1388,   159,
    2107, -2544, -2544,   159,  2097,   142,     9, -2544,  2108,   142,
    2113, -2544, -2544, -2544,  2114,   159, -2544,  2115,  2117,  1998,
     159, -2544, -2544,    19,  4720, -2544,  2124,  1259,  4720, -2544,
   -2544, -2544, -2544, -2544, -2544,    19,   159, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,    60, -2544, -2544,     3, -2544, -2544,
   -2544, -2544, -2544,    60, -2544, -2544,     3, -2544, -2544, -2544,
   -2544, -2544,    60, -2544, -2544,     3, -2544,     3,    60, -2544,
   -2544,     3,    60, -2544, -2544,    60, -2544, -2544,   159,   813,
   -2544,  4720,  4720,   159,  4720,   159, -2544, -2544, -2544,  4720,
    4720,   159, -2544, -2544,  4720, -2544, -2544, -2544,   813,  2118,
   -2544, -2544, -2544,  1348,   159, -2544,  2128, -2544, -2544,  1259,
    2135, -2544,  2139, -2544, -2544, -2544, -2544, -2544,  2168, -2544,
   -2544,  1348,   159,  2169, -2544, -2544,   159,  4720, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544,     9,  1567,  1483, -2544, -2544,
    2170,  2171,  2172, -2544,  2071,  2174,   138, -2544, -2544, -2544,
    2175,  4720,    28, -2544, -2544,  2176,     3, -2544,     3, -2544,
       3, -2544, -2544,     3, -2544,     3, -2544,  3539, -2544,   813,
     813,   159,   813,  2177,   813,   813,   159,   813,   159, -2544,
   -2544, -2544, -2544,  2178, -2544,   159, -2544, -2544,  2179, -2544,
     159, -2544, -2544, -2544,  2181,   159, -2544, -2544, -2544,  1259,
   -2544, -2544, -2544,  1567, -2544,  1630,  1730,  1483, -2544, -2544,
    2192,  2193,  2195, -2544, -2544, -2544, -2544,   537,   537, -2544,
    1259, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
     813, -2544, -2544,  2196, -2544,  4482, -2544, -2544,  2199, -2544,
    1348, -2544, -2544,  1348,   159, -2544, -2544,   159, -2544,  1348,
     159, -2544,  4720, -2544,  1630, -2544,   142, -2544,  2200,  2203,
   -2544,   159,   159,   159,   159,    28,  2206,  4482,  1259, -2544,
    4482, -2544, -2544,   159,  2223, -2544,   159,   813, -2544, -2544,
   -2544,  2224,  2225,   159,  2226,   159, -2544, -2544,  1259, -2544,
   -2544,  1259, -2544, -2544,  2228, -2544, -2544,  2229,  2230, -2544,
   -2544,  2231, -2544,  2232, -2544, -2544,  1348, -2544,  1348, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2544, -2544,    -3, -2544,   632, -2544, -1508,  -978,  1529, -2544,
     841,  -421,  1786,   -49,    43, -2544, -1635,  1654,  1991,  -693,
     766,  -859,   765,     0, -2544,  -921, -2544,  -755, -1127, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544,  -576,  -462, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544,  -394, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -1437, -2544, -2544, -2544, -2544, -2544,  -634, -2544, -2544,
   -2544, -2544, -2544, -2544,   440, -2544, -2544, -2544, -2544,  -117,
    -651, -1602,  -422, -2544, -2544, -2544, -2544,  -473,  -445, -2544,
   -2544, -2543, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544,  1504, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544, -2544,
   -2544, -2544, -2544, -2544, -2544, -2544, -2544
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1230
static const yytype_int16 yytable[] =
{
      67,   348,  1875,   106,  2019,   882,  2021,  1490,   104, -1080,
    1091,  1562,  1395,  1567,   106,   832,   888,  1625,   853,    64,
      65,  1942,  1065,  1068,   673,   835,    64,    65,   368,   287,
    1104,   773,    64,    65,   305,    64,    65,   311,  1060,  1597,
    1598,  1599,    64,    65,   401,  1894,   342,  1095,   560,   353,
     406,  2617,   359,    64,    65,  1726,   365,   631,   319,   372,
    2691,   758,   614,   375,   377,   749,  1895,   386,  1472,  1896,
     393,   397,    64,    65,   400,   289,   752,  1342,   404,  1097,
    1897,   337,  1453,   405,   878,  1461,  1070,   944,   945,  1397,
    1071,  1329,   520,  1702,    64,    65,   418,   422,   427,   428,
     432,   434,  1346,  1898,  1419,  1349,   521,   320,   708,  1466,
    1678,   356,   106,   255,   776,   610,   321,   438,   111,   534,
    1899,  1310,  1380,   972,  1105,   978,   858,   415,   522,   111,
    1106,   389,  2725,  1539,   946,    76,   109,  1239,  1688,    64,
      65,    64,    65,   889,   322,  1540,   106,   523,    54,   378,
    1703,   157,   447,   416,    64,    65,   437,    64,    65,  1325,
     106,  1072,    64,    65,   524,   564,   883,   525,   390,   215,
    1693,  1300,   979,   106,   256,   479,  1231,  1232,  1233,   245,
     500,  2748,  1073,   106,   291,   216,  1326,  1863,  1865,  1652,
     859,  1330,   973,   526,   527,   173,   257,    64,    65,  1868,
     114,   338,  1311,  1467,    64,    65,  1398,  1462,   115,   116,
     535,   114,   253,    64,    65,  1704,   674,   709,  1343,   115,
     116,  1420,   755,   675,   676,   382,   501,   111,   509,   611,
     514,   518,  1061,   263,   579,   301,   759,  1455,   545,  1315,
     612,   109,  1626,  1074,   698,   528,   357,   258,    64,    65,
    1240,  1474,   605,   577,   306,   529,   638,   639,  1303,   677,
    1468,   111,   947,   948,    64,    65,    64,    65,   561,  1727,
     680,   407,   682,  1098,  1120,   111,   369,   307,   565,  1454,
     684,   687,   339,   690,   694,   402,   696,   392,   111,  1739,
    1740,   562, -1080,   119,   619,   117,   706,  1480,   111,  2618,
     980,   323,   615,   890,   119,  1491,   716,   718,  2692,   114,
    1473,   884,   774,  1062,    66,   530,   531,   115,   116,  1943,
     341,   632,   472,   352,  2684,  1107,  1096,  1679,   473,   692,
     761,   762,   764,  1456,   766,   949,  1741,   379,   769,   770,
     383,  1075,   149,   114,   309,   950,   951,   150,   151,   782,
     784,   115,   116,   149,  1099,  1689,   785,   114,   150,   151,
     364,   788,   790,  1464,   678,   115,   116,   474,  1900,   791,
     114,  1422,   792,   981,  1759,  1760,   952,  1036,   115,   116,
     114,  1484,   566,   982,   384,   385,   532,  1694,   115,   116,
     802,   803,   475,  1481,   380,   777,   265,   807,   808,   809,
     117,   810,   119,  1037,  1864,  1866,   620,   793,   259,  1219,
     567,  1806,  1807,   580,   983,   817,  1869,  1297,   763,   818,
    1189,  1761,  1844,   106,   823,   824,   825,   826,   827,   828,
    1522,   829,  1683,   422,   833,   834,   119,   476,   107,  2685,
     606,  1976,   310,   422,   836,   897,   898,    55,  1475,  1860,
     119,   149,  1235,  1125,  1101,   260,   150,   151,  1808,   108,
     277,  1534,   739,   119,  1742,  1743, -1229,   720,   839,  1921,
    1603,   794,  1889,   119,  1845,   109,  1447,   304,   831,   292,
     621,   477,   478,   477,  2686,   149,   727,  1926,    56,   293,
     150,   151,  1457,   270,  1130,   271,  1675,   865,   866,   149,
    1151,   899,   303,  1157,   150,   151,    57,   900,   846,   569,
    1423,  1821,   149,   326,  1824,   874,   350,   150,   151,   570,
     110,   740,   149,  1155,  1126,   355,   721,   150,   151,  2096,
    2097,   931,   699,  1038,   622,    58,  1644,  1744,   111,   795,
      64,    65,   896,   109,  1648,   729,   571,  1745,  1746,  1762,
    1763,   840,  1482,    59,  1681,   901,   361,    60,   623,  1152,
    1162,   588,  1158,  1846,   266,  1131,   842,   879,   700,    61,
     902,  1684,   969,  1690,   927,   112,  2098,   362,  1747,   267,
      64,    65,  1424,  1190,   903,  1039,  1809,  1810,   955,  1459,
     904,   988,  1156,  1448,    77,   905,  1460,   956,   957,   812,
     813,   847,   916,  1563,   589,  1364,  1127,    64,    65,   943,
     272,  1040,   113,  1676,  1365,  1366,  1847,    99,   701,  1163,
     114,   572,  1764,   843,   363,  1425,   796,  1705,   115,   116,
      78,   797,  1765,  1766,   117,   987,   100,   548,  1715,   118,
     268,    64,    65,  1685,   958,   539,   159,  1132,   906,   367,
    1569,   722,  1063,   236,  2490,  1076,   486,   573,   261,  1811,
     109,  1367,  1564,  1767,   487,   294,   399,   907,   273,  1812,
    1813,  1682,   908,   741,   909,   850,  1128,  1111,   723,   848,
    1043,  1112,  1113,  1114,  1115,   409,  1686,  1116,   101,  1118,
    1691,  1119,   422,  1121,    64,    65,  1545,   735,   910,   911,
    1814,    79,   117,   388,  2099,  2100,   912,   592,   590,  1570,
     274,  1153,   851,   119,  1159,   411,   394,  1133,   413,   275,
     435,  1044,  1182,   702,   913,   574,    62,   540,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2105,  2106,   541,
    1173,  1174,   149,  1175,  1177,  1179,  1180,   150,   151,  1695,
     102,  1164,   959,   960,  1712,   593,   575,  2101,  1192,  1193,
     914,   448,  1291,    80,   549,  1197,  1198,  2102,  2103,  1368,
    1369,  1043,   449,   450,   451,   452,   453,   454,  1575,   550,
     455,   456,   457,   458,  2107,  1204,  1205,  1206,  1699,   395,
     459,   237,   460,  1645,  1565,  1700,   594,   470,  2104,   117,
    1146,   745,  1214,  1215,  1216,  1583,  1218,   422,  1220,  1587,
    1221,   482,  1044,    64,    65,    81,   484,  1655,  1656,   238,
    1773,    64,  1176,  2578,   543,   961,  2271,  2272,  2273,  1774,
    1775,  1224,  1045,  1226,   595,   962,   963,  1576,  1183,  1184,
     964,  1571,  1370,  1228,   103,   511,  2180,  1046,  1047,  2602,
     422,  1236,  1371,  1372,   537,  1064,  1238,  1373,    83,  1147,
      64,    65,  2188,  1200,  1584,  2079,   965,   396,  1588,   636,
     637,  1201,  1253,  1255,   746,   109,  1776,  1225,  1305,   551,
    1296,  1298,  1301,  1374,   544,  2092,   538,   239,  1306,  1696,
    1657,  2207,  1292,  1312,  1713,  1148,  1784,   689,  1355,   547,
    2129,  1025,   240,  2132,  1313,  1785,  1786,  2114,  2115,   556,
      93,  2140,  2108,  2109,  2143,  1026,   358,    64,    65,   557,
    1321,   313,  2151,   246,  1027,  2154,    94,   727,  1328,  2022,
    1186,  1187,  2161,   371,  1028,   559,  1848,   552,  1048,  1049,
     750,   753,   756,  1045,  1293,   296,  1697,    64,    65,  2650,
    2651,  1714,  1787,  2654,  2116,  2656,  1795,  1043,  1046,  1047,
    1379,   578,   241,   850,  1029,  1796,  1797,  2661,  2662,   747,
    1294,  1054,  2666,  2667,    64,  1252,  2670,  1525,  1526,   553,
      84,  2671,  2672,   728,  1030,  2110,   729,  1458,   554,  1577,
    2580,    64,    65,   584,  2274,  2111,  2112,   586,  1044,   608,
     851,    95,    85,   242,  1777,  1778,    86,   314,  1483,   247,
     609,  1149,  1798,   243,    83,   613,  1585,  1489,  1067,   315,
    1589,   248,   730,    64,    65,  1849,  2113,  2711,   429,  1031,
    2712,  1517,   617,  1518,   117,  2715,  1706,   374,  1519,  1520,
    1521,  2718,  1055,   297,    96,  2652,  2721,   629,  1527,  1048,
    1049,  1528,   634,  1530,  1092,   249,   625,   731,    87,   635,
     685,  1556,  1557,  2663,  1385,    64,    65,   781,  1032,  1532,
     640,  1533,   672,  1707,   626,  1536,  1537,  1779,  1850,    97,
    1788,  1789,  2117,  2118,  1286,  1881,  1882,  1780,  1781,   683,
    1543,  1544,  1782,  1033,   422,  1546,  1547,    88,   697,   430,
     704,   316,  1549,   250,  1550,    89,    90,  1552,   732,  1553,
     705,   733,  1606,   707,   317,   711,   251,   327,  1783,   298,
    2763,  1619,   719,  2766,  1056,  1093,   713,   328,   299,  1045,
    1708,   686,  1034,  1386,  1035,   734,    84,   725,   735,   743,
    1799,  1800,   744,  2777,  1046,  1047,  1600,  1287,   736,   627,
    1601,   767,  1602,  1790,   329,  2119,  1605,  2784,    85,   768,
    2785,  2786,  2018,  1791,  1792,  2120,  2121,   771,  1793,   779,
     786,  1611,  1288,  1614,   787,  1616,  1617,  1618,  1620,  1428,
     800,   431,  1623,  1624,   804,  2742,   801,  1709,  1558,  1559,
    1632,  2745,   805,    69,  1794,   806,  2122,  1638,   278,    70,
    1666,  1639,  1640,  1641,  1387,  1388,  1429,  1094,   811,  1430,
     814,   422,  1646,  1801,    87,  1649,  1560,  1613,   939,  1389,
      64,    65,  2346,  1802,  1803,  1661,  2443,  1662,  1804,   330,
    1664,  2355,    64,    65,  1837,  1048,  1049,   816,    71,  1431,
    2364,  2261,  2456,    64,    65,   820,   821,  2461,  2782,   421,
    2783,  1289,   789,    88,  1805,   419,   160,   837,   161,   838,
    1390,    89,    90,    72,  1653,   331,   845,  1432,   854,  1667,
    1433,   856,  1079,  1717,   439,  1718,  2484,  1102,  1719,  1720,
    1673,  1721,   863,  1722,   861,    64,    65,   876,   162,  1724,
     881,  1725,    64,    65,  1841,   886,   163,   892,  1731,   893,
     894,  1290,  1732,  1733,  1734,   218,   895,   917,    73,   919,
    2294,   332,  1736,  1737,  1738,  2228,    64,    65,  1886,  1749,
    1750,  1751,   714,   918,  1752,  1753,  2229,  1755,  1756,   921,
     219,    64,    65,   333,  2313,  1392,  1393,   923,   279,   925,
    1668,  1669,   928,   933,   280,   440,   281,    64,    65,   929,
     938,  1080,  2230,    74,   164,  1670,  1196,  1828,  1829,  1081,
     940,  1831,  1832,   220,   941,  1082,   441,   442,   334,   942,
     221,    64,    65,  1838,   443,  1840,  1842,   419,   420,   421,
     222,   223,   953,  1434,   335,   954,  1083,   224,   966,  2231,
     974,   976,   444,   715,   977,   986,  1671,  1853,   984,   985,
    1042,  1856,   445,   165,  1051,  1053,  1058,  1136,  1059,  1084,
     225,    64,    65,  1843,  1435,  1392,  1393,  1085,  1836,  1110,
    1122,   166,   167,  1108,  1208,  1885,  1887,   226,   168,  1109,
     169,  1124,  1135,    64,    65,  1893,  1137,  1138,  1139,  1904,
    1140,   227,   228,  1141,  1142,  2576,  1910,  1144,   229,   107,
    1143,    64,    65,  1859,  1086,  1392,  1393,   170,  2588,  1161,
    1915,  1166,  1087,  2593,  2212,  1917,  1167,  1170,   230,  1919,
    1168,  1922,  1923,  1169,  1925,  1927,  1928,  1171,  1931,  1172,
    1185,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1944,
    1946,  1947,  1188,  1194,  1949,  1950,  1951,  1952,  2572,  1195,
    1202,  2575,  1199,  2577,  1958,  1959,   231,  1088,  1961,  1962,
    1963,  1203,  1207,  1965,  1966,  1209,  2589,  2590,  1089,  2266,
    1210,  1245,   171,  1222,  1223,  1244,  1969,  1970,  1247,  1971,
    1972,   110,  1243,  2604,  1090,    64,    65,  1888,  1248,  1392,
    1393,  1249,  1251,  2232,  1250,  2233,   461,  2475,  1302,  1314,
    1304,  1308,  1318,  1332,  1080,  1319,  2479,   232,  1322,  1323,
    1324,  2280,  1081,  1333,   462,  1334,  1335,   233,  1082,  1337,
    1338,  1339,  1340,  1341,  1347,  1348,  1375,  1992,  1993,  1994,
    1350,   463,  1996,  1351,  1357,  1359,   112,  1998,  2001,  1083,
    2003,  2004,  2005,   464,  2006,  2007,   234,  2009,  1436,  2234,
    2012,  2013,  1360,  1362,  1376,  1400,  1377,  1378,  1381,  2016,
    2499,   465,  1084,  2501,  1382,   466,  2502,  2020,  2503,  1383,
    1085,  1396,  2025,  2026,  1399,  1437,  1421,   467,  1438,  1426,
    2028,  1439,  1427,  2000,  1446,  1449,  1450,  1451,  1471,  2032,
    1452,  1469,  1476,  1465,  1470,  1477,  1478,  1487,  1479,  1486,
     118,  1485,  1488,  1551,  1524,  1535,  1541,  1086,  1440,  1542,
    1548,  1555,  1554,  1568,  1573,  1087,   468,  1574,  1579,  1621,
    1580,  1581,  1582,  1610,  1591,  2060,  1592,  1593,  1687,  1594,
    1595,  1596,  1615,  1608,  1609,  1622,  1441,  1628,  1633,  1442,
    1634,  1635,  1647,  1650,  1654,  1663,  -439,  2068,  2069,  1665,
    1698,  2045,  2071,  1531,  1701,  1345,  1674,  1710,  2074,  1677,
    1088,  2051,  2741,  1538,  1651,  2075,  2056,  1692,  1723,  1716,
    1711,  1089,  1729,  1730,  1735,  1754,  1757,  1815,  2083,  1768,
    1770,  1772,  1816,  1817,  1818,  1822,  1823,  1090,  2086,  1825,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,  2428,  2429,
    1833,  2431,  2432,  1826,  1827,  2435,  2436,  1830,  2011,  1851,
    1855,  1861,  1870,  1862,  1867,  1871,  1872,  1873,  1874,  1876,
    1877,  1878,  1879,  1880,  1883,  1902,  2123,  1907,   288,  1918,
    1955,  1920,  1443,  1967,  1968,  1924,  1932,  1973,  1933,  1948,
    2171,  1974,  1975,  2283,  1977,  2175,  1978,  2176,  1982,  2178,
    1181,  1629,  1630,  1979,  1980,  1981,  2134,  1983,  1984,  1985,
   -1093,  1986,  1987,  1444,  1988,  2145,  1989,  2482,  2189,  2190,
    2191,  2192,  2193,  2194,  2195,  2196,  2197,  1990,  1991,  2447,
    2008,  2010,  2014,  2027,  2033,  2448,  2034,  2035,  2036,  1445,
    2037,  2038,  2203,  2070,  2205,  2072,  2073,  2470,  2076,  2077,
    2078,  2080,  2081,  2449,  2082,  2085,  2450,  2087,  2088,   436,
    2089,  2211,   422,  2093,  2094,  2451,  2095,  2215,  2124,  2125,
    2126,  2130,  2131,  2232,  2133,  2135,  2218,  2219,  2220,  2221,
    2222,  2223,  2224,  2225,  2226,  2227,  2136,  2137,  2240,  2241,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2249,  2250,  2251,
    2141,  2254,  2142,  2255,  2256,  2257,  2144,  2146,  2147,  2148,
    2152,  2153,   819,  2155,  2156,  2157,  2676,   422,  2267,  2158,
    2162,  2163,  2452,  2164,  2166,  2167,  2169,  2170,   498,  2172,
     505,   508,  2179,   513,   517,  2181,  2184,  2187,  2198,  2199,
    2756,  2200,  2201,  2202,  2453,  2206,  2253,  2258,  2259,  2262,
    2275,  2268,  2270,  2276,  2284,  2277,  2286,  2279,  2285,   422,
    2281,   582,  2282,  2289,  2615,  2297,  2302,  2562,  2303,  2287,
    2288,  2565,  2304,  2305,  2306,  2332,  2292,  2334,  2293,   597,
     603,  2336,  2296,  1834,  2339,  2298,  2676,  2341,  2342,  1839,
    2343,  2347,  2348,   799,  2349,  2350,  2351,  2352,  2356,  2357,
    2688,  2358,  2359,  2360,  2361,  2365,  2366,  2599,  2367,  2374,
    2377,  1852,  2385,  2388,  1854,  2391,  2392,  2394,  1858,  2397,
     681,  2398,  2399,  2402,  2407,  2411,  2427,  2477,  2455,  2478,
    2480,  2335,   691,  2486,  2487,  2301,  2489,  2682,  2492,  1884,
    2493,  2726,  2494,  2495,  2337,  1890,  2496,  2498,  2504,  2505,
    2514,  2523,   712,  1903,  2532,  2538,  1906,  2542,  2545,  2551,
    2559,  2570,  2582,  1748,  2581,  1911,  1912,  2583,  2584,  2585,
    2586,  2624,  2601,  2608,  2333,  1758,  1916,  2610,  2454,  2611,
    2613,  2614,  2649,  2400,  2369,  2370,  2371,  2372,  2373,  2621,
    2375,  2376,  2655,  1819,  1820,  2380,  2381,  2382,  2383,  2384,
    2658,  2386,  2387,  2659,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2660,  2665,  2679,  2405,  2680,  2681,  2683,  2689,
    2694,  2705,  2713,  2673,  2716,  2719,  2412,  2413,  2414,  2415,
    2416,  2417,  2418,  2419,  2420,  2421,  2422,  2728,  2729,  2730,
    2737,   815,  2425,  2740,  2727,  2750,   422,   422,  2751,   422,
     422,  2757,   822,   422,   422,  2437,  2438,  2439,  2440,  2441,
    2442,   830,  2444,  2445,  2446,  2732,  2734,  2765,  2723,  2769,
    2770,  2772,  2776,  2778,  1145,  2779,  2780,  2781,  2457,  2458,
    2459,  2460,     0,  2462,  2463,  2464,  2465,  2466,  2467,     0,
    2469,     0,     0,  2473,  2474,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2481,     0,     0,   422,  2483,     0,     0,   695,
    2485,     0,     0,     0,  2488,     0,     0,     0,     0,   867,
     868,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   872,     0,     0,     0,     0,   875,     0,     0,
       0,     0,     0,     0,     0,     0,   887,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2506,     0,     0,     0,     0,     0,  2507,   780,
       0,  2509,  2510,  2511,  2512,  2513,     0,  2515,  2516,     0,
    2518,  2519,  2520,  2521,  2522,     0,  2524,  2525,     0,  2527,
    2528,  2529,  2530,  2531,     0,  2533,  2534,     0,  2536,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2539,  2540,
       0,     0,     0,     0,     0,   934,   935,   936,   937,  2543,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2553,     0,     0,     0,  2555,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2556,  2557,
       0,     0,     0,     0,  2561,   422,     0,     0,  2564,   422,
       0,     0,     0,     0,  2569,     0,     0,  2573,  2574,     0,
       0,     0,     0,     0,     0,  1078,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2591,  2592,     0,  2594,
    2595,  2596,  2597,  2598,     0,   422,  2600,     0,     0,     0,
    2603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2612,     0,     0,     0,  2183,  2616,     0,   864,
       0,     0,     0,     0,     0,     0,   869,     0,     0,   870,
       0,     0,     0,  2625,   871,     0,     0,     0,   873,     0,
       0,     0,     0,     0,     0,     0,     0,  2627,     0,  2084,
       0,     0,  2208,     0,     0,     0,  2629,  2090,  2091,     0,
       0,     0,     0,     0,     0,  2631,     0,  2632,     0,     0,
       0,  2634,  2127,  2128,     0,  2637,     0,     0,     0,     0,
    2641,     0,  2643,  2138,  2139,     0,     0,     0,  2646,     0,
       0,     0,     0,     0,  2149,  2150,     0,     0,     0,     0,
       0,  2653,     0,   932,  2159,  2160,     0,     0,     0,     0,
    2165,     0,     0,     0,     0,     0,     0,     0,  2700,  2664,
    2168,     0,     0,  2668,     0,     0,     0,     0,     0,     0,
       0,     0,  1212,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2687,  1217,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2695,     0,  2696,     0,
    2697,     0,     0,  2698,     0,  2699,     0,     0,  2703,     0,
       0,     0,     0,  2708,     0,  2710,     0,     0,     0,     0,
       0,  1227,  2714,     0,     0,     0,     0,  2717,     0,     0,
       0,     0,  2720,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1117,     0,  2731,  2733,     0,     0,     0,  1123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2743,     0,     0,  2744,     0,     0,  2746,     0,     0,
       0,     0,     0,     0,  1317,     0,     0,     0,  2752,  2753,
    2754,  2755,     0,     0,     0,     0,     0,     0,     0,     0,
    2764,     0,     0,  2767,     0,     0,     0,     0,  2739,     0,
    2771,     0,  2773,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2759,     0,     0,  2762,     0,     0,     0,     0,     0,     0,
    2295,     0,     0,     0,     0,     0,     0,     0,     0,  1463,
       0,     0,     0,     0,     0,     0,  1211,  2308,  2309,  2310,
       0,     0,  2312,  1213,  2314,  2315,  1492,     0,  2317,  2318,
    2319,  1493,     0,  2321,  2322,     0,     0,  2325,     0,  2327,
    2328,     0,  2330,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1494,  1495,     0,  1496,  1497,     0,     0,     0,
    2338,  1523,     0,     0,     0,     0,  1498,     0,  1229,  1230,
    2340,  1529,     0,  1234,  2344,  2345,  1237,     0,  1499,  1500,
       0,     0,     0,  2353,  2354,     0,  1501,     0,  1246,  1502,
       0,     0,  2362,  2363,     0,     0,     0,     0,  2368,     0,
       0,     0,     0,  2476,     0,     0,  1503,     0,  2378,  2379,
       0,     0,     0,  1504,  1505,     0,     0,  1506,     0,  2389,
    2390,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2393,     0,   641,   642,     0,     0,     0,     0,     0,  2395,
       0,  2396,     0,     0,     0,  1401,     0,     0,     0,     0,
    2401,     0,     0,  2404,     0,     0,     0,     0,  2408,     0,
       0,  2409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1402,     0,  1604,     0,  1507,     0,     0,     0,     0,
    2424,     0,     0,     0,     0,     0,     0,     0,   643,  1384,
    1612,     0,     0,     0,   644,     0,     0,     0,     0,     0,
       0,   645,     0,   646,  1403,     0,     0,     0,   647,     0,
    1404,   648,     0,     0,  1637,     0,  1405,   649,     0,     0,
       0,     0,     0,     0,  1643,     0,     0,   650,     0,     0,
    1508,     0,     0,   651,  1406,     0,  1509,     0,     0,     0,
       0,     0,   652,  1660,     0,     0,     0,     0,     0,     0,
       0,     0,  1510,  1672,  1407,     0,     0,   653,  1680,     0,
       0,  1511,     0,     0,     0,     0,     0,  2491,     0,  1408,
       0,     0,     0,     0,     0,     0,     0,   654,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1512,  1513,
       0,     0,   655,     0,     0,     0,     0,  2587,     0,  1409,
    2500,   656,   657,     0,     0,     0,     0,     0,     0,  1514,
       0,     0,     0,     0,  2508,     0,     0,  2605,     0,     0,
       0,  2609,   658,     0,  2517,     0,     0,     0,     0,     0,
       0,     0,     0,  2526,     0,     0,     0,     0,  1410,     0,
       0,     0,  2535,     0,     0,   659,     0,     0,     0,  2537,
       0,     0,  1411,     0,  1515,     0,     0,     0,     0,   660,
    2541,   661,     0,  1412,     0,     0,  2544,     0,     0,  2546,
       0,     0,  2547,     0,     0,   662,     0,     0,     0,  2550,
     663,     0,     0,  1607,     0,     0,   664,     0,     0,     0,
    1413,  1835,     0,   665,     0,     0,     0,     0,     0,  2558,
       0,     0,  1414,     0,  1415,  1416,  2563,     0,     0,  2566,
    2567,   666,     0,  1631,     0,     0,     0,     0,  1636,     0,
       0,  1857,     0,     0,   667,   668,     0,   669,  1642,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    65,     0,  1417,     0,     0,     0,     0,     0,
    1891,     0,     0,  1892,     0,     0,     0,   107,     0,     0,
       0,     0,     0,  1908,  1909,     0,     0,   670,     0,     0,
       0,  1913,     0,     0,     0,     0,     0,   283,  1914,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2626,
       0,     0,     0,     0,   109,     0,     0,     0,  2628,     0,
       0,     0,     0,     0,     0,     0,     0,  2630,     0,     0,
       0,     0,     0,  2633,     0,     0,     0,  2635,  1953,     0,
    2636,  1956,  1957,     0,     0,  2638,     0,     0,     0,     0,
    1964,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,  2648,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1999,     0,     0,     0,
       0,     0,     0,     0,     0,  2701,  2702,     0,  2704,     0,
    2706,  2707,     0,  2709,  2015,     0,     0,     0,     0,     0,
       0,   284,   109,     0,   516,     0,     0,     0,     0,     0,
    2024,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,   117,     0,  2029,     0,  2031,   118,     0,
       0,     0,     0,     0,  1905,     0,     0,  2039,     0,   285,
    2041,     0,  2042,  2043,  2044,  2046,  2736,   110,  2048,     0,
       0,  2049,     0,     0,  2050,  2052,   109,  2053,  2054,  2055,
    2057,     0,  2058,  2059,     0,     0,     0,     0,  2061,  2062,
    2063,     0,     0,  2064,  2065,     0,     0,     0,     0,  2066,
    2067,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2768,  1954,     0,     0,     0,     0,   286,
    1960,   110,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,  1995,     0,  1997,     0,     0,
       0,     0,     0,  2002,     0,     0,     0,  1659,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     967,     0,   107,  2174,     0,   968,     0,  2177,  2017,     0,
       0,     0,     0,     0,  2023,   117,     0,     0,     0,  2182,
     118,     0,  2185,     0,     0,     0,     0,     0,     0,     0,
       0,  2030,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2040,     0,     0,     0,     0,     0,     0,
       0,  2047,  2204,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2252,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,   112,
       0,     0,     0,     0,     0,     0,   344,     0,     0,     0,
       0,     0,     0,   345,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  2291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,     0,  2173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2324,     0,  2186,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,  2209,  2210,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2213,
    2214,     0,     0,     0,  2216,  2217,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,  2260,     0,     0,  2264,  2265,     0,
       0,     0,     0,     0,     0,  2269,     0,   107,     0,     0,
       0,     0,  2403,     0,     0,  2406,     0,     0,     0,     0,
       0,     0,     0,  2410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2423,
    2278,   346,  2426,   347,     0,     0,     0,  2430,     0,     0,
    2433,  2434,     0,   489,   490,     0,  2290,   491,     0,     0,
       0,     0,   598,   107,     0,     0,     0,     0,     0,     0,
    2299,     0,  2300,     0,     0,     0,     0,     0,     0,   492,
    2307,     0,     0,     0,     0,  2311,     0,     0,     0,   110,
       0,  2316,     0,     0,     0,     0,  2320,     0,     0,     0,
    2323,     0,   599,  2326,     0,     0,  2329,     0,  2331,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,  2497,     0,     0,   112,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   493,     0,     0,   600,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   494,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   495,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,   601,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   496,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,  2568,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2579,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2468,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   497,     0,     0,
    2620,   602,     0,     0,  2623,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,  2639,  2640,     0,
    2642,     0,     0,     0,     0,  2644,  2645,     0,     0,     0,
    2647,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     989,   990,   991,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2669,     0,     0,     0,     0,   992,   993,
       0,  2548,   994,     0,     0,   995,     0,  2552,     0,     0,
       0,  2554,   996,     0,     0,     0,   997,  2690,     0,     0,
       0,     0,     0,     0,   998,   999,     0,  2560,     0,     0,
       0,     0,  1000,  1001,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1002,
       0,     0,     0,     0,     0,  1003,     0,     0,     0,  1004,
    1005,     0,     0,  1006,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,  1007,
    1256,  1257,  1258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2622,  1008,
       0,  2738,     0,     0,     0,     0,     0,     0,  1259,  1260,
       0,   107,  1261,   109,     0,     0,     0,     0,  2747,  1262,
       0,  1009,  1263,     0,     0,     0,  1264,     0,     0,     0,
       0,     0,     0,  2758,  1265,  1266,  2761,     0,     0,     0,
       0,     0,  1267,     0,  1010,     0,     0,     0,   109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,   107,     0,     0,     0,     0,     0,     0,  1268,
    1269,     0,     0,  1270,  1011,     0,  1012,     0,     0,     0,
    2657,     0,  1013,  1014,     0,     0,     0,     0,     0,  1271,
       0,     0,     0,   110,     0,     0,     0,  1015,  1016,     0,
     107,     0,   503,     0,     0,     0,     0,  1017,  1018,  1272,
       0,     0,     0,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1273,     0,  1019,     0,  1020,     0,  1316,     0,     0,
    1274,     0,     0,     0,   110,     0,     0,  1021,   112,  1022,
       0,     0,     0,     0,     0,  1023,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2722,     0,   117,     0,     0,     0,     0,   118,     0,     0,
       0,     0,   110,     0,  1275,     0,  1276,     0,     0,  1024,
       0,  2735,  1277,  1278,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   117,  1279,     0,
       0,     0,   118,     0,     0,     0,     0,     0,  1280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,   112,     0,  2760,
       0,     0,     0,  1281,     0,  1282,     0,     0,     0,   107,
       0,     0,     0,     0,     0,  1283,     0,     0,     0,  2774,
       0,     0,  2775,   118,     0,  1284,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,  1285,
       0,   118,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     504,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     1,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    14,    15,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,    18,     0,     0,    19,     0,     0,
       0,    20,    21,     0,     0,     0,     0,     0,    22,     0,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    35,     0,     0,     0,     0,     0,     0,    36,
       0,     0,     0,    37,     0,     0,    38,     0,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,     0,   175,     0,    43,   176,     0,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,   178,     0,   179,   180,
     181,    46,     0,    47,     0,     0,     0,     0,   182,    48,
     183,     0,    49,    50,     0,   184,     0,   185,   186,   187,
       0,     0,     0,     0,   188,     0,   189,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,   190,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   191,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   192,   193,     0,     0,   194,     0,     0,     0,
     195,     0,   196,  1353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   198,     0,     0,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,   202,     0,     0,     0,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   204,     0,   205,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   207,   208,     0,
       0,     0,     0,     0,     0,     0,   209,     0,     0,     0,
       0,     0,     0,   210,     0,     0,     0,     0,     0,   211,
       0,   212,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1354,     0,     0,     0,     0,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       3,    50,  1439,     4,  1639,     4,  1641,     5,    11,     0,
     661,  1138,   990,  1140,     4,   436,     4,    46,   480,     3,
       4,     5,   656,   657,     4,   446,     3,     4,    32,    32,
       5,     4,     3,     4,    61,     3,     4,    40,    17,  1166,
    1167,  1168,     3,     4,     4,    27,    49,     5,    61,    52,
       5,    32,    55,     3,     4,    20,    59,     5,    50,    62,
      32,    13,     5,    66,    67,    66,    48,    70,     5,    51,
      73,    74,     3,     4,    77,    32,    66,    17,    81,    17,
      62,     4,    27,    86,     4,   121,    36,    14,    15,   121,
      40,   164,    45,   167,     3,     4,    99,   100,   101,   102,
     103,   104,   961,    85,   121,   964,    59,    99,   149,   130,
      21,     5,     4,     5,     4,     6,   108,   120,   119,   212,
     102,    17,   981,    87,    99,    14,   192,     5,    81,   119,
     105,   138,  2675,     5,    61,   283,    56,   133,    21,     3,
       4,     3,     4,   131,   136,    17,     4,   100,    66,     4,
     224,    33,   155,    31,     3,     4,   113,     3,     4,   156,
       4,   111,     3,     4,   117,    21,   165,   120,   175,    83,
      21,    17,    61,     4,    66,   178,   869,   870,   871,    16,
     183,  2724,   132,     4,     5,    99,   183,    21,    21,     4,
     256,   264,   156,   146,   147,   144,    88,     3,     4,    21,
     201,   124,    98,   224,     3,     4,   238,   243,   209,   210,
     303,   201,   230,     3,     4,   289,   196,   258,   158,   209,
     210,   238,    66,   203,   204,   186,   183,   119,   185,   120,
     187,   188,   211,     5,    16,     4,   188,    36,   195,   932,
     243,    56,   271,   193,   293,   198,   140,   139,     3,     4,
     246,    27,     4,   210,   281,   208,   259,   260,   909,   239,
     281,   119,   189,   190,     3,     4,     3,     4,   281,   234,
     273,   226,   275,   211,   695,   119,   280,   304,   134,   224,
     283,   284,   205,   286,   287,   245,   289,   196,   119,    14,
      15,   304,   283,   294,     5,   215,   299,    36,   119,   280,
     189,   293,   245,   291,   294,   303,   309,   310,   280,   201,
     247,   310,   285,   292,   291,   268,   269,   209,   210,   303,
     291,   269,   186,   291,   186,   300,   284,   238,   192,   286,
     333,   334,   335,   132,   337,   262,    61,   192,   341,   342,
     301,   291,   343,   201,   193,   272,   273,   348,   349,   352,
     353,   209,   210,   343,   292,   238,   359,   201,   348,   349,
     291,   364,   365,  1014,   344,   209,   210,   231,   350,   372,
     201,    27,   375,   262,    14,    15,   303,     4,   209,   210,
     201,  1032,   238,   272,   345,   346,   339,   238,   209,   210,
     393,   394,   256,   132,   249,   285,    57,   400,   401,   402,
     215,   404,   294,    30,   238,   238,   117,    30,   300,   830,
     266,    14,    15,   195,   303,   418,   238,   207,   224,   422,
      97,    61,  1400,     4,   427,   428,   429,   430,   431,   432,
    1064,   434,    27,   436,   437,   438,   294,   301,    19,   301,
     192,  1568,   291,   446,   447,     4,     5,    12,   224,  1427,
     294,   343,   873,    40,   285,   347,   348,   349,    61,    40,
      66,  1095,    61,   294,   189,   190,     0,    61,   103,   224,
       4,    94,  1450,   294,   105,    56,   121,    37,   435,   300,
     191,   345,   346,   345,   346,   343,    61,   224,    53,   310,
     348,   349,   291,    64,    40,    66,   121,   500,   501,   343,
      61,    60,    88,    61,   348,   349,    71,    66,    78,    37,
     166,  1370,   343,     4,  1373,   518,   230,   348,   349,    47,
     101,   120,   343,    87,   111,     0,   120,   348,   349,    14,
      15,   580,    54,   160,   245,   100,  1229,   262,   119,   162,
       3,     4,   545,    56,  1237,   120,    74,   272,   273,   189,
     190,   186,   291,   118,   121,   114,   268,   122,   269,   120,
      61,    44,   120,   194,   225,   111,   192,   524,    90,   134,
     129,   166,   621,   121,   577,   156,    61,     5,   303,   240,
       3,     4,   238,   260,   143,   212,   189,   190,     5,   261,
     149,   640,   156,   238,     4,   154,   268,    14,    15,     4,
       5,   171,   559,    61,    87,     5,   193,     3,     4,   612,
     181,   238,   193,   238,    14,    15,   247,    40,   140,   120,
     201,   149,   262,   249,     4,   281,   249,  1278,   209,   210,
      40,   254,   272,   273,   215,   638,    59,   197,  1289,   220,
     301,     3,     4,   238,    61,     6,    14,   193,   207,     5,
      61,   245,   655,    21,  2289,   658,   168,   185,    26,   262,
      56,    61,   120,   303,   176,    33,     5,   226,   239,   272,
     273,   238,   231,   272,   233,   138,   263,   680,   272,   249,
      63,   684,   685,   686,   687,    31,   281,   690,   111,   692,
     238,   694,   695,   696,     3,     4,  1117,   272,   257,   258,
     303,   111,   215,    71,   189,   190,   265,   149,   191,   120,
     281,   272,   175,   294,   272,     5,    78,   263,     5,   290,
     193,   104,   771,   245,   283,   253,   291,    88,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    14,    15,   120,
     763,   764,   343,   766,   767,   768,   769,   348,   349,    27,
     193,   272,   189,   190,    27,   217,   304,   262,   781,   782,
     339,     4,    30,   193,    66,   788,   789,   272,   273,   189,
     190,    63,   160,   161,   162,   163,   164,   165,    61,    81,
     168,   169,   170,   171,    61,   808,   809,   810,   261,   171,
     117,    88,    66,  1234,   272,   268,   258,   118,   303,   215,
      61,    34,   825,   826,   827,    61,   829,   830,   831,    61,
     833,   283,   104,     3,     4,   245,   168,    24,    25,   116,
       5,     3,     4,  2445,     5,   262,  1973,  1974,  1975,    14,
      15,   854,   235,   856,   296,   272,   273,   120,     4,     5,
     277,   272,   262,   866,   287,    33,  1844,   250,   251,  2471,
     873,   874,   272,   273,     5,   258,   879,   277,    28,   120,
       3,     4,  1860,     4,   120,  1744,   303,   249,   120,   257,
     258,    12,   895,   896,   107,    56,    61,   854,   207,   181,
     903,   904,   905,   303,    65,  1764,    89,   184,   911,   167,
      97,  1889,   160,   916,   167,   156,     5,   285,   967,    16,
    1779,    66,   199,  1782,   927,    14,    15,    14,    15,    66,
      83,  1790,   189,   190,  1793,    80,    59,     3,     4,   231,
     943,    26,  1801,    26,    89,  1804,    99,    61,   948,  1642,
       4,     5,  1811,   123,    99,   282,   105,   239,   341,   342,
     328,   329,   330,   235,   212,    70,   224,     3,     4,  2571,
    2572,   224,    61,  2575,    61,  2577,     5,    63,   250,   251,
     980,    89,   259,   138,   129,    14,    15,  2589,  2590,   202,
     238,    40,  2594,  2595,     3,     4,  2598,     4,     5,   281,
     150,  2603,  2604,   117,   149,   262,   120,  1010,   290,   272,
    2447,     3,     4,    72,  1992,   272,   273,    31,   104,     5,
     175,   174,   172,   300,   189,   190,   176,   112,  1031,   112,
       4,   272,    61,   310,    28,     4,   272,  1040,   124,   124,
     272,   124,   156,     3,     4,   194,   303,  2649,    40,   194,
    2652,  1054,     5,  1056,   215,  2657,   130,   123,  1061,  1062,
    1063,  2663,   111,   168,   217,  2573,  2668,     5,  1071,   341,
     342,  1074,     4,  1076,    40,   158,    93,   191,   228,     5,
      40,    42,    43,  2591,    82,     3,     4,   123,   233,  1092,
       5,  1094,     5,   167,   111,  1098,  1099,   262,   247,   252,
     189,   190,   189,   190,    66,     4,     5,   272,   273,     5,
    1113,  1114,   277,   258,  1117,  1118,  1119,   267,     4,   111,
       4,   206,  1125,   206,  1127,   275,   276,  1130,   242,  1132,
       4,   245,  1181,     4,   219,     5,   219,    37,   303,   244,
    2742,    59,    97,  2745,   193,   111,     4,    47,   253,   235,
     224,   111,   297,   151,   299,   269,   150,   120,   272,     5,
     189,   190,     4,  2765,   250,   251,  1169,   129,   282,   186,
    1173,   269,  1175,   262,    74,   262,  1179,  2779,   172,     4,
    2782,  2783,   176,   272,   273,   272,   273,     4,   277,     4,
       4,  1194,   154,  1196,     5,  1198,  1199,  1200,  1201,    22,
       4,   193,  1205,  1206,     4,  2713,   196,   281,   169,   170,
    1213,  2719,     4,   186,   303,     4,   303,  1220,   202,   192,
      82,  1224,  1225,  1226,   222,   223,    49,   193,     4,    52,
       5,  1234,  1235,   262,   228,  1238,   197,  1194,   606,   237,
       3,     4,  2101,   272,   273,  1248,  2224,  1250,   277,   149,
    1253,  2110,     3,     4,     5,   341,   342,     5,   231,    82,
    2119,  1954,  2240,     3,     4,   424,   425,  2245,  2776,    11,
    2778,   233,    12,   267,   303,     9,    44,     5,    46,   268,
     278,   275,   276,   256,  1241,   185,   168,   110,     4,   151,
     113,     4,   660,  1296,    35,  1298,    59,   665,  1301,  1302,
    1257,  1304,   168,  1306,   176,     3,     4,     4,    76,  1312,
     195,  1314,     3,     4,     5,   195,    84,     5,  1321,     5,
       4,   283,  1322,  1323,  1324,    19,   195,   187,   301,    66,
    2023,   231,  1332,  1333,  1334,    55,     3,     4,     5,  1339,
    1340,  1341,    40,   187,  1344,  1345,    66,  1347,  1348,    66,
      44,     3,     4,   253,  2047,     7,     8,    66,   342,   224,
     222,   223,     5,     5,   348,   106,   350,     3,     4,   225,
       4,    91,    92,   346,   142,   237,    12,  1377,  1378,    99,
       4,  1381,  1382,    77,     4,   105,   127,   128,   288,   195,
      84,     3,     4,  1396,   135,  1398,  1399,     9,    10,    11,
      94,    95,    87,   226,   304,     5,   126,   101,    87,   129,
       5,     4,   153,   111,     4,     4,   278,  1420,     5,     5,
       5,  1424,   163,   191,    99,    17,     4,    97,     5,   149,
     124,     3,     4,     5,   257,     7,     8,   157,  1395,     4,
       4,   209,   210,    17,   812,  1448,  1449,   141,   216,    17,
     218,     4,     4,     3,     4,  1458,     5,     5,    87,  1462,
       4,   155,   156,     5,     5,  2443,  1469,     5,   162,    19,
      87,     3,     4,     5,   194,     7,     8,   245,  2456,     4,
    1483,     5,   202,  2461,  1905,  1488,     5,     5,   182,  1492,
       4,  1494,  1495,     4,  1497,  1498,  1499,     5,  1501,     5,
       4,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,  1514,     4,    12,  1517,  1518,  1519,  1520,  2439,     5,
       4,  2442,    12,  2444,  1527,  1528,   220,   247,  1531,  1532,
    1533,     4,     4,  1536,  1537,     4,  2457,  2458,   258,  1960,
       4,     4,   310,     5,     5,     5,  1549,  1550,   156,  1552,
    1553,   101,   165,  2474,   274,     3,     4,     5,   156,     7,
       8,     4,     4,   283,     5,   285,    53,  2260,   257,     5,
     257,   285,     4,     4,    91,     5,  2269,   271,     5,     5,
       5,  2002,    99,     4,    71,     5,     5,   281,   105,   270,
     270,     5,     5,     5,     4,     4,     4,  1600,  1601,  1602,
       5,    88,  1605,     5,     5,     5,   156,  1610,  1611,   126,
    1613,  1614,  1615,   100,  1617,  1618,   310,  1620,    22,   339,
    1623,  1624,     5,     5,     4,   105,     5,     5,     4,  1632,
    2323,   118,   149,  2326,     5,   122,  2329,  1640,  2331,     5,
     157,   238,  1645,  1646,   238,    49,     5,   134,    52,   138,
    1653,    55,   105,  1610,    40,   238,   105,     5,     5,  1662,
     211,   243,     4,    40,   211,     5,     5,     4,   211,  1037,
     220,   211,     4,   111,     5,     5,     5,   194,    82,     5,
       4,     4,   111,     5,     5,   202,   173,     5,     4,     6,
       5,     5,     4,    12,     5,  1698,     5,     4,   138,     5,
       5,     4,    12,     5,     5,     4,   110,     5,     4,   113,
       4,     4,     4,    38,     5,     4,     0,  1720,  1721,     5,
     167,  1678,  1725,  1091,   121,   960,   238,     4,  1731,   238,
     247,  1688,  2710,  1101,    38,  1735,  1693,   238,   195,   207,
     247,   258,     4,     4,     4,     4,     4,   270,  1748,     5,
       5,     5,     5,     5,     5,     4,     4,   274,  1758,     5,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,  2209,  2210,
       5,  2212,  2213,     4,     4,  2216,  2217,     4,     6,     5,
       5,   238,   307,   238,   238,   307,     4,     4,     4,     4,
       4,     4,   307,   307,     4,     4,   270,     5,    32,     5,
       5,   224,   226,     5,     4,   224,   224,     5,   224,   224,
    1830,     5,     4,    12,     5,  1838,     5,  1840,     5,  1842,
       6,  1209,  1210,     4,     4,     4,   270,     5,     4,     4,
     283,     5,     5,   257,     4,   270,     5,  2278,  1861,  1862,
    1863,  1864,  1865,  1866,  1867,  1868,  1869,     5,     4,   351,
       5,     4,     4,     4,     4,   351,     5,     5,     5,   283,
       5,     5,  1885,     4,  1887,     5,     4,   303,     5,     5,
       5,     4,     4,   351,     5,     4,   351,     5,     5,   113,
       5,  1904,  1905,     4,     4,   351,     5,  1910,     5,     5,
       5,     4,     4,   283,     5,     5,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,  1928,     5,     5,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,  1942,
       4,  1944,     4,  1946,  1947,  1948,     5,     5,     5,     5,
       4,     4,   423,     5,     5,     5,  2607,  1960,  1961,     5,
       4,     4,   351,     5,     4,     4,     4,     4,   182,     5,
     184,   185,     5,   187,   188,     5,     5,     5,     4,     4,
    2735,     5,     4,     4,   351,     5,     5,     4,     4,     4,
    1993,     4,     4,  1996,     5,  1998,     4,  2000,     5,  2002,
    2003,   215,  2005,     4,     6,     5,     5,  2428,     5,  2012,
    2013,  2432,     5,     5,     5,     4,  2019,     5,  2021,   233,
     234,     4,  2025,  1391,     4,  2028,  2677,     5,     5,  1397,
       5,     4,     4,   379,     5,     5,     5,     5,     4,     4,
    2616,     5,     5,     5,     5,     4,     4,  2468,     5,     4,
       4,  1419,     4,     4,  1422,     4,     4,     4,  1426,     4,
     274,     4,     4,     4,     4,     4,     4,     4,   351,     4,
       4,  2074,   286,     5,     5,  2032,     4,     6,     5,  1447,
       4,   351,     5,     4,  2084,  1453,     5,     5,     5,     4,
       4,     4,   306,  1461,     4,     4,  1464,     4,     4,     4,
       4,     4,     4,  1338,     5,  1473,  1474,     5,     5,     5,
       4,  2505,     5,     5,  2071,  1350,  1484,     4,  2235,     5,
       5,     4,     4,  2172,  2124,  2125,  2126,  2127,  2128,     5,
    2130,  2131,     4,  1368,  1369,  2135,  2136,  2137,  2138,  2139,
       5,  2141,  2142,     4,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,     4,     4,     4,  2178,     5,     5,     4,     4,
       4,     4,     4,  2605,     5,     4,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,  2199,     5,     5,     4,
       4,   415,  2205,     4,  2677,     5,  2209,  2210,     5,  2212,
    2213,     5,   426,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,   435,  2225,  2226,  2227,  2687,  2688,     4,  2673,     5,
       5,     5,     4,     4,   730,     5,     5,     5,  2241,  2242,
    2243,  2244,    -1,  2246,  2247,  2248,  2249,  2250,  2251,    -1,
    2253,    -1,    -1,  2256,  2257,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2275,    -1,    -1,  2278,  2279,    -1,    -1,   288,
    2283,    -1,    -1,    -1,  2287,    -1,    -1,    -1,    -1,   503,
     504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   516,    -1,    -1,    -1,    -1,   521,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   530,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2335,    -1,    -1,    -1,    -1,    -1,  2338,   348,
      -1,  2341,  2342,  2343,  2344,  2345,    -1,  2347,  2348,    -1,
    2350,  2351,  2352,  2353,  2354,    -1,  2356,  2357,    -1,  2359,
    2360,  2361,  2362,  2363,    -1,  2365,  2366,    -1,  2368,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2378,  2379,
      -1,    -1,    -1,    -1,    -1,   599,   600,   601,   602,  2389,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2407,    -1,    -1,    -1,  2411,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2421,  2422,
      -1,    -1,    -1,    -1,  2427,  2428,    -1,    -1,  2431,  2432,
      -1,    -1,    -1,    -1,  2437,    -1,    -1,  2440,  2441,    -1,
      -1,    -1,    -1,    -1,    -1,   659,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2459,  2460,    -1,  2462,
    2463,  2464,  2465,  2466,    -1,  2468,  2469,    -1,    -1,    -1,
    2473,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2485,    -1,    -1,    -1,  1854,  2490,    -1,   498,
      -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,    -1,   508,
      -1,    -1,    -1,  2506,   513,    -1,    -1,    -1,   517,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2517,    -1,  1754,
      -1,    -1,  1890,    -1,    -1,    -1,  2526,  1762,  1763,    -1,
      -1,    -1,    -1,    -1,    -1,  2535,    -1,  2537,    -1,    -1,
      -1,  2541,  1777,  1778,    -1,  2548,    -1,    -1,    -1,    -1,
    2553,    -1,  2555,  1788,  1789,    -1,    -1,    -1,  2561,    -1,
      -1,    -1,    -1,    -1,  1799,  1800,    -1,    -1,    -1,    -1,
      -1,  2574,    -1,   582,  1809,  1810,    -1,    -1,    -1,    -1,
    1815,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2637,  2592,
    1825,    -1,    -1,  2596,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   816,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2616,   828,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2626,    -1,  2628,    -1,
    2630,    -1,    -1,  2633,    -1,  2635,    -1,    -1,  2641,    -1,
      -1,    -1,    -1,  2646,    -1,  2648,    -1,    -1,    -1,    -1,
      -1,   865,  2655,    -1,    -1,    -1,    -1,  2660,    -1,    -1,
      -1,    -1,  2665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   691,    -1,  2687,  2688,    -1,    -1,    -1,   698,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2714,    -1,    -1,  2717,    -1,    -1,  2720,    -1,    -1,
      -1,    -1,    -1,    -1,   938,    -1,    -1,    -1,  2731,  2732,
    2733,  2734,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2743,    -1,    -1,  2746,    -1,    -1,    -1,    -1,  2705,    -1,
    2753,    -1,  2755,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2737,    -1,    -1,  2740,    -1,    -1,    -1,    -1,    -1,    -1,
    2024,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1013,
      -1,    -1,    -1,    -1,    -1,    -1,   815,  2041,  2042,  2043,
      -1,    -1,  2046,   822,  2048,  2049,    22,    -1,  2052,  2053,
    2054,    27,    -1,  2057,  2058,    -1,    -1,  2061,    -1,  2063,
    2064,    -1,  2066,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    -1,    51,    52,    -1,    -1,    -1,
    2085,  1065,    -1,    -1,    -1,    -1,    62,    -1,   867,   868,
    2095,  1075,    -1,   872,  2099,  2100,   875,    -1,    74,    75,
      -1,    -1,    -1,  2108,  2109,    -1,    82,    -1,   887,    85,
      -1,    -1,  2117,  2118,    -1,    -1,    -1,    -1,  2123,    -1,
      -1,    -1,    -1,  2261,    -1,    -1,   102,    -1,  2133,  2134,
      -1,    -1,    -1,   109,   110,    -1,    -1,   113,    -1,  2144,
    2145,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2155,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,  2164,
      -1,  2166,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
    2174,    -1,    -1,  2177,    -1,    -1,    -1,    -1,  2182,    -1,
      -1,  2185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,  1177,    -1,   171,    -1,    -1,    -1,    -1,
    2204,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,   988,
    1194,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,    75,    99,    -1,    -1,    -1,    80,    -1,
     105,    83,    -1,    -1,  1218,    -1,   111,    89,    -1,    -1,
      -1,    -1,    -1,    -1,  1228,    -1,    -1,    99,    -1,    -1,
     226,    -1,    -1,   105,   129,    -1,   232,    -1,    -1,    -1,
      -1,    -1,   114,  1247,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   248,  1257,   149,    -1,    -1,   129,  1262,    -1,
      -1,   257,    -1,    -1,    -1,    -1,    -1,  2291,    -1,   164,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,   285,
      -1,    -1,   164,    -1,    -1,    -1,    -1,  2455,    -1,   194,
    2324,   173,   174,    -1,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,  2339,    -1,    -1,  2475,    -1,    -1,
      -1,  2479,   194,    -1,  2349,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2358,    -1,    -1,    -1,    -1,   233,    -1,
      -1,    -1,  2367,    -1,    -1,   217,    -1,    -1,    -1,  2374,
      -1,    -1,   247,    -1,   350,    -1,    -1,    -1,    -1,   231,
    2385,   233,    -1,   258,    -1,    -1,  2391,    -1,    -1,  2394,
      -1,    -1,  2397,    -1,    -1,   247,    -1,    -1,    -1,  2403,
     252,    -1,    -1,  1182,    -1,    -1,   258,    -1,    -1,    -1,
     285,  1395,    -1,   265,    -1,    -1,    -1,    -1,    -1,  2423,
      -1,    -1,   297,    -1,   299,   300,  2430,    -1,    -1,  2433,
    2434,   283,    -1,  1212,    -1,    -1,    -1,    -1,  1217,    -1,
      -1,  1425,    -1,    -1,   296,   297,    -1,   299,  1227,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,   339,    -1,    -1,    -1,    -1,    -1,
    1454,    -1,    -1,  1457,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,  1467,  1468,    -1,    -1,   339,    -1,    -1,
      -1,  1475,    -1,    -1,    -1,    -1,    -1,    39,  1482,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2514,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,  2523,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2532,    -1,    -1,
      -1,    -1,    -1,  2538,    -1,    -1,    -1,  2542,  1522,    -1,
    2545,  1525,  1526,    -1,    -1,  2549,    -1,    -1,    -1,    -1,
    1534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,  2568,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2726,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1610,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2639,  2640,    -1,  2642,    -1,
    2644,  2645,    -1,  2647,  1628,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    56,    -1,     4,    -1,    -1,    -1,    -1,    -1,
    1644,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,   215,    -1,  1659,    -1,  1661,   220,    -1,
      -1,    -1,    -1,    -1,  1463,    -1,    -1,  1671,    -1,   231,
    1674,    -1,  1676,  1677,  1678,  1679,  2700,   101,  1682,    -1,
      -1,  1685,    -1,    -1,  1688,  1689,    56,  1691,  1692,  1693,
    1694,    -1,  1696,  1697,    -1,    -1,    -1,    -1,  1702,  1703,
    1704,    -1,    -1,  1707,  1708,    -1,    -1,    -1,    -1,  1713,
    1714,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2747,  1523,    -1,    -1,    -1,    -1,   291,
    1529,   101,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,   215,    -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1604,    -1,  1606,    -1,    -1,
      -1,    -1,    -1,  1612,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    19,  1837,    -1,   161,    -1,  1841,  1637,    -1,
      -1,    -1,    -1,    -1,  1643,   215,    -1,    -1,    -1,  1853,
     220,    -1,  1856,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1660,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1672,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1680,  1886,    -1,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1942,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,  2016,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   220,    -1,    -1,  1835,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2060,    -1,  1857,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    -1,    -1,    -1,
      -1,    -1,  1891,  1892,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1908,
    1909,    -1,    -1,    -1,  1913,  1914,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    -1,    -1,    -1,  1953,    -1,    -1,  1956,  1957,    -1,
      -1,    -1,    -1,    -1,    -1,  1964,    -1,    19,    -1,    -1,
      -1,    -1,  2176,    -1,    -1,  2179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2187,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2203,
    1999,   241,  2206,   243,    -1,    -1,    -1,  2211,    -1,    -1,
    2214,  2215,    -1,    65,    66,    -1,  2015,    69,    -1,    -1,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
    2029,    -1,  2031,    -1,    -1,    -1,    -1,    -1,    -1,    91,
    2039,    -1,    -1,    -1,    -1,  2044,    -1,    -1,    -1,   101,
      -1,  2050,    -1,    -1,    -1,    -1,  2055,    -1,    -1,    -1,
    2059,    -1,    58,  2062,    -1,    -1,  2065,    -1,  2067,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    -1,    -1,
      -1,  2305,    -1,    -1,   156,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2402,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,  2435,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2252,    -1,    -1,    -1,    -1,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,   339,    -1,    -1,
    2494,   287,    -1,    -1,  2498,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    -1,    -1,    -1,    -1,    -1,  2551,  2552,    -1,
    2554,    -1,    -1,    -1,    -1,  2559,  2560,    -1,    -1,    -1,
    2564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2597,    -1,    -1,    -1,    -1,    48,    49,
      -1,  2400,    52,    -1,    -1,    55,    -1,  2406,    -1,    -1,
      -1,  2410,    62,    -1,    -1,    -1,    66,  2621,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    75,    -1,  2426,    -1,    -1,
      -1,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,   129,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2497,   149,
      -1,  2705,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    19,    52,    56,    -1,    -1,    -1,    -1,  2722,    59,
      -1,   171,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,  2737,    74,    75,  2740,    -1,    -1,    -1,
      -1,    -1,    82,    -1,   194,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,   109,
     110,    -1,    -1,   113,   224,    -1,   226,    -1,    -1,    -1,
    2579,    -1,   232,   233,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   247,   248,    -1,
      19,    -1,    59,    -1,    -1,    -1,    -1,   257,   258,   149,
      -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   171,    -1,   283,    -1,   285,    -1,    56,    -1,    -1,
     180,    -1,    -1,    -1,   101,    -1,    -1,   297,   156,   299,
      -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2669,    -1,   215,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,   101,    -1,   224,    -1,   226,    -1,    -1,   339,
      -1,  2690,   232,   233,    -1,    -1,    -1,    -1,    -1,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   215,   248,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,   258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   279,   156,    -1,  2738,
      -1,    -1,    -1,   283,    -1,   285,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,  2758,
      -1,    -1,  2761,   220,    -1,   305,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    -1,    -1,    -1,    -1,   339,
      -1,   220,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     287,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   125,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,    -1,    -1,   141,    -1,    -1,   144,    -1,    -1,
      -1,   148,   149,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,    -1,   182,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   213,   214,   215,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     227,    -1,   229,    -1,    -1,    -1,    -1,    -1,    -1,   236,
      -1,    -1,    -1,   240,    -1,    -1,   243,    -1,   245,    -1,
     247,    -1,    -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    41,    -1,   271,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,
     287,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,   298,    -1,   300,    -1,    -1,    -1,    -1,    77,   306,
      79,    -1,   309,   310,    -1,    84,    -1,    86,    87,    88,
      -1,    -1,    -1,    -1,    93,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,    -1,
     159,    -1,   161,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,    -1,    -1,    -1,    -1,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   245,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,    -1,   308,
      -1,   310,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347
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
     230,   566,   291,   354,   567,     0,     5,   140,    59,   354,
     387,   268,     5,     4,   291,   354,   388,     5,    32,   280,
     389,   123,   354,   390,   123,   354,   392,   354,     4,   192,
     249,   396,   186,   301,   345,   346,   354,   395,   356,   138,
     175,   394,   196,   354,    78,   171,   249,   354,   397,     5,
     354,     4,   245,   399,   354,   354,     5,   226,   402,    31,
     403,     5,   404,     5,   408,     5,    31,   409,   354,     9,
      10,    11,   354,   360,   361,   362,   363,   354,   354,    40,
     111,   193,   354,   411,   354,   193,   364,   366,   354,    35,
     106,   127,   128,   135,   153,   163,   370,   354,     4,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   117,
      66,    53,    71,    88,   100,   118,   122,   134,   173,   417,
     118,   419,   186,   192,   231,   256,   301,   345,   346,   354,
     405,   420,   283,   423,   168,   424,   168,   176,   426,    65,
      66,    69,    91,   168,   185,   207,   271,   339,   364,   428,
     354,   366,   431,    59,   287,   364,   432,   279,   364,   366,
     433,    33,   434,   364,   366,   435,     4,   364,   366,   436,
      45,    59,    81,   100,   117,   120,   146,   147,   198,   208,
     268,   269,   339,   440,   212,   303,   446,     5,    89,     6,
      88,   120,   438,     5,    65,   366,   437,    16,   506,    66,
      81,   181,   239,   281,   290,   447,    66,   231,   448,   282,
      61,   281,   304,   449,    21,   134,   238,   266,   450,    37,
      47,    74,   149,   185,   253,   304,   451,   366,    89,    16,
     195,   456,   364,   459,    72,   462,    31,   463,    44,    87,
     191,   464,   149,   217,   258,   296,   465,   364,    18,    58,
     115,   172,   287,   364,   466,     4,   192,   469,     5,     4,
       6,   120,   354,     4,     5,   245,   471,     5,   473,     5,
     117,   191,   245,   269,   474,    93,   111,   186,   487,     5,
     485,     5,   269,   486,     4,     5,   356,   356,   354,   354,
       5,     4,     5,    60,    66,    73,    75,    80,    83,    89,
      99,   105,   114,   129,   149,   164,   173,   174,   194,   217,
     231,   233,   247,   252,   258,   265,   283,   296,   297,   299,
     339,   491,     5,     4,   196,   203,   204,   239,   344,   367,
     354,   364,   354,     5,   354,    40,   111,   354,   529,   356,
     354,   364,   366,   528,   354,   370,   354,     4,   365,    54,
      90,   140,   245,   533,     4,     4,   354,     4,   149,   258,
     534,     5,   364,     4,    40,   111,   354,   541,   354,    97,
      61,   120,   245,   272,   543,   120,   556,    61,   117,   120,
     156,   191,   242,   245,   269,   272,   282,   545,   546,    61,
     120,   272,   555,     5,     4,    34,   107,   202,   538,    66,
     356,   382,    66,   356,   383,    66,   356,   384,    13,   188,
     537,   354,   354,   224,   354,   385,   354,   269,     4,   354,
     354,     4,   565,     4,   285,   563,     4,   285,   564,     4,
     370,   123,   354,   568,   354,   354,     4,     5,   354,    12,
     354,   354,   354,    30,    94,   162,   249,   254,   369,   369,
       4,   196,   354,   354,     4,     4,     4,   354,   354,   354,
     354,     4,     4,     5,     5,   364,     5,   354,   354,   360,
     362,   362,   364,   354,   354,   354,   354,   354,   354,   354,
     364,   366,   363,   354,   354,   363,   354,     5,   268,   103,
     186,   418,   192,   249,   421,   168,    78,   171,   249,   422,
     138,   175,   406,   406,     4,   425,     4,   427,   192,   256,
     429,   176,   430,   168,   370,   354,   354,   364,   364,   370,
     370,   370,   364,   370,   354,   364,     4,   443,     4,   366,
     441,   195,     4,   165,   310,   442,   195,   364,     4,   131,
     291,   445,     5,     5,     4,   195,   354,     4,     5,    60,
      66,   114,   129,   143,   149,   154,   207,   226,   231,   233,
     257,   258,   265,   283,   339,   500,   366,   187,   187,    66,
     452,    66,   453,    66,   454,   224,   455,   354,     5,   225,
     457,   365,   370,     5,   364,   364,   364,   364,     4,   356,
       4,     4,   195,   354,    14,    15,    61,   189,   190,   262,
     272,   273,   303,    87,     5,     5,    14,    15,    61,   189,
     190,   262,   272,   273,   277,   303,    87,   156,   161,   365,
     477,   482,    87,   156,     5,   475,     4,     4,    14,    61,
     189,   262,   272,   303,     5,     5,     4,   354,   365,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   109,   110,   113,   129,   149,   171,
     194,   224,   226,   232,   233,   247,   248,   257,   258,   283,
     285,   297,   299,   305,   339,    66,    80,    89,    99,   129,
     149,   194,   233,   258,   297,   299,     4,    30,   160,   212,
     238,   494,     5,    63,   104,   235,   250,   251,   341,   342,
     499,    99,   492,    17,    40,   111,   193,   498,     4,     5,
      17,   211,   292,   354,   258,   499,   507,   124,   499,   508,
      36,    40,   111,   132,   193,   291,   354,   509,   364,   356,
      91,    99,   105,   126,   149,   157,   194,   202,   247,   258,
     274,   512,    40,   111,   193,     5,   284,    17,   211,   292,
     516,   285,   356,   517,     5,    99,   105,   300,    17,    17,
       4,   354,   354,   354,   354,   354,   354,   370,   354,   354,
     363,   354,     4,   370,     4,    40,   111,   193,   263,   535,
      40,   111,   193,   263,   536,     4,    97,     5,     5,    87,
       4,     5,     5,    87,     5,   546,    61,   120,   156,   272,
     550,    61,   120,   272,   554,    87,   156,    61,   120,   272,
     548,     4,    61,   120,   272,   547,     5,     5,     4,     4,
       5,     5,     5,   354,   354,   354,     4,   354,   560,   354,
     354,     6,   365,     4,     5,     4,     4,     5,     4,    97,
     260,   371,   354,   354,    12,     5,    12,   354,   354,    12,
       4,    12,     4,     4,   354,   354,   354,     4,   356,     4,
       4,   370,   364,   370,   354,   354,   354,   364,   354,   363,
     354,   354,     5,     5,   354,   366,   354,   364,   354,   370,
     370,   371,   371,   371,   370,   363,   354,   370,   354,   133,
     246,   357,   444,   165,     5,     4,   370,   156,   156,     4,
       5,     4,     4,   354,   439,   354,    20,    21,    22,    48,
      49,    52,    59,    62,    66,    74,    75,    82,   109,   110,
     113,   129,   149,   171,   180,   224,   226,   232,   233,   248,
     258,   283,   285,   295,   305,   339,    66,   129,   154,   233,
     283,    30,   160,   212,   238,   501,   354,   207,   354,   502,
      17,   354,   257,   512,   257,   207,   354,   503,   285,   504,
      17,    98,   354,   354,     5,   371,    56,   364,     4,     5,
     468,   354,     5,     5,     5,   156,   183,   375,   375,   164,
     264,   373,     4,     4,     5,     5,   472,   270,   270,     5,
       5,     5,    17,   158,   374,   374,   373,     4,     4,   373,
       5,     5,   476,   161,   338,   365,   480,     5,   479,     5,
       5,   483,     5,   484,     5,    14,    15,    61,   189,   190,
     262,   272,   273,   277,   303,     4,     4,     5,     5,   375,
     373,     4,     5,     5,   370,    82,   151,   222,   223,   237,
     278,   378,     7,     8,   354,   359,   238,   121,   238,   238,
     105,    40,    66,    99,   105,   111,   129,   149,   164,   194,
     233,   247,   258,   285,   297,   299,   300,   339,   493,   121,
     238,     5,    27,   166,   238,   281,   138,   105,    22,    49,
      52,    82,   110,   113,   226,   257,    22,    49,    52,    55,
      82,   110,   113,   226,   257,   283,    40,   121,   238,   238,
     105,     5,   211,    27,   224,    36,   132,   291,   354,   261,
     268,   121,   243,   364,   512,    40,   130,   224,   281,   243,
     211,     5,     5,   247,    27,   224,     4,     5,     5,   211,
      36,   132,   291,   354,   512,   211,   356,     4,     4,   354,
       5,   303,    22,    27,    48,    49,    51,    52,    62,    74,
      75,    82,    85,   102,   109,   110,   113,   171,   226,   232,
     248,   257,   284,   285,   305,   350,   495,   354,   354,   354,
     354,   354,   499,   364,     5,     4,     5,   354,   354,   364,
     354,   356,   354,   354,   499,     5,   354,   354,   356,     5,
      17,     5,     5,   354,   354,   363,   354,   354,     4,   354,
     354,   111,   354,   354,   111,     4,    42,    43,   169,   170,
     197,   380,   380,    61,   120,   272,   544,   380,     5,    61,
     120,   272,   549,     5,     5,    61,   120,   272,   551,     4,
       5,     5,     4,    61,   120,   272,   553,    61,   120,   272,
     552,     5,     5,     4,     5,     5,     4,   380,   380,   380,
     354,   354,   354,     4,   364,   354,   365,   370,     5,     5,
      12,   354,   364,   366,   354,    12,   354,   354,   354,    59,
     354,     6,     4,   354,   354,    46,   271,   407,     5,   356,
     356,   370,   354,     4,     4,     4,   370,   364,   354,   354,
     354,   354,   370,   364,   371,   363,   354,     4,   371,   354,
      38,    38,     4,   366,     5,    24,    25,    97,   372,     4,
     364,   354,   354,     4,   354,     5,    82,   151,   222,   223,
     237,   278,   364,   366,   238,   121,   238,   238,    21,   238,
     364,   121,   238,    27,   166,   238,   281,   138,    21,   238,
     121,   238,   238,    21,   238,    27,   167,   224,   167,   261,
     268,   121,   167,   224,   289,   512,   130,   167,   224,   281,
       4,   247,    27,   167,   224,   512,   207,   354,   354,   354,
     354,   354,   354,   195,   354,   354,    20,   234,   460,     4,
       4,   354,   375,   375,   375,     4,   375,   375,   375,    14,
      15,    61,   189,   190,   262,   272,   273,   303,   374,   375,
     375,   375,   375,   375,     4,   375,   375,     4,   374,    14,
      15,    61,   189,   190,   262,   272,   273,   303,     5,   478,
       5,   481,     5,     5,    14,    15,    61,   189,   190,   262,
     272,   273,   277,   303,     5,    14,    15,    61,   189,   190,
     262,   272,   273,   277,   303,     5,    14,    15,    61,   189,
     190,   262,   272,   273,   277,   303,    14,    15,    61,   189,
     190,   262,   272,   273,   303,   270,     5,     5,     5,   374,
     374,   373,     4,     4,   373,     5,     4,     4,   375,   375,
       4,   375,   375,     5,   356,   364,   366,     5,   354,   356,
     354,     5,   354,     5,   359,   105,   194,   247,   105,   194,
     247,     5,   356,   354,   356,     5,   354,   364,   356,     5,
     359,   238,   238,    21,   238,    21,   238,   238,    21,   238,
     307,   307,     4,     4,     4,   493,     4,     4,     4,   307,
     307,     4,     5,     4,   356,   354,     5,   354,     5,   359,
     356,   364,   364,   354,    27,    48,    51,    62,    85,   102,
     350,   376,     4,   356,   354,   370,   356,     5,   364,   364,
     354,   356,   356,   364,   364,   354,   356,   354,     5,   354,
     224,   224,   354,   354,   224,   354,   224,   354,   354,   505,
     513,   354,   224,   224,   354,   354,   354,   354,   354,   354,
     354,   354,     5,   303,   354,   496,   354,   354,   224,   354,
     354,   354,   354,   364,   370,     5,   364,   364,   354,   354,
     370,   354,   354,   354,   364,   354,   354,     5,     4,   354,
     354,   354,   354,     5,     5,     4,   380,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   354,   354,   354,   370,   354,   370,   354,   364,
     366,   354,   370,   354,   354,   354,   354,   354,     5,   354,
       4,     6,   354,   354,     4,   364,   354,   370,   176,   368,
     354,   368,   371,   370,   364,   354,   354,     4,   354,   364,
     370,   364,   354,     4,     5,     5,     5,     5,     5,   364,
     370,   364,   364,   364,   364,   366,   364,   370,   364,   364,
     364,   366,   364,   364,   364,   364,   366,   364,   364,   364,
     354,   364,   364,   364,   364,   364,   364,   364,   354,   354,
       4,   354,     5,     4,   354,   375,     5,     5,     5,   373,
       4,     4,     5,   375,   374,     4,   375,     5,     5,     5,
     374,   374,   373,     4,     4,     5,    14,    15,    61,   189,
     190,   262,   272,   273,   303,    14,    15,    61,   189,   190,
     262,   272,   273,   303,    14,    15,    61,   189,   190,   262,
     272,   273,   303,   270,     5,     5,     5,   374,   374,   373,
       4,     4,   373,     5,   270,     5,     5,     5,   374,   374,
     373,     4,     4,   373,     5,   270,     5,     5,     5,   374,
     374,   373,     4,     4,   373,     5,     5,     5,     5,   374,
     374,   373,     4,     4,     5,   374,     4,     4,   374,     4,
       4,   375,     5,   370,   364,   354,   354,   364,   354,     5,
     359,     5,   364,   356,     5,   364,   370,     5,   359,   354,
     354,   354,   354,   354,   354,   354,   354,   354,     4,     4,
       5,     4,     4,   354,   364,   354,     5,   359,   356,   370,
     370,   354,   363,   370,   370,   354,   370,   370,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,    55,    66,
      92,   129,   283,   285,   339,   510,   511,   512,   523,   524,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   364,     5,   354,   354,   354,   354,     4,     4,
     370,   371,     4,   497,   370,   370,   363,   354,     4,   370,
       4,   380,   380,   380,   359,   354,   354,   354,   370,   354,
     363,   354,   354,    12,     5,     5,     4,   354,   354,     4,
     370,   364,   354,   354,   371,   372,   354,     5,   354,   370,
     370,   366,     5,     5,     5,     5,     5,   370,   372,   372,
     372,   370,   372,   371,   372,   372,   370,   372,   372,   372,
     370,   372,   372,   370,   364,   372,   370,   372,   372,   370,
     372,   370,     4,   366,     5,   354,     4,   375,   374,     4,
     374,     5,     5,     5,   374,   374,   373,     4,     4,     5,
       5,     5,     5,   374,   374,   373,     4,     4,     5,     5,
       5,     5,   374,   374,   373,     4,     4,     5,   374,   375,
     375,   375,   375,   375,     4,   375,   375,     4,   374,   374,
     375,   375,   375,   375,   375,     4,   375,   375,     4,   374,
     374,     4,     4,   374,     4,   374,   374,     4,     4,     4,
     365,   372,     4,   364,   372,   354,   364,     4,   372,   372,
     364,     4,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   364,   372,   354,   364,     4,   363,   363,
     364,   363,   363,   364,   364,   363,   363,   354,   354,   354,
     354,   354,   354,   359,   354,   354,   354,   351,   351,   351,
     351,   351,   351,   351,   511,   351,   359,   354,   354,   354,
     354,   359,   354,   354,   354,   354,   354,   354,   370,   354,
     303,   358,   359,   354,   354,   371,   356,     4,     4,   371,
       4,   354,   363,   354,    59,   354,     5,     5,   354,     4,
     368,   372,     5,     4,     5,     4,     5,   364,     5,   371,
     372,   371,   371,   371,     5,     4,   354,   375,   374,   375,
     375,   375,   375,   375,     4,   375,   375,   374,   375,   375,
     375,   375,   375,     4,   375,   375,   374,   375,   375,   375,
     375,   375,     4,   375,   375,   374,   375,   374,     4,   375,
     375,   374,     4,   375,   374,     4,   374,   374,   370,   364,
     372,     4,   370,   354,   370,   354,   354,   354,   372,     4,
     370,   354,   363,   372,   354,   363,   372,   372,   364,   354,
       4,   377,   377,   354,   354,   377,   359,   377,   513,   364,
     493,     5,     4,     5,     5,     5,     4,   356,   359,   377,
     377,   354,   354,   359,   354,   354,   354,   354,   354,   363,
     354,     5,   513,   354,   377,   356,   514,   515,     5,   356,
       4,     5,   354,     5,     4,     6,   354,    32,   280,   414,
     364,     5,   370,   364,   414,   354,   374,   375,   374,   375,
     374,   375,   375,   374,   375,   374,   374,   354,   372,   364,
     364,   354,   364,   354,   364,   364,   354,   364,   372,     4,
     513,   513,   358,   354,   513,     4,   513,   370,     5,     4,
       4,   513,   513,   358,   354,     4,   513,   513,   354,   364,
     513,   513,   513,   514,   520,   521,   512,   518,   519,     4,
       5,     5,     6,     4,   186,   301,   346,   354,   405,     4,
     364,    32,   280,   379,     4,   375,   375,   375,   375,   375,
     365,   372,   372,   354,   372,     4,   372,   372,   354,   372,
     354,   513,   513,     4,   354,   513,     5,   354,   513,     4,
     354,   513,   370,   520,   522,   523,   351,   519,     5,     5,
       4,   354,   406,   354,   406,   370,   372,     4,   364,   366,
       4,   359,   358,   354,   354,   358,   354,   364,   523,   356,
       5,     5,   354,   354,   354,   354,   379,     5,   364,   366,
     370,   364,   366,   513,   354,     4,   513,   354,   372,     5,
       5,   354,     5,   354,   370,   370,     4,   513,     4,     5,
       5,     5,   358,   358,   513,   513,   513
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

  case 5:
#line 459 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 461 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 462 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 464 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 471 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 476 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 477 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 479 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 486 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 490 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 493 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 498 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 500 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 502 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 504 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 511 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 512 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 515 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 516 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 517 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 518 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 519 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 520 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 521 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 522 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 523 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 524 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 525 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 526 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 529 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
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
#line 534 "frame/parser.Y"
    {(yyval.integer)=1;;}
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
#line 539 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 542 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 544 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 545 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 546 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 549 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 550 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 553 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 554 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 555 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 558 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 561 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 564 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 568 "frame/parser.Y"
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
#line 580 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 587 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 594 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 605 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 638 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 639 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 647 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 650 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 137:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 138:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 139:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 140:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 141:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 142:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 143:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 144:
#line 660 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 145:
#line 661 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 146:
#line 662 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 147:
#line 663 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 148:
#line 664 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 149:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 150:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 151:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 152:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 154:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 155:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 156:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 157:
#line 677 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 158:
#line 678 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 159:
#line 679 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 160:
#line 682 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 161:
#line 683 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 162:
#line 684 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 163:
#line 685 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 164:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 165:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 166:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
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
#line 695 "frame/parser.Y"
    {;}
    break;

  case 170:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 171:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 172:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 173:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 174:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 175:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 176:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 177:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 178:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 179:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 180:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 181:
#line 713 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 182:
#line 714 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 183:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 184:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 185:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 186:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 187:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 188:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 189:
#line 725 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 190:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 191:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 192:
#line 730 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 193:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 194:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 195:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 196:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 197:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 202:
#line 742 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 203:
#line 743 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 204:
#line 744 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 205:
#line 745 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 206:
#line 747 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 207:
#line 750 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 208:
#line 751 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 209:
#line 754 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 755 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 758 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 759 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 762 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 214:
#line 764 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 216:
#line 768 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 217:
#line 769 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 220:
#line 772 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 222:
#line 774 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 223:
#line 777 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 224:
#line 778 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 225:
#line 781 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 226:
#line 782 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 227:
#line 784 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 228:
#line 786 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 229:
#line 787 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 230:
#line 788 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 231:
#line 790 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 232:
#line 792 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 233:
#line 795 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 234:
#line 796 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 235:
#line 799 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 236:
#line 801 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 237:
#line 804 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 238:
#line 806 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 239:
#line 809 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 240:
#line 813 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 241:
#line 814 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 243:
#line 818 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 244:
#line 819 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 245:
#line 820 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 249:
#line 826 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 250:
#line 827 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 252:
#line 830 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 253:
#line 835 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 254:
#line 836 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 255:
#line 839 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 256:
#line 840 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 257:
#line 841 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 258:
#line 842 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 259:
#line 843 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 260:
#line 846 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 261:
#line 847 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 262:
#line 848 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 263:
#line 851 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 264:
#line 853 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 265:
#line 858 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 266:
#line 863 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 267:
#line 870 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 268:
#line 872 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 269:
#line 873 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 271:
#line 875 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 272:
#line 879 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 273:
#line 881 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 274:
#line 883 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 275:
#line 884 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 281:
#line 895 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 282:
#line 897 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 283:
#line 899 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 284:
#line 904 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 285:
#line 908 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 286:
#line 911 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 287:
#line 912 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 290:
#line 918 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 291:
#line 924 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 296:
#line 931 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 297:
#line 934 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 298:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 299:
#line 938 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 300:
#line 939 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 301:
#line 943 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 302:
#line 945 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 303:
#line 948 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 304:
#line 950 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 305:
#line 953 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 307:
#line 955 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 308:
#line 956 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 309:
#line 957 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 310:
#line 960 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 311:
#line 962 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 963 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 964 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 965 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 315:
#line 969 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 316:
#line 971 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 317:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 318:
#line 973 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 976 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 320:
#line 978 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 321:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 322:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 323:
#line 985 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 324:
#line 988 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 325:
#line 989 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 326:
#line 990 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 327:
#line 993 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 328:
#line 996 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 342:
#line 1010 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 345:
#line 1013 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 346:
#line 1015 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 349:
#line 1018 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 350:
#line 1019 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 353:
#line 1022 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 354:
#line 1023 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 356:
#line 1026 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 358:
#line 1028 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 360:
#line 1030 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 362:
#line 1032 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 363:
#line 1034 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 364:
#line 1036 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 366:
#line 1038 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 367:
#line 1041 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 368:
#line 1042 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 369:
#line 1043 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 370:
#line 1044 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 371:
#line 1045 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 372:
#line 1046 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 374:
#line 1048 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 375:
#line 1051 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 376:
#line 1052 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 377:
#line 1053 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 378:
#line 1056 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 379:
#line 1059 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 380:
#line 1061 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 381:
#line 1063 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 382:
#line 1064 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 383:
#line 1065 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 385:
#line 1067 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 387:
#line 1070 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 388:
#line 1076 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 389:
#line 1077 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 390:
#line 1080 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 391:
#line 1081 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 392:
#line 1082 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 393:
#line 1085 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 394:
#line 1086 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 396:
#line 1092 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 397:
#line 1094 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 398:
#line 1096 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 399:
#line 1099 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 401:
#line 1101 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 402:
#line 1105 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 403:
#line 1109 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 405:
#line 1111 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 406:
#line 1112 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 407:
#line 1113 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 408:
#line 1114 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 409:
#line 1115 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 411:
#line 1117 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 412:
#line 1118 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 413:
#line 1121 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 414:
#line 1122 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 415:
#line 1123 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 416:
#line 1126 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 417:
#line 1127 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 418:
#line 1131 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 419:
#line 1133 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 420:
#line 1141 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 421:
#line 1143 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 422:
#line 1145 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 423:
#line 1148 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 424:
#line 1150 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 425:
#line 1151 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 426:
#line 1154 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 427:
#line 1157 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 428:
#line 1159 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 429:
#line 1163 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 430:
#line 1165 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 431:
#line 1168 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 432:
#line 1172 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 433:
#line 1173 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 434:
#line 1175 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 435:
#line 1178 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 436:
#line 1179 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 438:
#line 1183 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 439:
#line 1184 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 440:
#line 1185 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 441:
#line 1188 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 442:
#line 1190 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 443:
#line 1191 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 445:
#line 1193 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 449:
#line 1197 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 450:
#line 1198 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 451:
#line 1199 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 452:
#line 1201 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1203 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 455:
#line 1206 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1208 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 457:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 458:
#line 1211 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 459:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 460:
#line 1213 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 461:
#line 1216 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 462:
#line 1217 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 463:
#line 1221 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1223 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 465:
#line 1226 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 466:
#line 1229 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 467:
#line 1230 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 468:
#line 1232 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 469:
#line 1234 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 470:
#line 1236 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (5)].real), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 471:
#line 1239 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 472:
#line 1240 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 473:
#line 1241 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 474:
#line 1244 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 475:
#line 1245 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 476:
#line 1246 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 477:
#line 1247 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 478:
#line 1248 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 479:
#line 1249 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 480:
#line 1252 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 481:
#line 1255 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 482:
#line 1256 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 483:
#line 1257 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 484:
#line 1260 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 485:
#line 1261 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 486:
#line 1262 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 487:
#line 1263 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 488:
#line 1264 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 489:
#line 1265 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 494:
#line 1272 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 495:
#line 1273 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 496:
#line 1274 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 497:
#line 1277 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 498:
#line 1278 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 499:
#line 1281 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 500:
#line 1282 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 501:
#line 1285 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 502:
#line 1286 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 503:
#line 1289 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 504:
#line 1290 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 505:
#line 1293 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 507:
#line 1295 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 508:
#line 1298 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 509:
#line 1299 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 511:
#line 1303 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 512:
#line 1307 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 513:
#line 1310 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 514:
#line 1317 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 515:
#line 1318 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 516:
#line 1321 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 519:
#line 1324 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 520:
#line 1325 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 522:
#line 1327 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 524:
#line 1329 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 525:
#line 1330 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 526:
#line 1331 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 528:
#line 1333 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 529:
#line 1334 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 530:
#line 1335 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 531:
#line 1336 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1340 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 534:
#line 1343 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 535:
#line 1344 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 536:
#line 1347 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 537:
#line 1348 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 538:
#line 1349 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 539:
#line 1350 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 540:
#line 1353 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 541:
#line 1354 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 542:
#line 1355 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 543:
#line 1356 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 544:
#line 1359 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 545:
#line 1360 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1361 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 547:
#line 1362 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1363 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 549:
#line 1364 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1367 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 551:
#line 1368 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 552:
#line 1369 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 555:
#line 1373 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 556:
#line 1374 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 557:
#line 1377 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 558:
#line 1380 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 559:
#line 1381 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 560:
#line 1385 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 561:
#line 1387 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1388 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 569:
#line 1400 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1402 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1404 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1405 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 573:
#line 1407 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 574:
#line 1409 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 575:
#line 1411 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1413 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1415 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 583:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 584:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 585:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1431 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 589:
#line 1435 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1437 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1439 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1441 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1443 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1447 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 596:
#line 1449 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 597:
#line 1452 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1454 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1456 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 605:
#line 1464 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1465 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1466 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1467 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1468 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 610:
#line 1469 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1471 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 612:
#line 1473 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 613:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1475 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1476 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 616:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 622:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 630:
#line 1499 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1502 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 636:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 639:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 646:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 647:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 656:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 659:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1602 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 665:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 672:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 673:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 675:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 676:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 678:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 679:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 684:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 686:
#line 1658 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 687:
#line 1659 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1660 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1661 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1670 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 696:
#line 1671 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1672 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1673 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 699:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1680 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 702:
#line 1682 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 703:
#line 1684 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1686 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1689 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 706:
#line 1690 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 707:
#line 1693 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 708:
#line 1694 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 709:
#line 1695 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 710:
#line 1698 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 715:
#line 1709 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 716:
#line 1710 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 717:
#line 1711 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 718:
#line 1715 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 720:
#line 1723 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1724 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 722:
#line 1726 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 723:
#line 1728 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 724:
#line 1729 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 725:
#line 1730 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 727:
#line 1731 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 728:
#line 1732 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 729:
#line 1733 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 731:
#line 1735 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 732:
#line 1736 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 733:
#line 1738 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 734:
#line 1740 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 735:
#line 1742 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 736:
#line 1745 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 737:
#line 1747 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 738:
#line 1748 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 739:
#line 1750 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1753 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 741:
#line 1756 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1758 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1761 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 744:
#line 1764 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1767 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 746:
#line 1770 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 747:
#line 1774 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 748:
#line 1778 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 749:
#line 1783 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 750:
#line 1787 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 751:
#line 1788 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1790 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1791 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 754:
#line 1793 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1795 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1797 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1799 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1800 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1802 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1804 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 761:
#line 1807 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 762:
#line 1811 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1815 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1817 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1819 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1821 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1823 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1825 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1827 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1833 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 773:
#line 1835 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 774:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 775:
#line 1839 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1841 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1842 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1844 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1846 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 780:
#line 1847 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1848 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1850 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 785:
#line 1854 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 786:
#line 1855 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1857 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1860 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 790:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 791:
#line 1867 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 793:
#line 1874 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 794:
#line 1878 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 795:
#line 1883 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1887 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 797:
#line 1888 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 798:
#line 1889 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 799:
#line 1891 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1893 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 801:
#line 1897 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 802:
#line 1898 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1899 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1901 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 805:
#line 1904 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 806:
#line 1907 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 807:
#line 1910 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1911 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1913 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1916 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 811:
#line 1920 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1922 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1923 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 814:
#line 1925 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 815:
#line 1928 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 816:
#line 1931 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 817:
#line 1932 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1934 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 819:
#line 1935 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 820:
#line 1936 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1938 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 822:
#line 1939 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 823:
#line 1941 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 824:
#line 1944 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 825:
#line 1947 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 826:
#line 1949 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 827:
#line 1950 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 831:
#line 1955 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 832:
#line 1956 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 833:
#line 1958 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 834:
#line 1960 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 835:
#line 1962 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 836:
#line 1963 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 837:
#line 1965 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 838:
#line 1966 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 841:
#line 1971 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 842:
#line 1972 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1973 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1974 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 847:
#line 1977 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 848:
#line 1978 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 849:
#line 1979 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 850:
#line 1980 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 851:
#line 1982 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 852:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 853:
#line 1985 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1986 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 855:
#line 1987 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 856:
#line 1988 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1990 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 858:
#line 1991 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 1992 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 860:
#line 1993 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 861:
#line 1994 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 862:
#line 1996 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 863:
#line 1997 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 864:
#line 1998 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 865:
#line 1999 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 866:
#line 2000 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 867:
#line 2001 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 868:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 869:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 870:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 871:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 872:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 873:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 874:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 875:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 876:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 877:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 878:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 879:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 880:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 881:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 882:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 883:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 884:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 885:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 886:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 887:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 888:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 889:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 890:
#line 2028 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 891:
#line 2029 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 892:
#line 2030 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 893:
#line 2031 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 894:
#line 2033 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 895:
#line 2043 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2051 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2060 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2068 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2075 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2082 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2090 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2098 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2103 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2108 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2113 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2118 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2123 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2128 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2142 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2152 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2162 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2171 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2179 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2189 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2199 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2209 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2221 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2230 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2238 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 922:
#line 2240 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 923:
#line 2242 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 924:
#line 2247 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 925:
#line 2250 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 926:
#line 2254 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 927:
#line 2256 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 928:
#line 2257 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 929:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 930:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 931:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 932:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 933:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 934:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 935:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 937:
#line 2270 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 938:
#line 2271 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 939:
#line 2272 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 940:
#line 2273 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 941:
#line 2274 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 942:
#line 2277 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 943:
#line 2279 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 944:
#line 2281 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 945:
#line 2283 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 946:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 947:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2289 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 949:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 950:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 951:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 952:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 953:
#line 2297 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2299 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2301 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2302 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2303 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 958:
#line 2305 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2307 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2310 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2312 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2314 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2315 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 964:
#line 2316 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2317 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2319 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2321 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2323 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 971:
#line 2325 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2328 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 974:
#line 2330 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2332 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2334 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2335 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 978:
#line 2337 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2339 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2340 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2341 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 982:
#line 2342 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2344 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2346 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2349 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 986:
#line 2352 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2353 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2354 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2356 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 990:
#line 2359 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2362 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 993:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 994:
#line 2365 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2367 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2369 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 997:
#line 2371 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2372 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1000:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1001:
#line 2376 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2377 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2378 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2380 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2382 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2384 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2386 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2388 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1010:
#line 2389 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1011:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1012:
#line 2393 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1013:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1014:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1016:
#line 2397 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1018:
#line 2401 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1019:
#line 2402 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1020:
#line 2403 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1021:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1022:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1023:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1024:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1025:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1026:
#line 2411 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1027:
#line 2414 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1028:
#line 2415 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1029:
#line 2416 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1030:
#line 2417 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1031:
#line 2420 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1032:
#line 2421 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1033:
#line 2424 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1034:
#line 2425 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1035:
#line 2428 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1036:
#line 2429 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1037:
#line 2432 "frame/parser.Y"
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

  case 1038:
#line 2445 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1039:
#line 2446 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1040:
#line 2450 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1041:
#line 2451 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1042:
#line 2455 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1043:
#line 2460 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1044:
#line 2465 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1045:
#line 2471 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1046:
#line 2473 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1047:
#line 2476 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1048:
#line 2478 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1049:
#line 2481 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1050:
#line 2484 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1051:
#line 2485 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1052:
#line 2486 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1053:
#line 2487 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1054:
#line 2488 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1055:
#line 2489 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1056:
#line 2491 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1059:
#line 2498 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1060:
#line 2499 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1061:
#line 2500 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1062:
#line 2501 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1063:
#line 2502 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1064:
#line 2503 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1067:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1068:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1069:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1070:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1071:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1072:
#line 2513 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1073:
#line 2514 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1074:
#line 2515 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1075:
#line 2516 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1076:
#line 2517 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1077:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1080:
#line 2525 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1081:
#line 2526 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1083:
#line 2529 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1084:
#line 2530 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1085:
#line 2531 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1086:
#line 2532 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1087:
#line 2535 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1088:
#line 2536 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1091:
#line 2544 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1093:
#line 2548 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1098:
#line 2558 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1099:
#line 2562 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1100:
#line 2563 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1101:
#line 2564 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1102:
#line 2565 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1103:
#line 2566 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1104:
#line 2567 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1105:
#line 2568 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1107:
#line 2575 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1108:
#line 2576 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1109:
#line 2577 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1110:
#line 2581 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1111:
#line 2582 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1112:
#line 2584 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1113:
#line 2589 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1115:
#line 2591 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1117:
#line 2593 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1118:
#line 2596 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1119:
#line 2598 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1120:
#line 2603 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1121:
#line 2606 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1123:
#line 2608 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2611 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1125:
#line 2613 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1126:
#line 2617 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1127:
#line 2618 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1128:
#line 2622 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2623 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2624 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1131:
#line 2625 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1132:
#line 2631 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1133:
#line 2632 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1134:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1135:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1136:
#line 2640 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1137:
#line 2641 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1140:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1141:
#line 2651 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1142:
#line 2652 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1143:
#line 2653 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1144:
#line 2657 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2658 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2659 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1147:
#line 2660 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1148:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1149:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1150:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1151:
#line 2668 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1152:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1153:
#line 2672 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1154:
#line 2673 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1155:
#line 2674 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1156:
#line 2677 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1157:
#line 2678 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1159:
#line 2680 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1161:
#line 2684 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1162:
#line 2685 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1163:
#line 2686 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1168:
#line 2693 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1169:
#line 2697 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2699 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1171:
#line 2701 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1173:
#line 2706 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2708 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2710 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2723 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2724 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2725 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1188:
#line 2728 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2729 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2730 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1191:
#line 2733 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2734 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2735 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2738 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2739 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2740 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2749 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2750 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1204:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2759 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2760 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2764 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2765 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2766 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1213:
#line 2770 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1214:
#line 2772 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2774 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2778 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1217:
#line 2782 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1218:
#line 2784 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1219:
#line 2788 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1220:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1221:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1222:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1223:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1224:
#line 2797 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1225:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1226:
#line 2800 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1227:
#line 2802 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1229:
#line 2806 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1230:
#line 2807 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2809 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1232:
#line 2812 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1233:
#line 2813 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1234:
#line 2817 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2819 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2824 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2825 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1241:
#line 2826 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1242:
#line 2829 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2830 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2831 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1245:
#line 2834 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1246:
#line 2836 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1247:
#line 2841 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1248:
#line 2844 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1249:
#line 2851 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1250:
#line 2853 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1251:
#line 2855 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1252:
#line 2860 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1254:
#line 2864 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1255:
#line 2865 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1256:
#line 2866 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1257:
#line 2868 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1258:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1259:
#line 2875 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10890 "frame/parser.C"
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

