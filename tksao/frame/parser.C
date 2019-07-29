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
#define YYLAST   5497

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  352
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1256
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2784

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
    1415,  1417,  1419,  1421,  1424,  1426,  1429,  1431,  1434,  1437,
    1440,  1443,  1445,  1447,  1449,  1450,  1452,  1453,  1455,  1456,
    1458,  1459,  1461,  1462,  1465,  1468,  1469,  1471,  1474,  1476,
    1483,  1489,  1491,  1493,  1495,  1498,  1501,  1503,  1505,  1507,
    1509,  1512,  1514,  1516,  1518,  1521,  1523,  1525,  1527,  1530,
    1533,  1536,  1537,  1539,  1540,  1542,  1544,  1546,  1548,  1550,
    1552,  1554,  1556,  1559,  1562,  1565,  1567,  1570,  1574,  1576,
    1579,  1582,  1587,  1594,  1596,  1607,  1609,  1612,  1616,  1620,
    1623,  1626,  1629,  1632,  1635,  1638,  1641,  1646,  1651,  1656,
    1660,  1664,  1670,  1675,  1680,  1685,  1689,  1693,  1697,  1701,
    1704,  1707,  1712,  1716,  1720,  1724,  1728,  1733,  1738,  1743,
    1748,  1754,  1759,  1766,  1774,  1779,  1784,  1790,  1793,  1797,
    1801,  1805,  1808,  1812,  1816,  1820,  1824,  1829,  1833,  1839,
    1846,  1850,  1854,  1859,  1863,  1867,  1871,  1875,  1879,  1885,
    1889,  1893,  1898,  1902,  1905,  1908,  1910,  1914,  1919,  1924,
    1929,  1934,  1939,  1946,  1951,  1956,  1962,  1967,  1972,  1977,
    1982,  1988,  1993,  2000,  2008,  2013,  2018,  2024,  2030,  2036,
    2042,  2048,  2054,  2062,  2068,  2074,  2081,  2086,  2091,  2096,
    2101,  2106,  2113,  2118,  2123,  2129,  2135,  2141,  2147,  2153,
    2160,  2166,  2174,  2183,  2189,  2195,  2202,  2206,  2210,  2214,
    2218,  2223,  2227,  2233,  2240,  2244,  2248,  2253,  2257,  2261,
    2265,  2269,  2273,  2279,  2283,  2287,  2292,  2297,  2302,  2306,
    2312,  2317,  2322,  2325,  2329,  2336,  2343,  2345,  2347,  2349,
    2352,  2355,  2358,  2362,  2366,  2369,  2382,  2385,  2388,  2390,
    2394,  2399,  2402,  2403,  2407,  2409,  2411,  2414,  2417,  2420,
    2423,  2426,  2431,  2436,  2441,  2445,  2450,  2456,  2465,  2472,
    2477,  2487,  2494,  2502,  2513,  2525,  2538,  2548,  2554,  2559,
    2566,  2570,  2576,  2582,  2589,  2595,  2600,  2610,  2621,  2633,
    2643,  2650,  2657,  2664,  2671,  2678,  2685,  2692,  2699,  2706,
    2714,  2722,  2725,  2730,  2735,  2740,  2745,  2751,  2756,  2761,
    2767,  2773,  2777,  2782,  2787,  2792,  2797,  2805,  2815,  2822,
    2833,  2845,  2858,  2868,  2872,  2875,  2879,  2885,  2893,  2898,
    2902,  2906,  2913,  2921,  2929,  2934,  2939,  2944,  2954,  2959,
    2963,  2968,  2976,  2984,  2987,  2991,  2995,  2999,  3004,  3007,
    3010,  3015,  3026,  3030,  3032,  3036,  3039,  3042,  3045,  3048,
    3052,  3058,  3063,  3069,  3072,  3080,  3084,  3087,  3090,  3094,
    3097,  3100,  3103,  3107,  3110,  3114,  3119,  3123,  3127,  3134,
    3139,  3142,  3146,  3149,  3152,  3157,  3161,  3165,  3168,  3172,
    3174,  3177,  3179,  3182,  3185,  3188,  3190,  3192,  3194,  3196,
    3199,  3201,  3204,  3207,  3209,  3212,  3215,  3217,  3220,  3222,
    3224,  3226,  3228,  3230,  3232,  3234,  3236,  3237,  3239,  3242,
    3245,  3248,  3252,  3258,  3266,  3274,  3281,  3288,  3295,  3302,
    3308,  3315,  3322,  3329,  3336,  3343,  3350,  3357,  3369,  3377,
    3385,  3393,  3403,  3413,  3424,  3437,  3450,  3453,  3456,  3460,
    3465,  3470,  3475,  3478,  3483,  3488,  3490,  3492,  3494,  3496,
    3498,  3500,  3502,  3504,  3507,  3509,  3511,  3513,  3517,  3521,
    3530,  3537,  3548,  3557,  3565,  3571,  3574,  3577,  3581,  3586,
    3592,  3596,  3602,  3608,  3612,  3617,  3623,  3629,  3635,  3639,
    3645,  3648,  3652,  3656,  3662,  3666,  3670,  3674,  3679,  3685,
    3691,  3695,  3701,  3707,  3711,  3716,  3722,  3728,  3731,  3734,
    3738,  3744,  3751,  3758,  3762,  3766,  3770,  3777,  3783,  3789,
    3792,  3796,  3800,  3806,  3813,  3817,  3820,  3823,  3827,  3830,
    3834,  3837,  3841,  3847,  3854,  3857,  3860,  3863,  3865,  3870,
    3875,  3877,  3880,  3883,  3886,  3889,  3892,  3895,  3898,  3902,
    3905,  3909,  3912,  3916,  3918,  3920,  3922,  3924,  3926,  3927,
    3930,  3931,  3934,  3935,  3937,  3938,  3939,  3941,  3943,  3945,
    3947,  3955,  3964,  3967,  3972,  3975,  3980,  3987,  3990,  3992,
    3994,  3998,  4002,  4004,  4009,  4012,  4014,  4018,  4022,  4027,
    4031,  4035,  4039,  4041,  4043,  4045,  4047,  4049,  4051,  4053,
    4055,  4057,  4059,  4061,  4063,  4065,  4067,  4070,  4071,  4072,
    4075,  4077,  4081,  4083,  4087,  4089,  4092,  4095,  4097,  4101,
    4102,  4103,  4106,  4109,  4111,  4115,  4121,  4123,  4126,  4129,
    4133,  4136,  4139,  4142,  4144,  4146,  4148,  4150,  4155,  4158,
    4162,  4166,  4169,  4173,  4176,  4179,  4182,  4186,  4190,  4194,
    4197,  4201,  4203,  4207,  4211,  4213,  4216,  4219,  4222,  4225,
    4235,  4242,  4244,  4246,  4248,  4250,  4253,  4256,  4260,  4264,
    4266,  4269,  4273,  4277,  4279,  4282,  4284,  4286,  4288,  4290,
    4292,  4295,  4298,  4303,  4305,  4308,  4311,  4314,  4318,  4320,
    4322,  4324,  4327,  4330,  4333,  4336,  4339,  4343,  4347,  4351,
    4355,  4359,  4363,  4367,  4369,  4372,  4375,  4378,  4382,  4385,
    4389,  4393,  4396,  4399,  4402,  4405,  4408,  4411,  4414,  4417,
    4420,  4423,  4426,  4429,  4432,  4435,  4439,  4443,  4447,  4450,
    4453,  4456,  4459,  4462,  4465,  4468,  4471,  4474,  4477,  4480,
    4483,  4487,  4491,  4495,  4500,  4507,  4510,  4512,  4514,  4516,
    4518,  4520,  4521,  4527,  4529,  4536,  4540,  4542,  4546,  4549,
    4552,  4556,  4560,  4563,  4566,  4569,  4572,  4575,  4578,  4582,
    4585,  4588,  4592,  4594,  4598,  4603,  4605,  4608,  4614,  4621,
    4628,  4631,  4633,  4636,  4639,  4645,  4652
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
      -1,   239,    -1,   281,    -1,   290,    -1,    81,    -1,   231,
      -1,    61,    -1,   281,    -1,   304,    -1,   134,    -1,   238,
      -1,   238,   187,    -1,   266,    -1,   266,   187,    -1,    21,
      -1,   304,   455,    -1,    47,   452,    -1,    74,   453,    -1,
     149,   454,    -1,   185,    -1,    37,    -1,   253,    -1,    -1,
      66,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,   224,
      -1,    -1,    16,   457,    -1,   195,   365,    -1,    -1,   225,
      -1,    83,   459,    -1,    99,    -1,   364,   370,   371,   460,
       5,     5,    -1,   364,   370,   371,   460,     5,    -1,    20,
      -1,   234,    -1,    19,    -1,    44,   462,    -1,    77,   463,
      -1,    84,    -1,    94,    -1,    95,    -1,   101,    -1,   124,
     464,    -1,   141,    -1,   155,    -1,   162,    -1,   182,   465,
      -1,   220,    -1,   156,    -1,   271,    -1,   281,   364,    -1,
     310,   466,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,
      44,    -1,    87,    -1,   191,    -1,   149,    -1,   258,    -1,
     217,    -1,   296,    -1,   364,    -1,    58,   364,    -1,   115,
     364,    -1,   172,   364,    -1,    18,    -1,   287,   364,    -1,
     199,     4,     4,    -1,   116,    -1,   184,     5,    -1,    88,
     469,    -1,   259,   120,   195,   468,    -1,   259,     6,     4,
       4,     4,     4,    -1,   300,    -1,   310,   354,   354,   354,
     354,   354,   354,   354,   354,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    56,    -1,     4,     4,   364,    -1,
     192,   356,    -1,    26,   471,    -1,   112,   473,    -1,   124,
     474,    -1,   158,   487,    -1,   206,   485,    -1,   219,   486,
      -1,     5,    14,     5,   375,    -1,     5,    15,     5,   375,
      -1,     5,    61,     5,   375,    -1,     5,   189,   375,    -1,
       5,   190,   375,    -1,     5,   262,   373,     4,   375,    -1,
       5,   272,     4,   375,    -1,     5,   273,     4,   375,    -1,
       5,   303,     5,   375,    -1,   245,    87,   472,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   189,    -1,     5,   190,    -1,     5,   262,   373,
       4,    -1,     5,   272,     4,    -1,     5,   273,     4,    -1,
       5,   303,     5,    -1,     5,     5,   270,    -1,     5,    14,
       5,   375,    -1,     5,    15,     5,   375,    -1,     5,    61,
       5,   375,    -1,     5,   189,   374,   375,    -1,     5,     5,
     270,   374,   375,    -1,     5,   190,   374,   375,    -1,     5,
     262,   373,     4,   374,   375,    -1,     5,   277,   373,     4,
       4,   374,   375,    -1,     5,   272,     4,   375,    -1,     5,
     273,     4,   375,    -1,     5,   303,     5,   374,   375,    -1,
     269,   475,    -1,   117,    87,   476,    -1,   245,   156,   484,
      -1,   245,    87,   483,    -1,   191,   477,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   189,   374,    -1,     5,     5,   270,   374,    -1,     5,
     190,   374,    -1,     5,   262,   373,     4,   374,    -1,     5,
     277,   373,     4,     4,   374,    -1,     5,   272,     4,    -1,
       5,   273,     4,    -1,     5,   303,     5,   374,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   189,   374,    -1,     5,   190,   374,    -1,     5,
     262,   373,     4,   374,    -1,     5,   272,     4,    -1,     5,
     273,     4,    -1,     5,   303,     5,   374,    -1,   156,   161,
     478,    -1,   161,   479,    -1,   156,   480,    -1,   482,    -1,
     156,   338,   481,    -1,     5,    14,     5,   375,    -1,     5,
      15,     5,   375,    -1,     5,    61,     5,   375,    -1,     5,
     189,   374,   375,    -1,     5,   190,   374,   375,    -1,     5,
     262,   373,     4,   374,   375,    -1,     5,   272,     4,   375,
      -1,     5,   273,     4,   375,    -1,     5,   303,     5,   374,
     375,    -1,     5,    14,     5,   375,    -1,     5,    15,     5,
     375,    -1,     5,    61,     5,   375,    -1,     5,   189,   374,
     375,    -1,     5,     5,   270,   374,   375,    -1,     5,   190,
     374,   375,    -1,     5,   262,   373,     4,   374,   375,    -1,
       5,   277,   373,     4,     4,   374,   375,    -1,     5,   272,
       4,   375,    -1,     5,   273,     4,   375,    -1,     5,   303,
       5,   374,   375,    -1,   365,     5,    14,     5,   375,    -1,
     365,     5,    15,     5,   375,    -1,   365,     5,    61,     5,
     375,    -1,   365,     5,   189,   374,   375,    -1,   365,     5,
     190,   374,   375,    -1,   365,     5,   262,   373,     4,   374,
     375,    -1,   365,     5,   272,     4,   375,    -1,   365,     5,
     273,     4,   375,    -1,   365,     5,   303,     5,   374,   375,
      -1,     5,    14,     5,   375,    -1,     5,    15,     5,   375,
      -1,     5,    61,     5,   375,    -1,     5,   189,   374,   375,
      -1,     5,   190,   374,   375,    -1,     5,   262,   373,     4,
     374,   375,    -1,     5,   272,     4,   375,    -1,     5,   273,
       4,   375,    -1,     5,   303,     5,   374,   375,    -1,   365,
       5,    14,     5,   375,    -1,   365,     5,    15,     5,   375,
      -1,   365,     5,    61,     5,   375,    -1,   365,     5,   189,
     374,   375,    -1,   365,     5,     5,   270,   374,   375,    -1,
     365,     5,   190,   374,   375,    -1,   365,     5,   262,   373,
       4,   374,   375,    -1,   365,     5,   277,   373,     4,     4,
     374,   375,    -1,   365,     5,   272,     4,   375,    -1,   365,
       5,   273,     4,   375,    -1,   365,     5,   303,     5,   374,
     375,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,   374,    -1,     5,     5,
     270,   374,    -1,     5,   190,   374,    -1,     5,   262,   373,
       4,   374,    -1,     5,   277,   373,     4,     4,   374,    -1,
       5,   272,     4,    -1,     5,   273,     4,    -1,     5,   303,
       5,   374,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   189,   374,    -1,     5,
     190,   374,    -1,     5,   262,   373,     4,   374,    -1,     5,
     272,     4,    -1,     5,   273,     4,    -1,     5,   303,     5,
     374,    -1,     5,    14,     5,   375,    -1,     5,    61,     5,
     375,    -1,     5,   189,   375,    -1,     5,   262,   373,     4,
     375,    -1,     5,   272,     4,   375,    -1,     5,   303,     5,
     375,    -1,     5,     5,    -1,   269,     5,     5,    -1,    93,
       4,     4,     4,     4,     4,    -1,   186,     4,     4,     4,
       4,     4,    -1,   111,    -1,   230,    -1,   356,    -1,   139,
     356,    -1,    88,   356,    -1,    66,     5,    -1,     5,     4,
       4,    -1,   300,   354,   354,    -1,   347,   354,    -1,     5,
       5,   365,   370,     5,     5,   365,   370,   354,   365,   372,
       5,    -1,    60,   494,    -1,    66,     5,    -1,    80,    -1,
      73,   499,     5,    -1,    73,   499,   303,     5,    -1,    75,
      99,    -1,    -1,    83,   492,   495,    -1,    89,    -1,    99,
      -1,    99,    17,    -1,   105,   498,    -1,   114,     4,    -1,
     129,     5,    -1,   149,    17,    -1,   149,   211,   354,   354,
      -1,   149,   292,   354,   354,    -1,     4,    20,   378,   356,
      -1,     4,    21,   359,    -1,     4,    21,   359,   366,    -1,
       4,    21,   359,   364,   370,    -1,     4,    22,   238,   354,
     354,     4,   364,   372,    -1,     4,    22,   238,     5,   364,
     372,    -1,     4,    48,   121,   356,    -1,     4,    49,   238,
     354,   354,   354,     4,   364,   372,    -1,     4,    49,   238,
       5,   364,   372,    -1,     4,    48,   238,   354,   354,   364,
     372,    -1,     4,    52,   105,   359,   359,     4,   354,   354,
     354,     4,    -1,     4,    52,   105,   359,   359,     4,   354,
     354,   354,     4,   366,    -1,     4,    52,   105,   359,   359,
       4,   354,   354,   354,     4,   364,   370,    -1,     4,    52,
     105,     5,     5,   364,   370,   364,   372,    -1,     4,    55,
     493,     5,     5,    -1,     4,    62,   121,   356,    -1,     4,
      62,   238,   354,   364,   372,    -1,     4,    66,     5,    -1,
       4,    74,    27,   356,   356,    -1,     4,    74,   166,     5,
       5,    -1,     4,    74,   238,   354,   364,   372,    -1,     4,
      74,   281,   364,   370,    -1,     4,    75,   138,   356,    -1,
       4,    82,   105,   359,   359,     4,   354,   354,     4,    -1,
       4,    82,   105,   359,   359,     4,   354,   354,     4,   366,
      -1,     4,    82,   105,   359,   359,     4,   354,   354,     4,
     364,   370,    -1,     4,    82,   105,     5,     5,   364,   370,
     364,   372,    -1,     4,    83,    22,   238,   354,   354,    -1,
       4,    83,    49,   238,   354,   354,    -1,     4,    83,    52,
      21,   354,   354,    -1,     4,    83,    52,   238,   354,   354,
      -1,     4,    83,   110,   238,   354,   354,    -1,     4,    83,
     113,    21,   354,   354,    -1,     4,    83,   113,   238,   354,
     354,    -1,     4,    83,    82,    21,   354,   354,    -1,     4,
      83,    82,   238,   354,   354,    -1,     4,    83,   226,   307,
       4,   354,   354,    -1,     4,    83,   257,   307,     4,   354,
     354,    -1,     4,    99,    -1,     4,    99,    22,     4,    -1,
       4,    99,    49,     4,    -1,     4,    99,    52,     4,    -1,
       4,    99,   110,     4,    -1,     4,    99,    55,   493,     5,
      -1,     4,    99,   113,     4,    -1,     4,    99,    82,     4,
      -1,     4,    99,   226,   307,     4,    -1,     4,    99,   257,
     307,     4,    -1,     4,    99,   283,    -1,     4,    99,   283,
       5,    -1,     4,    99,   283,     4,    -1,     4,   105,    40,
       4,    -1,     4,   109,   121,   356,    -1,     4,   109,   238,
     354,   354,   364,   372,    -1,     4,   110,   238,   354,   354,
     354,     4,   364,   372,    -1,     4,   110,   238,     5,   364,
     372,    -1,     4,   113,   105,   359,   359,     4,   354,   354,
     354,     4,    -1,     4,   113,   105,   359,   359,     4,   354,
     354,   354,     4,   366,    -1,     4,   113,   105,   359,   359,
       4,   354,   354,   354,     4,   364,   370,    -1,     4,   113,
     105,     5,     5,   364,   370,   364,   372,    -1,     4,   129,
       5,    -1,     4,   149,    -1,     4,   149,   211,    -1,     4,
     171,    27,   356,   356,    -1,     4,   171,   224,   364,   370,
     363,   363,    -1,     4,   194,   354,   354,    -1,     4,   194,
     132,    -1,     4,   194,    36,    -1,     4,   194,   291,   364,
     370,   363,    -1,     4,   226,   243,   354,   354,   364,   372,
      -1,     4,   257,   243,   354,   354,   364,   372,    -1,     4,
     224,   261,   376,    -1,     4,   224,   268,     4,    -1,     4,
     226,   121,   356,    -1,     4,   232,   364,   370,   363,   363,
     354,   364,   372,    -1,     4,   233,   512,   356,    -1,     4,
     247,    40,    -1,     4,   248,   130,     5,    -1,     4,   248,
     224,   364,   370,   363,   363,    -1,     4,   248,   281,   364,
     370,   364,   372,    -1,     4,   258,    -1,     4,   258,   211,
      -1,     4,   283,     5,    -1,     4,   285,     5,    -1,     4,
     285,   247,   356,    -1,     4,   297,    -1,     4,   299,    -1,
       4,   305,    27,   356,    -1,     4,   305,   224,   364,   370,
     363,   364,   372,   354,   359,    -1,     4,   339,     4,    -1,
     164,    -1,   164,   354,   354,    -1,   173,   507,    -1,   174,
     508,    -1,   194,   509,    -1,   231,   356,    -1,   233,   512,
     356,    -1,   233,   512,   356,   354,   354,    -1,   247,    40,
     354,   354,    -1,   247,   193,   354,   354,     4,    -1,   247,
     111,    -1,   252,     5,   499,   364,   370,   371,   356,    -1,
     252,   284,     5,    -1,   258,   516,    -1,   265,   517,    -1,
       5,    66,     5,    -1,     5,    80,    -1,     5,    99,    -1,
       5,    89,    -1,     5,   129,     5,    -1,     5,   149,    -1,
       5,   149,   211,    -1,     5,   194,   354,   354,    -1,     5,
     194,   132,    -1,     5,   194,    36,    -1,     5,   194,   291,
     364,   370,   363,    -1,     5,   233,   512,   356,    -1,     5,
     258,    -1,     5,   258,   211,    -1,     5,   297,    -1,     5,
     299,    -1,   283,   105,     5,     5,    -1,   283,    99,     5,
      -1,   283,    99,    17,    -1,   283,     5,    -1,   283,   300,
       5,    -1,   217,    -1,   217,   364,    -1,   296,    -1,   297,
      17,    -1,   299,    17,    -1,   339,     4,    -1,   258,    -1,
     299,    -1,   149,    -1,   297,    -1,    40,   194,    -1,   194,
      -1,   111,   194,    -1,    40,   105,    -1,   105,    -1,   111,
     105,    -1,    40,   247,    -1,   247,    -1,   111,   247,    -1,
      99,    -1,   285,    -1,    66,    -1,   339,    -1,   233,    -1,
     129,    -1,   164,    -1,   300,    -1,    -1,     4,    -1,    30,
     356,    -1,   238,   354,    -1,   160,     4,    -1,   212,     4,
     354,    -1,    62,   354,   354,   354,   513,    -1,   109,   354,
     354,   354,   354,   358,   513,    -1,    48,   354,   354,   354,
     354,   358,   513,    -1,   226,   354,   354,   354,   354,   513,
      -1,   257,   354,   354,   354,   354,   513,    -1,   171,   354,
     354,   354,   354,   513,    -1,   305,   354,   354,   354,   354,
     513,    -1,   285,   354,   354,   358,   513,    -1,    62,   224,
     354,   354,   377,   513,    -1,    48,   224,   354,   354,   377,
     513,    -1,   102,   224,   354,   354,   377,   513,    -1,    85,
     224,   354,   354,   377,   513,    -1,   350,   224,   354,   354,
     377,   513,    -1,    27,   224,   354,   354,   377,   513,    -1,
      51,   224,   354,   354,   377,   513,    -1,   248,   354,   354,
     354,   354,   364,   370,   364,   372,     5,   513,    -1,    74,
     354,   354,   354,   364,   370,   513,    -1,   232,   354,   354,
     354,   354,   354,   513,    -1,    22,   354,   354,   354,   354,
       4,   513,    -1,   110,   354,   354,   354,   354,   354,     4,
     358,   513,    -1,    49,   354,   354,   354,   354,   354,     4,
     358,   513,    -1,    82,   354,   354,   359,   359,     4,   354,
     354,     4,   513,    -1,   113,   354,   354,   359,   359,     4,
     354,   354,   354,     4,   358,   513,    -1,    52,   354,   354,
     359,   359,     4,   354,   354,   354,     4,   358,   513,    -1,
      75,   513,    -1,   284,   496,    -1,     5,   354,   354,    -1,
     303,     5,   354,   354,    -1,   354,   354,   303,     5,    -1,
       5,   364,   370,   363,    -1,     4,     4,    -1,    40,   354,
     354,     4,    -1,   193,   354,   354,     4,    -1,   111,    -1,
     104,    -1,   341,    -1,    63,    -1,   251,    -1,   250,    -1,
     235,    -1,   342,    -1,    60,   501,    -1,    66,    -1,   129,
      -1,   114,    -1,   143,   354,   354,    -1,   154,   354,   354,
      -1,     4,    20,    82,     5,     5,     5,   364,     4,    -1,
       4,    20,   151,     5,     5,     4,    -1,     4,    20,   222,
       5,     5,     5,     5,   364,   370,   379,    -1,     4,    20,
     223,     5,     5,   364,   370,   379,    -1,     4,    20,   237,
       5,     5,     5,   364,    -1,     4,    20,   278,   364,   370,
      -1,   154,    17,    -1,     4,    21,    -1,     4,    21,   366,
      -1,     4,    21,   364,   370,    -1,     4,    22,   238,   364,
     372,    -1,     4,    48,   121,    -1,     4,    49,   238,   364,
     372,    -1,     4,    48,   238,   364,   372,    -1,     4,    52,
      21,    -1,     4,    52,    21,   366,    -1,     4,    52,    21,
     364,   370,    -1,     4,    52,   238,   364,   372,    -1,     4,
      59,   364,   370,   371,    -1,     4,    62,   121,    -1,     4,
      62,   238,   364,   372,    -1,     4,    66,    -1,     4,    74,
      27,    -1,     4,    74,   166,    -1,     4,    74,   238,   364,
     372,    -1,     4,    74,   281,    -1,     4,    75,   138,    -1,
       4,    82,    21,    -1,     4,    82,    21,   366,    -1,     4,
      82,    21,   364,   370,    -1,     4,    82,   238,   364,   372,
      -1,     4,   109,   121,    -1,     4,   109,   238,   364,   372,
      -1,     4,   110,   238,   364,   372,    -1,     4,   113,    21,
      -1,     4,   113,    21,   366,    -1,     4,   113,    21,   364,
     370,    -1,     4,   113,   238,   364,   372,    -1,     4,   129,
      -1,     4,   149,    -1,     4,   171,    27,    -1,     4,   171,
     167,   364,   372,    -1,     4,   171,   224,   364,   370,   371,
      -1,     4,   180,   167,   354,   364,   372,    -1,     4,   226,
     121,    -1,     4,   224,   261,    -1,     4,   224,   268,    -1,
       4,   232,   224,   364,   370,   371,    -1,     4,   232,   167,
     364,   372,    -1,     4,   232,   289,   364,   372,    -1,     4,
     233,    -1,     4,   233,   512,    -1,     4,   248,   130,    -1,
       4,   248,   167,   364,   372,    -1,     4,   248,   224,   364,
     370,   371,    -1,     4,   248,   281,    -1,     4,   258,    -1,
       4,   283,    -1,     4,   283,     4,    -1,     4,   285,    -1,
       4,   285,   247,    -1,     4,   295,    -1,     4,   305,    27,
      -1,     4,   305,   167,   364,   372,    -1,     4,   305,   224,
     364,   370,   371,    -1,     4,   339,    -1,   149,   502,    -1,
     149,   207,    -1,   207,    -1,   226,   257,   354,   354,    -1,
     257,   257,   354,   354,    -1,   231,    -1,   233,   512,    -1,
     258,   503,    -1,   258,   207,    -1,   265,   504,    -1,     5,
      66,    -1,     5,   129,    -1,     5,   154,    -1,     5,   233,
     512,    -1,     5,   283,    -1,     5,   283,   207,    -1,   283,
      17,    -1,   283,    98,   195,    -1,   339,    -1,    30,    -1,
     238,    -1,   160,    -1,   212,    -1,    -1,   354,   354,    -1,
      -1,   354,   354,    -1,    -1,   285,    -1,    -1,    -1,   225,
      -1,   240,    -1,   301,    -1,    57,    -1,   499,   364,   370,
     371,   356,   514,   520,    -1,   258,   499,   364,   370,   371,
     356,   514,   520,    -1,   499,     5,    -1,   499,     5,   364,
     370,    -1,   499,     4,    -1,   499,     4,   364,   370,    -1,
     124,     5,     5,   497,     4,     5,    -1,   354,   354,    -1,
     132,    -1,    36,    -1,    40,   354,   354,    -1,   193,   354,
     354,    -1,   111,    -1,   291,   364,   370,   363,    -1,   510,
     511,    -1,   511,    -1,   512,   351,   356,    -1,    66,   351,
       5,    -1,    92,   351,     4,     4,    -1,   339,   351,     4,
      -1,   129,   351,     5,    -1,   285,   351,     5,    -1,   523,
      -1,   524,    -1,   202,    -1,   258,    -1,   149,    -1,    91,
      -1,   126,    -1,   105,    -1,   194,    -1,   247,    -1,    99,
      -1,   157,    -1,   274,    -1,   505,    -1,   505,   510,    -1,
      -1,    -1,   515,   518,    -1,    17,    -1,   211,   354,   354,
      -1,   292,    -1,   292,   354,   354,    -1,   356,    -1,   285,
     356,    -1,   518,   519,    -1,   519,    -1,   512,   351,   356,
      -1,    -1,    -1,   521,   522,    -1,   522,   523,    -1,   523,
      -1,   283,   351,     5,    -1,    55,   351,   493,     5,     5,
      -1,    64,    -1,    66,     5,    -1,   181,   367,    -1,   239,
     354,   354,    -1,   281,   364,    -1,   290,   354,    -1,   181,
       4,    -1,   350,    -1,   348,    -1,   342,    -1,   202,    -1,
     354,   354,   354,   354,    -1,   354,   354,    -1,   366,   354,
     354,    -1,   364,   370,   363,    -1,   291,   528,    -1,    39,
     354,   354,    -1,   193,   529,    -1,   231,   356,    -1,   354,
     354,    -1,   366,   354,   354,    -1,   364,   370,   363,    -1,
      40,   354,   354,    -1,   354,   354,    -1,   111,   354,   354,
      -1,   356,    -1,   310,   365,   370,    -1,     5,     4,     4,
      -1,   300,    -1,    70,   533,    -1,   168,     4,    -1,   244,
       4,    -1,   253,   354,    -1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,     4,     4,     4,     4,     4,
       4,    -1,    54,    -1,   140,    -1,   245,    -1,    90,    -1,
     149,   535,    -1,   258,   536,    -1,    40,   354,   354,    -1,
     193,   354,   354,    -1,   111,    -1,   263,   111,    -1,    40,
     354,   354,    -1,   193,   354,   354,    -1,   111,    -1,   263,
     111,    -1,   188,    -1,    13,    -1,   202,    -1,    34,    -1,
     107,    -1,    61,     5,    -1,   281,   364,    -1,   304,     4,
       4,     4,    -1,   354,    -1,   354,    97,    -1,   193,   541,
      -1,   291,   354,    -1,   291,   354,    97,    -1,    40,    -1,
     354,    -1,   111,    -1,    26,   543,    -1,   124,   545,    -1,
     206,   555,    -1,   112,   556,    -1,   219,     5,    -1,   120,
       5,   380,    -1,    61,     5,   380,    -1,   272,     4,   380,
      -1,   245,    87,   544,    -1,   120,     5,   380,    -1,    61,
       5,   380,    -1,   272,     4,   380,    -1,   546,    -1,   156,
     546,    -1,   282,   547,    -1,   269,   548,    -1,   117,    87,
     549,    -1,   191,   550,    -1,   245,   156,   552,    -1,   245,
      87,   553,    -1,   242,   554,    -1,   120,     5,    -1,    61,
       5,    -1,   272,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   272,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     272,     4,    -1,   120,     5,    -1,    61,     5,    -1,   272,
       4,    -1,   156,   551,    -1,   120,     5,     4,    -1,    61,
       5,     4,    -1,   272,     4,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   272,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   272,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   272,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     272,     4,    -1,   120,     5,   380,    -1,    61,     5,   380,
      -1,   272,     4,   380,    -1,   120,     5,     5,   380,    -1,
     558,     4,     4,   354,   354,   359,    -1,   558,     4,    -1,
      99,    -1,    50,    -1,   293,    -1,   136,    -1,   108,    -1,
      -1,     4,   354,   354,   354,   354,    -1,   205,    -1,   205,
       4,   354,   354,   354,   354,    -1,   124,   269,   560,    -1,
       4,    -1,   354,   364,   370,    -1,     4,     4,    -1,   354,
     354,    -1,   291,   354,   354,    -1,   365,   370,   371,    -1,
      16,   565,    -1,   243,     4,    -1,   241,   564,    -1,    23,
     563,    -1,     4,     4,    -1,     4,     5,    -1,   285,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   285,     4,
       5,    -1,     4,    -1,     4,   365,   370,    -1,     4,     6,
     365,   370,    -1,   230,    -1,   354,   354,    -1,   354,   354,
      12,   354,   354,    -1,   354,   354,    12,   366,   354,   354,
      -1,   354,   354,    12,   364,   370,   363,    -1,   291,   568,
      -1,   123,    -1,   123,   354,    -1,   354,   354,    -1,   354,
     354,    12,   354,   354,    -1,   354,   354,    12,   366,   354,
     354,    -1,   354,   354,    12,   364,   370,   363,    -1
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
    1238,  1241,  1242,  1243,  1244,  1245,  1246,  1249,  1252,  1253,
    1254,  1257,  1258,  1259,  1260,  1261,  1262,  1265,  1266,  1267,
    1268,  1269,  1270,  1271,  1274,  1275,  1278,  1279,  1282,  1283,
    1286,  1287,  1290,  1291,  1292,  1295,  1296,  1299,  1300,  1303,
    1306,  1314,  1315,  1318,  1319,  1320,  1321,  1322,  1323,  1324,
    1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,
    1337,  1340,  1341,  1344,  1345,  1346,  1347,  1350,  1351,  1352,
    1353,  1356,  1357,  1358,  1359,  1360,  1361,  1364,  1365,  1366,
    1367,  1368,  1369,  1371,  1372,  1377,  1378,  1381,  1383,  1385,
    1388,  1389,  1390,  1391,  1392,  1393,  1396,  1398,  1400,  1402,
    1403,  1405,  1407,  1409,  1411,  1413,  1416,  1417,  1418,  1419,
    1420,  1421,  1423,  1424,  1425,  1428,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1448,  1450,  1452,  1454,  1455,  1456,
    1457,  1458,  1461,  1462,  1463,  1464,  1465,  1466,  1467,  1469,
    1471,  1472,  1473,  1476,  1477,  1478,  1479,  1480,  1481,  1483,
    1484,  1485,  1488,  1489,  1490,  1491,  1492,  1495,  1498,  1501,
    1504,  1507,  1510,  1513,  1516,  1519,  1524,  1527,  1530,  1533,
    1536,  1539,  1542,  1545,  1548,  1551,  1554,  1559,  1562,  1565,
    1568,  1571,  1574,  1577,  1580,  1583,  1588,  1590,  1592,  1594,
    1596,  1598,  1603,  1605,  1607,  1611,  1614,  1617,  1620,  1623,
    1626,  1629,  1632,  1635,  1638,  1641,  1646,  1647,  1648,  1649,
    1650,  1651,  1652,  1654,  1656,  1657,  1658,  1661,  1662,  1663,
    1664,  1665,  1666,  1668,  1669,  1670,  1673,  1675,  1677,  1678,
    1680,  1682,  1686,  1687,  1690,  1691,  1692,  1695,  1702,  1703,
    1704,  1705,  1706,  1707,  1708,  1711,  1719,  1720,  1721,  1722,
    1724,  1726,  1727,  1727,  1728,  1729,  1730,  1731,  1732,  1733,
    1735,  1736,  1738,  1741,  1744,  1745,  1746,  1749,  1752,  1755,
    1756,  1760,  1763,  1766,  1769,  1773,  1778,  1783,  1785,  1786,
    1788,  1789,  1791,  1793,  1795,  1797,  1798,  1800,  1802,  1806,
    1811,  1813,  1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,
    1831,  1834,  1835,  1837,  1839,  1840,  1842,  1844,  1845,  1846,
    1848,  1850,  1851,  1852,  1854,  1855,  1856,  1859,  1863,  1866,
    1869,  1873,  1878,  1884,  1885,  1886,  1888,  1889,  1893,  1895,
    1896,  1897,  1900,  1903,  1906,  1908,  1910,  1911,  1916,  1919,
    1920,  1921,  1924,  1928,  1929,  1931,  1932,  1933,  1935,  1936,
    1938,  1939,  1944,  1946,  1947,  1949,  1950,  1951,  1952,  1953,
    1954,  1956,  1958,  1960,  1961,  1963,  1964,  1966,  1968,  1969,
    1970,  1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1980,
    1982,  1983,  1984,  1985,  1987,  1988,  1989,  1990,  1991,  1993,
    1994,  1995,  1996,  1997,  1998,  2001,  2002,  2003,  2004,  2005,
    2006,  2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2020,  2021,  2024,  2025,  2026,  2027,
    2028,  2029,  2037,  2044,  2053,  2062,  2069,  2076,  2084,  2092,
    2099,  2104,  2109,  2114,  2119,  2124,  2129,  2135,  2145,  2155,
    2165,  2172,  2182,  2192,  2201,  2213,  2226,  2231,  2234,  2236,
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
     446,   447,   447,   447,   447,   447,   447,   448,   449,   449,
     449,   450,   450,   450,   450,   450,   450,   451,   451,   451,
     451,   451,   451,   451,   452,   452,   453,   453,   454,   454,
     455,   455,   456,   456,   456,   457,   457,   458,   458,   459,
     459,   460,   460,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     462,   463,   463,   464,   464,   464,   464,   465,   465,   465,
     465,   466,   466,   466,   466,   466,   466,   467,   467,   467,
     467,   467,   467,   467,   467,   468,   468,   469,   469,   469,
     470,   470,   470,   470,   470,   470,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   477,   477,   477,   477,   477,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   479,   479,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   480,   480,   480,
     480,   480,   480,   480,   480,   480,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   483,   483,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   485,   485,   485,   485,
     485,   485,   486,   486,   487,   487,   487,   488,   489,   489,
     489,   489,   489,   489,   489,   490,   491,   491,   491,   491,
     491,   491,   492,   491,   491,   491,   491,   491,   491,   491,
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
     491,   491,   491,   491,   491,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   494,   494,   494,   494,
     494,   494,   495,   495,   495,   495,   495,   495,   495,   495,
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
       1,     1,     1,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     2,     2,     0,     1,     2,     1,     6,
       5,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     1,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     2,     3,     1,     2,
       2,     4,     6,     1,    10,     1,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       3,     5,     4,     4,     4,     3,     3,     3,     3,     2,
       2,     4,     3,     3,     3,     3,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     2,     3,     3,
       3,     2,     3,     3,     3,     3,     4,     3,     5,     6,
       3,     3,     4,     3,     3,     3,     3,     3,     5,     3,
       3,     4,     3,     2,     2,     1,     3,     4,     4,     4,
       4,     4,     6,     4,     4,     5,     4,     4,     4,     4,
       5,     4,     6,     7,     4,     4,     5,     5,     5,     5,
       5,     5,     7,     5,     5,     6,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     5,     5,     5,     5,     6,
       5,     7,     8,     5,     5,     6,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     4,     4,     3,     5,
       4,     4,     2,     3,     6,     6,     1,     1,     1,     2,
       2,     2,     3,     3,     2,    12,     2,     2,     1,     3,
       4,     2,     0,     3,     1,     1,     2,     2,     2,     2,
       2,     4,     4,     4,     3,     4,     5,     8,     6,     4,
       9,     6,     7,    10,    11,    12,     9,     5,     4,     6,
       3,     5,     5,     6,     5,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     2,     3,     5,     7,     4,     3,
       3,     6,     7,     7,     4,     4,     4,     9,     4,     3,
       4,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,    10,     3,     1,     3,     2,     2,     2,     2,     3,
       5,     4,     5,     2,     7,     3,     2,     2,     3,     2,
       2,     2,     3,     2,     3,     4,     3,     3,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    11,     7,     7,
       7,     9,     9,    10,    12,    12,     2,     2,     3,     4,
       4,     4,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     8,
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
       0,     0,   502,   365,    18,     0,   508,    19,   513,     0,
     531,   516,   517,   518,   519,   533,   521,   522,   526,   523,
       0,   525,   527,     0,     0,    20,    22,     0,   548,     0,
       0,     0,   553,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   707,    26,     0,     0,     0,     0,     0,
       0,   708,    27,     0,    28,  1039,  1036,  1037,  1038,     0,
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
       0,   346,   431,   432,     0,   347,   348,     0,   471,   476,
     472,   473,   474,   475,   351,   352,   477,   354,     0,   478,
     479,   480,   356,   486,   481,   482,   484,   358,   492,   494,
     496,   498,   491,   493,   500,   360,     0,     0,   505,     0,
     364,   148,   507,     0,   514,   532,   515,   534,   535,   536,
     520,   537,   539,   538,   540,   524,   528,   545,     0,     0,
       0,     0,   541,   529,     0,     0,   550,   549,     0,     0,
       0,     0,    24,     0,     0,   560,     0,   561,     0,     0,
       0,     0,     0,   562,     0,   706,     0,   563,     0,   564,
       0,     0,   565,     0,   711,   710,   709,     0,   714,     0,
       0,     0,   886,     0,     0,     0,   718,   722,   724,   725,
       0,     0,     0,     0,   823,     0,     0,     0,   859,     0,
       0,     0,     0,     0,     0,     0,   861,     0,     0,     0,
      29,  1097,  1102,   132,   133,   131,   134,   130,  1098,     0,
    1100,  1101,    31,     0,     0,     0,     0,  1113,  1114,     0,
     148,     0,  1111,  1108,     0,     0,     0,   148,  1131,  1134,
    1132,  1133,  1125,  1126,  1127,  1128,     0,     0,     0,    39,
    1150,  1151,     0,  1158,  1160,  1159,  1155,  1156,  1154,     0,
       0,     0,     0,  1161,     0,  1164,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1162,  1173,     0,     0,
       0,  1163,  1165,  1215,  1148,  1149,  1147,   202,     0,   206,
     198,     0,   208,   199,     0,   210,   200,  1146,  1145,   201,
     203,   205,     0,     0,   197,     0,     0,     0,     0,  1229,
    1242,  1232,     0,     0,  1235,     0,     0,  1234,  1233,   156,
    1251,     0,  1250,  1246,   223,   219,     0,   228,     0,   225,
       0,   244,   143,   146,   147,   145,   144,   259,   260,   261,
     249,   248,   263,   265,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   148,     0,   306,    93,    90,    91,
      92,   148,   308,   307,     0,     0,     0,     0,     0,     0,
       0,   321,     0,   317,   315,   314,   326,   369,     0,     0,
     372,   387,   388,   383,   384,   389,   391,   390,   385,   294,
     295,   380,   379,   395,   394,     0,   399,   413,   414,   403,
     416,   409,   407,   402,     0,     0,   148,   148,   156,   156,
     156,   148,     0,     0,   148,   443,   454,     0,   445,    77,
     456,     0,     0,   447,   449,   148,     0,     0,   452,     0,
       0,     0,   437,     0,     0,     0,     0,   934,   936,   935,
       0,  1028,     0,  1007,     0,  1010,     0,     0,  1030,  1032,
       0,  1023,   350,     0,   483,   485,   495,   488,   497,   489,
     499,   490,   501,   487,     0,     0,   506,   503,   504,   156,
     530,   542,   543,   544,   546,     0,   559,   547,     0,     0,
       0,     0,     0,     0,   169,   169,   163,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   166,   166,   163,     0,
       0,   163,     0,     0,     0,     0,     0,   601,   625,     0,
       0,     0,   597,     0,     0,     0,     0,   169,   163,     0,
       0,   702,     0,   712,   713,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   771,
       0,     0,     0,     0,     0,   794,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   813,     0,     0,   818,   819,
       0,     0,     0,   839,   841,   840,     0,   843,     0,     0,
     850,   852,   853,   887,     0,     0,     0,     0,   716,   717,
     928,   926,   931,   930,   929,   927,   932,     0,   721,     0,
     726,     0,   925,     0,   727,   728,   729,   730,     0,     0,
       0,     0,     0,   825,     0,     0,   826,  1049,     0,  1052,
    1048,     0,     0,     0,   827,   860,   828,  1067,  1072,  1069,
    1068,  1066,  1073,  1070,  1064,  1071,  1065,  1074,     0,     0,
     833,     0,     0,     0,  1080,     0,  1082,   836,     0,  1084,
     837,   857,     0,     0,     0,   862,   863,   864,  1099,  1112,
       0,     0,  1119,  1115,     0,     0,     0,  1110,  1109,  1123,
    1122,     0,     0,  1139,     0,     0,  1135,     0,  1143,     0,
       0,  1136,     0,  1157,   191,   191,     0,   191,     0,  1183,
       0,  1182,  1174,     0,     0,     0,     0,  1178,     0,     0,
       0,  1181,     0,     0,     0,     0,     0,  1176,  1184,     0,
       0,     0,  1175,   191,   191,   191,     0,   207,   209,   211,
       0,   212,     0,    55,     0,  1225,     0,  1230,     0,   148,
    1236,  1237,     0,  1239,  1240,     0,   157,   158,  1231,  1252,
    1253,     0,   215,     0,   229,     0,     0,     0,     0,   262,
       0,     0,     0,     0,     0,     0,     0,     0,   300,   148,
       0,     0,     0,     0,   148,     0,   320,     0,   319,   376,
     375,     0,     0,     0,   148,     0,   156,   421,   419,   423,
     427,     0,     0,     0,   156,     0,    81,    80,   461,   446,
       0,   457,   459,   159,     0,     0,   344,     0,     0,    55,
       0,   436,     0,     0,   946,     0,     0,     0,     0,     0,
       0,   960,     0,     0,     0,     0,     0,     0,   977,   978,
       0,     0,     0,     0,     0,   989,     0,   995,   996,   998,
    1000,     0,  1004,  1015,  1016,  1017,     0,  1019,  1024,  1026,
    1027,  1025,   933,     0,  1006,     0,  1005,   945,     0,     0,
    1011,     0,  1013,     0,  1012,  1033,  1014,  1021,     0,     0,
     362,     0,     0,   557,   558,     0,   555,   551,     0,   169,
     169,   169,   170,   171,   569,   570,   165,   164,     0,   169,
     169,   169,     0,   575,   585,   166,   169,   169,   169,   167,
     168,   169,   169,     0,   169,   169,     0,   166,     0,   598,
       0,     0,     0,   624,     0,   623,     0,     0,   600,     0,
     599,     0,     0,     0,     0,   166,   166,   163,     0,     0,
     163,     0,     0,     0,   169,   169,   698,     0,   169,   169,
     703,     0,   182,   183,   184,   185,   186,   187,     0,    85,
      86,    84,   734,     0,     0,     0,     0,     0,     0,   880,
     878,   873,     0,   883,   867,   884,   870,   882,   876,   865,
     879,   868,   866,   885,   881,     0,     0,     0,   750,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   781,     0,     0,     0,     0,     0,   793,   795,
       0,     0,   800,   799,     0,     0,   172,     0,     0,     0,
     148,     0,   809,     0,     0,     0,     0,   814,   815,   816,
       0,     0,     0,   822,   838,   842,   844,   847,   846,     0,
       0,     0,   851,   888,   890,     0,   889,   719,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1034,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   723,     0,     0,     0,     0,   824,     0,
     148,     0,  1044,  1042,     0,     0,   148,  1047,   829,     0,
       0,     0,   835,     0,     0,  1085,   855,   856,     0,   858,
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
    1022,     0,     0,   511,   512,     0,     0,   556,     0,   566,
     567,   568,   169,   572,   573,   574,     0,     0,     0,   579,
     580,   163,     0,     0,     0,   169,   586,   587,   588,   589,
     591,   166,   594,   595,     0,   169,     0,     0,     0,   166,
     166,   163,     0,     0,     0,     0,   622,     0,   626,     0,
       0,     0,     0,     0,   166,   166,   163,     0,     0,   163,
       0,     0,     0,     0,     0,   166,   166,   163,     0,     0,
     163,     0,     0,     0,     0,     0,   166,   166,   163,     0,
       0,   163,     0,     0,     0,     0,   166,   166,   163,     0,
       0,     0,   166,   602,   603,   604,   605,   607,     0,   610,
     611,     0,   166,     0,     0,   696,   697,   169,   700,   701,
       0,   733,   148,   735,     0,     0,   739,     0,     0,     0,
       0,     0,   872,   869,   875,   874,   871,   877,     0,   748,
       0,     0,     0,     0,   148,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   772,
     773,   774,     0,   778,   775,   777,     0,     0,   783,   782,
     784,   785,     0,     0,     0,     0,     0,     0,   148,   148,
     798,   178,   174,   179,   173,   176,   175,   177,   804,   805,
     806,     0,     0,   808,   810,   148,   148,     0,   817,   820,
     148,   148,   845,   849,   891,   720,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1075,   916,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   917,     0,     0,     0,     0,     0,   731,   732,
     148,   156,     0,   148,   148,  1050,  1051,     0,     0,   831,
       0,   148,  1081,  1083,   854,     0,  1137,  1138,  1141,  1142,
     191,   191,   191,  1213,  1192,  1191,  1193,  1196,  1195,  1199,
    1198,  1200,  1197,  1205,  1204,  1206,  1202,  1201,  1203,     0,
       0,  1222,  1227,     0,  1244,     0,   148,     0,  1247,     0,
       0,   230,     0,   227,     0,     0,     0,   266,     0,     0,
       0,     0,   148,     0,   303,   136,     0,   396,     0,   417,
     156,   159,     0,     0,   430,     0,   148,   465,   148,     0,
     434,     0,     0,     0,     0,     0,   148,   948,   159,   159,
     159,   148,   954,   159,   156,   159,   159,   148,   967,   159,
     159,   159,   148,   974,   159,   159,   148,     0,   159,   148,
     159,   159,   148,   159,   148,  1008,  1009,     0,     0,   510,
     552,     0,   571,   576,   577,   578,     0,   582,   583,   584,
     590,   169,   166,   596,   613,   614,   615,   616,   617,     0,
     619,   620,   166,     0,     0,     0,   166,   166,   163,     0,
       0,     0,     0,     0,     0,   166,   166,   163,     0,     0,
       0,     0,     0,     0,   166,   166,   163,     0,     0,     0,
     166,   169,   169,   169,   169,   169,     0,   169,   169,     0,
     166,   166,   169,   169,   169,   169,   169,     0,   169,   169,
       0,   166,   166,   676,   677,   678,   679,   681,     0,   684,
     685,     0,   166,   687,   688,   689,   690,   691,     0,   693,
     694,   166,   606,   166,     0,   612,     0,     0,   699,     0,
     736,   159,     0,     0,   159,     0,     0,     0,   747,   159,
     751,   752,   159,   754,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   776,   779,   780,
       0,   159,     0,     0,     0,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1076,  1055,     0,  1062,  1063,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
       0,     0,    82,     0,     0,   923,   924,   156,     0,     0,
       0,  1045,  1043,  1053,   830,   832,   156,  1130,  1171,  1170,
    1172,  1214,     0,  1224,  1254,     0,     0,  1249,  1248,   231,
       0,     0,     0,   271,     0,     0,     0,   289,   159,   397,
     401,   418,   420,     0,   428,   462,   466,   467,     0,     0,
       0,     0,     0,     0,   944,   949,   952,   951,   955,   956,
     957,   959,   963,   968,   969,   971,   972,   975,   976,   980,
     156,   159,   987,   156,   988,   992,   156,  1002,   156,     0,
       0,   509,     0,   581,   592,   169,   166,   621,   169,   169,
     169,   169,   169,     0,   169,   169,   166,   169,   169,   169,
     169,   169,     0,   169,   169,   166,   169,   169,   169,   169,
     169,     0,   169,   169,   166,   169,   636,   637,   638,   639,
     641,   166,   644,   645,     0,   169,   169,   665,   666,   667,
     668,   670,   166,   673,   674,     0,   169,   680,   166,     0,
     686,   166,   695,   608,   166,   704,   705,   148,   738,     0,
     159,   741,     0,   148,     0,   749,   753,   148,     0,   760,
     761,   762,   763,   767,   768,   764,   765,   766,     0,     0,
     159,   788,     0,   148,     0,     0,   801,   159,     0,     0,
     159,   159,     0,   848,     0,   180,   180,     0,     0,   180,
       0,   180,  1034,     0,     0,     0,     0,     0,     0,     0,
       0,  1054,     0,     0,   180,   180,     0,     0,     0,     0,
       0,     0,     0,     0,   918,     0,     0,     0,  1034,    83,
       0,   180,     0,  1078,   922,     0,     0,     0,   213,  1256,
    1255,     0,     0,   235,     0,     0,     0,     0,   304,   429,
     323,     0,   940,     0,   148,     0,   981,   982,   986,   993,
    1003,   355,   323,     0,   593,   618,   627,   628,   629,   630,
     631,   166,   633,   634,   169,   656,   657,   658,   659,   660,
     166,   662,   663,   169,   647,   648,   649,   650,   651,   166,
     653,   654,   169,   640,   169,   166,   646,   669,   169,   166,
     675,   682,   166,   692,   609,     0,   159,   742,     0,     0,
       0,     0,     0,   769,   770,   786,     0,     0,     0,   797,
     802,     0,   811,   812,   803,   159,     0,   181,  1034,  1034,
      82,     0,  1034,     0,  1034,   892,   148,     0,  1057,     0,
    1060,  1094,  1061,  1059,  1056,     0,  1034,  1034,    82,     0,
       0,  1034,  1034,     0,     0,  1034,   921,   919,   920,   899,
    1034,  1034,  1078,  1089,     0,  1046,   834,     0,     0,     0,
     237,     0,     0,     0,   324,   325,   345,     0,     0,   188,
     943,   363,     0,   169,   635,   169,   664,   169,   655,   642,
     169,   671,   169,   683,     0,   737,   159,   159,     0,   159,
       0,   159,   159,     0,   159,     0,  1034,   905,   901,  1034,
       0,   906,     0,   900,  1034,     0,  1058,     0,   903,   902,
    1034,     0,     0,   897,   895,  1034,   148,   896,   898,   904,
    1089,  1040,     0,     0,  1079,  1087,  1129,     0,     0,     0,
     267,   290,   293,   291,     0,     0,   939,   148,   189,   190,
     942,   554,   632,   661,   652,   643,   672,   159,   740,   746,
       0,   759,   756,   787,   792,     0,   807,     0,   910,   894,
      82,     0,   908,  1095,     0,   893,    82,     0,   909,     0,
    1041,  1091,  1093,     0,  1086,     0,     0,   272,     0,     0,
       0,     0,   188,     0,   743,   148,   757,   789,   821,  1034,
       0,     0,  1034,     0,   159,  1092,  1088,   236,     0,     0,
       0,     0,     0,   941,   715,   148,   744,   758,   148,   790,
     912,     0,  1034,   911,     0,     0,   238,   283,     0,   282,
       0,   745,   791,    82,   913,    82,  1034,   281,   280,  1034,
    1034,   907,   915,   914
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1391,   172,   152,  1238,  2468,  2469,   422,   423,
     424,   425,   153,   154,   155,   678,    91,   797,   445,  1188,
    1655,  1328,  1341,  1324,  1898,  2568,  1388,  2690,  1558,   336,
     750,   753,   756,   764,    63,   359,   365,   369,   372,    68,
     375,    75,   390,   386,   380,   397,    82,   402,    92,    98,
     407,   409,   411,   479,   851,  1624,   413,   416,   105,   432,
     156,   158,  2616,   174,   214,   468,   840,   470,   480,   843,
     848,   482,   484,   854,   487,   856,   498,   859,   861,   501,
     505,   509,   511,   514,   518,   545,   541,  1251,   532,   878,
     883,   875,  1239,   888,   535,   554,   557,   562,   567,   575,
     917,   919,   921,   923,   580,   927,   217,   582,  1725,   235,
     584,   586,   590,   595,   603,   244,  1317,   606,   252,   615,
    1333,   617,   623,   972,  1349,   967,  1766,  1355,  1353,  1768,
     968,  1358,  1360,   629,   632,   627,   254,   262,   264,   670,
    1049,  1415,  1038,  1513,  1942,  2260,  1054,  1047,   912,  1292,
    1296,  1304,  1306,  1926,   269,  1063,  1066,  1074,  2232,  2233,
    2234,  1927,  2603,  2604,  1097,  1100,  2674,  2675,  2671,  2672,
    2721,  2235,  2236,   276,   282,   290,   692,   687,   295,   300,
     302,   702,   709,  1126,  1131,   759,   747,   308,   312,   716,
     318,   723,  1563,   736,   737,  1162,  1157,  1569,  1147,  1575,
    1587,  1583,  1151,   741,   725,   324,   325,   340,  1175,   343,
     349,   774,   777,   771,   351,   354,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2538
static const yytype_int16 yypact[] =
{
    4893,    95,    31,    50, -2538, -2538,  1182,  -167,   452,  1133,
    1224,   126,  3445,   107,   172,   784,    39,  5121,   385,  3130,
   -2538,   172,  1250,   148,  1112,   -30,    15,   435,   -35,   655,
     412,   923,  2780,    26,   710,   491,   438,   -35, -2538,    89,
      22,  1032, -2538,   381,   525,   735, -2538,   590, -2538,    54,
    3624,   320,    62,   581,   547,   568,   299,   609,   587,   103,
     643,   -17,   135, -2538, -2538, -2538,   599,  1043, -2538,    28,
       2,   172,   363,    73,   449, -2538,   668,  1043, -2538, -2538,
      40,  1043, -2538, -2538, -2538, -2538,  1043, -2538, -2538, -2538,
   -2538, -2538, -2538,   173,   644,   673,   690,   143, -2538,  1043,
    1421,  1043,  1043,   938,  1043, -2538, -2538, -2538,   508, -2538,
   -2538, -2538, -2538,  4516, -2538, -2538, -2538, -2538, -2538, -2538,
    1043, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538,  1435, -2538,  1043, -2538,   729, -2538, -2538,
     172,   172,   172,   172,   172,   172, -2538, -2538,   172,   172,
     172,   172, -2538,   625, -2538,   650,  1572,   701,    20,   503,
     623,    -8,  3897,    35,  4015,  4478,   805,  4516,  3569, -2538,
     585,   -99,   827,   751,    67,   577,   841,   -35,   700, -2538,
     813, -2538,   664,   604,   131, -2538,    74, -2538,   400, -2538,
      -1,   815,    53, -2538, -2538,  4596, -2538, -2538, -2538,   840,
     886, -2538, -2538, -2538, -2538,   709, -2538, -2538, -2538, -2538,
     559, -2538, -2538,  4596,  4140, -2538, -2538,    83, -2538,   920,
     934,   485, -2538,  1043, -2538,   942,    45,   945,   274,   723,
     951,    42, -2538, -2538, -2538,   961,   972,   172,   172,  1043,
    1043, -2538, -2538,   977, -2538, -2538, -2538, -2538, -2538,   887,
   -2538,   982,   139,  1043,  4596,  1043, -2538,   986, -2538, -2538,
   -2538, -2538, -2538,  1043,  1039,   172,  3485,  1043,  1435,  1043,
   -2538,   969, -2538,  4051, -2538, -2538,   635,   999,  1004,  1043,
   -2538,  1010, -2538, -2538,   579,   990,  4596,  1015, -2538,  1060,
    1043,   925, -2538,   464,   897,  1042,   378,  1019, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538,  1029, -2538,    11,    58,   115,
     175,   282, -2538,  1043,  1043,   122, -2538,  1043,   771,  1055,
   -2538,  1043,  1043, -2538,  1058,    23,    32,  1062,  1435, -2538,
   -2538, -2538,   809,  1043, -2538, -2538, -2538, -2538,  1043, -2538,
    1065,  1068, -2538,  1043,   995, -2538, -2538, -2538, -2538, -2538,
   -2538,  1043, -2538, -2538,  1043, -2538, -2538,   293,   293,  1072,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538,   882,  1043,  1043,  1083,  1085,  1087, -2538, -2538,  1043,
    1043,  1043, -2538,  1043, -2538,  1097, -2538, -2538, -2538, -2538,
     930, -2538,  1105, -2538,  4596,  1110, -2538,  1043, -2538, -2538,
   -2538,  1043,  1113,  1116,  1116,  4596,  1043,  1043,  1043,  1043,
    1043,  1043, -2538,  1043,  4516,  1421,  1043,  1043, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538,  1421,  1043, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,  1125, -2538,
     867,   762, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538,   -48, -2538, -2538, -2538,   974, -2538,   383,   769,   769,
   -2538, -2538, -2538,  1145, -2538,  1147, -2538, -2538,   312, -2538,
     979, -2538, -2538, -2538,   992, -2538, -2538,  1435, -2538,  1043,
    1043, -2538,  4596,  4596,  1435, -2538, -2538,  1435, -2538, -2538,
   -2538, -2538,  1435, -2538, -2538,  4596,  1435,  1043, -2538, -2538,
    4596, -2538, -2538,    85,   987,    17, -2538, -2538,   994,  4596,
     318, -2538, -2538, -2538, -2538, -2538,  1132,  1167,  1183, -2538,
    1006, -2538, -2538, -2538,  1043, -2538, -2538,   883, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,    -1, -2538,
   -2538, -2538, -2538, -2538, -2538,  1021,  1034, -2538, -2538,  1144,
    1157,  1169, -2538, -2538,  1028, -2538,  1043,  1232,  1018,  4051,
   -2538,  1435, -2538,  1235, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,  4596,  4596,
    4596,  4596, -2538, -2538,  1265,   172, -2538, -2538,  1270,  1273,
    1084,  1043, -2538,   517,  1195, -2538,  1286, -2538,   283,  1212,
    5122,    41,  1305, -2538,  1313, -2538,  1324, -2538,   231, -2538,
    1329,  1336, -2538,  1325, -2538, -2538, -2538,  1043, -2538,  4051,
    4481,  1322,   248,  1341,   396,  1253, -2538, -2538, -2538,  1338,
     417,  1353,  1355,    94,  1043,   255,   616,   111,  4596,   172,
    1547,   663,     5,   156,     8,    37, -2538,  1348,  1350,  1354,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,  1043,
   -2538, -2538, -2538,  1043,  1043,  1043,  1043, -2538, -2538,  1043,
    1435,  1043, -2538,  1043,  1421,  1043,  1359,  1435, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538,  1366,   343,   376, -2538,
   -2538, -2538,  1368, -2538, -2538, -2538, -2538,  1276, -2538,  1374,
    1377,  1296,  1387, -2538,  1391, -2538,  1394,  1316,  1399,   424,
     538,   469,   392,   496,  1402,   497, -2538, -2538,  1405,  1415,
    1403, -2538, -2538,  1425, -2538, -2538, -2538, -2538,  1428, -2538,
   -2538,  1439, -2538, -2538,  1440, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538,  1043,  1043, -2538,  1043,  1094,  1043,  1043, -2538,
    1452, -2538,  1142,  1436, -2538,  1192,  1443, -2538, -2538,   -49,
    1043,  1043, -2538,  1438, -2538, -2538,  1450,  1173,  1043,  1445,
     731, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538,  1444,  1455,  1043,  1043,  1043,
    1457,   172,  1458,  1460,  1435,  4596, -2538, -2538, -2538, -2538,
   -2538,  1435, -2538, -2538,  1043,  1043,  1043,  4596,  1043,  1421,
    1043, -2538,  1043, -2538, -2538, -2538, -2538, -2538,  1463,  1464,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538,    35, -2538,  1043, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538,  4596,  1043,  1435,  1435,   -49,   -49,
     -49,  1435,  1421,  1043,  1435, -2538, -2538,  1043, -2538,     0,
    1300,  1467,  1481, -2538, -2538,  1435,  1331,  1334, -2538,  1490,
    1491,  1506,  1257,  1043,  3274,   511,   647, -2538, -2538, -2538,
    1043,   504,  1050, -2538,  1258, -2538,  1547,  1260,   506,  1234,
      91, -2538, -2538,  1043, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538,  1043,  1515, -2538, -2538, -2538,   -49,
   -2538, -2538, -2538, -2538, -2538,  4547, -2538, -2538,  1520,  1524,
    1043,  1527,  1528,  1535,    46,    46,   -92,  1538,  1541,  1544,
    1546,  1288,  1289,  1556,  1559,  1560,    65,    65,   -92,  1562,
    1563,   -92,  1566,  1567,  5159,  1569,  1571, -2538, -2538,  1573,
    1574,   390, -2538,  1577,  1580,  1581,  1587,    46,   -92,  1589,
    1592, -2538,  1595, -2538, -2538,  1435,   931,  1209,  1339,   354,
    1347,  1496,  1290,   462,  1597,     1,  1465,  1501,  1023,   989,
    1570,   637,  1375,  1511,  1617,  1412,   205,   101,   -65,   -36,
    4596,  1547,  1588,   622,  1384,  1419,  1626,    81, -2538, -2538,
     217,  1628,  1630, -2538, -2538, -2538,  1631,  1422,   155,  1547,
    1426, -2538, -2538, -2538,   172,  1637,  1638,  1043, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538,    -4, -2538,   513,
   -2538,  1043, -2538,  1043, -2538, -2538, -2538, -2538,  1043,  1043,
    1043,   396,  4596, -2538,  1639,  1262, -2538, -2538,  1043, -2538,
   -2538,  1043,  4596,  1043, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,   172,  1043,
   -2538,  1043,   396,  1644, -2538,  1043,  1043, -2538,   172, -2538,
   -2538, -2538,   859,  1649,  1650, -2538, -2538, -2538, -2538, -2538,
    1043,  1043, -2538, -2538,  1421,  1043,  1043, -2538, -2538, -2538,
   -2538,  1653,  1043, -2538,  1043,  1548, -2538,  1043, -2538,  1043,
    1550, -2538,  1654, -2538,   926,   926,   515,   926,  1657, -2538,
     529, -2538, -2538,  1658,  1659,   552,  1661, -2538,  1662,  1663,
    1665, -2538,   567,   651,  1666,  1670,  1672, -2538, -2538,  1673,
    1674,  1676, -2538,   926,   926,   926,  1043, -2538, -2538, -2538,
    1043, -2538,  1043,   512,  4596, -2538,  1043, -2538,  4051,  1435,
   -2538, -2538,  1677, -2538, -2538,  1678, -2538, -2538, -2538, -2538,
    1669,  3485, -2538,  1043,  1675,  1043,  1043,  1043,   799, -2538,
    1660,  1681,  1043,  1043,    -6,  1683,   172,   172, -2538,  1435,
    1043,  1682,  1685,  1687,  1435,  4596, -2538,  1043, -2538, -2538,
   -2538,  1043,  1043,  1043,  1435,  4596,   -49, -2538, -2538, -2538,
   -2538,  1421,  1043,  1689,   -49,  1043,  1632,  1664,   406, -2538,
    1690, -2538, -2538,   145,  3819,  1043, -2538,  1043,  1693,  1698,
    1043, -2538,  1694,  1346,  4516,  1462,   693,  1469,   141,  4596,
     714, -2538,    33,  1539,   150,   721,  1470,   165, -2538, -2538,
     444,  1534,   285,  1582,   315,  1547,   950, -2538,  1701,  1466,
   -2538,   543, -2538, -2538, -2538, -2538,  1547,  1502, -2538, -2538,
   -2538, -2538, -2538,  1043, -2538,  1043, -2538, -2538,  1043,  1043,
   -2538,  1043, -2538,  1043, -2538, -2538, -2538, -2538,  1516,  1043,
   -2538,  1043,    21, -2538, -2538,  1706,  1708, -2538,  1043,    46,
      46,    46, -2538, -2538, -2538, -2538, -2538, -2538,  1712,    46,
      46,    46,   610, -2538, -2538,    65,    46,    46,    46, -2538,
   -2538,    46,    46,  1713,    46,    46,  1716,    65,  1013, -2538,
    1717,  1718,  1719, -2538,   712, -2538,   991,  1016, -2538,  1114,
   -2538,  1451,  1721,  1724,  1725,    65,    65,   -92,  1727,  1728,
     -92,  1729,  1731,  1732,    46,    46, -2538,  1733,    46,    46,
   -2538,  1734, -2538, -2538, -2538, -2538, -2538, -2538,   172, -2538,
   -2538, -2538,  4516,  1080,   172,  1043,  1317,  1251,   -37, -2538,
   -2538, -2538,   594, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538,  1735,   172,  1043, -2538,   172,
    1737,  1043,  4596,   172,  1531,  1505,  1508,   177,   198,  1509,
     200,  1437,  1441,  1746,  1748,  1749,  1290,  1750,  1751,  1752,
    1453,  1483,  1297,  1753,   172,  1043,  1476,  1549, -2538, -2538,
     172,  4596, -2538, -2538,  4596,  1043,    61,  1754,   172,  1043,
    1435,   172, -2538,  1786,  4596,  4596,  1043, -2538, -2538, -2538,
     172,   172,  4596, -2538, -2538, -2538, -2538, -2538, -2538,  4596,
    1043,   172, -2538, -2538, -2538,  1043, -2538, -2538,  1790,  1043,
    1575,   257,  1043,  1576,  1043,   270,  1043, -2538,  1043,  1578,
    1579,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,    30,
    1043,  1043,  1583, -2538,  1043,  1043,  1043,  1043, -2538,  4596,
    1435,  1791,  4596,  4596,  1043,  1043,  1435, -2538,  1043,  1043,
    1043,  4596, -2538,  1043,  1043, -2538, -2538, -2538,  1792, -2538,
   -2538, -2538, -2538, -2538, -2538,  1755,  1043,  1043, -2538,  1043,
    1043, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
    1793,  1796,  1800, -2538, -2538,   926,  1801,  1803,  1805, -2538,
    1806,  1807,  1808,  1809,  1811, -2538,  1812, -2538, -2538, -2538,
    1813,  1814,  1816, -2538,  1819,  1822,  1824, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538,  1043,  1043,  1043,
   -2538,  1435,  1043,  1435, -2538, -2538, -2538,  3485,  1043,  1435,
    1043,  1043,  1043, -2538,  1043,  1043,  1826,  1043,  1831,  1832,
    1043,  1043, -2538, -2538,  1833,  4596, -2538, -2538, -2538,  1043,
   -2538, -2538, -2538, -2538,  1435, -2538,  1199,  1043,  1199,   -49,
    1435,  4596,  1043,  1043,  1835, -2538, -2538, -2538, -2538, -2538,
    1043, -2538, -2538, -2538, -2538, -2538,  4596,  1435,  4596,  1043,
    1836, -2538, -2538,  1837,  1838,  1839,  1840,  1841,  4596,  1435,
   -2538,  4596, -2538,  4596,  4596,  4516,  4596,  1435, -2538,  4596,
   -2538, -2538,  4596, -2538, -2538,  4516,  4596, -2538,  4596,  4596,
    4516,  4596, -2538,  4596,  4596,  1043, -2538, -2538, -2538,  4596,
    4596,  4596, -2538, -2538,  4596,  4596, -2538, -2538, -2538, -2538,
    4596,  4596, -2538, -2538, -2538, -2538, -2538,  1043,  1043, -2538,
   -2538,  1843,  1043, -2538, -2538,  1844,  1846, -2538,  1043, -2538,
   -2538, -2538,    46, -2538, -2538, -2538,  1847,  1848,  1849, -2538,
   -2538,   -92,  1860,  1861,  1862,    46, -2538, -2538, -2538, -2538,
   -2538,    65, -2538, -2538,  1864,    46,  1865,  1866,  1867,    65,
      65,   -92,  1869,  1870,  1871,  1143, -2538,  1150, -2538,  1164,
    1542,  1872,  1873,  1875,    65,    65,   -92,  1878,  1879,   -92,
    1880,  1596,  1881,  1882,  1883,    65,    65,   -92,  1885,  1886,
     -92,  1887,  1599,  1888,  1889,  1890,    65,    65,   -92,  1892,
    1893,   -92,  1895,  1896,  1897,  1898,    65,    65,   -92,  1901,
    1902,  1903,    65, -2538, -2538, -2538, -2538, -2538,  1905, -2538,
   -2538,  1906,    65,  1907,  1908, -2538, -2538,    46, -2538, -2538,
    1918, -2538,  1435, -2538,  4596,  1043, -2538,  1043,  4596,  1043,
    1919,  1209, -2538, -2538, -2538, -2538, -2538, -2538,  1932, -2538,
    4596,   172,  1934,  4596,  1435, -2538,  1938,  1209,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1043,  1940,  1941, -2538,
   -2538, -2538,  1943, -2538, -2538, -2538,  1942,  1945, -2538, -2538,
   -2538, -2538,  1043,  4596,  1043,  1946,  1209,   172,  1435,  1435,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538,  1043,  1421, -2538, -2538,  1435,  1435,  1043, -2538, -2538,
    1435,  1435, -2538, -2538, -2538, -2538,  1043,  1043,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  2584, -2538,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  1043,  2808,
    1947,  1043, -2538,  1043,  1043,  1043,  1949,  1952, -2538, -2538,
    1435,   -49,  1953,  1435,  1435, -2538, -2538,  1421,  1043, -2538,
    1954,  1435, -2538, -2538, -2538,  1955, -2538, -2538, -2538, -2538,
     926,   926,   926, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,  1209,
    1043, -2538, -2538,  1043, -2538,  1043,  1435,  1043, -2538,  1421,
    1043, -2538,  1043, -2538,  1829,  1956,  1957, -2538,  1959,  1043,
    1043,  1960,  1435,  4596, -2538, -2538,  1043, -2538,  1043, -2538,
     -49,   145,  1043,  1961, -2538,  1043,  1435, -2538,  1435,    -1,
   -2538,  1962,  1963,  1964,  1965,  1966,  1435, -2538,   145,   145,
     145,  1435, -2538,   145,   -49,   145,   145,  1435, -2538,   145,
     145,   145,  1435, -2538,   145,   145,  1435,  4596,   145,  1435,
     145,   145,  1435,   145,  1435, -2538, -2538,  1968,    -1,  1970,
   -2538,  1043, -2538, -2538, -2538, -2538,  1969, -2538, -2538, -2538,
   -2538,    46,    65, -2538, -2538, -2538, -2538, -2538, -2538,  1972,
   -2538, -2538,    65,  1973,  1974,  1976,    65,    65,   -92,  1978,
    1979,  1980,  1981,  1983,  1984,    65,    65,   -92,  1987,  1989,
    1990,  1995,  1996,  1998,    65,    65,   -92,  1994,  2000,  2003,
      65,    46,    46,    46,    46,    46,  2006,    46,    46,  2007,
      65,    65,    46,    46,    46,    46,    46,  2008,    46,    46,
    2010,    65,    65, -2538, -2538, -2538, -2538, -2538,  2012, -2538,
   -2538,  2014,    65, -2538, -2538, -2538, -2538, -2538,  2016, -2538,
   -2538,    65, -2538,    65,  2017, -2538,  2020,  2022, -2538,  4051,
   -2538,   145,  2023,  4596,   145,  1043,  4596,  2024, -2538,   145,
   -2538, -2538,   145, -2538,  4596,  2025,  1043,  1043,  1043,  1043,
    1043,  1043,  1043,  1043,  1043,  1043,  1043, -2538, -2538, -2538,
    4596,   145,  1043,  4596,  2027, -2538,  1421,  1421,  4596,  1421,
    1421,  4596,  4596,  1421,  1421,  1043,  1043,  1043,  1043,  1043,
    1043,  1209,  1043,  1043,  1043,  1497,  1500,  1533,  1609,  1614,
    1633,  1684,  2584, -2538,  1686, -2538, -2538,  1209,  1043,  1043,
    1043,  1043,  1209,  1043,  1043,  1043,  1043,  1043,  1043,  1435,
    1043,  1514,  1209,  1043,  1043, -2538, -2538,   -49,   172,  2028,
    2029, -2538, -2538, -2538, -2538, -2538,   -49,  2030, -2538, -2538,
   -2538, -2538,  1043, -2538, -2538,  1421,  1043, -2538, -2538, -2538,
     976,  2018,  2033, -2538,  1043,  2035,  1199, -2538,   145, -2538,
   -2538, -2538, -2538,  2037, -2538, -2538, -2538, -2538,  2036,  2038,
    2042,  2043,  4596,  2044, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
     -49,   145, -2538,   -49, -2538, -2538,   -49, -2538,   -49,  2045,
    2047, -2538,  1043, -2538, -2538,    46,    65, -2538,    46,    46,
      46,    46,    46,  2048,    46,    46,    65,    46,    46,    46,
      46,    46,  2049,    46,    46,    65,    46,    46,    46,    46,
      46,  2050,    46,    46,    65,    46, -2538, -2538, -2538, -2538,
   -2538,    65, -2538, -2538,  2051,    46,    46, -2538, -2538, -2538,
   -2538, -2538,    65, -2538, -2538,  2054,    46, -2538,    65,  2055,
   -2538,    65, -2538, -2538,    65, -2538, -2538,  1435, -2538,  4596,
     145, -2538,  2056,  1435,  1043, -2538, -2538,  1435,  1043, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,  1043,  1043,
     145, -2538,  2057,  1435,  1043,  1421, -2538,   145,  1043,  1421,
     145,   145,  4596, -2538,  1043,  2058,  2058,  1043,  1043,  2058,
    1209,  2058, -2538,  4596,  1290,  2059,  2061,  2064,  2065,  2066,
    2062, -2538,   172,  1209,  2058,  2058,  1043,  1043,  1209,  1043,
    1043,  1043,  1043,  1043, -2538,  1421,  1043,  2068, -2538, -2538,
    1043,  2058,   172,    18, -2538,  2069,   172,  2071, -2538, -2538,
   -2538,  2072,  1043, -2538,  2073,  2075,  1944,  1043, -2538, -2538,
     -16,  4596, -2538,  2077,  1435,  4596, -2538, -2538, -2538, -2538,
   -2538, -2538,   -16,  1043, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538,    65, -2538, -2538,    46, -2538, -2538, -2538, -2538, -2538,
      65, -2538, -2538,    46, -2538, -2538, -2538, -2538, -2538,    65,
   -2538, -2538,    46, -2538,    46,    65, -2538, -2538,    46,    65,
   -2538, -2538,    65, -2538, -2538,  1043,   145, -2538,  4596,  4596,
    1043,  4596,  1043, -2538, -2538, -2538,  4596,  4596,  1043, -2538,
   -2538,  4596, -2538, -2538, -2538,   145,  2076, -2538, -2538, -2538,
    1209,  1043, -2538,  2079, -2538, -2538,  1435,  2080, -2538,  2082,
   -2538, -2538, -2538, -2538, -2538,  2084, -2538, -2538,  1209,  1043,
    2085, -2538, -2538,  1043,  4596, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538,    18,  1624,  1547, -2538, -2538,  2086,  2087,  2088,
   -2538,  1971,  2090,    76, -2538, -2538, -2538,  2091,  4596,   100,
   -2538, -2538,  2092,    46, -2538,    46, -2538,    46, -2538, -2538,
      46, -2538,    46, -2538,  4051, -2538,   145,   145,  1043,   145,
    2093,   145,   145,  1043,   145,  1043, -2538, -2538, -2538, -2538,
    2094, -2538,  1043, -2538, -2538,  2095, -2538,  1043, -2538, -2538,
   -2538,  2097,  1043, -2538, -2538, -2538,  1435, -2538, -2538, -2538,
    1624, -2538,  1780,  1740,  1547, -2538, -2538,  2098,  2099,  2101,
   -2538, -2538, -2538, -2538,   968,   968, -2538,  1435, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538,   145, -2538, -2538,
    2103, -2538,  4516, -2538, -2538,  2104, -2538,  1209, -2538, -2538,
    1209,  1043, -2538, -2538,  1043, -2538,  1209,  1043, -2538,  4596,
   -2538,  1780, -2538,   172, -2538,  2105,  2107, -2538,  1043,  1043,
    1043,  1043,   100,  2108,  4516,  1435, -2538,  4516, -2538, -2538,
    1043,  2110, -2538,  1043,   145, -2538, -2538, -2538,  2111,  2112,
    1043,  2113,  1043, -2538, -2538,  1435, -2538, -2538,  1435, -2538,
   -2538,  2115, -2538, -2538,  2116,  2117, -2538, -2538,  2119, -2538,
    2120, -2538, -2538,  1209, -2538,  1209, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2538, -2538,    -3, -2538,   586, -2538, -1755,  -980,  1680, -2538,
     889,  -384,  1993,   -46,    43, -2538, -1627,  1743,  2019,  -675,
     755,  -868,  1201,     6, -2538, -1077, -2538,  -857, -1043, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538,  -537,  -462, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538,  -418, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -1434, -2538, -2538, -2538, -2538, -2538,  -642, -2538, -2538,
   -2538, -2538, -2538, -2538,   439, -2538, -2538, -2538, -2538,  -133,
    -657, -1931,  -493, -2538, -2538, -2538, -2538,  -559,  -544, -2538,
   -2538, -2537, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538,  1406, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538, -2538,
   -2538, -2538, -2538, -2538, -2538, -2538, -2538
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1227
static const yytype_int16 yytable[] =
{
      67,  1487,  1872,  1088,   348,    64,    65,  1392,   104,  2016,
    1092,  2018,   106,  1062,  1065,   367,  2614,   852, -1077,   106,
     255,   880,   265,    64,    65,    64,    65,   772,  1419,   287,
     106,   291,   377,    64,    65,  1939,   775,   311,    64,    65,
    1622,  1723,  1101,    55,   400,   744,   342,   630,  1186,   353,
     613,   831,   358,    64,    65,   109,   364,    64,    65,   371,
    1680,   834,   106,   374,   376,    64,    65,   385,  1842,   578,
     392,   396,  1326,   538,   399,   289,    64,    65,   403,    64,
      65,   256,  1339,   404,    56,  1458,  1469,   604,  1891,   876,
    1343,   109,  1559,  1346,  1564,   563,   417,   421,   426,   427,
     431,   433,    57,   257,    64,    65,    64,    65,  1307,  1892,
    1377,  1057,  1893,   533,    64,    65,    76,   437,   745,   106,
    1594,  1595,  1596,  1894,   748,    64,    65,   111,   969,    64,
      65,    58,  2688,  1236,   111,  2722,  1102,  1452,    64,    65,
     157,   109,  1103,   672,   841,   111,  1895,  1067,   414,    59,
     305,  1068,   446,    60,   258,   539,   436,  1843,    64,    65,
     485,    54,  1675,  1896,   245,    61,    99,  1420,   486,  1652,
    1653,  1685,  1327,  1094,   415,   478,   106,   111,   405,   106,
     499,   751,   881,   173,  2745,   100,  1690,   540,   381,  1308,
     266,  1477,   559,  1228,  1229,  1230,  1456,   970,  1860,  1681,
     253,   842,  1322,  1457,   534,   267,   471,  1459,   564,   114,
    1844,  1187,   472,   746,   117,   309,   114,   115,   116,  1862,
     378,  1865,  1069,  1340,   115,   116,   500,   114,   508,  1323,
     513,   517,  1450,  1453,   111,   115,   116,   101,   544,  1421,
     611,   754,  1654,  1070,  1471,   975,  1237,   697,   579,  1300,
     117,   473,  1033,   576,  1312,  1724,   637,   638,   370,   114,
      64,    65,  2681,   368,  2615,  1623,   268,   115,   116,   391,
     679,  1682,   681,    64,    65,   605,   474,   379,  1034,   618,
     683,   686,  1422,   689,   693,   401,   695,  1478,   952,  1093,
     614,   111,   976,  1098,   111,   757,   705,   953,   954,  1488,
     117, -1077,   119,   382,  1071,  1058,   715,   717,   773,   119,
    1117,   631,   565,   310,  1683,   259,   114,   776,  1040,   102,
     119,   475,    62,   792,   115,   116,   292,   882,  1470,   691,
     760,   761,   763,  1940,   765,   673,   293,  1104,   768,   769,
     566,    66,   674,   675,   955,   341,   762,   383,   384,   781,
     783,   149,   119,   352,  1461,   784,   150,   151,   149,  1041,
     787,   789,   260,   150,   151,   476,   477,  1095,   790,   149,
     306,   791,  1481,   114,   150,   151,   114,  2682,   676,  1676,
    2689,   115,   116,  1122,   115,   116,  1059,   793,  1686,   801,
     802,   619,  1454,   307,   363,  1361,   806,   807,   808,   406,
     809,   149,  1072,  1691,  1362,  1363,   150,   151,  1035,   119,
    1649,  1897,   560,   103,   816,  1861,  1127,  1841,   817,  1519,
     977,   476,  2683,   822,   823,   824,   825,   826,   827,  1451,
     828,   319,   421,   832,   833,   561,  1863,   568,  1866,   738,
     263,  1472,   421,   835,  1857,  1216,  1479,   569,  1096,   886,
    1531,  1364,    64,    65,  1123,   794,    77,  1051,   149,  1040,
    1036,   845,   109,   150,   151,   620,   119,  1886,   215,   119,
     758,  1692,   956,   957,   570,  1394,   304,   830,   277,  1152,
     320,  1918,  1699,   677,   216,   726,  1037,  1128,  1232,   321,
    1042,   609,    78,   978,  1923,   301,   864,   865,   739,  1818,
    1041,   388,  1821,   979,   857,  1043,  1044,    64,    65,    64,
      65,  2575, -1226,  1061,   873,   149,  1600,   322,   149,   621,
     150,   151,  1973,   150,   151,   719,   303,   393,  1052,   326,
    1148,   941,   942,   928,   980,  1489,  1124,  2599,   389,  1700,
    1490,   893,   795,   622,   728,   958,  1696,   796,  1153,   571,
     350,  1641,   356,  1697,   846,   959,   960,  1154,  1159,  1645,
     961,  1491,  1492,    79,  1493,  1494,   877,   360,   858,  1129,
    1709,    64,    65,   924,   966,  1495,  1560,  1283,   943,  1365,
    1366,   355,   542,  1416,   720,   572,   962,  1496,  1497,  1149,
    1566,   362,  1395,   985,   337,  1498,  1045,  1046,  1499,  1143,
     159,   913,    64,    65,  1701,   610,  1125,   236,   940,   887,
    1053,  1693,   261,  1572,   361,  1500,  1155,  1160,  1702,   294,
     394,   117,  1501,  1502,  1736,  1737,  1503,   357,  1580,  1712,
     519,  1042,   847,   109,   984,  1561,   547,  2647,  2648,  1130,
    1284,  2651,   543,  2653,   520,    80,  1043,  1044,   366,  1567,
     740,  1060,  1367,   573,  1073,  2658,  2659,   387,  1144,  2487,
    2663,  2664,  1368,  1369,  2667,  1285,   521,  1370,  1694,  2668,
    2669,  1738,  1573,   398,   323,   408,  1108,  1288,   410,  1040,
    1109,  1110,  1111,  1112,  1504,   522,  1113,  1581,  1115,   698,
    1116,   421,  1118,  1371,  1145,   412,   734,    81,   395,  1845,
    1417,   434,   523,  1089,   574,   524,   944,   945,   591,   721,
    1710,  1294,  1584,  1302,   338,  2708,   459,  1770,  2709,   270,
    1041,   271,   373,  2712,  1179,   699,  1771,  1772,   707,  2715,
    1542,   525,   526,   447,  2718,  1197,   722,  1045,  1046,  1505,
    1064,  1150,   458,  1198,  1286,  1506,   448,   449,   450,   451,
     452,   453,  1463,   587,   454,   455,   456,   457,  1444,  1170,
    1171,  1507,  1172,  1174,  1176,  1177,   548,  1711,  1156,  1161,
    1508,  1585,   327,  1773,  1090,   700,   592,  1189,  1190,   946,
     296,   549,   328,   527,  1194,  1195,   481,  1562,  1846,   947,
     948,   483,   117,   528,  1287,   339,   588,  1509,  1510,  1739,
    1740,  1568,    64,    65,  1201,  1202,  1203,  1289,  2760,   329,
    1146,  2763,    64,    65,  1672,  2649,   624,   593,  1511,   469,
     949,  1211,  1212,  1213,  1574,  1215,   421,  1217,   160,  1218,
     161,  2774,   536,  2660,   625,  1678,   272,   708,   510,  1582,
     537,  1847,  1687,   635,   636,  2781,  1464,  1642,  2782,  2783,
    1221,  1042,  1223,   529,   530,   594,  1091,   546,  1616,  1290,
     162,  2177,  1225,  1512,  1536,   838,  1043,  1044,   163,   421,
    1233,   688,  1741,  2076,  1235,  1445,  1537,  2185,   297,   555,
     701,   550,  1742,  1743,   330,  1291,   558,   894,   895,  1250,
    1252,   640,   641,  2089,   273,   556,  1222,  1293,  1295,  1298,
     589,  1774,  1775,  1465,   577,  1303,  2204,   849,  2126,   626,
    1309,  2129,   583,  1744,   749,   752,   755,   585,  1352,  2137,
     331,  1310,  2140,  1586,   531,   607,   164,  2268,  2269,  2270,
    2148,  1673,   780,  2151,   811,   812,   274,  1318,   608,   551,
    2158,    64,    65,   896,   850,   275,   612,   642,   839,   897,
     616,  1325,  1679,   643,   298,  2739,   628,  1045,  1046,  1688,
     644,  2742,   645,   299,  2019,   633,   332,   646,  1553,  1554,
     647,    64,    65,   696,  1776,   165,   648,   634,   428,    64,
      65,   552,   639,  1376,  1777,  1778,   649,   671,   333,  1779,
     553,   682,   650,   166,   167,   710,  1781,   898,    64,    65,
     168,   651,   169,   703,  1455,  1782,  1783,   788,   704,  2271,
    2577,  1433,   899,  1382,   706,  1780,   652,   724,  2779,   712,
    2780,  1792,   718,   334,   742,  1480,   900,  1756,  1757,   170,
    1793,  1794,   901,   743,  1486,  2481,   653,   902,  1434,   335,
     766,  1435,    64,    65,  1436,  1425,    64,    65,  1514,   429,
    1515,   654,  1784,    64,    65,  1516,  1517,  1518,   313,   767,
     655,   656,   770,    64,    65,  1524,   778,  1297,  1525,   785,
    1527,  1437,  1426,   786,  1758,  1427,   799,  1795,   800,   684,
    1703,   657,  1383,    64,    65,  1834,  1529,   803,  1530,   804,
     903,   805,  1533,  1534,   171,  1555,  1556,    64,  1173,  1438,
     713,   810,  1439,   726,   658,  1428,   849,  1540,  1541,   904,
     813,   421,  1543,  1544,   905,   815,   906,  1704,   659,  1546,
     660,  1547,   418,  1557,  1549,   278,  1550,   420,  1803,  1804,
     836,   430,  1603,  1429,   661,   837,  1430,   889,   246,   662,
     907,   908,   844,   850,   314,   663,  1180,  1181,   909,   853,
     685,   855,   664,  1384,  1385,   860,   315,  2093,  2094,   727,
     862,    83,   728,  1597,  2102,  2103,   910,  1598,  1386,  1599,
     665,   714,   890,  1602,  1705,  1805,    64,    65,  2111,  2112,
    1785,  1786,   879,   666,   667,  1193,   668,   891,  1608,   884,
    1611,   936,  1613,  1614,  1615,  1617,  1183,  1184,   729,  1620,
    1621,   892,  1759,  1760,  2095,  1796,  1797,  1629,   914,  1387,
     916,  2104,    64,    65,  1635,  1440,  1389,  1390,  1636,  1637,
    1638,   915,   911,   918,   247,  2113,   669,    83,   421,  1643,
    2343,  1706,  1646,   730,  1610,   920,   248,   925,   316,  2352,
     930,  2440,  1658,   926,  1659,  1076,  1441,  1661,  2361,  1431,
    1099,   317,   922,  1787,    64,    65,  1840,  2453,  1389,  1390,
      64,  1249,  2458,  1788,  1789,   279,  1522,  1523,  1790,   935,
     249,   280,  1442,   281,   937,  1761,  2258,   938,  1798,   939,
    1432,  1650,   950,    84,   731,  1762,  1763,   732,  1799,  1800,
    1714,   951,  1715,  1801,  1791,  1716,  1717,  1670,  1718,   963,
    1719,  1878,  1879,  1806,  1807,    85,  1721,    93,  1722,    86,
     971,   733,   819,   820,   734,  1728,  1764,   973,   250,  1802,
      64,    65,  1838,    94,   735,  1729,  1730,  1731,   974,   983,
    1398,   251,  2096,  2097,   981,  1733,  1734,  1735,   237,  2105,
    2106,   982,  1746,  1747,  1748,  2291,  1039,  1749,  1750,    84,
    1752,  1753,  1048,  2114,  2115,  1050,  1399,  1055,  1107,  2569,
    1056,    87,  2572,  1119,  2574,  1105,   238,  1106,    69,  2310,
    1121,    85,  1132,  1133,    70,  2015,  1808,  2586,  2587,  1134,
    1825,  1826,  1135,  1136,  1828,  1829,  1809,  1810,  1022,  1400,
    1835,  1137,  1837,  1839,  2601,  1401,  1138,  1205,    95,  1139,
      88,  1402,  1023,  1140,  1141,  2098,  1158,  1165,    89,    90,
    1163,  1024,  2107,    71,  1850,  2099,  2100,  1811,  1853,  1403,
    1164,  1025,  2108,  2109,    64,    65,  2116,    87,  1663,  1166,
     418,   419,   420,  1167,   239,  1833,  2117,  2118,    72,  1404,
    1182,    96,  1882,  1884,  1168,  1169,  2101,  1185,  1199,   240,
    1191,  1026,  1890,  2110,  1405,  1192,  1901,  1196,  1178,  1200,
    2573,  1204,  1206,  1907,  1207,  1240,    88,  2119,  1219,  1220,
     438,  1027,  1241,  2585,    89,    90,    97,  1912,  2590,    64,
      65,  1883,  1914,    73,  1406,  1242,  1916,  1244,  1919,  1920,
    1245,  1922,  1924,  1925,  1246,  1928,  1247,  1664,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1941,  1943,  1944,   241,
    1248,  1946,  1947,  1948,  1949,  1299,  1028,  1301,  2209,  1305,
    1311,  1955,  1956,  1407,  1315,  1958,  1959,  1960,    74,  1316,
    1962,  1963,  1319,  1320,    64,    65,  1856,  1408,  1389,  1390,
    1321,   439,  1329,  1966,  1967,  1330,  1968,  1969,  1409,  1331,
     242,  1332,    64,    65,  1885,  1029,  1389,  1390,  1334,  1335,
     243,  1336,   440,   441,  1337,  1338,  1344,  1345,  1665,  1666,
     442,  1347,  1348,  2263,  1354,  1410,  1356,  1393,  1357,  1359,
    1030,  1372,  2472,  1667,  1373,  1396,  1374,  1411,   443,  1412,
    1413,  2476,  1375,  1378,  1989,  1990,  1991,  1379,   444,  1993,
    1380,  1397,  1418,  1423,  1995,  1998,  1424,  2000,  2001,  2002,
    1443,  2003,  2004,  1446,  2006,  2277,  1447,  2009,  2010,  1031,
    1483,  1032,  1448,  1449,  1668,   460,  2013,  1466,  1462,  1414,
    1467,  1468,  1473,  1476,  2017,  1474,  1475,  1482,  1077,  2022,
    2023,  1484,  1485,   461,  1521,  2496,  1078,  2025,  2498,  1532,
    1997,  2499,  1079,  2500,  1538,  1539,  2029,  1545,  1552,  1548,
     462,  1551,  1565,  1570,  1571,  1576,  1618,  1577,  1578,  1579,
    1647,  1588,   463,  1080,  1528,  1589,  1590,  1684,  1591,  1592,
    1593,  1607,  1605,  1606,  1535,  1619,  1630,  1612,  1625,  1631,
     464,  1632,  2057,  1644,   465,  1651,  1081,  1660,  -438,  1662,
    1671,  1695,  1648,  1698,  1082,  1707,   466,  1674,  1689,  1713,
    1726,  1720,  1727,  1708,  2065,  2066,  1732,  1751,  2042,  2068,
    1754,  1812,  1765,  1767,  1769,  2071,  1813,  2738,  2048,  1814,
    1815,  1819,  1820,  2053,  1822,  1823,  1824,  1827,  2072,  1830,
    1848,  1083,  1852,  1858,  1867,   467,  1859,  1864,  1868,  1084,
    1869,  2080,  1870,  1871,  1873,  1874,  1875,  1880,  1899,  1965,
    1876,  2083,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    1877,  1904,  1626,  1627,  1085,  1915,  1952,  1964,  1970,  1917,
    1921,  1971,  1929,  1930,  1972,  1086,  1974,  1945,  1975,  1976,
    1977,  1978,  2120,  1979,  1980,  1981,  1982,  2467,  1983,  1984,
    1985,  1087,  2425,  2426,  1986,  2428,  2429,  1987,  1988,  2432,
    2433,  2005,  2172,  2168,  2173,  2007,  2175,  2011,  2008,  2024,
    2030,  2280,  2031,  2032,  2033,  2034,  2035,  2067,  2444,  2069,
    2070,  2445,  2073,  2074,  2075,  2186,  2187,  2188,  2189,  2190,
    2191,  2192,  2193,  2194,  2077,  2078,  2131,  2079,  2082,  2142,
    2084,  2085,  2086,  2090,  2091,  2753,  2092,  2121,  2122,  2200,
    2123,  2202,  2127,  2128,  2446,  2130,  2132,  2133,  2134,  2138,
    2139,  2479,  2141,  2143,  2144,  2145,  2149,  2150,  2208,   421,
    2152,  2153,  2154,  2155,  2212,  2159,  2160, -1090,  2161,  2163,
    2164,  2166,  2167,  2215,  2216,  2217,  2218,  2219,  2220,  2221,
    2222,  2223,  2224,  2169,  2176,  2237,  2238,  2239,  2240,  2241,
    2242,  2243,  2244,  2245,  2246,  2247,  2248,  2178,  2251,  2181,
    2252,  2253,  2254,  2184,  2195,  2196,  2198,  2673,  2197,  2199,
    2612,  2203,  2250,  2255,   421,  2264,  2256,  2259,  2265,  2267,
    2447,  2281,  2282,  2283,  2286,  2448,  2294,  2299,  2300,  2301,
    2302,  2303,  2329,  2333,  1831,  2331,  2336,  2679,  2338,  2339,
    1836,  2340,  2344,  2345,  2449,  2346,  2347,  2272,  2348,  2349,
    2273,  2353,  2274,  2354,  2276,  2355,   421,  2278,  2362,  2279,
    2356,  2357,  1849,  2358,  2363,  1851,  2284,  2285,  2364,  1855,
    2371,  2374,  2382,  2289,  2385,  2290,  2388,  2673,  2389,  2293,
    2391,  2394,  2295,  2483,  2395,   288,  2396,  2399,  2404,  2408,
    1881,  2424,  2474,  2475,  2477,  2450,  1887,  2452,  2484,  2486,
    2490,  2559,  2489,  2491,  1900,  2562,  2492,  1903,  2493,  2495,
    2501,  2502,  2511,  2520,  2529,  2535,  1908,  1909,  2539,  2542,
    2548,  2556,  2567,  2229,  2578,  2579,  2583,  1913,  2332,  2580,
    2581,  2582,  2298,  2598,  2605,  2607,  2685,  2608,  2610,  2611,
    2646,  2596,  2618,  2652,  2621,  2655,  2656,  2334,  2657,  2662,
    2676,  2723,  2677,  2678,  2680,  2686,  2691,  2702,  2710,  2451,
    2713,  2716,   818,  2725,  2726,  2727,   435,  2734,  2737,  2670,
    2747,  2330,  2748,  2754,  2762,  2724,  2766,  2767,  2769,  2773,
    2775,   798,  2776,  2397,  2777,  2778,  2720,  2366,  2367,  2368,
    2369,  2370,     0,  2372,  2373,  1142,     0,     0,  2377,  2378,
    2379,  2380,  2381,     0,  2383,  2384,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1342,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2402,     0,     0,   497,     0,   504,   507,     0,
     512,   516,     0,  2409,  2410,  2411,  2412,  2413,  2414,  2415,
    2416,  2417,  2418,  2419,     0,     0,     0,     0,     0,  2422,
       0,     0,     0,   421,   421,     0,   421,   421,   581,     0,
     421,   421,  2434,  2435,  2436,  2437,  2438,  2439,     0,  2441,
    2442,  2443,  2729,  2731,     0,     0,   596,   602,     0,     0,
       0,     0,     0,     0,     0,  2454,  2455,  2456,  2457,     0,
    2459,  2460,  2461,  2462,  2463,  2464,     0,  2466,     0,     0,
    2470,  2471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   680,     0,  2478,
       0,     0,   421,  2480,     0,     0,     0,  2482,     0,   690,
       0,  2485,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   711,
       0,     0,     0,     0,     0,     0,     0,   694,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2503,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2504,     0,     0,  2506,  2507,  2508,  2509,  2510,     0,
    2512,  2513,     0,  2515,  2516,  2517,  2518,  2519,     0,  2521,
    2522,     0,  2524,  2525,  2526,  2527,  2528,   779,  2530,  2531,
       0,  2533,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2536,  2537,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2540,     0,     0,     0,     0,     0,     0,     0,
       0,  2550,     0,     0,     0,  2552,     0,   814,     0,     0,
       0,     0,     0,     0,     0,  2553,  2554,     0,   821,     0,
       0,  2558,   421,     0,     0,  2561,   421,   829,     0,     0,
       0,  2566,     0,     0,  2570,  2571,     0,  2180,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2588,  2589,     0,  2591,  2592,  2593,  2594,
    2595,     0,   421,  2597,     0,     0,     0,  2600,     0,     0,
       0,     0,     0,  2205,     0,     0,     0,     0,     0,  2609,
       0,     0,     0,     0,  2613,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   866,   867,     0,     0,     0,
    2622,     0,     0,     0,     0,     0,     0,     0,   871,     0,
       0,     0,     0,   874,     0,     0,   863,     0,     0,     0,
    2624,     0,   885,   868,     0,     0,   869,     0,     0,  2626,
       0,   870,     0,     0,     0,   872,  1745,     0,  2628,     0,
    2629,     0,  2634,     0,  2631,     0,     0,  2638,  1755,  2640,
       0,     0,     0,     0,     0,  2643,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1816,  1817,  2650,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2661,     0,  2697,     0,
    2665,   931,   932,   933,   934,     0,     0,     0,     0,     0,
     929,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2684,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2692,
       0,  2693,     0,  2694,     0,  2700,  2695,     0,  2696,  2225,
    2705,     0,  2707,     0,     0,     0,     0,     0,     0,  2711,
    2226,  1075,     0,     0,  2714,     0,     0,     0,     0,  2717,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1077,  2227,     0,     0,     0,
       0,  2728,  2730,  1078,     0,     0,     0,     0,     0,  1079,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2740,  1114,
    1080,  2741,     0,  2228,  2743,     0,  1120,     0,     0,     0,
       0,     0,     0,     0,     0,  2749,  2750,  2751,  2752,     0,
       0,     0,     0,  1081,     0,     0,     0,  2761,     0,     0,
    2764,  1082,     0,     0,     0,  2736,     0,  2768,     0,  2770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2292,  2756,  1083,     0,
    2759,     0,     0,    64,    65,     0,  1084,     0,     0,     0,
       0,     0,     0,  2305,  2306,  2307,     0,     0,  2309,   107,
    2311,  2312,     0,     0,  2314,  2315,  2316,     0,  1209,  2318,
    2319,    64,    65,  2322,     0,  2324,  2325,     0,  2327,   283,
    1214,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,  1085,     0,  1208,     0,     0,   109,     0,     0,     0,
    1210,     0,  1086,     0,  2473,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1224,  1087,     0,
       0,     0,     0,     0,     0,     0,     0,  2229,     0,  2230,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,  1226,  1227,     0,     0,     0,
    1231,     0,     0,  1234,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1243,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2231,     0,     0,  2398,     0,  1314,  2401,
       0,     0,     0,     0,  2405,     0,   112,  2406,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2081,     0,     0,     0,  2421,     0,     0,     0,
    2087,  2088,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,   284,     0,  2124,  2125,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2135,  2136,     0,     0,
       0,     0,     0,     0,     0,   117,     0,  2146,  2147,     0,
     118,     0,     0,  1460,  1381,     0,     0,  2156,  2157,     0,
       0,   285,     0,  2162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2165,     0,     0,     0,     0,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2584,     0,
       0,     0,     0,  2488,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1520,     0,     0,  2602,     0,
       0,     0,  2606,     0,     0,  1526,     0,     0,     0,     0,
       0,   286,     0,     0,     0,     0,  2497,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,   218,
       0,     0,     0,     0,     0,  2547,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1601,     0,     0,
       0,     0,     0,     0,   219,  2555,     0,     0,     0,     0,
       0,     0,  2560,     0,  1609,  2563,  2564,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1604,     0,
       0,     0,     0,     0,     0,     0,     0,   220,  1634,     0,
       0,     0,     0,     0,   221,     0,     0,     0,  1640,     0,
       0,     0,     0,     0,   222,   223,     0,     0,  1628,     0,
       0,   224,     0,  1633,     0,     0,     0,  1657,     0,     0,
       0,     0,     0,  1639,     0,     0,     0,  1669,     0,     0,
       0,     0,  1677,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   226,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2335,     0,   227,   228,     0,     0,     0,
       0,     0,   229,  2337,  1253,  1254,  1255,  2341,  2342,     0,
       0,  2635,     0,     0,     0,     0,  2350,  2351,     0,  2746,
       0,     0,   230,     0,     0,  2359,  2360,     0,     0,     0,
    2645,  2365,  1256,  1257,     0,     0,  1258,     0,     0,     0,
       0,  2375,  2376,  1259,     0,     0,  1260,     0,     0,     0,
    1261,     0,  2386,  2387,     0,     0,     0,     0,  1262,  1263,
     231,     0,     0,  2390,     0,     0,  1264,     0,     0,     0,
       0,     0,  2392,     0,  2393,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1265,  1266,  1832,     0,  1267,     0,     0,
       0,  2698,  2699,     0,  2701,     0,  2703,  2704,     0,  2706,
       0,   232,     0,  1268,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,  1854,     0,     0,     0,     0,
       0,     0,     0,  1269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     234,     0,     0,     0,  1888,  1270,     0,  1889,     0,   106,
       0,     0,  2733,     0,  1271,     0,     0,  1905,  1906,     0,
       0,     0,     0,     0,   107,  1910,     0,     0,     0,     0,
       0,     0,  1911,     0,     0,     0,     0,     0,     0,  1902,
       0,     0,     0,     0,     0,   108,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,  1272,  2765,
    1273,   109,     0,     0,   107,     0,  1274,  1275,     0,     0,
       0,     0,  1950,     0,     0,  1953,  1954,     0,     0,     0,
       0,     0,  1276,     0,  1961,     0,     0,     0,     0,     0,
       0,     0,  1277,     0,     0,     0,     0,  2505,     0,  1951,
       0,   109,     0,     0,     0,  1957,   110,  2514,     0,     0,
       0,     0,     0,     0,     0,     0,  2523,  1278,     0,  1279,
       0,     0,     0,     0,   111,  2532,     0,     0,     0,  1280,
       0,     0,  2534,   515,     0,     0,     0,     0,     0,  1281,
       0,     0,     0,  2538,     0,     0,   110,     0,   107,  2541,
       0,     0,  2543,     0,     0,  2544,     0,     0,     0,     0,
    1996,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1282,     0,     0,     0,     0,  2012,     0,
    1992,     0,  1994,     0,     0,   109,     0,     0,  1999,     0,
       0,     0,     0,     0,  2021,     0,     0,     0,   113,     0,
     344,   112,     0,     0,     0,     0,   114,   345,     0,  2026,
       0,  2028,     0,  2014,   115,   116,     0,     0,     0,  2020,
     117,  2036,     0,     0,  2038,   118,  2039,  2040,  2041,  2043,
     110,     0,  2045,     0,     0,  2046,  2027,     0,  2047,  2049,
       0,  2050,  2051,  2052,  2054,     0,  2055,  2056,  2037,     0,
       0,     0,  2058,  2059,  2060,     0,  2044,  2061,  2062,     0,
     117,     0,     0,  2063,  2064,   118,     0,     0,     0,     0,
       0,     0,  2623,     0,     0,     0,     0,     0,     0,     0,
       0,  2625,     0,     0,     0,   112,     0,     0,     0,     0,
    2627,     0,     0,     0,     0,     0,  2630,     0,     0,   119,
    2632,     0,     0,  2633,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   117,     0,     0,     0,   149,   118,
       0,     0,     0,   150,   151,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1656,     0,     0,     0,  2171,     0,     0,
       0,  2174,     0,     0,     0,     0,     0,     0,   107,     0,
       0,     0,     0,  2179,     0,     0,  2182,     0,     0,     0,
       0,  2170,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   346,     0,   347,     0,     0,
       0,     0,     0,  2183,     0,     0,  2201,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  2206,  2207,     0,
       0,     0,     0,     0,     0,     0,   107,     0,     0,     0,
     110,     0,     0,     0,  2210,  2211,     0,     0,     0,  2213,
    2214,     0,  2249,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   488,   489,     0,     0,   490,     0,     0,  2257,
       0,     0,  2261,  2262,     0,   112,     0,     0,     0,     0,
    2266,     0,     0,     0,     0,     0,     0,     0,   491,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,  2288,     0,     0,     0,
       0,     0,     0,     0,     0,  2275,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2287,     0,     0,   107,     0,     0,     0,     0,   118,
       0,     0,     0,     0,     0,  2296,     0,  2297,     0,     0,
    2321,     0,     0,   112,     0,  2304,     0,     0,     0,     0,
    2308,     0,     0,     0,     0,   492,  2313,     0,     0,     0,
       0,  2317,     0,     0,   502,  2320,     0,     0,  2323,     0,
       0,  2326,   493,  2328,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   597,   107,
       0,     0,     0,     0,     0,     0,  2400,     0,   495,  2403,
       0,   112,     0,     0,     0,     0,     0,  2407,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2420,     0,     0,  2423,     0,   598,     0,
       0,  2427,     0,     0,  2430,  2431,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   118,   496,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   599,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2465,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2494,   112,     0,     0,     0,
       0,     0,   503,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   600,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
     118,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,  2546,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2545,     0,     0,     0,
       0,     0,  2549,     0,     0,  2565,  2551,   601,     0,     0,
       0,     0,     0,     0,     0,     0,  2576,     0,     0,     0,
       0,     0,  2557,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,  2617,     0,     0,     0,  2620,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,   986,   987,   988,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2619,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   989,
     990,     0,     0,   991,   109,   107,   992,     0,     0,     0,
       0,  2636,  2637,   993,  2639,     0,     0,   994,     0,  2641,
    2642,     0,     0,     0,  2644,   995,   996,     0,     0,     0,
       0,     0,     0,   997,   998,     0,   107,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,   110,
     999,     0,     0,     0,     0,     0,  1000,  2666,     0,     0,
    1001,  1002,     0,     0,  1003,  2654,     0,     0,     0,     0,
       0,     0,     0,  1313,     0,     0,     0,     0,     0,     0,
    1004,  2687,     0,     0,     0,   107,     0,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1005,     0,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,  1006,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,  1007,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2719,     0,     0,     0,     0,
       0,     0,     0,   117,     0,  2735,     0,   110,   118,     0,
       0,     0,     0,   112,     0,  1008,  2732,  1009,     0,     0,
       0,     0,  2744,  1010,  1011,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2755,  1012,  1013,
    2758,   117,     0,     0,     0,     0,   118,     0,  1014,  1015,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,  2757,     0,     0,   506,     0,     0,
       0,     0,     0,     0,  1016,     0,  1017,   118,     0,     0,
       0,     0,     0,     0,  2771,     0,     0,  2772,  1018,     0,
    1019,     0,     0,     0,     0,     0,  1020,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   118,     0,     0,     0,
    1021,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     1,     0,     0,     2,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,     0,     0,     0,     0,     0,     0,     0,    14,    15,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
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
       0,     0,   192,   193,     0,     0,   194,     0,   964,     0,
     195,     0,   196,   965,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   197,   198,     0,     0,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   200,     0,     0,
    1350,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   213,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,  1351
};

static const yytype_int16 yycheck[] =
{
       3,     5,  1436,   660,    50,     3,     4,   987,    11,  1636,
       5,  1638,     4,   655,   656,    32,    32,   479,     0,     4,
       5,     4,    57,     3,     4,     3,     4,     4,    27,    32,
       4,     5,     4,     3,     4,     5,     4,    40,     3,     4,
      46,    20,     5,    12,     4,    34,    49,     5,    97,    52,
       5,   435,    55,     3,     4,    56,    59,     3,     4,    62,
      27,   445,     4,    66,    67,     3,     4,    70,   105,    16,
      73,    74,   164,     6,    77,    32,     3,     4,    81,     3,
       4,    66,    17,    86,    53,   121,     5,     4,    27,     4,
     958,    56,  1135,   961,  1137,    21,    99,   100,   101,   102,
     103,   104,    71,    88,     3,     4,     3,     4,    17,    48,
     978,    17,    51,   212,     3,     4,   283,   120,   107,     4,
    1163,  1164,  1165,    62,    66,     3,     4,   119,    87,     3,
       4,   100,    32,   133,   119,  2672,    99,    36,     3,     4,
      33,    56,   105,     4,   192,   119,    85,    36,     5,   118,
      61,    40,   155,   122,   139,    88,   113,   194,     3,     4,
     168,    66,    21,   102,    16,   134,    40,   166,   176,    24,
      25,    21,   264,    17,    31,   178,     4,   119,     5,     4,
     183,    66,   165,   144,  2721,    59,    21,   120,   186,    98,
     225,    36,    61,   868,   869,   870,   261,   156,    21,   166,
     230,   249,   156,   268,   303,   240,   186,   243,   134,   201,
     247,   260,   192,   202,   215,   193,   201,   209,   210,    21,
     192,    21,   111,   158,   209,   210,   183,   201,   185,   183,
     187,   188,    27,   132,   119,   209,   210,   111,   195,   238,
     243,    66,    97,   132,    27,    14,   246,   293,   195,   906,
     215,   231,     4,   210,   929,   234,   259,   260,   123,   201,
       3,     4,   186,   280,   280,   271,   301,   209,   210,   196,
     273,   238,   275,     3,     4,   192,   256,   249,    30,     5,
     283,   284,   281,   286,   287,   245,   289,   132,     5,   284,
     245,   119,    61,   285,   119,    13,   299,    14,    15,   303,
     215,   283,   294,   301,   193,   211,   309,   310,   285,   294,
     694,   269,   238,   291,   281,   300,   201,   285,    63,   193,
     294,   301,   291,    30,   209,   210,   300,   310,   247,   286,
     333,   334,   335,   303,   337,   196,   310,   300,   341,   342,
     266,   291,   203,   204,    61,   291,   224,   345,   346,   352,
     353,   343,   294,   291,  1011,   358,   348,   349,   343,   104,
     363,   364,   347,   348,   349,   345,   346,   211,   371,   343,
     281,   374,  1029,   201,   348,   349,   201,   301,   239,   238,
     280,   209,   210,    40,   209,   210,   292,    94,   238,   392,
     393,   117,   291,   304,   291,     5,   399,   400,   401,   226,
     403,   343,   291,   238,    14,    15,   348,   349,   160,   294,
       4,   350,   281,   287,   417,   238,    40,  1397,   421,  1061,
     189,   345,   346,   426,   427,   428,   429,   430,   431,   224,
     433,    50,   435,   436,   437,   304,   238,    37,   238,    61,
       5,   224,   445,   446,  1424,   829,   291,    47,   292,   131,
    1092,    61,     3,     4,   111,   162,     4,    40,   343,    63,
     212,    78,    56,   348,   349,   191,   294,  1447,    83,   294,
     188,    27,   189,   190,    74,   121,    37,   434,    66,    87,
      99,   224,   167,   344,    99,    61,   238,   111,   872,   108,
     235,     6,    40,   262,   224,     4,   499,   500,   120,  1367,
     104,   138,  1370,   272,   192,   250,   251,     3,     4,     3,
       4,  2442,     0,   258,   517,   343,     4,   136,   343,   245,
     348,   349,  1565,   348,   349,    61,    88,    78,   111,     4,
      61,    14,    15,   579,   303,    22,   193,  2468,   175,   224,
      27,   544,   249,   269,   120,   262,   261,   254,   156,   149,
     230,  1226,     5,   268,   171,   272,   273,    61,    61,  1234,
     277,    48,    49,   111,    51,    52,   523,   268,   256,   193,
      27,     3,     4,   576,   620,    62,    61,    66,    61,   189,
     190,     0,     5,   121,   120,   185,   303,    74,    75,   120,
      61,     4,   238,   639,     4,    82,   341,   342,    85,    61,
      14,   558,     3,     4,   289,   120,   263,    21,   611,   291,
     193,   167,    26,    61,     5,   102,   120,   120,  1275,    33,
     171,   215,   109,   110,    14,    15,   113,    59,    61,  1286,
      45,   235,   249,    56,   637,   120,   197,  2568,  2569,   263,
     129,  2572,    65,  2574,    59,   193,   250,   251,     5,   120,
     272,   654,   262,   253,   657,  2586,  2587,    71,   120,  2286,
    2591,  2592,   272,   273,  2595,   154,    81,   277,   224,  2600,
    2601,    61,   120,     5,   293,    31,   679,    30,     5,    63,
     683,   684,   685,   686,   171,   100,   689,   120,   691,    54,
     693,   694,   695,   303,   156,     5,   272,   245,   249,   105,
     238,   193,   117,    40,   304,   120,   189,   190,   149,   245,
     167,   207,    61,   207,   124,  2646,    66,     5,  2649,    64,
     104,    66,   123,  2654,   770,    90,    14,    15,   149,  2660,
    1114,   146,   147,     4,  2665,     4,   272,   341,   342,   226,
     124,   272,   117,    12,   233,   232,   160,   161,   162,   163,
     164,   165,   130,    44,   168,   169,   170,   171,   121,   762,
     763,   248,   765,   766,   767,   768,    66,   224,   272,   272,
     257,   120,    37,    61,   111,   140,   217,   780,   781,   262,
      70,    81,    47,   198,   787,   788,   283,   272,   194,   272,
     273,   168,   215,   208,   283,   205,    87,   284,   285,   189,
     190,   272,     3,     4,   807,   808,   809,   160,  2739,    74,
     272,  2742,     3,     4,   121,  2570,    93,   258,   305,   118,
     303,   824,   825,   826,   272,   828,   829,   830,    44,   832,
      46,  2762,     5,  2588,   111,   121,   181,   258,    33,   272,
      89,   247,   121,   257,   258,  2776,   224,  1231,  2779,  2780,
     853,   235,   855,   268,   269,   296,   193,    16,    59,   212,
      76,  1841,   865,   350,     5,   103,   250,   251,    84,   872,
     873,   285,   262,  1741,   877,   238,    17,  1857,   168,    66,
     245,   181,   272,   273,   149,   238,   282,     4,     5,   892,
     893,     4,     5,  1761,   239,   231,   853,   900,   901,   902,
     191,   189,   190,   281,    89,   908,  1886,   138,  1776,   186,
     913,  1779,    72,   303,   328,   329,   330,    31,   964,  1787,
     185,   924,  1790,   272,   339,     5,   142,  1970,  1971,  1972,
    1798,   238,   123,  1801,     4,     5,   281,   940,     4,   239,
    1808,     3,     4,    60,   175,   290,     4,    60,   186,    66,
       5,   945,   238,    66,   244,  2710,     5,   341,   342,   238,
      73,  2716,    75,   253,  1639,     4,   231,    80,    42,    43,
      83,     3,     4,     4,   262,   191,    89,     5,    40,     3,
       4,   281,     5,   977,   272,   273,    99,     5,   253,   277,
     290,     5,   105,   209,   210,     5,     5,   114,     3,     4,
     216,   114,   218,     4,  1007,    14,    15,    12,     4,  1989,
    2444,    22,   129,    82,     4,   303,   129,   120,  2773,     4,
    2775,     5,    97,   288,     5,  1028,   143,    14,    15,   245,
      14,    15,   149,     4,  1037,    59,   149,   154,    49,   304,
     269,    52,     3,     4,    55,    22,     3,     4,  1051,   111,
    1053,   164,    61,     3,     4,  1058,  1059,  1060,    26,     4,
     173,   174,     4,     3,     4,  1068,     4,    17,  1071,     4,
    1073,    82,    49,     5,    61,    52,     4,    61,   196,    40,
     130,   194,   151,     3,     4,     5,  1089,     4,  1091,     4,
     207,     4,  1095,  1096,   310,   169,   170,     3,     4,   110,
      40,     4,   113,    61,   217,    82,   138,  1110,  1111,   226,
       5,  1114,  1115,  1116,   231,     5,   233,   167,   231,  1122,
     233,  1124,     9,   197,  1127,   202,  1129,    11,    14,    15,
       5,   193,  1178,   110,   247,   268,   113,     5,    26,   252,
     257,   258,   168,   175,   112,   258,     4,     5,   265,     4,
     111,     4,   265,   222,   223,   176,   124,    14,    15,   117,
     168,    28,   120,  1166,    14,    15,   283,  1170,   237,  1172,
     283,   111,     5,  1176,   224,    61,     3,     4,    14,    15,
     189,   190,   195,   296,   297,    12,   299,     4,  1191,   195,
    1193,   605,  1195,  1196,  1197,  1198,     4,     5,   156,  1202,
    1203,   195,   189,   190,    61,   189,   190,  1210,   187,   278,
      66,    61,     3,     4,  1217,   226,     7,     8,  1221,  1222,
    1223,   187,   339,    66,   112,    61,   339,    28,  1231,  1232,
    2098,   281,  1235,   191,  1191,    66,   124,     5,   206,  2107,
       5,  2221,  1245,   225,  1247,   659,   257,  1250,  2116,   226,
     664,   219,   224,   262,     3,     4,     5,  2237,     7,     8,
       3,     4,  2242,   272,   273,   342,     4,     5,   277,     4,
     158,   348,   283,   350,     4,   262,  1951,     4,   262,   195,
     257,  1238,    87,   150,   242,   272,   273,   245,   272,   273,
    1293,     5,  1295,   277,   303,  1298,  1299,  1254,  1301,    87,
    1303,     4,     5,   189,   190,   172,  1309,    83,  1311,   176,
       5,   269,   423,   424,   272,  1318,   303,     4,   206,   303,
       3,     4,     5,    99,   282,  1319,  1320,  1321,     4,     4,
      40,   219,   189,   190,     5,  1329,  1330,  1331,    88,   189,
     190,     5,  1336,  1337,  1338,  2020,     5,  1341,  1342,   150,
    1344,  1345,    99,   189,   190,    17,    66,     4,     4,  2436,
       5,   228,  2439,     4,  2441,    17,   116,    17,   186,  2044,
       4,   172,     4,    97,   192,   176,   262,  2454,  2455,     5,
    1374,  1375,     5,    87,  1378,  1379,   272,   273,    66,    99,
    1393,     4,  1395,  1396,  2471,   105,     5,   811,   174,     5,
     267,   111,    80,    87,     5,   262,     4,     4,   275,   276,
       5,    89,   262,   231,  1417,   272,   273,   303,  1421,   129,
       5,    99,   272,   273,     3,     4,   262,   228,    82,     4,
       9,    10,    11,     5,   184,  1392,   272,   273,   256,   149,
       4,   217,  1445,  1446,     5,     5,   303,     4,     4,   199,
      12,   129,  1455,   303,   164,     5,  1459,    12,     6,     4,
    2440,     4,     4,  1466,     4,   165,   267,   303,     5,     5,
      35,   149,     5,  2453,   275,   276,   252,  1480,  2458,     3,
       4,     5,  1485,   301,   194,     4,  1489,   156,  1491,  1492,
     156,  1494,  1495,  1496,     4,  1498,     5,   151,  1501,  1502,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,   259,
       4,  1514,  1515,  1516,  1517,   257,   194,   257,  1902,   285,
       5,  1524,  1525,   233,     4,  1528,  1529,  1530,   346,     5,
    1533,  1534,     5,     5,     3,     4,     5,   247,     7,     8,
       5,   106,     4,  1546,  1547,     4,  1549,  1550,   258,     5,
     300,     5,     3,     4,     5,   233,     7,     8,   270,   270,
     310,     5,   127,   128,     5,     5,     4,     4,   222,   223,
     135,     5,     5,  1957,     5,   285,     5,   238,     5,     5,
     258,     4,  2257,   237,     4,   238,     5,   297,   153,   299,
     300,  2266,     5,     4,  1597,  1598,  1599,     5,   163,  1602,
       5,   105,     5,   138,  1607,  1608,   105,  1610,  1611,  1612,
      40,  1614,  1615,   238,  1617,  1999,   105,  1620,  1621,   297,
    1034,   299,     5,   211,   278,    53,  1629,   243,    40,   339,
     211,     5,     4,   211,  1637,     5,     5,   211,    91,  1642,
    1643,     4,     4,    71,     5,  2320,    99,  1650,  2323,     5,
    1607,  2326,   105,  2328,     5,     5,  1659,     4,     4,   111,
      88,   111,     5,     5,     5,     4,     6,     5,     5,     4,
      38,     5,   100,   126,  1088,     5,     4,   138,     5,     5,
       4,    12,     5,     5,  1098,     4,     4,    12,     5,     4,
     118,     4,  1695,     4,   122,     5,   149,     4,     0,     5,
     238,   167,    38,   121,   157,     4,   134,   238,   238,   207,
       4,   195,     4,   247,  1717,  1718,     4,     4,  1675,  1722,
       4,   270,     5,     5,     5,  1728,     5,  2707,  1685,     5,
       5,     4,     4,  1690,     5,     4,     4,     4,  1732,     5,
       5,   194,     5,   238,   307,   173,   238,   238,   307,   202,
       4,  1745,     4,     4,     4,     4,     4,     4,     4,     4,
     307,  1755,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     307,     5,  1206,  1207,   247,     5,     5,     5,     5,   224,
     224,     5,   224,   224,     4,   258,     5,   224,     5,     4,
       4,     4,   270,     5,     5,     4,     4,   303,     5,     5,
       4,   274,  2206,  2207,     5,  2209,  2210,     5,     4,  2213,
    2214,     5,  1835,  1827,  1837,     4,  1839,     4,     6,     4,
       4,    12,     5,     5,     5,     5,     5,     4,   351,     5,
       4,   351,     5,     5,     5,  1858,  1859,  1860,  1861,  1862,
    1863,  1864,  1865,  1866,     4,     4,   270,     5,     4,   270,
       5,     5,     5,     4,     4,  2732,     5,     5,     5,  1882,
       5,  1884,     4,     4,   351,     5,     5,     5,     5,     4,
       4,  2275,     5,     5,     5,     5,     4,     4,  1901,  1902,
       5,     5,     5,     5,  1907,     4,     4,   283,     5,     4,
       4,     4,     4,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,     5,     5,  1928,  1929,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,     5,  1941,     5,
    1943,  1944,  1945,     5,     4,     4,     4,  2604,     5,     4,
       6,     5,     5,     4,  1957,  1958,     4,     4,     4,     4,
     351,     5,     5,     4,     4,   351,     5,     5,     5,     5,
       5,     5,     4,     4,  1388,     5,     4,     6,     5,     5,
    1394,     5,     4,     4,   351,     5,     5,  1990,     5,     5,
    1993,     4,  1995,     4,  1997,     5,  1999,  2000,     4,  2002,
       5,     5,  1416,     5,     4,  1419,  2009,  2010,     5,  1423,
       4,     4,     4,  2016,     4,  2018,     4,  2674,     4,  2022,
       4,     4,  2025,     5,     4,    32,     4,     4,     4,     4,
    1444,     4,     4,     4,     4,   351,  1450,   351,     5,     4,
       4,  2425,     5,     5,  1458,  2429,     4,  1461,     5,     5,
       5,     4,     4,     4,     4,     4,  1470,  1471,     4,     4,
       4,     4,     4,   283,     5,     4,     4,  1481,  2071,     5,
       5,     5,  2029,     5,     5,     4,  2613,     5,     5,     4,
       4,  2465,     5,     4,  2502,     5,     4,  2081,     4,     4,
       4,   351,     5,     5,     4,     4,     4,     4,     4,  2232,
       5,     4,   422,     5,     5,     4,   113,     4,     4,  2602,
       5,  2068,     5,     5,     4,  2674,     5,     5,     5,     4,
       4,   378,     5,  2169,     5,     5,  2670,  2121,  2122,  2123,
    2124,  2125,    -1,  2127,  2128,   729,    -1,    -1,  2132,  2133,
    2134,  2135,  2136,    -1,  2138,  2139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   957,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2175,    -1,    -1,   182,    -1,   184,   185,    -1,
     187,   188,    -1,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,    -1,    -1,    -1,    -1,    -1,  2202,
      -1,    -1,    -1,  2206,  2207,    -1,  2209,  2210,   215,    -1,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,    -1,  2222,
    2223,  2224,  2684,  2685,    -1,    -1,   233,   234,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2238,  2239,  2240,  2241,    -1,
    2243,  2244,  2245,  2246,  2247,  2248,    -1,  2250,    -1,    -1,
    2253,  2254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   274,    -1,  2272,
      -1,    -1,  2275,  2276,    -1,    -1,    -1,  2280,    -1,   286,
      -1,  2284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   306,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2332,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2335,    -1,    -1,  2338,  2339,  2340,  2341,  2342,    -1,
    2344,  2345,    -1,  2347,  2348,  2349,  2350,  2351,    -1,  2353,
    2354,    -1,  2356,  2357,  2358,  2359,  2360,   348,  2362,  2363,
      -1,  2365,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2375,  2376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2386,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2404,    -1,    -1,    -1,  2408,    -1,   414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2418,  2419,    -1,   425,    -1,
      -1,  2424,  2425,    -1,    -1,  2428,  2429,   434,    -1,    -1,
      -1,  2434,    -1,    -1,  2437,  2438,    -1,  1851,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2456,  2457,    -1,  2459,  2460,  2461,  2462,
    2463,    -1,  2465,  2466,    -1,    -1,    -1,  2470,    -1,    -1,
      -1,    -1,    -1,  1887,    -1,    -1,    -1,    -1,    -1,  2482,
      -1,    -1,    -1,    -1,  2487,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   502,   503,    -1,    -1,    -1,
    2503,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   515,    -1,
      -1,    -1,    -1,   520,    -1,    -1,   497,    -1,    -1,    -1,
    2514,    -1,   529,   504,    -1,    -1,   507,    -1,    -1,  2523,
      -1,   512,    -1,    -1,    -1,   516,  1335,    -1,  2532,    -1,
    2534,    -1,  2545,    -1,  2538,    -1,    -1,  2550,  1347,  2552,
      -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1365,  1366,  2571,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2589,    -1,  2634,    -1,
    2593,   598,   599,   600,   601,    -1,    -1,    -1,    -1,    -1,
     581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2613,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2623,
      -1,  2625,    -1,  2627,    -1,  2638,  2630,    -1,  2632,    55,
    2643,    -1,  2645,    -1,    -1,    -1,    -1,    -1,    -1,  2652,
      66,   658,    -1,    -1,  2657,    -1,    -1,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,
      -1,  2684,  2685,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2711,   690,
     126,  2714,    -1,   129,  2717,    -1,   697,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2728,  2729,  2730,  2731,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,  2740,    -1,    -1,
    2743,   157,    -1,    -1,    -1,  2702,    -1,  2750,    -1,  2752,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2021,  2734,   194,    -1,
    2737,    -1,    -1,     3,     4,    -1,   202,    -1,    -1,    -1,
      -1,    -1,    -1,  2038,  2039,  2040,    -1,    -1,  2043,    19,
    2045,  2046,    -1,    -1,  2049,  2050,  2051,    -1,   815,  2054,
    2055,     3,     4,  2058,    -1,  2060,  2061,    -1,  2063,    39,
     827,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,   247,    -1,   814,    -1,    -1,    56,    -1,    -1,    -1,
     821,    -1,   258,    -1,  2258,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,   274,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   283,    -1,   285,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,   866,   867,    -1,    -1,    -1,
     871,    -1,    -1,   874,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   885,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,  2171,    -1,   935,  2174,
      -1,    -1,    -1,    -1,  2179,    -1,   156,  2182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1751,    -1,    -1,    -1,  2201,    -1,    -1,    -1,
    1759,  1760,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   193,    -1,  1774,  1775,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1785,  1786,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,    -1,  1796,  1797,    -1,
     220,    -1,    -1,  1010,   985,    -1,    -1,  1806,  1807,    -1,
      -1,   231,    -1,  1812,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1822,    -1,    -1,    -1,    -1,   220,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2452,    -1,
      -1,    -1,    -1,  2288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1062,    -1,    -1,  2472,    -1,
      -1,    -1,  2476,    -1,    -1,  1072,    -1,    -1,    -1,    -1,
      -1,   291,    -1,    -1,    -1,    -1,  2321,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,  2400,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1174,    -1,    -1,
      -1,    -1,    -1,    -1,    44,  2420,    -1,    -1,    -1,    -1,
      -1,    -1,  2427,    -1,  1191,  2430,  2431,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1179,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,  1215,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,  1225,    -1,
      -1,    -1,    -1,    -1,    94,    95,    -1,    -1,  1209,    -1,
      -1,   101,    -1,  1214,    -1,    -1,    -1,  1244,    -1,    -1,
      -1,    -1,    -1,  1224,    -1,    -1,    -1,  1254,    -1,    -1,
      -1,    -1,  1259,    -1,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2082,    -1,   155,   156,    -1,    -1,    -1,
      -1,    -1,   162,  2092,    20,    21,    22,  2096,  2097,    -1,
      -1,  2546,    -1,    -1,    -1,    -1,  2105,  2106,    -1,  2723,
      -1,    -1,   182,    -1,    -1,  2114,  2115,    -1,    -1,    -1,
    2565,  2120,    48,    49,    -1,    -1,    52,    -1,    -1,    -1,
      -1,  2130,  2131,    59,    -1,    -1,    62,    -1,    -1,    -1,
      66,    -1,  2141,  2142,    -1,    -1,    -1,    -1,    74,    75,
     220,    -1,    -1,  2152,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,  2161,    -1,  2163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,   110,  1392,    -1,   113,    -1,    -1,
      -1,  2636,  2637,    -1,  2639,    -1,  2641,  2642,    -1,  2644,
      -1,   271,    -1,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,    -1,    -1,    -1,  1422,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,    -1,    -1,    -1,  1451,   171,    -1,  1454,    -1,     4,
      -1,    -1,  2697,    -1,   180,    -1,    -1,  1464,  1465,    -1,
      -1,    -1,    -1,    -1,    19,  1472,    -1,    -1,    -1,    -1,
      -1,    -1,  1479,    -1,    -1,    -1,    -1,    -1,    -1,  1460,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,  2744,
     226,    56,    -1,    -1,    19,    -1,   232,   233,    -1,    -1,
      -1,    -1,  1519,    -1,    -1,  1522,  1523,    -1,    -1,    -1,
      -1,    -1,   248,    -1,  1531,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   258,    -1,    -1,    -1,    -1,  2336,    -1,  1520,
      -1,    56,    -1,    -1,    -1,  1526,   101,  2346,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2355,   283,    -1,   285,
      -1,    -1,    -1,    -1,   119,  2364,    -1,    -1,    -1,   295,
      -1,    -1,  2371,     4,    -1,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,  2382,    -1,    -1,   101,    -1,    19,  2388,
      -1,    -1,  2391,    -1,    -1,  2394,    -1,    -1,    -1,    -1,
    1607,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   339,    -1,    -1,    -1,    -1,  1625,    -1,
    1601,    -1,  1603,    -1,    -1,    56,    -1,    -1,  1609,    -1,
      -1,    -1,    -1,    -1,  1641,    -1,    -1,    -1,   193,    -1,
      16,   156,    -1,    -1,    -1,    -1,   201,    23,    -1,  1656,
      -1,  1658,    -1,  1634,   209,   210,    -1,    -1,    -1,  1640,
     215,  1668,    -1,    -1,  1671,   220,  1673,  1674,  1675,  1676,
     101,    -1,  1679,    -1,    -1,  1682,  1657,    -1,  1685,  1686,
      -1,  1688,  1689,  1690,  1691,    -1,  1693,  1694,  1669,    -1,
      -1,    -1,  1699,  1700,  1701,    -1,  1677,  1704,  1705,    -1,
     215,    -1,    -1,  1710,  1711,   220,    -1,    -1,    -1,    -1,
      -1,    -1,  2511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2520,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
    2529,    -1,    -1,    -1,    -1,    -1,  2535,    -1,    -1,   294,
    2539,    -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    -1,   215,    -1,    -1,    -1,   343,   220,
      -1,    -1,    -1,   348,   349,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,     4,    -1,    -1,    -1,  1834,    -1,    -1,
      -1,  1838,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,  1850,    -1,    -1,  1853,    -1,    -1,    -1,
      -1,  1832,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,    -1,   243,    -1,    -1,
      -1,    -1,    -1,  1854,    -1,    -1,  1883,    -1,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,  1888,  1889,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
     101,    -1,    -1,    -1,  1905,  1906,    -1,    -1,    -1,  1910,
    1911,    -1,  1939,    -1,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    65,    66,    -1,    -1,    69,    -1,    -1,  1950,
      -1,    -1,  1953,  1954,    -1,   156,    -1,    -1,    -1,    -1,
    1961,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2013,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1996,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2012,    -1,    -1,    19,    -1,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,  2026,    -1,  2028,    -1,    -1,
    2057,    -1,    -1,   156,    -1,  2036,    -1,    -1,    -1,    -1,
    2041,    -1,    -1,    -1,    -1,   168,  2047,    -1,    -1,    -1,
      -1,  2052,    -1,    -1,    59,  2056,    -1,    -1,  2059,    -1,
      -1,  2062,   185,  2064,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   207,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    -1,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,  2173,    -1,   271,  2176,
      -1,   156,    -1,    -1,    -1,    -1,    -1,  2184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2200,    -1,    -1,  2203,    -1,    58,    -1,
      -1,  2208,    -1,    -1,  2211,  2212,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   220,   339,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2249,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2302,   156,    -1,    -1,    -1,
      -1,    -1,   287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    -1,
      -1,    -1,  2399,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2397,    -1,    -1,    -1,
      -1,    -1,  2403,    -1,    -1,  2432,  2407,   287,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2443,    -1,    -1,    -1,
      -1,    -1,  2423,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    -1,    -1,
      -1,    -1,    -1,    -1,  2491,    -1,    -1,    -1,  2495,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2494,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    56,    19,    55,    -1,    -1,    -1,
      -1,  2548,  2549,    62,  2551,    -1,    -1,    66,    -1,  2556,
    2557,    -1,    -1,    -1,  2561,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      99,    -1,    -1,    -1,    -1,    -1,   105,  2594,    -1,    -1,
     109,   110,    -1,    -1,   113,  2576,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
     129,  2618,    -1,    -1,    -1,    19,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,    -1,   194,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2666,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,  2702,    -1,   101,   220,    -1,
      -1,    -1,    -1,   156,    -1,   224,  2687,   226,    -1,    -1,
      -1,    -1,  2719,   232,   233,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2734,   247,   248,
    2737,   215,    -1,    -1,    -1,    -1,   220,    -1,   257,   258,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   156,    -1,  2735,    -1,    -1,   279,    -1,    -1,
      -1,    -1,    -1,    -1,   283,    -1,   285,   220,    -1,    -1,
      -1,    -1,    -1,    -1,  2755,    -1,    -1,  2758,   297,    -1,
     299,    -1,    -1,    -1,    -1,    -1,   305,    -1,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   220,    -1,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,    -1,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
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
      -1,    -1,   151,   152,    -1,    -1,   155,    -1,   156,    -1,
     159,    -1,   161,   161,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   182,   183,    -1,    -1,   186,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338
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
     120,   438,     5,    65,   366,   437,    16,   506,    66,    81,
     181,   239,   281,   290,   447,    66,   231,   448,   282,    61,
     281,   304,   449,    21,   134,   238,   266,   450,    37,    47,
      74,   149,   185,   253,   304,   451,   366,    89,    16,   195,
     456,   364,   459,    72,   462,    31,   463,    44,    87,   191,
     464,   149,   217,   258,   296,   465,   364,    18,    58,   115,
     172,   287,   364,   466,     4,   192,   469,     5,     4,     6,
     120,   354,     4,     5,   245,   471,     5,   473,     5,   117,
     191,   245,   269,   474,    93,   111,   186,   487,     5,   485,
       5,   269,   486,     4,     5,   356,   356,   354,   354,     5,
       4,     5,    60,    66,    73,    75,    80,    83,    89,    99,
     105,   114,   129,   149,   164,   173,   174,   194,   217,   231,
     233,   247,   252,   258,   265,   283,   296,   297,   299,   339,
     491,     5,     4,   196,   203,   204,   239,   344,   367,   354,
     364,   354,     5,   354,    40,   111,   354,   529,   356,   354,
     364,   366,   528,   354,   370,   354,     4,   365,    54,    90,
     140,   245,   533,     4,     4,   354,     4,   149,   258,   534,
       5,   364,     4,    40,   111,   354,   541,   354,    97,    61,
     120,   245,   272,   543,   120,   556,    61,   117,   120,   156,
     191,   242,   245,   269,   272,   282,   545,   546,    61,   120,
     272,   555,     5,     4,    34,   107,   202,   538,    66,   356,
     382,    66,   356,   383,    66,   356,   384,    13,   188,   537,
     354,   354,   224,   354,   385,   354,   269,     4,   354,   354,
       4,   565,     4,   285,   563,     4,   285,   564,     4,   370,
     123,   354,   568,   354,   354,     4,     5,   354,    12,   354,
     354,   354,    30,    94,   162,   249,   254,   369,   369,     4,
     196,   354,   354,     4,     4,     4,   354,   354,   354,   354,
       4,     4,     5,     5,   364,     5,   354,   354,   360,   362,
     362,   364,   354,   354,   354,   354,   354,   354,   354,   364,
     366,   363,   354,   354,   363,   354,     5,   268,   103,   186,
     418,   192,   249,   421,   168,    78,   171,   249,   422,   138,
     175,   406,   406,     4,   425,     4,   427,   192,   256,   429,
     176,   430,   168,   370,   354,   354,   364,   364,   370,   370,
     370,   364,   370,   354,   364,   443,     4,   366,   441,   195,
       4,   165,   310,   442,   195,   364,   131,   291,   445,     5,
       5,     4,   195,   354,     4,     5,    60,    66,   114,   129,
     143,   149,   154,   207,   226,   231,   233,   257,   258,   265,
     283,   339,   500,   366,   187,   187,    66,   452,    66,   453,
      66,   454,   224,   455,   354,     5,   225,   457,   365,   370,
       5,   364,   364,   364,   364,     4,   356,     4,     4,   195,
     354,    14,    15,    61,   189,   190,   262,   272,   273,   303,
      87,     5,     5,    14,    15,    61,   189,   190,   262,   272,
     273,   277,   303,    87,   156,   161,   365,   477,   482,    87,
     156,     5,   475,     4,     4,    14,    61,   189,   262,   272,
     303,     5,     5,     4,   354,   365,    20,    21,    22,    48,
      49,    52,    55,    62,    66,    74,    75,    82,    83,    99,
     105,   109,   110,   113,   129,   149,   171,   194,   224,   226,
     232,   233,   247,   248,   257,   258,   283,   285,   297,   299,
     305,   339,    66,    80,    89,    99,   129,   149,   194,   233,
     258,   297,   299,     4,    30,   160,   212,   238,   494,     5,
      63,   104,   235,   250,   251,   341,   342,   499,    99,   492,
      17,    40,   111,   193,   498,     4,     5,    17,   211,   292,
     354,   258,   499,   507,   124,   499,   508,    36,    40,   111,
     132,   193,   291,   354,   509,   364,   356,    91,    99,   105,
     126,   149,   157,   194,   202,   247,   258,   274,   512,    40,
     111,   193,     5,   284,    17,   211,   292,   516,   285,   356,
     517,     5,    99,   105,   300,    17,    17,     4,   354,   354,
     354,   354,   354,   354,   370,   354,   354,   363,   354,     4,
     370,     4,    40,   111,   193,   263,   535,    40,   111,   193,
     263,   536,     4,    97,     5,     5,    87,     4,     5,     5,
      87,     5,   546,    61,   120,   156,   272,   550,    61,   120,
     272,   554,    87,   156,    61,   120,   272,   548,     4,    61,
     120,   272,   547,     5,     5,     4,     4,     5,     5,     5,
     354,   354,   354,     4,   354,   560,   354,   354,     6,   365,
       4,     5,     4,     4,     5,     4,    97,   260,   371,   354,
     354,    12,     5,    12,   354,   354,    12,     4,    12,     4,
       4,   354,   354,   354,     4,   356,     4,     4,   370,   364,
     370,   354,   354,   354,   364,   354,   363,   354,   354,     5,
       5,   354,   366,   354,   364,   354,   370,   370,   371,   371,
     371,   370,   363,   354,   370,   354,   133,   246,   357,   444,
     165,     5,     4,   370,   156,   156,     4,     5,     4,     4,
     354,   439,   354,    20,    21,    22,    48,    49,    52,    59,
      62,    66,    74,    75,    82,   109,   110,   113,   129,   149,
     171,   180,   224,   226,   232,   233,   248,   258,   283,   285,
     295,   305,   339,    66,   129,   154,   233,   283,    30,   160,
     212,   238,   501,   354,   207,   354,   502,    17,   354,   257,
     512,   257,   207,   354,   503,   285,   504,    17,    98,   354,
     354,     5,   371,    56,   364,     4,     5,   468,   354,     5,
       5,     5,   156,   183,   375,   375,   164,   264,   373,     4,
       4,     5,     5,   472,   270,   270,     5,     5,     5,    17,
     158,   374,   374,   373,     4,     4,   373,     5,     5,   476,
     161,   338,   365,   480,     5,   479,     5,     5,   483,     5,
     484,     5,    14,    15,    61,   189,   190,   262,   272,   273,
     277,   303,     4,     4,     5,     5,   375,   373,     4,     5,
       5,   370,    82,   151,   222,   223,   237,   278,   378,     7,
       8,   354,   359,   238,   121,   238,   238,   105,    40,    66,
      99,   105,   111,   129,   149,   164,   194,   233,   247,   258,
     285,   297,   299,   300,   339,   493,   121,   238,     5,    27,
     166,   238,   281,   138,   105,    22,    49,    52,    82,   110,
     113,   226,   257,    22,    49,    52,    55,    82,   110,   113,
     226,   257,   283,    40,   121,   238,   238,   105,     5,   211,
      27,   224,    36,   132,   291,   354,   261,   268,   121,   243,
     364,   512,    40,   130,   224,   281,   243,   211,     5,     5,
     247,    27,   224,     4,     5,     5,   211,    36,   132,   291,
     354,   512,   211,   356,     4,     4,   354,     5,   303,    22,
      27,    48,    49,    51,    52,    62,    74,    75,    82,    85,
     102,   109,   110,   113,   171,   226,   232,   248,   257,   284,
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
       4,     5,     5,     5,     5,     5,   364,   370,   364,   364,
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
       5,     5,     5,     5,   370,   372,   372,   372,   370,   372,
     371,   372,   372,   370,   372,   372,   372,   370,   372,   372,
     370,   364,   372,   370,   372,   372,   370,   372,   370,     4,
     366,     5,   354,     4,   375,   374,     4,   374,     5,     5,
       5,   374,   374,   373,     4,     4,     5,     5,     5,     5,
     374,   374,   373,     4,     4,     5,     5,     5,     5,   374,
     374,   373,     4,     4,     5,   374,   375,   375,   375,   375,
     375,     4,   375,   375,     4,   374,   374,   375,   375,   375,
     375,   375,     4,   375,   375,     4,   374,   374,     4,     4,
     374,     4,   374,   374,     4,     4,     4,   365,   372,     4,
     364,   372,   354,   364,     4,   372,   372,   364,     4,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     364,   372,   354,   364,     4,   363,   363,   364,   363,   363,
     364,   364,   363,   363,   354,   354,   354,   354,   354,   354,
     359,   354,   354,   354,   351,   351,   351,   351,   351,   351,
     351,   511,   351,   359,   354,   354,   354,   354,   359,   354,
     354,   354,   354,   354,   354,   370,   354,   303,   358,   359,
     354,   354,   371,   356,     4,     4,   371,     4,   354,   363,
     354,    59,   354,     5,     5,   354,     4,   368,   372,     5,
       4,     5,     4,     5,   364,     5,   371,   372,   371,   371,
     371,     5,     4,   354,   375,   374,   375,   375,   375,   375,
     375,     4,   375,   375,   374,   375,   375,   375,   375,   375,
       4,   375,   375,   374,   375,   375,   375,   375,   375,     4,
     375,   375,   374,   375,   374,     4,   375,   375,   374,     4,
     375,   374,     4,   374,   374,   370,   364,   372,     4,   370,
     354,   370,   354,   354,   354,   372,     4,   370,   354,   363,
     372,   354,   363,   372,   372,   364,   354,     4,   377,   377,
     354,   354,   377,   359,   377,   513,   364,   493,     5,     4,
       5,     5,     5,     4,   356,   359,   377,   377,   354,   354,
     359,   354,   354,   354,   354,   354,   363,   354,     5,   513,
     354,   377,   356,   514,   515,     5,   356,     4,     5,   354,
       5,     4,     6,   354,    32,   280,   414,   364,     5,   370,
     364,   414,   354,   374,   375,   374,   375,   374,   375,   375,
     374,   375,   374,   374,   354,   372,   364,   364,   354,   364,
     354,   364,   364,   354,   364,   372,     4,   513,   513,   358,
     354,   513,     4,   513,   370,     5,     4,     4,   513,   513,
     358,   354,     4,   513,   513,   354,   364,   513,   513,   513,
     514,   520,   521,   512,   518,   519,     4,     5,     5,     6,
       4,   186,   301,   346,   354,   405,     4,   364,    32,   280,
     379,     4,   375,   375,   375,   375,   375,   365,   372,   372,
     354,   372,     4,   372,   372,   354,   372,   354,   513,   513,
       4,   354,   513,     5,   354,   513,     4,   354,   513,   370,
     520,   522,   523,   351,   519,     5,     5,     4,   354,   406,
     354,   406,   370,   372,     4,   364,   366,     4,   359,   358,
     354,   354,   358,   354,   364,   523,   356,     5,     5,   354,
     354,   354,   354,   379,     5,   364,   366,   370,   364,   366,
     513,   354,     4,   513,   354,   372,     5,     5,   354,     5,
     354,   370,   370,     4,   513,     4,     5,     5,     5,   358,
     358,   513,   513,   513
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
#line 1246 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 477:
#line 1249 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 478:
#line 1252 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 479:
#line 1253 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 480:
#line 1254 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 481:
#line 1257 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 482:
#line 1258 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 483:
#line 1259 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 484:
#line 1260 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 485:
#line 1261 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 486:
#line 1262 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 491:
#line 1269 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 493:
#line 1271 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 494:
#line 1274 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 495:
#line 1275 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 496:
#line 1278 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 497:
#line 1279 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 498:
#line 1282 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 499:
#line 1283 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 500:
#line 1286 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 501:
#line 1287 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 502:
#line 1290 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 504:
#line 1292 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 505:
#line 1295 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 506:
#line 1296 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 508:
#line 1300 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 509:
#line 1304 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 510:
#line 1307 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 511:
#line 1314 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 512:
#line 1315 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 513:
#line 1318 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 516:
#line 1321 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 517:
#line 1322 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 518:
#line 1323 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 519:
#line 1324 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 521:
#line 1326 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 522:
#line 1327 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 523:
#line 1328 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 525:
#line 1330 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 526:
#line 1331 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 527:
#line 1332 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 528:
#line 1333 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1337 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 531:
#line 1340 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 532:
#line 1341 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 533:
#line 1344 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 534:
#line 1345 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 535:
#line 1346 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 536:
#line 1347 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 537:
#line 1350 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 538:
#line 1351 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 539:
#line 1352 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 540:
#line 1353 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 541:
#line 1356 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 542:
#line 1357 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1358 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1359 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 545:
#line 1360 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 546:
#line 1361 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 547:
#line 1364 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 548:
#line 1365 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 549:
#line 1366 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1370 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 553:
#line 1371 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 554:
#line 1374 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 555:
#line 1377 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 556:
#line 1378 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1382 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 558:
#line 1384 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 559:
#line 1385 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1397 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1399 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1401 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1402 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1404 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1406 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 572:
#line 1408 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1410 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1412 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1416 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1417 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1418 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 580:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 582:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1428 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 586:
#line 1432 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1434 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1436 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1438 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1440 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 591:
#line 1442 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1444 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 593:
#line 1446 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 594:
#line 1449 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1451 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1453 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 602:
#line 1461 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1462 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1463 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1464 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1465 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 607:
#line 1466 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1468 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 609:
#line 1470 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 610:
#line 1471 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1472 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1473 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 613:
#line 1476 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1477 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1478 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 619:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 627:
#line 1496 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1499 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1502 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 633:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 636:
#line 1525 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 643:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1560 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 653:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1589 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 658:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1595 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1599 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 662:
#line 1604 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 664:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 670:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 672:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 673:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 674:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 675:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 676:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 681:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 683:
#line 1655 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 684:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1657 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1658 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 693:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1669 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1670 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1674 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1676 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 699:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 700:
#line 1681 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1683 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1686 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 703:
#line 1687 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 704:
#line 1690 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1691 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 706:
#line 1692 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 707:
#line 1695 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 708:
#line 1702 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 709:
#line 1703 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 710:
#line 1704 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 711:
#line 1705 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 712:
#line 1706 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 713:
#line 1707 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 714:
#line 1708 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 715:
#line 1712 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 717:
#line 1720 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 718:
#line 1721 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 720:
#line 1725 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 721:
#line 1726 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 722:
#line 1727 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 724:
#line 1728 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 725:
#line 1729 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 726:
#line 1730 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 728:
#line 1732 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 729:
#line 1733 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 730:
#line 1735 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 731:
#line 1737 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 732:
#line 1739 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 733:
#line 1742 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 734:
#line 1744 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1750 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 738:
#line 1753 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1755 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1758 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 741:
#line 1761 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1764 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 743:
#line 1767 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 744:
#line 1771 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 745:
#line 1775 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 746:
#line 1780 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 747:
#line 1784 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 748:
#line 1785 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1787 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1788 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 751:
#line 1790 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1792 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 753:
#line 1794 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 754:
#line 1796 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1797 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1799 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 757:
#line 1801 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 758:
#line 1804 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 759:
#line 1808 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1812 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1814 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 762:
#line 1816 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1818 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1820 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1822 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1824 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1826 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1828 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1830 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 770:
#line 1832 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 771:
#line 1834 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 772:
#line 1836 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 773:
#line 1838 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 774:
#line 1839 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1841 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1843 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 777:
#line 1844 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1845 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1847 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 780:
#line 1849 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 782:
#line 1851 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1855 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 787:
#line 1861 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 788:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1867 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 790:
#line 1871 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 791:
#line 1875 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 792:
#line 1880 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 793:
#line 1884 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 794:
#line 1885 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 795:
#line 1886 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 796:
#line 1888 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 797:
#line 1890 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 798:
#line 1894 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 799:
#line 1895 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 800:
#line 1896 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1898 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 802:
#line 1901 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 803:
#line 1904 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1907 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 805:
#line 1908 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 806:
#line 1910 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1913 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 808:
#line 1917 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1919 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 810:
#line 1920 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 811:
#line 1922 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 812:
#line 1925 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 813:
#line 1928 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 814:
#line 1929 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 815:
#line 1931 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 816:
#line 1932 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 817:
#line 1933 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 818:
#line 1935 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 819:
#line 1936 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 820:
#line 1938 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1941 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 822:
#line 1944 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 823:
#line 1946 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 824:
#line 1947 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 828:
#line 1952 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 829:
#line 1953 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 830:
#line 1955 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 831:
#line 1957 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 832:
#line 1959 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 833:
#line 1960 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 835:
#line 1963 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 838:
#line 1968 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1969 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 840:
#line 1970 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 841:
#line 1971 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1972 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 843:
#line 1973 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1974 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 847:
#line 1977 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 850:
#line 1982 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1983 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 852:
#line 1984 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1985 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1987 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 855:
#line 1988 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1989 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 857:
#line 1990 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 858:
#line 1991 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 859:
#line 1993 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 860:
#line 1994 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 861:
#line 1995 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 862:
#line 1996 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 863:
#line 1997 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 864:
#line 1998 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 865:
#line 2001 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 866:
#line 2002 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 867:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 868:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 869:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 870:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 871:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 872:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 873:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 874:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 875:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 876:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 877:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 878:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 879:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 880:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 881:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 882:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 883:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 884:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 885:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 886:
#line 2024 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 887:
#line 2025 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 888:
#line 2026 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 889:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 890:
#line 2028 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 891:
#line 2030 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 892:
#line 2040 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2048 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2057 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2065 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2072 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2079 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2087 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2095 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2100 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2105 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2110 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2115 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2139 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2149 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2159 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2168 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2176 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2186 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2196 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2206 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2218 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2227 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
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
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
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
#line 10875 "frame/parser.C"
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

