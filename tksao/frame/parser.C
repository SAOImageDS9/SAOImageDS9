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
     NOW_ = 458,
     NRRD_ = 459,
     NUMBER_ = 460,
     OBJECT_ = 461,
     OFF_ = 462,
     ON_ = 463,
     ONLY_ = 464,
     OPTION_ = 465,
     ORIENT_ = 466,
     PAN_ = 467,
     PANNER_ = 468,
     PARSER_ = 469,
     PASTE_ = 470,
     PERF_ = 471,
     PHOTO_ = 472,
     PHYSICAL_ = 473,
     PIXEL_ = 474,
     PLOT2D_ = 475,
     PLOT3D_ = 476,
     POINT_ = 477,
     POINTER_ = 478,
     POLYGON_ = 479,
     POSTSCRIPT_ = 480,
     POW_ = 481,
     PRECISION_ = 482,
     PRINT_ = 483,
     PRESERVE_ = 484,
     PROJECTION_ = 485,
     PROPERTY_ = 486,
     PUBLICATION_ = 487,
     PROS_ = 488,
     QUERY_ = 489,
     RADIAL_ = 490,
     RADIUS_ = 491,
     REGION_ = 492,
     REPLACE_ = 493,
     RESAMPLE_ = 494,
     RESET_ = 495,
     RESOLUTION_ = 496,
     RGB_ = 497,
     ROOT_ = 498,
     ROTATE_ = 499,
     RULER_ = 500,
     SAMPLE_ = 501,
     SAOIMAGE_ = 502,
     SAOTNG_ = 503,
     SAVE_ = 504,
     SCALE_ = 505,
     SCAN_ = 506,
     SCIENTIFIC_ = 507,
     SCOPE_ = 508,
     SEGMENT_ = 509,
     SELECT_ = 510,
     SET_ = 511,
     SEXAGESIMAL_ = 512,
     SHAPE_ = 513,
     SHARED_ = 514,
     SHIFT_ = 515,
     SHMID_ = 516,
     SHOW_ = 517,
     SIGMA_ = 518,
     SINH_ = 519,
     SIZE_ = 520,
     SLICE_ = 521,
     SMMAP_ = 522,
     SMOOTH_ = 523,
     SOCKET_ = 524,
     SOCKETGZ_ = 525,
     SOURCE_ = 526,
     SQRT_ = 527,
     SQUARED_ = 528,
     SSHARED_ = 529,
     STATS_ = 530,
     STATUS_ = 531,
     SUM_ = 532,
     SYSTEM_ = 533,
     TABLE_ = 534,
     TAG_ = 535,
     TEMPLATE_ = 536,
     TEXT_ = 537,
     THREADS_ = 538,
     THREED_ = 539,
     THRESHOLD_ = 540,
     THICK_ = 541,
     TRANSPARENCY_ = 542,
     TO_ = 543,
     TOGGLE_ = 544,
     TOPHAT_ = 545,
     TRUE_ = 546,
     TYPE_ = 547,
     UNDO_ = 548,
     UNHIGHLITE_ = 549,
     UNLOAD_ = 550,
     UNSELECT_ = 551,
     UPDATE_ = 552,
     USER_ = 553,
     VALUE_ = 554,
     VAR_ = 555,
     VIEW_ = 556,
     VECTOR_ = 557,
     VERSION_ = 558,
     VERTEX_ = 559,
     VERTICAL_ = 560,
     WARP_ = 561,
     WCS_ = 562,
     WCSA_ = 563,
     WCSB_ = 564,
     WCSC_ = 565,
     WCSD_ = 566,
     WCSE_ = 567,
     WCSF_ = 568,
     WCSG_ = 569,
     WCSH_ = 570,
     WCSI_ = 571,
     WCSJ_ = 572,
     WCSK_ = 573,
     WCSL_ = 574,
     WCSM_ = 575,
     WCSN_ = 576,
     WCSO_ = 577,
     WCSP_ = 578,
     WCSQ_ = 579,
     WCSR_ = 580,
     WCSS_ = 581,
     WCST_ = 582,
     WCSU_ = 583,
     WCSV_ = 584,
     WCSW_ = 585,
     WCSX_ = 586,
     WCSY_ = 587,
     WCSZ_ = 588,
     WCS0_ = 589,
     WFPC2_ = 590,
     WIDTH_ = 591,
     WIN32_ = 592,
     XML_ = 593,
     XY_ = 594,
     YES_ = 595,
     ZMAX_ = 596,
     ZSCALE_ = 597,
     ZOOM_ = 598
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
#define NOW_ 458
#define NRRD_ 459
#define NUMBER_ 460
#define OBJECT_ 461
#define OFF_ 462
#define ON_ 463
#define ONLY_ 464
#define OPTION_ 465
#define ORIENT_ 466
#define PAN_ 467
#define PANNER_ 468
#define PARSER_ 469
#define PASTE_ 470
#define PERF_ 471
#define PHOTO_ 472
#define PHYSICAL_ 473
#define PIXEL_ 474
#define PLOT2D_ 475
#define PLOT3D_ 476
#define POINT_ 477
#define POINTER_ 478
#define POLYGON_ 479
#define POSTSCRIPT_ 480
#define POW_ 481
#define PRECISION_ 482
#define PRINT_ 483
#define PRESERVE_ 484
#define PROJECTION_ 485
#define PROPERTY_ 486
#define PUBLICATION_ 487
#define PROS_ 488
#define QUERY_ 489
#define RADIAL_ 490
#define RADIUS_ 491
#define REGION_ 492
#define REPLACE_ 493
#define RESAMPLE_ 494
#define RESET_ 495
#define RESOLUTION_ 496
#define RGB_ 497
#define ROOT_ 498
#define ROTATE_ 499
#define RULER_ 500
#define SAMPLE_ 501
#define SAOIMAGE_ 502
#define SAOTNG_ 503
#define SAVE_ 504
#define SCALE_ 505
#define SCAN_ 506
#define SCIENTIFIC_ 507
#define SCOPE_ 508
#define SEGMENT_ 509
#define SELECT_ 510
#define SET_ 511
#define SEXAGESIMAL_ 512
#define SHAPE_ 513
#define SHARED_ 514
#define SHIFT_ 515
#define SHMID_ 516
#define SHOW_ 517
#define SIGMA_ 518
#define SINH_ 519
#define SIZE_ 520
#define SLICE_ 521
#define SMMAP_ 522
#define SMOOTH_ 523
#define SOCKET_ 524
#define SOCKETGZ_ 525
#define SOURCE_ 526
#define SQRT_ 527
#define SQUARED_ 528
#define SSHARED_ 529
#define STATS_ 530
#define STATUS_ 531
#define SUM_ 532
#define SYSTEM_ 533
#define TABLE_ 534
#define TAG_ 535
#define TEMPLATE_ 536
#define TEXT_ 537
#define THREADS_ 538
#define THREED_ 539
#define THRESHOLD_ 540
#define THICK_ 541
#define TRANSPARENCY_ 542
#define TO_ 543
#define TOGGLE_ 544
#define TOPHAT_ 545
#define TRUE_ 546
#define TYPE_ 547
#define UNDO_ 548
#define UNHIGHLITE_ 549
#define UNLOAD_ 550
#define UNSELECT_ 551
#define UPDATE_ 552
#define USER_ 553
#define VALUE_ 554
#define VAR_ 555
#define VIEW_ 556
#define VECTOR_ 557
#define VERSION_ 558
#define VERTEX_ 559
#define VERTICAL_ 560
#define WARP_ 561
#define WCS_ 562
#define WCSA_ 563
#define WCSB_ 564
#define WCSC_ 565
#define WCSD_ 566
#define WCSE_ 567
#define WCSF_ 568
#define WCSG_ 569
#define WCSH_ 570
#define WCSI_ 571
#define WCSJ_ 572
#define WCSK_ 573
#define WCSL_ 574
#define WCSM_ 575
#define WCSN_ 576
#define WCSO_ 577
#define WCSP_ 578
#define WCSQ_ 579
#define WCSR_ 580
#define WCSS_ 581
#define WCST_ 582
#define WCSU_ 583
#define WCSV_ 584
#define WCSW_ 585
#define WCSX_ 586
#define WCSY_ 587
#define WCSZ_ 588
#define WCS0_ 589
#define WFPC2_ 590
#define WIDTH_ 591
#define WIN32_ 592
#define XML_ 593
#define XY_ 594
#define YES_ 595
#define ZMAX_ 596
#define ZSCALE_ 597
#define ZOOM_ 598




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
#line 842 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 855 "frame/parser.C"

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
#define YYLAST   5122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1243
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2757

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   598

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
       2,   347,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   345,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   346,   344,
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
     335,   336,   337,   338,   339,   340,   341,   342,   343
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
    1369,  1375,  1381,  1382,  1384,  1386,  1388,  1390,  1392,  1394,
    1396,  1398,  1400,  1402,  1404,  1407,  1409,  1412,  1414,  1417,
    1420,  1423,  1426,  1428,  1430,  1432,  1433,  1435,  1436,  1438,
    1439,  1441,  1442,  1444,  1445,  1448,  1451,  1452,  1454,  1457,
    1459,  1466,  1472,  1474,  1476,  1478,  1481,  1484,  1486,  1488,
    1490,  1492,  1495,  1497,  1499,  1501,  1504,  1506,  1508,  1510,
    1513,  1516,  1519,  1520,  1522,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1537,  1539,  1542,  1545,  1548,  1550,  1553,  1557,
    1559,  1562,  1565,  1570,  1577,  1579,  1590,  1592,  1595,  1599,
    1603,  1606,  1609,  1612,  1615,  1618,  1621,  1624,  1629,  1634,
    1639,  1643,  1647,  1653,  1658,  1663,  1668,  1672,  1676,  1680,
    1684,  1687,  1690,  1695,  1699,  1703,  1707,  1711,  1716,  1721,
    1726,  1731,  1737,  1742,  1749,  1757,  1762,  1767,  1773,  1776,
    1780,  1784,  1788,  1791,  1795,  1799,  1803,  1807,  1812,  1816,
    1822,  1829,  1833,  1837,  1842,  1846,  1850,  1854,  1858,  1862,
    1868,  1872,  1876,  1881,  1885,  1888,  1891,  1893,  1897,  1902,
    1907,  1912,  1917,  1922,  1929,  1934,  1939,  1945,  1950,  1955,
    1960,  1965,  1971,  1976,  1983,  1991,  1996,  2001,  2007,  2013,
    2019,  2025,  2031,  2037,  2045,  2051,  2057,  2064,  2070,  2076,
    2082,  2088,  2095,  2101,  2109,  2118,  2124,  2130,  2137,  2141,
    2145,  2149,  2153,  2157,  2163,  2167,  2171,  2176,  2180,  2184,
    2188,  2192,  2197,  2201,  2207,  2214,  2218,  2222,  2227,  2231,
    2235,  2239,  2243,  2247,  2253,  2257,  2261,  2266,  2271,  2276,
    2280,  2286,  2291,  2296,  2299,  2303,  2310,  2317,  2319,  2321,
    2323,  2326,  2329,  2332,  2336,  2340,  2343,  2356,  2359,  2362,
    2364,  2368,  2373,  2376,  2377,  2381,  2383,  2385,  2388,  2391,
    2394,  2397,  2400,  2405,  2410,  2415,  2419,  2424,  2430,  2439,
    2446,  2451,  2461,  2468,  2476,  2487,  2499,  2512,  2522,  2528,
    2533,  2540,  2544,  2550,  2556,  2563,  2569,  2574,  2584,  2595,
    2607,  2617,  2624,  2631,  2638,  2645,  2652,  2659,  2666,  2673,
    2680,  2688,  2696,  2699,  2704,  2709,  2714,  2719,  2725,  2730,
    2735,  2741,  2747,  2751,  2756,  2761,  2766,  2771,  2779,  2789,
    2796,  2807,  2819,  2832,  2842,  2846,  2849,  2853,  2859,  2867,
    2872,  2876,  2880,  2887,  2895,  2903,  2908,  2913,  2918,  2928,
    2933,  2937,  2942,  2950,  2958,  2961,  2965,  2969,  2973,  2978,
    2981,  2984,  2989,  3000,  3004,  3006,  3010,  3013,  3016,  3019,
    3022,  3026,  3032,  3037,  3043,  3046,  3054,  3058,  3061,  3064,
    3068,  3071,  3074,  3077,  3081,  3084,  3088,  3093,  3097,  3101,
    3108,  3113,  3116,  3120,  3123,  3126,  3131,  3135,  3139,  3142,
    3146,  3148,  3151,  3153,  3156,  3159,  3162,  3164,  3166,  3168,
    3170,  3173,  3175,  3178,  3181,  3183,  3186,  3189,  3191,  3194,
    3196,  3198,  3200,  3202,  3204,  3206,  3208,  3210,  3211,  3213,
    3216,  3219,  3222,  3226,  3232,  3240,  3248,  3255,  3262,  3269,
    3276,  3282,  3289,  3296,  3303,  3310,  3317,  3324,  3331,  3343,
    3351,  3359,  3367,  3377,  3387,  3398,  3411,  3424,  3427,  3430,
    3434,  3439,  3444,  3449,  3452,  3457,  3462,  3464,  3466,  3468,
    3470,  3472,  3474,  3476,  3478,  3481,  3483,  3485,  3487,  3491,
    3495,  3500,  3507,  3518,  3527,  3535,  3541,  3544,  3547,  3551,
    3556,  3562,  3566,  3572,  3578,  3582,  3587,  3593,  3599,  3605,
    3609,  3615,  3618,  3622,  3626,  3632,  3636,  3640,  3644,  3649,
    3655,  3661,  3665,  3671,  3677,  3681,  3686,  3692,  3698,  3701,
    3704,  3708,  3714,  3721,  3728,  3732,  3736,  3740,  3747,  3753,
    3759,  3762,  3766,  3770,  3776,  3783,  3787,  3790,  3793,  3797,
    3800,  3804,  3807,  3811,  3817,  3824,  3827,  3830,  3833,  3835,
    3840,  3845,  3847,  3850,  3853,  3856,  3859,  3862,  3865,  3868,
    3872,  3875,  3879,  3882,  3886,  3888,  3890,  3892,  3894,  3896,
    3897,  3900,  3901,  3904,  3905,  3907,  3908,  3909,  3911,  3913,
    3915,  3917,  3925,  3934,  3937,  3942,  3945,  3950,  3957,  3960,
    3962,  3964,  3968,  3972,  3974,  3979,  3982,  3984,  3988,  3992,
    3997,  4001,  4005,  4009,  4011,  4013,  4015,  4017,  4019,  4021,
    4023,  4025,  4027,  4029,  4031,  4033,  4035,  4037,  4040,  4041,
    4042,  4045,  4047,  4051,  4053,  4057,  4059,  4062,  4065,  4067,
    4071,  4072,  4073,  4076,  4079,  4081,  4085,  4091,  4093,  4096,
    4099,  4102,  4104,  4106,  4108,  4110,  4115,  4118,  4122,  4126,
    4129,  4133,  4136,  4139,  4142,  4146,  4150,  4154,  4157,  4161,
    4163,  4167,  4171,  4173,  4176,  4179,  4182,  4185,  4195,  4202,
    4204,  4206,  4208,  4210,  4213,  4216,  4220,  4224,  4226,  4229,
    4233,  4237,  4239,  4242,  4244,  4246,  4248,  4250,  4252,  4255,
    4258,  4263,  4265,  4268,  4271,  4274,  4278,  4280,  4282,  4284,
    4287,  4290,  4293,  4296,  4299,  4303,  4307,  4311,  4315,  4319,
    4323,  4327,  4329,  4332,  4335,  4338,  4342,  4345,  4349,  4353,
    4356,  4359,  4362,  4365,  4368,  4371,  4374,  4377,  4380,  4383,
    4386,  4389,  4392,  4395,  4399,  4403,  4407,  4410,  4413,  4416,
    4419,  4422,  4425,  4428,  4431,  4434,  4437,  4440,  4443,  4447,
    4451,  4455,  4460,  4467,  4469,  4471,  4473,  4475,  4477,  4478,
    4484,  4486,  4493,  4497,  4499,  4503,  4506,  4509,  4513,  4517,
    4520,  4523,  4526,  4529,  4532,  4535,  4539,  4542,  4545,  4549,
    4551,  4555,  4560,  4562,  4565,  4571,  4578,  4585,  4588,  4590,
    4593,  4596,  4602,  4609
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     349,     0,    -1,    96,   351,    -1,    44,   381,    -1,    41,
      66,     5,    -1,    46,   386,    -1,    59,    -1,    64,    -1,
      65,   388,    -1,    67,   280,     5,    -1,    68,   393,    -1,
      69,   395,    -1,    77,   396,    -1,    84,   405,    -1,    86,
     407,    -1,    87,   408,    -1,    95,   352,    -1,   125,   410,
      -1,   137,   411,    -1,   141,   453,    -1,   144,   456,    -1,
     148,    -1,   149,   352,    -1,   155,   462,    -1,   161,    16,
       4,    -1,   174,   465,    -1,   177,   483,    -1,   178,   484,
      -1,   179,   485,    -1,   182,   501,   486,    -1,   183,   520,
      -1,   196,    66,     5,    -1,   211,   521,    -1,   212,   522,
      -1,   213,   525,    -1,   234,    88,    -1,   227,   527,    -1,
     225,   526,    -1,   240,    -1,   237,   501,   529,    -1,   242,
     534,    -1,   244,   535,    -1,   249,   537,    -1,   262,    -1,
     268,   552,    -1,   283,     4,    -1,   284,   376,    -1,   295,
      -1,   297,   554,    -1,   303,    -1,   306,   556,    -1,   307,
     557,    -1,   337,   561,    -1,   343,   562,    -1,     3,    -1,
       4,    -1,   208,    -1,   207,    -1,   191,   352,    -1,   214,
     352,    -1,   216,   352,    -1,   307,   352,    -1,    44,   352,
      -1,    46,   352,    -1,    76,   352,    -1,    84,   352,    -1,
     142,   352,    -1,   242,   352,    -1,     4,    -1,   340,    -1,
     344,    -1,   208,    -1,   291,    -1,   201,    -1,   345,    -1,
     207,    -1,   119,    -1,    -1,   243,    38,    -1,   133,    38,
      -1,   243,    -1,   133,    -1,    -1,   355,    -1,   350,    -1,
       7,    -1,     8,    -1,     9,    -1,    10,    -1,    11,    -1,
     356,   356,    -1,   357,   358,    -1,   358,   358,    -1,   350,
     350,    -1,   156,    -1,   218,    -1,   101,    -1,    19,    -1,
     361,    -1,   307,    -1,   308,    -1,   309,    -1,   310,    -1,
     311,    -1,   312,    -1,   313,    -1,   314,    -1,   315,    -1,
     316,    -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,
     321,    -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,
     326,    -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,
     331,    -1,   332,    -1,   333,    -1,   334,    -1,    56,    -1,
     213,    -1,   172,    -1,   176,    -1,   226,    -1,   272,    -1,
     273,    -1,    28,    -1,   264,    -1,   150,    -1,    30,    -1,
     251,    -1,   246,    -1,    94,    -1,   162,    -1,    -1,   127,
      -1,    35,    -1,   128,    -1,   163,    -1,   153,    -1,   135,
      -1,   106,    -1,    -1,    97,    -1,   257,    -1,    -1,    97,
      -1,    24,    -1,    25,    -1,    -1,   261,    -1,   164,    -1,
      -1,    17,    -1,   158,    -1,    -1,   156,    -1,   183,    -1,
      -1,    62,    -1,    48,    -1,   102,    -1,    85,    -1,   346,
      -1,    27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,
     151,    -1,   220,    -1,   221,    -1,   235,    -1,   275,    -1,
      -1,    32,    -1,   277,    -1,    -1,   197,    -1,    42,    -1,
      43,    -1,   169,    -1,   170,    -1,   301,   380,    -1,    47,
     377,    -1,    74,   378,    -1,   149,   379,    -1,   185,   532,
      -1,    37,   533,    -1,   250,   350,    -1,   229,    -1,   285,
     350,    -1,   352,    -1,    66,     5,    -1,   352,    -1,    66,
       5,    -1,   352,    -1,    66,     5,    -1,   350,   350,    -1,
     222,   350,   350,   350,   350,   350,    -1,    12,   382,    -1,
      71,     5,     5,     5,    -1,   100,     4,    -1,   118,   383,
      -1,   134,   384,    -1,    53,   265,     4,    -1,   288,   385,
      -1,   122,     5,    -1,    59,    -1,   350,   350,    -1,   350,
      -1,   350,   350,    -1,   350,    12,   350,   350,    -1,   350,
     350,    12,   350,   350,    -1,   288,   350,    -1,   288,   350,
     350,    -1,   288,   350,    12,   350,   350,    -1,   288,   350,
     350,    12,   350,   350,    -1,    32,    -1,   277,    -1,   123,
      -1,   350,   350,    12,    59,     5,     5,     5,    -1,   350,
     350,     4,   350,   350,    12,    59,     5,     5,     5,     5,
      -1,   350,   350,    12,   350,   350,     5,     5,     5,    -1,
     350,   350,     4,   350,   350,    12,   350,   350,     5,     5,
       5,     5,    -1,   350,    -1,   350,   350,    -1,   288,   387,
      -1,   123,    -1,   350,    -1,   350,   350,    -1,   253,   389,
      -1,   192,   390,    -1,   186,   391,    -1,   298,   350,   350,
      -1,   298,   196,   196,    -1,   342,   392,    -1,   229,   352,
      -1,   138,    -1,   175,    -1,   350,    -1,   186,    -1,   342,
      -1,   341,    -1,   298,    -1,     4,   364,    -1,   192,   364,
      -1,   246,     4,    -1,   350,     4,     4,    -1,    78,   350,
      -1,   246,     4,    -1,   171,     4,    -1,     4,   350,   350,
       4,     6,     4,    -1,   242,   350,   350,   350,   350,   350,
     350,     4,     6,     4,    -1,    40,    -1,   193,   394,    -1,
     111,    -1,     4,   350,   350,     4,     6,     4,    -1,   242,
     350,   350,   350,   350,   350,   350,     4,     6,     4,    -1,
     363,    -1,   176,   350,    -1,    83,   397,    -1,    99,   398,
      -1,   174,   399,    -1,   215,   403,    -1,   249,   404,    -1,
       5,     4,     4,   402,     4,     4,   363,   350,   400,   401,
     350,   350,     5,    -1,     5,     4,     4,   402,     4,     4,
     363,   350,   350,   401,   350,   350,     5,    -1,     5,     4,
       4,   402,     4,     4,   363,   350,   400,   350,   350,     5,
      -1,     5,     4,     4,   402,     4,     4,   363,   350,   350,
     350,   350,     5,    -1,   224,    -1,    -1,    31,    -1,     5,
      -1,     5,     5,     4,   352,    -1,     5,     4,   352,     5,
     360,   365,    -1,   186,    -1,   342,    -1,   341,    -1,   298,
      -1,   138,    -1,   175,    -1,   268,    -1,    46,    -1,     5,
      -1,     5,     5,     4,   352,    -1,     5,   360,   365,    -1,
      31,     5,   360,   365,    -1,    -1,   350,   350,   350,   350,
     360,   365,    -1,    59,   359,   360,   365,   350,   350,   360,
     367,    -1,   284,   406,    -1,    40,   350,   350,    -1,   193,
     350,   350,    -1,   111,   350,   350,    -1,    -1,   350,   350,
     360,   365,    -1,    40,   350,   350,     4,    -1,   193,   350,
     350,     4,    -1,   111,   350,   350,     4,    -1,   362,   350,
     350,    -1,   360,   365,   359,    -1,   352,    -1,   306,   350,
     350,    -1,    40,   193,   362,   350,   350,    -1,   193,   362,
     350,   350,    -1,    40,   193,   360,   359,    -1,   193,   360,
     359,    -1,    33,     4,    -1,    -1,    32,    -1,   277,    -1,
     144,   117,     5,    -1,    41,    66,    -1,    44,   412,    -1,
      46,   414,    -1,    65,   415,    -1,    68,   419,    -1,    67,
     418,    -1,    69,   421,    -1,    77,   423,    -1,    79,   426,
      -1,    84,   427,    -1,    86,   428,    -1,    88,   430,    -1,
      87,   429,    -1,    93,   431,    -1,    95,    -1,   124,   435,
      -1,   141,   441,    -1,   151,     5,     5,     4,    -1,   152,
      89,     5,     5,   350,   350,   362,     4,   409,    -1,   155,
     433,    -1,   159,   432,    -1,   161,    16,    -1,   186,    -1,
     182,   501,   495,    -1,   183,   442,    -1,   196,    66,    -1,
     211,    -1,   212,   443,    -1,   219,   279,   362,   350,   350,
       4,     4,     5,    -1,   242,   444,    -1,   244,    -1,   268,
     445,    -1,   283,    -1,   284,   446,    -1,   292,    -1,   299,
     362,   350,   350,    -1,   305,    89,     5,     5,   350,   350,
     362,     4,   409,    -1,   307,   451,    -1,   343,    -1,   100,
      -1,   118,    -1,   134,    -1,    53,   265,    -1,    88,    -1,
     122,    -1,    71,   413,    -1,   173,    -1,    -1,   186,     5,
      -1,   103,     5,    -1,   118,    -1,    -1,   400,   401,    -1,
     350,   401,    -1,   253,    -1,   192,    -1,   186,   416,    -1,
     298,   168,    -1,   342,   417,    -1,   229,    -1,   192,    -1,
     246,    -1,    78,    -1,   246,    -1,   171,    -1,    -1,   280,
      -1,   168,   420,    -1,     4,    -1,     4,   362,   350,   350,
      -1,     4,   350,   350,   363,   350,    -1,    -1,   168,   422,
      -1,   176,    -1,     4,   350,   350,   363,   350,    -1,   360,
     365,    -1,    65,   424,    -1,    66,    -1,    91,    -1,   168,
      -1,   205,   168,    -1,   185,    -1,    69,   425,    -1,   268,
      -1,   336,    -1,    -1,   192,    -1,   253,    -1,    -1,   176,
      -1,   350,   350,   360,   365,   366,    -1,   362,   350,   350,
     360,   365,   366,    -1,   360,   365,   366,    -1,    59,   360,
     365,   366,   360,   367,    -1,   284,   360,   365,    -1,   362,
      -1,   360,   365,   366,    -1,   276,    -1,    33,    -1,   362,
      -1,   360,   365,   366,    -1,   360,   365,   359,   350,   350,
       5,    -1,     4,   360,   365,   359,   350,   350,     5,    -1,
     362,   350,   350,     4,     4,    -1,     5,    -1,    65,    -1,
     362,   350,   350,     5,    -1,     6,     4,     4,     4,     4,
      -1,    88,    -1,   120,   195,   434,    -1,    -1,     4,    -1,
     350,   350,    -1,   198,    -1,    59,   360,   365,   366,    -1,
      81,    -1,   100,   438,    -1,    45,    -1,   117,   436,    -1,
     120,   195,   439,    -1,   146,   437,    -1,   147,    -1,   206,
     195,    -1,   265,    -1,   265,   360,   365,   367,    -1,   266,
     440,    -1,   336,    -1,     4,    -1,   362,   350,   350,    -1,
       4,    -1,   165,     5,    -1,     4,   165,     5,    -1,   307,
       4,    -1,    -1,   353,    -1,   353,   362,   350,   350,    -1,
     353,     4,    -1,    -1,   131,   156,   360,   365,    -1,   131,
     156,     4,   360,   365,    -1,   288,   156,   350,   360,   365,
      -1,    -1,   210,    -1,   300,    -1,    66,    -1,   181,    -1,
     287,    -1,   229,    -1,    61,    -1,   278,    -1,   301,    -1,
     134,    -1,   236,    -1,   236,   187,    -1,   263,    -1,   263,
     187,    -1,    21,    -1,   301,   450,    -1,    47,   447,    -1,
      74,   448,    -1,   149,   449,    -1,   185,    -1,    37,    -1,
     250,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,   222,    -1,    -1,    16,   452,    -1,   195,   361,
      -1,    -1,   223,    -1,    83,   454,    -1,    99,    -1,   360,
     365,   366,   455,     5,     5,    -1,   360,   365,   366,   455,
       5,    -1,    20,    -1,   232,    -1,    19,    -1,    44,   457,
      -1,    77,   458,    -1,    84,    -1,    94,    -1,    95,    -1,
     101,    -1,   124,   459,    -1,   141,    -1,   155,    -1,   162,
      -1,   182,   460,    -1,   218,    -1,   156,    -1,   268,    -1,
     278,   360,    -1,   307,   461,    -1,    72,     5,    -1,    -1,
      31,    -1,    -1,    44,    -1,    87,    -1,   191,    -1,   149,
      -1,   255,    -1,   215,    -1,   293,    -1,   360,    -1,   115,
     360,    -1,    58,   360,    -1,   172,   360,    -1,    18,    -1,
     284,   360,    -1,   199,     4,     4,    -1,   116,    -1,   184,
       5,    -1,    88,   464,    -1,   256,   120,   195,   463,    -1,
     256,     6,     4,     4,     4,     4,    -1,   297,    -1,   307,
     350,   350,   350,   350,   350,   350,   350,   350,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    56,    -1,     4,
       4,   360,    -1,   192,   352,    -1,    26,   466,    -1,   112,
     468,    -1,   124,   469,    -1,   158,   482,    -1,   204,   480,
      -1,   217,   481,    -1,     5,    14,     5,   370,    -1,     5,
      15,     5,   370,    -1,     5,    61,     5,   370,    -1,     5,
     189,   370,    -1,     5,   190,   370,    -1,     5,   259,   368,
       4,   370,    -1,     5,   269,     4,   370,    -1,     5,   270,
       4,   370,    -1,     5,   300,     5,   370,    -1,   242,    87,
     467,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,    -1,     5,   190,    -1,
       5,   259,   368,     4,    -1,     5,   269,     4,    -1,     5,
     270,     4,    -1,     5,   300,     5,    -1,     5,     5,   267,
      -1,     5,    14,     5,   370,    -1,     5,    15,     5,   370,
      -1,     5,    61,     5,   370,    -1,     5,   189,   369,   370,
      -1,     5,     5,   267,   369,   370,    -1,     5,   190,   369,
     370,    -1,     5,   259,   368,     4,   369,   370,    -1,     5,
     274,   368,     4,     4,   369,   370,    -1,     5,   269,     4,
     370,    -1,     5,   270,     4,   370,    -1,     5,   300,     5,
     369,   370,    -1,   266,   470,    -1,   117,    87,   471,    -1,
     242,   156,   479,    -1,   242,    87,   478,    -1,   191,   472,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   189,   369,    -1,     5,     5,   267,
     369,    -1,     5,   190,   369,    -1,     5,   259,   368,     4,
     369,    -1,     5,   274,   368,     4,     4,   369,    -1,     5,
     269,     4,    -1,     5,   270,     4,    -1,     5,   300,     5,
     369,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   189,   369,    -1,     5,   190,
     369,    -1,     5,   259,   368,     4,   369,    -1,     5,   269,
       4,    -1,     5,   270,     4,    -1,     5,   300,     5,   369,
      -1,   156,   161,   473,    -1,   161,   474,    -1,   156,   475,
      -1,   476,    -1,   156,   335,   477,    -1,     5,    14,     5,
     370,    -1,     5,    15,     5,   370,    -1,     5,    61,     5,
     370,    -1,     5,   189,   369,   370,    -1,     5,   190,   369,
     370,    -1,     5,   259,   368,     4,   369,   370,    -1,     5,
     269,     4,   370,    -1,     5,   270,     4,   370,    -1,     5,
     300,     5,   369,   370,    -1,     5,    14,     5,   370,    -1,
       5,    15,     5,   370,    -1,     5,    61,     5,   370,    -1,
       5,   189,   369,   370,    -1,     5,     5,   267,   369,   370,
      -1,     5,   190,   369,   370,    -1,     5,   259,   368,     4,
     369,   370,    -1,     5,   274,   368,     4,     4,   369,   370,
      -1,     5,   269,     4,   370,    -1,     5,   270,     4,   370,
      -1,     5,   300,     5,   369,   370,    -1,   361,     5,    14,
       5,   370,    -1,   361,     5,    15,     5,   370,    -1,   361,
       5,    61,     5,   370,    -1,   361,     5,   189,   369,   370,
      -1,   361,     5,   190,   369,   370,    -1,   361,     5,   259,
     368,     4,   369,   370,    -1,   361,     5,   269,     4,   370,
      -1,   361,     5,   270,     4,   370,    -1,   361,     5,   300,
       5,   369,   370,    -1,   361,     5,    14,     5,   370,    -1,
     361,     5,    15,     5,   370,    -1,   361,     5,    61,     5,
     370,    -1,   361,     5,   189,   369,   370,    -1,   361,     5,
       5,   267,   369,   370,    -1,   361,     5,   190,   369,   370,
      -1,   361,     5,   259,   368,     4,   369,   370,    -1,   361,
       5,   274,   368,     4,     4,   369,   370,    -1,   361,     5,
     269,     4,   370,    -1,   361,     5,   270,     4,   370,    -1,
     361,     5,   300,     5,   369,   370,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,   369,    -1,     5,   190,   369,    -1,     5,   259,   368,
       4,   369,    -1,     5,   269,     4,    -1,     5,   270,     4,
      -1,     5,   300,     5,   369,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   189,
     369,    -1,     5,     5,   267,   369,    -1,     5,   190,   369,
      -1,     5,   259,   368,     4,   369,    -1,     5,   274,   368,
       4,     4,   369,    -1,     5,   269,     4,    -1,     5,   270,
       4,    -1,     5,   300,     5,   369,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,   369,    -1,     5,   190,   369,    -1,     5,   259,   368,
       4,   369,    -1,     5,   269,     4,    -1,     5,   270,     4,
      -1,     5,   300,     5,   369,    -1,     5,    14,     5,   370,
      -1,     5,    61,     5,   370,    -1,     5,   189,   370,    -1,
       5,   259,   368,     4,   370,    -1,     5,   269,     4,   370,
      -1,     5,   300,     5,   370,    -1,     5,     5,    -1,   266,
       5,     5,    -1,    93,     4,     4,     4,     4,     4,    -1,
     186,     4,     4,     4,     4,     4,    -1,   111,    -1,   228,
      -1,   352,    -1,   139,   352,    -1,    88,   352,    -1,    66,
       5,    -1,     5,     4,     4,    -1,   297,   350,   350,    -1,
     343,   350,    -1,     5,     5,   361,   365,     5,     5,   361,
     365,   350,   361,   367,     5,    -1,    60,   489,    -1,    66,
       5,    -1,    80,    -1,    73,   494,     5,    -1,    73,   494,
     300,     5,    -1,    75,    99,    -1,    -1,    83,   487,   490,
      -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,   493,
      -1,   114,     4,    -1,   129,     5,    -1,   149,    17,    -1,
     149,   209,   350,   350,    -1,   149,   289,   350,   350,    -1,
       4,    20,   373,   352,    -1,     4,    21,   355,    -1,     4,
      21,   355,   362,    -1,     4,    21,   355,   360,   365,    -1,
       4,    22,   236,   350,   350,     4,   360,   367,    -1,     4,
      22,   236,     5,   360,   367,    -1,     4,    48,   121,   352,
      -1,     4,    49,   236,   350,   350,   350,     4,   360,   367,
      -1,     4,    49,   236,     5,   360,   367,    -1,     4,    48,
     236,   350,   350,   360,   367,    -1,     4,    52,   105,   355,
     355,     4,   350,   350,   350,     4,    -1,     4,    52,   105,
     355,   355,     4,   350,   350,   350,     4,   362,    -1,     4,
      52,   105,   355,   355,     4,   350,   350,   350,     4,   360,
     365,    -1,     4,    52,   105,     5,     5,   360,   365,   360,
     367,    -1,     4,    55,   488,     5,     5,    -1,     4,    62,
     121,   352,    -1,     4,    62,   236,   350,   360,   367,    -1,
       4,    66,     5,    -1,     4,    74,    27,   352,   352,    -1,
       4,    74,   166,     5,     5,    -1,     4,    74,   236,   350,
     360,   367,    -1,     4,    74,   278,   360,   365,    -1,     4,
      75,   138,   352,    -1,     4,    82,   105,   355,   355,     4,
     350,   350,     4,    -1,     4,    82,   105,   355,   355,     4,
     350,   350,     4,   362,    -1,     4,    82,   105,   355,   355,
       4,   350,   350,     4,   360,   365,    -1,     4,    82,   105,
       5,     5,   360,   365,   360,   367,    -1,     4,    83,    22,
     236,   350,   350,    -1,     4,    83,    49,   236,   350,   350,
      -1,     4,    83,    52,    21,   350,   350,    -1,     4,    83,
      52,   236,   350,   350,    -1,     4,    83,   110,   236,   350,
     350,    -1,     4,    83,   113,    21,   350,   350,    -1,     4,
      83,   113,   236,   350,   350,    -1,     4,    83,    82,    21,
     350,   350,    -1,     4,    83,    82,   236,   350,   350,    -1,
       4,    83,   224,   304,     4,   350,   350,    -1,     4,    83,
     254,   304,     4,   350,   350,    -1,     4,    99,    -1,     4,
      99,    22,     4,    -1,     4,    99,    49,     4,    -1,     4,
      99,    52,     4,    -1,     4,    99,   110,     4,    -1,     4,
      99,    55,   488,     5,    -1,     4,    99,   113,     4,    -1,
       4,    99,    82,     4,    -1,     4,    99,   224,   304,     4,
      -1,     4,    99,   254,   304,     4,    -1,     4,    99,   280,
      -1,     4,    99,   280,     5,    -1,     4,    99,   280,     4,
      -1,     4,   105,    40,     4,    -1,     4,   109,   121,   352,
      -1,     4,   109,   236,   350,   350,   360,   367,    -1,     4,
     110,   236,   350,   350,   350,     4,   360,   367,    -1,     4,
     110,   236,     5,   360,   367,    -1,     4,   113,   105,   355,
     355,     4,   350,   350,   350,     4,    -1,     4,   113,   105,
     355,   355,     4,   350,   350,   350,     4,   362,    -1,     4,
     113,   105,   355,   355,     4,   350,   350,   350,     4,   360,
     365,    -1,     4,   113,   105,     5,     5,   360,   365,   360,
     367,    -1,     4,   129,     5,    -1,     4,   149,    -1,     4,
     149,   209,    -1,     4,   171,    27,   352,   352,    -1,     4,
     171,   222,   360,   365,   359,   359,    -1,     4,   194,   350,
     350,    -1,     4,   194,   132,    -1,     4,   194,    36,    -1,
       4,   194,   288,   360,   365,   359,    -1,     4,   224,   240,
     350,   350,   360,   367,    -1,     4,   254,   240,   350,   350,
     360,   367,    -1,     4,   222,   258,   371,    -1,     4,   222,
     265,     4,    -1,     4,   224,   121,   352,    -1,     4,   230,
     360,   365,   359,   359,   350,   360,   367,    -1,     4,   231,
     507,   352,    -1,     4,   244,    40,    -1,     4,   245,   130,
       5,    -1,     4,   245,   222,   360,   365,   359,   359,    -1,
       4,   245,   278,   360,   365,   360,   367,    -1,     4,   255,
      -1,     4,   255,   209,    -1,     4,   280,     5,    -1,     4,
     282,     5,    -1,     4,   282,   244,   352,    -1,     4,   294,
      -1,     4,   296,    -1,     4,   302,    27,   352,    -1,     4,
     302,   222,   360,   365,   359,   360,   367,   350,   355,    -1,
       4,   336,     4,    -1,   164,    -1,   164,   350,   350,    -1,
     173,   502,    -1,   174,   503,    -1,   194,   504,    -1,   229,
     352,    -1,   231,   507,   352,    -1,   231,   507,   352,   350,
     350,    -1,   244,    40,   350,   350,    -1,   244,   193,   350,
     350,     4,    -1,   244,   111,    -1,   249,     5,   494,   360,
     365,   366,   352,    -1,   249,   281,     5,    -1,   255,   511,
      -1,   262,   512,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   129,     5,
      -1,     5,   149,    -1,     5,   149,   209,    -1,     5,   194,
     350,   350,    -1,     5,   194,   132,    -1,     5,   194,    36,
      -1,     5,   194,   288,   360,   365,   359,    -1,     5,   231,
     507,   352,    -1,     5,   255,    -1,     5,   255,   209,    -1,
       5,   294,    -1,     5,   296,    -1,   280,   105,     5,     5,
      -1,   280,    99,     5,    -1,   280,    99,    17,    -1,   280,
       5,    -1,   280,   297,     5,    -1,   215,    -1,   215,   360,
      -1,   293,    -1,   294,    17,    -1,   296,    17,    -1,   336,
       4,    -1,   255,    -1,   296,    -1,   149,    -1,   294,    -1,
      40,   194,    -1,   194,    -1,   111,   194,    -1,    40,   105,
      -1,   105,    -1,   111,   105,    -1,    40,   244,    -1,   244,
      -1,   111,   244,    -1,    99,    -1,   282,    -1,    66,    -1,
     336,    -1,   231,    -1,   129,    -1,   164,    -1,   297,    -1,
      -1,     4,    -1,    30,   352,    -1,   236,   350,    -1,   160,
       4,    -1,   210,     4,   350,    -1,    62,   350,   350,   350,
     508,    -1,   109,   350,   350,   350,   350,   354,   508,    -1,
      48,   350,   350,   350,   350,   354,   508,    -1,   224,   350,
     350,   350,   350,   508,    -1,   254,   350,   350,   350,   350,
     508,    -1,   171,   350,   350,   350,   350,   508,    -1,   302,
     350,   350,   350,   350,   508,    -1,   282,   350,   350,   354,
     508,    -1,    62,   222,   350,   350,   372,   508,    -1,    48,
     222,   350,   350,   372,   508,    -1,   102,   222,   350,   350,
     372,   508,    -1,    85,   222,   350,   350,   372,   508,    -1,
     346,   222,   350,   350,   372,   508,    -1,    27,   222,   350,
     350,   372,   508,    -1,    51,   222,   350,   350,   372,   508,
      -1,   245,   350,   350,   350,   350,   360,   365,   360,   367,
       5,   508,    -1,    74,   350,   350,   350,   360,   365,   508,
      -1,   230,   350,   350,   350,   350,   350,   508,    -1,    22,
     350,   350,   350,   350,     4,   508,    -1,   110,   350,   350,
     350,   350,   350,     4,   354,   508,    -1,    49,   350,   350,
     350,   350,   350,     4,   354,   508,    -1,    82,   350,   350,
     355,   355,     4,   350,   350,     4,   508,    -1,   113,   350,
     350,   355,   355,     4,   350,   350,   350,     4,   354,   508,
      -1,    52,   350,   350,   355,   355,     4,   350,   350,   350,
       4,   354,   508,    -1,    75,   508,    -1,   281,   491,    -1,
       5,   350,   350,    -1,   300,     5,   350,   350,    -1,   350,
     350,   300,     5,    -1,     5,   360,   365,   359,    -1,     4,
       4,    -1,    40,   350,   350,     4,    -1,   193,   350,   350,
       4,    -1,   111,    -1,   104,    -1,   338,    -1,    63,    -1,
     248,    -1,   247,    -1,   233,    -1,   339,    -1,    60,   496,
      -1,    66,    -1,   129,    -1,   114,    -1,   143,   350,   350,
      -1,   154,   350,   350,    -1,     4,    20,    82,   360,    -1,
       4,    20,   151,     5,     5,     4,    -1,     4,    20,   220,
       5,     5,     5,     5,   360,   365,   374,    -1,     4,    20,
     221,     5,     5,   360,   365,   374,    -1,     4,    20,   235,
       5,     5,     5,   360,    -1,     4,    20,   275,   360,   365,
      -1,   154,    17,    -1,     4,    21,    -1,     4,    21,   362,
      -1,     4,    21,   360,   365,    -1,     4,    22,   236,   360,
     367,    -1,     4,    48,   121,    -1,     4,    49,   236,   360,
     367,    -1,     4,    48,   236,   360,   367,    -1,     4,    52,
      21,    -1,     4,    52,    21,   362,    -1,     4,    52,    21,
     360,   365,    -1,     4,    52,   236,   360,   367,    -1,     4,
      59,   360,   365,   366,    -1,     4,    62,   121,    -1,     4,
      62,   236,   360,   367,    -1,     4,    66,    -1,     4,    74,
      27,    -1,     4,    74,   166,    -1,     4,    74,   236,   360,
     367,    -1,     4,    74,   278,    -1,     4,    75,   138,    -1,
       4,    82,    21,    -1,     4,    82,    21,   362,    -1,     4,
      82,    21,   360,   365,    -1,     4,    82,   236,   360,   367,
      -1,     4,   109,   121,    -1,     4,   109,   236,   360,   367,
      -1,     4,   110,   236,   360,   367,    -1,     4,   113,    21,
      -1,     4,   113,    21,   362,    -1,     4,   113,    21,   360,
     365,    -1,     4,   113,   236,   360,   367,    -1,     4,   129,
      -1,     4,   149,    -1,     4,   171,    27,    -1,     4,   171,
     167,   360,   367,    -1,     4,   171,   222,   360,   365,   366,
      -1,     4,   180,   167,   350,   360,   367,    -1,     4,   224,
     121,    -1,     4,   222,   258,    -1,     4,   222,   265,    -1,
       4,   230,   222,   360,   365,   366,    -1,     4,   230,   167,
     360,   367,    -1,     4,   230,   286,   360,   367,    -1,     4,
     231,    -1,     4,   231,   507,    -1,     4,   245,   130,    -1,
       4,   245,   167,   360,   367,    -1,     4,   245,   222,   360,
     365,   366,    -1,     4,   245,   278,    -1,     4,   255,    -1,
       4,   280,    -1,     4,   280,     4,    -1,     4,   282,    -1,
       4,   282,   244,    -1,     4,   292,    -1,     4,   302,    27,
      -1,     4,   302,   167,   360,   367,    -1,     4,   302,   222,
     360,   365,   366,    -1,     4,   336,    -1,   149,   497,    -1,
     149,   205,    -1,   205,    -1,   224,   254,   350,   350,    -1,
     254,   254,   350,   350,    -1,   229,    -1,   231,   507,    -1,
     255,   498,    -1,   255,   205,    -1,   262,   499,    -1,     5,
      66,    -1,     5,   129,    -1,     5,   154,    -1,     5,   231,
     507,    -1,     5,   280,    -1,     5,   280,   205,    -1,   280,
      17,    -1,   280,    98,   195,    -1,   336,    -1,    30,    -1,
     236,    -1,   160,    -1,   210,    -1,    -1,   350,   350,    -1,
      -1,   350,   350,    -1,    -1,   282,    -1,    -1,    -1,   223,
      -1,   237,    -1,   298,    -1,    57,    -1,   494,   360,   365,
     366,   352,   509,   515,    -1,   255,   494,   360,   365,   366,
     352,   509,   515,    -1,   494,     5,    -1,   494,     5,   360,
     365,    -1,   494,     4,    -1,   494,     4,   360,   365,    -1,
     124,     5,     5,   492,     4,     5,    -1,   350,   350,    -1,
     132,    -1,    36,    -1,    40,   350,   350,    -1,   193,   350,
     350,    -1,   111,    -1,   288,   360,   365,   359,    -1,   505,
     506,    -1,   506,    -1,   507,   347,   352,    -1,    66,   347,
       5,    -1,    92,   347,     4,     4,    -1,   336,   347,     4,
      -1,   129,   347,     5,    -1,   282,   347,     5,    -1,   518,
      -1,   519,    -1,   202,    -1,   255,    -1,   149,    -1,    91,
      -1,   126,    -1,   105,    -1,   194,    -1,   244,    -1,    99,
      -1,   157,    -1,   271,    -1,   500,    -1,   500,   505,    -1,
      -1,    -1,   510,   513,    -1,    17,    -1,   209,   350,   350,
      -1,   289,    -1,   289,   350,   350,    -1,   352,    -1,   282,
     352,    -1,   513,   514,    -1,   514,    -1,   507,   347,   352,
      -1,    -1,    -1,   516,   517,    -1,   517,   518,    -1,   518,
      -1,   280,   347,     5,    -1,    55,   347,   488,     5,     5,
      -1,    64,    -1,    66,     5,    -1,   181,     4,    -1,   287,
     350,    -1,   346,    -1,   344,    -1,   339,    -1,   202,    -1,
     350,   350,   350,   350,    -1,   350,   350,    -1,   362,   350,
     350,    -1,   360,   365,   359,    -1,   288,   523,    -1,    39,
     350,   350,    -1,   193,   524,    -1,   229,   352,    -1,   350,
     350,    -1,   362,   350,   350,    -1,   360,   365,   359,    -1,
      40,   350,   350,    -1,   350,   350,    -1,   111,   350,   350,
      -1,   352,    -1,   307,   361,   365,    -1,     5,     4,     4,
      -1,   297,    -1,    70,   528,    -1,   168,     4,    -1,   241,
       4,    -1,   250,   350,    -1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,    -1,     4,     4,     4,     4,     4,
       4,    -1,    54,    -1,   140,    -1,   242,    -1,    90,    -1,
     149,   530,    -1,   255,   531,    -1,    40,   350,   350,    -1,
     193,   350,   350,    -1,   111,    -1,   260,   111,    -1,    40,
     350,   350,    -1,   193,   350,   350,    -1,   111,    -1,   260,
     111,    -1,   188,    -1,    13,    -1,   202,    -1,    34,    -1,
     107,    -1,    61,     5,    -1,   278,   360,    -1,   301,     4,
       4,     4,    -1,   350,    -1,   350,    97,    -1,   193,   536,
      -1,   288,   350,    -1,   288,   350,    97,    -1,    40,    -1,
     350,    -1,   111,    -1,    26,   538,    -1,   124,   540,    -1,
     204,   550,    -1,   112,   551,    -1,   217,     5,    -1,   120,
       5,   375,    -1,    61,     5,   375,    -1,   269,     4,   375,
      -1,   242,    87,   539,    -1,   120,     5,   375,    -1,    61,
       5,   375,    -1,   269,     4,   375,    -1,   541,    -1,   156,
     541,    -1,   279,   542,    -1,   266,   543,    -1,   117,    87,
     544,    -1,   191,   545,    -1,   242,   156,   547,    -1,   242,
      87,   548,    -1,   239,   549,    -1,   120,     5,    -1,    61,
       5,    -1,   269,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   269,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     269,     4,    -1,   120,     5,    -1,    61,     5,    -1,   269,
       4,    -1,   156,   546,    -1,   120,     5,     4,    -1,    61,
       5,     4,    -1,   269,     4,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   269,     4,    -1,   120,     5,    -1,    61,
       5,    -1,   269,     4,    -1,   120,     5,    -1,    61,     5,
      -1,   269,     4,    -1,   120,     5,    -1,    61,     5,    -1,
     269,     4,    -1,   120,     5,   375,    -1,    61,     5,   375,
      -1,   269,     4,   375,    -1,   120,     5,     5,   375,    -1,
     553,     4,     4,   350,   350,   355,    -1,    99,    -1,    50,
      -1,   290,    -1,   136,    -1,   108,    -1,    -1,     4,   350,
     350,   350,   350,    -1,   203,    -1,   203,     4,   350,   350,
     350,   350,    -1,   124,   266,   555,    -1,     4,    -1,   350,
     360,   365,    -1,     4,     4,    -1,   350,   350,    -1,   288,
     350,   350,    -1,   361,   365,   366,    -1,    16,   560,    -1,
     240,     4,    -1,   238,   559,    -1,    23,   558,    -1,     4,
       4,    -1,     4,     5,    -1,   282,     4,     5,    -1,     4,
       4,    -1,     4,     5,    -1,   282,     4,     5,    -1,     4,
      -1,     4,   361,   365,    -1,     4,     6,   361,   365,    -1,
     228,    -1,   350,   350,    -1,   350,   350,    12,   350,   350,
      -1,   350,   350,    12,   362,   350,   350,    -1,   350,   350,
      12,   360,   365,   359,    -1,   288,   563,    -1,   123,    -1,
     123,   350,    -1,   350,   350,    -1,   350,   350,    12,   350,
     350,    -1,   350,   350,    12,   362,   350,   350,    -1,   350,
     350,    12,   360,   365,   359,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   450,   450,   451,   452,   453,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   504,   505,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   522,   524,
     525,   526,   527,   529,   530,   531,   532,   535,   536,   537,
     538,   539,   542,   543,   546,   547,   548,   551,   554,   557,
     560,   572,   579,   586,   594,   595,   596,   597,   598,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   631,   632,   635,
     636,   637,   638,   639,   640,   641,   642,   645,   646,   647,
     648,   649,   652,   653,   654,   655,   656,   657,   658,   659,
     662,   663,   664,   667,   668,   669,   670,   673,   674,   675,
     678,   679,   680,   683,   684,   685,   688,   689,   690,   691,
     692,   693,   694,   695,   698,   699,   702,   703,   704,   705,
     706,   707,   710,   711,   712,   715,   716,   717,   718,   719,
     720,   723,   724,   725,   726,   727,   728,   729,   730,   731,
     735,   736,   739,   740,   743,   744,   747,   748,   752,   753,
     754,   755,   756,   757,   758,   759,   762,   763,   766,   767,
     768,   770,   772,   773,   774,   776,   780,   781,   784,   785,
     787,   790,   792,   798,   799,   800,   803,   804,   805,   808,
     809,   810,   811,   812,   813,   814,   820,   821,   824,   825,
     826,   827,   828,   831,   832,   833,   836,   837,   842,   847,
     854,   856,   858,   859,   860,   863,   865,   868,   869,   872,
     873,   874,   875,   876,   879,   881,   883,   888,   893,   896,
     897,   900,   901,   902,   909,   910,   911,   912,   915,   916,
     919,   920,   923,   924,   927,   929,   933,   934,   937,   939,
     940,   941,   942,   945,   946,   948,   949,   950,   953,   955,
     957,   958,   960,   962,   964,   966,   970,   973,   974,   975,
     978,   981,   982,   983,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   995,   996,   997,   998,   999,
    1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1020,  1022,  1023,
    1026,  1027,  1028,  1029,  1030,  1031,  1032,  1033,  1036,  1037,
    1038,  1041,  1044,  1045,  1047,  1049,  1050,  1051,  1052,  1053,
    1054,  1061,  1062,  1065,  1066,  1067,  1070,  1071,  1074,  1077,
    1078,  1080,  1084,  1085,  1086,  1089,  1093,  1095,  1096,  1097,
    1098,  1099,  1100,  1101,  1102,  1103,  1106,  1107,  1108,  1111,
    1112,  1115,  1117,  1125,  1127,  1129,  1133,  1134,  1136,  1139,
    1142,  1143,  1147,  1149,  1152,  1157,  1158,  1159,  1163,  1164,
    1165,  1168,  1169,  1170,  1173,  1174,  1176,  1177,  1178,  1179,
    1180,  1181,  1182,  1183,  1184,  1185,  1187,  1188,  1191,  1192,
    1195,  1196,  1197,  1198,  1201,  1204,  1206,  1209,  1213,  1214,
    1216,  1218,  1222,  1223,  1224,  1227,  1228,  1229,  1232,  1235,
    1236,  1237,  1240,  1241,  1242,  1243,  1244,  1245,  1248,  1249,
    1250,  1251,  1252,  1253,  1254,  1257,  1258,  1261,  1262,  1265,
    1266,  1269,  1270,  1273,  1274,  1275,  1278,  1279,  1282,  1283,
    1286,  1289,  1297,  1298,  1301,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,
    1317,  1320,  1323,  1324,  1327,  1328,  1329,  1330,  1333,  1334,
    1335,  1336,  1339,  1340,  1341,  1342,  1343,  1344,  1347,  1348,
    1349,  1350,  1351,  1352,  1354,  1355,  1360,  1361,  1364,  1366,
    1368,  1371,  1372,  1373,  1374,  1375,  1376,  1379,  1381,  1383,
    1385,  1386,  1388,  1390,  1392,  1394,  1396,  1399,  1400,  1401,
    1402,  1403,  1404,  1406,  1407,  1408,  1411,  1414,  1416,  1418,
    1420,  1422,  1424,  1426,  1428,  1431,  1433,  1435,  1437,  1438,
    1439,  1440,  1441,  1444,  1445,  1446,  1447,  1448,  1449,  1450,
    1452,  1454,  1455,  1456,  1459,  1460,  1461,  1462,  1463,  1464,
    1466,  1467,  1468,  1471,  1472,  1473,  1474,  1475,  1478,  1481,
    1484,  1487,  1490,  1493,  1496,  1499,  1502,  1507,  1510,  1513,
    1516,  1519,  1522,  1525,  1528,  1531,  1534,  1537,  1542,  1545,
    1548,  1551,  1554,  1557,  1560,  1563,  1566,  1571,  1574,  1577,
    1580,  1583,  1586,  1589,  1592,  1595,  1598,  1601,  1606,  1608,
    1609,  1610,  1611,  1612,  1614,  1615,  1616,  1618,  1619,  1620,
    1621,  1622,  1623,  1624,  1626,  1628,  1629,  1630,  1633,  1634,
    1635,  1636,  1637,  1638,  1640,  1641,  1642,  1645,  1647,  1649,
    1650,  1652,  1654,  1658,  1659,  1662,  1663,  1664,  1667,  1674,
    1675,  1676,  1677,  1678,  1679,  1680,  1683,  1691,  1692,  1693,
    1694,  1696,  1698,  1699,  1699,  1700,  1701,  1702,  1703,  1704,
    1705,  1707,  1708,  1710,  1713,  1716,  1717,  1718,  1721,  1724,
    1727,  1728,  1732,  1735,  1738,  1741,  1745,  1750,  1755,  1757,
    1758,  1760,  1761,  1763,  1765,  1767,  1769,  1770,  1772,  1774,
    1778,  1783,  1785,  1787,  1789,  1791,  1793,  1795,  1797,  1799,
    1801,  1803,  1806,  1807,  1809,  1811,  1812,  1814,  1816,  1817,
    1818,  1820,  1822,  1823,  1824,  1826,  1827,  1828,  1831,  1835,
    1838,  1841,  1845,  1850,  1856,  1857,  1858,  1860,  1861,  1865,
    1867,  1868,  1869,  1872,  1875,  1878,  1880,  1882,  1883,  1888,
    1891,  1892,  1893,  1896,  1900,  1901,  1903,  1904,  1905,  1907,
    1908,  1910,  1911,  1916,  1918,  1919,  1921,  1922,  1923,  1924,
    1925,  1926,  1928,  1930,  1932,  1933,  1935,  1936,  1938,  1940,
    1941,  1942,  1943,  1944,  1945,  1946,  1947,  1948,  1949,  1950,
    1952,  1954,  1955,  1956,  1957,  1959,  1960,  1961,  1962,  1963,
    1965,  1966,  1967,  1968,  1969,  1970,  1973,  1974,  1975,  1976,
    1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,  1991,  1992,  1993,  1996,  1997,  1998,
    1999,  2000,  2001,  2009,  2016,  2025,  2034,  2041,  2048,  2056,
    2064,  2071,  2076,  2081,  2086,  2091,  2096,  2101,  2107,  2117,
    2127,  2137,  2144,  2154,  2164,  2173,  2185,  2198,  2203,  2206,
    2208,  2210,  2215,  2219,  2222,  2224,  2226,  2229,  2230,  2231,
    2232,  2233,  2234,  2235,  2238,  2239,  2240,  2241,  2242,  2243,
    2245,  2247,  2249,  2251,  2253,  2255,  2258,  2259,  2260,  2261,
    2263,  2266,  2267,  2269,  2271,  2272,  2273,  2275,  2278,  2281,
    2282,  2284,  2285,  2286,  2287,  2289,  2290,  2291,  2292,  2293,
    2295,  2297,  2298,  2300,  2303,  2304,  2305,  2307,  2309,  2310,
    2311,  2312,  2314,  2317,  2321,  2322,  2323,  2324,  2327,  2330,
    2332,  2333,  2334,  2335,  2337,  2340,  2341,  2343,  2344,  2345,
    2346,  2347,  2349,  2350,  2352,  2355,  2356,  2357,  2358,  2359,
    2361,  2363,  2364,  2365,  2366,  2368,  2370,  2371,  2372,  2373,
    2374,  2375,  2377,  2378,  2380,  2383,  2384,  2385,  2386,  2389,
    2390,  2393,  2394,  2397,  2398,  2401,  2414,  2415,  2419,  2420,
    2424,  2427,  2432,  2439,  2441,  2444,  2446,  2449,  2453,  2454,
    2455,  2456,  2457,  2458,  2459,  2463,  2464,  2467,  2468,  2469,
    2470,  2471,  2472,  2473,  2474,  2477,  2478,  2479,  2480,  2481,
    2482,  2483,  2484,  2485,  2486,  2487,  2490,  2491,  2494,  2495,
    2495,  2498,  2499,  2500,  2501,  2504,  2505,  2508,  2509,  2512,
    2516,  2517,  2517,  2520,  2521,  2524,  2527,  2531,  2532,  2533,
    2534,  2537,  2538,  2539,  2540,  2543,  2545,  2546,  2551,  2553,
    2554,  2555,  2556,  2559,  2560,  2565,  2569,  2570,  2571,  2574,
    2575,  2580,  2581,  2584,  2586,  2587,  2588,  2593,  2595,  2601,
    2602,  2603,  2604,  2607,  2608,  2611,  2613,  2615,  2616,  2619,
    2621,  2622,  2623,  2626,  2627,  2630,  2631,  2632,  2635,  2636,
    2637,  2640,  2641,  2642,  2643,  2644,  2647,  2648,  2649,  2652,
    2653,  2654,  2655,  2656,  2659,  2661,  2663,  2665,  2668,  2670,
    2672,  2675,  2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,
    2686,  2687,  2688,  2691,  2692,  2693,  2696,  2697,  2698,  2701,
    2702,  2703,  2706,  2707,  2708,  2709,  2712,  2713,  2714,  2717,
    2718,  2719,  2722,  2723,  2724,  2727,  2728,  2729,  2732,  2734,
    2736,  2740,  2744,  2746,  2749,  2750,  2751,  2752,  2755,  2756,
    2758,  2759,  2761,  2764,  2765,  2767,  2773,  2774,  2777,  2779,
    2780,  2781,  2782,  2785,  2786,  2787,  2790,  2791,  2792,  2795,
    2796,  2801,  2805,  2812,  2813,  2815,  2820,  2822,  2825,  2826,
    2827,  2828,  2830,  2835
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
  "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_", "NOW_", "NRRD_", "NUMBER_",
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "PAN_",
  "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_",
  "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_",
  "POW_", "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "REGION_",
  "REPLACE_", "RESAMPLE_", "RESET_", "RESOLUTION_", "RGB_", "ROOT_",
  "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_",
  "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SEGMENT_", "SELECT_",
  "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_",
  "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "SUM_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_",
  "THREADS_", "THREED_", "THRESHOLD_", "THICK_", "TRANSPARENCY_", "TO_",
  "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
  "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_", "VALUE_", "VAR_", "VIEW_",
  "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_", "WCSA_",
  "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_",
  "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_",
  "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_",
  "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_", "YES_",
  "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept",
  "command", "numeric", "debug", "yesno", "fileNameType", "optangle",
  "angle", "sexagesimal", "hms", "dms", "coord", "coordSystem",
  "wcsSystem", "internalSystem", "scaleType", "minmaxMode", "skyFrame",
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
     595,   596,   597,   598,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   348,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   350,   350,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   353,   353,   353,
     353,   353,   354,   354,   355,   355,   355,   356,   357,   358,
     359,   359,   359,   359,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   362,   362,   363,
     363,   363,   363,   363,   363,   363,   363,   364,   364,   364,
     364,   364,   365,   365,   365,   365,   365,   365,   365,   365,
     366,   366,   366,   367,   367,   367,   367,   368,   368,   368,
     369,   369,   369,   370,   370,   370,   371,   371,   371,   371,
     371,   371,   371,   371,   372,   372,   373,   373,   373,   373,
     373,   373,   374,   374,   374,   375,   375,   375,   375,   375,
     375,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     377,   377,   378,   378,   379,   379,   380,   380,   381,   381,
     381,   381,   381,   381,   381,   381,   382,   382,   383,   383,
     383,   383,   383,   383,   383,   383,   384,   384,   385,   385,
     385,   385,   385,   386,   386,   386,   387,   387,   387,   388,
     388,   388,   388,   388,   388,   388,   389,   389,   390,   390,
     390,   390,   390,   391,   391,   391,   392,   392,   392,   392,
     393,   393,   393,   393,   393,   394,   394,   395,   395,   396,
     396,   396,   396,   396,   397,   397,   397,   397,   397,   398,
     398,   399,   399,   399,   400,   400,   400,   400,   401,   401,
     402,   402,   403,   403,   404,   404,   405,   405,   405,   405,
     405,   405,   405,   406,   406,   406,   406,   406,   407,   407,
     407,   407,   407,   407,   407,   407,   408,   409,   409,   409,
     410,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   412,   412,   412,   412,   412,   412,   413,   413,
     413,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   416,   416,   417,   417,   417,   418,   418,   419,   420,
     420,   420,   421,   421,   421,   422,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   424,   424,   424,   425,
     425,   426,   426,   427,   427,   427,   428,   428,   428,   429,
     430,   430,   431,   431,   431,   432,   432,   432,   433,   433,
     433,   434,   434,   434,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435,   436,   436,
     437,   437,   437,   437,   438,   439,   439,   439,   440,   440,
     440,   440,   441,   441,   441,   442,   442,   442,   443,   444,
     444,   444,   445,   445,   445,   445,   445,   445,   446,   446,
     446,   446,   446,   446,   446,   447,   447,   448,   448,   449,
     449,   450,   450,   451,   451,   451,   452,   452,   453,   453,
     454,   454,   455,   455,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   457,   458,   458,   459,   459,   459,   459,   460,   460,
     460,   460,   461,   461,   461,   461,   461,   461,   462,   462,
     462,   462,   462,   462,   462,   462,   463,   463,   464,   464,
     464,   465,   465,   465,   465,   465,   465,   466,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   468,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   472,   472,   472,   472,   472,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   475,   475,
     475,   475,   475,   475,   475,   475,   475,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   476,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   478,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   479,   479,
     479,   479,   479,   479,   479,   479,   479,   480,   480,   480,
     480,   480,   480,   481,   481,   482,   482,   482,   483,   484,
     484,   484,   484,   484,   484,   484,   485,   486,   486,   486,
     486,   486,   486,   487,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   489,   489,   489,
     489,   489,   489,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   491,
     491,   491,   491,   492,   493,   493,   493,   494,   494,   494,
     494,   494,   494,   494,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   496,   496,   496,   496,   497,
     497,   498,   498,   499,   499,   500,   501,   501,   501,   501,
     501,   502,   502,   503,   503,   503,   503,   503,   504,   504,
     504,   504,   504,   504,   504,   505,   505,   506,   506,   506,
     506,   506,   506,   506,   506,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   508,   508,   509,   510,
     509,   511,   511,   511,   511,   512,   512,   513,   513,   514,
     515,   516,   515,   517,   517,   518,   519,   520,   520,   520,
     520,   521,   521,   521,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   523,   523,   523,   524,   524,   524,   525,
     525,   525,   525,   526,   526,   526,   526,   527,   527,   528,
     528,   528,   528,   529,   529,   530,   530,   530,   530,   531,
     531,   531,   531,   532,   532,   533,   533,   533,   534,   534,
     534,   535,   535,   535,   535,   535,   536,   536,   536,   537,
     537,   537,   537,   537,   538,   538,   538,   538,   539,   539,
     539,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     541,   541,   541,   542,   542,   542,   543,   543,   543,   544,
     544,   544,   545,   545,   545,   545,   546,   546,   546,   547,
     547,   547,   548,   548,   548,   549,   549,   549,   550,   550,
     550,   551,   552,   552,   553,   553,   553,   553,   554,   554,
     554,   554,   554,   555,   555,   555,   556,   556,   557,   557,
     557,   557,   557,   558,   558,   558,   559,   559,   559,   560,
     560,   560,   561,   562,   562,   562,   562,   562,   563,   563,
     563,   563,   563,   563
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
       1,     2,     3,     2,     0,     1,     4,     2,     0,     4,
       5,     5,     0,     1,     1,     1,     1,     1,     1,     1,
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
       0,     0,   338,     0,     0,    55,     0,   430,     0,     0,
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
    1199,  1198,  1200,     0,     0,     0,  1215,   142,     0,   142,
    1230,  1225,  1228,     0,     0,   142,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,     0,   291,   290,
       0,     0,   282,   293,   295,     0,   305,   307,   306,   304,
     142,   312,     0,     0,     0,   150,   142,     0,     0,     0,
       0,   435,   449,    79,    78,   457,     0,   452,   155,   156,
     154,   445,     0,   142,     0,     0,     0,   433,   427,     0,
       0,     0,     0,     0,     0,   142,   938,     0,   941,     0,
       0,   944,     0,   142,   949,     0,   952,   953,     0,   955,
     956,   957,     0,   961,     0,     0,   964,     0,   970,     0,
       0,     0,   975,   976,   974,     0,     0,     0,   981,   982,
       0,     0,   985,   988,   990,   992,     0,     0,  1009,  1011,
     928,  1020,   929,     0,     0,  1022,  1013,     0,     0,   502,
     503,     0,     0,   547,     0,   557,   558,   559,   163,   563,
     564,   565,     0,     0,     0,   570,   571,   157,     0,     0,
       0,   163,   577,   578,   579,   580,   582,   160,   585,   586,
       0,   163,     0,     0,     0,   160,   160,   157,     0,     0,
       0,     0,   613,     0,   617,     0,     0,     0,     0,     0,
     160,   160,   157,     0,     0,   157,     0,     0,     0,     0,
       0,   160,   160,   157,     0,     0,   157,     0,     0,     0,
       0,     0,   160,   160,   157,     0,     0,   157,     0,     0,
       0,     0,   160,   160,   157,     0,     0,     0,   160,   593,
     594,   595,   596,   598,     0,   601,   602,     0,   160,     0,
       0,   687,   688,   163,   691,   692,     0,   724,   142,   726,
       0,     0,   730,     0,     0,     0,     0,     0,   863,   860,
     866,   865,   862,   868,     0,   739,     0,     0,     0,     0,
     142,   746,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   763,   764,   765,     0,   769,
     766,   768,     0,     0,   774,   773,   775,   776,     0,     0,
       0,     0,     0,     0,   142,   142,   789,   172,   168,   173,
     167,   170,   169,   171,   795,   796,   797,     0,     0,   799,
     801,   142,   142,     0,   808,   811,   142,   142,   836,   840,
     882,   711,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1066,   907,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   908,     0,
       0,     0,     0,     0,   722,   723,   142,   150,     0,   142,
     142,  1041,  1042,     0,     0,   822,     0,   142,  1072,  1074,
     845,     0,  1125,  1126,  1129,  1130,   185,   185,   185,  1201,
    1180,  1179,  1181,  1184,  1183,  1187,  1186,  1188,  1185,  1193,
    1192,  1194,  1190,  1189,  1191,     0,     0,  1209,  1214,     0,
    1231,     0,   142,     0,  1234,     0,     0,   224,     0,   221,
       0,     0,     0,   260,     0,     0,     0,     0,   142,     0,
     297,   130,     0,   390,     0,   411,   150,   153,     0,     0,
     424,     0,   142,   459,   142,     0,   428,   930,     0,     0,
       0,     0,   142,   939,   153,   153,   153,   142,   945,   153,
     150,   153,   153,   142,   958,   153,   153,   153,   142,   965,
     153,   153,   142,     0,   153,   142,   153,   153,   142,   153,
     142,   999,  1000,     0,     0,   501,   543,     0,   562,   567,
     568,   569,     0,   573,   574,   575,   581,   163,   160,   587,
     604,   605,   606,   607,   608,     0,   610,   611,   160,     0,
       0,     0,   160,   160,   157,     0,     0,     0,     0,     0,
       0,   160,   160,   157,     0,     0,     0,     0,     0,     0,
     160,   160,   157,     0,     0,     0,   160,   163,   163,   163,
     163,   163,     0,   163,   163,     0,   160,   160,   163,   163,
     163,   163,   163,     0,   163,   163,     0,   160,   160,   667,
     668,   669,   670,   672,     0,   675,   676,     0,   160,   678,
     679,   680,   681,   682,     0,   684,   685,   160,   597,   160,
       0,   603,     0,     0,   690,     0,   727,   153,     0,     0,
     153,     0,     0,     0,   738,   153,   742,   743,   153,   745,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   767,   770,   771,     0,   153,     0,     0,
       0,   787,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1067,  1046,
       0,  1053,  1054,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   142,     0,     0,    82,     0,
       0,   914,   915,   150,     0,     0,     0,  1036,  1034,  1044,
     821,   823,   150,  1118,  1159,  1158,  1160,  1202,     0,  1211,
    1241,     0,     0,  1236,  1235,   225,     0,     0,     0,   265,
       0,     0,     0,   283,   153,   391,   395,   412,   414,     0,
     422,   456,   460,   461,     0,     0,     0,     0,     0,   935,
     940,   943,   942,   946,   947,   948,   950,   954,   959,   960,
     962,   963,   966,   967,   971,   150,   153,   978,   150,   979,
     983,   150,   993,   150,     0,     0,   500,     0,   572,   583,
     163,   160,   612,   163,   163,   163,   163,   163,     0,   163,
     163,   160,   658,   659,   660,   661,   662,     0,   664,   665,
     160,   163,   163,   163,   163,   163,     0,   163,   163,   160,
     163,   627,   628,   629,   630,   632,   160,   635,   636,     0,
     163,   163,   647,   648,   649,   650,   652,   160,   655,   656,
       0,   163,   671,   160,     0,   677,   160,   686,   599,   160,
     695,   696,   142,   729,     0,   153,   732,     0,   142,     0,
     740,   744,   142,     0,   751,   752,   753,   754,   758,   759,
     755,   756,   757,     0,     0,   153,   779,     0,   142,     0,
       0,   792,   153,     0,     0,   153,   153,     0,   839,     0,
     174,   174,     0,     0,   174,     0,   174,  1025,     0,     0,
       0,     0,     0,     0,     0,     0,  1045,     0,     0,   174,
     174,     0,     0,     0,     0,     0,     0,     0,     0,   909,
       0,     0,     0,  1025,    83,     0,   174,     0,  1069,   913,
       0,     0,     0,   207,  1243,  1242,     0,     0,   229,     0,
       0,     0,     0,   298,   423,   317,   931,     0,   142,     0,
     972,   973,   977,   984,   994,   349,   317,     0,   584,   609,
     618,   619,   620,   621,   622,   160,   624,   625,   163,   160,
     666,   638,   639,   640,   641,   642,   160,   644,   645,   163,
     631,   163,   160,   637,   651,   163,   160,   657,   673,   160,
     683,   600,     0,   153,   733,     0,     0,     0,     0,     0,
     760,   761,   777,     0,     0,     0,   788,   793,     0,   802,
     803,   794,   153,     0,   175,  1025,  1025,    82,     0,  1025,
       0,  1025,   883,   142,     0,  1048,     0,  1051,  1085,  1052,
    1050,  1047,     0,  1025,  1025,    82,     0,     0,  1025,  1025,
       0,     0,  1025,   912,   910,   911,   890,  1025,  1025,  1069,
    1080,     0,  1037,   825,     0,     0,     0,   231,     0,     0,
       0,   318,   319,   339,     0,   182,   934,   357,     0,   163,
     626,   663,   163,   646,   633,   163,   653,   163,   674,     0,
     728,   153,   153,     0,   153,     0,   153,   153,     0,   153,
       0,  1025,   896,   892,  1025,     0,   897,     0,   891,  1025,
       0,  1049,     0,   894,   893,  1025,     0,     0,   888,   886,
    1025,   142,   887,   889,   895,  1080,  1031,     0,     0,  1070,
    1078,  1117,     0,     0,     0,   261,   284,   287,   285,     0,
       0,   142,   183,   184,   933,   545,   623,   643,   634,   654,
     153,   731,   737,     0,   750,   747,   778,   783,     0,   798,
       0,   901,   885,    82,     0,   899,  1086,     0,   884,    82,
       0,   900,     0,  1032,  1082,  1084,     0,  1077,     0,     0,
     266,     0,     0,     0,     0,   182,     0,   734,   142,   748,
     780,   812,  1025,     0,     0,  1025,     0,   153,  1083,  1079,
     230,     0,     0,     0,     0,     0,   932,   706,   142,   735,
     749,   142,   781,   903,     0,  1025,   902,     0,     0,   232,
     277,     0,   276,     0,   736,   782,    82,   904,    82,  1025,
     275,   274,  1025,  1025,   898,   906,   905
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1377,   172,   152,  1224,  2453,  2454,   420,   421,
     422,   423,   153,   154,   155,    91,   784,   443,  1174,  1641,
    1314,  1327,  1310,  1884,  2545,  1374,  2664,  1544,   334,   737,
     740,   743,   751,    63,   357,   363,   367,   370,    68,   373,
      75,   388,   384,   378,   395,    82,   400,    92,    98,   405,
     407,   409,   477,   838,  1610,   411,   414,   105,   430,   156,
     158,  2593,   174,   214,   466,   827,   468,   478,   830,   835,
     480,   482,   841,   485,   843,   496,   846,   848,   499,   503,
     507,   509,   512,   516,   543,   539,  1237,   530,   865,   870,
     862,  1225,   875,   533,   549,   552,   557,   562,   570,   904,
     906,   908,   910,   575,   914,   217,   577,  1711,   235,   579,
     581,   585,   590,   598,   244,  1303,   601,   252,   610,  1319,
     612,   618,   959,  1335,   954,  1752,  1341,  1339,   955,  1754,
    1344,  1346,   624,   627,   622,   254,   262,   264,   665,  1036,
    1401,  1025,  1499,  1928,  2246,  1041,  1034,   899,  1278,  1282,
    1290,  1292,  1912,   269,  1050,  1053,  1061,  2218,  2219,  2220,
    1913,  2580,  2581,  1084,  1087,  2649,  2650,  2646,  2647,  2694,
    2221,  2222,   274,   280,   288,   679,   674,   293,   298,   300,
     689,   696,  1112,  1117,   746,   734,   306,   310,   703,   316,
     710,  1549,   723,   724,  1148,  1143,  1555,  1133,  1561,  1573,
    1569,  1137,   728,   712,   322,   323,   338,  1161,   341,   347,
     761,   764,   758,   349,   352,   769
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2482
static const yytype_int16 yypact[] =
{
    4688,    94,   396,    69, -2482, -2482,  1070,  -189,   548,  1072,
     676,   169,  3251,    98,   282,  1508,   -24,  4722,   635,  1148,
   -2482,   282,   857,   154,   873,   -39,    28,   174,   176,    87,
     181,  -147,  2800,    11,   772,   194,   177,   176, -2482,   -26,
      38,  1063, -2482,   411,   478,  1136, -2482,   621, -2482,   104,
    3410,   278,   129,   511,   584,   155,   339,   653,   637,   132,
     671,   -13,   488, -2482, -2482, -2482,   944,   983, -2482,   183,
       8,   282,   -11,   137,   173, -2482,   704,   983, -2482, -2482,
      32,   983, -2482, -2482, -2482, -2482,   983, -2482, -2482, -2482,
   -2482, -2482, -2482,    22,   613,   717,   730,   160, -2482,   983,
    1243,   983,   983,   869,   983, -2482, -2482, -2482,   539, -2482,
   -2482, -2482, -2482,  4274, -2482, -2482, -2482, -2482, -2482, -2482,
     983, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  1200, -2482,   983, -2482,   769, -2482, -2482,
     282,   282,   282,   282,   282,   282, -2482, -2482,   282,   282,
     282,   282, -2482,   731, -2482,   755,  1569,   751,    19,   580,
     711,   331,  3609,   461,  4326,  3757,   854,  4274,  1970, -2482,
     515,   -42,   885,   804,    81,   543,   880,   176,    44, -2482,
     835, -2482,   690,   648,    89, -2482,   116, -2482,   617, -2482,
      -5,   843,    31, -2482, -2482,  4394, -2482, -2482, -2482,   867,
     910, -2482, -2482, -2482, -2482,   668, -2482, -2482, -2482, -2482,
     773, -2482, -2482,  4394,  3845, -2482, -2482,   406, -2482,   971,
     977,   100, -2482,   983, -2482,   980,   151,   984,    25,   596,
     991,     0, -2482, -2482, -2482,   997,  1003,   282,   282,   983,
     983, -2482, -2482,  1005, -2482, -2482, -2482, -2482, -2482,  2661,
   -2482,  1018,  1022,   983, -2482,  1028, -2482, -2482, -2482, -2482,
   -2482,   983,   960,   282,   814,   983,  1200,   983, -2482,  1032,
   -2482,  4788, -2482, -2482,   646,  1042,  1059,   983, -2482,  1064,
   -2482, -2482,   427,  1073,  4394,  1078, -2482,  1080,   983,   907,
   -2482,   441,   972,   726,   436,  1090, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  1097, -2482,     4,    36,   115,   196,   450,
   -2482,   983,   983,   141, -2482,   983,   837,  1112, -2482,   983,
     983, -2482,  1152,    10,    17,  1157,  1200, -2482, -2482, -2482,
     951,   983, -2482, -2482, -2482, -2482,   983, -2482,  1162,  1163,
   -2482,   983,  1013, -2482, -2482, -2482, -2482, -2482, -2482,   983,
   -2482, -2482,   983, -2482, -2482,   537,   537,  1173, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,   986,
     983,   983,  1180,  1190,  1207, -2482, -2482,   983,   983,   983,
   -2482,   983, -2482,  1213, -2482, -2482, -2482, -2482,  1044, -2482,
    1216, -2482,  4394,  1218, -2482,   983, -2482, -2482, -2482,   983,
    1215,  1220,  1220,  4394,   983,   983,   983,   983,   983,   983,
   -2482,   983,  4274,  1243,   983,   983, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  1243,   983, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482,  1221, -2482,   962,    -8,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,   661,
   -2482, -2482, -2482,  1068, -2482,   391,    84,    84, -2482, -2482,
   -2482,  1233, -2482,  1237, -2482, -2482,   570, -2482,  1069, -2482,
   -2482, -2482,  1082, -2482, -2482,  1200, -2482,   983,   983, -2482,
    4394,  4394,  1200, -2482, -2482,  1200, -2482, -2482, -2482, -2482,
    1200, -2482, -2482,  4394,  1200,   983, -2482, -2482,  4394, -2482,
   -2482,   452,  1060,     6, -2482, -2482,  1065,  4394,   178, -2482,
   -2482, -2482, -2482, -2482,  1253,  1256,  1261, -2482,  1076, -2482,
   -2482, -2482,   983, -2482, -2482,   499, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,    -5, -2482, -2482, -2482, -2482, -2482, -2482,
    1081,  1086, -2482, -2482,  1217,  1224,  1225, -2482, -2482,  1071,
   -2482,   983,  1282,  1074,  4788, -2482,  1200, -2482,  1291, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  4394,  4394,  4394,  4394, -2482, -2482,  1298,
     282, -2482, -2482,  1301,  1307,  1117,   983, -2482,    65,  1227,
   -2482,  1310, -2482,   188,  1238,  4726,   381,  1319, -2482,  1330,
   -2482,  1333, -2482,   216, -2482,  1336,  1338, -2482,  1342, -2482,
   -2482, -2482,   983, -2482,  4788,  4167,  1429,   534,  1347,   280,
    1248, -2482, -2482, -2482,  1337,   605,  1360,  1366,    14,   983,
     438,   633,   121,  4394,   282,  1638,   647,    15,    51,   272,
      23, -2482,  1355,  1357,  1373, -2482, -2482, -2482, -2482, -2482,
     983,   983,   983,   983, -2482, -2482,   983,  1200,   983, -2482,
     983,  1243,   983,  1379,  1200, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  1387,   387,   412, -2482, -2482, -2482,  1393,
   -2482, -2482, -2482, -2482,  1306, -2482,  1404,  1412,  1331,  1415,
   -2482,  1417, -2482,  1418,  1340,  1419,   494,   546,   572,   390,
     578,  1416,   595, -2482, -2482,  1420,  1425,  1427, -2482, -2482,
    1428, -2482, -2482, -2482, -2482,  1430, -2482, -2482,  1434, -2482,
   -2482,  1435, -2482, -2482, -2482, -2482, -2482, -2482, -2482,   983,
     983, -2482,   983,  1056,   983,   983, -2482,  1765, -2482,  1049,
    1437, -2482,  1104,  1440, -2482, -2482,   -36,   983,   983, -2482,
    1421, -2482, -2482,  1441,  1026,   983,  1422,   807, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482,  1443,  1446,   983,   983,   983,  1450,   282,  1452,
    1453,  1200,  4394, -2482, -2482, -2482, -2482, -2482,  1200, -2482,
   -2482,   983,   983,   983,  4394,   983,  1243,   983, -2482,   983,
   -2482, -2482, -2482, -2482, -2482,  1455,  1456, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
     461, -2482,   983, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482,  4394,   983,  1200,  1200,   -36,   -36,   -36,  1200,  1243,
     983,  1200, -2482, -2482,   983, -2482,   315,  1293,  1457,  1461,
   -2482, -2482,  1200,  1313,  1314, -2482,  1467,  1468,  1472,  1193,
     983,  4277,   614,   694, -2482, -2482, -2482,   983,    78,   145,
   -2482,  1228, -2482,  1638,  1229,   447,  1214,   126, -2482, -2482,
     983, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482,   983,  1497, -2482, -2482, -2482,   -36, -2482, -2482, -2482,
   -2482, -2482,  4354, -2482, -2482,  1499,  1501,   983,  1514,  1515,
    1516,   366,   366,   -71,  1518,  1519,  1520,  1521,  1257,  1260,
    1526,  1529,  1532,    59,    59,   -71,  1534,  1536,   -71,  1538,
    1539,  4759,  1540,  1541, -2482, -2482,  1542,  1544,   530, -2482,
    1537,  1546,  1550,  1551,   366,   -71,  1547,  1552, -2482,  1557,
   -2482, -2482,  1200,   999,  1391,  1268,   -32,  1334,  1462,  1502,
     -29,  1567,   343,  1436,  1470,   745,   816,  1543,   394,  1343,
    1481,  1582,  1380,    16,    50,   153,   -52,  4394,  1638,  1548,
     -68,  1356,  1390,  1600,    29, -2482, -2482,   362,  1602,  1603,
   -2482, -2482, -2482,  1604,  1401,    54,  1638,  1402, -2482, -2482,
   -2482,   282,  1610,  1611,   983, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482,     1, -2482,  3200, -2482,   983, -2482,
     983, -2482, -2482, -2482, -2482,   983,   983,   983,   280,  4394,
   -2482,  1612,  1147, -2482, -2482,   983, -2482, -2482,   983,  4394,
     983, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482,   282,   983, -2482,   983,   280,
    1613, -2482,   983,   983, -2482,   282, -2482, -2482, -2482,   779,
    1614,  1616, -2482, -2482, -2482, -2482,   983,   983, -2482, -2482,
    1243,   983,   983, -2482, -2482, -2482, -2482,  1620,   983, -2482,
     983,  1505, -2482,   983, -2482,   983,  1517, -2482,  1623, -2482,
    1170,  1170,   620,  1170,  1624, -2482,   681, -2482, -2482,  1625,
    1627,   687,  1631, -2482,  1632,  1633,  1635, -2482,   708,   742,
    1636,  1641,  1639, -2482, -2482,  1642,  1644,  1648, -2482,  1170,
    1170,  1170,   983, -2482, -2482, -2482,   983, -2482,   983,   727,
    4394, -2482,   983, -2482,  4788,  1200, -2482, -2482,  1650, -2482,
   -2482,  1651, -2482, -2482, -2482, -2482,  1647,   814, -2482,   983,
    1649,   983,   983,   983,   975, -2482,  1630,  1658,   983,   983,
      -7,  1659,   282,   282, -2482,  1200,   983,  1661,  1663,  1664,
    1200,  4394, -2482,   983, -2482, -2482, -2482,   983,   983,   983,
    1200,  4394,   -36, -2482, -2482, -2482, -2482,  1243,   983,  1666,
     -36,   983,  1615,  1634,   477, -2482,  1668, -2482, -2482,   950,
    3292,   983, -2482,   983,  1667,  1674,   983, -2482,  1672,  1087,
    4274,  1444,   542,  1445,    27,  4394,   639, -2482,   358,  1525,
     118,   723,  1449,   164, -2482, -2482,   473,  1527,   658,  1561,
     402,  1638,   836, -2482,  1682,  1448, -2482,   607, -2482, -2482,
   -2482, -2482,  1638,  1483, -2482, -2482, -2482, -2482, -2482,   983,
   -2482,   983, -2482, -2482,   983,   983, -2482,   983, -2482,   983,
   -2482, -2482, -2482, -2482,  1498,   983, -2482,   983,   109, -2482,
   -2482,  1693,  1694, -2482,   983,   366,   366,   366, -2482, -2482,
   -2482, -2482, -2482, -2482,  1698,   366,   366,   366,   536, -2482,
   -2482,    59,   366,   366,   366, -2482, -2482,   366,   366,  1702,
     366,   366,  1703,    59,   636, -2482,  1704,  1707,  1708, -2482,
     724, -2482,   817,   929, -2482,  1000, -2482,  1447,  1712,  1714,
    1715,    59,    59,   -71,  1722,  1723,   -71,  1727,  1724,  1730,
     366,   366, -2482,  1731,   366,   366, -2482,  1733, -2482, -2482,
   -2482, -2482, -2482, -2482,   282, -2482, -2482, -2482,  4274,  1015,
     282,   983,  1167,  1353,   416, -2482, -2482, -2482,   758, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482,  1734,   282,   983, -2482,   282,  1735,   983,  4394,   282,
    1377,  1509,  1511,   218,   248,  1512,   250,  1432,  1451,  1740,
    1745,  1747,  1502,  1748,  1749,  1750,  1454,  1458,  1197,  1752,
     282,   983,  1410,  1403, -2482, -2482,   282,  4394, -2482, -2482,
    4394,   983,    61,  1756,   282,   983,  1200,   282, -2482,  1760,
    4394,  4394,   983, -2482, -2482, -2482,   282,   282,  4394, -2482,
   -2482, -2482, -2482, -2482, -2482,  4394,   983,   282, -2482, -2482,
   -2482,   983, -2482, -2482,  1761,   983,  1486,   180,   983,  1545,
     983,   192,   983, -2482,   983,  1553,  1554,   983,   983,   983,
     983,   983,   983,   983,   983,    21,   983,   983,  1555, -2482,
     983,   983,   983,   983, -2482,  4394,  1200,  1763,  4394,  4394,
     983,   983,  1200, -2482,   983,   983,   983,  4394, -2482,   983,
     983, -2482, -2482, -2482,  1767, -2482, -2482, -2482, -2482, -2482,
   -2482,  1757,   983,   983, -2482,   983,   983, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482,  1769,  1774,  1776, -2482,
   -2482,  1170,  1777,  1778,  1781, -2482,  1782,  1784,  1786,  1787,
    1785, -2482,  1789, -2482, -2482, -2482,  1792,  1796,  1790, -2482,
    1797,  1798,  1800, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,   983,   983,   983, -2482,  1200,   983,  1200,
   -2482, -2482, -2482,   814,   983,  1200,   983,   983,   983, -2482,
     983,   983,  1801,   983,  1803,  1775,   983,   983, -2482, -2482,
    1804,  4394, -2482, -2482, -2482,   983, -2482, -2482, -2482, -2482,
    1200, -2482,  1179,   983,  1179,   -36,  1200,  4394,   983,   983,
    1807, -2482, -2482, -2482, -2482, -2482,   983, -2482, -2482, -2482,
   -2482, -2482,  4394,  1200,  4394,   983,  1810, -2482, -2482,  4394,
    1814,  1816,  1818,  1819,  4394,  1200, -2482,  4394, -2482,  4394,
    4394,  4274,  4394,  1200, -2482,  4394, -2482, -2482,  4394, -2482,
   -2482,  4274,  4394, -2482,  4394,  4394,  4274,  4394, -2482,  4394,
    4394,   983, -2482, -2482, -2482,  4394,  4394,  4394, -2482, -2482,
    4394,  4394, -2482, -2482, -2482, -2482,  4394,  4394, -2482, -2482,
   -2482, -2482, -2482,   983,   983, -2482, -2482,  1821,   983, -2482,
   -2482,  1822,  1824, -2482,   983, -2482, -2482, -2482,   366, -2482,
   -2482, -2482,  1825,  1826,  1828, -2482, -2482,   -71,  1830,  1831,
    1832,   366, -2482, -2482, -2482, -2482, -2482,    59, -2482, -2482,
    1835,   366,  1845,  1846,  1847,    59,    59,   -71,  1849,  1850,
    1851,  1050, -2482,  1375, -2482,  1500,  1559,  1852,  1853,  1854,
      59,    59,   -71,  1856,  1858,   -71,  1859,  1562,  1861,  1863,
    1864,    59,    59,   -71,  1866,  1867,   -71,  1868,  1588,  1869,
    1870,  1871,    59,    59,   -71,  1873,  1875,   -71,  1876,  1878,
    1881,  1882,    59,    59,   -71,  1884,  1885,  1886,    59, -2482,
   -2482, -2482, -2482, -2482,  1888, -2482, -2482,  1890,    59,  1891,
    1892, -2482, -2482,   366, -2482, -2482,  1893, -2482,  1200, -2482,
    4394,   983, -2482,   983,  4394,   983,  1905,  1391, -2482, -2482,
   -2482, -2482, -2482, -2482,  1918, -2482,  4394,   282,  1920,  4394,
    1200, -2482,  1925,  1391,   983,   983,   983,   983,   983,   983,
     983,   983,   983,  1927,  1928, -2482, -2482, -2482,  1929, -2482,
   -2482, -2482,  1931,  1932, -2482, -2482, -2482, -2482,   983,  4394,
     983,  1933,  1391,   282,  1200,  1200, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482,   983,  1243, -2482,
   -2482,  1200,  1200,   983, -2482, -2482,  1200,  1200, -2482, -2482,
   -2482, -2482,   983,   983,   983,   983,   983,   983,   983,   983,
     983,   983,  2448, -2482,   983,   983,   983,   983,   983,   983,
     983,   983,   983,   983,   983,  2864,  1934,   983, -2482,   983,
     983,   983,  1939,  1940, -2482, -2482,  1200,   -36,  1941,  1200,
    1200, -2482, -2482,  1243,   983, -2482,  1942,  1200, -2482, -2482,
   -2482,  1943, -2482, -2482, -2482, -2482,  1170,  1170,  1170, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482,  1391,   983, -2482, -2482,   983,
   -2482,   983,  1200,   983, -2482,  1243,   983, -2482,   983, -2482,
    1793,  1944,  1945, -2482,  1947,   983,   983,  1948,  1200,  4394,
   -2482, -2482,   983, -2482,   983, -2482,   -36,   950,   983,  1949,
   -2482,   983,  1200, -2482,  1200,    -5, -2482, -2482,  1950,  1951,
    1952,  1953,  1200, -2482,   950,   950,   950,  1200, -2482,   950,
     -36,   950,   950,  1200, -2482,   950,   950,   950,  1200, -2482,
     950,   950,  1200,  4394,   950,  1200,   950,   950,  1200,   950,
    1200, -2482, -2482,  1955,    -5,  1956, -2482,   983, -2482, -2482,
   -2482, -2482,  1958, -2482, -2482, -2482, -2482,   366,    59, -2482,
   -2482, -2482, -2482, -2482, -2482,  1959, -2482, -2482,    59,  1960,
    1961,  1962,    59,    59,   -71,  1964,  1965,  1966,  1967,  1972,
    1974,    59,    59,   -71,  1971,  1977,  1979,  1981,  1982,  1983,
      59,    59,   -71,  1986,  1987,  1989,    59,   366,   366,   366,
     366,   366,  1991,   366,   366,  1992,    59,    59,   366,   366,
     366,   366,   366,  1994,   366,   366,  1996,    59,    59, -2482,
   -2482, -2482, -2482, -2482,  1999, -2482, -2482,  2000,    59, -2482,
   -2482, -2482, -2482, -2482,  2002, -2482, -2482,    59, -2482,    59,
    2003, -2482,  2005,  2006, -2482,  4788, -2482,   950,  2008,  4394,
     950,   983,  4394,  2011, -2482,   950, -2482, -2482,   950, -2482,
    4394,  2014,   983,   983,   983,   983,   983,   983,   983,   983,
     983,   983,   983, -2482, -2482, -2482,  4394,   950,   983,  4394,
    2015, -2482,  1243,  1243,  4394,  1243,  1243,  4394,  4394,  1243,
    1243,   983,   983,   983,   983,   983,   983,  1391,   983,   983,
     983,  1489,  1533,  1586,  1590,  1601,  1606,  1617,  2448, -2482,
    1673, -2482, -2482,  1391,   983,   983,   983,   983,  1391,   983,
     983,   983,   983,   983,   983,  1200,   983,  1563,  1391,   983,
     983, -2482, -2482,   -36,   282,  2017,  2018, -2482, -2482, -2482,
   -2482, -2482,   -36,  2019, -2482, -2482, -2482, -2482,   983, -2482,
   -2482,  1243,   983, -2482, -2482, -2482,  1047,  2020,  2023, -2482,
     983,  2025,  1179, -2482,   950, -2482, -2482, -2482, -2482,  2027,
   -2482, -2482, -2482, -2482,  2026,  2029,  2031,  4394,  2032, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482,   -36,   950, -2482,   -36, -2482,
   -2482,   -36, -2482,   -36,  2033,  2030, -2482,   983, -2482, -2482,
     366,    59, -2482,   366,   366,   366,   366,   366,  2035,   366,
     366,    59, -2482, -2482, -2482, -2482, -2482,  2036, -2482, -2482,
      59,   366,   366,   366,   366,   366,  2037,   366,   366,    59,
     366, -2482, -2482, -2482, -2482, -2482,    59, -2482, -2482,  2038,
     366,   366, -2482, -2482, -2482, -2482, -2482,    59, -2482, -2482,
    2039,   366, -2482,    59,  2041, -2482,    59, -2482, -2482,    59,
   -2482, -2482,  1200, -2482,  4394,   950, -2482,  2042,  1200,   983,
   -2482, -2482,  1200,   983, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,   983,   983,   950, -2482,  2044,  1200,   983,
    1243, -2482,   950,   983,  1243,   950,   950,  4394, -2482,   983,
    2045,  2045,   983,   983,  2045,  1391,  2045, -2482,  4394,  1502,
    2046,  2048,  2050,  2051,  2052,  2049, -2482,   282,  1391,  2045,
    2045,   983,   983,  1391,   983,   983,   983,   983,   983, -2482,
    1243,   983,  2053, -2482, -2482,   983,  2045,   282,    13, -2482,
    2054,   282,  2056, -2482, -2482, -2482,  2059,   983, -2482,  2063,
    2057,  1954,   983, -2482, -2482,    33, -2482,  2064,  1200,  4394,
   -2482, -2482, -2482, -2482, -2482, -2482,    33,   983, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482,    59, -2482, -2482,   366,    59,
   -2482, -2482, -2482, -2482, -2482, -2482,    59, -2482, -2482,   366,
   -2482,   366,    59, -2482, -2482,   366,    59, -2482, -2482,    59,
   -2482, -2482,   983,   950, -2482,  4394,  4394,   983,  4394,   983,
   -2482, -2482, -2482,  4394,  4394,   983, -2482, -2482,  4394, -2482,
   -2482, -2482,   950,  2066, -2482, -2482, -2482,  1391,   983, -2482,
    2096, -2482, -2482,  1200,  2097, -2482,  2100, -2482, -2482, -2482,
   -2482, -2482,  2101, -2482, -2482,  1391,   983,  2103, -2482, -2482,
     983,  4394, -2482, -2482, -2482, -2482, -2482, -2482, -2482,    13,
    1592,  1638, -2482, -2482,  2104,  2105,  2107, -2482,  2095,  2110,
      41, -2482, -2482, -2482,  4394,    34, -2482, -2482,  2111,   366,
   -2482, -2482,   366, -2482, -2482,   366, -2482,   366, -2482,  4788,
   -2482,   950,   950,   983,   950,  2112,   950,   950,   983,   950,
     983, -2482, -2482, -2482, -2482,  2114, -2482,   983, -2482, -2482,
    2115, -2482,   983, -2482, -2482, -2482,  2117,   983, -2482, -2482,
   -2482,  1200, -2482, -2482, -2482,  1592, -2482,  1744,  1762,  1638,
   -2482, -2482,  2118,  2119,  2121, -2482, -2482, -2482, -2482,   468,
     468,  1200, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
     950, -2482, -2482,  2123, -2482,  4274, -2482, -2482,  2124, -2482,
    1391, -2482, -2482,  1391,   983, -2482, -2482,   983, -2482,  1391,
     983, -2482,  4394, -2482,  1744, -2482,   282, -2482,  2125,  2126,
   -2482,   983,   983,   983,   983,    34,  2127,  4274,  1200, -2482,
    4274, -2482, -2482,   983,  2130, -2482,   983,   950, -2482, -2482,
   -2482,  2131,  2132,   983,  2133,   983, -2482, -2482,  1200, -2482,
   -2482,  1200, -2482, -2482,  2135, -2482, -2482,  2136,  2137, -2482,
   -2482,  2138, -2482,  2139, -2482, -2482,  1391, -2482,  1391, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2482, -2482,    -3, -2482,   274, -2482, -1644,  -890,  1477, -2482,
     787,  -383,  1829,   -49,   102, -1615,  1743,  1817,  -742, -1454,
    -827,   714,  1038, -2482, -1108, -2482,  -655, -1046, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482,  -468,  -473, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482,  -357, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -1420, -2482, -2482, -2482, -2482, -2482,  -633, -2482, -2482, -2482,
   -2482, -2482, -2482,    48, -2482, -2482, -2482, -2482,   -83,  -652,
   -1176,  -438, -2482, -2482, -2482, -2482,  -504,  -499, -2482, -2482,
   -2481, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482,  1433, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482, -2482,
   -2482, -2482, -2482, -2482, -2482, -2482
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1214
static const yytype_int16 yytable[] =
{
      67,   346,  1858,  1075,   839,   625,  1473,  2002,   104,  2004,
     867,    64,    65, -1068,   759,   106,   289,  1049,  1052,   365,
    1079,   762,    64,    65,    64,    65,  1925,   403,  1088,   285,
     613,  1044,   106,   255,  1455,   303,   398,   309,   731,  1608,
     106,    64,    65,  1436,    64,    65,   340,   573,  1661,   351,
     818,   109,   356,    64,    65,   276,   362,    64,    65,   369,
     821,  1172,  1449,   372,   374,  2591,  2662,   383,  1081,  1444,
     390,   394,    64,    65,   397,  1545,  1325,  1550,   401,   928,
     929,    64,    65,   402,  1378,   302,  1438,   536,  1877,  1380,
    1463,    76,  1402,  1312,   256,   825,   415,   419,   424,   425,
     429,   431,   735,  1580,  1581,  1582,   604,    64,    65,  1878,
     546,   732,  1879,  1214,  1215,  1216,   257,   435,  1329,   106,
     173,  1332,  1089,  1880,    64,    65,   930,   386,  1090,  1709,
     111,   157,    64,    65,   287,    64,    65,   558,  1363,  1671,
      64,    65,   614,  1293,    64,    65,  1881,   111,    64,    65,
     554,   270,   444,   271,  1450,   111,   608,  1054,    64,    65,
      54,  1055,  1283,  1882,   387,   412,  2695,   258,   531,   537,
     245,   868,    64,    65,  1298,   476,    64,    65,   826,   263,
     497,   738,  1439,    64,    65,  1676,  1464,   375,  1445,   253,
    1313,   413,   277,   939,   379,    64,    65,   278,   299,   279,
     106,   538,   940,   941,  1381,   469,   733,  1403,   117,    99,
    1451,   470,   114,  2718,   355,   434,   615,  1326,   115,   116,
     605,  1173,   836,  1045,  1294,   547,   574,  2656,   100,   114,
     962,   307,  1056,   265,   111,   115,   116,   114,  1437,  1846,
     606,  1286,   684,   115,   116,   545,   404,   275,   471,   942,
     559,   391,   304,  1057,   931,   932,   632,   633,   532,   837,
    1082,  1609,   741,  1662,   366,   301,   626,   616,   272,  1848,
     668,  1851,   472,  1456,   399,   305,   106,   963,   670,   673,
     101,   676,   680,  1280,   682,   498,   106,   506,   159,   511,
     515,   617,   760, -1068,   692,   236,  1080,   542,  1103,   763,
     261,  1474,   119,  1046,   702,   704,   380,   292,   290,   873,
    2592,  2663,   571,   869,  1058,   111,   114,   473,   291,   119,
    1091,  1926,   115,   116,   933,   259,   308,   119,   747,   748,
     750,   548,   752,   389,   934,   935,   755,   756,  1440,  2657,
    1083,  1710,  1465,  1027,   392,   385,  1447,   768,   770,   381,
     382,   149,   560,   771,  1672,   150,   151,    66,   774,   776,
     474,   475,   102,   749,  1467,   936,   777,   555,   149,   778,
    1405,   260,   150,   151,   273,   376,   149,   943,   944,   561,
     150,   151,   474,  2658,  1028,  1666,   678,   788,   789,  1457,
     556,   111,   339,   609,   793,   794,   795,   114,   796,   266,
    1677,   111,  1904,   115,   116,   964,   119,  1883,    55,  1059,
     599,  1442,   803,   267,  1909,  1505,   804,   350,  1443,   393,
     361,   809,   810,   811,   812,   813,   814,  1108,   815,   377,
     419,   819,   820,  1202,   446,   447,   448,   449,   450,   451,
     419,   822,   452,   453,   454,   455,  1517,   945,  1222,    56,
      64,    65,  1113,   103,  1847,   149,   863,   946,   947,   150,
     151,   317,   948,   744,    64,    65,   874,    57,   956,   832,
    1627,    64,    65,   114,   268,   965,  1218,  1138,  1631,   115,
     116,  1635,   324,   114,  1849,   966,  1852,   119,   949,   115,
     116,    64,    65,  1827,   851,   852,    58,   725,  1109,   483,
    1678,  1027,   706,   881,   882,  1959,   348,   484,   109,  1406,
     318,   353,   860,  1029,    59,  1430,   967,   109,    60,   319,
    1843,  1828,  1308,  1114,  1667,   915,  1804,  1030,  1031,  1807,
      61,   630,   631,   109,   817,  1347,   149,   957,  1020,   880,
     150,   151,  1028,  1872,  1348,  1349,  1139,   320,   540,  1309,
    1722,  1723,    77,  2278,  1085,   713,   726,   675,  1223,   883,
     517,   707,   833,   119,  1021,   884,   953,   779,   911,  1685,
    2290,  2291,  2292,   119,   518,  2294,   694,  2296,  2297,  1407,
    1110,  2299,  2300,  2301,  1458,   972,  2303,  2304,    78,   354,
    2307,  1350,  2309,  2310,  1668,  2312,   519,  1724,   600,   109,
     736,   739,   742,   927,   358,  1115,   836,  1129,   541,  1688,
    1829,   368,   149,   885,   715,   520,   150,   151,  1032,  1033,
    1698,  1408,   149,   864,  1686,   335,   150,   151,   886,   971,
    1431,   780,   521,  1134,  1695,   522,  1669,   834,   745,  1140,
    1679,   360,   887,   837,   406,  1038,  1047,  1111,   888,  1060,
    1742,  1743,  1288,   889,   563,   900,  1145,  2472,   359,    79,
    1830,   523,   524,  1658,   564,   117,  1130,  1095,  1096,  1097,
    1098,  1029,  1116,  1099,   117,  1101,   364,  1102,   419,  1104,
    1269,  1546,   695,   708,    62,  1030,  1031,  1076,  1687,   619,
     117,   565,  1135,  1048,  1022,  1680,  1027,  1744,  1141,   781,
     685,   321,  1131,  2383,   890,   727,  2386,   620,  1165,   396,
     709,  2390,   582,   525,  2391,  1146,  1039,  1528,   215,  1351,
    1352,   526,   408,   891,  1274,  1725,  1726, -1213,   892,  1756,
     893,  1586,   432,  2406,   216,   410,   686,  1028,  1757,  1758,
    1547,    80,  1552,  1270,  1023,   336,  1156,  1157,  1558,  1158,
    1160,  1162,  1163,   894,   895,   583,   117,  1051,  1077,    93,
    1664,   896,   844,   721,  1175,  1176,   566,  1411,  1271,  1566,
    1024,  1180,  1181,   445,  1696,    94,  1032,  1033,  1659,   897,
     527,   528,   621,   782,  1522,  1759,   687,   713,   783,  1353,
      81,  1187,  1188,  1189,  1412,  1727,  1523,  1413,  1040,  1354,
    1355,  1553,   567,  1570,  1356,  1728,  1729,  1559,  1197,  1198,
    1199,  1183,  1201,   419,  1203,  1132,  1204,    64,    65,  1184,
    2473,   457,  1767,   845,   337,  1745,  1746,  1414,  1567,  1697,
    1357,  1768,  1769,   107,  1628,   898,  1730,  1207,  1419,  1209,
    1078,  1136,   294,   714,  1673,  1272,   715,  1142,   456,  1211,
      95,   529,  2481,   828,  1275,  1415,   419,  1219,  1416,   584,
     479,  1221,  1571,  1831,  1147,  1420,  1029,   568,  1421,   467,
     109,  1422,    64,    65,   923,  1665,  1236,  1238,  1770,   481,
    1030,  1031,   716,  2005,  1279,  1281,  1284,   508,   688,  1548,
     534,    96,  1289,   535,  1273,  1747,   544,  1295,  1423,   246,
    2062,   550,  1338,  2624,  1276,  1748,  1749,   829,  1296,   426,
    2254,  2255,  2256,  1760,  1761,   110,  1682,   717,   569,   551,
    2075,  2635,   586,  1683,  1304,    97,  1424,   553,  1063,  1425,
    1277,  2524,   572,  1086,  1778,  2112,  1750,  2163,  2115,   578,
     295,   580,  1208,  1779,  1780,   237,  2123,    64,    65,  2126,
    1554,  2532,  1832,  2171,    64,    65,  1560,  2134,  2537,  1674,
    2137,  2540,  2541,    64,    65,   718,  1689,  2144,   719,  1417,
     112,  1032,  1033,   238,  1638,  1639,   602,  1568,    64,    65,
     427,   603,  2190,  1762,   607,   247,    64,    65,   587,   611,
    1781,  1441,   720,  1763,  1764,   721,   623,   248,  1765,  1418,
     671,   628,  1833,  1690,   705,   722,  1771,  1772,   629,  2554,
     634,  1572,  1466,   296,  1789,  1790,    64,    65,    64,    65,
    1820,  1472,   297,   666,  1766,   775,   667,   117,   588,    64,
      65,   249,   118,   669,  1602,  1500,   683,  1501,  1179,  2712,
    1426,   239,  1502,  1503,  1504,  2715,   690,  1640,   798,   799,
      64,    65,  1510,  1166,  1167,  1511,   240,  1513,  1691,    64,
    1159,  1791,   428,   691,  2079,  2080,   589,   371,   693,  2610,
    1427,   672,  1191,  1515,   767,  1516,  1773,   250,   697,  1519,
    1520,  1368,   699,    64,    65,  2257,  1774,  1775,  2620,   311,
     251,  1776,   711,  1526,  1527,   729,  1428,   419,  1529,  1530,
      83,   730,  2752,   753,  2753,  1532,  2466,  1533,  1169,  1170,
    1535,  2081,  1536,   241,  1692,  1589,   754,  1777,  1782,  1783,
     700,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,  1583,
    1369,  1508,  1509,  1584,   242,  1585,   757,  2671,  2672,  1588,
    2674,   765,  2676,  2677,   243,  2679,   772,   218,   773,  1649,
      64,    65,  1824,   325,  1594,   312,  1597,   786,  1599,  1600,
    1601,  1603,   787,   326,   790,  1606,  1607,   313,  1784,  1792,
    1793,   701,   219,  1615,   791,  2244,    64,  1235,  1785,  1786,
    1621,  1864,  1865,  1787,  1622,  1623,  1624,    83,   806,   807,
     327,   792,  1539,  1540,   419,  1629,  2706,   797,  1632,  1370,
    1371,   800,    84,   802,   416,   220,   823,   824,  1644,  1788,
    1645,   418,   221,  1647,  1372,   436,   831,   840,  1650,  2082,
    2083,   842,   222,   223,    85,   847,    64,    65,    86,   224,
     849,  2552,   416,   417,   418,   866,    69,  2328,   876,  1794,
     871,   877,    70,  2738,  2277,   878,  2337,   314,   901,  1795,
    1796,   879,   225,   902,  1373,  2346,  1700,  2576,  1701,  1596,
     315,  1702,  1703,   903,  1704,   328,  1705,   912,  2295,   226,
     905,   907,  1707,   909,  1708,  1469,   917,   913,    87,    71,
    1797,  1714,   922,   227,   228,   924,   437,  1651,  1652,  2084,
     229,   925,   926,  2546,   937,   938,  2549,  2425,  2551,  2085,
    2086,   329,  1653,    72,   958,   950,  1636,   438,   439,    84,
     230,  2563,  2564,  2438,   960,   440,    88,   961,  2443,  1541,
    1542,   968,  1656,   969,    89,    90,   970,  1035,  2578,  1514,
    2087,    85,  1026,   441,  1037,  2001,    64,    65,  1826,  1521,
    1375,  1376,  1654,   442,  1042,   330,   231,  1543,    73,  2622,
    2623,  1043,  1092,  2626,  1093,  2628,  1821,  1094,  1823,  1825,
      64,    65,  1842,  1105,  1375,  1376,   331,  2633,  2634,  2088,
    2089,  1107,  2638,  2639,    64,    65,  2642,  1118,  1375,  1376,
    1836,  2643,  2644,  1119,  1839,    87,    64,    65,  1871,  1120,
    1375,  1376,    74,    64,    65,  1869,   232,  1121,  1122,  1123,
    1144,   332,  1124,  1125,  1127,  1149,   233,  1126,  1868,  1870,
    1150,  1151,  1152,  1177,  1182,  1153,  2090,   333,  1876,  1154,
    1155,  1168,  1887,    88,  1171,  2681,  1178,  1185,  2682,  1893,
    1186,    89,    90,  2685,  1190,   234,  1192,  1193,  1226,  2688,
    1205,  1206,  1227,  1898,  2691,  1228,  1612,  1613,  1900,  1230,
    1231,  1232,  1902,  1233,  1905,  1906,  1234,  1908,  1910,  1911,
    1819,  1914,  1285,  1287,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1927,  1929,  1930,  1009,  1291,  1932,  1933,  1934,
    1935,  2457,  1297,  1301,  1379,  2195,  1302,  1941,  1942,  1010,
    2461,  1944,  1945,  1946,  2097,  2098,  1948,  1949,  1011,  1305,
    1306,  1307,  1315,  1316,  1320,  1317,  1318,  1321,  1012,  1952,
    1953,  1322,  1954,  1955,  1323,  2550,  2733,  1324,  1330,  2736,
    1331,  1358,  1384,  1333,  1334,  1340,  1342,  1343,  2562,  1345,
    1359,  1364,   160,  2567,   161,  1360,  1361,  1365,  1013,  2747,
    2249,  2099,  1366,  2480,  2091,  2092,  2482,  1383,  1385,  2483,
    1382,  2484,  1404,  2754,  1409,  1410,  2755,  2756,  1014,  1432,
    1975,  1976,  1977,  1429,   162,  1979,  1433,  1434,  1448,  1435,
    1981,  1984,   163,  1986,  1987,  1988,  1452,  1989,  1990,  1453,
    1992,  1386,  2263,  1995,  1996,  1454,  1459,  1387,  1460,  1461,
    1462,  1468,  1999,  1388,  1470,  1471,  1534,  1507,  1518,  1524,
    2003,  1525,   458,  1015,  1531,  2008,  2009,  1538,  1537,  1551,
    1556,  1389,  1557,  2011,  2093,  1562,  1604,  1563,  1564,  1565,
     459,  1574,  2015,  1576,  2094,  2095,  1575,  1577,  1817,  1578,
     164,  1390,  1579,  1633,  1822,  1591,  1592,   460,  1328,  1593,
    1016,  1598,  1605,  1670,  1611,  1616,  1391,  1617,  1618,   461,
    1630,  1646,  1634,  1637,  -432,  2096,  1835,  1648,  2043,  1837,
    1657,  1660,  1684,  1841,  1017,  1675,  1693,   462,  1699,  2100,
    2101,   463,  1694,  1706,  1681,  1983,  1392,  1712,  1713,   165,
    2051,  2052,  1718,   464,  1867,  2054,  1737,  1740,  1903,  1751,
    1873,  2057,  1753,  1755,  1798,   166,   167,  1799,  1886,  1800,
    1801,  1889,   168,  1018,   169,  1019,  1805,  1806,  1809,  1064,
    1894,  1895,  1808,  1393,  1810,  1813,  1853,  1065,  1816,  1834,
    1838,  1899,   465,  1066,  1855,  1844,  1394,  1845,  1850,  1856,
     170,  1857,  1859,  1860,  1861,  1854,  1866,  1395,  1862,  2102,
    1885,  1951,  1863,  2028,  1067,  1890,  1901,  1907,  1938,  2103,
    2104,  1164,  1950,  2034,  1956,  1915,  1916,  1931,  2039,  1957,
    1958,  1994,  1960,  1961,  1396,  1962,  1963,  1068,  1964,  1967,
    2711,  1965,  1966,  1968,  1971,  1069,  1397,  1969,  1398,  1399,
    2105,  1970,  1972,  1973,  1974,  2266,  1991,  1993,  1997,  2410,
    2411,  2010,  2413,  2414,  2016,   171,  2417,  2418,  2158,  2018,
    2159,  2019,  2161,  2020,  2021,  2053,  2106,  2055,  2056,  2117,
    2059,  2060,  1070,  2061,  2063,  2064,  2429,  2065,  1400,  2068,
    1071,  2172,  2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,
    2070,  2071,  2072,  2076,  2077,  2128,  2078,  2107,  2108,  2109,
    2113,   286,  2114,  2452,  2116,  2186,  2118,  2188,  2119,  2120,
    2124,  2125, -1081,  2127,  2129,  2130,  2131,  2135,  2464,  2136,
    2430,  2138,  1072,  2139,  2194,   419,  2140,  2141,  2145,  2146,
    2198,  2147,  2149,  1073,  2150,  2152,  2153,   805,  2155,  2201,
    2202,  2203,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  1074,
    2162,  2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,  2231,
    2232,  2233,  2234,  2164,  2237,  2167,  2238,  2239,  2240,  2648,
    2170,  2181,  2182,  2431,  2183,  2184,  2185,  2432,  2189,  2236,
     419,  2250,   433,  2241,  2242,  2245,  2251,  2253,  2433,  2267,
    2268,  2269,  2272,  2434,  2280,  2285,  2286,  2287,  2288,  2314,
    2589,  2316,  2318,  2321,  2435,  2323,  2324,  2325,  2329,  2330,
    1311,  2331,  2332,  2258,   513,  2338,  2259,  2333,  2260,  2334,
    2262,  2339,   419,  2264,  2340,  2265,  2341,  2342,  2343,   107,
    2347,  2348,  2270,  2271,  2349,  2356,  2359,  2648,  2367,  2275,
    2370,  2276,  1362,  2373,  2374,  2279,  2376,  2379,  2281,  2380,
    2381,   495,  2384,   502,   505,  2389,   510,   514,  2393,  2409,
    2437,  2459,  2460,  2462,  2215,  2468,   109,  2536,  2469,  2471,
    2475,  2539,  2474,  2476,  2486,  1731,  2477,  2479,  2485,  2495,
    2499,  2506,  2512,  2516,   576,  2519,  2525,  1741,  2533,  2544,
    2726,  2555,  2556,  2560,  2317,  2557,  2558,  2559,  2575,  2582,
    2584,  2588,   591,   597,  2585,  1802,  1803,  2573,  2587,  2594,
    2621,   110,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
    2627,  2654,  2630,   681,  2631,  2632,  2382,  2637,  2651,  2696,
    2652,  2166,  2653,   677,  2655,  2665,  2675,  2284,  2683,   785,
    2686,  2689,  2660,  2698,  2699,  2700,   112,  2707,  2710,  2597,
    2720,  2721,  2727,   698,  2735,  2436,  2739,  2740,  2742,  2746,
    2748,  2645,  2749,  2750,  2751,  2697,  2693,  2191,     0,  1128,
       0,     0,     0,     0,     0,     0,  2315,     0,  2387,     0,
       0,     0,     0,   766,     0,     0,     0,     0,     0,  2394,
    2395,  2396,  2397,  2398,  2399,  2400,  2401,  2402,  2403,  2404,
       0,     0,     0,   117,     0,  2407,  2702,  2704,   118,   419,
     419,     0,   419,   419,     0,     0,   419,   419,  2419,  2420,
    2421,  2422,  2423,  2424,     0,  2426,  2427,  2428,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2439,  2440,  2441,  2442,     0,  2444,  2445,  2446,  2447,
    2448,  2449,     0,  2451,     0,     0,  2455,  2456,     0,     0,
       0,   801,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   808,     0,     0,  2463,     0,     0,   419,  2465,
       0,   816,     0,  2467,     0,     0,     0,  2470,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,   850,     0,  2487,     0,     0,     0,     0,   855,
       0,     0,   856,     0,     0,     0,     0,   857,     0,   853,
     854,   859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   858,  1715,  1716,  1717,     0,   861,     0,     0,
       0,     0,     0,  1719,  1720,  1721,   872,     0,     0,     0,
    1732,  1733,  1734,     0,     0,  1735,  1736,     0,  1738,  1739,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2527,     0,     0,     0,
    2529,     0,     0,   916,     0,     0,     0,     0,  1811,  1812,
    2530,  2531,  1814,  1815,     0,     0,  2535,   419,     0,     0,
    2538,   419,     0,     0,     0,     0,  2543,     0,     0,  2547,
    2548,     0,   918,   919,   920,   921,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2565,  2566,
       0,  2568,  2569,  2570,  2571,  2572,     0,   419,  2574,     0,
       0,  2067,  2577,     0,     0,     0,     0,     0,     0,  2073,
    2074,     0,     0,     0,  2586,     0,     0,     0,     0,  2590,
       0,     0,     0,     0,  2110,  2111,     0,     0,     0,     0,
       0,     0,  1062,     0,  2598,  2121,  2122,     0,     0,     0,
       0,     0,     0,     0,  1100,     0,  2132,  2133,     0,     0,
       0,  1106,     0,  2211,     0,     0,  2142,  2143,     0,     0,
       0,     0,  2148,     0,  2212,     0,     0,     0,  2458,  2609,
       0,     0,  2151,     0,  2613,     0,  2615,     0,     0,     0,
       0,     0,  2618,     0,     0,     0,     0,     0,     0,  1064,
    2213,     0,     0,     0,     0,  2625,     0,  1065,     0,     0,
       0,     0,     0,  1066,     0,     0,     0,     0,     0,     0,
    2670,     0,     0,  2636,     0,     0,     0,  2640,     0,     0,
       0,     0,     0,     0,  1067,     0,     0,  2214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2659,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1068,     0,     0,
       0,     0,     0,     0,     0,  1069,     0,     0,     0,     0,
    2673,     0,     0,     0,     0,  2678,     0,  2680,  1194,     0,
       0,     0,     0,     0,  2684,  1196,     0,     0,     0,  2687,
       0,  1195,     0,     0,  2690,     0,     0,     0,     0,     0,
       0,     0,  1070,  1200,     0,     0,     0,     0,     0,     0,
    1071,     0,     0,     0,     0,     0,  2701,  2703,     0,     0,
       0,     0,     0,     0,     0,   635,   636,     0,     0,     0,
    1212,  1213,     0,     0,     0,  1217,     0,     0,  1220,     0,
    1210,  2713,     0,     0,  2714,     0,     0,  2716,     0,  1229,
       0,     0,  1072,     0,     0,     0,     0,     0,  2722,  2723,
    2724,  2725,     0,  1073,     0,     0,     0,     0,     0,     0,
    2734,  2561,     0,  2737,     0,     0,     0,     0,     0,  1074,
    2741,   637,  2743,     0,     0,     0,     0,   638,  2215,     0,
    2216,  2579,     0,     0,   639,  2583,   640,     0,     0,     0,
       0,   641,     0,     0,   642,     0,     0,     0,     0,     0,
     643,  1300,     0,     0,     0,     0,  2058,     0,     0,     0,
     644,     0,     0,     0,     0,     0,   645,     0,     0,  2066,
       0,     0,     0,     0,     0,   646,     0,  2709,     0,  2069,
       0,     0,  2320,     0,  2217,     0,     0,     0,     0,  1367,
     647,     0,  2322,     0,     0,     0,  2326,  2327,     0,     0,
       0,     0,     0,    64,    65,  2335,  2336,     0,     0,  2729,
     648,     0,  2732,     0,  2344,  2345,     0,     0,     0,   107,
    2350,     0,     0,     0,     0,   649,  1446,     0,     0,     0,
    2360,  2361,     0,     0,   650,   651,     0,     0,     0,   281,
       0,  2371,  2372,     0,     0,     0,     0,     0,     0,     0,
       0,  2154,  2375,     0,     0,   652,   109,     0,     0,     0,
       0,  2377,     0,  2378,     0,     0,     0,    64,    65,     0,
       0,     0,     0,     0,     0,     0,   653,     0,  1506,     0,
       0,     0,     0,   107,     0,     0,     0,     0,  1512,     0,
     654,     0,   655,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,   656,     0,     0,     0,     0,
     657,     0,     0,     0,     0,     0,   658,     0,     0,     0,
       0,     0,     0,   659,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   660,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   661,   662,   112,   663,     0,     0,
       0,     0,     0,     0,     0,   110,     0,     0,     0,     0,
    2719,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1590,     0,     0,     0,     0,     0,     0,  1587,
       0,     0,     0,   282,     0,     0,     0,   664,     0,     0,
       0,     0,     0,     0,     0,     0,  1595,     0,     0,     0,
       0,     0,  1614,   117,     0,     0,     0,  1619,   118,     0,
     112,     0,     0,     0,     0,     0,     0,  1625,     0,   283,
    1620,     0,     0,     0,     0,  2489,     0,     0,     0,     0,
    1626,     0,     0,     0,     0,  2498,     0,     0,     0,     0,
       0,     0,     0,     0,  2500,     0,     0,     0,     0,  1643,
       0,     0,     0,  2509,     0,     0,     0,     0,     0,  1655,
    2511,     0,     0,     0,  1663,     0,     0,     0,     0,     0,
       0,  2515,   118,     0,     0,     0,     0,  2518,   284,     0,
    2520,     0,     0,  2521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2319,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2351,  2352,  2353,  2354,  2355,
       0,  2357,  2358,     0,     0,     0,  2362,  2363,  2364,  2365,
    2366,     0,  2368,  2369,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,  1818,     0,  2599,
       0,     0,     0,  2601,     0,     0,     0,     0,     0,     0,
    2602,     0,  1475,     0,     0,     0,  2605,  1476,     0,     0,
    2607,     0,     0,  2608,     0,     0,     0,  1840,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1477,  1478,
       0,  1479,  1480,     0,     0,   106,     0,     0,     0,     0,
       0,     0,  1481,  1888,     0,     0,  1874,     0,     0,  1875,
     107,     0,     0,     0,  1482,  1483,     0,     0,     0,  1891,
    1892,     0,  1484,     0,     0,  1485,     0,  1896,     0,     0,
       0,   108,     0,     0,  1897,     0,  1642,     0,     0,     0,
       0,     0,  1486,     0,     0,     0,     0,   109,     0,  1487,
    1488,   107,     0,  1489,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1937,     0,     0,     0,     0,     0,  1943,
       0,     0,     0,     0,  1936,     0,     0,  1939,  1940,     0,
       0,     0,     0,     0,     0,     0,  1947,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,  2488,     0,
       0,  2490,  2491,  2492,  2493,  2494,     0,  2496,  2497,     0,
     111,  1490,     0,     0,     0,     0,     0,     0,     0,  2501,
    2502,  2503,  2504,  2505,     0,  2507,  2508,     0,  2510,     0,
       0,     0,     0,   110,     0,     0,     0,     0,  2513,  2514,
       0,     0,     0,     0,  1978,     0,  1980,   112,     0,  2517,
       0,     0,  1985,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1982,     0,  1491,     0,   342,     0,     0,     0,
    1492,     0,     0,   343,     0,     0,     0,  2000,     0,     0,
    1998,     0,     0,  2006,   113,  1493,     0,     0,   112,     0,
       0,     0,   114,     0,  1494,     0,  2007,     0,   115,   116,
    2013,     0,     0,     0,   117,     0,     0,     0,     0,   118,
       0,  2012,  2023,  2014,     0,     0,     0,     0,  2017,     0,
    2030,  1495,  1496,  2022,     0,     0,  2024,     0,  2025,  2026,
    2027,  2029,     0,     0,  2031,     0,     0,  2032,     0,     0,
    2033,  2035,  1497,  2036,  2037,  2038,  2040,     0,  2041,  2042,
     118,     0,     0,     0,  2044,  2045,  2046,     0,     0,  2047,
    2048,     0,     0,     0,     0,  2049,  2050,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2600,     0,     0,     0,
       0,     0,   119,     0,     0,     0,  1498,  2603,     0,  2604,
       0,     0,     0,  2606,     0,     0,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,     0,     0,
       0,   149,     0,     0,     0,   150,   151,     0,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,     0,   107,     0,
       0,     0,     0,     0,     0,  2156,     0,  2666,     0,     0,
    2667,     0,     0,  2668,     0,  2669,     0,     0,   344,  2157,
     345,     0,     0,  2160,     0,     0,     0,  2169,     0,     0,
       0,     0,     0,     0,     0,  2165,     0,     0,  2168,     0,
       0,     0,     0,     0,   486,   487,     0,     0,   488,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2192,  2193,     0,     0,     0,     0,     0,  2187,     0,
     489,     0,     0,     0,     0,     0,     0,     0,  2196,  2197,
     110,     0,     0,  2199,  2200,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,  2243,  2235,     0,  2247,  2248,     0,     0,
       0,     0,     0,     0,  2252,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   490,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   491,     0,     0,     0,     0,  2261,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   492,  2273,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,  2274,  2282,
       0,  2283,     0,     0,     0,     0,     0,     0,     0,  2289,
       0,     0,     0,     0,  2293,     0,     0,     0,     0,     0,
    2298,     0,     0,     0,     0,  2302,     0,     0,   110,  2305,
       0,     0,  2308,   592,   107,  2311,     0,  2313,     0,     0,
       0,     0,  2306,     0,     0,     0,     0,   493,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   593,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,     0,   494,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     594,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2385,     0,
       0,  2388,     0,     0,     0,     0,     0,     0,     0,  2392,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2405,     0,   595,  2408,     0,
       0,     0,     0,  2412,     0,     0,  2415,  2416,     0,     0,
       0,     0,     0,   504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2450,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2478,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   596,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,   973,   974,   975,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2522,
       0,     0,     0,     0,     0,  2526,     0,     0,     0,  2528,
       0,     0,     0,  2523,     0,   976,   977,     0,     0,   978,
       0,     0,   979,     0,     0,  2534,     0,     0,     0,   980,
       0,     0,     0,   981,     0,     0,     0,     0,     0,     0,
       0,   982,   983,     0,     0,     0,  2542,     0,     0,   984,
     985,     0,     0,     0,     0,     0,     0,  2553,     0,     0,
       0,     0,     0,     0,     0,     0,   986,     0,     0,     0,
       0,     0,   987,     0,     0,     0,   988,   989,     0,     0,
     990,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,     0,  2595,   991,  1239,  1240,  1241,
       0,     0,     0,     0,     0,     0,     0,     0,  2596,     0,
       0,     0,     0,     0,     0,     0,   992,     0,     0,     0,
       0,     0,     0,     0,     0,  1242,  1243,     0,     0,  1244,
     109,     0,     0,     0,     0,     0,  1245,     0,   993,  1246,
       0,     0,     0,  1247,     0,   107,     0,     0,     0,     0,
       0,  1248,  1249,     0,  2611,  2612,     0,  2614,     0,  1250,
       0,   994,  2616,  2617,     0,     0,     0,  2619,     0,     0,
    2629,     0,     0,   107,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,  1251,  1252,     0,   995,
    1253,   996,     0,     0,     0,     0,     0,   997,   998,     0,
    2641,     0,     0,     0,     0,     0,  1254,     0,     0,     0,
    1299,   999,  1000,   107,     0,     0,     0,     0,     0,     0,
       0,  1001,  1002,  2661,     0,     0,  1255,   110,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1003,  1256,  1004,
       0,     0,     0,     0,     0,   110,     0,  1257,  2692,     0,
       0,  1005,     0,  1006,     0,     0,     0,     0,     0,  1007,
       0,     0,     0,     0,     0,     0,     0,     0,  2705,     0,
       0,     0,   112,     0,     0,     0,     0,   117,     0,     0,
       0,     0,   118,     0,     0,   110,     0,     0,     0,  1258,
       0,  1259,     0,  1008,  2708,     0,     0,  1260,  1261,     0,
     112,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2717,  1262,     0,     0,  2730,     0,     0,     0,     0,
       0,     0,  1263,     0,     0,     0,  2728,     0,     0,  2731,
       0,     0,     0,     0,   118,  2744,     0,     0,  2745,     0,
     112,     0,     0,     0,     0,     0,     0,  1264,     0,  1265,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1266,
       0,     0,   118,     0,     0,     0,     0,     0,     0,  1267,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
     501,     0,   118,  1268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     1,
       0,     0,     2,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     5,     6,     0,     7,     8,     9,     0,     0,
       0,     0,     0,   175,     0,    10,   176,     0,   177,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,    14,    15,     0,     0,   178,     0,   179,
     180,   181,     0,     0,     0,     0,     0,     0,     0,   182,
       0,   183,     0,     0,     0,     0,   184,     0,   185,   186,
     187,     0,     0,    16,     0,   188,     0,   189,     0,     0,
       0,     0,     0,     0,     0,    17,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,    20,    21,     0,     0,
       0,     0,     0,    22,     0,     0,   190,     0,     0,    23,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,   191,     0,    25,    26,    27,     0,     0,
      28,    29,     0,   192,   193,     0,     0,   194,     0,     0,
       0,   195,   951,   196,    30,     0,     0,   952,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
      32,    33,     0,     0,   197,   198,     0,     0,   199,     0,
       0,     0,     0,    34,     0,    35,     0,     0,   200,     0,
    1336,     0,    36,     0,     0,    37,     0,     0,    38,     0,
      39,     0,    40,   201,   202,     0,     0,    41,     0,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,     0,     0,     0,    43,     0,     0,     0,
       0,     0,     0,     0,   204,     0,   205,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,    47,     0,     0,     0,     0,
     206,    48,     0,     0,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   207,   208,     0,     0,     0,
       0,     0,     0,     0,   209,     0,     0,     0,     0,     0,
       0,   210,     0,     0,     0,    51,     0,   211,     0,   212,
       0,    52,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,   213,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,  1337,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148
};

static const yytype_int16 yycheck[] =
{
       3,    50,  1422,   655,   477,     5,     5,  1622,    11,  1624,
       4,     3,     4,     0,     4,     4,     5,   650,   651,    32,
       5,     4,     3,     4,     3,     4,     5,     5,     5,    32,
       5,    17,     4,     5,     5,    61,     4,    40,    34,    46,
       4,     3,     4,    27,     3,     4,    49,    16,    21,    52,
     433,    56,    55,     3,     4,   202,    59,     3,     4,    62,
     443,    97,   130,    66,    67,    32,    32,    70,    17,   121,
      73,    74,     3,     4,    77,  1121,    17,  1123,    81,    14,
      15,     3,     4,    86,   974,    37,    36,     6,    27,   121,
      36,   280,   121,   164,    66,   103,    99,   100,   101,   102,
     103,   104,    66,  1149,  1150,  1151,     6,     3,     4,    48,
      66,   107,    51,   855,   856,   857,    88,   120,   945,     4,
     144,   948,    99,    62,     3,     4,    61,   138,   105,    20,
     119,    33,     3,     4,    32,     3,     4,    21,   965,    21,
       3,     4,   117,    17,     3,     4,    85,   119,     3,     4,
      61,    64,   155,    66,   222,   119,     5,    36,     3,     4,
      66,    40,    17,   102,   175,     5,  2647,   139,   210,    88,
      16,   165,     3,     4,   916,   178,     3,     4,   186,     5,
     183,    66,   132,     3,     4,    21,   132,     4,   240,   228,
     261,    31,   339,     5,   186,     3,     4,   344,     4,   346,
       4,   120,    14,    15,   236,   186,   202,   236,   213,    40,
     278,   192,   201,  2694,    59,   113,   191,   158,   207,   208,
     120,   257,   138,   209,    98,   181,   195,   186,    59,   201,
      14,   193,   111,    57,   119,   207,   208,   201,   222,    21,
     243,   893,   291,   207,   208,   197,   224,    66,   229,    61,
     134,    78,   278,   132,   189,   190,   259,   260,   300,   175,
     209,   268,    66,   236,   277,    88,   266,   242,   181,    21,
     273,    21,   253,   244,   242,   301,     4,    61,   281,   282,
     111,   284,   285,   205,   287,   183,     4,   185,    14,   187,
     188,   266,   282,   280,   297,    21,   281,   195,   681,   282,
      26,   300,   291,   289,   307,   308,   298,    33,   297,   131,
     277,   277,   210,   307,   193,   119,   201,   298,   307,   291,
     297,   300,   207,   208,   259,   297,   288,   291,   331,   332,
     333,   287,   335,   196,   269,   270,   339,   340,   288,   298,
     289,   232,   288,    63,   171,    71,   998,   350,   351,   341,
     342,   340,   236,   356,   236,   344,   345,   288,   361,   362,
     341,   342,   193,   222,  1016,   300,   369,   278,   340,   372,
      27,   343,   344,   345,   287,   192,   340,   189,   190,   263,
     344,   345,   341,   342,   104,    27,   284,   390,   391,    27,
     301,   119,   288,   242,   397,   398,   399,   201,   401,   223,
     236,   119,   222,   207,   208,   189,   291,   346,    12,   288,
       4,   258,   415,   237,   222,  1048,   419,   288,   265,   246,
     288,   424,   425,   426,   427,   428,   429,    40,   431,   246,
     433,   434,   435,   816,   160,   161,   162,   163,   164,   165,
     443,   444,   168,   169,   170,   171,  1079,   259,   133,    53,
       3,     4,    40,   284,   236,   340,     4,   269,   270,   344,
     345,    50,   274,    13,     3,     4,   288,    71,    87,    78,
    1212,     3,     4,   201,   298,   259,   859,    87,  1220,   207,
     208,     4,     4,   201,   236,   269,   236,   291,   300,   207,
     208,     3,     4,  1383,   497,   498,   100,    61,   111,   168,
      27,    63,    61,     4,     5,  1551,   228,   176,    56,   166,
      99,     0,   515,   233,   118,   121,   300,    56,   122,   108,
    1410,   105,   156,   111,   166,   574,  1353,   247,   248,  1356,
     134,   257,   258,    56,   432,     5,   340,   156,     4,   542,
     344,   345,   104,  1433,    14,    15,   156,   136,     5,   183,
      14,    15,     4,  2007,   282,    61,   120,   283,   243,    60,
      45,   120,   171,   291,    30,    66,   615,    30,   571,   167,
    2024,  2025,  2026,   291,    59,  2029,   149,  2031,  2032,   236,
     193,  2035,  2036,  2037,   222,   634,  2040,  2041,    40,     5,
    2044,    61,  2046,  2047,   236,  2049,    81,    61,   192,    56,
     326,   327,   328,   606,   265,   193,   138,    61,    65,  1261,
     194,   123,   340,   114,   120,   100,   344,   345,   338,   339,
    1272,   278,   340,   521,   222,     4,   344,   345,   129,   632,
     236,    94,   117,    61,    27,   120,   278,   246,   188,    61,
     167,     4,   143,   175,    31,    40,   649,   260,   149,   652,
      14,    15,   205,   154,    37,   553,    61,  2272,     5,   111,
     244,   146,   147,   121,    47,   213,   120,   670,   671,   672,
     673,   233,   260,   676,   213,   678,     5,   680,   681,   682,
      66,    61,   255,   242,   288,   247,   248,    40,   286,    93,
     213,    74,   120,   255,   160,   222,    63,    61,   120,   162,
      54,   290,   156,  2157,   205,   269,  2160,   111,   757,     5,
     269,  2165,    44,   198,  2168,   120,   111,  1100,    83,   189,
     190,   206,     5,   224,    30,   189,   190,     0,   229,     5,
     231,     4,   193,  2187,    99,     5,    90,   104,    14,    15,
     120,   193,    61,   129,   210,   124,   749,   750,    61,   752,
     753,   754,   755,   254,   255,    87,   213,   124,   111,    83,
     121,   262,   192,   269,   767,   768,   149,    22,   154,    61,
     236,   774,   775,     4,   167,    99,   338,   339,   236,   280,
     265,   266,   186,   246,     5,    61,   140,    61,   251,   259,
     242,   794,   795,   796,    49,   259,    17,    52,   193,   269,
     270,   120,   185,    61,   274,   269,   270,   120,   811,   812,
     813,     4,   815,   816,   817,   269,   819,     3,     4,    12,
    2274,    66,     5,   253,   203,   189,   190,    82,   120,   222,
     300,    14,    15,    19,  1217,   336,   300,   840,    22,   842,
     193,   269,    70,   117,   121,   231,   120,   269,   117,   852,
     174,   336,  2306,   192,   160,   110,   859,   860,   113,   191,
     280,   864,   120,   105,   269,    49,   233,   250,    52,   118,
      56,    55,     3,     4,   600,   236,   879,   880,    61,   168,
     247,   248,   156,  1625,   887,   888,   889,    33,   242,   269,
       5,   215,   895,    89,   280,   259,    16,   900,    82,    26,
    1727,    66,   951,  2547,   210,   269,   270,   246,   911,    40,
    1956,  1957,  1958,   189,   190,   101,   258,   191,   301,   229,
    1747,  2565,   149,   265,   927,   249,   110,   279,   654,   113,
     236,  2385,    89,   659,     5,  1762,   300,  1827,  1765,    72,
     168,    31,   840,    14,    15,    88,  1773,     3,     4,  1776,
     269,  2405,   194,  1843,     3,     4,   269,  1784,  2412,   236,
    1787,  2415,  2416,     3,     4,   239,   130,  1794,   242,   224,
     156,   338,   339,   116,    24,    25,     5,   269,     3,     4,
     111,     4,  1872,   259,     4,   112,     3,     4,   215,     5,
      61,   994,   266,   269,   270,   269,     5,   124,   274,   254,
      40,     4,   244,   167,    97,   279,   189,   190,     5,  2429,
       5,   269,  1015,   241,    14,    15,     3,     4,     3,     4,
       5,  1024,   250,     5,   300,    12,     4,   213,   255,     3,
       4,   158,   218,     5,    59,  1038,     4,  1040,    12,  2683,
     224,   184,  1045,  1046,  1047,  2689,     4,    97,     4,     5,
       3,     4,  1055,     4,     5,  1058,   199,  1060,   222,     3,
       4,    61,   193,     4,    14,    15,   293,   123,     4,  2523,
     254,   111,   798,  1076,   123,  1078,   259,   204,     5,  1082,
    1083,    82,     4,     3,     4,  1975,   269,   270,  2542,    26,
     217,   274,   120,  1096,  1097,     5,   280,  1100,  1101,  1102,
      28,     4,  2746,   266,  2748,  1108,    59,  1110,     4,     5,
    1113,    61,  1115,   256,   278,  1164,     4,   300,   189,   190,
      40,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,  1152,
     151,     4,     5,  1156,   297,  1158,     4,  2611,  2612,  1162,
    2614,     4,  2616,  2617,   307,  2619,     4,    19,     5,    82,
       3,     4,     5,    37,  1177,   112,  1179,     4,  1181,  1182,
    1183,  1184,   196,    47,     4,  1188,  1189,   124,   259,   189,
     190,   111,    44,  1196,     4,  1937,     3,     4,   269,   270,
    1203,     4,     5,   274,  1207,  1208,  1209,    28,   421,   422,
      74,     4,    42,    43,  1217,  1218,  2670,     4,  1221,   220,
     221,     5,   150,     5,     9,    77,     5,   265,  1231,   300,
    1233,    11,    84,  1236,   235,    35,   168,     4,   151,   189,
     190,     4,    94,    95,   172,   176,     3,     4,   176,   101,
     168,  2427,     9,    10,    11,   195,   186,  2084,     5,   259,
     195,     5,   192,  2717,  2006,     4,  2093,   204,   187,   269,
     270,   195,   124,   187,   275,  2102,  1279,  2453,  1281,  1177,
     217,  1284,  1285,    66,  1287,   149,  1289,     5,  2030,   141,
      66,    66,  1295,   222,  1297,  1021,     5,   223,   226,   229,
     300,  1304,     4,   155,   156,     4,   106,   220,   221,   259,
     162,     4,   195,  2421,    87,     5,  2424,  2207,  2426,   269,
     270,   185,   235,   253,     5,    87,  1224,   127,   128,   150,
     182,  2439,  2440,  2223,     4,   135,   264,     4,  2228,   169,
     170,     5,  1240,     5,   272,   273,     4,    99,  2456,  1075,
     300,   172,     5,   153,    17,   176,     3,     4,     5,  1085,
       7,     8,   275,   163,     4,   229,   218,   197,   298,  2545,
    2546,     5,    17,  2549,    17,  2551,  1379,     4,  1381,  1382,
       3,     4,     5,     4,     7,     8,   250,  2563,  2564,    14,
      15,     4,  2568,  2569,     3,     4,  2572,     4,     7,     8,
    1403,  2577,  2578,    97,  1407,   226,     3,     4,     5,     5,
       7,     8,   342,     3,     4,     5,   268,     5,    87,     4,
       4,   285,     5,     5,     5,     5,   278,    87,  1431,  1432,
       5,     4,     4,    12,    12,     5,    61,   301,  1441,     5,
       5,     4,  1445,   264,     4,  2621,     5,     4,  2624,  1452,
       4,   272,   273,  2629,     4,   307,     4,     4,   165,  2635,
       5,     5,     5,  1466,  2640,     4,  1192,  1193,  1471,   156,
     156,     4,  1475,     5,  1477,  1478,     4,  1480,  1481,  1482,
    1378,  1484,   254,   254,  1487,  1488,  1489,  1490,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,    66,   282,  1500,  1501,  1502,
    1503,  2243,     5,     4,   236,  1888,     5,  1510,  1511,    80,
    2252,  1514,  1515,  1516,    14,    15,  1519,  1520,    89,     5,
       5,     5,     4,     4,   267,     5,     5,   267,    99,  1532,
    1533,     5,  1535,  1536,     5,  2425,  2712,     5,     4,  2715,
       4,     4,    40,     5,     5,     5,     5,     5,  2438,     5,
       4,     4,    44,  2443,    46,     5,     5,     5,   129,  2735,
    1943,    61,     5,  2305,   189,   190,  2308,   105,    66,  2311,
     236,  2313,     5,  2749,   138,   105,  2752,  2753,   149,   236,
    1583,  1584,  1585,    40,    76,  1588,   105,     5,    40,   209,
    1593,  1594,    84,  1596,  1597,  1598,   240,  1600,  1601,   209,
    1603,    99,  1985,  1606,  1607,     5,     4,   105,     5,     5,
     209,   209,  1615,   111,     4,     4,   111,     5,     5,     5,
    1623,     5,    53,   194,     4,  1628,  1629,     4,   111,     5,
       5,   129,     5,  1636,   259,     4,     6,     5,     5,     4,
      71,     5,  1645,     4,   269,   270,     5,     5,  1374,     5,
     142,   149,     4,    38,  1380,     5,     5,    88,   944,    12,
     231,    12,     4,   138,     5,     4,   164,     4,     4,   100,
       4,     4,    38,     5,     0,   300,  1402,     5,  1681,  1405,
     236,   236,   121,  1409,   255,   236,     4,   118,   205,   189,
     190,   122,   244,   195,   167,  1593,   194,     4,     4,   191,
    1703,  1704,     4,   134,  1430,  1708,     4,     4,   222,     5,
    1436,  1714,     5,     5,   267,   207,   208,     5,  1444,     5,
       5,  1447,   214,   294,   216,   296,     4,     4,     4,    91,
    1456,  1457,     5,   231,     4,     4,   304,    99,     5,     5,
       5,  1467,   173,   105,     4,   236,   244,   236,   236,     4,
     242,     4,     4,     4,     4,   304,     4,   255,   304,   259,
       4,     4,   304,  1661,   126,     5,     5,   222,     5,   269,
     270,     6,     5,  1671,     5,   222,   222,   222,  1676,     5,
       4,     6,     5,     5,   282,     4,     4,   149,     4,     4,
    2680,     5,     5,     4,     4,   157,   294,     5,   296,   297,
     300,     5,     5,     5,     4,    12,     5,     4,     4,  2192,
    2193,     4,  2195,  2196,     4,   307,  2199,  2200,  1821,     5,
    1823,     5,  1825,     5,     5,     4,   267,     5,     4,   267,
       5,     5,   194,     5,     4,     4,   347,     5,   336,     4,
     202,  1844,  1845,  1846,  1847,  1848,  1849,  1850,  1851,  1852,
       5,     5,     5,     4,     4,   267,     5,     5,     5,     5,
       4,    32,     4,   300,     5,  1868,     5,  1870,     5,     5,
       4,     4,   280,     5,     5,     5,     5,     4,  2261,     4,
     347,     5,   244,     5,  1887,  1888,     5,     5,     4,     4,
    1893,     5,     4,   255,     4,     4,     4,   420,     5,  1902,
    1903,  1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,   271,
       5,  1914,  1915,  1916,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,     5,  1927,     5,  1929,  1930,  1931,  2581,
       5,     4,     4,   347,     5,     4,     4,   347,     5,     5,
    1943,  1944,   113,     4,     4,     4,     4,     4,   347,     5,
       5,     4,     4,   347,     5,     5,     5,     5,     5,     4,
       6,     5,     4,     4,   347,     5,     5,     5,     4,     4,
     932,     5,     5,  1976,     4,     4,  1979,     5,  1981,     5,
    1983,     4,  1985,  1986,     5,  1988,     5,     5,     5,    19,
       4,     4,  1995,  1996,     5,     4,     4,  2649,     4,  2002,
       4,  2004,   964,     4,     4,  2008,     4,     4,  2011,     4,
       4,   182,     4,   184,   185,     4,   187,   188,     4,     4,
     347,     4,     4,     4,   280,     5,    56,  2410,     5,     4,
       4,  2414,     5,     4,     4,  1321,     5,     5,     5,     4,
       4,     4,     4,     4,   215,     4,     4,  1333,     4,     4,
    2705,     5,     4,     4,  2057,     5,     5,     5,     5,     5,
       4,     4,   233,   234,     5,  1351,  1352,  2450,     5,     5,
       4,   101,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
       4,     6,     5,   286,     4,     4,  2155,     4,     4,   347,
       5,  1837,     5,   284,     4,     4,     4,  2015,     4,   376,
       5,     4,  2590,     5,     5,     4,   156,     4,     4,  2486,
       5,     5,     5,   304,     4,  2218,     5,     5,     5,     4,
       4,  2579,     5,     5,     5,  2649,  2645,  1873,    -1,   716,
      -1,    -1,    -1,    -1,    -1,    -1,  2054,    -1,  2161,    -1,
      -1,    -1,    -1,   346,    -1,    -1,    -1,    -1,    -1,  2172,
    2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
      -1,    -1,    -1,   213,    -1,  2188,  2659,  2660,   218,  2192,
    2193,    -1,  2195,  2196,    -1,    -1,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,  2206,    -1,  2208,  2209,  2210,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2224,  2225,  2226,  2227,    -1,  2229,  2230,  2231,  2232,
    2233,  2234,    -1,  2236,    -1,    -1,  2239,  2240,    -1,    -1,
      -1,   412,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   423,    -1,    -1,  2258,    -1,    -1,  2261,  2262,
      -1,   432,    -1,  2266,    -1,    -1,    -1,  2270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   495,    -1,  2317,    -1,    -1,    -1,    -1,   502,
      -1,    -1,   505,    -1,    -1,    -1,    -1,   510,    -1,   500,
     501,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   513,  1305,  1306,  1307,    -1,   518,    -1,    -1,
      -1,    -1,    -1,  1315,  1316,  1317,   527,    -1,    -1,    -1,
    1322,  1323,  1324,    -1,    -1,  1327,  1328,    -1,  1330,  1331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2389,    -1,    -1,    -1,
    2393,    -1,    -1,   576,    -1,    -1,    -1,    -1,  1360,  1361,
    2403,  2404,  1364,  1365,    -1,    -1,  2409,  2410,    -1,    -1,
    2413,  2414,    -1,    -1,    -1,    -1,  2419,    -1,    -1,  2422,
    2423,    -1,   593,   594,   595,   596,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2441,  2442,
      -1,  2444,  2445,  2446,  2447,  2448,    -1,  2450,  2451,    -1,
      -1,  1737,  2455,    -1,    -1,    -1,    -1,    -1,    -1,  1745,
    1746,    -1,    -1,    -1,  2467,    -1,    -1,    -1,    -1,  2472,
      -1,    -1,    -1,    -1,  1760,  1761,    -1,    -1,    -1,    -1,
      -1,    -1,   653,    -1,  2487,  1771,  1772,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   677,    -1,  1782,  1783,    -1,    -1,
      -1,   684,    -1,    55,    -1,    -1,  1792,  1793,    -1,    -1,
      -1,    -1,  1798,    -1,    66,    -1,    -1,    -1,  2244,  2522,
      -1,    -1,  1808,    -1,  2527,    -1,  2529,    -1,    -1,    -1,
      -1,    -1,  2535,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,  2548,    -1,    99,    -1,    -1,
      -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,    -1,    -1,
    2609,    -1,    -1,  2566,    -1,    -1,    -1,  2570,    -1,    -1,
      -1,    -1,    -1,    -1,   126,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2590,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   157,    -1,    -1,    -1,    -1,
    2613,    -1,    -1,    -1,    -1,  2618,    -1,  2620,   801,    -1,
      -1,    -1,    -1,    -1,  2627,   808,    -1,    -1,    -1,  2632,
      -1,   802,    -1,    -1,  2637,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   194,   814,    -1,    -1,    -1,    -1,    -1,    -1,
     202,    -1,    -1,    -1,    -1,    -1,  2659,  2660,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     4,     5,    -1,    -1,    -1,
     853,   854,    -1,    -1,    -1,   858,    -1,    -1,   861,    -1,
     851,  2684,    -1,    -1,  2687,    -1,    -1,  2690,    -1,   872,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,  2701,  2702,
    2703,  2704,    -1,   255,    -1,    -1,    -1,    -1,    -1,    -1,
    2713,  2437,    -1,  2716,    -1,    -1,    -1,    -1,    -1,   271,
    2723,    60,  2725,    -1,    -1,    -1,    -1,    66,   280,    -1,
     282,  2457,    -1,    -1,    73,  2461,    75,    -1,    -1,    -1,
      -1,    80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      89,   922,    -1,    -1,    -1,    -1,  1718,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,  1731,
      -1,    -1,    -1,    -1,    -1,   114,    -1,  2675,    -1,  1741,
      -1,    -1,  2068,    -1,   336,    -1,    -1,    -1,    -1,   972,
     129,    -1,  2078,    -1,    -1,    -1,  2082,  2083,    -1,    -1,
      -1,    -1,    -1,     3,     4,  2091,  2092,    -1,    -1,  2707,
     149,    -1,  2710,    -1,  2100,  2101,    -1,    -1,    -1,    19,
    2106,    -1,    -1,    -1,    -1,   164,   997,    -1,    -1,    -1,
    2116,  2117,    -1,    -1,   173,   174,    -1,    -1,    -1,    39,
      -1,  2127,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1813,  2138,    -1,    -1,   194,    56,    -1,    -1,    -1,
      -1,  2147,    -1,  2149,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   215,    -1,  1049,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,  1059,    -1,
     229,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,   244,    -1,    -1,    -1,    -1,
     249,    -1,    -1,    -1,    -1,    -1,   255,    -1,    -1,    -1,
      -1,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   293,   294,   156,   296,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
    2696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1165,    -1,    -1,    -1,    -1,    -1,    -1,  1160,
      -1,    -1,    -1,   193,    -1,    -1,    -1,   336,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1177,    -1,    -1,    -1,
      -1,    -1,  1195,   213,    -1,    -1,    -1,  1200,   218,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,  1210,    -1,   229,
    1201,    -1,    -1,    -1,    -1,  2321,    -1,    -1,    -1,    -1,
    1211,    -1,    -1,    -1,    -1,  2331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2340,    -1,    -1,    -1,    -1,  1230,
      -1,    -1,    -1,  2349,    -1,    -1,    -1,    -1,    -1,  1240,
    2356,    -1,    -1,    -1,  1245,    -1,    -1,    -1,    -1,    -1,
      -1,  2367,   218,    -1,    -1,    -1,    -1,  2373,   288,    -1,
    2376,    -1,    -1,  2379,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2067,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2107,  2108,  2109,  2110,  2111,
      -1,  2113,  2114,    -1,    -1,    -1,  2118,  2119,  2120,  2121,
    2122,    -1,  2124,  2125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1378,    -1,  2495,
      -1,    -1,    -1,  2499,    -1,    -1,    -1,    -1,    -1,    -1,
    2506,    -1,    22,    -1,    -1,    -1,  2512,    27,    -1,    -1,
    2516,    -1,    -1,  2519,    -1,    -1,    -1,  1408,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    62,  1446,    -1,    -1,  1437,    -1,    -1,  1440,
      19,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,  1450,
    1451,    -1,    82,    -1,    -1,    85,    -1,  1458,    -1,    -1,
      -1,    40,    -1,    -1,  1465,    -1,     4,    -1,    -1,    -1,
      -1,    -1,   102,    -1,    -1,    -1,    -1,    56,    -1,   109,
     110,    19,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1506,    -1,    -1,    -1,    -1,    -1,  1512,
      -1,    -1,    -1,    -1,  1505,    -1,    -1,  1508,  1509,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1517,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,  2320,    -1,
      -1,  2323,  2324,  2325,  2326,  2327,    -1,  2329,  2330,    -1,
     119,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2341,
    2342,  2343,  2344,  2345,    -1,  2347,  2348,    -1,  2350,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,  2360,  2361,
      -1,    -1,    -1,    -1,  1587,    -1,  1589,   156,    -1,  2371,
      -1,    -1,  1595,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1593,    -1,   224,    -1,    16,    -1,    -1,    -1,
     230,    -1,    -1,    23,    -1,    -1,    -1,  1620,    -1,    -1,
    1611,    -1,    -1,  1626,   193,   245,    -1,    -1,   156,    -1,
      -1,    -1,   201,    -1,   254,    -1,  1627,    -1,   207,   208,
    1643,    -1,    -1,    -1,   213,    -1,    -1,    -1,    -1,   218,
      -1,  1642,  1655,  1644,    -1,    -1,    -1,    -1,  1649,    -1,
    1663,   281,   282,  1654,    -1,    -1,  1657,    -1,  1659,  1660,
    1661,  1662,    -1,    -1,  1665,    -1,    -1,  1668,    -1,    -1,
    1671,  1672,   302,  1674,  1675,  1676,  1677,    -1,  1679,  1680,
     218,    -1,    -1,    -1,  1685,  1686,  1687,    -1,    -1,  1690,
    1691,    -1,    -1,    -1,    -1,  1696,  1697,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2498,    -1,    -1,    -1,
      -1,    -1,   291,    -1,    -1,    -1,   346,  2509,    -1,  2511,
      -1,    -1,    -1,  2515,    -1,    -1,    -1,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,    -1,   344,   345,    -1,    -1,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,  1818,    -1,  2599,    -1,    -1,
    2602,    -1,    -1,  2605,    -1,  2607,    -1,    -1,   238,  1820,
     240,    -1,    -1,  1824,    -1,    -1,    -1,  1840,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1836,    -1,    -1,  1839,    -1,
      -1,    -1,    -1,    -1,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1874,  1875,    -1,    -1,    -1,    -1,    -1,  1869,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1891,  1892,
     101,    -1,    -1,  1896,  1897,    -1,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1936,  1925,    -1,  1939,  1940,    -1,    -1,
      -1,    -1,    -1,    -1,  1947,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,   168,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,  1982,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,   205,  1998,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,  1999,  2012,
      -1,  2014,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2022,
      -1,    -1,    -1,    -1,  2027,    -1,    -1,    -1,    -1,    -1,
    2033,    -1,    -1,    -1,    -1,  2038,    -1,    -1,   101,  2042,
      -1,    -1,  2045,    18,    19,  2048,    -1,  2050,    -1,    -1,
      -1,    -1,  2043,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,    -1,   336,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     213,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2159,    -1,
      -1,  2162,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2170,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2186,    -1,   172,  2189,    -1,
      -1,    -1,    -1,  2194,    -1,    -1,  2197,  2198,    -1,    -1,
      -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2235,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2287,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2382,
      -1,    -1,    -1,    -1,    -1,  2388,    -1,    -1,    -1,  2392,
      -1,    -1,    -1,  2384,    -1,    48,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,  2408,    -1,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,  2417,    -1,    -1,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,  2428,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,    -1,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,  2478,   129,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2479,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      56,    -1,    -1,    -1,    -1,    -1,    59,    -1,   171,    62,
      -1,    -1,    -1,    66,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,  2525,  2526,    -1,  2528,    -1,    82,
      -1,   194,  2533,  2534,    -1,    -1,    -1,  2538,    -1,    -1,
    2553,    -1,    -1,    19,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,   109,   110,    -1,   222,
     113,   224,    -1,    -1,    -1,    -1,    -1,   230,   231,    -1,
    2571,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,    -1,
      56,   244,   245,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   254,   255,  2594,    -1,    -1,   149,   101,    -1,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,   171,   282,
      -1,    -1,    -1,    -1,    -1,   101,    -1,   180,  2641,    -1,
      -1,   294,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2661,    -1,
      -1,    -1,   156,    -1,    -1,    -1,    -1,   213,    -1,    -1,
      -1,    -1,   218,    -1,    -1,   101,    -1,    -1,    -1,   222,
      -1,   224,    -1,   336,  2675,    -1,    -1,   230,   231,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2692,   245,    -1,    -1,  2708,    -1,    -1,    -1,    -1,
      -1,    -1,   255,    -1,    -1,    -1,  2707,    -1,    -1,  2710,
      -1,    -1,    -1,    -1,   218,  2728,    -1,    -1,  2731,    -1,
     156,    -1,    -1,    -1,    -1,    -1,    -1,   280,    -1,   282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,    -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,   302,
      -1,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    -1,
     284,    -1,   218,   336,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,    41,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    64,    65,    -1,    67,    68,    69,    -1,    -1,
      -1,    -1,    -1,    41,    -1,    77,    44,    -1,    46,    -1,
      -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    95,    96,    -1,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    -1,    -1,   125,    -1,    93,    -1,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,   141,
      -1,    -1,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    -1,   155,    -1,    -1,   124,    -1,    -1,   161,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   174,   141,    -1,   177,   178,   179,    -1,    -1,
     182,   183,    -1,   151,   152,    -1,    -1,   155,    -1,    -1,
      -1,   159,   156,   161,   196,    -1,    -1,   161,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
     212,   213,    -1,    -1,   182,   183,    -1,    -1,   186,    -1,
      -1,    -1,    -1,   225,    -1,   227,    -1,    -1,   196,    -1,
     161,    -1,   234,    -1,    -1,   237,    -1,    -1,   240,    -1,
     242,    -1,   244,   211,   212,    -1,    -1,   249,    -1,    -1,
      -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,    -1,
      -1,   283,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,   297,    -1,    -1,    -1,    -1,
     268,   303,    -1,    -1,   306,   307,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   283,   284,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,    -1,
      -1,   299,    -1,    -1,    -1,   337,    -1,   305,    -1,   307,
      -1,   343,    -1,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,    -1,   343,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    46,    59,    64,    65,    67,    68,    69,
      77,    84,    86,    87,    95,    96,   125,   137,   141,   144,
     148,   149,   155,   161,   174,   177,   178,   179,   182,   183,
     196,   211,   212,   213,   225,   227,   234,   237,   240,   242,
     244,   249,   262,   268,   283,   284,   295,   297,   303,   306,
     307,   337,   343,   349,    66,    12,    53,    71,   100,   118,
     122,   134,   288,   381,     3,     4,   288,   350,   386,   186,
     192,   229,   253,   298,   342,   388,   280,     4,    40,   111,
     193,   242,   393,    28,   150,   172,   176,   226,   264,   272,
     273,   363,   395,    83,    99,   174,   215,   249,   396,    40,
      59,   111,   193,   284,   350,   405,     4,    19,    40,    56,
     101,   119,   156,   193,   201,   207,   208,   213,   218,   291,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   340,
     344,   345,   352,   360,   361,   362,   407,    33,   408,   352,
      44,    46,    76,    84,   142,   191,   207,   208,   214,   216,
     242,   307,   351,   144,   410,    41,    44,    46,    65,    67,
      68,    69,    77,    79,    84,    86,    87,    88,    93,    95,
     124,   141,   151,   152,   155,   159,   161,   182,   183,   186,
     196,   211,   212,   219,   242,   244,   268,   283,   284,   292,
     299,   305,   307,   343,   411,    83,    99,   453,    19,    44,
      77,    84,    94,    95,   101,   124,   141,   155,   156,   162,
     182,   218,   268,   278,   307,   456,   352,    88,   116,   184,
     199,   256,   297,   307,   462,    16,    26,   112,   124,   158,
     204,   217,   465,   228,   483,     5,    66,    88,   139,   297,
     343,   352,   484,     5,   485,    57,   223,   237,   298,   501,
      64,    66,   181,   287,   520,    66,   202,   339,   344,   346,
     521,    39,   193,   229,   288,   350,   360,   362,   522,     5,
     297,   307,   352,   525,    70,   168,   241,   250,   526,     4,
     527,    88,   501,    61,   278,   301,   534,   193,   288,   350,
     535,    26,   112,   124,   204,   217,   537,    50,    99,   108,
     136,   290,   552,   553,     4,    37,    47,    74,   149,   185,
     229,   250,   285,   301,   376,     4,   124,   203,   554,   288,
     350,   556,    16,    23,   238,   240,   361,   557,   228,   561,
     288,   350,   562,     0,     5,    59,   350,   382,   265,     5,
       4,   288,   350,   383,     5,    32,   277,   384,   123,   350,
     385,   123,   350,   387,   350,     4,   192,   246,   391,   186,
     298,   341,   342,   350,   390,   352,   138,   175,   389,   196,
     350,    78,   171,   246,   350,   392,     5,   350,     4,   242,
     394,   350,   350,     5,   224,   397,    31,   398,     5,   399,
       5,   403,     5,    31,   404,   350,     9,    10,    11,   350,
     356,   357,   358,   359,   350,   350,    40,   111,   193,   350,
     406,   350,   193,   360,   362,   350,    35,   106,   127,   128,
     135,   153,   163,   365,   350,     4,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   117,    66,    53,    71,
      88,   100,   118,   122,   134,   173,   412,   118,   414,   186,
     192,   229,   253,   298,   341,   342,   350,   400,   415,   280,
     418,   168,   419,   168,   176,   421,    65,    66,    69,    91,
     168,   185,   205,   268,   336,   360,   423,   350,   362,   426,
      59,   284,   360,   427,   276,   360,   362,   428,    33,   429,
     360,   362,   430,     4,   360,   362,   431,    45,    59,    81,
     100,   117,   120,   146,   147,   198,   206,   265,   266,   336,
     435,   210,   300,   441,     5,    89,     6,    88,   120,   433,
       5,    65,   362,   432,    16,   501,    66,   181,   287,   442,
      66,   229,   443,   279,    61,   278,   301,   444,    21,   134,
     236,   263,   445,    37,    47,    74,   149,   185,   250,   301,
     446,   362,    89,    16,   195,   451,   360,   454,    72,   457,
      31,   458,    44,    87,   191,   459,   149,   215,   255,   293,
     460,   360,    18,    58,   115,   172,   284,   360,   461,     4,
     192,   464,     5,     4,     6,   120,   350,     4,     5,   242,
     466,     5,   468,     5,   117,   191,   242,   266,   469,    93,
     111,   186,   482,     5,   480,     5,   266,   481,     4,     5,
     352,   352,   350,   350,     5,     4,     5,    60,    66,    73,
      75,    80,    83,    89,    99,   105,   114,   129,   149,   164,
     173,   174,   194,   215,   229,   231,   244,   249,   255,   262,
     280,   293,   294,   296,   336,   486,     5,     4,   350,     5,
     350,    40,   111,   350,   524,   352,   350,   360,   362,   523,
     350,   365,   350,     4,   361,    54,    90,   140,   242,   528,
       4,     4,   350,     4,   149,   255,   529,     5,   360,     4,
      40,   111,   350,   536,   350,    97,    61,   120,   242,   269,
     538,   120,   551,    61,   117,   120,   156,   191,   239,   242,
     266,   269,   279,   540,   541,    61,   120,   269,   550,     5,
       4,    34,   107,   202,   533,    66,   352,   377,    66,   352,
     378,    66,   352,   379,    13,   188,   532,   350,   350,   222,
     350,   380,   350,   266,     4,   350,   350,     4,   560,     4,
     282,   558,     4,   282,   559,     4,   365,   123,   350,   563,
     350,   350,     4,     5,   350,    12,   350,   350,   350,    30,
      94,   162,   246,   251,   364,   364,     4,   196,   350,   350,
       4,     4,     4,   350,   350,   350,   350,     4,     4,     5,
       5,   360,     5,   350,   350,   356,   358,   358,   360,   350,
     350,   350,   350,   350,   350,   350,   360,   362,   359,   350,
     350,   359,   350,     5,   265,   103,   186,   413,   192,   246,
     416,   168,    78,   171,   246,   417,   138,   175,   401,   401,
       4,   420,     4,   422,   192,   253,   424,   176,   425,   168,
     365,   350,   350,   360,   360,   365,   365,   365,   360,   365,
     350,   360,   438,     4,   362,   436,   195,     4,   165,   307,
     437,   195,   360,   131,   288,   440,     5,     5,     4,   195,
     350,     4,     5,    60,    66,   114,   129,   143,   149,   154,
     205,   224,   229,   231,   254,   255,   262,   280,   336,   495,
     362,   187,   187,    66,   447,    66,   448,    66,   449,   222,
     450,   350,     5,   223,   452,   361,   365,     5,   360,   360,
     360,   360,     4,   352,     4,     4,   195,   350,    14,    15,
      61,   189,   190,   259,   269,   270,   300,    87,     5,     5,
      14,    15,    61,   189,   190,   259,   269,   270,   274,   300,
      87,   156,   161,   361,   472,   476,    87,   156,     5,   470,
       4,     4,    14,    61,   189,   259,   269,   300,     5,     5,
       4,   350,   361,    20,    21,    22,    48,    49,    52,    55,
      62,    66,    74,    75,    82,    83,    99,   105,   109,   110,
     113,   129,   149,   171,   194,   222,   224,   230,   231,   244,
     245,   254,   255,   280,   282,   294,   296,   302,   336,    66,
      80,    89,    99,   129,   149,   194,   231,   255,   294,   296,
       4,    30,   160,   210,   236,   489,     5,    63,   104,   233,
     247,   248,   338,   339,   494,    99,   487,    17,    40,   111,
     193,   493,     4,     5,    17,   209,   289,   350,   255,   494,
     502,   124,   494,   503,    36,    40,   111,   132,   193,   288,
     350,   504,   360,   352,    91,    99,   105,   126,   149,   157,
     194,   202,   244,   255,   271,   507,    40,   111,   193,     5,
     281,    17,   209,   289,   511,   282,   352,   512,     5,    99,
     105,   297,    17,    17,     4,   350,   350,   350,   350,   350,
     365,   350,   350,   359,   350,     4,   365,     4,    40,   111,
     193,   260,   530,    40,   111,   193,   260,   531,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   541,    61,
     120,   156,   269,   545,    61,   120,   269,   549,    87,   156,
      61,   120,   269,   543,     4,    61,   120,   269,   542,     5,
       5,     4,     4,     5,     5,     5,   350,   350,   350,     4,
     350,   555,   350,   350,     6,   361,     4,     5,     4,     4,
       5,     4,    97,   257,   366,   350,   350,    12,     5,    12,
     350,   350,    12,     4,    12,     4,     4,   350,   350,   350,
       4,   352,     4,     4,   365,   360,   365,   350,   350,   350,
     360,   350,   359,   350,   350,     5,     5,   350,   362,   350,
     360,   350,   365,   365,   366,   366,   366,   365,   359,   350,
     365,   350,   133,   243,   353,   439,   165,     5,     4,   365,
     156,   156,     4,     5,     4,     4,   350,   434,   350,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   109,   110,   113,   129,   149,   171,   180,   222,   224,
     230,   231,   245,   255,   280,   282,   292,   302,   336,    66,
     129,   154,   231,   280,    30,   160,   210,   236,   496,   350,
     205,   350,   497,    17,   350,   254,   507,   254,   205,   350,
     498,   282,   499,    17,    98,   350,   350,     5,   366,    56,
     360,     4,     5,   463,   350,     5,     5,     5,   156,   183,
     370,   370,   164,   261,   368,     4,     4,     5,     5,   467,
     267,   267,     5,     5,     5,    17,   158,   369,   369,   368,
       4,     4,   368,     5,     5,   471,   161,   335,   361,   475,
       5,   474,     5,     5,   478,     5,   479,     5,    14,    15,
      61,   189,   190,   259,   269,   270,   274,   300,     4,     4,
       5,     5,   370,   368,     4,     5,     5,   365,    82,   151,
     220,   221,   235,   275,   373,     7,     8,   350,   355,   236,
     121,   236,   236,   105,    40,    66,    99,   105,   111,   129,
     149,   164,   194,   231,   244,   255,   282,   294,   296,   297,
     336,   488,   121,   236,     5,    27,   166,   236,   278,   138,
     105,    22,    49,    52,    82,   110,   113,   224,   254,    22,
      49,    52,    55,    82,   110,   113,   224,   254,   280,    40,
     121,   236,   236,   105,     5,   209,    27,   222,    36,   132,
     288,   350,   258,   265,   121,   240,   360,   507,    40,   130,
     222,   278,   240,   209,     5,     5,   244,    27,   222,     4,
       5,     5,   209,    36,   132,   288,   350,   507,   209,   352,
       4,     4,   350,     5,   300,    22,    27,    48,    49,    51,
      52,    62,    74,    75,    82,    85,   102,   109,   110,   113,
     171,   224,   230,   245,   254,   281,   282,   302,   346,   490,
     350,   350,   350,   350,   350,   494,   360,     5,     4,     5,
     350,   350,   360,   350,   352,   350,   350,   494,     5,   350,
     350,   352,     5,    17,     5,     5,   350,   350,   359,   350,
     350,     4,   350,   350,   111,   350,   350,   111,     4,    42,
      43,   169,   170,   197,   375,   375,    61,   120,   269,   539,
     375,     5,    61,   120,   269,   544,     5,     5,    61,   120,
     269,   546,     4,     5,     5,     4,    61,   120,   269,   548,
      61,   120,   269,   547,     5,     5,     4,     5,     5,     4,
     375,   375,   375,   350,   350,   350,     4,   360,   350,   361,
     365,     5,     5,    12,   350,   360,   362,   350,    12,   350,
     350,   350,    59,   350,     6,     4,   350,   350,    46,   268,
     402,     5,   352,   352,   365,   350,     4,     4,     4,   365,
     360,   350,   350,   350,   350,   365,   360,   366,   359,   350,
       4,   366,   350,    38,    38,     4,   362,     5,    24,    25,
      97,   367,     4,   360,   350,   350,     4,   350,     5,    82,
     151,   220,   221,   235,   275,   360,   362,   236,   121,   236,
     236,    21,   236,   360,   121,   236,    27,   166,   236,   278,
     138,    21,   236,   121,   236,   236,    21,   236,    27,   167,
     222,   167,   258,   265,   121,   167,   222,   286,   507,   130,
     167,   222,   278,     4,   244,    27,   167,   222,   507,   205,
     350,   350,   350,   350,   350,   350,   195,   350,   350,    20,
     232,   455,     4,     4,   350,   370,   370,   370,     4,   370,
     370,   370,    14,    15,    61,   189,   190,   259,   269,   270,
     300,   369,   370,   370,   370,   370,   370,     4,   370,   370,
       4,   369,    14,    15,    61,   189,   190,   259,   269,   270,
     300,     5,   473,     5,   477,     5,     5,    14,    15,    61,
     189,   190,   259,   269,   270,   274,   300,     5,    14,    15,
      61,   189,   190,   259,   269,   270,   274,   300,     5,    14,
      15,    61,   189,   190,   259,   269,   270,   274,   300,    14,
      15,    61,   189,   190,   259,   269,   270,   300,   267,     5,
       5,     5,   369,   369,   368,     4,     4,   368,     5,     4,
       4,   370,   370,     4,   370,   370,     5,   352,   360,   362,
       5,   350,   352,   350,     5,   350,     5,   355,   105,   194,
     244,   105,   194,   244,     5,   352,   350,   352,     5,   350,
     360,   352,     5,   355,   236,   236,    21,   236,    21,   236,
     236,    21,   236,   304,   304,     4,     4,     4,   488,     4,
       4,     4,   304,   304,     4,     5,     4,   352,   350,     5,
     350,     5,   355,   352,   360,   360,   350,    27,    48,    51,
      62,    85,   102,   346,   371,     4,   352,   350,   365,   352,
       5,   360,   360,   350,   352,   352,   360,   360,   350,   352,
     350,     5,   350,   222,   222,   350,   350,   222,   350,   222,
     350,   350,   500,   508,   350,   222,   222,   350,   350,   350,
     350,   350,   350,   350,   350,     5,   300,   350,   491,   350,
     350,   222,   350,   350,   350,   350,   360,   365,     5,   360,
     360,   350,   350,   365,   350,   350,   350,   360,   350,   350,
       5,     4,   350,   350,   350,   350,     5,     5,     4,   375,
       5,     5,     4,     4,     4,     5,     5,     4,     4,     5,
       5,     4,     5,     5,     4,   350,   350,   350,   365,   350,
     365,   350,   360,   362,   350,   365,   350,   350,   350,   350,
     350,     5,   350,     4,     6,   350,   350,     4,   360,   350,
     365,   176,   363,   350,   363,   366,   365,   360,   350,   350,
       4,   350,   360,   365,   360,   350,     4,   360,     5,     5,
       5,     5,   360,   365,   360,   360,   360,   360,   362,   360,
     365,   360,   360,   360,   362,   360,   360,   360,   360,   362,
     360,   360,   360,   350,   360,   360,   360,   360,   360,   360,
     360,   350,   350,     4,   350,     5,     4,   350,   370,     5,
       5,     5,   368,     4,     4,     5,   370,   369,     4,   370,
       5,     5,     5,   369,   369,   368,     4,     4,     5,    14,
      15,    61,   189,   190,   259,   269,   270,   300,    14,    15,
      61,   189,   190,   259,   269,   270,   300,    14,    15,    61,
     189,   190,   259,   269,   270,   300,   267,     5,     5,     5,
     369,   369,   368,     4,     4,   368,     5,   267,     5,     5,
       5,   369,   369,   368,     4,     4,   368,     5,   267,     5,
       5,     5,   369,   369,   368,     4,     4,   368,     5,     5,
       5,     5,   369,   369,   368,     4,     4,     5,   369,     4,
       4,   369,     4,     4,   370,     5,   365,   360,   350,   350,
     360,   350,     5,   355,     5,   360,   352,     5,   360,   365,
       5,   355,   350,   350,   350,   350,   350,   350,   350,   350,
     350,     4,     4,     5,     4,     4,   350,   360,   350,     5,
     355,   352,   365,   365,   350,   359,   365,   365,   350,   365,
     365,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,    55,    66,    92,   129,   280,   282,   336,   505,   506,
     507,   518,   519,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   360,     5,   350,   350,   350,
     350,     4,     4,   365,   366,     4,   492,   365,   365,   359,
     350,     4,   365,     4,   375,   375,   375,   355,   350,   350,
     350,   365,   350,   359,   350,   350,    12,     5,     5,     4,
     350,   350,     4,   365,   360,   350,   350,   366,   367,   350,
       5,   350,   365,   365,   362,     5,     5,     5,     5,   365,
     367,   367,   367,   365,   367,   366,   367,   367,   365,   367,
     367,   367,   365,   367,   367,   365,   360,   367,   365,   367,
     367,   365,   367,   365,     4,   362,     5,   350,     4,   370,
     369,     4,   369,     5,     5,     5,   369,   369,   368,     4,
       4,     5,     5,     5,     5,   369,   369,   368,     4,     4,
       5,     5,     5,     5,   369,   369,   368,     4,     4,     5,
     369,   370,   370,   370,   370,   370,     4,   370,   370,     4,
     369,   369,   370,   370,   370,   370,   370,     4,   370,   370,
       4,   369,   369,     4,     4,   369,     4,   369,   369,     4,
       4,     4,   361,   367,     4,   360,   367,   350,   360,     4,
     367,   367,   360,     4,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   360,   367,   350,   360,     4,
     359,   359,   360,   359,   359,   360,   360,   359,   359,   350,
     350,   350,   350,   350,   350,   355,   350,   350,   350,   347,
     347,   347,   347,   347,   347,   347,   506,   347,   355,   350,
     350,   350,   350,   355,   350,   350,   350,   350,   350,   350,
     365,   350,   300,   354,   355,   350,   350,   366,   352,     4,
       4,   366,     4,   350,   359,   350,    59,   350,     5,     5,
     350,     4,   363,   367,     5,     4,     4,     5,   360,     5,
     366,   367,   366,   366,   366,     5,     4,   350,   370,   369,
     370,   370,   370,   370,   370,     4,   370,   370,   369,     4,
     369,   370,   370,   370,   370,   370,     4,   370,   370,   369,
     370,   369,     4,   370,   370,   369,     4,   370,   369,     4,
     369,   369,   365,   360,   367,     4,   365,   350,   365,   350,
     350,   350,   367,     4,   365,   350,   359,   367,   350,   359,
     367,   367,   360,   350,     4,   372,   372,   350,   350,   372,
     355,   372,   508,   360,   488,     5,     4,     5,     5,     5,
       4,   352,   355,   372,   372,   350,   350,   355,   350,   350,
     350,   350,   350,   359,   350,     5,   508,   350,   372,   352,
     509,   510,     5,   352,     4,     5,   350,     5,     4,     6,
     350,    32,   277,   409,     5,   365,   360,   409,   350,   369,
     370,   369,   369,   370,   370,   369,   370,   369,   369,   350,
     367,   360,   360,   350,   360,   350,   360,   360,   350,   360,
     367,     4,   508,   508,   354,   350,   508,     4,   508,   365,
       5,     4,     4,   508,   508,   354,   350,     4,   508,   508,
     350,   360,   508,   508,   508,   509,   515,   516,   507,   513,
     514,     4,     5,     5,     6,     4,   186,   298,   342,   350,
     400,   360,    32,   277,   374,     4,   370,   370,   370,   370,
     361,   367,   367,   350,   367,     4,   367,   367,   350,   367,
     350,   508,   508,     4,   350,   508,     5,   350,   508,     4,
     350,   508,   365,   515,   517,   518,   347,   514,     5,     5,
       4,   350,   401,   350,   401,   365,   367,     4,   360,   362,
       4,   355,   354,   350,   350,   354,   350,   360,   518,   352,
       5,     5,   350,   350,   350,   350,   374,     5,   360,   362,
     365,   360,   362,   508,   350,     4,   508,   350,   367,     5,
       5,   350,     5,   350,   365,   365,     4,   508,     4,     5,
       5,     5,   354,   354,   508,   508,   508
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
#line 452 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 6:
#line 454 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 7:
#line 455 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 9:
#line 457 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 16:
#line 464 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 21:
#line 469 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 22:
#line 470 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 24:
#line 472 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 31:
#line 479 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 35:
#line 483 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 486 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 491 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 493 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 495 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 497 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 504 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 505 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 508 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 509 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 510 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 511 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 512 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 513 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 514 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 515 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 516 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 517 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 518 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 519 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 522 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 69:
#line 524 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 70:
#line 525 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 526 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 527 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 529 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 74:
#line 530 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 531 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 532 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 78:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 80:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 81:
#line 539 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 82:
#line 542 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 83:
#line 543 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 84:
#line 546 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 85:
#line 547 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 86:
#line 548 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 87:
#line 551 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 88:
#line 554 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 557 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 561 "frame/parser.Y"
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
#line 573 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
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
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 94:
#line 594 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 95:
#line 595 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 96:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 97:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 98:
#line 598 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 99:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 100:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 101:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 102:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 103:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 104:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 105:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 106:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 107:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 108:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 109:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 110:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 111:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 112:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 113:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 114:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 115:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 116:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 117:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 118:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 119:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 120:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 121:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 122:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 123:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 124:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 125:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 126:
#line 628 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 127:
#line 631 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 128:
#line 632 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 129:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 130:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 131:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 132:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 133:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 134:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 135:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 136:
#line 642 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 137:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 138:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 140:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 141:
#line 649 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 142:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 143:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 144:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 146:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 147:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 148:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 149:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 150:
#line 662 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 151:
#line 663 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 152:
#line 664 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 153:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 154:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 155:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 156:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 157:
#line 673 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 158:
#line 674 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 159:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 160:
#line 678 "frame/parser.Y"
    {;}
    break;

  case 161:
#line 679 "frame/parser.Y"
    {;}
    break;

  case 162:
#line 680 "frame/parser.Y"
    {;}
    break;

  case 163:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 164:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 165:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 166:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 167:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 168:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 169:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 170:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 171:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 172:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 173:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 174:
#line 698 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 175:
#line 699 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 176:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 177:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 178:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 179:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 180:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 181:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 182:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 183:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 184:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 185:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 186:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 187:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 188:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 189:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 190:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 195:
#line 727 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 196:
#line 728 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 197:
#line 729 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 198:
#line 730 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 199:
#line 732 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 200:
#line 735 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 201:
#line 736 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 202:
#line 739 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 203:
#line 740 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 204:
#line 743 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 744 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 747 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 207:
#line 749 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 209:
#line 753 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 210:
#line 754 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 213:
#line 757 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 215:
#line 759 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 216:
#line 762 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 217:
#line 763 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 218:
#line 766 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 219:
#line 767 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 220:
#line 769 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 221:
#line 771 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 222:
#line 772 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 223:
#line 773 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 224:
#line 775 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 225:
#line 777 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 226:
#line 780 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 227:
#line 781 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 228:
#line 784 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 229:
#line 786 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 230:
#line 789 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 231:
#line 791 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 232:
#line 794 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 233:
#line 798 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 234:
#line 799 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 803 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 237:
#line 804 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 238:
#line 805 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 242:
#line 811 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 243:
#line 812 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 245:
#line 815 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 246:
#line 820 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 247:
#line 821 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 248:
#line 824 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 249:
#line 825 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 250:
#line 826 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 251:
#line 827 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 252:
#line 828 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 253:
#line 831 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 254:
#line 832 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 255:
#line 833 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 256:
#line 836 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 257:
#line 838 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 258:
#line 843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 259:
#line 848 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 260:
#line 855 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 261:
#line 857 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 262:
#line 858 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 264:
#line 860 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 265:
#line 864 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 266:
#line 866 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 267:
#line 868 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 268:
#line 869 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 274:
#line 880 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 275:
#line 882 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 276:
#line 884 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 277:
#line 889 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 278:
#line 893 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 279:
#line 896 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 280:
#line 897 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 281:
#line 900 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 282:
#line 901 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 283:
#line 903 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 284:
#line 909 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 285:
#line 910 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 286:
#line 911 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 287:
#line 912 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 290:
#line 919 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 291:
#line 920 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 292:
#line 923 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 293:
#line 924 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 294:
#line 928 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 930 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 297:
#line 935 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 300:
#line 940 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 301:
#line 941 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 302:
#line 942 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 303:
#line 945 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 304:
#line 947 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 305:
#line 948 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 306:
#line 949 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 950 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 308:
#line 954 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 309:
#line 956 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 310:
#line 957 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 311:
#line 958 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 312:
#line 961 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 313:
#line 963 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 314:
#line 965 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 315:
#line 967 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 316:
#line 970 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 317:
#line 973 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 318:
#line 974 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 319:
#line 975 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 320:
#line 978 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 321:
#line 981 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 335:
#line 995 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 338:
#line 998 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 339:
#line 1000 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 342:
#line 1003 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 343:
#line 1004 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 346:
#line 1007 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 347:
#line 1008 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 349:
#line 1011 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 351:
#line 1013 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 353:
#line 1015 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 355:
#line 1017 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 356:
#line 1019 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 357:
#line 1021 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1023 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 360:
#line 1026 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 361:
#line 1027 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 362:
#line 1028 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 363:
#line 1029 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 364:
#line 1030 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 365:
#line 1031 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 367:
#line 1033 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 368:
#line 1036 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 369:
#line 1037 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 370:
#line 1038 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 371:
#line 1041 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 372:
#line 1044 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 373:
#line 1046 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 374:
#line 1048 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 375:
#line 1049 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 376:
#line 1050 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 378:
#line 1052 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 380:
#line 1055 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 381:
#line 1061 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 382:
#line 1062 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 383:
#line 1065 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 384:
#line 1066 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 385:
#line 1067 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 386:
#line 1070 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 387:
#line 1071 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 389:
#line 1077 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 390:
#line 1079 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 391:
#line 1081 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 392:
#line 1084 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 394:
#line 1086 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 395:
#line 1090 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 396:
#line 1094 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 398:
#line 1096 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 399:
#line 1097 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 400:
#line 1098 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 401:
#line 1099 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 402:
#line 1100 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 404:
#line 1102 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 405:
#line 1103 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 406:
#line 1106 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 407:
#line 1107 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 408:
#line 1108 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 409:
#line 1111 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 410:
#line 1112 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 411:
#line 1116 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 412:
#line 1118 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 413:
#line 1126 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 414:
#line 1128 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 415:
#line 1130 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 416:
#line 1133 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 417:
#line 1135 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 418:
#line 1136 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 419:
#line 1139 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 420:
#line 1142 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 421:
#line 1144 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 422:
#line 1148 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 423:
#line 1150 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 424:
#line 1153 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 425:
#line 1157 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 426:
#line 1158 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 427:
#line 1160 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 428:
#line 1163 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1164 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 431:
#line 1168 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 432:
#line 1169 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 433:
#line 1170 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 434:
#line 1173 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 435:
#line 1175 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 436:
#line 1176 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 438:
#line 1178 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 442:
#line 1182 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 443:
#line 1183 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 444:
#line 1184 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 445:
#line 1186 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 447:
#line 1188 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 448:
#line 1191 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 449:
#line 1193 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 450:
#line 1195 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1196 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 452:
#line 1197 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 453:
#line 1198 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 454:
#line 1201 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 455:
#line 1205 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 456:
#line 1207 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 457:
#line 1210 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 458:
#line 1213 "frame/parser.Y"
    {fr->getFitsSliceCmd();;}
    break;

  case 459:
#line 1215 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 460:
#line 1217 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 461:
#line 1219 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (5)].real), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 462:
#line 1222 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 463:
#line 1223 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 464:
#line 1224 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 465:
#line 1227 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 466:
#line 1228 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 467:
#line 1229 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 468:
#line 1232 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 469:
#line 1235 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 470:
#line 1236 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 471:
#line 1237 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 472:
#line 1240 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 473:
#line 1241 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 474:
#line 1242 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 475:
#line 1243 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 476:
#line 1244 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 477:
#line 1245 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 482:
#line 1252 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 483:
#line 1253 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 484:
#line 1254 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 485:
#line 1257 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 486:
#line 1258 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 487:
#line 1261 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 488:
#line 1262 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 489:
#line 1265 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 490:
#line 1266 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 491:
#line 1269 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 493:
#line 1273 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 495:
#line 1275 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 496:
#line 1278 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 497:
#line 1279 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 499:
#line 1283 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 500:
#line 1287 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 501:
#line 1290 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 502:
#line 1297 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 503:
#line 1298 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 504:
#line 1301 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 507:
#line 1304 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 508:
#line 1305 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 509:
#line 1306 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 510:
#line 1307 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 512:
#line 1309 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 513:
#line 1310 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 514:
#line 1311 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 516:
#line 1313 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 517:
#line 1314 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 518:
#line 1315 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 519:
#line 1316 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 521:
#line 1320 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 522:
#line 1323 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 523:
#line 1324 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 524:
#line 1327 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 525:
#line 1328 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 526:
#line 1329 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 527:
#line 1330 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 528:
#line 1333 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 529:
#line 1334 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 530:
#line 1335 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 531:
#line 1336 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 532:
#line 1339 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 533:
#line 1340 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1341 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1342 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1343 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 537:
#line 1344 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 538:
#line 1347 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 539:
#line 1348 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 540:
#line 1349 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 543:
#line 1353 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 544:
#line 1354 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 545:
#line 1357 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 546:
#line 1360 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 547:
#line 1361 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1365 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 549:
#line 1367 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 550:
#line 1368 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1380 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 558:
#line 1382 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 559:
#line 1384 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 560:
#line 1385 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 561:
#line 1387 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1389 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 563:
#line 1391 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 564:
#line 1393 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1395 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1399 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 568:
#line 1400 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 569:
#line 1401 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 570:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 571:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 572:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 573:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 574:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1411 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 577:
#line 1415 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1417 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1419 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1421 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1423 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 582:
#line 1425 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 583:
#line 1427 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 584:
#line 1429 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 585:
#line 1432 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1434 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1436 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 593:
#line 1444 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1446 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1447 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 598:
#line 1449 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 599:
#line 1451 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 600:
#line 1453 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 601:
#line 1454 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1455 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1456 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 604:
#line 1459 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1460 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1461 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 610:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 618:
#line 1479 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 619:
#line 1482 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1485 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 621:
#line 1488 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 622:
#line 1491 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 623:
#line 1494 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 624:
#line 1497 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 625:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 627:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 632:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 634:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 635:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 638:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 639:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 647:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 652:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 654:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 655:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 658:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 659:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 660:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 661:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 664:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 665:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 666:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 667:
#line 1618 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1619 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1620 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 672:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 674:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 675:
#line 1628 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 678:
#line 1633 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1634 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1635 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 684:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1642 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1646 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 688:
#line 1648 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1649 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 690:
#line 1651 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1653 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 692:
#line 1655 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1658 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 694:
#line 1659 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 695:
#line 1662 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 696:
#line 1663 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1664 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 698:
#line 1667 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 699:
#line 1674 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 700:
#line 1675 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 701:
#line 1676 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 702:
#line 1677 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 703:
#line 1678 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 704:
#line 1679 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 705:
#line 1680 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 706:
#line 1684 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 708:
#line 1692 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 709:
#line 1693 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 710:
#line 1695 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 711:
#line 1697 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 712:
#line 1698 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 713:
#line 1699 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 715:
#line 1700 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 716:
#line 1701 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 717:
#line 1702 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 719:
#line 1704 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 720:
#line 1705 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 721:
#line 1707 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 722:
#line 1709 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 723:
#line 1711 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 724:
#line 1714 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1716 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 726:
#line 1717 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 727:
#line 1719 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 728:
#line 1722 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 729:
#line 1725 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 730:
#line 1727 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1730 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 732:
#line 1733 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 733:
#line 1736 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 734:
#line 1739 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 735:
#line 1743 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 736:
#line 1747 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 737:
#line 1752 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 738:
#line 1756 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 739:
#line 1757 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1759 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 741:
#line 1760 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 742:
#line 1762 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1764 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 744:
#line 1766 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1768 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 746:
#line 1769 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1771 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1773 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 749:
#line 1776 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 750:
#line 1780 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 751:
#line 1784 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 752:
#line 1786 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 753:
#line 1788 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 754:
#line 1790 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 755:
#line 1792 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 756:
#line 1794 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 757:
#line 1796 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1798 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1800 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1802 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 761:
#line 1804 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 762:
#line 1806 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 763:
#line 1808 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 764:
#line 1810 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1811 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1813 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1815 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 768:
#line 1816 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 769:
#line 1817 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1819 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1822 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 773:
#line 1823 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1827 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1829 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 778:
#line 1833 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 779:
#line 1836 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 780:
#line 1839 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 781:
#line 1843 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 782:
#line 1847 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 783:
#line 1852 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 784:
#line 1856 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 785:
#line 1857 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 786:
#line 1858 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 787:
#line 1860 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 788:
#line 1862 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 789:
#line 1866 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 790:
#line 1867 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 791:
#line 1868 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1870 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 793:
#line 1873 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 794:
#line 1876 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1879 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1880 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1882 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1885 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1889 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 800:
#line 1891 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 801:
#line 1892 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 802:
#line 1894 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 803:
#line 1897 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 804:
#line 1900 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 805:
#line 1901 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1903 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 807:
#line 1904 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 808:
#line 1905 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 809:
#line 1907 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 810:
#line 1908 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1910 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1913 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 813:
#line 1916 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 814:
#line 1918 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 815:
#line 1919 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 819:
#line 1924 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 820:
#line 1925 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 821:
#line 1927 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 822:
#line 1929 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 823:
#line 1931 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 824:
#line 1932 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 825:
#line 1934 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 826:
#line 1935 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 829:
#line 1940 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 831:
#line 1942 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 832:
#line 1943 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 833:
#line 1944 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1945 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 835:
#line 1946 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 836:
#line 1947 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 837:
#line 1948 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 838:
#line 1949 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 839:
#line 1951 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 840:
#line 1953 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 841:
#line 1954 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 842:
#line 1955 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 843:
#line 1956 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 844:
#line 1957 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1959 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1960 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1961 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 848:
#line 1962 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 849:
#line 1963 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1965 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 851:
#line 1966 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 852:
#line 1967 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 853:
#line 1968 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 854:
#line 1969 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 855:
#line 1970 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 856:
#line 1973 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 857:
#line 1974 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 858:
#line 1975 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 859:
#line 1976 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 860:
#line 1977 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 861:
#line 1978 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 862:
#line 1979 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 863:
#line 1980 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 864:
#line 1981 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 865:
#line 1982 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 866:
#line 1983 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 867:
#line 1984 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 868:
#line 1985 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 869:
#line 1986 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 870:
#line 1987 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 871:
#line 1988 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 872:
#line 1989 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 873:
#line 1990 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 874:
#line 1991 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 875:
#line 1992 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 876:
#line 1993 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 877:
#line 1996 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 878:
#line 1997 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 879:
#line 1998 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 880:
#line 1999 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 881:
#line 2000 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 882:
#line 2002 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 883:
#line 2012 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 884:
#line 2020 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 885:
#line 2029 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 886:
#line 2037 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 887:
#line 2044 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 888:
#line 2051 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 889:
#line 2059 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 890:
#line 2067 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 891:
#line 2072 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2077 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2082 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2087 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2092 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2097 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2102 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2111 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2121 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2131 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2140 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2148 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2158 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2168 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2178 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2190 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2199 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2207 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 910:
#line 2209 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 911:
#line 2211 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 912:
#line 2216 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 913:
#line 2219 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 914:
#line 2223 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 915:
#line 2225 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2226 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 917:
#line 2229 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 918:
#line 2230 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 919:
#line 2231 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 920:
#line 2232 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 921:
#line 2233 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 922:
#line 2234 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 923:
#line 2235 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 925:
#line 2239 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 926:
#line 2240 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 927:
#line 2241 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 928:
#line 2242 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 929:
#line 2243 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 930:
#line 2246 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 931:
#line 2248 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 932:
#line 2250 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 933:
#line 2252 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 934:
#line 2254 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 935:
#line 2256 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 936:
#line 2258 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 937:
#line 2259 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 938:
#line 2260 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 939:
#line 2262 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2264 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 941:
#line 2266 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 942:
#line 2268 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 943:
#line 2270 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 944:
#line 2271 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 945:
#line 2272 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 946:
#line 2274 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 947:
#line 2276 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2279 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 949:
#line 2281 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 950:
#line 2283 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 951:
#line 2284 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 952:
#line 2285 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 953:
#line 2286 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2288 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2289 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 956:
#line 2290 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2291 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 958:
#line 2292 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 959:
#line 2294 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2296 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2297 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 962:
#line 2299 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2301 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2303 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 965:
#line 2304 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 966:
#line 2306 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2308 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2309 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 969:
#line 2310 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2311 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 971:
#line 2313 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2315 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 973:
#line 2318 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 974:
#line 2321 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2322 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2323 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2325 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 978:
#line 2328 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2331 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2332 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 981:
#line 2333 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 982:
#line 2334 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2336 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2338 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 985:
#line 2340 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2341 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 987:
#line 2343 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2344 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 989:
#line 2345 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2346 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2347 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2349 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2351 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2353 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2355 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2357 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 998:
#line 2358 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 999:
#line 2360 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1000:
#line 2362 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1001:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1002:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1004:
#line 2366 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1006:
#line 2370 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1007:
#line 2371 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1008:
#line 2372 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1009:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2374 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1011:
#line 2375 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1012:
#line 2377 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1013:
#line 2378 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1014:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1015:
#line 2383 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1016:
#line 2384 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1017:
#line 2385 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1018:
#line 2386 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1019:
#line 2389 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1020:
#line 2390 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1021:
#line 2393 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1022:
#line 2394 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1023:
#line 2397 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1024:
#line 2398 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1025:
#line 2401 "frame/parser.Y"
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
#line 2414 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1027:
#line 2415 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1028:
#line 2419 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1029:
#line 2420 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1030:
#line 2424 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1031:
#line 2429 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1032:
#line 2434 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1033:
#line 2440 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1034:
#line 2442 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1035:
#line 2445 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2447 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1037:
#line 2450 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1038:
#line 2453 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1039:
#line 2454 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1040:
#line 2455 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1041:
#line 2456 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1042:
#line 2457 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1043:
#line 2458 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1044:
#line 2460 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1047:
#line 2467 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1048:
#line 2468 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1049:
#line 2469 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1050:
#line 2470 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1051:
#line 2471 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1052:
#line 2472 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1055:
#line 2477 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1056:
#line 2478 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1057:
#line 2479 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1058:
#line 2480 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1059:
#line 2481 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1060:
#line 2482 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1061:
#line 2483 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1062:
#line 2484 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1063:
#line 2485 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1064:
#line 2486 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1065:
#line 2487 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1068:
#line 2494 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1069:
#line 2495 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1071:
#line 2498 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1072:
#line 2499 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1073:
#line 2500 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1074:
#line 2501 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2504 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1076:
#line 2505 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1079:
#line 2513 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1080:
#line 2516 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1081:
#line 2517 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1085:
#line 2524 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1086:
#line 2527 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1087:
#line 2531 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1088:
#line 2532 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1089:
#line 2533 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1090:
#line 2534 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1091:
#line 2537 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1092:
#line 2538 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1093:
#line 2539 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1094:
#line 2540 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1095:
#line 2544 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1096:
#line 2545 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1097:
#line 2547 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1098:
#line 2552 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1100:
#line 2554 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2556 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1103:
#line 2559 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1104:
#line 2561 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1105:
#line 2566 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1106:
#line 2569 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2570 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1108:
#line 2571 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2574 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1110:
#line 2576 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1111:
#line 2580 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1112:
#line 2581 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1113:
#line 2585 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1114:
#line 2586 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1115:
#line 2587 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2588 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1117:
#line 2594 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1118:
#line 2595 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1119:
#line 2601 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1120:
#line 2602 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1121:
#line 2603 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1122:
#line 2604 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1125:
#line 2612 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1126:
#line 2614 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1127:
#line 2615 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1128:
#line 2616 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1129:
#line 2620 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2621 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2622 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1132:
#line 2623 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1133:
#line 2626 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1134:
#line 2627 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1135:
#line 2630 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1136:
#line 2631 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1137:
#line 2632 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1138:
#line 2635 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1139:
#line 2636 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1140:
#line 2637 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1141:
#line 2640 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1142:
#line 2641 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1146:
#line 2647 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1147:
#line 2648 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1148:
#line 2649 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1153:
#line 2656 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1154:
#line 2660 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1155:
#line 2662 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1156:
#line 2664 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2669 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1159:
#line 2671 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2673 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1170:
#line 2686 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1171:
#line 2687 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1172:
#line 2688 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2691 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2692 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1175:
#line 2693 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1176:
#line 2696 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2697 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1178:
#line 2698 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1179:
#line 2701 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2702 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2703 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2707 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1184:
#line 2708 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2709 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2712 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2713 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2714 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1189:
#line 2717 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2718 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2719 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1192:
#line 2722 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2723 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2724 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2727 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2728 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2729 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2733 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1199:
#line 2735 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1200:
#line 2737 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2741 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1202:
#line 2745 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1203:
#line 2746 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1204:
#line 2749 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1205:
#line 2750 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1206:
#line 2751 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1207:
#line 2752 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1208:
#line 2755 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1209:
#line 2757 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1210:
#line 2758 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1211:
#line 2760 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1213:
#line 2764 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1214:
#line 2766 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1215:
#line 2767 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1216:
#line 2773 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1217:
#line 2774 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1218:
#line 2778 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2780 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2785 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2786 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2787 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1226:
#line 2790 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2791 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2792 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1229:
#line 2795 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1230:
#line 2797 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1231:
#line 2802 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1232:
#line 2805 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1233:
#line 2812 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2814 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1235:
#line 2816 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1236:
#line 2821 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1238:
#line 2825 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1239:
#line 2826 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1240:
#line 2827 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1241:
#line 2829 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1242:
#line 2831 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1243:
#line 2836 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10698 "frame/parser.C"
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


#line 2840 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

