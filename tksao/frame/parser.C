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
#line 852 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 865 "frame/parser.C"

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
#define YYFINAL  354
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5678

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  352
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1258
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2781

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
     457,   460,   463,   466,   469,   472,   475,   477,   480,   482,
     485,   487,   490,   493,   500,   503,   508,   511,   514,   517,
     521,   524,   527,   529,   532,   534,   537,   542,   548,   551,
     555,   561,   568,   570,   572,   574,   582,   594,   603,   616,
     618,   621,   624,   626,   628,   631,   634,   637,   640,   644,
     648,   651,   654,   656,   658,   660,   662,   664,   666,   668,
     671,   674,   677,   681,   684,   687,   690,   697,   708,   710,
     713,   715,   722,   733,   735,   738,   741,   744,   747,   750,
     753,   767,   781,   794,   807,   809,   810,   812,   814,   819,
     826,   828,   830,   832,   834,   836,   838,   840,   842,   844,
     849,   853,   858,   859,   866,   875,   878,   882,   886,   890,
     891,   896,   901,   906,   911,   915,   919,   921,   925,   931,
     936,   941,   945,   948,   949,   951,   953,   957,   960,   963,
     966,   969,   972,   975,   978,   981,   984,   987,   990,   993,
     996,   999,  1001,  1004,  1007,  1012,  1022,  1025,  1028,  1031,
    1033,  1037,  1040,  1043,  1045,  1048,  1057,  1060,  1062,  1065,
    1067,  1070,  1072,  1077,  1087,  1090,  1092,  1094,  1096,  1098,
    1101,  1103,  1105,  1108,  1110,  1111,  1114,  1117,  1119,  1120,
    1123,  1126,  1128,  1130,  1133,  1136,  1139,  1141,  1143,  1145,
    1147,  1149,  1151,  1152,  1154,  1157,  1159,  1164,  1170,  1171,
    1174,  1176,  1182,  1185,  1188,  1190,  1192,  1194,  1197,  1199,
    1202,  1204,  1206,  1207,  1209,  1211,  1212,  1214,  1220,  1227,
    1231,  1238,  1242,  1244,  1248,  1250,  1252,  1254,  1258,  1265,
    1273,  1279,  1281,  1283,  1288,  1294,  1296,  1300,  1301,  1303,
    1306,  1308,  1313,  1315,  1318,  1320,  1323,  1327,  1330,  1332,
    1335,  1337,  1342,  1345,  1347,  1349,  1353,  1355,  1358,  1362,
    1365,  1366,  1368,  1370,  1375,  1378,  1379,  1381,  1385,  1390,
    1395,  1396,  1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,
    1414,  1416,  1418,  1420,  1422,  1424,  1427,  1429,  1432,  1434,
    1437,  1440,  1443,  1446,  1448,  1450,  1452,  1453,  1455,  1456,
    1458,  1459,  1461,  1462,  1464,  1465,  1468,  1471,  1472,  1474,
    1477,  1479,  1486,  1492,  1494,  1496,  1498,  1501,  1504,  1506,
    1508,  1510,  1512,  1515,  1517,  1519,  1521,  1524,  1526,  1528,
    1530,  1533,  1536,  1539,  1540,  1542,  1543,  1545,  1547,  1549,
    1551,  1553,  1555,  1557,  1559,  1562,  1565,  1568,  1570,  1573,
    1577,  1579,  1582,  1585,  1590,  1597,  1599,  1610,  1612,  1615,
    1619,  1623,  1626,  1629,  1632,  1635,  1638,  1641,  1644,  1649,
    1654,  1659,  1663,  1667,  1673,  1678,  1683,  1688,  1692,  1696,
    1700,  1704,  1707,  1710,  1715,  1719,  1723,  1727,  1731,  1736,
    1741,  1746,  1751,  1757,  1762,  1769,  1777,  1782,  1787,  1793,
    1796,  1800,  1804,  1808,  1811,  1815,  1819,  1823,  1827,  1832,
    1836,  1842,  1849,  1853,  1857,  1862,  1866,  1870,  1874,  1878,
    1882,  1888,  1892,  1896,  1901,  1905,  1908,  1911,  1913,  1917,
    1922,  1927,  1932,  1937,  1942,  1949,  1954,  1959,  1965,  1970,
    1975,  1980,  1985,  1991,  1996,  2003,  2011,  2016,  2021,  2027,
    2033,  2039,  2045,  2051,  2057,  2065,  2071,  2077,  2084,  2089,
    2094,  2099,  2104,  2109,  2116,  2121,  2126,  2132,  2138,  2144,
    2150,  2156,  2163,  2169,  2177,  2186,  2192,  2198,  2205,  2209,
    2213,  2217,  2221,  2226,  2230,  2236,  2243,  2247,  2251,  2256,
    2260,  2264,  2268,  2272,  2276,  2282,  2286,  2290,  2295,  2300,
    2305,  2309,  2315,  2320,  2325,  2328,  2332,  2339,  2346,  2348,
    2350,  2352,  2355,  2358,  2361,  2365,  2369,  2372,  2385,  2388,
    2391,  2393,  2397,  2402,  2405,  2406,  2410,  2412,  2414,  2417,
    2420,  2423,  2426,  2429,  2434,  2439,  2444,  2448,  2453,  2459,
    2468,  2475,  2480,  2490,  2497,  2505,  2516,  2528,  2541,  2551,
    2557,  2562,  2569,  2573,  2579,  2585,  2592,  2598,  2603,  2613,
    2624,  2636,  2646,  2653,  2660,  2667,  2674,  2681,  2688,  2695,
    2702,  2709,  2717,  2725,  2728,  2733,  2738,  2743,  2748,  2754,
    2759,  2764,  2770,  2776,  2780,  2785,  2790,  2795,  2800,  2808,
    2818,  2825,  2836,  2848,  2861,  2871,  2875,  2878,  2882,  2888,
    2896,  2901,  2905,  2909,  2916,  2924,  2932,  2937,  2942,  2947,
    2957,  2962,  2966,  2971,  2979,  2987,  2990,  2994,  2998,  3002,
    3007,  3010,  3013,  3018,  3029,  3033,  3035,  3039,  3042,  3045,
    3048,  3051,  3055,  3061,  3066,  3072,  3075,  3083,  3087,  3090,
    3093,  3097,  3100,  3103,  3106,  3110,  3113,  3117,  3122,  3126,
    3130,  3137,  3142,  3145,  3149,  3152,  3155,  3160,  3164,  3168,
    3171,  3175,  3177,  3180,  3182,  3185,  3188,  3191,  3193,  3195,
    3197,  3199,  3202,  3204,  3207,  3210,  3212,  3215,  3218,  3220,
    3223,  3225,  3227,  3229,  3231,  3233,  3235,  3237,  3239,  3240,
    3242,  3245,  3248,  3251,  3255,  3261,  3269,  3277,  3284,  3291,
    3298,  3305,  3311,  3318,  3325,  3332,  3339,  3346,  3353,  3360,
    3372,  3380,  3388,  3396,  3406,  3416,  3427,  3440,  3453,  3456,
    3459,  3463,  3468,  3473,  3478,  3481,  3486,  3491,  3493,  3495,
    3497,  3499,  3501,  3503,  3505,  3507,  3510,  3512,  3514,  3516,
    3520,  3524,  3533,  3540,  3551,  3559,  3567,  3573,  3576,  3579,
    3583,  3588,  3594,  3598,  3604,  3610,  3614,  3619,  3625,  3631,
    3637,  3641,  3647,  3650,  3654,  3658,  3664,  3668,  3672,  3676,
    3681,  3687,  3693,  3697,  3703,  3709,  3713,  3718,  3724,  3730,
    3733,  3736,  3740,  3746,  3753,  3760,  3764,  3768,  3772,  3779,
    3785,  3791,  3794,  3798,  3802,  3808,  3815,  3819,  3822,  3825,
    3829,  3832,  3836,  3839,  3843,  3849,  3856,  3859,  3862,  3865,
    3867,  3872,  3877,  3879,  3882,  3885,  3888,  3891,  3894,  3897,
    3900,  3904,  3907,  3911,  3914,  3918,  3920,  3922,  3924,  3926,
    3928,  3929,  3932,  3933,  3936,  3937,  3939,  3940,  3941,  3943,
    3945,  3947,  3949,  3957,  3966,  3969,  3974,  3977,  3982,  3989,
    3992,  3994,  3996,  4000,  4004,  4006,  4011,  4014,  4016,  4020,
    4024,  4029,  4033,  4037,  4041,  4043,  4045,  4047,  4049,  4051,
    4053,  4055,  4057,  4059,  4061,  4063,  4065,  4067,  4069,  4072,
    4073,  4074,  4077,  4079,  4083,  4085,  4089,  4091,  4094,  4097,
    4099,  4103,  4104,  4105,  4108,  4111,  4113,  4117,  4123,  4125,
    4128,  4131,  4135,  4138,  4141,  4144,  4146,  4148,  4150,  4152,
    4157,  4160,  4164,  4168,  4171,  4175,  4178,  4181,  4184,  4188,
    4192,  4196,  4199,  4203,  4205,  4209,  4213,  4215,  4218,  4221,
    4224,  4227,  4237,  4244,  4246,  4248,  4250,  4252,  4255,  4258,
    4262,  4266,  4268,  4271,  4275,  4279,  4281,  4284,  4286,  4288,
    4290,  4292,  4294,  4297,  4300,  4305,  4307,  4310,  4313,  4316,
    4320,  4322,  4324,  4326,  4329,  4332,  4335,  4338,  4341,  4345,
    4349,  4353,  4357,  4361,  4365,  4369,  4371,  4374,  4377,  4380,
    4384,  4387,  4391,  4395,  4398,  4401,  4404,  4407,  4410,  4413,
    4416,  4419,  4422,  4425,  4428,  4431,  4434,  4437,  4441,  4445,
    4449,  4452,  4455,  4458,  4461,  4464,  4467,  4470,  4473,  4476,
    4479,  4482,  4485,  4489,  4493,  4497,  4502,  4509,  4512,  4514,
    4516,  4518,  4520,  4522,  4523,  4529,  4531,  4538,  4542,  4544,
    4547,  4550,  4553,  4557,  4561,  4564,  4567,  4570,  4573,  4576,
    4579,  4583,  4586,  4589,  4593,  4595,  4599,  4604,  4606,  4609,
    4615,  4622,  4629,  4632,  4634,  4637,  4640,  4646,  4653
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
     354,    -1,   288,   354,    -1,   356,    -1,    66,     5,    -1,
     356,    -1,    66,     5,    -1,   356,    -1,    66,     5,    -1,
     354,   354,    -1,   224,   354,   354,   354,   354,   354,    -1,
      12,   387,    -1,    71,     5,     5,     5,    -1,   100,     4,
      -1,   118,   388,    -1,   134,   389,    -1,    53,   268,     4,
      -1,   291,   390,    -1,   122,     5,    -1,    59,    -1,   354,
     354,    -1,   354,    -1,   354,   354,    -1,   354,    12,   354,
     354,    -1,   354,   354,    12,   354,   354,    -1,   291,   354,
      -1,   291,   354,   354,    -1,   291,   354,    12,   354,   354,
      -1,   291,   354,   354,    12,   354,   354,    -1,    32,    -1,
     280,    -1,   123,    -1,   354,   354,    12,    59,     5,     5,
       5,    -1,   354,   354,     4,   354,   354,    12,    59,     5,
       5,     5,     5,    -1,   354,   354,    12,   354,   354,     5,
       5,     5,    -1,   354,   354,     4,   354,   354,    12,   354,
     354,     5,     5,     5,     5,    -1,   354,    -1,   354,   354,
      -1,   291,   392,    -1,   123,    -1,   354,    -1,   354,   354,
      -1,   256,   394,    -1,   192,   395,    -1,   186,   396,    -1,
     301,   354,   354,    -1,   301,   196,   196,    -1,   346,   397,
      -1,   231,   356,    -1,   138,    -1,   175,    -1,   354,    -1,
     186,    -1,   346,    -1,   345,    -1,   301,    -1,     4,   369,
      -1,   192,   369,    -1,   249,     4,    -1,   354,     4,     4,
      -1,    78,   354,    -1,   249,     4,    -1,   171,     4,    -1,
       4,   354,   354,     4,     6,     4,    -1,   245,   354,   354,
     354,   354,   354,   354,     4,     6,     4,    -1,    40,    -1,
     193,   399,    -1,   111,    -1,     4,   354,   354,     4,     6,
       4,    -1,   245,   354,   354,   354,   354,   354,   354,     4,
       6,     4,    -1,   368,    -1,   176,   354,    -1,    83,   402,
      -1,    99,   403,    -1,   174,   404,    -1,   217,   408,    -1,
     252,   409,    -1,     5,     4,     4,   407,     4,     4,   368,
     354,   405,   406,   354,   354,     5,    -1,     5,     4,     4,
     407,     4,     4,   368,   354,   354,   406,   354,   354,     5,
      -1,     5,     4,     4,   407,     4,     4,   368,   354,   405,
     354,   354,     5,    -1,     5,     4,     4,   407,     4,     4,
     368,   354,   354,   354,   354,     5,    -1,   226,    -1,    -1,
      31,    -1,     5,    -1,     5,     5,     4,   356,    -1,     5,
       4,   356,     5,   364,   370,    -1,   186,    -1,   346,    -1,
     345,    -1,   301,    -1,   138,    -1,   175,    -1,   271,    -1,
      46,    -1,     5,    -1,     5,     5,     4,   356,    -1,     5,
     364,   370,    -1,    31,     5,   364,   370,    -1,    -1,   354,
     354,   354,   354,   364,   370,    -1,    59,   363,   364,   370,
     354,   354,   364,   372,    -1,   287,   411,    -1,    40,   354,
     354,    -1,   193,   354,   354,    -1,   111,   354,   354,    -1,
      -1,   354,   354,   364,   370,    -1,    40,   354,   354,     4,
      -1,   193,   354,   354,     4,    -1,   111,   354,   354,     4,
      -1,   366,   354,   354,    -1,   364,   370,   363,    -1,   356,
      -1,   309,   354,   354,    -1,    40,   193,   366,   354,   354,
      -1,   193,   366,   354,   354,    -1,    40,   193,   364,   363,
      -1,   193,   364,   363,    -1,    33,     4,    -1,    -1,    32,
      -1,   280,    -1,   144,   117,     5,    -1,    41,    66,    -1,
      44,   417,    -1,    46,   419,    -1,    65,   420,    -1,    68,
     424,    -1,    67,   423,    -1,    69,   426,    -1,    77,   428,
      -1,    79,   431,    -1,    84,   432,    -1,    86,   433,    -1,
      88,   435,    -1,    87,   434,    -1,    93,   436,    -1,    95,
      -1,   124,   440,    -1,   141,   446,    -1,   151,     5,     5,
       4,    -1,   152,    89,     5,     5,   354,   354,   366,     4,
     414,    -1,   155,   438,    -1,   159,   437,    -1,   161,    16,
      -1,   186,    -1,   182,   506,   500,    -1,   183,   447,    -1,
     196,    66,    -1,   213,    -1,   214,   448,    -1,   221,   282,
     366,   354,   354,     4,     4,     5,    -1,   245,   449,    -1,
     247,    -1,   271,   450,    -1,   286,    -1,   287,   451,    -1,
     295,    -1,   302,   366,   354,   354,    -1,   308,    89,     5,
       5,   354,   354,   366,     4,   414,    -1,   310,   456,    -1,
     347,    -1,   100,    -1,   118,    -1,   134,    -1,    53,   268,
      -1,    88,    -1,   122,    -1,    71,   418,    -1,   173,    -1,
      -1,   186,     5,    -1,   103,     5,    -1,   118,    -1,    -1,
     405,   406,    -1,   354,   406,    -1,   256,    -1,   192,    -1,
     186,   421,    -1,   301,   168,    -1,   346,   422,    -1,   231,
      -1,   192,    -1,   249,    -1,    78,    -1,   249,    -1,   171,
      -1,    -1,   283,    -1,   168,   425,    -1,     4,    -1,     4,
     366,   354,   354,    -1,     4,   354,   354,   368,   354,    -1,
      -1,   168,   427,    -1,   176,    -1,     4,   354,   354,   368,
     354,    -1,   364,   370,    -1,    65,   429,    -1,    66,    -1,
      91,    -1,   168,    -1,   207,   168,    -1,   185,    -1,    69,
     430,    -1,   271,    -1,   339,    -1,    -1,   192,    -1,   256,
      -1,    -1,   176,    -1,   354,   354,   364,   370,   371,    -1,
     366,   354,   354,   364,   370,   371,    -1,   364,   370,   371,
      -1,    59,   364,   370,   371,   364,   372,    -1,   287,   364,
     370,    -1,   366,    -1,   364,   370,   371,    -1,   279,    -1,
      33,    -1,   366,    -1,   364,   370,   371,    -1,   364,   370,
     363,   354,   354,     5,    -1,     4,   364,   370,   363,   354,
     354,     5,    -1,   366,   354,   354,     4,     4,    -1,     5,
      -1,    65,    -1,   366,   354,   354,     5,    -1,     6,     4,
       4,     4,     4,    -1,    88,    -1,   120,   195,   439,    -1,
      -1,     4,    -1,   354,   354,    -1,   198,    -1,    59,   364,
     370,   371,    -1,    81,    -1,   100,   443,    -1,    45,    -1,
     117,   441,    -1,   120,   195,   444,    -1,   146,   442,    -1,
     147,    -1,   208,   195,    -1,   268,    -1,   268,   364,   370,
     372,    -1,   269,   445,    -1,   339,    -1,     4,    -1,   366,
     354,   354,    -1,     4,    -1,   165,     5,    -1,     4,   165,
       5,    -1,   310,     4,    -1,    -1,     4,    -1,   357,    -1,
     357,   366,   354,   354,    -1,   357,     4,    -1,    -1,     4,
      -1,   131,   156,   364,    -1,   131,   156,     4,   364,    -1,
     291,   156,   354,   364,    -1,    -1,   212,    -1,   303,    -1,
      66,    -1,   181,    -1,   239,    -1,   281,    -1,   290,    -1,
      81,    -1,   231,    -1,    61,    -1,   281,    -1,   304,    -1,
     134,    -1,   238,    -1,   238,   187,    -1,   266,    -1,   266,
     187,    -1,    21,    -1,   304,   455,    -1,    47,   452,    -1,
      74,   453,    -1,   149,   454,    -1,   185,    -1,    37,    -1,
     253,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,   224,    -1,    -1,    16,   457,    -1,   195,   365,
      -1,    -1,   225,    -1,    83,   459,    -1,    99,    -1,   364,
     370,   371,   460,     5,     5,    -1,   364,   370,   371,   460,
       5,    -1,    20,    -1,   234,    -1,    19,    -1,    44,   462,
      -1,    77,   463,    -1,    84,    -1,    94,    -1,    95,    -1,
     101,    -1,   124,   464,    -1,   141,    -1,   155,    -1,   162,
      -1,   182,   465,    -1,   220,    -1,   156,    -1,   271,    -1,
     281,   364,    -1,   310,   466,    -1,    72,     5,    -1,    -1,
      31,    -1,    -1,    44,    -1,    87,    -1,   191,    -1,   149,
      -1,   258,    -1,   217,    -1,   296,    -1,   364,    -1,    58,
     364,    -1,   115,   364,    -1,   172,   364,    -1,    18,    -1,
     287,   364,    -1,   199,     4,     4,    -1,   116,    -1,   184,
       5,    -1,    88,   469,    -1,   259,   120,   195,   468,    -1,
     259,     6,     4,     4,     4,     4,    -1,   300,    -1,   310,
     354,   354,   354,   354,   354,   354,   354,   354,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    56,    -1,     4,
       4,   364,    -1,   192,   356,    -1,    26,   471,    -1,   112,
     473,    -1,   124,   474,    -1,   158,   487,    -1,   206,   485,
      -1,   219,   486,    -1,     5,    14,     5,   375,    -1,     5,
      15,     5,   375,    -1,     5,    61,     5,   375,    -1,     5,
     189,   375,    -1,     5,   190,   375,    -1,     5,   262,   373,
       4,   375,    -1,     5,   272,     4,   375,    -1,     5,   273,
       4,   375,    -1,     5,   303,     5,   375,    -1,   245,    87,
     472,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,    -1,     5,   190,    -1,
       5,   262,   373,     4,    -1,     5,   272,     4,    -1,     5,
     273,     4,    -1,     5,   303,     5,    -1,     5,     5,   270,
      -1,     5,    14,     5,   375,    -1,     5,    15,     5,   375,
      -1,     5,    61,     5,   375,    -1,     5,   189,   374,   375,
      -1,     5,     5,   270,   374,   375,    -1,     5,   190,   374,
     375,    -1,     5,   262,   373,     4,   374,   375,    -1,     5,
     277,   373,     4,     4,   374,   375,    -1,     5,   272,     4,
     375,    -1,     5,   273,     4,   375,    -1,     5,   303,     5,
     374,   375,    -1,   269,   475,    -1,   117,    87,   476,    -1,
     245,   156,   484,    -1,   245,    87,   483,    -1,   191,   477,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   189,   374,    -1,     5,     5,   270,
     374,    -1,     5,   190,   374,    -1,     5,   262,   373,     4,
     374,    -1,     5,   277,   373,     4,     4,   374,    -1,     5,
     272,     4,    -1,     5,   273,     4,    -1,     5,   303,     5,
     374,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,   374,    -1,     5,   190,
     374,    -1,     5,   262,   373,     4,   374,    -1,     5,   272,
       4,    -1,     5,   273,     4,    -1,     5,   303,     5,   374,
      -1,   156,   161,   478,    -1,   161,   479,    -1,   156,   480,
      -1,   482,    -1,   156,   338,   481,    -1,     5,    14,     5,
     375,    -1,     5,    15,     5,   375,    -1,     5,    61,     5,
     375,    -1,     5,   189,   374,   375,    -1,     5,   190,   374,
     375,    -1,     5,   262,   373,     4,   374,   375,    -1,     5,
     272,     4,   375,    -1,     5,   273,     4,   375,    -1,     5,
     303,     5,   374,   375,    -1,     5,    14,     5,   375,    -1,
       5,    15,     5,   375,    -1,     5,    61,     5,   375,    -1,
       5,   189,   374,   375,    -1,     5,     5,   270,   374,   375,
      -1,     5,   190,   374,   375,    -1,     5,   262,   373,     4,
     374,   375,    -1,     5,   277,   373,     4,     4,   374,   375,
      -1,     5,   272,     4,   375,    -1,     5,   273,     4,   375,
      -1,     5,   303,     5,   374,   375,    -1,   365,     5,    14,
       5,   375,    -1,   365,     5,    15,     5,   375,    -1,   365,
       5,    61,     5,   375,    -1,   365,     5,   189,   374,   375,
      -1,   365,     5,   190,   374,   375,    -1,   365,     5,   262,
     373,     4,   374,   375,    -1,   365,     5,   272,     4,   375,
      -1,   365,     5,   273,     4,   375,    -1,   365,     5,   303,
       5,   374,   375,    -1,     5,    14,     5,   375,    -1,     5,
      15,     5,   375,    -1,     5,    61,     5,   375,    -1,     5,
     189,   374,   375,    -1,     5,   190,   374,   375,    -1,     5,
     262,   373,     4,   374,   375,    -1,     5,   272,     4,   375,
      -1,     5,   273,     4,   375,    -1,     5,   303,     5,   374,
     375,    -1,   365,     5,    14,     5,   375,    -1,   365,     5,
      15,     5,   375,    -1,   365,     5,    61,     5,   375,    -1,
     365,     5,   189,   374,   375,    -1,   365,     5,     5,   270,
     374,   375,    -1,   365,     5,   190,   374,   375,    -1,   365,
       5,   262,   373,     4,   374,   375,    -1,   365,     5,   277,
     373,     4,     4,   374,   375,    -1,   365,     5,   272,     4,
     375,    -1,   365,     5,   273,     4,   375,    -1,   365,     5,
     303,     5,   374,   375,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   189,   374,
      -1,     5,     5,   270,   374,    -1,     5,   190,   374,    -1,
       5,   262,   373,     4,   374,    -1,     5,   277,   373,     4,
       4,   374,    -1,     5,   272,     4,    -1,     5,   273,     4,
      -1,     5,   303,     5,   374,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   189,
     374,    -1,     5,   190,   374,    -1,     5,   262,   373,     4,
     374,    -1,     5,   272,     4,    -1,     5,   273,     4,    -1,
       5,   303,     5,   374,    -1,     5,    14,     5,   375,    -1,
       5,    61,     5,   375,    -1,     5,   189,   375,    -1,     5,
     262,   373,     4,   375,    -1,     5,   272,     4,   375,    -1,
       5,   303,     5,   375,    -1,     5,     5,    -1,   269,     5,
       5,    -1,    93,     4,     4,     4,     4,     4,    -1,   186,
       4,     4,     4,     4,     4,    -1,   111,    -1,   230,    -1,
     356,    -1,   139,   356,    -1,    88,   356,    -1,    66,     5,
      -1,     5,     4,     4,    -1,   300,   354,   354,    -1,   347,
     354,    -1,     5,     5,   365,   370,     5,     5,   365,   370,
     354,   365,   372,     5,    -1,    60,   494,    -1,    66,     5,
      -1,    80,    -1,    73,   499,     5,    -1,    73,   499,   303,
       5,    -1,    75,    99,    -1,    -1,    83,   492,   495,    -1,
      89,    -1,    99,    -1,    99,    17,    -1,   105,   498,    -1,
     114,     4,    -1,   129,     5,    -1,   149,    17,    -1,   149,
     211,   354,   354,    -1,   149,   292,   354,   354,    -1,     4,
      20,   378,   356,    -1,     4,    21,   359,    -1,     4,    21,
     359,   366,    -1,     4,    21,   359,   364,   370,    -1,     4,
      22,   238,   354,   354,     4,   364,   372,    -1,     4,    22,
     238,     5,   364,   372,    -1,     4,    48,   121,   356,    -1,
       4,    49,   238,   354,   354,   354,     4,   364,   372,    -1,
       4,    49,   238,     5,   364,   372,    -1,     4,    48,   238,
     354,   354,   364,   372,    -1,     4,    52,   105,   359,   359,
       4,   354,   354,   354,     4,    -1,     4,    52,   105,   359,
     359,     4,   354,   354,   354,     4,   366,    -1,     4,    52,
     105,   359,   359,     4,   354,   354,   354,     4,   364,   370,
      -1,     4,    52,   105,     5,     5,   364,   370,   364,   372,
      -1,     4,    55,   493,     5,     5,    -1,     4,    62,   121,
     356,    -1,     4,    62,   238,   354,   364,   372,    -1,     4,
      66,     5,    -1,     4,    74,    27,   356,   356,    -1,     4,
      74,   166,     5,     5,    -1,     4,    74,   238,   354,   364,
     372,    -1,     4,    74,   281,   364,   370,    -1,     4,    75,
     138,   356,    -1,     4,    82,   105,   359,   359,     4,   354,
     354,     4,    -1,     4,    82,   105,   359,   359,     4,   354,
     354,     4,   366,    -1,     4,    82,   105,   359,   359,     4,
     354,   354,     4,   364,   370,    -1,     4,    82,   105,     5,
       5,   364,   370,   364,   372,    -1,     4,    83,    22,   238,
     354,   354,    -1,     4,    83,    49,   238,   354,   354,    -1,
       4,    83,    52,    21,   354,   354,    -1,     4,    83,    52,
     238,   354,   354,    -1,     4,    83,   110,   238,   354,   354,
      -1,     4,    83,   113,    21,   354,   354,    -1,     4,    83,
     113,   238,   354,   354,    -1,     4,    83,    82,    21,   354,
     354,    -1,     4,    83,    82,   238,   354,   354,    -1,     4,
      83,   226,   307,     4,   354,   354,    -1,     4,    83,   257,
     307,     4,   354,   354,    -1,     4,    99,    -1,     4,    99,
      22,     4,    -1,     4,    99,    49,     4,    -1,     4,    99,
      52,     4,    -1,     4,    99,   110,     4,    -1,     4,    99,
      55,   493,     5,    -1,     4,    99,   113,     4,    -1,     4,
      99,    82,     4,    -1,     4,    99,   226,   307,     4,    -1,
       4,    99,   257,   307,     4,    -1,     4,    99,   283,    -1,
       4,    99,   283,     5,    -1,     4,    99,   283,     4,    -1,
       4,   105,    40,     4,    -1,     4,   109,   121,   356,    -1,
       4,   109,   238,   354,   354,   364,   372,    -1,     4,   110,
     238,   354,   354,   354,     4,   364,   372,    -1,     4,   110,
     238,     5,   364,   372,    -1,     4,   113,   105,   359,   359,
       4,   354,   354,   354,     4,    -1,     4,   113,   105,   359,
     359,     4,   354,   354,   354,     4,   366,    -1,     4,   113,
     105,   359,   359,     4,   354,   354,   354,     4,   364,   370,
      -1,     4,   113,   105,     5,     5,   364,   370,   364,   372,
      -1,     4,   129,     5,    -1,     4,   149,    -1,     4,   149,
     211,    -1,     4,   171,    27,   356,   356,    -1,     4,   171,
     224,   364,   370,   363,   363,    -1,     4,   194,   354,   354,
      -1,     4,   194,   132,    -1,     4,   194,    36,    -1,     4,
     194,   291,   364,   370,   363,    -1,     4,   226,   243,   354,
     354,   364,   372,    -1,     4,   257,   243,   354,   354,   364,
     372,    -1,     4,   224,   261,   376,    -1,     4,   224,   268,
       4,    -1,     4,   226,   121,   356,    -1,     4,   232,   364,
     370,   363,   363,   354,   364,   372,    -1,     4,   233,   512,
     356,    -1,     4,   247,    40,    -1,     4,   248,   130,     5,
      -1,     4,   248,   224,   364,   370,   363,   363,    -1,     4,
     248,   281,   364,   370,   364,   372,    -1,     4,   258,    -1,
       4,   258,   211,    -1,     4,   283,     5,    -1,     4,   285,
       5,    -1,     4,   285,   247,   356,    -1,     4,   297,    -1,
       4,   299,    -1,     4,   305,    27,   356,    -1,     4,   305,
     224,   364,   370,   363,   364,   372,   354,   359,    -1,     4,
     339,     4,    -1,   164,    -1,   164,   354,   354,    -1,   173,
     507,    -1,   174,   508,    -1,   194,   509,    -1,   231,   356,
      -1,   233,   512,   356,    -1,   233,   512,   356,   354,   354,
      -1,   247,    40,   354,   354,    -1,   247,   193,   354,   354,
       4,    -1,   247,   111,    -1,   252,     5,   499,   364,   370,
     371,   356,    -1,   252,   284,     5,    -1,   258,   516,    -1,
     265,   517,    -1,     5,    66,     5,    -1,     5,    80,    -1,
       5,    99,    -1,     5,    89,    -1,     5,   129,     5,    -1,
       5,   149,    -1,     5,   149,   211,    -1,     5,   194,   354,
     354,    -1,     5,   194,   132,    -1,     5,   194,    36,    -1,
       5,   194,   291,   364,   370,   363,    -1,     5,   233,   512,
     356,    -1,     5,   258,    -1,     5,   258,   211,    -1,     5,
     297,    -1,     5,   299,    -1,   283,   105,     5,     5,    -1,
     283,    99,     5,    -1,   283,    99,    17,    -1,   283,     5,
      -1,   283,   300,     5,    -1,   217,    -1,   217,   364,    -1,
     296,    -1,   297,    17,    -1,   299,    17,    -1,   339,     4,
      -1,   258,    -1,   299,    -1,   149,    -1,   297,    -1,    40,
     194,    -1,   194,    -1,   111,   194,    -1,    40,   105,    -1,
     105,    -1,   111,   105,    -1,    40,   247,    -1,   247,    -1,
     111,   247,    -1,    99,    -1,   285,    -1,    66,    -1,   339,
      -1,   233,    -1,   129,    -1,   164,    -1,   300,    -1,    -1,
       4,    -1,    30,   356,    -1,   238,   354,    -1,   160,     4,
      -1,   212,     4,   354,    -1,    62,   354,   354,   354,   513,
      -1,   109,   354,   354,   354,   354,   358,   513,    -1,    48,
     354,   354,   354,   354,   358,   513,    -1,   226,   354,   354,
     354,   354,   513,    -1,   257,   354,   354,   354,   354,   513,
      -1,   171,   354,   354,   354,   354,   513,    -1,   305,   354,
     354,   354,   354,   513,    -1,   285,   354,   354,   358,   513,
      -1,    62,   224,   354,   354,   377,   513,    -1,    48,   224,
     354,   354,   377,   513,    -1,   102,   224,   354,   354,   377,
     513,    -1,    85,   224,   354,   354,   377,   513,    -1,   350,
     224,   354,   354,   377,   513,    -1,    27,   224,   354,   354,
     377,   513,    -1,    51,   224,   354,   354,   377,   513,    -1,
     248,   354,   354,   354,   354,   364,   370,   364,   372,     5,
     513,    -1,    74,   354,   354,   354,   364,   370,   513,    -1,
     232,   354,   354,   354,   354,   354,   513,    -1,    22,   354,
     354,   354,   354,     4,   513,    -1,   110,   354,   354,   354,
     354,   354,     4,   358,   513,    -1,    49,   354,   354,   354,
     354,   354,     4,   358,   513,    -1,    82,   354,   354,   359,
     359,     4,   354,   354,     4,   513,    -1,   113,   354,   354,
     359,   359,     4,   354,   354,   354,     4,   358,   513,    -1,
      52,   354,   354,   359,   359,     4,   354,   354,   354,     4,
     358,   513,    -1,    75,   513,    -1,   284,   496,    -1,     5,
     354,   354,    -1,   303,     5,   354,   354,    -1,   354,   354,
     303,     5,    -1,     5,   364,   370,   363,    -1,     4,     4,
      -1,    40,   354,   354,     4,    -1,   193,   354,   354,     4,
      -1,   111,    -1,   104,    -1,   341,    -1,    63,    -1,   251,
      -1,   250,    -1,   235,    -1,   342,    -1,    60,   501,    -1,
      66,    -1,   129,    -1,   114,    -1,   143,   354,   354,    -1,
     154,   354,   354,    -1,     4,    20,    82,     5,     5,     5,
     364,     4,    -1,     4,    20,   151,     5,     5,     4,    -1,
       4,    20,   222,     5,     5,     5,     5,   364,   370,   379,
      -1,     4,    20,   223,     5,     5,   364,   379,    -1,     4,
      20,   237,     5,     5,     5,   364,    -1,     4,    20,   278,
     364,   370,    -1,   154,    17,    -1,     4,    21,    -1,     4,
      21,   366,    -1,     4,    21,   364,   370,    -1,     4,    22,
     238,   364,   372,    -1,     4,    48,   121,    -1,     4,    49,
     238,   364,   372,    -1,     4,    48,   238,   364,   372,    -1,
       4,    52,    21,    -1,     4,    52,    21,   366,    -1,     4,
      52,    21,   364,   370,    -1,     4,    52,   238,   364,   372,
      -1,     4,    59,   364,   370,   371,    -1,     4,    62,   121,
      -1,     4,    62,   238,   364,   372,    -1,     4,    66,    -1,
       4,    74,    27,    -1,     4,    74,   166,    -1,     4,    74,
     238,   364,   372,    -1,     4,    74,   281,    -1,     4,    75,
     138,    -1,     4,    82,    21,    -1,     4,    82,    21,   366,
      -1,     4,    82,    21,   364,   370,    -1,     4,    82,   238,
     364,   372,    -1,     4,   109,   121,    -1,     4,   109,   238,
     364,   372,    -1,     4,   110,   238,   364,   372,    -1,     4,
     113,    21,    -1,     4,   113,    21,   366,    -1,     4,   113,
      21,   364,   370,    -1,     4,   113,   238,   364,   372,    -1,
       4,   129,    -1,     4,   149,    -1,     4,   171,    27,    -1,
       4,   171,   167,   364,   372,    -1,     4,   171,   224,   364,
     370,   371,    -1,     4,   180,   167,   354,   364,   372,    -1,
       4,   226,   121,    -1,     4,   224,   261,    -1,     4,   224,
     268,    -1,     4,   232,   224,   364,   370,   371,    -1,     4,
     232,   167,   364,   372,    -1,     4,   232,   289,   364,   372,
      -1,     4,   233,    -1,     4,   233,   512,    -1,     4,   248,
     130,    -1,     4,   248,   167,   364,   372,    -1,     4,   248,
     224,   364,   370,   371,    -1,     4,   248,   281,    -1,     4,
     258,    -1,     4,   283,    -1,     4,   283,     4,    -1,     4,
     285,    -1,     4,   285,   247,    -1,     4,   295,    -1,     4,
     305,    27,    -1,     4,   305,   167,   364,   372,    -1,     4,
     305,   224,   364,   370,   371,    -1,     4,   339,    -1,   149,
     502,    -1,   149,   207,    -1,   207,    -1,   226,   257,   354,
     354,    -1,   257,   257,   354,   354,    -1,   231,    -1,   233,
     512,    -1,   258,   503,    -1,   258,   207,    -1,   265,   504,
      -1,     5,    66,    -1,     5,   129,    -1,     5,   154,    -1,
       5,   233,   512,    -1,     5,   283,    -1,     5,   283,   207,
      -1,   283,    17,    -1,   283,    98,   195,    -1,   339,    -1,
      30,    -1,   238,    -1,   160,    -1,   212,    -1,    -1,   354,
     354,    -1,    -1,   354,   354,    -1,    -1,   285,    -1,    -1,
      -1,   225,    -1,   240,    -1,   301,    -1,    57,    -1,   499,
     364,   370,   371,   356,   514,   520,    -1,   258,   499,   364,
     370,   371,   356,   514,   520,    -1,   499,     5,    -1,   499,
       5,   364,   370,    -1,   499,     4,    -1,   499,     4,   364,
     370,    -1,   124,     5,     5,   497,     4,     5,    -1,   354,
     354,    -1,   132,    -1,    36,    -1,    40,   354,   354,    -1,
     193,   354,   354,    -1,   111,    -1,   291,   364,   370,   363,
      -1,   510,   511,    -1,   511,    -1,   512,   351,   356,    -1,
      66,   351,     5,    -1,    92,   351,     4,     4,    -1,   339,
     351,     4,    -1,   129,   351,     5,    -1,   285,   351,     5,
      -1,   523,    -1,   524,    -1,   202,    -1,   258,    -1,   149,
      -1,    91,    -1,   126,    -1,   105,    -1,   194,    -1,   247,
      -1,    99,    -1,   157,    -1,   274,    -1,   505,    -1,   505,
     510,    -1,    -1,    -1,   515,   518,    -1,    17,    -1,   211,
     354,   354,    -1,   292,    -1,   292,   354,   354,    -1,   356,
      -1,   285,   356,    -1,   518,   519,    -1,   519,    -1,   512,
     351,   356,    -1,    -1,    -1,   521,   522,    -1,   522,   523,
      -1,   523,    -1,   283,   351,     5,    -1,    55,   351,   493,
       5,     5,    -1,    64,    -1,    66,     5,    -1,   181,   367,
      -1,   239,   354,   354,    -1,   281,   364,    -1,   290,   354,
      -1,   181,     4,    -1,   350,    -1,   348,    -1,   342,    -1,
     202,    -1,   354,   354,   354,   354,    -1,   354,   354,    -1,
     366,   354,   354,    -1,   364,   370,   363,    -1,   291,   528,
      -1,    39,   354,   354,    -1,   193,   529,    -1,   231,   356,
      -1,   354,   354,    -1,   366,   354,   354,    -1,   364,   370,
     363,    -1,    40,   354,   354,    -1,   354,   354,    -1,   111,
     354,   354,    -1,   356,    -1,   310,   365,   370,    -1,     5,
       4,     4,    -1,   300,    -1,    70,   533,    -1,   168,     4,
      -1,   244,     4,    -1,   253,   354,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    54,    -1,   140,    -1,   245,    -1,
      90,    -1,   149,   535,    -1,   258,   536,    -1,    40,   354,
     354,    -1,   193,   354,   354,    -1,   111,    -1,   263,   111,
      -1,    40,   354,   354,    -1,   193,   354,   354,    -1,   111,
      -1,   263,   111,    -1,   188,    -1,    13,    -1,   202,    -1,
      34,    -1,   107,    -1,    61,     5,    -1,   281,   364,    -1,
     304,     4,     4,     4,    -1,   354,    -1,   354,    97,    -1,
     193,   541,    -1,   291,   354,    -1,   291,   354,    97,    -1,
      40,    -1,   354,    -1,   111,    -1,    26,   543,    -1,   124,
     545,    -1,   206,   555,    -1,   112,   556,    -1,   219,     5,
      -1,   120,     5,   380,    -1,    61,     5,   380,    -1,   272,
       4,   380,    -1,   245,    87,   544,    -1,   120,     5,   380,
      -1,    61,     5,   380,    -1,   272,     4,   380,    -1,   546,
      -1,   156,   546,    -1,   282,   547,    -1,   269,   548,    -1,
     117,    87,   549,    -1,   191,   550,    -1,   245,   156,   552,
      -1,   245,    87,   553,    -1,   242,   554,    -1,   120,     5,
      -1,    61,     5,    -1,   272,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   272,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   272,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   272,     4,    -1,   156,   551,    -1,   120,     5,     4,
      -1,    61,     5,     4,    -1,   272,     4,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   272,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   272,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   272,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   272,     4,    -1,   120,     5,   380,    -1,    61,
       5,   380,    -1,   272,     4,   380,    -1,   120,     5,     5,
     380,    -1,   558,     4,     4,   354,   354,   359,    -1,   558,
       4,    -1,    99,    -1,    50,    -1,   293,    -1,   136,    -1,
     108,    -1,    -1,     4,   354,   354,   354,   354,    -1,   205,
      -1,   205,     4,   354,   354,   354,   354,    -1,   124,   269,
     560,    -1,     4,    -1,     4,     4,    -1,   354,   364,    -1,
     354,   354,    -1,   291,   354,   354,    -1,   365,   370,   371,
      -1,    16,   565,    -1,   243,     4,    -1,   241,   564,    -1,
      23,   563,    -1,     4,     4,    -1,     4,     5,    -1,   285,
       4,     5,    -1,     4,     4,    -1,     4,     5,    -1,   285,
       4,     5,    -1,     4,    -1,     4,   365,   370,    -1,     4,
       6,   365,   370,    -1,   230,    -1,   354,   354,    -1,   354,
     354,    12,   354,   354,    -1,   354,   354,    12,   366,   354,
     354,    -1,   354,   354,    12,   364,   370,   363,    -1,   291,
     568,    -1,   123,    -1,   123,   354,    -1,   354,   354,    -1,
     354,   354,    12,   354,   354,    -1,   354,   354,    12,   366,
     354,   354,    -1,   354,   354,    12,   364,   370,   363,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   457,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   512,   513,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   530,
     532,   533,   534,   535,   537,   538,   539,   540,   543,   544,
     545,   546,   547,   550,   551,   554,   555,   556,   559,   562,
     565,   568,   580,   587,   594,   602,   603,   604,   605,   606,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   627,   628,
     629,   630,   631,   632,   633,   634,   635,   636,   639,   640,
     643,   644,   645,   646,   647,   648,   651,   652,   653,   654,
     655,   656,   657,   658,   661,   662,   663,   664,   665,   668,
     669,   670,   671,   672,   673,   674,   675,   678,   679,   680,
     683,   684,   685,   686,   689,   690,   691,   694,   695,   696,
     699,   700,   701,   704,   705,   706,   707,   708,   709,   710,
     711,   714,   715,   718,   719,   720,   721,   722,   723,   726,
     727,   728,   731,   732,   733,   734,   735,   736,   739,   740,
     741,   742,   743,   744,   745,   746,   750,   751,   754,   755,
     758,   759,   762,   763,   767,   768,   769,   770,   771,   772,
     773,   774,   777,   778,   781,   782,   783,   785,   787,   788,
     789,   791,   795,   796,   799,   800,   802,   805,   807,   813,
     814,   815,   818,   819,   820,   823,   824,   825,   826,   827,
     828,   829,   835,   836,   839,   840,   841,   842,   843,   846,
     847,   848,   851,   852,   857,   862,   869,   871,   873,   874,
     875,   878,   880,   883,   884,   887,   888,   889,   890,   891,
     894,   896,   898,   903,   908,   911,   912,   915,   916,   917,
     924,   925,   926,   927,   930,   931,   934,   935,   938,   939,
     942,   944,   948,   949,   952,   954,   955,   956,   957,   960,
     961,   963,   964,   965,   968,   970,   972,   973,   975,   977,
     979,   981,   985,   988,   989,   990,   993,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1027,  1028,  1029,  1030,
    1031,  1032,  1033,  1035,  1037,  1038,  1041,  1042,  1043,  1044,
    1045,  1046,  1047,  1048,  1051,  1052,  1053,  1056,  1059,  1060,
    1062,  1064,  1065,  1066,  1067,  1068,  1069,  1076,  1077,  1080,
    1081,  1082,  1085,  1086,  1089,  1092,  1093,  1095,  1099,  1100,
    1101,  1104,  1108,  1110,  1111,  1112,  1113,  1114,  1115,  1116,
    1117,  1118,  1121,  1122,  1123,  1126,  1127,  1130,  1132,  1140,
    1142,  1144,  1148,  1149,  1151,  1154,  1157,  1158,  1162,  1164,
    1167,  1172,  1173,  1174,  1178,  1179,  1180,  1183,  1184,  1185,
    1188,  1189,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1198,
    1199,  1200,  1202,  1203,  1206,  1207,  1210,  1211,  1212,  1213,
    1216,  1217,  1220,  1222,  1225,  1229,  1230,  1231,  1233,  1235,
    1239,  1240,  1241,  1244,  1245,  1246,  1247,  1248,  1249,  1252,
    1255,  1256,  1257,  1260,  1261,  1262,  1263,  1264,  1265,  1268,
    1269,  1270,  1271,  1272,  1273,  1274,  1277,  1278,  1281,  1282,
    1285,  1286,  1289,  1290,  1293,  1294,  1295,  1298,  1299,  1302,
    1303,  1306,  1309,  1317,  1318,  1321,  1322,  1323,  1324,  1325,
    1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,  1334,  1335,
    1336,  1337,  1340,  1343,  1344,  1347,  1348,  1349,  1350,  1353,
    1354,  1355,  1356,  1359,  1360,  1361,  1362,  1363,  1364,  1367,
    1368,  1369,  1370,  1371,  1372,  1374,  1375,  1380,  1381,  1384,
    1386,  1388,  1391,  1392,  1393,  1394,  1395,  1396,  1399,  1401,
    1403,  1405,  1406,  1408,  1410,  1412,  1414,  1416,  1419,  1420,
    1421,  1422,  1423,  1424,  1426,  1427,  1428,  1431,  1434,  1436,
    1438,  1440,  1442,  1444,  1446,  1448,  1451,  1453,  1455,  1457,
    1458,  1459,  1460,  1461,  1464,  1465,  1466,  1467,  1468,  1469,
    1470,  1472,  1474,  1475,  1476,  1479,  1480,  1481,  1482,  1483,
    1484,  1486,  1487,  1488,  1491,  1492,  1493,  1494,  1495,  1498,
    1501,  1504,  1507,  1510,  1513,  1516,  1519,  1522,  1527,  1530,
    1533,  1536,  1539,  1542,  1545,  1548,  1551,  1554,  1557,  1562,
    1565,  1568,  1571,  1574,  1577,  1580,  1583,  1586,  1591,  1593,
    1595,  1597,  1599,  1601,  1606,  1608,  1610,  1614,  1617,  1620,
    1623,  1626,  1629,  1632,  1635,  1638,  1641,  1644,  1649,  1650,
    1651,  1652,  1653,  1654,  1655,  1657,  1659,  1660,  1661,  1664,
    1665,  1666,  1667,  1668,  1669,  1671,  1672,  1673,  1676,  1678,
    1680,  1681,  1683,  1685,  1689,  1690,  1693,  1694,  1695,  1698,
    1705,  1706,  1707,  1708,  1709,  1710,  1711,  1714,  1722,  1723,
    1724,  1725,  1727,  1729,  1730,  1730,  1731,  1732,  1733,  1734,
    1735,  1736,  1738,  1739,  1741,  1744,  1747,  1748,  1749,  1752,
    1755,  1758,  1759,  1763,  1766,  1769,  1772,  1776,  1781,  1786,
    1788,  1789,  1791,  1792,  1794,  1796,  1798,  1800,  1801,  1803,
    1805,  1809,  1814,  1816,  1818,  1820,  1822,  1824,  1826,  1828,
    1830,  1832,  1834,  1837,  1838,  1840,  1842,  1843,  1845,  1847,
    1848,  1849,  1851,  1853,  1854,  1855,  1857,  1858,  1859,  1862,
    1866,  1869,  1872,  1876,  1881,  1887,  1888,  1889,  1891,  1892,
    1896,  1898,  1899,  1900,  1903,  1906,  1909,  1911,  1913,  1914,
    1919,  1922,  1923,  1924,  1927,  1931,  1932,  1934,  1935,  1936,
    1938,  1939,  1941,  1942,  1947,  1949,  1950,  1952,  1953,  1954,
    1955,  1956,  1957,  1959,  1961,  1963,  1964,  1966,  1967,  1969,
    1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1979,  1980,
    1981,  1983,  1985,  1986,  1987,  1988,  1990,  1991,  1992,  1993,
    1994,  1996,  1997,  1998,  1999,  2000,  2001,  2004,  2005,  2006,
    2007,  2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,
    2017,  2018,  2019,  2020,  2021,  2022,  2023,  2024,  2027,  2028,
    2029,  2030,  2031,  2032,  2040,  2047,  2056,  2065,  2072,  2079,
    2087,  2095,  2102,  2107,  2112,  2117,  2122,  2127,  2132,  2138,
    2148,  2158,  2168,  2175,  2185,  2195,  2204,  2216,  2229,  2234,
    2237,  2239,  2241,  2246,  2250,  2253,  2255,  2257,  2260,  2261,
    2262,  2263,  2264,  2265,  2266,  2269,  2270,  2271,  2272,  2273,
    2274,  2276,  2278,  2280,  2282,  2284,  2286,  2289,  2290,  2291,
    2292,  2294,  2297,  2298,  2300,  2302,  2303,  2304,  2306,  2309,
    2312,  2313,  2315,  2316,  2317,  2318,  2320,  2321,  2322,  2323,
    2324,  2326,  2328,  2329,  2331,  2334,  2335,  2336,  2338,  2340,
    2341,  2342,  2343,  2345,  2348,  2352,  2353,  2354,  2355,  2358,
    2361,  2363,  2364,  2365,  2366,  2368,  2371,  2372,  2374,  2375,
    2376,  2377,  2378,  2380,  2381,  2383,  2386,  2387,  2388,  2389,
    2390,  2392,  2394,  2395,  2396,  2397,  2399,  2401,  2402,  2403,
    2404,  2405,  2406,  2408,  2409,  2411,  2414,  2415,  2416,  2417,
    2420,  2421,  2424,  2425,  2428,  2429,  2432,  2445,  2446,  2450,
    2451,  2455,  2458,  2463,  2470,  2472,  2475,  2477,  2480,  2484,
    2485,  2486,  2487,  2488,  2489,  2490,  2494,  2495,  2498,  2499,
    2500,  2501,  2502,  2503,  2504,  2505,  2508,  2509,  2510,  2511,
    2512,  2513,  2514,  2515,  2516,  2517,  2518,  2521,  2522,  2525,
    2526,  2526,  2529,  2530,  2531,  2532,  2535,  2536,  2539,  2540,
    2543,  2547,  2548,  2548,  2551,  2552,  2555,  2558,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2574,  2575,  2576,  2577,  2580,
    2582,  2583,  2588,  2590,  2591,  2592,  2593,  2596,  2597,  2602,
    2606,  2607,  2608,  2611,  2612,  2617,  2618,  2621,  2623,  2624,
    2625,  2630,  2632,  2638,  2639,  2640,  2641,  2644,  2645,  2648,
    2650,  2652,  2653,  2656,  2658,  2659,  2660,  2663,  2664,  2667,
    2668,  2669,  2672,  2673,  2674,  2677,  2678,  2679,  2680,  2681,
    2684,  2685,  2686,  2689,  2690,  2691,  2692,  2693,  2696,  2698,
    2700,  2702,  2705,  2707,  2709,  2712,  2713,  2714,  2715,  2716,
    2717,  2718,  2719,  2720,  2723,  2724,  2725,  2728,  2729,  2730,
    2733,  2734,  2735,  2738,  2739,  2740,  2743,  2744,  2745,  2746,
    2749,  2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,  2764,
    2765,  2766,  2769,  2771,  2773,  2777,  2781,  2783,  2788,  2791,
    2792,  2793,  2794,  2797,  2798,  2800,  2801,  2803,  2806,  2807,
    2808,  2811,  2812,  2815,  2817,  2818,  2819,  2820,  2823,  2824,
    2825,  2828,  2829,  2830,  2833,  2834,  2839,  2843,  2850,  2851,
    2853,  2858,  2860,  2863,  2864,  2865,  2866,  2868,  2873
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
     443,   443,   444,   444,   444,   445,   445,   445,   445,   445,
     446,   446,   446,   447,   447,   447,   447,   447,   447,   448,
     449,   449,   449,   450,   450,   450,   450,   450,   450,   451,
     451,   451,   451,   451,   451,   451,   452,   452,   453,   453,
     454,   454,   455,   455,   456,   456,   456,   457,   457,   458,
     458,   459,   459,   460,   460,   461,   461,   461,   461,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   461,   461,
     461,   461,   462,   463,   463,   464,   464,   464,   464,   465,
     465,   465,   465,   466,   466,   466,   466,   466,   466,   467,
     467,   467,   467,   467,   467,   467,   467,   468,   468,   469,
     469,   469,   470,   470,   470,   470,   470,   470,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   475,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   477,   477,   477,   477,   477,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   479,   480,
     480,   480,   480,   480,   480,   480,   480,   480,   481,   481,
     481,   481,   481,   481,   481,   481,   481,   482,   482,   482,
     482,   482,   482,   482,   482,   482,   482,   482,   483,   483,
     483,   483,   483,   483,   483,   483,   483,   483,   483,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   485,   485,
     485,   485,   485,   485,   486,   486,   487,   487,   487,   488,
     489,   489,   489,   489,   489,   489,   489,   490,   491,   491,
     491,   491,   491,   491,   492,   491,   491,   491,   491,   491,
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
     491,   491,   491,   491,   491,   491,   491,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   494,   494,
     494,   494,   494,   494,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     496,   496,   496,   496,   497,   498,   498,   498,   499,   499,
     499,   499,   499,   499,   499,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   500,   500,   500,   500,
     500,   500,   500,   500,   500,   500,   501,   501,   501,   501,
     502,   502,   503,   503,   504,   504,   505,   506,   506,   506,
     506,   506,   507,   507,   508,   508,   508,   508,   508,   509,
     509,   509,   509,   509,   509,   509,   510,   510,   511,   511,
     511,   511,   511,   511,   511,   511,   512,   512,   512,   512,
     512,   512,   512,   512,   512,   512,   512,   513,   513,   514,
     515,   514,   516,   516,   516,   516,   517,   517,   518,   518,
     519,   520,   521,   520,   522,   522,   523,   524,   525,   525,
     525,   525,   525,   525,   525,   526,   526,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   528,   528,   528,
     529,   529,   529,   530,   530,   530,   530,   531,   531,   531,
     531,   532,   532,   533,   533,   533,   533,   534,   534,   535,
     535,   535,   535,   536,   536,   536,   536,   537,   537,   538,
     538,   538,   539,   539,   539,   540,   540,   540,   540,   540,
     541,   541,   541,   542,   542,   542,   542,   542,   543,   543,
     543,   543,   544,   544,   544,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   546,   546,   546,   547,   547,   547,
     548,   548,   548,   549,   549,   549,   550,   550,   550,   550,
     551,   551,   551,   552,   552,   552,   553,   553,   553,   554,
     554,   554,   555,   555,   555,   556,   557,   557,   557,   558,
     558,   558,   558,   559,   559,   559,   559,   559,   560,   560,
     560,   561,   561,   562,   562,   562,   562,   562,   563,   563,
     563,   564,   564,   564,   565,   565,   565,   566,   567,   567,
     567,   567,   567,   568,   568,   568,   568,   568,   568
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
       2,     2,     2,     2,     2,     2,     1,     2,     1,     2,
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
       0,     1,     1,     4,     2,     0,     1,     3,     4,     4,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     2,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     0,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     1,     2,     3,
       1,     2,     2,     4,     6,     1,    10,     1,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     4,     4,
       4,     3,     3,     5,     4,     4,     4,     3,     3,     3,
       3,     2,     2,     4,     3,     3,     3,     3,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     2,
       3,     3,     3,     2,     3,     3,     3,     3,     4,     3,
       5,     6,     3,     3,     4,     3,     3,     3,     3,     3,
       5,     3,     3,     4,     3,     2,     2,     1,     3,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     4,     4,
       4,     4,     5,     4,     6,     7,     4,     4,     5,     5,
       5,     5,     5,     5,     7,     5,     5,     6,     4,     4,
       4,     4,     4,     6,     4,     4,     5,     5,     5,     5,
       5,     6,     5,     7,     8,     5,     5,     6,     3,     3,
       3,     3,     4,     3,     5,     6,     3,     3,     4,     3,
       3,     3,     3,     3,     5,     3,     3,     4,     4,     4,
       3,     5,     4,     4,     2,     3,     6,     6,     1,     1,
       1,     2,     2,     2,     3,     3,     2,    12,     2,     2,
       1,     3,     4,     2,     0,     3,     1,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     4,     9,     6,     7,    10,    11,    12,     9,     5,
       4,     6,     3,     5,     5,     6,     5,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     4,     7,     9,
       6,    10,    11,    12,     9,     3,     2,     3,     5,     7,
       4,     3,     3,     6,     7,     7,     4,     4,     4,     9,
       4,     3,     4,     7,     7,     2,     3,     3,     3,     4,
       2,     2,     4,    10,     3,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     7,     3,     2,     2,
       3,     2,     2,     2,     3,     2,     3,     4,     3,     3,
       6,     4,     2,     3,     2,     2,     4,     3,     3,     2,
       3,     1,     2,     1,     2,     2,     2,     1,     1,     1,
       1,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     2,     2,     3,     5,     7,     7,     6,     6,     6,
       6,     5,     6,     6,     6,     6,     6,     6,     6,    11,
       7,     7,     7,     9,     9,    10,    12,    12,     2,     2,
       3,     4,     4,     4,     2,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     8,     6,    10,     7,     7,     5,     2,     2,     3,
       4,     5,     3,     5,     5,     3,     4,     5,     5,     5,
       3,     5,     2,     3,     3,     5,     3,     3,     3,     4,
       5,     5,     3,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     3,     6,     5,
       5,     2,     3,     3,     5,     6,     3,     2,     2,     3,
       2,     3,     2,     3,     5,     6,     2,     2,     2,     1,
       4,     4,     1,     2,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     1,     0,     0,     1,     1,
       1,     1,     7,     8,     2,     4,     2,     4,     6,     2,
       1,     1,     3,     3,     1,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     1,     3,     1,     3,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     1,     2,
       2,     3,     2,     2,     2,     1,     1,     1,     1,     4,
       2,     3,     3,     2,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     9,     6,     1,     1,     1,     1,     2,     2,     3,
       3,     1,     2,     3,     3,     1,     2,     1,     1,     1,
       1,     1,     2,     2,     4,     1,     2,     2,     2,     3,
       1,     1,     1,     2,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     4,     6,     2,     1,     1,
       1,     1,     1,     0,     5,     1,     6,     3,     1,     2,
       2,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     2,     2,     3,     1,     3,     4,     1,     2,     5,
       6,     6,     2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   302,     0,     0,     0,     0,     0,     0,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,  1037,     0,
       0,     0,     0,     0,     0,     0,     0,  1037,    39,     0,
       0,     0,    44,     0,     0,     0,    48,  1223,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     3,    55,    56,     0,   239,     6,     0,
       0,     0,     0,     0,     0,     9,     0,     0,   268,   270,
       0,     0,    11,   141,   143,   136,   137,   138,   142,   139,
     140,   273,    12,     0,   285,     0,     0,     0,    13,     0,
       0,     0,     0,   309,     0,    14,    69,    98,     0,   128,
      97,    77,    95,     0,    74,    76,    72,   129,    96,    73,
       0,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    70,
      71,    75,   316,   149,    99,     0,    15,     0,    16,    17,
       0,     0,     0,     0,     0,     0,    58,    57,     0,     0,
       0,     0,     2,     0,    18,     0,     0,     0,   378,   392,
       0,   398,     0,     0,     0,     0,     0,     0,     0,   341,
       0,   470,     0,     0,     0,     0,     0,  1037,     0,   349,
       0,   353,     0,     0,     0,   357,     0,   359,     0,   361,
       0,     0,   504,   365,    19,     0,   510,    20,   515,     0,
     533,   518,   519,   520,   521,   535,   523,   524,   528,   525,
       0,   527,   529,     0,     0,    21,    23,     0,   550,     0,
       0,     0,   555,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    26,   709,    27,     0,     0,     0,     0,     0,
       0,   710,    28,     0,    29,  1041,  1038,  1039,  1040,     0,
    1098,     0,   130,     0,     0,     0,    31,     0,  1108,  1107,
    1106,  1105,    33,     0,     0,     0,     0,     0,   149,     0,
      34,     0,  1126,     0,  1123,    35,     0,     0,     0,     0,
      38,     0,    37,    36,     0,     0,     0,     0,    41,     0,
       0,  1155,    42,     0,     0,     0,     0,     0,    43,  1219,
    1218,  1222,  1221,  1220,    45,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     0,     0,  1225,    49,
       0,     0,    51,     0,     0,     0,     0,   149,    52,  1247,
      53,     0,     0,    54,     1,     4,     5,   222,     0,   214,
       0,     0,   216,     0,   224,   217,   221,   232,   233,   218,
     234,     0,   220,   242,   243,   241,   240,     0,     0,     0,
     247,   255,   258,   257,   256,   254,   246,   251,   252,   253,
     245,     0,     0,     0,     0,     0,     0,   250,    10,     0,
       0,     0,   269,     0,   274,     0,   284,   275,   286,   276,
     287,   277,   298,   278,     0,     0,   279,     0,    88,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   305,     0,     0,     0,     0,     0,   151,   156,
     150,   152,   155,   154,   153,     0,     0,   322,    63,    64,
      65,    66,    67,    59,    60,    61,    68,    62,     0,   327,
       0,   374,   370,   366,   367,   371,   368,   373,   328,   377,
     329,   290,   382,   386,   381,   293,   292,   291,     0,     0,
     330,   393,   332,     0,   331,     0,   400,   333,   412,   404,
     415,   405,   406,   408,     0,   410,   411,   149,   334,     0,
       0,   335,     0,     0,   149,   336,   424,   149,   422,   337,
     425,   339,   149,   426,   338,     0,   149,     0,   340,   444,
       0,   442,   460,     0,     0,     0,   448,   440,     0,   450,
     465,   453,   342,   471,   472,   343,     0,     0,     0,   435,
       0,   346,   431,   432,     0,   347,   348,     0,   473,   478,
     474,   475,   476,   477,   351,   352,   479,   354,     0,   480,
     481,   482,   356,   488,   483,   484,   486,   358,   494,   496,
     498,   500,   493,   495,   502,   360,     0,     0,   507,     0,
     364,   149,   509,     0,   516,   534,   517,   536,   537,   538,
     522,   539,   541,   540,   542,   526,   530,   547,     0,     0,
       0,     0,   543,   531,     0,     0,   552,   551,     0,     0,
       0,     0,    25,     0,     0,   562,     0,   563,     0,     0,
       0,     0,     0,   564,     0,   708,     0,   565,     0,   566,
       0,     0,   567,     0,   713,   712,   711,     0,   716,     0,
       0,     0,   888,     0,     0,     0,   720,   724,   726,   727,
       0,     0,     0,     0,   825,     0,     0,     0,   861,     0,
       0,     0,     0,     0,     0,     0,   863,     0,     0,     0,
      30,  1099,  1104,   133,   134,   132,   135,   131,  1100,     0,
    1102,  1103,    32,     0,     0,     0,     0,  1115,  1116,     0,
     149,     0,  1113,  1110,     0,     0,     0,   149,  1133,  1136,
    1134,  1135,  1127,  1128,  1129,  1130,     0,     0,     0,    40,
    1152,  1153,     0,  1160,  1162,  1161,  1157,  1158,  1156,     0,
       0,     0,     0,  1163,     0,  1166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1164,  1175,     0,     0,
       0,  1165,  1167,  1217,  1150,  1151,  1149,   203,     0,   206,
     199,     0,   208,   200,     0,   210,   201,  1148,  1147,   202,
     204,   205,     0,     0,   198,     0,     0,     0,     0,  1231,
    1244,  1234,     0,     0,  1237,     0,     0,  1236,  1235,   157,
    1253,     0,  1252,  1248,   223,   219,     0,   228,     0,   225,
       0,   244,   144,   147,   148,   146,   145,   259,   260,   261,
     249,   248,   263,   265,   264,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   149,     0,   306,    94,    91,    92,
      93,   149,   308,   307,     0,     0,     0,     0,     0,     0,
       0,   321,     0,   317,   315,   314,   326,   369,     0,     0,
     372,   387,   388,   383,   384,   389,   391,   390,   385,   294,
     295,   380,   379,   395,   394,     0,   399,   413,   414,   403,
     416,   409,   407,   402,     0,     0,   149,   149,   157,   157,
     157,   149,     0,     0,   149,   461,   443,   454,     0,   445,
      78,   456,     0,     0,   447,   449,   149,   466,     0,     0,
     452,     0,     0,     0,   437,     0,     0,     0,     0,   936,
     938,   937,     0,  1030,     0,  1009,     0,  1012,     0,     0,
    1032,  1034,     0,  1025,   350,     0,   485,   487,   497,   490,
     499,   491,   501,   492,   503,   489,     0,     0,   508,   505,
     506,   157,   532,   544,   545,   546,   548,     0,   561,   549,
       0,     0,     0,     0,     0,     0,   170,   170,   164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,     0,     0,   603,
     627,     0,     0,     0,   599,     0,     0,     0,     0,   170,
     164,     0,     0,   704,     0,   714,   715,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,     0,   796,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   815,     0,     0,
     820,   821,     0,     0,     0,   841,   843,   842,     0,   845,
       0,     0,   852,   854,   855,   889,     0,     0,     0,     0,
     718,   719,   930,   928,   933,   932,   931,   929,   934,     0,
     723,     0,   728,     0,   927,     0,   729,   730,   731,   732,
       0,     0,     0,     0,     0,   827,     0,     0,   828,  1051,
       0,  1054,  1050,     0,     0,     0,   829,   862,   830,  1069,
    1074,  1071,  1070,  1068,  1075,  1072,  1066,  1073,  1067,  1076,
       0,     0,   835,     0,     0,     0,  1082,     0,  1084,   838,
       0,  1086,   839,   859,     0,     0,     0,   864,   865,   866,
    1101,  1114,     0,     0,  1121,  1117,     0,     0,     0,  1112,
    1111,  1125,  1124,     0,     0,  1141,     0,     0,  1137,     0,
    1145,     0,     0,  1138,     0,  1159,   192,   192,     0,   192,
       0,  1185,     0,  1184,  1176,     0,     0,     0,     0,  1180,
       0,     0,     0,  1183,     0,     0,     0,     0,     0,  1178,
    1186,     0,     0,     0,  1177,   192,   192,   192,     0,   207,
     209,   211,     0,   212,     0,    56,     0,  1227,     0,  1232,
       0,   149,  1238,  1239,     0,  1241,  1242,     0,   158,   159,
    1233,  1254,  1255,     0,   215,     0,   229,     0,     0,     0,
       0,   262,     0,     0,     0,     0,     0,     0,     0,     0,
     300,   149,     0,     0,     0,     0,   149,     0,   320,     0,
     319,   376,   375,     0,     0,     0,   149,     0,   157,   421,
     419,   423,   427,     0,     0,     0,   157,     0,    82,    81,
     462,   446,     0,   457,   459,   160,     0,     0,   344,     0,
       0,    56,     0,   436,     0,     0,   948,     0,     0,     0,
       0,     0,     0,   962,     0,     0,     0,     0,     0,     0,
     979,   980,     0,     0,     0,     0,     0,   991,     0,   997,
     998,  1000,  1002,     0,  1006,  1017,  1018,  1019,     0,  1021,
    1026,  1028,  1029,  1027,   935,     0,  1008,     0,  1007,   947,
       0,     0,  1013,     0,  1015,     0,  1014,  1035,  1016,  1023,
       0,     0,   362,     0,     0,   559,   560,     0,   557,   553,
       0,   170,   170,   170,   171,   172,   571,   572,   166,   165,
       0,   170,   170,   170,     0,   577,   587,   167,   170,   170,
     170,   168,   169,   170,   170,     0,   170,   170,     0,   167,
       0,   600,     0,     0,     0,   626,     0,   625,     0,     0,
     602,     0,   601,     0,     0,     0,     0,   167,   167,   164,
       0,     0,   164,     0,     0,     0,   170,   170,   700,     0,
     170,   170,   705,     0,   183,   184,   185,   186,   187,   188,
       0,    86,    87,    85,   736,     0,     0,     0,     0,     0,
       0,   882,   880,   875,     0,   885,   869,   886,   872,   884,
     878,   867,   881,   870,   868,   887,   883,     0,     0,     0,
     752,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   783,     0,     0,     0,     0,     0,
     795,   797,     0,     0,   802,   801,     0,     0,   173,     0,
       0,     0,   149,     0,   811,     0,     0,     0,     0,   816,
     817,   818,     0,     0,     0,   824,   840,   844,   846,   849,
     848,     0,     0,     0,   853,   890,   892,     0,   891,   721,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1036,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   725,     0,     0,     0,     0,
     826,     0,   149,     0,  1046,  1044,     0,     0,   149,  1049,
     831,     0,     0,     0,   837,     0,     0,  1087,   857,   858,
       0,   860,  1120,  1122,  1119,  1118,  1109,     0,     0,     0,
    1142,     0,     0,  1146,  1154,   194,   195,   196,   197,   193,
    1169,  1168,     0,     0,     0,  1171,  1170,   192,     0,     0,
       0,  1179,     0,     0,     0,     0,     0,  1196,     0,  1210,
    1209,  1211,     0,     0,     0,  1182,     0,     0,     0,  1181,
    1191,  1190,  1192,  1188,  1187,  1189,  1213,  1212,  1214,     0,
       0,     0,  1229,  1230,     0,   149,  1245,  1240,  1243,     0,
       0,   149,     0,     0,     0,   226,     0,     0,     0,     0,
       0,     0,     0,     0,   297,   296,     0,     0,   288,   299,
     301,     0,   311,   313,   312,   310,   149,   318,     0,     0,
       0,   157,   149,     0,     0,     0,     0,   441,   455,    80,
      79,   464,     0,   458,   162,   163,   161,   451,     0,   467,
       0,     0,     0,   439,   433,     0,     0,     0,     0,     0,
       0,   149,   949,     0,   952,     0,     0,   955,     0,   149,
     960,     0,   963,   964,     0,   966,   967,   968,     0,   972,
       0,     0,   975,     0,   981,     0,     0,     0,   986,   987,
     985,     0,     0,     0,   992,   993,     0,     0,   996,   999,
    1001,  1003,     0,     0,  1020,  1022,   939,  1031,   940,     0,
       0,  1033,  1024,     0,     0,   513,   514,     0,     0,   558,
       0,   568,   569,   570,   170,   574,   575,   576,     0,     0,
       0,   581,   582,   164,     0,     0,     0,   170,   588,   589,
     590,   591,   593,   167,   596,   597,     0,   170,     0,     0,
       0,   167,   167,   164,     0,     0,     0,     0,   624,     0,
     628,     0,     0,     0,     0,     0,   167,   167,   164,     0,
       0,   164,     0,     0,     0,     0,     0,   167,   167,   164,
       0,     0,   164,     0,     0,     0,     0,     0,   167,   167,
     164,     0,     0,   164,     0,     0,     0,     0,   167,   167,
     164,     0,     0,     0,   167,   604,   605,   606,   607,   609,
       0,   612,   613,     0,   167,     0,     0,   698,   699,   170,
     702,   703,     0,   735,   149,   737,     0,     0,   741,     0,
       0,     0,     0,     0,   874,   871,   877,   876,   873,   879,
       0,   750,     0,     0,     0,     0,   149,   757,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   774,   775,   776,     0,   780,   777,   779,     0,     0,
     785,   784,   786,   787,     0,     0,     0,     0,     0,     0,
     149,   149,   800,   179,   175,   180,   174,   177,   176,   178,
     806,   807,   808,     0,     0,   810,   812,   149,   149,     0,
     819,   822,   149,   149,   847,   851,   893,   722,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1077,   918,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   919,     0,     0,     0,     0,     0,
     733,   734,   149,   157,     0,   149,   149,  1052,  1053,     0,
       0,   833,     0,   149,  1083,  1085,   856,     0,  1139,  1140,
    1143,  1144,   192,   192,   192,  1215,  1194,  1193,  1195,  1198,
    1197,  1201,  1200,  1202,  1199,  1207,  1206,  1208,  1204,  1203,
    1205,     0,     0,  1224,     0,  1246,     0,   149,     0,  1249,
       0,     0,   230,     0,   227,     0,     0,     0,   266,     0,
       0,     0,     0,   149,     0,   303,   137,     0,   396,     0,
     417,   157,   160,     0,     0,   430,     0,   468,   469,     0,
     434,     0,     0,     0,     0,     0,   149,   950,   160,   160,
     160,   149,   956,   160,   157,   160,   160,   149,   969,   160,
     160,   160,   149,   976,   160,   160,   149,     0,   160,   149,
     160,   160,   149,   160,   149,  1010,  1011,     0,     0,   512,
     554,     0,   573,   578,   579,   580,     0,   584,   585,   586,
     592,   170,   167,   598,   615,   616,   617,   618,   619,     0,
     621,   622,   167,     0,     0,     0,   167,   167,   164,     0,
       0,     0,     0,     0,     0,   167,   167,   164,     0,     0,
       0,     0,     0,     0,   167,   167,   164,     0,     0,     0,
     167,   170,   170,   170,   170,   170,     0,   170,   170,     0,
     167,   167,   170,   170,   170,   170,   170,     0,   170,   170,
       0,   167,   167,   678,   679,   680,   681,   683,     0,   686,
     687,     0,   167,   689,   690,   691,   692,   693,     0,   695,
     696,   167,   608,   167,     0,   614,     0,     0,   701,     0,
     738,   160,     0,     0,   160,     0,     0,     0,   749,   160,
     753,   754,   160,   756,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   778,   781,   782,
       0,   160,     0,     0,     0,   798,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1078,  1057,     0,  1064,  1065,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   149,
       0,     0,    83,     0,     0,   925,   926,   157,     0,     0,
       0,  1047,  1045,  1055,   832,   834,   157,  1132,  1173,  1172,
    1174,  1216,     0,  1226,  1256,     0,     0,  1251,  1250,   231,
       0,     0,     0,   271,     0,     0,     0,   289,   160,   397,
     401,   418,   420,     0,   428,   463,     0,     0,     0,     0,
       0,     0,   946,   951,   954,   953,   957,   958,   959,   961,
     965,   970,   971,   973,   974,   977,   978,   982,   157,   160,
     989,   157,   990,   994,   157,  1004,   157,     0,     0,   511,
       0,   583,   594,   170,   167,   623,   170,   170,   170,   170,
     170,     0,   170,   170,   167,   170,   170,   170,   170,   170,
       0,   170,   170,   167,   170,   170,   170,   170,   170,     0,
     170,   170,   167,   170,   638,   639,   640,   641,   643,   167,
     646,   647,     0,   170,   170,   667,   668,   669,   670,   672,
     167,   675,   676,     0,   170,   682,   167,     0,   688,   167,
     697,   610,   167,   706,   707,   149,   740,     0,   160,   743,
       0,   149,     0,   751,   755,   149,     0,   762,   763,   764,
     765,   769,   770,   766,   767,   768,     0,     0,   160,   790,
       0,   149,     0,     0,   803,   160,     0,     0,   160,   160,
       0,   850,     0,   181,   181,     0,     0,   181,     0,   181,
    1036,     0,     0,     0,     0,     0,     0,     0,     0,  1056,
       0,     0,   181,   181,     0,     0,     0,     0,     0,     0,
       0,     0,   920,     0,     0,     0,  1036,    84,     0,   181,
       0,  1080,   924,     0,     0,     0,   213,  1258,  1257,     0,
       0,   235,     0,     0,     0,     0,   304,   429,   323,     0,
     942,     0,   189,     0,   983,   984,   988,   995,  1005,   355,
     323,     0,   595,   620,   629,   630,   631,   632,   633,   167,
     635,   636,   170,   658,   659,   660,   661,   662,   167,   664,
     665,   170,   649,   650,   651,   652,   653,   167,   655,   656,
     170,   642,   170,   167,   648,   671,   170,   167,   677,   684,
     167,   694,   611,     0,   160,   744,     0,     0,     0,     0,
       0,   771,   772,   788,     0,     0,     0,   799,   804,     0,
     813,   814,   805,   160,     0,   182,  1036,  1036,    83,     0,
    1036,     0,  1036,   894,   149,     0,  1059,     0,  1062,  1096,
    1063,  1061,  1058,     0,  1036,  1036,    83,     0,     0,  1036,
    1036,     0,     0,  1036,   923,   921,   922,   901,  1036,  1036,
    1080,  1091,     0,  1048,   836,     0,     0,     0,   237,     0,
       0,     0,   324,   325,   345,     0,     0,   190,   191,   944,
     945,   363,     0,   170,   637,   170,   666,   170,   657,   644,
     170,   673,   170,   685,     0,   739,   160,   160,     0,   160,
       0,   160,   160,     0,   160,     0,  1036,   907,   903,  1036,
       0,   908,     0,   902,  1036,     0,  1060,     0,   905,   904,
    1036,     0,     0,   899,   897,  1036,   149,   898,   900,   906,
    1091,  1042,     0,     0,  1081,  1089,  1131,     0,     0,     0,
     267,   290,   293,   291,     0,     0,   941,   149,   556,   634,
     663,   654,   645,   674,   160,   742,   748,     0,   761,   758,
     789,   794,     0,   809,     0,   912,   896,    83,     0,   910,
    1097,     0,   895,    83,     0,   911,     0,  1043,  1093,  1095,
       0,  1088,     0,     0,   272,     0,     0,     0,     0,   189,
       0,   745,   149,   759,   791,   823,  1036,     0,     0,  1036,
       0,   160,  1094,  1090,   236,     0,     0,     0,     0,     0,
     943,   717,   149,   746,   760,   149,   792,   914,     0,  1036,
     913,     0,     0,   238,   283,     0,   282,     0,   747,   793,
      83,   915,    83,  1036,   281,   280,  1036,  1036,   909,   917,
     916
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1393,   172,   152,  1240,  2466,  2467,   422,   423,
     424,   425,   153,   154,   155,   678,    91,   797,   445,  1190,
    1657,  1330,  1343,  1326,  1900,  2566,  1390,  2619,  1560,   335,
     750,   753,   756,   764,    63,   359,   365,   369,   372,    68,
     375,    75,   390,   386,   380,   397,    82,   402,    92,    98,
     407,   409,   411,   479,   851,  1626,   413,   416,   105,   432,
     156,   158,  2614,   174,   214,   468,   840,   470,   480,   843,
     848,   482,   484,   854,   487,   856,   498,   859,   861,   501,
     505,   509,   511,   514,   518,   545,   541,  1253,   532,   879,
     884,   876,  1241,   890,   535,   554,   557,   562,   567,   575,
     919,   921,   923,   925,   580,   929,   217,   582,  1727,   235,
     584,   586,   590,   595,   603,   244,  1319,   606,   252,   615,
    1335,   617,   623,   974,  1351,   969,  1768,  1357,  1355,  1770,
     970,  1360,  1362,   629,   632,   627,   254,   262,   264,   670,
    1051,  1417,  1040,  1515,  1944,  2260,  1056,  1049,   914,  1294,
    1298,  1306,  1308,  1928,   269,  1065,  1068,  1076,  2232,  2233,
    2234,  1929,  2601,  2602,  1099,  1102,  2674,  2675,  2671,  2672,
    2718,  2235,  2236,   276,   282,   290,   692,   687,   295,   300,
     302,   702,   709,  1128,  1133,   759,   747,   308,   312,   716,
     318,   723,  1565,   736,   737,  1164,  1159,  1571,  1149,  1577,
    1589,  1585,  1153,   741,   725,   324,   325,   339,  1177,   342,
     348,   774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2542
static const yytype_int16 yypact[] =
{
    5331,   105,   511,    76, -2542, -2542,  1090,   -69,   468,   858,
    1073,   463,  3300,   200,    68,  1215,   116,  4438,   426,  2280,
   -2542,    68,   -55,   250,  1061,    69,   107,   452,   365,   454,
     371,   769,  1050,   110,   779,   457,   398,   365, -2542,    98,
      65,   748, -2542,   128,   509,   631, -2542,   498, -2542,   103,
    4128,   285,   115,   556,    84,   992,   249,   540,   579,   121,
     561,    -6,   501, -2542, -2542, -2542,   874,   565, -2542,   182,
      13,    68,    22,   767,    54, -2542,   581,   565, -2542, -2542,
      46,   565, -2542, -2542, -2542, -2542,   565, -2542, -2542, -2542,
   -2542, -2542, -2542,    79,   609,   587,   591,   134, -2542,   565,
    1323,   565,   565,   988,   565, -2542, -2542, -2542,   451, -2542,
   -2542, -2542, -2542,  4878, -2542, -2542, -2542, -2542, -2542, -2542,
     565, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542,  1287, -2542,   565, -2542,   655, -2542, -2542,
      68,    68,    68,    68,    68,    68, -2542, -2542,    68,    68,
      68,    68, -2542,   572, -2542,   628,  1915,   599,    20,   462,
     569,   372,  4447,   666,  4930,  4850,   723,  4878,  4071, -2542,
     893,  -139,   753,   684,    80,   528,   771,   365,   491, -2542,
     727, -2542,   566,   526,   111, -2542,    56, -2542,   432, -2542,
      52,   710,    93, -2542, -2542,  5118, -2542, -2542, -2542,   756,
     809, -2542, -2542, -2542, -2542,    82, -2542, -2542, -2542, -2542,
     888, -2542, -2542,  5118,  4501, -2542, -2542,    51, -2542,   833,
     839,   482, -2542,   565, -2542,   852,   150,   862,   404,   401,
     878,    26, -2542, -2542, -2542,   883,   885,    68,    68,   565,
     565, -2542, -2542,   909, -2542, -2542, -2542, -2542, -2542,  3699,
   -2542,   925,    -2,   565,  5118,   565, -2542,   929, -2542, -2542,
   -2542, -2542, -2542,   565,  1041,    68,  4015,   565,  1287,   565,
   -2542,   933, -2542,  5029, -2542, -2542,   820,   949,   965,   565,
   -2542,   981, -2542, -2542,   -14,   993,  5118,  1003, -2542,  1127,
     565,   934, -2542,   439,   891,  1292,   483,  1012, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542,  1056, -2542,   797,    21,   142,
     144,    53,   565,   565,   139, -2542,   565,   799,  1069, -2542,
     565,   565, -2542,  1093,    16,    28,  1098,  1287, -2542, -2542,
   -2542,   899,   565, -2542, -2542, -2542, -2542, -2542,   565, -2542,
    1103,  1107, -2542,   565,  1133, -2542, -2542, -2542, -2542, -2542,
   -2542,   565, -2542, -2542,   565, -2542, -2542,   469,   469,  1114,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542,   924,   565,   565,  1118,  1123,  1128, -2542, -2542,   565,
     565,   565, -2542,   565, -2542,  1135, -2542, -2542, -2542, -2542,
     814, -2542,  1139, -2542,  5118,  1143, -2542,   565, -2542, -2542,
   -2542,   565,  1144,  1147,  1147,  5118,   565,   565,   565,   565,
     565,   565, -2542,   565,  4878,  1323,   565,   565, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542,  1323,   565, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,  1158, -2542,
     902,    34, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542,   -38, -2542, -2542, -2542,  1006, -2542,   387,   475,   475,
   -2542, -2542, -2542,  1174, -2542,  1178, -2542, -2542,   -82, -2542,
    1051, -2542, -2542, -2542,  1065, -2542, -2542,  1287, -2542,   565,
     565, -2542,  5118,  5118,  1287, -2542, -2542,  1287, -2542, -2542,
   -2542, -2542,  1287, -2542, -2542,  5118,  1287,   565, -2542, -2542,
    5118, -2542,  1214,   460,  1034,    14, -2542, -2542,  1040,  5118,
       7, -2542, -2542, -2542, -2542, -2542,  1236,  1240,  1244, -2542,
    1058, -2542, -2542, -2542,   565, -2542, -2542,   381, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,    52, -2542,
   -2542, -2542, -2542, -2542, -2542,  1064,  1070, -2542, -2542,  1192,
    1194,  1198, -2542, -2542,  1045, -2542,   565,  1266,  1048,  5029,
   -2542,  1287, -2542,  1284, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,  5118,  5118,
    5118,  5118, -2542, -2542,  1289,    68, -2542, -2542,  1297,  1299,
    1101,   565, -2542,   437,  1217, -2542,  1302, -2542,   538,  1225,
    2624,    83,  1310, -2542,  1312, -2542,  1314, -2542,   257, -2542,
    1319,  1326, -2542,  1334, -2542, -2542, -2542,   565, -2542,  5029,
    4819,  1581,   459,  1335,   813,  1246, -2542, -2542, -2542,  1330,
     507,  1339,  1343,    36,   565,   -16,   733,   117,  5118,    68,
    1692,   576,    25,    43,   261,    23, -2542,  1342,  1381,  1347,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,   565,
   -2542, -2542, -2542,   565,   565,   565,   565, -2542, -2542,   565,
    1287,   565, -2542,   565,  1323,   565,  1348,  1287, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542,  1352,     5,   486, -2542,
   -2542, -2542,  1395, -2542, -2542, -2542, -2542,  1303, -2542,  1396,
    1399,  1318,  1403, -2542,  1405, -2542,  1412,  1321,  1413,   634,
     545,   637,    94,   668,  1415,   692, -2542, -2542,  1416,  1418,
    1422, -2542, -2542,  1424, -2542, -2542, -2542, -2542,  1425, -2542,
   -2542,  1427, -2542, -2542,  1429, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542,   565,   565, -2542,   565,   876,   565,   565, -2542,
    2194, -2542,   939,  1431, -2542,   974,  1435, -2542, -2542,    87,
     565,   565, -2542,  1417, -2542, -2542,  1436,  1156,   565,  1430,
     849, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542,  1442,  1443,   565,   565,   565,
    1445,    68,  1453,  1455,  1287,  5118, -2542, -2542, -2542, -2542,
   -2542,  1287, -2542, -2542,   565,   565,   565,  5118,   565,  1323,
     565, -2542,   565, -2542, -2542, -2542, -2542, -2542,  1456,  1457,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542,   666, -2542,   565, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542,  5118,   565,  1287,  1287,    87,    87,
      87,  1287,  1323,   565,  1287, -2542, -2542, -2542,   565, -2542,
     -28,  1305,  1459,  1463, -2542, -2542,  1287, -2542,  1322,  1324,
   -2542,  1471,  1476,  1478,   997,   565,   967,   499,   738, -2542,
   -2542, -2542,   565,   445,   188, -2542,  1228, -2542,  1692,  1229,
     534,  1202,   532, -2542, -2542,   565, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542,   565,  1484, -2542, -2542,
   -2542,    87, -2542, -2542, -2542, -2542, -2542,  4998, -2542, -2542,
    1488,  1493,   565,  1494,  1506,  1507,     6,     6,   -71,  1513,
    1514,  1515,  1521,  1249,  1260,  1526,  1530,  1531,    58,    58,
     -71,  1540,  1543,   -71,  1537,  1545,  4965,  1546,  1547, -2542,
   -2542,  1549,  1550,   562, -2542,  1555,  1556,  1557,  1558,     6,
     -71,  1561,  1562, -2542,  1563, -2542, -2542,  1287,   920,  1271,
    1337,   -31,  1338,  1472,   597,    24,  1573,    55,  1441,  1475,
    1517,  1583,  1541,    37,  1345,  1479,  1580,  1375,   120,    91,
    -112,   -40,  5118,  1692,  1548,   450,  1344,  1379,  1586,   136,
   -2542, -2542,   211,  1588,  1589, -2542, -2542, -2542,  1590,  1391,
     100,  1692,  1392, -2542, -2542, -2542,    68,  1600,  1604,   565,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,     1,
   -2542,  3302, -2542,   565, -2542,   565, -2542, -2542, -2542, -2542,
     565,   565,   565,   813,  5118, -2542,  1607,  1016, -2542, -2542,
     565, -2542, -2542,   565,  5118,   565, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
      68,   565, -2542,   565,   813,  1610, -2542,   565,   565, -2542,
      68, -2542, -2542, -2542,   146,  1612,  1613, -2542, -2542, -2542,
   -2542, -2542,   565,   565, -2542, -2542,  1323,   565,   565, -2542,
   -2542, -2542, -2542,  1617,   565, -2542,   565,  1482, -2542,   565,
   -2542,   565,  1511, -2542,  1619, -2542,  1042,  1042,   722,  1042,
    1624, -2542,   731, -2542, -2542,  1626,  1629,   746,  1620, -2542,
    1635,  1638,  1641, -2542,   775,   807,  1643,  1645,  1642, -2542,
   -2542,  1647,  1648,  1652, -2542,  1042,  1042,  1042,   565, -2542,
   -2542, -2542,   565, -2542,   565,   209,  5118, -2542,   565, -2542,
    5029,  1287, -2542, -2542,  1654, -2542, -2542,  1657, -2542, -2542,
   -2542, -2542,  1655,  4015, -2542,   565,  1656,   565,   565,   565,
    1204, -2542,  1651,  1660,   565,   565,     8,  1661,    68,    68,
   -2542,  1287,   565,  1665,  1667,  1668,  1287,  5118, -2542,   565,
   -2542, -2542, -2542,   565,   565,   565,  1287,  5118,    87, -2542,
   -2542, -2542, -2542,  1323,   565,  1669,    87,   565,  1636,  1637,
     658, -2542,  1671, -2542, -2542,   907,  4100,   565, -2542,   565,
    1673,  1679,   565, -2542,  1676,   927,  4878,  1444,   323,  1446,
      15,  5118,   324, -2542,   273,  1551,    44,   347,  1450,   140,
   -2542, -2542,   453,  1519,   603,  1569,   757,  1692,   819, -2542,
    1688,  1451, -2542,   500, -2542, -2542, -2542, -2542,  1692,  1490,
   -2542, -2542, -2542, -2542, -2542,   565, -2542,   565, -2542, -2542,
     565,   565, -2542,   565, -2542,   565, -2542, -2542, -2542, -2542,
    1500,   565, -2542,   565,   165, -2542, -2542,  1695,  1696, -2542,
     565,     6,     6,     6, -2542, -2542, -2542, -2542, -2542, -2542,
    1697,     6,     6,     6,   517, -2542, -2542,    58,     6,     6,
       6, -2542, -2542,     6,     6,  1698,     6,     6,  1700,    58,
     752, -2542,  1701,  1702,  1703, -2542,   586, -2542,   643,   951,
   -2542,   914, -2542,  1454,  1707,  1708,  1709,    58,    58,   -71,
    1711,  1714,   -71,  1724,  1728,  1729,     6,     6, -2542,  1731,
       6,     6, -2542,  1732, -2542, -2542, -2542, -2542, -2542, -2542,
      68, -2542, -2542, -2542,  4878,  1325,    68,   565,  1332,  1280,
     607, -2542, -2542, -2542,   788, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542,  1734,    68,   565,
   -2542,    68,  1735,   565,  5118,    68,  1448,  1467,  1503,   155,
     167,  1504,   175,  1437,  1438,  1742,  1743,  1744,   597,  1745,
    1746,  1747,  1447,  1449,  1078,  1748,    68,   565,  1385,  1469,
   -2542, -2542,    68,  5118, -2542, -2542,  5118,   565,     0,  1751,
      68,   565,  1287,    68, -2542,  1752,  5118,  5118,   565, -2542,
   -2542, -2542,    68,    68,  5118, -2542, -2542, -2542, -2542, -2542,
   -2542,  5118,   565,    68, -2542, -2542, -2542,   565, -2542, -2542,
    1753,   565,  1536,   163,   565,  1539,   565,   179,   565, -2542,
     565,  1542,  1544,   565,   565,   565,   565,   565,   565,   565,
     565,    38,   565,   565,  1553, -2542,   565,   565,   565,   565,
   -2542,  5118,  1287,  1756,  5118,  5118,   565,   565,  1287, -2542,
     565,   565,   565,  5118, -2542,   565,   565, -2542, -2542, -2542,
    1757, -2542, -2542, -2542, -2542, -2542, -2542,  1760,   565,   565,
   -2542,   565,   565, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542,  1762,  1764,  1766, -2542, -2542,  1042,  1773,  1775,
    1778, -2542,  1780,  1783,  1785,  1788,  1791, -2542,  1794, -2542,
   -2542, -2542,  1795,  1796,  1798, -2542,  1799,  1800,  1803, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,   565,
     565,   565, -2542, -2542,   565,  1287, -2542, -2542, -2542,  4015,
     565,  1287,   565,   565,   565, -2542,   565,   565,  1806,   565,
    1809,  1782,   565,   565, -2542, -2542,  1811,  5118, -2542, -2542,
   -2542,   565, -2542, -2542, -2542, -2542,  1287, -2542,  1038,   565,
    1038,    87,  1287,  5118,   565,   565,  1812, -2542, -2542, -2542,
   -2542, -2542,   565, -2542, -2542, -2542, -2542, -2542,  5118, -2542,
    5118,   565,  1816, -2542, -2542,  1817,  1818,  1820,  1821,  1822,
    5118,  1287, -2542,  5118, -2542,  5118,  5118,  4878,  5118,  1287,
   -2542,  5118, -2542, -2542,  5118, -2542, -2542,  4878,  5118, -2542,
    5118,  5118,  4878,  5118, -2542,  5118,  5118,   565, -2542, -2542,
   -2542,  5118,  5118,  5118, -2542, -2542,  5118,  5118, -2542, -2542,
   -2542, -2542,  5118,  5118, -2542, -2542, -2542, -2542, -2542,   565,
     565, -2542, -2542,  1824,   565, -2542, -2542,  1825,  1827, -2542,
     565, -2542, -2542, -2542,     6, -2542, -2542, -2542,  1828,  1830,
    1832, -2542, -2542,   -71,  1838,  1839,  1840,     6, -2542, -2542,
   -2542, -2542, -2542,    58, -2542, -2542,  1842,     6,  1843,  1845,
    1846,    58,    58,   -71,  1848,  1849,  1850,  1047, -2542,  1165,
   -2542,  1382,  1529,  1851,  1862,  1863,    58,    58,   -71,  1865,
    1866,   -71,  1867,  1533,  1869,  1870,  1871,    58,    58,   -71,
    1873,  1875,   -71,  1877,  1559,  1884,  1885,  1888,    58,    58,
     -71,  1891,  1892,   -71,  1893,  1894,  1897,  1898,    58,    58,
     -71,  1900,  1901,  1902,    58, -2542, -2542, -2542, -2542, -2542,
    1904, -2542, -2542,  1905,    58,  1906,  1907, -2542, -2542,     6,
   -2542, -2542,  1908, -2542,  1287, -2542,  5118,   565, -2542,   565,
    5118,   565,  1909,  1271, -2542, -2542, -2542, -2542, -2542, -2542,
    1920, -2542,  5118,    68,  1921,  5118,  1287, -2542,  1936,  1271,
     565,   565,   565,   565,   565,   565,   565,   565,   565,  1941,
    1943, -2542, -2542, -2542,  1944, -2542, -2542, -2542,  1947,  1950,
   -2542, -2542, -2542, -2542,   565,  5118,   565,  1953,  1271,    68,
    1287,  1287, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542,   565,  1323, -2542, -2542,  1287,  1287,   565,
   -2542, -2542,  1287,  1287, -2542, -2542, -2542, -2542,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   565,  1534, -2542,
     565,   565,   565,   565,   565,   565,   565,   565,   565,   565,
     565,  3356,  1954,   565, -2542,   565,   565,   565,  1951,  1956,
   -2542, -2542,  1287,    87,  1957,  1287,  1287, -2542, -2542,  1323,
     565, -2542,  1958,  1287, -2542, -2542, -2542,  1960, -2542, -2542,
   -2542, -2542,  1042,  1042,  1042, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542,  1271,   565, -2542,   565, -2542,   565,  1287,   565, -2542,
    1323,   565, -2542,   565, -2542,  1835,  1962,  1964, -2542,  1961,
     565,   565,  1966,  1287,  5118, -2542, -2542,   565, -2542,   565,
   -2542,    87,   907,   565,  1968, -2542,   565, -2542, -2542,    52,
   -2542,  1969,  1970,  1971,  1972,  1973,  1287, -2542,   907,   907,
     907,  1287, -2542,   907,    87,   907,   907,  1287, -2542,   907,
     907,   907,  1287, -2542,   907,   907,  1287,  5118,   907,  1287,
     907,   907,  1287,   907,  1287, -2542, -2542,  1967,    52,  1974,
   -2542,   565, -2542, -2542, -2542, -2542,  1976, -2542, -2542, -2542,
   -2542,     6,    58, -2542, -2542, -2542, -2542, -2542, -2542,  1977,
   -2542, -2542,    58,  1978,  1979,  1980,    58,    58,   -71,  1983,
    1984,  1985,  1987,  1989,  1991,    58,    58,   -71,  1995,  1997,
    1999,  2000,  2001,  2004,    58,    58,   -71,  1998,  2006,  2007,
      58,     6,     6,     6,     6,     6,  2009,     6,     6,  2013,
      58,    58,     6,     6,     6,     6,     6,  2015,     6,     6,
    2017,    58,    58, -2542, -2542, -2542, -2542, -2542,  2018, -2542,
   -2542,  2020,    58, -2542, -2542, -2542, -2542, -2542,  2021, -2542,
   -2542,    58, -2542,    58,  2022, -2542,  2023,  2024, -2542,  5029,
   -2542,   907,  2025,  5118,   907,   565,  5118,  2026, -2542,   907,
   -2542, -2542,   907, -2542,  5118,  2027,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565, -2542, -2542, -2542,
    5118,   907,   565,  5118,  2028, -2542,  1323,  1323,  5118,  1323,
    1323,  5118,  5118,  1323,  1323,   565,   565,   565,   565,   565,
     565,  1271,   565,   565,   565,  1470,  1481,  1520,  1597,  1631,
    1683,  1684,  1534, -2542,  1685, -2542, -2542,  1271,   565,   565,
     565,   565,  1271,   565,   565,   565,   565,   565,   565,  1287,
     565,  1594,  1271,   565,   565, -2542, -2542,    87,    68,  2034,
    2035, -2542, -2542, -2542, -2542, -2542,    87,  2038, -2542, -2542,
   -2542, -2542,   565, -2542, -2542,  1323,   565, -2542, -2542, -2542,
    1252,  2039,  2040, -2542,   565,  2042,  1038, -2542,   907, -2542,
   -2542, -2542, -2542,  2043, -2542, -2542,  2046,  2047,  2050,  2051,
    5118,  2052, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,    87,   907,
   -2542,    87, -2542, -2542,    87, -2542,    87,  2054,  2056, -2542,
     565, -2542, -2542,     6,    58, -2542,     6,     6,     6,     6,
       6,  2060,     6,     6,    58,     6,     6,     6,     6,     6,
    2061,     6,     6,    58,     6,     6,     6,     6,     6,  2062,
       6,     6,    58,     6, -2542, -2542, -2542, -2542, -2542,    58,
   -2542, -2542,  2065,     6,     6, -2542, -2542, -2542, -2542, -2542,
      58, -2542, -2542,  2066,     6, -2542,    58,  2070, -2542,    58,
   -2542, -2542,    58, -2542, -2542,  1287, -2542,  5118,   907, -2542,
    2071,  1287,   565, -2542, -2542,  1287,   565, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542,   565,   565,   907, -2542,
    2072,  1287,   565,  1323, -2542,   907,   565,  1323,   907,   907,
    5118, -2542,   565,  2073,  2073,   565,   565,  2073,  1271,  2073,
   -2542,  5118,   597,  2076,  2078,  2080,  2084,  2085,  2087, -2542,
      68,  1271,  2073,  2073,   565,   565,  1271,   565,   565,   565,
     565,   565, -2542,  1323,   565,  2089, -2542, -2542,   565,  2073,
      68,    19, -2542,  2090,    68,  2088, -2542, -2542, -2542,  2091,
     565, -2542,  2092,  2094,  1804,   565, -2542, -2542,    12,  5118,
   -2542,  2095,    60,  5118, -2542, -2542, -2542, -2542, -2542, -2542,
      12,   565, -2542, -2542, -2542, -2542, -2542, -2542, -2542,    58,
   -2542, -2542,     6, -2542, -2542, -2542, -2542, -2542,    58, -2542,
   -2542,     6, -2542, -2542, -2542, -2542, -2542,    58, -2542, -2542,
       6, -2542,     6,    58, -2542, -2542,     6,    58, -2542, -2542,
      58, -2542, -2542,   565,   907, -2542,  5118,  5118,   565,  5118,
     565, -2542, -2542, -2542,  5118,  5118,   565, -2542, -2542,  5118,
   -2542, -2542, -2542,   907,  2098, -2542, -2542, -2542,  1271,   565,
   -2542,  2099, -2542, -2542,  1287,  2101, -2542,  2100, -2542, -2542,
   -2542, -2542, -2542,  2103, -2542, -2542,  1271,   565,  2104, -2542,
   -2542,   565,  5118, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
      19,  1571,  1692, -2542, -2542,  2105,  2106,  2107, -2542,  2005,
    2109,    31, -2542, -2542, -2542,  2110,  5118, -2542, -2542, -2542,
   -2542, -2542,  2111,     6, -2542,     6, -2542,     6, -2542, -2542,
       6, -2542,     6, -2542,  5029, -2542,   907,   907,   565,   907,
    2114,   907,   907,   565,   907,   565, -2542, -2542, -2542, -2542,
    2115, -2542,   565, -2542, -2542,  2117, -2542,   565, -2542, -2542,
   -2542,  2119,   565, -2542, -2542, -2542,  1287, -2542, -2542, -2542,
    1571, -2542,  1768,  1704,  1692, -2542, -2542,  2120,  2121,  2123,
   -2542, -2542, -2542, -2542,   954,   954, -2542,  1287, -2542, -2542,
   -2542, -2542, -2542, -2542,   907, -2542, -2542,  2124, -2542,  4878,
   -2542, -2542,  2125, -2542,  1271, -2542, -2542,  1271,   565, -2542,
   -2542,   565, -2542,  1271,   565, -2542,  5118, -2542,  1768, -2542,
      68, -2542,  2127,  2128, -2542,   565,   565,   565,   565,    60,
    2129,  4878,  1287, -2542,  4878, -2542, -2542,   565,  2126, -2542,
     565,   907, -2542, -2542, -2542,  2130,  2135,   565,  2137,   565,
   -2542, -2542,  1287, -2542, -2542,  1287, -2542, -2542,  2139, -2542,
   -2542,  2140,  2141, -2542, -2542,  2142, -2542,  2143, -2542, -2542,
    1271, -2542,  1271, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2542, -2542,    -3, -2542,   313, -2542, -1530,  -898,  1621, -2542,
     780,  -322,  1538,   -45,   102, -2542, -1631,  1721,  1805,  -855,
     855,  -830,  1784,   740, -2542,  -896, -2542,  -817, -1127, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542,  -564,  -476, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542,  -390, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -1437, -2542, -2542, -2542, -2542, -2542,  -634, -2542, -2542,
   -2542, -2542, -2542, -2542,   222, -2542, -2542, -2542, -2542,   -87,
    -656, -1851,  -451, -2542, -2542, -2542, -2542,  -524,  -519, -2542,
   -2542, -2541, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542,  1426, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542, -2542,
   -2542, -2542, -2542, -2542, -2542, -2542, -2542
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1229
static const yytype_int16 yytable[] =
{
      67,  1874,   672,   852,  1090,   347,  1489,  2017,   104,  2019,
    1561,   887,  1566,  1230,  1231,  1232,    64,    65,   881, -1079,
     772,  1064,  1067,    64,    65,   106,   367,  1893,  1103,   287,
    1094,   630,   775,   237,    64,    65,  1677,   311,  1596,  1597,
    1598,    64,    65,  1941,  2612,  1124,   341,  1042,  1894,   352,
     400,  1895,   358,  1059,  1624,   604,   364,    64,    65,   371,
    1096,   238,  1896,   374,   376,  1687,   757,   385,    64,    65,
     392,   396,   106,   533,   399,  1341,  1314,   563,   403,    64,
      65,  1460,  1421,   404,   405,  1897,   538,   748,  1043,   355,
    1396,  1394,  2617,  1328,    64,    65,   417,   421,   426,   427,
     431,   433,  1898,    64,    65,  1238,    64,    65,   109,   578,
     857,   106,   255,   831,   106,   291,  1125,   437,    64,    65,
      64,    65,  1104,   834,    64,    65,   587,  1454,  1105,   239,
    1345,  2719,   393,  1348,   289,   707,  1479,   838,   888,   414,
     111,  1471,    64,    65,   240,  1418,   106,  1452,   106,  1458,
    1379,  1538,   446,  1069,   841,   613,  1459,  1070,  1446,   305,
     388,  1692,  1324,  1539,   534,   415,    64,    65,   539,   588,
     971,    54,   559,   256,   858,   478,  1862,  2742,   319,   882,
     499,  1154,    64,    65,  1188,  1725,   377,   111,  1864,  1325,
     564,    64,    65,  1329,   673,   257,  1867,   389,  1126,   381,
     540,   674,   675,  1461,   241,  1299,   471,  1397,   751, -1228,
     754,   842,   472,  1602,    76,   436,  1342,  2681,  1239,  1044,
     839,  1422,   114,  1455,   356,   394,   111,   320,  1071,   111,
     115,   116,  1480,   157,  1045,  1046,   321,   676,  1473,   972,
     611,   758,  1063,   605,   708,   242,   258,  1060,   697,  1072,
    1155,   473,  1302,  1678,  1097,   243,   637,   638,   309,   304,
     173,   111,  1419,   111,   322,   106,   245,   117,  1127,   114,
     679,   977,   681,   589,   368,  1447,   474,   115,   116,  1625,
     683,   686,  1688,   689,   693,   500,   695,   508,   579,   513,
     517,   401,  2613,  1423,   565,   631,   705,   544,   889,   253,
    1682,   773, -1079,   395,  1490,   406,   715,   717,   114,  1095,
    1073,   114,   576,   776,   382,   119,   115,   116,   978,   115,
     116,   475,   566,  1106,   883,  1047,  1048,   159,  1061,   760,
     761,   763,  2682,   765,   236,  1098,  1424,   768,   769,   261,
    2618,  1942,   677,   114,  1453,   114,   294,  1189,   781,   783,
    1899,   115,   116,   115,   116,   784,   310,  1463,   383,   384,
     787,   789,   119,   762,   149,   476,   477,    66,   790,   150,
     151,   791,  1119,  1643,   378,  1483,   476,  2683,  1693,   306,
     111,  1647,  1456,  1472,   387,   896,   897,  1920,   691,   801,
     802,  1481,   560,  1863,   340,   614,   806,   807,   808,  1726,
     809,   119,   307,  1925,   119,  1865,   351,   259,  1074,   618,
     292,   149,   363,  1868,   816,   561,   150,   151,   817,   547,
     293,   323,   265,   822,   823,   824,   825,   826,   827,  1521,
     828,   379,   421,   832,   833,  1474,   119,   277,   119,  1683,
    1975,   898,   421,   835,  1674,  1680,   979,   899,    64,    65,
     149,   943,   944,   149,   260,   150,   151,   263,   150,   151,
    1533,   301,   114,  1035,   877,   845,    64,    65,  1689,   568,
     115,   116,    77,   448,   449,   450,   451,   452,   453,   569,
    1694,   454,   455,   456,   457,   149,   303,   149,   609,  1036,
     150,   151,   150,   151,   624,   900,   864,   865,   945,   792,
     719,  1843,   336,    99,    64,    65,   570,  1218,    78,   215,
     901,  1684,   625,   326,   873,   349,   109,   360,   270,   980,
     271,   619,   100,    55,   902,   216,  1129,  1711,  1859,   981,
     903,  1738,  1739,   542,   930,   904,   830,    64,    65,  1820,
     485,   895,  1823,   954,   738,   361,  1100,  1053,   486,  1309,
    1234,  1888,   955,   956,  1685,   119,   354,   548,   846,   720,
     982,  1675,  1681,   793,    56,  1285,   366,  1363,    64,    65,
     635,   636,   549,   926,   101,   968,  1364,  1365,  1740,    79,
    1465,   571,    57,   362,   109,  1690,   398,   626,   905,  2573,
     266,  1772,   410,   543,   987,   620,   412,  1130,   688,   957,
    1773,  1774,   610,   739,   149,   267,  1145,   906,   942,   150,
     151,    58,   907,   849,   908,  2597,  1091,   572,  1054,  1037,
    1695,  1704,   337,  1366,   370,   878,   946,   947,  1286,    59,
    1310,   794,  1714,    60,   986,   272,   847,  1400,   909,   910,
     408,   749,   752,   755,   434,    61,   911,  1775,  1783,   621,
     850,  1062,  1296,  1287,  1075,  2485,   102,  1784,  1785,   447,
     915,    80,  1651,  1401,   912,  1146,   268,  1712,   327,    64,
      65,  1038,   550,   622,  1466,   117,  1110,  1696,   328,  1131,
    1111,  1112,  1113,  1114,   721,   573,  1115,  1092,  1117,   458,
    1118,   421,  1120,   273,   459,   726,  1402,  1039,  1150,   948,
    1055,  1147,  1403,   338,  1786,   329,  1741,  1742,  1404,   949,
     950,   722,  1844,    81,   109,  2647,  2648,   469,   795,  2651,
     913,  2653,   109,   796,  1713,  1181,  1405,   958,   959,  1156,
     551,  1467,  1288,  2658,  2659,   274,   574,   483,  2663,  2664,
     951,  1304,  2667,   117,   275,   481,  1406,  2668,  2669,  1132,
     103,  1367,  1368,  1161,   728,   740,   510,  1151,   536,  1172,
    1173,  1407,  1174,  1176,  1178,  1179,  1758,  1759,  1290,  1093,
      64,    65,   552,   537,   313,  1776,  1777,  1191,  1192,  1743,
     330,   553,  1289,  1562,  1196,  1197,  2020,   546,  1157,  1744,
    1745,  1408,  1568,   555,  1544,  2705,  1042,   556,  2706,   577,
     960,  1845,    62,  2709,  1203,  1204,  1205,  1574,   558,  2712,
     961,   962,  1162,  1760,  2715,   963,   331,  1148,   811,   812,
    1746,  1213,  1214,  1215,  1369,  1217,   421,  1219,   583,  1220,
    1409,   744,  1787,  1788,  1370,  1371,  1582,  1043,   607,  1372,
     585,   964,  1563,   608,  1410,  2268,  2269,  2270,  1778,   296,
    1223,  1569,  1225,  1199,  1846,  1411,   612,  1066,  1779,  1780,
     314,  1200,  1227,  1781,  1698,  1373,  1575,   616,  1586,   421,
    1235,  1699,   315,   117,   698,  1237,  1042,    64,    65,    64,
    1175,   117,  1412,   628,   332,  2757,    83,   633,  2760,  1782,
     634,  1252,  1254,  1847,  1413,  1583,  1414,  1415,  1291,  1295,
    1297,  1300,    64,    65,   745,  1789,   734,  1305,  2771,  1152,
     699,  1644,  1311,  2076,   639,  1790,  1791,  1043,   938,   333,
    1792,  1354,  2778,  1312,  1701,  2779,  2780,  1587,  1805,  1806,
     671,  1654,  1655,  2089,   682,   334,  1416,   696,   519,  1320,
    1158,  1761,  1762,  1182,  1183,  2177,  1793,   297,  2126,  1705,
    1292,  2129,   520,   703,   316,  1224,  1794,    64,    65,  2137,
     700,  2185,  2140,   391,  1163,  1795,  1796,   317,  1044,   704,
    2148,   278,  1078,  2151,   521,  1807,  1293,  1101,  1185,  1186,
    2158,  1702,  1848,  1045,  1046,   706,  1706,  1255,  1256,  1257,
    2204,    64,    65,   522,  1564,    64,    65,   373,   710,   746,
      64,  1251,  1384,  1570,  1656,  2575,  1457,   712,    84,  1665,
     523,   724,  1797,   524,  1763,  1258,  1259,   742,  1576,  1260,
    1524,  1525,   780,   298,  1764,  1765,  1261,  1482,   428,  1262,
      85,   718,   299,  1263,    86,  1849,  1488,   591,  2649,   525,
     526,  1264,  1265,  1707,    64,    65,  1703,  1584,  1044,  1266,
    1516,   357,  1517,    64,    65,  1766,  2660,  1518,  1519,  1520,
     743,  2093,  2094,  1045,  1046,   701,    83,  1526,   766,   107,
    1527,  1385,  1529,   767,  1047,  1048,  1267,  1268,  1666,  1588,
    1269,   684,  1880,  1881,  1555,  1556,    87,   246,  1531,   283,
    1532,   527,   849,  2271,  1535,  1536,  1270,   770,  2258,   429,
    1708,   528,   778,  1808,  1809,   592,   109,   785,  2095,  1542,
    1543,   279,   786,   421,  1545,  1546,  1271,   280,   799,   281,
     800,  1548,   803,  1549,  1207,    88,  1551,   804,  1552,   850,
      64,    65,   805,    89,    90,  1605,    64,    65,  1272,   810,
    1798,  1799,  1386,  1387,   813,   788,   593,  1273,   815,  1667,
    1668,   110,   685,   418,  1047,  1048,    93,  1388,   420,    64,
      65,   529,   530,   836,  1669,  1599,  2291,   713,  1195,  1600,
     837,  1601,    94,   247,   844,  1604,  1810,  2736,   853,  2102,
    2103,   430,   855,  2739,   594,   248,  1811,  1812,    84,  2308,
    1610,  1274,  1613,  1275,  1615,  1616,  1617,  1619,  1389,  1276,
    1277,  1622,  1623,   819,   820,  1670,   112,    64,    65,  1631,
      85,  1557,  1558,  1800,  2016,  1278,  1637,  1813,   875,   249,
    1638,  1639,  1640,  1801,  1802,  1279,  2104,   860,  1803,   880,
     421,  1645,   531,   862,  1648,   885,  2096,  2097,   714,  1559,
    2776,   891,  2777,   284,  1660,   892,  1661,    95,   893,  1663,
    1280,   916,  1281,   894,  1804,    64,    65,   917,   918,   160,
     920,   161,  1282,  1618,   922,   117,    87,   250,  2341,   924,
     118,   927,  1283,   928,    64,    65,    69,  2350,  1391,  1392,
     251,   285,    70,    64,    65,  1842,  2359,  1391,  1392,   932,
      96,   162,  1716,   937,  1717,  1612,   941,  1718,  1719,   163,
    1720,   939,  1721,   940,   952,    88,  1284,   953,  1723,  2098,
    1724,  2479,   965,    89,    90,   973,   975,  1730,   976,  2099,
    2100,    71,   438,  2438,   983,    97,    64,    65,    64,    65,
    1836,   984,   418,   419,   420,    64,    65,  1840,   985,  2451,
    1041,   286,  1652,  1057,  2456,  1050,    72,  1052,  1058,  1485,
    2101,  1109,  1121,   726,  2105,  2106,  1123,   164,  1672,  1107,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    64,    65,
    1885,    73,  1837,   439,  1839,  1841,  2111,  2112,  1108,  1134,
    1135,  1136,  2470,  1530,  1137,  1138,   165,  1139,  1142,   727,
    1140,  2474,   728,  1537,   440,   441,  1852,  1141,  1143,  1160,
    1855,  1165,   442,  1166,   166,   167,  1167,  2107,  1168,  1193,
    1169,   168,  1170,   169,  1171,  1184,    74,  2108,  2109,  1187,
     443,  1194,  1198,  2113,  1884,  1886,  1201,  1202,   729,  1206,
     444,    64,    65,  1858,  1892,  1391,  1392,  1208,  1903,  1209,
     170,  1221,  1222,  2494,  1243,  1909,  2496,  1244,  2110,  2497,
    1242,  2498,    64,    65,  1887,  1248,  1391,  1392,  1246,  1914,
    1247,  1249,  1250,   730,  1916,  1301,  1303,  1307,  1918,  1313,
    1921,  1922,  1317,  1924,  1926,  1927,  1835,  1930,  1318,  1321,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1943,  1945,
    1946,  1322,  1323,  1948,  1949,  1950,  1951,  1331,  1332,  1336,
    1333,  1628,  1629,  1957,  1958,   171,  1334,  1960,  1961,  1962,
    1337,  1338,  1964,  1965,   731,  1339,  1340,   732,  2567,  1427,
    2571,  2570,  1349,  2572,  1346,  1968,  1969,  1347,  1970,  1971,
    1350,  1356,  1358,  2583,  1359,  1361,  2584,  2585,  2588,  1374,
    1375,   733,  1376,  1377,   734,  1380,  1428,  1381,  1382,  1429,
     288,  2114,  2115,  2599,   735,  1395,  1398,  1399,  1420,  1425,
    1426,  1445,  2209,  1448,  1449,  1450,  1451,  1468,  1464,  2225,
    1469,  1470,  1475,  1550,  1476,  1477,  1991,  1992,  1993,  1430,
    2226,  1994,  1478,  1484,  1486,  1435,  1996,  1999,  1487,  2001,
    2002,  2003,  1523,  2004,  2005,  1534,  2007,  1540,  1541,  2010,
    2011,  1547,  1553,  1554,  1578,  1079,  2227,  1431,  2014,  1567,
    1432,  1572,  1436,  1080,  1573,  1437,  2018,  2263,  1438,  1081,
    1579,  2023,  2024,  1580,  2116,  1581,  1592,  1024,  1590,  2026,
    1591,   435,  1593,  1594,  2117,  2118,  1595,  1620,  2029,  1607,
    1082,  1025,  1608,  2228,  1621,  1439,  1627,  1609,  1614,  1632,
    1026,  1633,  1634,  1646,  1649,  1650,  1653,  1662,  2277,  -438,
    1027,  1664,  1673,  1083,  1676,  2119,  1697,  1327,  1691,  1686,
    1700,  1084,  1709,  1440,  2057,  1722,  1441,  1715,  1710,  1728,
    1729,  1734,  1753,  1833,  1756,  1860,  1767,  1769,  1771,  1838,
    1028,  1998,  1815,  1816,  1817,  1821,  2065,  2066,  1822,  1378,
     497,  2068,   504,   507,  1814,   512,   516,  2071,  1085,  1824,
    1029,  1851,  1825,  1826,  1853,  1829,  1086,  1832,  1857,  1850,
    1854,  1861,  1866,  1433,  1869,  1870,  1871,  1872,  1873,  1875,
    1876,  1877,  1882,   581,  1878,  1901,  1879,  1906,  1917,  1883,
    1919,  1954,  1966,  1923,  1967,  1889,  1931,  1972,  1932,  1973,
    1974,   596,   602,  1902,  1434,  1030,  1905,  1947,  1976,  2042,
    1977,  1087,  1978,  1079,  1979,  1910,  1911,  1980,  2009,  2048,
    1981,  1080,  1088,  1982,  2053,  1983,  1915,  1081,  1984,  2120,
    1985,  1986,  1987,  2131,  1988,  1989,  2735,  1990,  1089,  1442,
    2610,  2006,   680,  2008,  1031,  2012,  2025,  2229,  1082,  2230,
    2030,  2442,  2031,  2032,   690,  2033,  2034,  2035,  2067,  2142,
    2069,  2070,  2443,  2073,  2172,  2074,  2173,  2075,  2175,  1032,
    1443,  1083,  2077,  2078,   711,  2079,  2082,  2280,  2084,  1084,
    2085,  2086,  2090,  2091, -1092,  2092,  2121,  2186,  2187,  2188,
    2189,  2190,  2191,  2192,  2193,  2194,  1444,  2122,  2123,  2127,
    2128,  2444,  2130,  2231,  2132,  2133,  2134,  2138,  1033,  2139,
    1034,  2200,  2141,  2202,  2423,  2424,  1085,  2426,  2427,  2143,
    2144,  2430,  2431,  2145,  1086,  2149,  2150,  2465,  2152,  2153,
    2208,   421,  2154,  2155,  2159,  2160,  2212,  2161,  2163,  2164,
    2166,  2167,  2750,  2169,  2176,  2215,  2216,  2217,  2218,  2219,
    2220,  2221,  2222,  2223,  2224,  2178,  2181,  2237,  2238,  2239,
    2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,  2248,  1087,
    2251,  2184,  2252,  2253,  2254,  2195,  2673,  2196,  2445,  2197,
    1088,  2198,   814,  2477,  2199,  2255,   421,  2264,  2203,  2250,
    2256,  2259,  2265,   821,  2267,  2283,  1089,  2281,   460,  2282,
    2286,  2327,   829,  2294,  2297,  2298,  2299,  2300,  2301,  2329,
    2331,  2334,  2446,  2336,  2337,  2338,   461,  2342,  2343,  2272,
    2344,  2273,  2345,  2274,  2346,  2276,  2347,   421,  2278,  2351,
    2279,  2352,  2360,   462,  2353,  2354,  2355,  2284,  2285,  2356,
    2361,  2679,  2362,  2369,  2289,   463,  2290,  2372,  2673,  2380,
    2293,  2383,  2386,  2295,  2387,  2389,  2392,  2393,  2394,  2397,
    2402,  2406,  2422,   464,  2447,  2448,  2450,   465,  2472,  2473,
     866,   867,  2475,   818,  2481,  2482,  2484,  2685,  2487,   466,
    2488,  2229,  2489,   871,  2490,  2720,  2491,  2493,   874,  2499,
    2500,  1731,  1732,  1733,  2509,  2518,  2527,   886,  2330,  2533,
    2537,  1735,  1736,  1737,  2540,  2546,  2554,  2565,  1748,  1749,
    1750,  2576,  2577,  1751,  1752,  2578,  1754,  1755,   467,  2579,
    2580,  2581,  2605,   694,  2596,  2603,  2606,  2608,  2609,   798,
    2616,  2557,  2646,  2652,  2656,  2560,  2655,  2657,  2662,  2676,
    2621,  2677,  2678,  2680,  2686,  2688,  1827,  1828,  2699,  2707,
    1830,  1831,  2710,  2713,  2395,  2722,  2723,  2724,  2731,  2734,
    2759,  2296,  2744,  2745,  2751,  2763,   933,   934,   935,   936,
    2764,  2594,  2766,  2770,  2772,  2449,  2773,  2774,  2775,  2670,
    2721,  2717,   779,     0,     0,  1144,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2180,     0,     0,     0,
    2328,     0,  2400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2407,  2408,  2409,  2410,  2411,  2412,  2413,
    2414,  2415,  2416,  2417,     0,     0,  1077,     0,     0,  2420,
    1180,     0,  2205,   421,   421,     0,   421,   421,  2726,  2728,
     421,   421,  2432,  2433,  2434,  2435,  2436,  2437,     0,  2439,
    2440,  2441,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2452,  2453,  2454,  2455,     0,
    2457,  2458,  2459,  2460,  2461,  2462,     0,  2464,     0,     0,
    2468,  2469,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2476,
       0,     0,   421,  2478,     0,     0,     0,  2480,     0,     0,
       0,  2483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   218,
       0,     0,   863,     0,     0,     0,     0,     0,     0,   868,
       0,     0,   869,     0,     0,     0,     0,   870,     0,     0,
       0,   872,     0,     0,   219,     0,     0,  2501,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1211,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,   221,  1216,     0,     0,     0,     0,
       0,     0,     0,     0,   222,   223,     0,     0,     0,     0,
       0,   224,     0,     0,     0,     0,   931,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2548,
       0,     0,  1226,  2550,   225,     0,     0,     0,     0,     0,
       0,     0,     0,  2551,  2552,     0,     0,     0,     0,  2556,
     421,   226,     0,  2559,   421,     0,     0,     0,     0,  2564,
       0,     0,  2568,  2569,     0,   227,   228,     0,     0,     0,
       0,     0,   229,     0,     0,     0,     0,     0,     0,     0,
       0,  2586,  2587,     0,  2589,  2590,  2591,  2592,  2593,     0,
     421,  2595,   230,     0,     0,  2598,     0,     0,     0,     0,
       0,     0,     0,     0,  2072,  1316,     0,  2607,     0,     0,
       0,     0,  2611,     0,     0,     0,     0,  2080,     0,     0,
       0,     0,     0,     0,     0,  1116,     0,  2083,  2622,     0,
     231,     0,  1122,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
    2634,     0,     0,     0,     0,  2638,     0,  2640,     0,     0,
    1462,   232,     0,  2643,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,  2650,     0,     0,  2168,
       0,  2471,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2661,     0,     0,     0,  2665,  2694,
     234,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1522,     0,     0,     0,     0,     0,  2684,     0,
       0,     0,  1528,     0,     0,     0,     0,     0,     0,  1210,
       0,     0,     0,     0,     0,     0,  1212,     0,     0,     0,
       0,     0,     0,     0,     0,  2697,     0,     0,     0,     0,
    2702,     0,  2704,     0,     0,     0,     0,     0,     0,  2708,
       0,     0,     0,     0,  2711,     0,     0,     0,     0,  2714,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1228,  1229,     0,     0,     0,  1233,     0,     0,  1236,
       0,  2725,  2727,     0,     0,     0,     0,     0,     0,     0,
       0,  1245,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2737,     0,     0,  2738,     0,
       0,  2740,     0,     0,  1603,     0,     0,     0,     0,     0,
       0,     0,  2746,  2747,  2748,  2749,     0,     0,     0,     0,
       0,  1611,     0,     0,  2758,     0,     0,  2761,     0,     0,
       0,     0,     0,  1344,  2765,     0,  2767,     0,     0,     0,
       0,     0,     0,     0,     0,  1636,     0,     0,     0,     0,
       0,     0,     0,  2582,     0,  1642,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     966,     0,     0,  2600,  1659,   967,     0,  2604,     0,     0,
       0,     0,  1383,     0,  1671,     0,     0,     0,     0,  1679,
       0,  2733,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2332,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2753,     0,     0,  2756,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2364,  2365,  2366,  2367,  2368,     0,  2370,  2371,     0,
       0,     0,  2375,  2376,  2377,  2378,  2379,  2292,  2381,  2382,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2303,  2304,  2305,     0,     0,  2307,     0,
    2309,  2310,     0,     0,  2312,  2313,  2314,     0,     0,  2316,
    2317,     0,     0,  2320,     0,  2322,  2323,     0,  2325,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1834,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,  1856,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1606,     0,     0,     0,
       0,  1890,     0,     0,  1891,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1907,  1908,     0,     0,     0,     0,
       0,     0,  1912,     0,     0,     0,  1630,     0,     0,  1913,
       0,  1635,     0,     0,     0,     0,  2396,     0,     0,  2399,
       0,  1641,     0,  2743,  2403,     0,     0,  2404,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2419,     0,     0,  1952,
       0,     0,  1955,  1956,     0,     0,     0,     0,     0,     0,
       0,  1963,     0,  2502,     0,     0,  2504,  2505,  2506,  2507,
    2508,     0,  2510,  2511,     0,  2513,  2514,  2515,  2516,  2517,
       0,  2519,  2520,     0,  2522,  2523,  2524,  2525,  2526,     0,
    2528,  2529,     0,  2531,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2534,  2535,     0,     0,     0,     0,     0,
       0,  1747,     0,     0,  2538,     0,     0,     0,     0,     0,
       0,     0,     0,  1757,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2486,     0,     0,     0,  1997,     0,     0,
       0,  1818,  1819,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2013,     0,     0,     0,     0,
       0,     0,     0,     0,  2495,     0,     0,     0,     0,     0,
       0,  2022,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2027,     0,  2028,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2036,     0,
       0,  2038,     0,  2039,  2040,  2041,  2043,     0,     0,  2045,
       0,     0,  2046,     0,     0,  2047,  2049,     0,  2050,  2051,
    2052,  2054,     0,  2055,  2056,     0,     0,     0,     0,  2058,
    2059,  2060,     0,     0,  2061,  2062,     0,     0,     0,     0,
    2063,  2064,  2624,  2545,     0,     0,     0,     0,     0,     0,
       0,  2626,     0,     0,     0,     0,     0,  1904,     0,     0,
    2628,     0,  2629,  2553,     0,     0,  2631,     0,     0,     0,
    2558,     0,     0,  2561,  2562,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
       0,     0,     0,     0,  1491,     0,     0,  1953,     0,  1492,
       0,     0,     0,  1959,     0,     0,     0,     0,     0,     0,
     108,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1493,  1494,     0,  1495,  1496,     0,   109,     0,     0,    64,
      65,     0,     0,  2689,  1497,  2690,     0,  2691,     0,     0,
    2692,     0,  2693,     0,  2171,   107,  1498,  1499,  2174,     0,
       0,     0,     0,     0,  1500,     0,     0,  1501,     0,     0,
    2179,     0,     0,  2182,     0,     0,     0,     0,     0,  2635,
       0,   110,     0,     0,  1502,     0,     0,     0,     0,     0,
    1995,  1503,  1504,     0,     0,  1505,  2000,     0,  2645,   111,
       0,     0,     0,  2201,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2015,     0,     0,     0,     0,     0,  2021,     0,     0,
       0,     0,     0,     0,     0,     0,   112,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1506,     0,     0,  2037,     0,     0,  2249,
       0,     0,     0,     0,  2044,     0,     0,     0,     0,     0,
       0,  2695,  2696,   113,  2698,     0,  2700,  2701,     0,  2703,
       0,   114,     0,     0,     0,     0,     0,     0,     0,   115,
     116,     0,   112,     0,     0,   117,     0,     0,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,  1507,     0,
       0,     0,     0,     0,  1508,     0,     0,  2081,     0,     0,
       0,     0,     0,     0,     0,  2087,  2088,     0,     0,  2730,
    1509,     0,  2288,     0,     0,     0,     0,     0,     0,  1510,
    2124,  2125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2135,  2136,     0,     0,     0,   118,     0,     0,     0,
       0,     0,  2146,  2147,     0,     0,  1511,  1512,     0,     0,
       0,     0,  2156,  2157,   119,  2319,  2762,     0,  2162,     0,
       0,     0,     0,     0,     0,     0,     0,  1513,  2165,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,  2170,
       0,     0,     0,   149,     0,     0,     0,     0,   150,   151,
       0,     0,  1514,     0,     0,     0,     0,     0,     0,     0,
       0,  2183,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,  2206,  2207,     0,     0,     0,
       0,     0,     0,   640,   641,     0,     0,     0,     0,     0,
       0,  2398,  2210,  2211,  2401,     0,     0,  2213,  2214,     0,
       0,     0,  2405,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2418,     0,
       0,  2421,     0,     0,     0,     0,  2425,     0,     0,  2428,
    2429,     0,     0,     0,     0,     0,     0,  2257,     0,   642,
    2261,  2262,     0,     0,     0,   643,     0,     0,  2266,     0,
       0,     0,   644,     0,   645,     0,     0,     0,     0,   646,
       0,     0,   647,     0,     0,     0,     0,     0,   648,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   649,     0,
       0,     0,  2275,     0,   650,     0,     0,     0,     0,     0,
       0,     0,     0,   651,     0,     0,     0,     0,  2287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2492,     0,
       0,  2302,     0,     0,     0,     0,  2306,     0,   653,     0,
       0,     0,  2311,     0,     0,     0,     0,  2315,     0,     0,
       0,  2318,     0,   654,  2321,     0,  2333,  2324,     0,  2326,
       0,     0,   655,   656,     0,     0,  2335,     0,     0,     0,
    2339,  2340,     0,     0,     0,     0,     0,     0,     0,  2348,
    2349,     0,     0,   657,     0,     0,     0,     0,  2357,  2358,
       0,     0,     0,     0,  2363,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2373,  2374,   658,     0,     0,     0,
       0,     0,     0,     0,     0,  2384,  2385,     0,     0,     0,
     659,     0,   660,     0,     0,  2544,  2388,     0,     0,     0,
       0,     0,     0,     0,     0,  2390,   661,  2391,     0,     0,
       0,   662,     0,     0,     0,     0,     0,   663,     0,     0,
       0,     0,     0,     0,   664,     0,     0,     0,  2563,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2574,
       0,     0,   665,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   666,   667,     0,   668,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,  2615,     0,     0,
       0,  2620,     0,     0,   107,     0,     0,     0,   669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2463,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,     0,     0,     0,   515,     0,     0,     0,     0,
       0,     0,     0,     0,  2636,  2637,     0,  2639,     0,     0,
     107,     0,  2641,  2642,     0,     0,     0,  2644,     0,     0,
       0,     0,     0,     0,  1658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,  2503,   107,
       0,     0,     0,     0,     0,     0,     0,   109,  2512,     0,
    2666,     0,     0,     0,     0,     0,     0,  2521,     0,     0,
       0,     0,     0,     0,   343,     0,  2530,     0,     0,     0,
       0,   344,     0,  2532,  2687,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2536,     0,     0,     0,     0,     0,
    2539,   112,   110,  2541,     0,     0,  2542,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2543,   110,     0,     0,     0,     0,  2547,     0,     0,     0,
    2549,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2555,   112,     0,     0,
     117,     0,     0,     0,     0,   118,     0,  2732,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2741,     0,   112,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2752,
       0,     0,  2755,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,   118,     0,  2623,     0,     0,     0,     0,     0,     0,
       0,     0,  2625,     0,     0,     0,     0,     0,     0,     0,
       0,  2627,     0,     0,     0,     0,     0,  2630,     0,     0,
     118,  2632,     0,     0,  2633,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   345,
       0,   346,     0,     0,     0,     0,     0,     0,     0,  2654,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   107,     0,     0,     0,
       0,  2716,     0,     0,     0,     0,     0,     0,     0,   175,
       0,     0,   176,     0,   177,     0,     0,     0,     0,     0,
       0,     0,  2729,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   178,     0,   179,   180,   181,     0,     0,
       0,     0,   488,   489,     0,   182,   490,   183,     0,   597,
     107,     0,   184,     0,   185,   186,   187,     0,     0,     0,
       0,   188,     0,   189,     0,     0,     0,  2754,   491,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,  2768,     0,   598,
    2769,     0,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
     193,     0,     0,   194,     0,     0,     0,   195,     0,   196,
       0,     0,   110,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   492,   599,     0,     0,     0,
     197,   198,     0,     0,   199,     0,     0,     0,     0,     0,
       0,     0,   493,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   201,   202,     0,   494,     0,     0,   112,     0,   203,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,     0,   600,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   204,     0,   205,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   206,
       0,     0,     0,     0,     0,     0,     0,     0,   495,     0,
       0,   118,     0,     0,   207,   208,     0,     0,     0,     0,
       0,     0,     0,   209,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,   211,     0,   212,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   213,   496,     0,   601,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   988,
     989,   990,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   991,   992,   107,
       0,   993,     0,     0,   994,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,   996,     0,     0,     0,     0,
       0,     0,     0,   997,   998,     0,     0,   107,     0,     0,
       0,   999,  1000,     0,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1001,     0,
       0,     0,     0,     0,  1002,     0,     0,     0,  1003,  1004,
       0,     0,  1005,     0,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1006,   107,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1007,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   502,
    1008,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,  1009,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,   112,     0,     0,     0,     0,     0,
       0,     0,     0,  1010,     0,  1011,     0,     0,     0,     0,
       0,  1012,  1013,     0,  1315,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,  1014,  1015,     0,     0,
     118,     0,     0,     0,     0,     0,  1016,  1017,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,     0,
       0,     0,     0,   117,     0,     0,     0,     0,   118,   110,
       0,     0,  1018,     0,  1019,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1020,     0,  1021,     0,
       0,     0,     0,     0,  1022,     0,  1352,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,     0,   112,     0,     0,     0,  1023,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,   503,   118,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,   112,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,  1353,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,   118,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     0,     0,     0,     0,     5,     6,     0,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,    11,     0,    12,    13,     0,
       0,     0,     0,     0,     0,     0,    14,    15,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,    18,     0,     0,    19,     0,     0,     0,    20,
      21,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    24,     0,     0,    25,    26,
      27,     0,     0,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    31,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
      35,     0,     0,     0,     0,     0,     0,    36,     0,     0,
       0,    37,     0,     0,    38,     0,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,     0,
       0,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    47,     0,     0,     0,     0,     0,    48,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     0,     0,     0,    52
};

static const yytype_int16 yycheck[] =
{
       3,  1438,     4,   479,   660,    50,     5,  1638,    11,  1640,
    1137,     4,  1139,   868,   869,   870,     3,     4,     4,     0,
       4,   655,   656,     3,     4,     4,    32,    27,     5,    32,
       5,     5,     4,    88,     3,     4,    21,    40,  1165,  1166,
    1167,     3,     4,     5,    32,    40,    49,    63,    48,    52,
       4,    51,    55,    17,    46,     4,    59,     3,     4,    62,
      17,   116,    62,    66,    67,    21,    13,    70,     3,     4,
      73,    74,     4,   212,    77,    17,   931,    21,    81,     3,
       4,   121,    27,    86,     5,    85,     6,    66,   104,     5,
     121,   989,    32,   164,     3,     4,    99,   100,   101,   102,
     103,   104,   102,     3,     4,   133,     3,     4,    56,    16,
     192,     4,     5,   435,     4,     5,   111,   120,     3,     4,
       3,     4,    99,   445,     3,     4,    44,    36,   105,   184,
     960,  2672,    78,   963,    32,   149,    36,   103,   131,     5,
     119,     5,     3,     4,   199,   121,     4,    27,     4,   261,
     980,     5,   155,    36,   192,     5,   268,    40,   121,    61,
     138,    21,   156,    17,   303,    31,     3,     4,    88,    87,
      87,    66,    61,    66,   256,   178,    21,  2718,    50,   165,
     183,    87,     3,     4,    97,    20,     4,   119,    21,   183,
     134,     3,     4,   264,   196,    88,    21,   175,   193,   186,
     120,   203,   204,   243,   259,    17,   186,   238,    66,     0,
      66,   249,   192,     4,   283,   113,   158,   186,   246,   235,
     186,   166,   201,   132,   140,   171,   119,    99,   111,   119,
     209,   210,   132,    33,   250,   251,   108,   239,    27,   156,
     243,   188,   258,   192,   258,   300,   139,   211,   293,   132,
     156,   231,   908,   238,   211,   310,   259,   260,   193,    37,
     144,   119,   238,   119,   136,     4,    16,   215,   263,   201,
     273,    14,   275,   191,   280,   238,   256,   209,   210,   271,
     283,   284,   238,   286,   287,   183,   289,   185,   195,   187,
     188,   245,   280,   238,   238,   269,   299,   195,   291,   230,
      27,   285,   283,   249,   303,   226,   309,   310,   201,   284,
     193,   201,   210,   285,   301,   294,   209,   210,    61,   209,
     210,   301,   266,   300,   310,   341,   342,    14,   292,   332,
     333,   334,   301,   336,    21,   292,   281,   340,   341,    26,
     280,   303,   344,   201,   224,   201,    33,   260,   351,   352,
     350,   209,   210,   209,   210,   358,   291,  1013,   345,   346,
     363,   364,   294,   224,   343,   345,   346,   291,   371,   348,
     349,   374,   694,  1228,   192,  1031,   345,   346,   238,   281,
     119,  1236,   291,   247,    71,     4,     5,   224,   286,   392,
     393,   291,   281,   238,   291,   245,   399,   400,   401,   234,
     403,   294,   304,   224,   294,   238,   291,   300,   291,     5,
     300,   343,   291,   238,   417,   304,   348,   349,   421,   197,
     310,   293,    57,   426,   427,   428,   429,   430,   431,  1063,
     433,   249,   435,   436,   437,   224,   294,    66,   294,   166,
    1567,    60,   445,   446,   121,   121,   189,    66,     3,     4,
     343,    14,    15,   343,   347,   348,   349,     5,   348,   349,
    1094,     4,   201,     4,     4,    78,     3,     4,   121,    37,
     209,   210,     4,   160,   161,   162,   163,   164,   165,    47,
      27,   168,   169,   170,   171,   343,    88,   343,     6,    30,
     348,   349,   348,   349,    93,   114,   499,   500,    61,    30,
      61,  1399,     4,    40,     3,     4,    74,   829,    40,    83,
     129,   238,   111,     4,   517,   230,    56,   268,    64,   262,
      66,   117,    59,    12,   143,    99,    40,    27,  1426,   272,
     149,    14,    15,     5,   579,   154,   434,     3,     4,  1369,
     168,   544,  1372,     5,    61,     5,   285,    40,   176,    17,
     872,  1449,    14,    15,   281,   294,     0,    66,   171,   120,
     303,   238,   238,    94,    53,    66,     5,     5,     3,     4,
     257,   258,    81,   576,   111,   620,    14,    15,    61,   111,
     130,   149,    71,     4,    56,   238,     5,   186,   207,  2440,
     225,     5,     5,    65,   639,   191,     5,   111,   285,    61,
      14,    15,   120,   120,   343,   240,    61,   226,   611,   348,
     349,   100,   231,   138,   233,  2466,    40,   185,   111,   160,
     167,  1277,   124,    61,   123,   523,   189,   190,   129,   118,
      98,   162,  1288,   122,   637,   181,   249,    40,   257,   258,
      31,   328,   329,   330,   193,   134,   265,    61,     5,   245,
     175,   654,   207,   154,   657,  2286,   193,    14,    15,     4,
     558,   193,     4,    66,   283,   120,   301,   167,    37,     3,
       4,   212,   181,   269,   224,   215,   679,   224,    47,   193,
     683,   684,   685,   686,   245,   253,   689,   111,   691,   117,
     693,   694,   695,   239,    66,    61,    99,   238,    61,   262,
     193,   156,   105,   205,    61,    74,   189,   190,   111,   272,
     273,   272,   105,   245,    56,  2566,  2567,   118,   249,  2570,
     339,  2572,    56,   254,   224,   770,   129,   189,   190,    61,
     239,   281,   233,  2584,  2585,   281,   304,   168,  2589,  2590,
     303,   207,  2593,   215,   290,   283,   149,  2598,  2599,   263,
     287,   189,   190,    61,   120,   272,    33,   120,     5,   762,
     763,   164,   765,   766,   767,   768,    14,    15,    30,   193,
       3,     4,   281,    89,    26,   189,   190,   780,   781,   262,
     149,   290,   283,    61,   787,   788,  1641,    16,   120,   272,
     273,   194,    61,    66,  1116,  2646,    63,   231,  2649,    89,
     262,   194,   291,  2654,   807,   808,   809,    61,   282,  2660,
     272,   273,   120,    61,  2665,   277,   185,   272,     4,     5,
     303,   824,   825,   826,   262,   828,   829,   830,    72,   832,
     233,    34,   189,   190,   272,   273,    61,   104,     5,   277,
      31,   303,   120,     4,   247,  1972,  1973,  1974,   262,    70,
     853,   120,   855,     4,   247,   258,     4,   124,   272,   273,
     112,    12,   865,   277,   261,   303,   120,     5,    61,   872,
     873,   268,   124,   215,    54,   878,    63,     3,     4,     3,
       4,   215,   285,     5,   253,  2736,    28,     4,  2739,   303,
       5,   894,   895,   105,   297,   120,   299,   300,   160,   902,
     903,   904,     3,     4,   107,   262,   272,   910,  2759,   272,
      90,  1233,   915,  1743,     5,   272,   273,   104,   605,   288,
     277,   966,  2773,   926,   167,  2776,  2777,   120,    14,    15,
       5,    24,    25,  1763,     5,   304,   339,     4,    45,   942,
     272,   189,   190,     4,     5,  1843,   303,   168,  1778,   130,
     212,  1781,    59,     4,   206,   853,     5,     3,     4,  1789,
     140,  1859,  1792,   196,   272,    14,    15,   219,   235,     4,
    1800,   202,   659,  1803,    81,    61,   238,   664,     4,     5,
    1810,   224,   194,   250,   251,     4,   167,    20,    21,    22,
    1888,     3,     4,   100,   272,     3,     4,   123,     5,   202,
       3,     4,    82,   272,    97,  2442,  1009,     4,   150,    82,
     117,   120,    61,   120,   262,    48,    49,     5,   272,    52,
       4,     5,   123,   244,   272,   273,    59,  1030,    40,    62,
     172,    97,   253,    66,   176,   247,  1039,   149,  2568,   146,
     147,    74,    75,   224,     3,     4,   289,   272,   235,    82,
    1053,    59,  1055,     3,     4,   303,  2586,  1060,  1061,  1062,
       4,    14,    15,   250,   251,   245,    28,  1070,   269,    19,
    1073,   151,  1075,     4,   341,   342,   109,   110,   151,   272,
     113,    40,     4,     5,    42,    43,   228,    26,  1091,    39,
    1093,   198,   138,  1991,  1097,  1098,   129,     4,  1953,   111,
     281,   208,     4,   189,   190,   217,    56,     4,    61,  1112,
    1113,   342,     5,  1116,  1117,  1118,   149,   348,     4,   350,
     196,  1124,     4,  1126,   811,   267,  1129,     4,  1131,   175,
       3,     4,     4,   275,   276,  1180,     3,     4,   171,     4,
     189,   190,   222,   223,     5,    12,   258,   180,     5,   222,
     223,   101,   111,     9,   341,   342,    83,   237,    11,     3,
       4,   268,   269,     5,   237,  1168,  2021,    40,    12,  1172,
     268,  1174,    99,   112,   168,  1178,   262,  2707,     4,    14,
      15,   193,     4,  2713,   296,   124,   272,   273,   150,  2044,
    1193,   224,  1195,   226,  1197,  1198,  1199,  1200,   278,   232,
     233,  1204,  1205,   423,   424,   278,   156,     3,     4,  1212,
     172,   169,   170,   262,   176,   248,  1219,   303,     4,   158,
    1223,  1224,  1225,   272,   273,   258,    61,   176,   277,   195,
    1233,  1234,   339,   168,  1237,   195,   189,   190,   111,   197,
    2770,     5,  2772,   193,  1247,     5,  1249,   174,     4,  1252,
     283,   187,   285,   195,   303,     3,     4,   187,    66,    44,
      66,    46,   295,    59,    66,   215,   228,   206,  2098,   224,
     220,     5,   305,   225,     3,     4,   186,  2107,     7,     8,
     219,   231,   192,     3,     4,     5,  2116,     7,     8,     5,
     217,    76,  1295,     4,  1297,  1193,   195,  1300,  1301,    84,
    1303,     4,  1305,     4,    87,   267,   339,     5,  1311,   262,
    1313,    59,    87,   275,   276,     5,     4,  1320,     4,   272,
     273,   231,    35,  2221,     5,   252,     3,     4,     3,     4,
       5,     5,     9,    10,    11,     3,     4,     5,     4,  2237,
       5,   291,  1240,     4,  2242,    99,   256,    17,     5,  1036,
     303,     4,     4,    61,   189,   190,     4,   142,  1256,    17,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,     3,     4,
       5,   301,  1395,   106,  1397,  1398,    14,    15,    17,     4,
      97,     5,  2257,  1090,     5,    87,   191,     4,    87,   117,
       5,  2266,   120,  1100,   127,   128,  1419,     5,     5,     4,
    1423,     5,   135,     5,   209,   210,     4,   262,     4,    12,
       5,   216,     5,   218,     5,     4,   346,   272,   273,     4,
     153,     5,    12,    61,  1447,  1448,     4,     4,   156,     4,
     163,     3,     4,     5,  1457,     7,     8,     4,  1461,     4,
     245,     5,     5,  2318,     5,  1468,  2321,     4,   303,  2324,
     165,  2326,     3,     4,     5,     4,     7,     8,   156,  1482,
     156,     5,     4,   191,  1487,   257,   257,   285,  1491,     5,
    1493,  1494,     4,  1496,  1497,  1498,  1394,  1500,     5,     5,
    1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,
    1513,     5,     5,  1516,  1517,  1518,  1519,     4,     4,   270,
       5,  1208,  1209,  1526,  1527,   310,     5,  1530,  1531,  1532,
     270,     5,  1535,  1536,   242,     5,     5,   245,  2434,    22,
    2438,  2437,     5,  2439,     4,  1548,  1549,     4,  1551,  1552,
       5,     5,     5,  2451,     5,     5,  2452,  2453,  2456,     4,
       4,   269,     5,     5,   272,     4,    49,     5,     5,    52,
      32,   189,   190,  2469,   282,   238,   238,   105,     5,   138,
     105,    40,  1904,   238,   105,     5,   211,   243,    40,    55,
     211,     5,     4,   111,     5,     5,  1599,  1600,  1601,    82,
      66,  1604,   211,   211,     4,    22,  1609,  1610,     4,  1612,
    1613,  1614,     5,  1616,  1617,     5,  1619,     5,     5,  1622,
    1623,     4,   111,     4,     4,    91,    92,   110,  1631,     5,
     113,     5,    49,    99,     5,    52,  1639,  1959,    55,   105,
       5,  1644,  1645,     5,   262,     4,     4,    66,     5,  1652,
       5,   113,     5,     5,   272,   273,     4,     6,  1661,     5,
     126,    80,     5,   129,     4,    82,     5,    12,    12,     4,
      89,     4,     4,     4,    38,    38,     5,     4,  2000,     0,
      99,     5,   238,   149,   238,   303,   167,   947,   238,   138,
     121,   157,     4,   110,  1697,   195,   113,   207,   247,     4,
       4,     4,     4,  1390,     4,   238,     5,     5,     5,  1396,
     129,  1609,     5,     5,     5,     4,  1719,  1720,     4,   979,
     182,  1724,   184,   185,   270,   187,   188,  1730,   194,     5,
     149,  1418,     4,     4,  1421,     4,   202,     5,  1425,     5,
       5,   238,   238,   226,   307,   307,     4,     4,     4,     4,
       4,     4,     4,   215,   307,     4,   307,     5,     5,  1446,
     224,     5,     5,   224,     4,  1452,   224,     5,   224,     5,
       4,   233,   234,  1460,   257,   194,  1463,   224,     5,  1677,
       5,   247,     4,    91,     4,  1472,  1473,     4,     6,  1687,
       5,    99,   258,     5,  1692,     4,  1483,   105,     4,   270,
       5,     5,     4,   270,     5,     5,  2704,     4,   274,   226,
       6,     5,   274,     4,   233,     4,     4,   283,   126,   285,
       4,   351,     5,     5,   286,     5,     5,     5,     4,   270,
       5,     4,   351,     5,  1837,     5,  1839,     5,  1841,   258,
     257,   149,     4,     4,   306,     5,     4,    12,     5,   157,
       5,     5,     4,     4,   283,     5,     5,  1860,  1861,  1862,
    1863,  1864,  1865,  1866,  1867,  1868,   283,     5,     5,     4,
       4,   351,     5,   339,     5,     5,     5,     4,   297,     4,
     299,  1884,     5,  1886,  2206,  2207,   194,  2209,  2210,     5,
       5,  2213,  2214,     5,   202,     4,     4,   303,     5,     5,
    1903,  1904,     5,     5,     4,     4,  1909,     5,     4,     4,
       4,     4,  2729,     5,     5,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,     5,     5,  1930,  1931,  1932,
    1933,  1934,  1935,  1936,  1937,  1938,  1939,  1940,  1941,   247,
    1943,     5,  1945,  1946,  1947,     4,  2602,     4,   351,     5,
     258,     4,   414,  2275,     4,     4,  1959,  1960,     5,     5,
       4,     4,     4,   425,     4,     4,   274,     5,    53,     5,
       4,     4,   434,     5,     5,     5,     5,     5,     5,     5,
       4,     4,   351,     5,     5,     5,    71,     4,     4,  1992,
       5,  1994,     5,  1996,     5,  1998,     5,  2000,  2001,     4,
    2003,     4,     4,    88,     5,     5,     5,  2010,  2011,     5,
       4,     6,     5,     4,  2017,   100,  2019,     4,  2674,     4,
    2023,     4,     4,  2026,     4,     4,     4,     4,     4,     4,
       4,     4,     4,   118,   351,   351,   351,   122,     4,     4,
     502,   503,     4,   422,     5,     5,     4,  2611,     5,   134,
       4,   283,     5,   515,     4,   351,     5,     5,   520,     5,
       4,  1321,  1322,  1323,     4,     4,     4,   529,  2071,     4,
       4,  1331,  1332,  1333,     4,     4,     4,     4,  1338,  1339,
    1340,     5,     4,  1343,  1344,     5,  1346,  1347,   173,     5,
       5,     4,     4,   288,     5,     5,     5,     5,     4,   378,
       5,  2423,     4,     4,     4,  2427,     5,     4,     4,     4,
    2500,     5,     5,     4,     4,     4,  1376,  1377,     4,     4,
    1380,  1381,     5,     4,  2169,     5,     5,     4,     4,     4,
       4,  2029,     5,     5,     5,     5,   598,   599,   600,   601,
       5,  2463,     5,     4,     4,  2232,     5,     5,     5,  2600,
    2674,  2670,   347,    -1,    -1,   729,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1853,    -1,    -1,    -1,
    2068,    -1,  2175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2186,  2187,  2188,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,    -1,    -1,   658,    -1,    -1,  2202,
       6,    -1,  1889,  2206,  2207,    -1,  2209,  2210,  2684,  2685,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,    -1,  2222,
    2223,  2224,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2238,  2239,  2240,  2241,    -1,
    2243,  2244,  2245,  2246,  2247,  2248,    -1,  2250,    -1,    -1,
    2253,  2254,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2272,
      -1,    -1,  2275,  2276,    -1,    -1,    -1,  2280,    -1,    -1,
      -1,  2284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,   497,    -1,    -1,    -1,    -1,    -1,    -1,   504,
      -1,    -1,   507,    -1,    -1,    -1,    -1,   512,    -1,    -1,
      -1,   516,    -1,    -1,    44,    -1,    -1,  2330,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   815,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,   827,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    94,    95,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,   581,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2402,
      -1,    -1,   864,  2406,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2416,  2417,    -1,    -1,    -1,    -1,  2422,
    2423,   141,    -1,  2426,  2427,    -1,    -1,    -1,    -1,  2432,
      -1,    -1,  2435,  2436,    -1,   155,   156,    -1,    -1,    -1,
      -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2454,  2455,    -1,  2457,  2458,  2459,  2460,  2461,    -1,
    2463,  2464,   182,    -1,    -1,  2468,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1734,   937,    -1,  2480,    -1,    -1,
      -1,    -1,  2485,    -1,    -1,    -1,    -1,  1747,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   690,    -1,  1757,  2501,    -1,
     220,    -1,   697,    -1,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2543,    -1,    -1,    -1,    -1,  2548,    -1,  2550,    -1,    -1,
    1012,   271,    -1,  2556,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   281,    -1,    -1,    -1,    -1,  2569,    -1,    -1,  1829,
      -1,  2258,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2587,    -1,    -1,    -1,  2591,  2634,
     310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1064,    -1,    -1,    -1,    -1,    -1,  2611,    -1,
      -1,    -1,  1074,    -1,    -1,    -1,    -1,    -1,    -1,   814,
      -1,    -1,    -1,    -1,    -1,    -1,   821,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2638,    -1,    -1,    -1,    -1,
    2643,    -1,  2645,    -1,    -1,    -1,    -1,    -1,    -1,  2652,
      -1,    -1,    -1,    -1,  2657,    -1,    -1,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   866,   867,    -1,    -1,    -1,   871,    -1,    -1,   874,
      -1,  2684,  2685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   886,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2708,    -1,    -1,  2711,    -1,
      -1,  2714,    -1,    -1,  1176,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2725,  2726,  2727,  2728,    -1,    -1,    -1,    -1,
      -1,  1193,    -1,    -1,  2737,    -1,    -1,  2740,    -1,    -1,
      -1,    -1,    -1,   959,  2747,    -1,  2749,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1217,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2450,    -1,  1227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     156,    -1,    -1,  2470,  1246,   161,    -1,  2474,    -1,    -1,
      -1,    -1,   987,    -1,  1256,    -1,    -1,    -1,    -1,  1261,
      -1,  2699,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2081,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2731,    -1,    -1,  2734,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2121,  2122,  2123,  2124,  2125,    -1,  2127,  2128,    -1,
      -1,    -1,  2132,  2133,  2134,  2135,  2136,  2022,  2138,  2139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2038,  2039,  2040,    -1,    -1,  2043,    -1,
    2045,  2046,    -1,    -1,  2049,  2050,  2051,    -1,    -1,  2054,
    2055,    -1,    -1,  2058,    -1,  2060,  2061,    -1,  2063,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1394,    -1,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,  1424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1181,    -1,    -1,    -1,
      -1,  1453,    -1,    -1,  1456,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1466,  1467,    -1,    -1,    -1,    -1,
      -1,    -1,  1474,    -1,    -1,    -1,  1211,    -1,    -1,  1481,
      -1,  1216,    -1,    -1,    -1,    -1,  2171,    -1,    -1,  2174,
      -1,  1226,    -1,  2720,  2179,    -1,    -1,  2182,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2201,    -1,    -1,  1521,
      -1,    -1,  1524,  1525,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1533,    -1,  2333,    -1,    -1,  2336,  2337,  2338,  2339,
    2340,    -1,  2342,  2343,    -1,  2345,  2346,  2347,  2348,  2349,
      -1,  2351,  2352,    -1,  2354,  2355,  2356,  2357,  2358,    -1,
    2360,  2361,    -1,  2363,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2373,  2374,    -1,    -1,    -1,    -1,    -1,
      -1,  1337,    -1,    -1,  2384,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1349,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2288,    -1,    -1,    -1,  1609,    -1,    -1,
      -1,  1367,  1368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1627,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2319,    -1,    -1,    -1,    -1,    -1,
      -1,  1643,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1658,    -1,  1660,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1670,    -1,
      -1,  1673,    -1,  1675,  1676,  1677,  1678,    -1,    -1,  1681,
      -1,    -1,  1684,    -1,    -1,  1687,  1688,    -1,  1690,  1691,
    1692,  1693,    -1,  1695,  1696,    -1,    -1,    -1,    -1,  1701,
    1702,  1703,    -1,    -1,  1706,  1707,    -1,    -1,    -1,    -1,
    1712,  1713,  2512,  2398,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2521,    -1,    -1,    -1,    -1,    -1,  1462,    -1,    -1,
    2530,    -1,  2532,  2418,    -1,    -1,  2536,    -1,    -1,    -1,
    2425,    -1,    -1,  2428,  2429,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    22,    -1,    -1,  1522,    -1,    27,
      -1,    -1,    -1,  1528,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    51,    52,    -1,    56,    -1,    -1,     3,
       4,    -1,    -1,  2623,    62,  2625,    -1,  2627,    -1,    -1,
    2630,    -1,  2632,    -1,  1836,    19,    74,    75,  1840,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,
    1852,    -1,    -1,  1855,    -1,    -1,    -1,    -1,    -1,  2544,
      -1,   101,    -1,    -1,   102,    -1,    -1,    -1,    -1,    -1,
    1605,   109,   110,    -1,    -1,   113,  1611,    -1,  2563,   119,
      -1,    -1,    -1,  1885,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1636,    -1,    -1,    -1,    -1,    -1,  1642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,  1671,    -1,    -1,  1941,
      -1,    -1,    -1,    -1,  1679,    -1,    -1,    -1,    -1,    -1,
      -1,  2636,  2637,   193,  2639,    -1,  2641,  2642,    -1,  2644,
      -1,   201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   209,
     210,    -1,   156,    -1,    -1,   215,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,  1753,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1761,  1762,    -1,    -1,  2694,
     248,    -1,  2014,    -1,    -1,    -1,    -1,    -1,    -1,   257,
    1776,  1777,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1787,  1788,    -1,    -1,    -1,   220,    -1,    -1,    -1,
      -1,    -1,  1798,  1799,    -1,    -1,   284,   285,    -1,    -1,
      -1,    -1,  1808,  1809,   294,  2057,  2741,    -1,  1814,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,  1824,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    -1,  1834,
      -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,   348,   349,
      -1,    -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1856,    -1,    -1,    -1,    -1,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,    -1,  1890,  1891,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,  2173,  1907,  1908,  2176,    -1,    -1,  1912,  1913,    -1,
      -1,    -1,  2184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2200,    -1,
      -1,  2203,    -1,    -1,    -1,    -1,  2208,    -1,    -1,  2211,
    2212,    -1,    -1,    -1,    -1,    -1,    -1,  1952,    -1,    60,
    1955,  1956,    -1,    -1,    -1,    66,    -1,    -1,  1963,    -1,
      -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,  1997,    -1,   105,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,    -1,    -1,    -1,  2013,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2300,    -1,
      -1,  2036,    -1,    -1,    -1,    -1,  2041,    -1,   149,    -1,
      -1,    -1,  2047,    -1,    -1,    -1,    -1,  2052,    -1,    -1,
      -1,  2056,    -1,   164,  2059,    -1,  2082,  2062,    -1,  2064,
      -1,    -1,   173,   174,    -1,    -1,  2092,    -1,    -1,    -1,
    2096,  2097,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2105,
    2106,    -1,    -1,   194,    -1,    -1,    -1,    -1,  2114,  2115,
      -1,    -1,    -1,    -1,  2120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2130,  2131,   217,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2141,  2142,    -1,    -1,    -1,
     231,    -1,   233,    -1,    -1,  2397,  2152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2161,   247,  2163,    -1,    -1,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   258,    -1,    -1,
      -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,  2430,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2441,
      -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   296,   297,    -1,   299,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2489,    -1,    -1,
      -1,  2493,    -1,    -1,    19,    -1,    -1,    -1,   339,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2249,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2546,  2547,    -1,  2549,    -1,    -1,
      19,    -1,  2554,  2555,    -1,    -1,    -1,  2559,    -1,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,  2334,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,  2344,    -1,
    2592,    -1,    -1,    -1,    -1,    -1,    -1,  2353,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    -1,  2362,    -1,    -1,    -1,
      -1,    23,    -1,  2369,  2616,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2380,    -1,    -1,    -1,    -1,    -1,
    2386,   156,   101,  2389,    -1,    -1,  2392,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2395,   101,    -1,    -1,    -1,    -1,  2401,    -1,    -1,    -1,
    2405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2421,   156,    -1,    -1,
     215,    -1,    -1,    -1,    -1,   220,    -1,  2699,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2716,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2731,
      -1,    -1,  2734,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,    -1,    -1,
      -1,   220,    -1,  2509,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2518,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2527,    -1,    -1,    -1,    -1,    -1,  2533,    -1,    -1,
     220,  2537,    -1,    -1,  2540,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2574,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    19,    -1,    -1,    -1,
      -1,  2666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2687,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    65,    66,    -1,    77,    69,    79,    -1,    18,
      19,    -1,    84,    -1,    86,    87,    88,    -1,    -1,    -1,
      -1,    93,    -1,    95,    -1,    -1,    -1,  2732,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2752,    -1,    58,
    2755,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   151,
     152,    -1,    -1,   155,    -1,    -1,    -1,   159,    -1,   161,
      -1,    -1,   101,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   168,   115,    -1,    -1,    -1,
     182,   183,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   185,    -1,   196,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   213,   214,    -1,   207,    -1,    -1,   156,    -1,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   245,    -1,   247,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   271,    -1,
      -1,   220,    -1,    -1,   286,   287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,    -1,    -1,    -1,   308,    -1,   310,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   347,   339,    -1,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    19,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    19,    -1,    -1,
      -1,    82,    83,    -1,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,   109,   110,
      -1,    -1,   113,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    19,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,   194,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   224,    -1,   226,    -1,    -1,    -1,    -1,
      -1,   232,   233,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   215,   247,   248,    -1,    -1,
     220,    -1,    -1,    -1,    -1,    -1,   257,   258,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,   215,    -1,    -1,    -1,    -1,   220,   101,
      -1,    -1,   283,    -1,   285,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   297,    -1,   299,    -1,
      -1,    -1,    -1,    -1,   305,    -1,   161,    -1,    -1,   279,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     220,    -1,    -1,    -1,   156,    -1,    -1,    -1,   339,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,   287,   220,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,    -1,    -1,
      -1,    -1,    -1,    -1,   156,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,    -1,    -1,    -1,    -1,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,    -1,    -1,   220,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    95,    96,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
      -1,    -1,   141,    -1,    -1,   144,    -1,    -1,    -1,   148,
     149,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,   177,   178,
     179,    -1,    -1,   182,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   196,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   213,   214,   215,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,    -1,
     229,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,
      -1,   240,    -1,    -1,   243,    -1,   245,    -1,   247,    -1,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   298,
      -1,   300,    -1,    -1,    -1,    -1,    -1,   306,    -1,    -1,
     309,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,   347
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
     149,   185,   253,   288,   304,   381,     4,   124,   205,   559,
     291,   354,   561,    16,    23,   241,   243,   365,   562,   230,
     566,   291,   354,   567,     0,     5,   140,    59,   354,   387,
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
     370,   364,   370,   354,   364,     4,   443,     4,   366,   441,
     195,     4,   165,   310,   442,   195,   364,     4,   131,   291,
     445,     5,     5,     4,   195,   354,     4,     5,    60,    66,
     114,   129,   143,   149,   154,   207,   226,   231,   233,   257,
     258,   265,   283,   339,   500,   366,   187,   187,    66,   452,
      66,   453,    66,   454,   224,   455,   354,     5,   225,   457,
     365,   370,     5,   364,   364,   364,   364,     4,   356,     4,
       4,   195,   354,    14,    15,    61,   189,   190,   262,   272,
     273,   303,    87,     5,     5,    14,    15,    61,   189,   190,
     262,   272,   273,   277,   303,    87,   156,   161,   365,   477,
     482,    87,   156,     5,   475,     4,     4,    14,    61,   189,
     262,   272,   303,     5,     5,     4,   354,   365,    20,    21,
      22,    48,    49,    52,    55,    62,    66,    74,    75,    82,
      83,    99,   105,   109,   110,   113,   129,   149,   171,   194,
     224,   226,   232,   233,   247,   248,   257,   258,   283,   285,
     297,   299,   305,   339,    66,    80,    89,    99,   129,   149,
     194,   233,   258,   297,   299,     4,    30,   160,   212,   238,
     494,     5,    63,   104,   235,   250,   251,   341,   342,   499,
      99,   492,    17,    40,   111,   193,   498,     4,     5,    17,
     211,   292,   354,   258,   499,   507,   124,   499,   508,    36,
      40,   111,   132,   193,   291,   354,   509,   364,   356,    91,
      99,   105,   126,   149,   157,   194,   202,   247,   258,   274,
     512,    40,   111,   193,     5,   284,    17,   211,   292,   516,
     285,   356,   517,     5,    99,   105,   300,    17,    17,     4,
     354,   354,   354,   354,   354,   354,   370,   354,   354,   363,
     354,     4,   370,     4,    40,   111,   193,   263,   535,    40,
     111,   193,   263,   536,     4,    97,     5,     5,    87,     4,
       5,     5,    87,     5,   546,    61,   120,   156,   272,   550,
      61,   120,   272,   554,    87,   156,    61,   120,   272,   548,
       4,    61,   120,   272,   547,     5,     5,     4,     4,     5,
       5,     5,   354,   354,   354,     4,   354,   560,   354,   354,
       6,   365,     4,     5,     4,     4,     5,     4,    97,   260,
     371,   354,   354,    12,     5,    12,   354,   354,    12,     4,
      12,     4,     4,   354,   354,   354,     4,   356,     4,     4,
     370,   364,   370,   354,   354,   354,   364,   354,   363,   354,
     354,     5,     5,   354,   366,   354,   364,   354,   370,   370,
     371,   371,   371,   370,   363,   354,   370,   354,   133,   246,
     357,   444,   165,     5,     4,   370,   156,   156,     4,     5,
       4,     4,   354,   439,   354,    20,    21,    22,    48,    49,
      52,    59,    62,    66,    74,    75,    82,   109,   110,   113,
     129,   149,   171,   180,   224,   226,   232,   233,   248,   258,
     283,   285,   295,   305,   339,    66,   129,   154,   233,   283,
      30,   160,   212,   238,   501,   354,   207,   354,   502,    17,
     354,   257,   512,   257,   207,   354,   503,   285,   504,    17,
      98,   354,   354,     5,   371,    56,   364,     4,     5,   468,
     354,     5,     5,     5,   156,   183,   375,   375,   164,   264,
     373,     4,     4,     5,     5,   472,   270,   270,     5,     5,
       5,    17,   158,   374,   374,   373,     4,     4,   373,     5,
       5,   476,   161,   338,   365,   480,     5,   479,     5,     5,
     483,     5,   484,     5,    14,    15,    61,   189,   190,   262,
     272,   273,   277,   303,     4,     4,     5,     5,   375,   373,
       4,     5,     5,   370,    82,   151,   222,   223,   237,   278,
     378,     7,     8,   354,   359,   238,   121,   238,   238,   105,
      40,    66,    99,   105,   111,   129,   149,   164,   194,   233,
     247,   258,   285,   297,   299,   300,   339,   493,   121,   238,
       5,    27,   166,   238,   281,   138,   105,    22,    49,    52,
      82,   110,   113,   226,   257,    22,    49,    52,    55,    82,
     110,   113,   226,   257,   283,    40,   121,   238,   238,   105,
       5,   211,    27,   224,    36,   132,   291,   354,   261,   268,
     121,   243,   364,   512,    40,   130,   224,   281,   243,   211,
       5,     5,   247,    27,   224,     4,     5,     5,   211,    36,
     132,   291,   354,   512,   211,   356,     4,     4,   354,     5,
     303,    22,    27,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   102,   109,   110,   113,   171,   226,   232,   248,
     257,   284,   285,   305,   350,   495,   354,   354,   354,   354,
     354,   499,   364,     5,     4,     5,   354,   354,   364,   354,
     356,   354,   354,   499,     5,   354,   354,   356,     5,    17,
       5,     5,   354,   354,   363,   354,   354,     4,   354,   354,
     111,   354,   354,   111,     4,    42,    43,   169,   170,   197,
     380,   380,    61,   120,   272,   544,   380,     5,    61,   120,
     272,   549,     5,     5,    61,   120,   272,   551,     4,     5,
       5,     4,    61,   120,   272,   553,    61,   120,   272,   552,
       5,     5,     4,     5,     5,     4,   380,   380,   380,   354,
     354,   354,     4,   364,   354,   365,   370,     5,     5,    12,
     354,   364,   366,   354,    12,   354,   354,   354,    59,   354,
       6,     4,   354,   354,    46,   271,   407,     5,   356,   356,
     370,   354,     4,     4,     4,   370,   364,   354,   354,   354,
     354,   370,   364,   371,   363,   354,     4,   371,   354,    38,
      38,     4,   366,     5,    24,    25,    97,   372,     4,   364,
     354,   354,     4,   354,     5,    82,   151,   222,   223,   237,
     278,   364,   366,   238,   121,   238,   238,    21,   238,   364,
     121,   238,    27,   166,   238,   281,   138,    21,   238,   121,
     238,   238,    21,   238,    27,   167,   224,   167,   261,   268,
     121,   167,   224,   289,   512,   130,   167,   224,   281,     4,
     247,    27,   167,   224,   512,   207,   354,   354,   354,   354,
     354,   354,   195,   354,   354,    20,   234,   460,     4,     4,
     354,   375,   375,   375,     4,   375,   375,   375,    14,    15,
      61,   189,   190,   262,   272,   273,   303,   374,   375,   375,
     375,   375,   375,     4,   375,   375,     4,   374,    14,    15,
      61,   189,   190,   262,   272,   273,   303,     5,   478,     5,
     481,     5,     5,    14,    15,    61,   189,   190,   262,   272,
     273,   277,   303,     5,    14,    15,    61,   189,   190,   262,
     272,   273,   277,   303,     5,    14,    15,    61,   189,   190,
     262,   272,   273,   277,   303,    14,    15,    61,   189,   190,
     262,   272,   273,   303,   270,     5,     5,     5,   374,   374,
     373,     4,     4,   373,     5,     4,     4,   375,   375,     4,
     375,   375,     5,   356,   364,   366,     5,   354,   356,   354,
       5,   354,     5,   359,   105,   194,   247,   105,   194,   247,
       5,   356,   354,   356,     5,   354,   364,   356,     5,   359,
     238,   238,    21,   238,    21,   238,   238,    21,   238,   307,
     307,     4,     4,     4,   493,     4,     4,     4,   307,   307,
       4,     5,     4,   356,   354,     5,   354,     5,   359,   356,
     364,   364,   354,    27,    48,    51,    62,    85,   102,   350,
     376,     4,   356,   354,   370,   356,     5,   364,   364,   354,
     356,   356,   364,   364,   354,   356,   354,     5,   354,   224,
     224,   354,   354,   224,   354,   224,   354,   354,   505,   513,
     354,   224,   224,   354,   354,   354,   354,   354,   354,   354,
     354,     5,   303,   354,   496,   354,   354,   224,   354,   354,
     354,   354,   364,   370,     5,   364,   364,   354,   354,   370,
     354,   354,   354,   364,   354,   354,     5,     4,   354,   354,
     354,   354,     5,     5,     4,   380,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   354,   354,   354,   354,   370,   354,   364,   366,   354,
     370,   354,   354,   354,   354,   354,     5,   354,     4,     6,
     354,   354,     4,   364,   354,   370,   176,   368,   354,   368,
     371,   370,   364,   354,   354,     4,   354,   364,   364,   354,
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
     354,   371,   372,   354,     5,   354,   366,     5,     5,     5,
       5,     5,   370,   372,   372,   372,   370,   372,   371,   372,
     372,   370,   372,   372,   372,   370,   372,   372,   370,   364,
     372,   370,   372,   372,   370,   372,   370,     4,   366,     5,
     354,     4,   375,   374,     4,   374,     5,     5,     5,   374,
     374,   373,     4,     4,     5,     5,     5,     5,   374,   374,
     373,     4,     4,     5,     5,     5,     5,   374,   374,   373,
       4,     4,     5,   374,   375,   375,   375,   375,   375,     4,
     375,   375,     4,   374,   374,   375,   375,   375,   375,   375,
       4,   375,   375,     4,   374,   374,     4,     4,   374,     4,
     374,   374,     4,     4,     4,   365,   372,     4,   364,   372,
     354,   364,     4,   372,   372,   364,     4,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   364,   372,
     354,   364,     4,   363,   363,   364,   363,   363,   364,   364,
     363,   363,   354,   354,   354,   354,   354,   354,   359,   354,
     354,   354,   351,   351,   351,   351,   351,   351,   351,   511,
     351,   359,   354,   354,   354,   354,   359,   354,   354,   354,
     354,   354,   354,   370,   354,   303,   358,   359,   354,   354,
     371,   356,     4,     4,   371,     4,   354,   363,   354,    59,
     354,     5,     5,   354,     4,   368,   372,     5,     4,     5,
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
       6,   354,    32,   280,   414,   364,     5,    32,   280,   379,
     364,   414,   354,   374,   375,   374,   375,   374,   375,   375,
     374,   375,   374,   374,   354,   372,   364,   364,   354,   364,
     354,   364,   364,   354,   364,   372,     4,   513,   513,   358,
     354,   513,     4,   513,   370,     5,     4,     4,   513,   513,
     358,   354,     4,   513,   513,   354,   364,   513,   513,   513,
     514,   520,   521,   512,   518,   519,     4,     5,     5,     6,
       4,   186,   301,   346,   354,   405,     4,   364,     4,   375,
     375,   375,   375,   375,   365,   372,   372,   354,   372,     4,
     372,   372,   354,   372,   354,   513,   513,     4,   354,   513,
       5,   354,   513,     4,   354,   513,   370,   520,   522,   523,
     351,   519,     5,     5,     4,   354,   406,   354,   406,   370,
     372,     4,   364,   366,     4,   359,   358,   354,   354,   358,
     354,   364,   523,   356,     5,     5,   354,   354,   354,   354,
     379,     5,   364,   366,   370,   364,   366,   513,   354,     4,
     513,   354,   372,     5,     5,   354,     5,   354,   370,   370,
       4,   513,     4,     5,     5,     5,   358,   358,   513,   513,
     513
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
#line 459 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 460 "frame/parser.Y"
    {fr->bgColorCmd("gray");;}
    break;

  case 7:
#line 462 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 463 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 465 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 472 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 477 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 478 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 480 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 487 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 491 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 39:
#line 494 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 44:
#line 499 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 46:
#line 501 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 48:
#line 503 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 50:
#line 505 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 55:
#line 512 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 56:
#line 513 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 57:
#line 516 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 58:
#line 517 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 59:
#line 518 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 519 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 520 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 521 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 522 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 523 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 524 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 525 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 526 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 527 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 530 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 532 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 533 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 534 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 535 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 537 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 538 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 539 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 540 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 543 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 544 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 545 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 546 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 547 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 550 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 551 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 554 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 555 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 87:
#line 556 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 559 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 562 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 565 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 569 "frame/parser.Y"
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
#line 581 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 588 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 595 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 606 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 629 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 630 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 631 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 632 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 633 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 634 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 635 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 636 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 639 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 640 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 643 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 131:
#line 644 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 132:
#line 645 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 133:
#line 646 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 134:
#line 647 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 135:
#line 648 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 136:
#line 651 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 137:
#line 652 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 138:
#line 653 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 139:
#line 654 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 140:
#line 655 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 141:
#line 656 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 142:
#line 657 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 143:
#line 658 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 144:
#line 661 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 145:
#line 662 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 146:
#line 663 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 147:
#line 664 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 148:
#line 665 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 149:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 150:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 151:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 152:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 153:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 154:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 155:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 156:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 157:
#line 678 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 158:
#line 679 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 159:
#line 680 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 160:
#line 683 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 161:
#line 684 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 162:
#line 685 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 163:
#line 686 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 164:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 165:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 166:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 167:
#line 694 "frame/parser.Y"
    {;}
    break;

  case 168:
#line 695 "frame/parser.Y"
    {;}
    break;

  case 169:
#line 696 "frame/parser.Y"
    {;}
    break;

  case 170:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 171:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 172:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 173:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 174:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 175:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 176:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 177:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 178:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 179:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 180:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 181:
#line 714 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 182:
#line 715 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 183:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 184:
#line 719 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 185:
#line 720 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 186:
#line 721 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 187:
#line 722 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 188:
#line 723 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 189:
#line 726 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 190:
#line 727 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 191:
#line 728 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 192:
#line 731 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 193:
#line 732 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 194:
#line 733 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 195:
#line 734 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 196:
#line 735 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 197:
#line 736 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 202:
#line 743 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 203:
#line 744 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 204:
#line 745 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 205:
#line 747 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 206:
#line 750 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 751 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 754 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 755 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 758 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 211:
#line 759 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 212:
#line 762 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 213:
#line 764 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 215:
#line 768 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 216:
#line 769 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 219:
#line 772 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 221:
#line 774 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 222:
#line 777 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 223:
#line 778 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 224:
#line 781 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 225:
#line 782 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 226:
#line 784 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 227:
#line 786 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 228:
#line 787 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 229:
#line 788 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 230:
#line 790 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 231:
#line 792 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 232:
#line 795 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 233:
#line 796 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 234:
#line 799 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 235:
#line 801 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 236:
#line 804 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 237:
#line 806 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 238:
#line 809 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 239:
#line 813 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 240:
#line 814 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 242:
#line 818 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 243:
#line 819 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 244:
#line 820 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 248:
#line 826 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 249:
#line 827 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 251:
#line 830 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 252:
#line 835 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 253:
#line 836 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 254:
#line 839 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 255:
#line 840 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 256:
#line 841 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 257:
#line 842 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 258:
#line 843 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 259:
#line 846 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 260:
#line 847 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 261:
#line 848 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 262:
#line 851 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 263:
#line 853 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 264:
#line 858 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 265:
#line 863 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 266:
#line 870 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 267:
#line 872 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 268:
#line 873 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 270:
#line 875 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 271:
#line 879 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 272:
#line 881 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 273:
#line 883 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 274:
#line 884 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 280:
#line 895 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 281:
#line 897 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 282:
#line 899 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 283:
#line 904 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 284:
#line 908 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 285:
#line 911 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 286:
#line 912 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 287:
#line 915 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 288:
#line 916 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 289:
#line 918 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 290:
#line 924 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 291:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 292:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 293:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 294:
#line 930 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 295:
#line 931 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 296:
#line 934 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 939 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 943 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 301:
#line 945 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 302:
#line 948 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 303:
#line 950 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 304:
#line 953 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 306:
#line 955 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 307:
#line 956 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 308:
#line 957 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 309:
#line 960 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 310:
#line 962 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 963 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 312:
#line 964 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 965 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 314:
#line 969 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 315:
#line 971 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 316:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 317:
#line 973 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 976 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 319:
#line 978 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 320:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 321:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 322:
#line 985 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 323:
#line 988 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 324:
#line 989 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 325:
#line 990 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 326:
#line 993 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 327:
#line 996 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 341:
#line 1010 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 344:
#line 1013 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 345:
#line 1015 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 348:
#line 1018 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 349:
#line 1019 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 352:
#line 1022 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 353:
#line 1023 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 355:
#line 1026 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 357:
#line 1028 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 359:
#line 1030 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 361:
#line 1032 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 362:
#line 1034 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 363:
#line 1036 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 365:
#line 1038 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 366:
#line 1041 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 367:
#line 1042 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 368:
#line 1043 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 369:
#line 1044 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 370:
#line 1045 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 371:
#line 1046 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 373:
#line 1048 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 374:
#line 1051 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 375:
#line 1052 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 376:
#line 1053 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 377:
#line 1056 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 378:
#line 1059 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 379:
#line 1061 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 380:
#line 1063 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 381:
#line 1064 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 382:
#line 1065 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 384:
#line 1067 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 386:
#line 1070 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 387:
#line 1076 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 388:
#line 1077 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 389:
#line 1080 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 390:
#line 1081 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 391:
#line 1082 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 392:
#line 1085 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 393:
#line 1086 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 395:
#line 1092 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 397:
#line 1096 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 398:
#line 1099 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 400:
#line 1101 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 401:
#line 1105 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 402:
#line 1109 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 404:
#line 1111 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 405:
#line 1112 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 406:
#line 1113 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 407:
#line 1114 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 408:
#line 1115 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 410:
#line 1117 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 411:
#line 1118 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 412:
#line 1121 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 413:
#line 1122 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 414:
#line 1123 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 415:
#line 1126 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 416:
#line 1127 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 417:
#line 1131 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 418:
#line 1133 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 419:
#line 1141 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 420:
#line 1143 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 421:
#line 1145 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1148 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 423:
#line 1150 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 424:
#line 1151 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 425:
#line 1154 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 426:
#line 1157 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 427:
#line 1159 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 428:
#line 1163 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 429:
#line 1165 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 430:
#line 1168 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 431:
#line 1172 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 432:
#line 1173 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 433:
#line 1175 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 434:
#line 1178 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 435:
#line 1179 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 437:
#line 1183 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 438:
#line 1184 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1185 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 440:
#line 1188 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 441:
#line 1190 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 442:
#line 1191 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 444:
#line 1193 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 448:
#line 1197 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 449:
#line 1198 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 450:
#line 1199 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 451:
#line 1201 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 453:
#line 1203 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 454:
#line 1206 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 455:
#line 1208 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 456:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 457:
#line 1211 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 458:
#line 1212 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 459:
#line 1213 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 460:
#line 1216 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 461:
#line 1217 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1221 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 463:
#line 1223 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 464:
#line 1226 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 465:
#line 1229 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 466:
#line 1230 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1232 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 468:
#line 1234 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 469:
#line 1236 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 470:
#line 1239 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 471:
#line 1240 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 472:
#line 1241 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 473:
#line 1244 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 474:
#line 1245 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 475:
#line 1246 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 476:
#line 1247 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 477:
#line 1248 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 478:
#line 1249 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 479:
#line 1252 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 480:
#line 1255 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 481:
#line 1256 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 482:
#line 1257 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 483:
#line 1260 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 484:
#line 1261 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 485:
#line 1262 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 486:
#line 1263 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 487:
#line 1264 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 488:
#line 1265 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 493:
#line 1272 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 494:
#line 1273 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 495:
#line 1274 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 496:
#line 1277 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 497:
#line 1278 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 498:
#line 1281 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 499:
#line 1282 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 500:
#line 1285 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 501:
#line 1286 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 502:
#line 1289 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 503:
#line 1290 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 504:
#line 1293 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 506:
#line 1295 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 507:
#line 1298 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 508:
#line 1299 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 510:
#line 1303 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 511:
#line 1307 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 512:
#line 1310 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 513:
#line 1317 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 514:
#line 1318 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 515:
#line 1321 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 518:
#line 1324 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 519:
#line 1325 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 520:
#line 1326 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 521:
#line 1327 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 523:
#line 1329 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 524:
#line 1330 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 525:
#line 1331 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 527:
#line 1333 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 528:
#line 1334 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 529:
#line 1335 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 530:
#line 1336 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 532:
#line 1340 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 533:
#line 1343 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 534:
#line 1344 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 535:
#line 1347 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 536:
#line 1348 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 537:
#line 1349 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 538:
#line 1350 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 539:
#line 1353 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 540:
#line 1354 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 541:
#line 1355 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 542:
#line 1356 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 543:
#line 1359 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 544:
#line 1360 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 545:
#line 1361 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1362 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 547:
#line 1363 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 548:
#line 1364 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1367 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 550:
#line 1368 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 551:
#line 1369 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 554:
#line 1373 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 555:
#line 1374 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 556:
#line 1377 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 557:
#line 1380 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 558:
#line 1381 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 559:
#line 1385 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 560:
#line 1387 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1388 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 568:
#line 1400 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1402 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 570:
#line 1404 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1405 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 572:
#line 1407 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 573:
#line 1409 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 574:
#line 1411 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1413 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1415 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 582:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 583:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 584:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 586:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1431 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 588:
#line 1435 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1437 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1439 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1441 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1443 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 593:
#line 1445 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1447 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 595:
#line 1449 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 596:
#line 1452 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1454 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 598:
#line 1456 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 604:
#line 1464 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1465 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1466 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1467 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1468 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 609:
#line 1469 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1471 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 611:
#line 1473 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 612:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1475 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1476 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 615:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 621:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 629:
#line 1499 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1502 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1505 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 635:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1528 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1531 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1534 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1537 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1540 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 645:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 646:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1563 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1566 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1569 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 655:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 659:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 660:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1598 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 662:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 663:
#line 1602 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 664:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 665:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 668:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1624 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 673:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 674:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 675:
#line 1639 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1642 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 677:
#line 1645 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 678:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1652 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1653 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 683:
#line 1654 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1656 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 685:
#line 1658 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 686:
#line 1659 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1660 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1661 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 689:
#line 1664 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1665 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1666 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1667 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1668 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1670 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 695:
#line 1671 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1672 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1673 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 698:
#line 1677 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 699:
#line 1679 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1680 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 701:
#line 1682 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 702:
#line 1684 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1686 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 704:
#line 1689 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 705:
#line 1690 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 706:
#line 1693 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 707:
#line 1694 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 708:
#line 1695 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 709:
#line 1698 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 710:
#line 1705 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 711:
#line 1706 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 712:
#line 1707 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 713:
#line 1708 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 714:
#line 1709 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 715:
#line 1710 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 716:
#line 1711 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 717:
#line 1715 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 719:
#line 1723 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 720:
#line 1724 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 721:
#line 1726 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 722:
#line 1728 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 723:
#line 1729 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 724:
#line 1730 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 726:
#line 1731 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 727:
#line 1732 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 728:
#line 1733 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 730:
#line 1735 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 731:
#line 1736 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 732:
#line 1738 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 733:
#line 1740 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 734:
#line 1742 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 735:
#line 1745 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 737:
#line 1748 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 738:
#line 1750 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 739:
#line 1753 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 740:
#line 1756 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1758 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1761 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 743:
#line 1764 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1767 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 745:
#line 1770 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 746:
#line 1774 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 747:
#line 1778 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 748:
#line 1783 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1787 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 750:
#line 1788 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1790 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1791 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 753:
#line 1793 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1795 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 755:
#line 1797 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1799 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1800 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1802 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1804 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 760:
#line 1807 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 761:
#line 1811 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 762:
#line 1815 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1817 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1819 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1821 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1823 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1825 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1827 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1833 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 772:
#line 1835 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 773:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 774:
#line 1839 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1841 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1842 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1844 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1846 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 779:
#line 1847 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1848 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1850 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1852 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 784:
#line 1854 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 785:
#line 1855 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1857 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1858 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1860 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 789:
#line 1864 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1870 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 792:
#line 1874 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 793:
#line 1878 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 794:
#line 1883 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 795:
#line 1887 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 796:
#line 1888 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 797:
#line 1889 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 798:
#line 1891 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 799:
#line 1893 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 800:
#line 1897 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 801:
#line 1898 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1899 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 803:
#line 1901 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 804:
#line 1904 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 805:
#line 1907 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 806:
#line 1910 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 807:
#line 1911 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 808:
#line 1913 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1916 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 810:
#line 1920 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 811:
#line 1922 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1923 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 813:
#line 1925 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 814:
#line 1928 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 815:
#line 1931 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 816:
#line 1932 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1934 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 818:
#line 1935 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 819:
#line 1936 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1938 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 821:
#line 1939 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 822:
#line 1941 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1944 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 824:
#line 1947 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 825:
#line 1949 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 826:
#line 1950 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 830:
#line 1955 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 831:
#line 1956 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 832:
#line 1958 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 833:
#line 1960 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 834:
#line 1962 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1963 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 836:
#line 1965 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 837:
#line 1966 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 840:
#line 1971 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 841:
#line 1972 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1973 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1974 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1975 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 845:
#line 1976 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 849:
#line 1980 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 850:
#line 1982 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 851:
#line 1984 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 852:
#line 1985 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1986 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1987 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 855:
#line 1988 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 856:
#line 1990 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 857:
#line 1991 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 858:
#line 1992 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 859:
#line 1993 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 860:
#line 1994 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 1996 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 862:
#line 1997 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 863:
#line 1998 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 864:
#line 1999 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 865:
#line 2000 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 866:
#line 2001 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 867:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 868:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 869:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 870:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 871:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 872:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 873:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 874:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 875:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 876:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 877:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 878:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 879:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 880:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 881:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 882:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 883:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 884:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 885:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 886:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 887:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 888:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 889:
#line 2028 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 890:
#line 2029 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 891:
#line 2030 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 892:
#line 2031 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 893:
#line 2033 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 894:
#line 2043 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2051 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2060 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2068 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2075 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2082 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2090 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2098 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2103 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2108 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2113 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2118 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2123 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2128 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2133 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2142 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2152 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2162 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2171 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2179 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2189 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2199 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2209 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2221 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2230 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2238 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 921:
#line 2240 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 922:
#line 2242 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 923:
#line 2247 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 924:
#line 2250 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 925:
#line 2254 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 926:
#line 2256 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 927:
#line 2257 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 928:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 929:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 930:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 931:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 932:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 933:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 934:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 936:
#line 2270 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 937:
#line 2271 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 938:
#line 2272 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 939:
#line 2273 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 940:
#line 2274 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 941:
#line 2277 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 942:
#line 2279 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 943:
#line 2281 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 944:
#line 2283 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 945:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 946:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 947:
#line 2289 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 948:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 949:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 950:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 951:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 952:
#line 2297 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 953:
#line 2299 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 954:
#line 2301 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2302 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 956:
#line 2303 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 957:
#line 2305 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2307 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 959:
#line 2310 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2312 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 961:
#line 2314 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2315 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 963:
#line 2316 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2317 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2319 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2321 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2322 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2323 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 970:
#line 2325 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2327 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2328 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2330 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2332 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2334 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2335 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 977:
#line 2337 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2339 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2340 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 980:
#line 2341 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2342 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2344 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2346 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 984:
#line 2349 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2352 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2353 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2354 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2356 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 989:
#line 2359 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2362 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 993:
#line 2365 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2367 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2369 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2371 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2372 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 999:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1000:
#line 2376 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2377 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1002:
#line 2378 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2380 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2382 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2384 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2386 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2388 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1009:
#line 2389 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1010:
#line 2391 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1012:
#line 2394 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1013:
#line 2395 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1015:
#line 2397 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1017:
#line 2401 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1018:
#line 2402 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1019:
#line 2403 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1020:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1021:
#line 2405 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1022:
#line 2406 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1023:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1024:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1025:
#line 2411 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1026:
#line 2414 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1027:
#line 2415 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1028:
#line 2416 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1029:
#line 2417 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1030:
#line 2420 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1031:
#line 2421 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1032:
#line 2424 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1033:
#line 2425 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1034:
#line 2428 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1035:
#line 2429 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1036:
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

  case 1037:
#line 2445 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1038:
#line 2446 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1039:
#line 2450 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1040:
#line 2451 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1041:
#line 2455 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1042:
#line 2460 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1043:
#line 2465 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1044:
#line 2471 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1045:
#line 2473 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1046:
#line 2476 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1047:
#line 2478 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1048:
#line 2481 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1049:
#line 2484 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2485 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1051:
#line 2486 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1052:
#line 2487 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1053:
#line 2488 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1054:
#line 2489 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1055:
#line 2491 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1058:
#line 2498 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1059:
#line 2499 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1060:
#line 2500 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1061:
#line 2501 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1062:
#line 2502 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1063:
#line 2503 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1066:
#line 2508 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1067:
#line 2509 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1068:
#line 2510 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1069:
#line 2511 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1071:
#line 2513 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1072:
#line 2514 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1073:
#line 2515 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1074:
#line 2516 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1075:
#line 2517 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1076:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1079:
#line 2525 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1080:
#line 2526 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1082:
#line 2529 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1083:
#line 2530 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1084:
#line 2531 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1085:
#line 2532 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1086:
#line 2535 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1087:
#line 2536 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1090:
#line 2544 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1096:
#line 2555 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1097:
#line 2558 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1098:
#line 2562 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1099:
#line 2563 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1100:
#line 2564 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1101:
#line 2565 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1102:
#line 2566 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1103:
#line 2567 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1104:
#line 2568 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1105:
#line 2574 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1106:
#line 2575 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1107:
#line 2576 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1108:
#line 2577 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1109:
#line 2581 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1110:
#line 2582 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1111:
#line 2584 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1114:
#line 2591 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1116:
#line 2593 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2596 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2598 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1119:
#line 2603 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1120:
#line 2606 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1121:
#line 2607 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1122:
#line 2608 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1123:
#line 2611 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1124:
#line 2613 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1125:
#line 2617 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1126:
#line 2618 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1127:
#line 2622 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1128:
#line 2623 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1129:
#line 2624 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1130:
#line 2625 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1131:
#line 2631 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1132:
#line 2632 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1133:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1134:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1135:
#line 2640 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1136:
#line 2641 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1139:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1140:
#line 2651 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1141:
#line 2652 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1142:
#line 2653 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1143:
#line 2657 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2659 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1146:
#line 2660 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1147:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1148:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1149:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1150:
#line 2668 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1151:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1152:
#line 2672 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1153:
#line 2673 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1154:
#line 2674 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1155:
#line 2677 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1156:
#line 2678 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1158:
#line 2680 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1159:
#line 2681 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1160:
#line 2684 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1161:
#line 2685 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1162:
#line 2686 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1167:
#line 2693 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1168:
#line 2697 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1169:
#line 2699 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2701 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2706 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1173:
#line 2708 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2710 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2723 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2724 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2725 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1187:
#line 2728 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2729 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2730 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1190:
#line 2733 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2734 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2735 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2738 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2739 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2740 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1198:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2749 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2750 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2759 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2760 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2764 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2765 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2766 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2770 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2772 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1214:
#line 2774 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2778 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1217:
#line 2784 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1218:
#line 2788 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1219:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1220:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1221:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1222:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1223:
#line 2797 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1224:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1225:
#line 2800 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1226:
#line 2802 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1228:
#line 2806 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1229:
#line 2807 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2808 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2811 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1232:
#line 2812 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1233:
#line 2816 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2818 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2823 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1239:
#line 2824 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1240:
#line 2825 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1241:
#line 2828 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2829 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1243:
#line 2830 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1244:
#line 2833 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1245:
#line 2835 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1246:
#line 2840 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1247:
#line 2843 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1248:
#line 2850 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2852 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1250:
#line 2854 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1251:
#line 2859 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1253:
#line 2863 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1254:
#line 2864 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1255:
#line 2865 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1256:
#line 2867 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1257:
#line 2869 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1258:
#line 2874 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10919 "frame/parser.C"
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


#line 2878 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

