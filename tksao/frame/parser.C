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
#define YYFINAL  354
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  348
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1246
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2769

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
    1396,  1398,  1400,  1402,  1404,  1406,  1409,  1411,  1414,  1416,
    1419,  1422,  1425,  1428,  1430,  1432,  1434,  1435,  1437,  1438,
    1440,  1441,  1443,  1444,  1446,  1447,  1450,  1453,  1454,  1456,
    1459,  1461,  1468,  1474,  1476,  1478,  1480,  1483,  1486,  1488,
    1490,  1492,  1494,  1497,  1499,  1501,  1503,  1506,  1508,  1510,
    1512,  1515,  1518,  1521,  1522,  1524,  1525,  1527,  1529,  1531,
    1533,  1535,  1537,  1539,  1541,  1544,  1547,  1550,  1552,  1555,
    1559,  1561,  1564,  1567,  1572,  1579,  1581,  1592,  1594,  1597,
    1601,  1605,  1608,  1611,  1614,  1617,  1620,  1623,  1626,  1631,
    1636,  1641,  1645,  1649,  1655,  1660,  1665,  1670,  1674,  1678,
    1682,  1686,  1689,  1692,  1697,  1701,  1705,  1709,  1713,  1718,
    1723,  1728,  1733,  1739,  1744,  1751,  1759,  1764,  1769,  1775,
    1778,  1782,  1786,  1790,  1793,  1797,  1801,  1805,  1809,  1814,
    1818,  1824,  1831,  1835,  1839,  1844,  1848,  1852,  1856,  1860,
    1864,  1870,  1874,  1878,  1883,  1887,  1890,  1893,  1895,  1899,
    1904,  1909,  1914,  1919,  1924,  1931,  1936,  1941,  1947,  1952,
    1957,  1962,  1967,  1973,  1978,  1985,  1993,  1998,  2003,  2009,
    2015,  2021,  2027,  2033,  2039,  2047,  2053,  2059,  2066,  2071,
    2076,  2081,  2086,  2091,  2098,  2103,  2108,  2114,  2120,  2126,
    2132,  2138,  2145,  2151,  2159,  2168,  2174,  2180,  2187,  2191,
    2195,  2199,  2203,  2208,  2212,  2218,  2225,  2229,  2233,  2238,
    2242,  2246,  2250,  2254,  2258,  2264,  2268,  2272,  2277,  2282,
    2287,  2291,  2297,  2302,  2307,  2310,  2314,  2321,  2328,  2330,
    2332,  2334,  2337,  2340,  2343,  2347,  2351,  2354,  2367,  2370,
    2373,  2375,  2379,  2384,  2387,  2388,  2392,  2394,  2396,  2399,
    2402,  2405,  2408,  2411,  2416,  2421,  2426,  2430,  2435,  2441,
    2450,  2457,  2462,  2472,  2479,  2487,  2498,  2510,  2523,  2533,
    2539,  2544,  2551,  2555,  2561,  2567,  2574,  2580,  2585,  2595,
    2606,  2618,  2628,  2635,  2642,  2649,  2656,  2663,  2670,  2677,
    2684,  2691,  2699,  2707,  2710,  2715,  2720,  2725,  2730,  2736,
    2741,  2746,  2752,  2758,  2762,  2767,  2772,  2777,  2782,  2790,
    2800,  2807,  2818,  2830,  2843,  2853,  2857,  2860,  2864,  2870,
    2878,  2883,  2887,  2891,  2898,  2906,  2914,  2919,  2924,  2929,
    2939,  2944,  2948,  2953,  2961,  2969,  2972,  2976,  2980,  2984,
    2989,  2992,  2995,  3000,  3011,  3015,  3017,  3021,  3024,  3027,
    3030,  3033,  3037,  3043,  3048,  3054,  3057,  3065,  3069,  3072,
    3075,  3079,  3082,  3085,  3088,  3092,  3095,  3099,  3104,  3108,
    3112,  3119,  3124,  3127,  3131,  3134,  3137,  3142,  3146,  3150,
    3153,  3157,  3159,  3162,  3164,  3167,  3170,  3173,  3175,  3177,
    3179,  3181,  3184,  3186,  3189,  3192,  3194,  3197,  3200,  3202,
    3205,  3207,  3209,  3211,  3213,  3215,  3217,  3219,  3221,  3222,
    3224,  3227,  3230,  3233,  3237,  3243,  3251,  3259,  3266,  3273,
    3280,  3287,  3293,  3300,  3307,  3314,  3321,  3328,  3335,  3342,
    3354,  3362,  3370,  3378,  3388,  3398,  3409,  3422,  3435,  3438,
    3441,  3445,  3450,  3455,  3460,  3463,  3468,  3473,  3475,  3477,
    3479,  3481,  3483,  3485,  3487,  3489,  3492,  3494,  3496,  3498,
    3502,  3506,  3511,  3518,  3529,  3538,  3546,  3552,  3555,  3558,
    3562,  3567,  3573,  3577,  3583,  3589,  3593,  3598,  3604,  3610,
    3616,  3620,  3626,  3629,  3633,  3637,  3643,  3647,  3651,  3655,
    3660,  3666,  3672,  3676,  3682,  3688,  3692,  3697,  3703,  3709,
    3712,  3715,  3719,  3725,  3732,  3739,  3743,  3747,  3751,  3758,
    3764,  3770,  3773,  3777,  3781,  3787,  3794,  3798,  3801,  3804,
    3808,  3811,  3815,  3818,  3822,  3828,  3835,  3838,  3841,  3844,
    3846,  3851,  3856,  3858,  3861,  3864,  3867,  3870,  3873,  3876,
    3879,  3883,  3886,  3890,  3893,  3897,  3899,  3901,  3903,  3905,
    3907,  3908,  3911,  3912,  3915,  3916,  3918,  3919,  3920,  3922,
    3924,  3926,  3928,  3936,  3945,  3948,  3953,  3956,  3961,  3968,
    3971,  3973,  3975,  3979,  3983,  3985,  3990,  3993,  3995,  3999,
    4003,  4008,  4012,  4016,  4020,  4022,  4024,  4026,  4028,  4030,
    4032,  4034,  4036,  4038,  4040,  4042,  4044,  4046,  4048,  4051,
    4052,  4053,  4056,  4058,  4062,  4064,  4068,  4070,  4073,  4076,
    4078,  4082,  4083,  4084,  4087,  4090,  4092,  4096,  4102,  4104,
    4107,  4110,  4113,  4116,  4118,  4120,  4122,  4124,  4129,  4132,
    4136,  4140,  4143,  4147,  4150,  4153,  4156,  4160,  4164,  4168,
    4171,  4175,  4177,  4181,  4185,  4187,  4190,  4193,  4196,  4199,
    4209,  4216,  4218,  4220,  4222,  4224,  4227,  4230,  4234,  4238,
    4240,  4243,  4247,  4251,  4253,  4256,  4258,  4260,  4262,  4264,
    4266,  4269,  4272,  4277,  4279,  4282,  4285,  4288,  4292,  4294,
    4296,  4298,  4301,  4304,  4307,  4310,  4313,  4317,  4321,  4325,
    4329,  4333,  4337,  4341,  4343,  4346,  4349,  4352,  4356,  4359,
    4363,  4367,  4370,  4373,  4376,  4379,  4382,  4385,  4388,  4391,
    4394,  4397,  4400,  4403,  4406,  4409,  4413,  4417,  4421,  4424,
    4427,  4430,  4433,  4436,  4439,  4442,  4445,  4448,  4451,  4454,
    4457,  4461,  4465,  4469,  4474,  4481,  4484,  4486,  4488,  4490,
    4492,  4494,  4495,  4501,  4503,  4510,  4514,  4516,  4520,  4523,
    4526,  4530,  4534,  4537,  4540,  4543,  4546,  4549,  4552,  4556,
    4559,  4562,  4566,  4568,  4572,  4577,  4579,  4582,  4588,  4595,
    4602,  4605,  4607,  4610,  4613,  4619,  4626
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
     278,    -1,   287,    -1,   229,    -1,    61,    -1,   278,    -1,
     301,    -1,   134,    -1,   236,    -1,   236,   187,    -1,   263,
      -1,   263,   187,    -1,    21,    -1,   301,   450,    -1,    47,
     447,    -1,    74,   448,    -1,   149,   449,    -1,   185,    -1,
      37,    -1,   250,    -1,    -1,    66,    -1,    -1,    66,    -1,
      -1,    66,    -1,    -1,   222,    -1,    -1,    16,   452,    -1,
     195,   361,    -1,    -1,   223,    -1,    83,   454,    -1,    99,
      -1,   360,   365,   366,   455,     5,     5,    -1,   360,   365,
     366,   455,     5,    -1,    20,    -1,   232,    -1,    19,    -1,
      44,   457,    -1,    77,   458,    -1,    84,    -1,    94,    -1,
      95,    -1,   101,    -1,   124,   459,    -1,   141,    -1,   155,
      -1,   162,    -1,   182,   460,    -1,   218,    -1,   156,    -1,
     268,    -1,   278,   360,    -1,   307,   461,    -1,    72,     5,
      -1,    -1,    31,    -1,    -1,    44,    -1,    87,    -1,   191,
      -1,   149,    -1,   255,    -1,   215,    -1,   293,    -1,   360,
      -1,    58,   360,    -1,   115,   360,    -1,   172,   360,    -1,
      18,    -1,   284,   360,    -1,   199,     4,     4,    -1,   116,
      -1,   184,     5,    -1,    88,   464,    -1,   256,   120,   195,
     463,    -1,   256,     6,     4,     4,     4,     4,    -1,   297,
      -1,   307,   350,   350,   350,   350,   350,   350,   350,   350,
       4,    -1,     5,    -1,     5,     4,    -1,     4,     4,    56,
      -1,     4,     4,   360,    -1,   192,   352,    -1,    26,   466,
      -1,   112,   468,    -1,   124,   469,    -1,   158,   482,    -1,
     204,   480,    -1,   217,   481,    -1,     5,    14,     5,   370,
      -1,     5,    15,     5,   370,    -1,     5,    61,     5,   370,
      -1,     5,   189,   370,    -1,     5,   190,   370,    -1,     5,
     259,   368,     4,   370,    -1,     5,   269,     4,   370,    -1,
       5,   270,     4,   370,    -1,     5,   300,     5,   370,    -1,
     242,    87,   467,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   189,    -1,     5,
     190,    -1,     5,   259,   368,     4,    -1,     5,   269,     4,
      -1,     5,   270,     4,    -1,     5,   300,     5,    -1,     5,
       5,   267,    -1,     5,    14,     5,   370,    -1,     5,    15,
       5,   370,    -1,     5,    61,     5,   370,    -1,     5,   189,
     369,   370,    -1,     5,     5,   267,   369,   370,    -1,     5,
     190,   369,   370,    -1,     5,   259,   368,     4,   369,   370,
      -1,     5,   274,   368,     4,     4,   369,   370,    -1,     5,
     269,     4,   370,    -1,     5,   270,     4,   370,    -1,     5,
     300,     5,   369,   370,    -1,   266,   470,    -1,   117,    87,
     471,    -1,   242,   156,   479,    -1,   242,    87,   478,    -1,
     191,   472,    -1,     5,    14,     5,    -1,     5,    15,     5,
      -1,     5,    61,     5,    -1,     5,   189,   369,    -1,     5,
       5,   267,   369,    -1,     5,   190,   369,    -1,     5,   259,
     368,     4,   369,    -1,     5,   274,   368,     4,     4,   369,
      -1,     5,   269,     4,    -1,     5,   270,     4,    -1,     5,
     300,     5,   369,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   189,   369,    -1,
       5,   190,   369,    -1,     5,   259,   368,     4,   369,    -1,
       5,   269,     4,    -1,     5,   270,     4,    -1,     5,   300,
       5,   369,    -1,   156,   161,   473,    -1,   161,   474,    -1,
     156,   475,    -1,   477,    -1,   156,   335,   476,    -1,     5,
      14,     5,   370,    -1,     5,    15,     5,   370,    -1,     5,
      61,     5,   370,    -1,     5,   189,   369,   370,    -1,     5,
     190,   369,   370,    -1,     5,   259,   368,     4,   369,   370,
      -1,     5,   269,     4,   370,    -1,     5,   270,     4,   370,
      -1,     5,   300,     5,   369,   370,    -1,     5,    14,     5,
     370,    -1,     5,    15,     5,   370,    -1,     5,    61,     5,
     370,    -1,     5,   189,   369,   370,    -1,     5,     5,   267,
     369,   370,    -1,     5,   190,   369,   370,    -1,     5,   259,
     368,     4,   369,   370,    -1,     5,   274,   368,     4,     4,
     369,   370,    -1,     5,   269,     4,   370,    -1,     5,   270,
       4,   370,    -1,     5,   300,     5,   369,   370,    -1,   361,
       5,    14,     5,   370,    -1,   361,     5,    15,     5,   370,
      -1,   361,     5,    61,     5,   370,    -1,   361,     5,   189,
     369,   370,    -1,   361,     5,   190,   369,   370,    -1,   361,
       5,   259,   368,     4,   369,   370,    -1,   361,     5,   269,
       4,   370,    -1,   361,     5,   270,     4,   370,    -1,   361,
       5,   300,     5,   369,   370,    -1,     5,    14,     5,   370,
      -1,     5,    15,     5,   370,    -1,     5,    61,     5,   370,
      -1,     5,   189,   369,   370,    -1,     5,   190,   369,   370,
      -1,     5,   259,   368,     4,   369,   370,    -1,     5,   269,
       4,   370,    -1,     5,   270,     4,   370,    -1,     5,   300,
       5,   369,   370,    -1,   361,     5,    14,     5,   370,    -1,
     361,     5,    15,     5,   370,    -1,   361,     5,    61,     5,
     370,    -1,   361,     5,   189,   369,   370,    -1,   361,     5,
       5,   267,   369,   370,    -1,   361,     5,   190,   369,   370,
      -1,   361,     5,   259,   368,     4,   369,   370,    -1,   361,
       5,   274,   368,     4,     4,   369,   370,    -1,   361,     5,
     269,     4,   370,    -1,   361,     5,   270,     4,   370,    -1,
     361,     5,   300,     5,   369,   370,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     189,   369,    -1,     5,     5,   267,   369,    -1,     5,   190,
     369,    -1,     5,   259,   368,     4,   369,    -1,     5,   274,
     368,     4,     4,   369,    -1,     5,   269,     4,    -1,     5,
     270,     4,    -1,     5,   300,     5,   369,    -1,     5,    14,
       5,    -1,     5,    15,     5,    -1,     5,    61,     5,    -1,
       5,   189,   369,    -1,     5,   190,   369,    -1,     5,   259,
     368,     4,   369,    -1,     5,   269,     4,    -1,     5,   270,
       4,    -1,     5,   300,     5,   369,    -1,     5,    14,     5,
     370,    -1,     5,    61,     5,   370,    -1,     5,   189,   370,
      -1,     5,   259,   368,     4,   370,    -1,     5,   269,     4,
     370,    -1,     5,   300,     5,   370,    -1,     5,     5,    -1,
     266,     5,     5,    -1,    93,     4,     4,     4,     4,     4,
      -1,   186,     4,     4,     4,     4,     4,    -1,   111,    -1,
     228,    -1,   352,    -1,   139,   352,    -1,    88,   352,    -1,
      66,     5,    -1,     5,     4,     4,    -1,   297,   350,   350,
      -1,   343,   350,    -1,     5,     5,   361,   365,     5,     5,
     361,   365,   350,   361,   367,     5,    -1,    60,   489,    -1,
      66,     5,    -1,    80,    -1,    73,   494,     5,    -1,    73,
     494,   300,     5,    -1,    75,    99,    -1,    -1,    83,   487,
     490,    -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,
     493,    -1,   114,     4,    -1,   129,     5,    -1,   149,    17,
      -1,   149,   209,   350,   350,    -1,   149,   289,   350,   350,
      -1,     4,    20,   373,   352,    -1,     4,    21,   355,    -1,
       4,    21,   355,   362,    -1,     4,    21,   355,   360,   365,
      -1,     4,    22,   236,   350,   350,     4,   360,   367,    -1,
       4,    22,   236,     5,   360,   367,    -1,     4,    48,   121,
     352,    -1,     4,    49,   236,   350,   350,   350,     4,   360,
     367,    -1,     4,    49,   236,     5,   360,   367,    -1,     4,
      48,   236,   350,   350,   360,   367,    -1,     4,    52,   105,
     355,   355,     4,   350,   350,   350,     4,    -1,     4,    52,
     105,   355,   355,     4,   350,   350,   350,     4,   362,    -1,
       4,    52,   105,   355,   355,     4,   350,   350,   350,     4,
     360,   365,    -1,     4,    52,   105,     5,     5,   360,   365,
     360,   367,    -1,     4,    55,   488,     5,     5,    -1,     4,
      62,   121,   352,    -1,     4,    62,   236,   350,   360,   367,
      -1,     4,    66,     5,    -1,     4,    74,    27,   352,   352,
      -1,     4,    74,   166,     5,     5,    -1,     4,    74,   236,
     350,   360,   367,    -1,     4,    74,   278,   360,   365,    -1,
       4,    75,   138,   352,    -1,     4,    82,   105,   355,   355,
       4,   350,   350,     4,    -1,     4,    82,   105,   355,   355,
       4,   350,   350,     4,   362,    -1,     4,    82,   105,   355,
     355,     4,   350,   350,     4,   360,   365,    -1,     4,    82,
     105,     5,     5,   360,   365,   360,   367,    -1,     4,    83,
      22,   236,   350,   350,    -1,     4,    83,    49,   236,   350,
     350,    -1,     4,    83,    52,    21,   350,   350,    -1,     4,
      83,    52,   236,   350,   350,    -1,     4,    83,   110,   236,
     350,   350,    -1,     4,    83,   113,    21,   350,   350,    -1,
       4,    83,   113,   236,   350,   350,    -1,     4,    83,    82,
      21,   350,   350,    -1,     4,    83,    82,   236,   350,   350,
      -1,     4,    83,   224,   304,     4,   350,   350,    -1,     4,
      83,   254,   304,     4,   350,   350,    -1,     4,    99,    -1,
       4,    99,    22,     4,    -1,     4,    99,    49,     4,    -1,
       4,    99,    52,     4,    -1,     4,    99,   110,     4,    -1,
       4,    99,    55,   488,     5,    -1,     4,    99,   113,     4,
      -1,     4,    99,    82,     4,    -1,     4,    99,   224,   304,
       4,    -1,     4,    99,   254,   304,     4,    -1,     4,    99,
     280,    -1,     4,    99,   280,     5,    -1,     4,    99,   280,
       4,    -1,     4,   105,    40,     4,    -1,     4,   109,   121,
     352,    -1,     4,   109,   236,   350,   350,   360,   367,    -1,
       4,   110,   236,   350,   350,   350,     4,   360,   367,    -1,
       4,   110,   236,     5,   360,   367,    -1,     4,   113,   105,
     355,   355,     4,   350,   350,   350,     4,    -1,     4,   113,
     105,   355,   355,     4,   350,   350,   350,     4,   362,    -1,
       4,   113,   105,   355,   355,     4,   350,   350,   350,     4,
     360,   365,    -1,     4,   113,   105,     5,     5,   360,   365,
     360,   367,    -1,     4,   129,     5,    -1,     4,   149,    -1,
       4,   149,   209,    -1,     4,   171,    27,   352,   352,    -1,
       4,   171,   222,   360,   365,   359,   359,    -1,     4,   194,
     350,   350,    -1,     4,   194,   132,    -1,     4,   194,    36,
      -1,     4,   194,   288,   360,   365,   359,    -1,     4,   224,
     240,   350,   350,   360,   367,    -1,     4,   254,   240,   350,
     350,   360,   367,    -1,     4,   222,   258,   371,    -1,     4,
     222,   265,     4,    -1,     4,   224,   121,   352,    -1,     4,
     230,   360,   365,   359,   359,   350,   360,   367,    -1,     4,
     231,   507,   352,    -1,     4,   244,    40,    -1,     4,   245,
     130,     5,    -1,     4,   245,   222,   360,   365,   359,   359,
      -1,     4,   245,   278,   360,   365,   360,   367,    -1,     4,
     255,    -1,     4,   255,   209,    -1,     4,   280,     5,    -1,
       4,   282,     5,    -1,     4,   282,   244,   352,    -1,     4,
     294,    -1,     4,   296,    -1,     4,   302,    27,   352,    -1,
       4,   302,   222,   360,   365,   359,   360,   367,   350,   355,
      -1,     4,   336,     4,    -1,   164,    -1,   164,   350,   350,
      -1,   173,   502,    -1,   174,   503,    -1,   194,   504,    -1,
     229,   352,    -1,   231,   507,   352,    -1,   231,   507,   352,
     350,   350,    -1,   244,    40,   350,   350,    -1,   244,   193,
     350,   350,     4,    -1,   244,   111,    -1,   249,     5,   494,
     360,   365,   366,   352,    -1,   249,   281,     5,    -1,   255,
     511,    -1,   262,   512,    -1,     5,    66,     5,    -1,     5,
      80,    -1,     5,    99,    -1,     5,    89,    -1,     5,   129,
       5,    -1,     5,   149,    -1,     5,   149,   209,    -1,     5,
     194,   350,   350,    -1,     5,   194,   132,    -1,     5,   194,
      36,    -1,     5,   194,   288,   360,   365,   359,    -1,     5,
     231,   507,   352,    -1,     5,   255,    -1,     5,   255,   209,
      -1,     5,   294,    -1,     5,   296,    -1,   280,   105,     5,
       5,    -1,   280,    99,     5,    -1,   280,    99,    17,    -1,
     280,     5,    -1,   280,   297,     5,    -1,   215,    -1,   215,
     360,    -1,   293,    -1,   294,    17,    -1,   296,    17,    -1,
     336,     4,    -1,   255,    -1,   296,    -1,   149,    -1,   294,
      -1,    40,   194,    -1,   194,    -1,   111,   194,    -1,    40,
     105,    -1,   105,    -1,   111,   105,    -1,    40,   244,    -1,
     244,    -1,   111,   244,    -1,    99,    -1,   282,    -1,    66,
      -1,   336,    -1,   231,    -1,   129,    -1,   164,    -1,   297,
      -1,    -1,     4,    -1,    30,   352,    -1,   236,   350,    -1,
     160,     4,    -1,   210,     4,   350,    -1,    62,   350,   350,
     350,   508,    -1,   109,   350,   350,   350,   350,   354,   508,
      -1,    48,   350,   350,   350,   350,   354,   508,    -1,   224,
     350,   350,   350,   350,   508,    -1,   254,   350,   350,   350,
     350,   508,    -1,   171,   350,   350,   350,   350,   508,    -1,
     302,   350,   350,   350,   350,   508,    -1,   282,   350,   350,
     354,   508,    -1,    62,   222,   350,   350,   372,   508,    -1,
      48,   222,   350,   350,   372,   508,    -1,   102,   222,   350,
     350,   372,   508,    -1,    85,   222,   350,   350,   372,   508,
      -1,   346,   222,   350,   350,   372,   508,    -1,    27,   222,
     350,   350,   372,   508,    -1,    51,   222,   350,   350,   372,
     508,    -1,   245,   350,   350,   350,   350,   360,   365,   360,
     367,     5,   508,    -1,    74,   350,   350,   350,   360,   365,
     508,    -1,   230,   350,   350,   350,   350,   350,   508,    -1,
      22,   350,   350,   350,   350,     4,   508,    -1,   110,   350,
     350,   350,   350,   350,     4,   354,   508,    -1,    49,   350,
     350,   350,   350,   350,     4,   354,   508,    -1,    82,   350,
     350,   355,   355,     4,   350,   350,     4,   508,    -1,   113,
     350,   350,   355,   355,     4,   350,   350,   350,     4,   354,
     508,    -1,    52,   350,   350,   355,   355,     4,   350,   350,
     350,     4,   354,   508,    -1,    75,   508,    -1,   281,   491,
      -1,     5,   350,   350,    -1,   300,     5,   350,   350,    -1,
     350,   350,   300,     5,    -1,     5,   360,   365,   359,    -1,
       4,     4,    -1,    40,   350,   350,     4,    -1,   193,   350,
     350,     4,    -1,   111,    -1,   104,    -1,   338,    -1,    63,
      -1,   248,    -1,   247,    -1,   233,    -1,   339,    -1,    60,
     496,    -1,    66,    -1,   129,    -1,   114,    -1,   143,   350,
     350,    -1,   154,   350,   350,    -1,     4,    20,    82,   360,
      -1,     4,    20,   151,     5,     5,     4,    -1,     4,    20,
     220,     5,     5,     5,     5,   360,   365,   374,    -1,     4,
      20,   221,     5,     5,   360,   365,   374,    -1,     4,    20,
     235,     5,     5,     5,   360,    -1,     4,    20,   275,   360,
     365,    -1,   154,    17,    -1,     4,    21,    -1,     4,    21,
     362,    -1,     4,    21,   360,   365,    -1,     4,    22,   236,
     360,   367,    -1,     4,    48,   121,    -1,     4,    49,   236,
     360,   367,    -1,     4,    48,   236,   360,   367,    -1,     4,
      52,    21,    -1,     4,    52,    21,   362,    -1,     4,    52,
      21,   360,   365,    -1,     4,    52,   236,   360,   367,    -1,
       4,    59,   360,   365,   366,    -1,     4,    62,   121,    -1,
       4,    62,   236,   360,   367,    -1,     4,    66,    -1,     4,
      74,    27,    -1,     4,    74,   166,    -1,     4,    74,   236,
     360,   367,    -1,     4,    74,   278,    -1,     4,    75,   138,
      -1,     4,    82,    21,    -1,     4,    82,    21,   362,    -1,
       4,    82,    21,   360,   365,    -1,     4,    82,   236,   360,
     367,    -1,     4,   109,   121,    -1,     4,   109,   236,   360,
     367,    -1,     4,   110,   236,   360,   367,    -1,     4,   113,
      21,    -1,     4,   113,    21,   362,    -1,     4,   113,    21,
     360,   365,    -1,     4,   113,   236,   360,   367,    -1,     4,
     129,    -1,     4,   149,    -1,     4,   171,    27,    -1,     4,
     171,   167,   360,   367,    -1,     4,   171,   222,   360,   365,
     366,    -1,     4,   180,   167,   350,   360,   367,    -1,     4,
     224,   121,    -1,     4,   222,   258,    -1,     4,   222,   265,
      -1,     4,   230,   222,   360,   365,   366,    -1,     4,   230,
     167,   360,   367,    -1,     4,   230,   286,   360,   367,    -1,
       4,   231,    -1,     4,   231,   507,    -1,     4,   245,   130,
      -1,     4,   245,   167,   360,   367,    -1,     4,   245,   222,
     360,   365,   366,    -1,     4,   245,   278,    -1,     4,   255,
      -1,     4,   280,    -1,     4,   280,     4,    -1,     4,   282,
      -1,     4,   282,   244,    -1,     4,   292,    -1,     4,   302,
      27,    -1,     4,   302,   167,   360,   367,    -1,     4,   302,
     222,   360,   365,   366,    -1,     4,   336,    -1,   149,   497,
      -1,   149,   205,    -1,   205,    -1,   224,   254,   350,   350,
      -1,   254,   254,   350,   350,    -1,   229,    -1,   231,   507,
      -1,   255,   498,    -1,   255,   205,    -1,   262,   499,    -1,
       5,    66,    -1,     5,   129,    -1,     5,   154,    -1,     5,
     231,   507,    -1,     5,   280,    -1,     5,   280,   205,    -1,
     280,    17,    -1,   280,    98,   195,    -1,   336,    -1,    30,
      -1,   236,    -1,   160,    -1,   210,    -1,    -1,   350,   350,
      -1,    -1,   350,   350,    -1,    -1,   282,    -1,    -1,    -1,
     223,    -1,   237,    -1,   298,    -1,    57,    -1,   494,   360,
     365,   366,   352,   509,   515,    -1,   255,   494,   360,   365,
     366,   352,   509,   515,    -1,   494,     5,    -1,   494,     5,
     360,   365,    -1,   494,     4,    -1,   494,     4,   360,   365,
      -1,   124,     5,     5,   492,     4,     5,    -1,   350,   350,
      -1,   132,    -1,    36,    -1,    40,   350,   350,    -1,   193,
     350,   350,    -1,   111,    -1,   288,   360,   365,   359,    -1,
     505,   506,    -1,   506,    -1,   507,   347,   352,    -1,    66,
     347,     5,    -1,    92,   347,     4,     4,    -1,   336,   347,
       4,    -1,   129,   347,     5,    -1,   282,   347,     5,    -1,
     518,    -1,   519,    -1,   202,    -1,   255,    -1,   149,    -1,
      91,    -1,   126,    -1,   105,    -1,   194,    -1,   244,    -1,
      99,    -1,   157,    -1,   271,    -1,   500,    -1,   500,   505,
      -1,    -1,    -1,   510,   513,    -1,    17,    -1,   209,   350,
     350,    -1,   289,    -1,   289,   350,   350,    -1,   352,    -1,
     282,   352,    -1,   513,   514,    -1,   514,    -1,   507,   347,
     352,    -1,    -1,    -1,   516,   517,    -1,   517,   518,    -1,
     518,    -1,   280,   347,     5,    -1,    55,   347,   488,     5,
       5,    -1,    64,    -1,    66,     5,    -1,   181,     4,    -1,
     278,   360,    -1,   287,   350,    -1,   346,    -1,   344,    -1,
     339,    -1,   202,    -1,   350,   350,   350,   350,    -1,   350,
     350,    -1,   362,   350,   350,    -1,   360,   365,   359,    -1,
     288,   523,    -1,    39,   350,   350,    -1,   193,   524,    -1,
     229,   352,    -1,   350,   350,    -1,   362,   350,   350,    -1,
     360,   365,   359,    -1,    40,   350,   350,    -1,   350,   350,
      -1,   111,   350,   350,    -1,   352,    -1,   307,   361,   365,
      -1,     5,     4,     4,    -1,   297,    -1,    70,   528,    -1,
     168,     4,    -1,   241,     4,    -1,   250,   350,    -1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    -1,     4,
       4,     4,     4,     4,     4,    -1,    54,    -1,   140,    -1,
     242,    -1,    90,    -1,   149,   530,    -1,   255,   531,    -1,
      40,   350,   350,    -1,   193,   350,   350,    -1,   111,    -1,
     260,   111,    -1,    40,   350,   350,    -1,   193,   350,   350,
      -1,   111,    -1,   260,   111,    -1,   188,    -1,    13,    -1,
     202,    -1,    34,    -1,   107,    -1,    61,     5,    -1,   278,
     360,    -1,   301,     4,     4,     4,    -1,   350,    -1,   350,
      97,    -1,   193,   536,    -1,   288,   350,    -1,   288,   350,
      97,    -1,    40,    -1,   350,    -1,   111,    -1,    26,   538,
      -1,   124,   540,    -1,   204,   550,    -1,   112,   551,    -1,
     217,     5,    -1,   120,     5,   375,    -1,    61,     5,   375,
      -1,   269,     4,   375,    -1,   242,    87,   539,    -1,   120,
       5,   375,    -1,    61,     5,   375,    -1,   269,     4,   375,
      -1,   541,    -1,   156,   541,    -1,   279,   542,    -1,   266,
     543,    -1,   117,    87,   544,    -1,   191,   545,    -1,   242,
     156,   547,    -1,   242,    87,   548,    -1,   239,   549,    -1,
     120,     5,    -1,    61,     5,    -1,   269,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   269,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   269,     4,    -1,   120,     5,    -1,
      61,     5,    -1,   269,     4,    -1,   156,   546,    -1,   120,
       5,     4,    -1,    61,     5,     4,    -1,   269,     4,     4,
      -1,   120,     5,    -1,    61,     5,    -1,   269,     4,    -1,
     120,     5,    -1,    61,     5,    -1,   269,     4,    -1,   120,
       5,    -1,    61,     5,    -1,   269,     4,    -1,   120,     5,
      -1,    61,     5,    -1,   269,     4,    -1,   120,     5,   375,
      -1,    61,     5,   375,    -1,   269,     4,   375,    -1,   120,
       5,     5,   375,    -1,   553,     4,     4,   350,   350,   355,
      -1,   553,     4,    -1,    99,    -1,    50,    -1,   290,    -1,
     136,    -1,   108,    -1,    -1,     4,   350,   350,   350,   350,
      -1,   203,    -1,   203,     4,   350,   350,   350,   350,    -1,
     124,   266,   555,    -1,     4,    -1,   350,   360,   365,    -1,
       4,     4,    -1,   350,   350,    -1,   288,   350,   350,    -1,
     361,   365,   366,    -1,    16,   560,    -1,   240,     4,    -1,
     238,   559,    -1,    23,   558,    -1,     4,     4,    -1,     4,
       5,    -1,   282,     4,     5,    -1,     4,     4,    -1,     4,
       5,    -1,   282,     4,     5,    -1,     4,    -1,     4,   361,
     365,    -1,     4,     6,   361,   365,    -1,   228,    -1,   350,
     350,    -1,   350,   350,    12,   350,   350,    -1,   350,   350,
      12,   362,   350,   350,    -1,   350,   350,    12,   360,   365,
     359,    -1,   288,   563,    -1,   123,    -1,   123,   350,    -1,
     350,   350,    -1,   350,   350,    12,   350,   350,    -1,   350,
     350,    12,   362,   350,   350,    -1,   350,   350,    12,   360,
     365,   359,    -1
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
    1216,  1218,  1222,  1223,  1224,  1227,  1228,  1229,  1230,  1233,
    1236,  1237,  1238,  1241,  1242,  1243,  1244,  1245,  1246,  1249,
    1250,  1251,  1252,  1253,  1254,  1255,  1258,  1259,  1262,  1263,
    1266,  1267,  1270,  1271,  1274,  1275,  1276,  1279,  1280,  1283,
    1284,  1287,  1290,  1298,  1299,  1302,  1303,  1304,  1305,  1306,
    1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,
    1317,  1318,  1321,  1324,  1325,  1328,  1329,  1330,  1331,  1334,
    1335,  1336,  1337,  1340,  1341,  1342,  1343,  1344,  1345,  1348,
    1349,  1350,  1351,  1352,  1353,  1355,  1356,  1361,  1362,  1365,
    1367,  1369,  1372,  1373,  1374,  1375,  1376,  1377,  1380,  1382,
    1384,  1386,  1387,  1389,  1391,  1393,  1395,  1397,  1400,  1401,
    1402,  1403,  1404,  1405,  1407,  1408,  1409,  1412,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1429,  1432,  1434,  1436,  1438,
    1439,  1440,  1441,  1442,  1445,  1446,  1447,  1448,  1449,  1450,
    1451,  1453,  1455,  1456,  1457,  1460,  1461,  1462,  1463,  1464,
    1465,  1467,  1468,  1469,  1472,  1473,  1474,  1475,  1476,  1479,
    1482,  1485,  1488,  1491,  1494,  1497,  1500,  1503,  1508,  1511,
    1514,  1517,  1520,  1523,  1526,  1529,  1532,  1535,  1538,  1543,
    1546,  1549,  1552,  1555,  1558,  1561,  1564,  1567,  1572,  1574,
    1576,  1578,  1580,  1582,  1587,  1589,  1591,  1595,  1598,  1601,
    1604,  1607,  1610,  1613,  1616,  1619,  1622,  1625,  1630,  1631,
    1632,  1633,  1634,  1635,  1636,  1638,  1640,  1641,  1642,  1645,
    1646,  1647,  1648,  1649,  1650,  1652,  1653,  1654,  1657,  1659,
    1661,  1662,  1664,  1666,  1670,  1671,  1674,  1675,  1676,  1679,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1695,  1703,  1704,
    1705,  1706,  1708,  1710,  1711,  1711,  1712,  1713,  1714,  1715,
    1716,  1717,  1719,  1720,  1722,  1725,  1728,  1729,  1730,  1733,
    1736,  1739,  1740,  1744,  1747,  1750,  1753,  1757,  1762,  1767,
    1769,  1770,  1772,  1773,  1775,  1777,  1779,  1781,  1782,  1784,
    1786,  1790,  1795,  1797,  1799,  1801,  1803,  1805,  1807,  1809,
    1811,  1813,  1815,  1818,  1819,  1821,  1823,  1824,  1826,  1828,
    1829,  1830,  1832,  1834,  1835,  1836,  1838,  1839,  1840,  1843,
    1847,  1850,  1853,  1857,  1862,  1868,  1869,  1870,  1872,  1873,
    1877,  1879,  1880,  1881,  1884,  1887,  1890,  1892,  1894,  1895,
    1900,  1903,  1904,  1905,  1908,  1912,  1913,  1915,  1916,  1917,
    1919,  1920,  1922,  1923,  1928,  1930,  1931,  1933,  1934,  1935,
    1936,  1937,  1938,  1940,  1942,  1944,  1945,  1947,  1948,  1950,
    1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,  1961,
    1962,  1964,  1966,  1967,  1968,  1969,  1971,  1972,  1973,  1974,
    1975,  1977,  1978,  1979,  1980,  1981,  1982,  1985,  1986,  1987,
    1988,  1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,
    1998,  1999,  2000,  2001,  2002,  2003,  2004,  2005,  2008,  2009,
    2010,  2011,  2012,  2013,  2021,  2028,  2037,  2046,  2053,  2060,
    2068,  2076,  2083,  2088,  2093,  2098,  2103,  2108,  2113,  2119,
    2129,  2139,  2149,  2156,  2166,  2176,  2185,  2197,  2210,  2215,
    2218,  2220,  2222,  2227,  2231,  2234,  2236,  2238,  2241,  2242,
    2243,  2244,  2245,  2246,  2247,  2250,  2251,  2252,  2253,  2254,
    2255,  2257,  2259,  2261,  2263,  2265,  2267,  2270,  2271,  2272,
    2273,  2275,  2278,  2279,  2281,  2283,  2284,  2285,  2287,  2290,
    2293,  2294,  2296,  2297,  2298,  2299,  2301,  2302,  2303,  2304,
    2305,  2307,  2309,  2310,  2312,  2315,  2316,  2317,  2319,  2321,
    2322,  2323,  2324,  2326,  2329,  2333,  2334,  2335,  2336,  2339,
    2342,  2344,  2345,  2346,  2347,  2349,  2352,  2353,  2355,  2356,
    2357,  2358,  2359,  2361,  2362,  2364,  2367,  2368,  2369,  2370,
    2371,  2373,  2375,  2376,  2377,  2378,  2380,  2382,  2383,  2384,
    2385,  2386,  2387,  2389,  2390,  2392,  2395,  2396,  2397,  2398,
    2401,  2402,  2405,  2406,  2409,  2410,  2413,  2426,  2427,  2431,
    2432,  2436,  2439,  2444,  2451,  2453,  2456,  2458,  2461,  2465,
    2466,  2467,  2468,  2469,  2470,  2471,  2475,  2476,  2479,  2480,
    2481,  2482,  2483,  2484,  2485,  2486,  2489,  2490,  2491,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2499,  2502,  2503,  2506,
    2507,  2507,  2510,  2511,  2512,  2513,  2516,  2517,  2520,  2521,
    2524,  2528,  2529,  2529,  2532,  2533,  2536,  2539,  2543,  2544,
    2545,  2546,  2547,  2550,  2551,  2552,  2553,  2556,  2558,  2559,
    2564,  2566,  2567,  2568,  2569,  2572,  2573,  2578,  2582,  2583,
    2584,  2587,  2588,  2593,  2594,  2597,  2599,  2600,  2601,  2606,
    2608,  2614,  2615,  2616,  2617,  2620,  2621,  2624,  2626,  2628,
    2629,  2632,  2634,  2635,  2636,  2639,  2640,  2643,  2644,  2645,
    2648,  2649,  2650,  2653,  2654,  2655,  2656,  2657,  2660,  2661,
    2662,  2665,  2666,  2667,  2668,  2669,  2672,  2674,  2676,  2678,
    2681,  2683,  2685,  2688,  2689,  2690,  2691,  2692,  2693,  2694,
    2695,  2696,  2699,  2700,  2701,  2704,  2705,  2706,  2709,  2710,
    2711,  2714,  2715,  2716,  2719,  2720,  2721,  2722,  2725,  2726,
    2727,  2730,  2731,  2732,  2735,  2736,  2737,  2740,  2741,  2742,
    2745,  2747,  2749,  2753,  2757,  2759,  2764,  2767,  2768,  2769,
    2770,  2773,  2774,  2776,  2777,  2779,  2782,  2783,  2785,  2791,
    2792,  2795,  2797,  2798,  2799,  2800,  2803,  2804,  2805,  2808,
    2809,  2810,  2813,  2814,  2819,  2823,  2830,  2831,  2833,  2838,
    2840,  2843,  2844,  2845,  2846,  2848,  2853
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
     440,   440,   441,   441,   441,   442,   442,   442,   442,   443,
     444,   444,   444,   445,   445,   445,   445,   445,   445,   446,
     446,   446,   446,   446,   446,   446,   447,   447,   448,   448,
     449,   449,   450,   450,   451,   451,   451,   452,   452,   453,
     453,   454,   454,   455,   455,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   457,   458,   458,   459,   459,   459,   459,   460,
     460,   460,   460,   461,   461,   461,   461,   461,   461,   462,
     462,   462,   462,   462,   462,   462,   462,   463,   463,   464,
     464,   464,   465,   465,   465,   465,   465,   465,   466,   466,
     466,   466,   466,   466,   466,   466,   466,   466,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   468,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   472,   472,   472,   472,   472,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   474,   474,   475,
     475,   475,   475,   475,   475,   475,   475,   475,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   477,   477,   478,   478,
     478,   478,   478,   478,   478,   478,   478,   478,   478,   479,
     479,   479,   479,   479,   479,   479,   479,   479,   480,   480,
     480,   480,   480,   480,   481,   481,   482,   482,   482,   483,
     484,   484,   484,   484,   484,   484,   484,   485,   486,   486,
     486,   486,   486,   486,   487,   486,   486,   486,   486,   486,
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
     486,   486,   486,   486,   486,   486,   486,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   489,   489,
     489,   489,   489,   489,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     491,   491,   491,   491,   492,   493,   493,   493,   494,   494,
     494,   494,   494,   494,   494,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   496,   496,   496,   496,
     497,   497,   498,   498,   499,   499,   500,   501,   501,   501,
     501,   501,   502,   502,   503,   503,   503,   503,   503,   504,
     504,   504,   504,   504,   504,   504,   505,   505,   506,   506,
     506,   506,   506,   506,   506,   506,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   508,   508,   509,
     510,   509,   511,   511,   511,   511,   512,   512,   513,   513,
     514,   515,   516,   515,   517,   517,   518,   519,   520,   520,
     520,   520,   520,   521,   521,   521,   521,   522,   522,   522,
     522,   522,   522,   522,   522,   523,   523,   523,   524,   524,
     524,   525,   525,   525,   525,   526,   526,   526,   526,   527,
     527,   528,   528,   528,   528,   529,   529,   530,   530,   530,
     530,   531,   531,   531,   531,   532,   532,   533,   533,   533,
     534,   534,   534,   535,   535,   535,   535,   535,   536,   536,
     536,   537,   537,   537,   537,   537,   538,   538,   538,   538,
     539,   539,   539,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   541,   541,   541,   542,   542,   542,   543,   543,
     543,   544,   544,   544,   545,   545,   545,   545,   546,   546,
     546,   547,   547,   547,   548,   548,   548,   549,   549,   549,
     550,   550,   550,   551,   552,   552,   552,   553,   553,   553,
     553,   554,   554,   554,   554,   554,   555,   555,   555,   556,
     556,   557,   557,   557,   557,   557,   558,   558,   558,   559,
     559,   559,   560,   560,   560,   561,   562,   562,   562,   562,
     562,   563,   563,   563,   563,   563,   563
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
       3,     4,     6,    10,     8,     7,     5,     2,     2,     3,
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
       0,   296,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,     0,     0,     0,     0,     0,     0,  1027,     0,
       0,     0,     0,     0,     0,     0,     0,  1027,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1211,    49,     0,
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
       0,   462,     0,     0,     0,     0,     0,  1027,     0,   343,
       0,   347,     0,     0,     0,   351,     0,   353,     0,   355,
       0,     0,   494,   359,    18,     0,   500,    19,   505,     0,
     523,   508,   509,   510,   511,   525,   513,   514,   518,   515,
       0,   517,   519,     0,     0,    20,    22,     0,   540,     0,
       0,     0,   545,     0,    23,     0,     0,     0,     0,     0,
       0,     0,    25,   699,    26,     0,     0,     0,     0,     0,
       0,   700,    27,     0,    28,  1031,  1028,  1029,  1030,     0,
    1088,     0,     0,     0,     0,    30,     0,  1096,  1095,  1094,
    1093,    32,     0,     0,     0,     0,     0,   142,     0,    33,
       0,  1114,     0,  1111,    34,     0,     0,     0,     0,    37,
       0,    36,    35,     0,     0,     0,     0,    40,     0,     0,
    1143,    41,     0,     0,     0,     0,     0,    42,  1207,  1206,
    1210,  1209,  1208,    44,     0,    45,     0,     0,     0,     0,
       0,   198,     0,     0,     0,    46,     0,     0,  1213,    48,
       0,     0,    50,     0,     0,     0,     0,   142,    51,  1235,
      52,     0,     0,    53,     1,     4,   216,     0,   208,     0,
       0,   210,     0,   218,   211,   215,   226,   227,   212,   228,
       0,   214,   236,   237,   235,   234,     0,     0,     0,   241,
     249,   252,   251,   250,   248,   240,   245,   246,   247,   239,
       0,     0,     0,     0,     0,     0,   244,     9,     0,     0,
       0,   263,     0,   268,     0,   278,   269,   280,   270,   281,
     271,   292,   272,     0,     0,   273,     0,    87,    88,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   299,     0,     0,     0,     0,     0,   144,   149,   143,
     145,   148,   147,   146,     0,     0,   316,    62,    63,    64,
      65,    66,    58,    59,    60,    67,    61,     0,   321,     0,
     368,   364,   360,   361,   365,   362,   367,   322,   371,   323,
     284,   376,   380,   375,   287,   286,   285,     0,     0,   324,
     387,   326,     0,   325,     0,   394,   327,   406,   398,   409,
     399,   400,   402,     0,   404,   405,   142,   328,     0,     0,
     329,     0,     0,   142,   330,   418,   142,   416,   331,   419,
     333,   142,   420,   332,     0,   142,     0,   334,   438,     0,
     436,   454,     0,     0,     0,   442,   434,     0,   444,   458,
     447,   336,   463,   464,   337,     0,     0,     0,   429,     0,
     340,   425,   426,     0,   341,   342,     0,   465,   466,   467,
     468,   345,   346,   469,   348,     0,   470,   471,   472,   350,
     478,   473,   474,   476,   352,   484,   486,   488,   490,   483,
     485,   492,   354,     0,     0,   497,     0,   358,   142,   499,
       0,   506,   524,   507,   526,   527,   528,   512,   529,   531,
     530,   532,   516,   520,   537,     0,     0,     0,     0,   533,
     521,     0,     0,   542,   541,     0,     0,     0,     0,    24,
       0,     0,   552,     0,   553,     0,     0,     0,     0,     0,
     554,     0,   698,     0,   555,     0,   556,     0,     0,   557,
       0,   703,   702,   701,     0,   706,     0,     0,     0,   878,
       0,     0,     0,   710,   714,   716,   717,     0,     0,     0,
       0,   815,     0,     0,     0,   851,     0,     0,     0,     0,
       0,     0,     0,   853,     0,     0,     0,    29,  1089,  1090,
    1091,  1092,    31,     0,     0,     0,     0,  1103,  1104,     0,
     142,     0,  1101,  1098,     0,     0,     0,   142,  1121,  1124,
    1122,  1123,  1115,  1116,  1117,  1118,     0,     0,     0,    39,
    1140,  1141,     0,  1148,  1150,  1149,  1145,  1146,  1144,     0,
       0,     0,     0,  1151,     0,  1154,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1152,  1163,     0,     0,
       0,  1153,  1155,  1205,  1138,  1139,  1137,   196,     0,   200,
     192,     0,   202,   193,     0,   204,   194,  1136,  1135,   195,
     197,   199,     0,     0,   191,     0,     0,     0,     0,  1219,
    1232,  1222,     0,     0,  1225,     0,     0,  1224,  1223,   150,
    1241,     0,  1240,  1236,   217,   213,     0,   222,     0,   219,
       0,   238,   137,   140,   141,   139,   138,   253,   254,   255,
     243,   242,   257,   259,   258,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   300,    93,    90,    91,
      92,   142,   302,   301,     0,     0,     0,     0,     0,     0,
       0,   315,     0,   311,   309,   308,   320,   363,     0,     0,
     366,   381,   382,   377,   378,   383,   385,   384,   379,   288,
     289,   374,   373,   389,   388,     0,   393,   407,   408,   397,
     410,   403,   401,   396,     0,     0,   142,   142,   150,   150,
     150,   142,     0,     0,   142,   437,   448,     0,   439,    77,
     450,     0,     0,   441,   443,   142,     0,     0,   446,     0,
       0,     0,   431,     0,     0,     0,     0,   926,   928,   927,
       0,  1020,     0,   999,     0,  1002,     0,     0,  1022,  1024,
       0,  1015,   344,     0,   475,   477,   487,   480,   489,   481,
     491,   482,   493,   479,     0,     0,   498,   495,   496,   150,
     522,   534,   535,   536,   538,     0,   551,   539,     0,     0,
       0,     0,     0,     0,   163,   163,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   160,   160,   157,     0,
       0,   157,     0,     0,     0,     0,     0,   593,   617,     0,
       0,     0,   589,     0,     0,     0,     0,   163,   157,     0,
       0,   694,     0,   704,   705,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   763,
       0,     0,     0,     0,     0,   786,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   805,     0,     0,   810,   811,
       0,     0,     0,   831,   833,   832,     0,   835,     0,     0,
     842,   844,   845,   879,     0,     0,     0,     0,   708,   709,
     920,   918,   923,   922,   921,   919,   924,     0,   713,     0,
     718,     0,   917,     0,   719,   720,   721,   722,     0,     0,
       0,     0,     0,   817,     0,     0,   818,  1041,     0,  1044,
    1040,     0,     0,     0,   819,   852,   820,  1059,  1064,  1061,
    1060,  1058,  1065,  1062,  1056,  1063,  1057,  1066,     0,     0,
     825,     0,     0,     0,  1072,     0,  1074,   828,     0,  1076,
     829,   849,     0,     0,     0,   854,   855,   856,  1102,     0,
       0,  1109,  1105,     0,     0,     0,  1100,  1099,  1113,  1112,
       0,     0,  1129,     0,     0,  1125,     0,  1133,     0,     0,
    1126,     0,  1147,   185,   185,     0,   185,     0,  1173,     0,
    1172,  1164,     0,     0,     0,     0,  1168,     0,     0,     0,
    1171,     0,     0,     0,     0,     0,  1166,  1174,     0,     0,
       0,  1165,   185,   185,   185,     0,   201,   203,   205,     0,
     206,     0,    55,     0,  1215,     0,  1220,     0,   142,  1226,
    1227,     0,  1229,  1230,     0,   151,   152,  1221,  1242,  1243,
       0,   209,     0,   223,     0,     0,     0,     0,   256,     0,
       0,     0,     0,     0,     0,     0,     0,   294,   142,     0,
       0,     0,     0,   142,     0,   314,     0,   313,   370,   369,
       0,     0,     0,   142,     0,   150,   415,   413,   417,   421,
       0,     0,     0,   150,     0,    81,    80,   455,   440,     0,
     451,   453,   153,     0,     0,   338,     0,     0,    55,     0,
     430,     0,     0,   938,     0,     0,     0,     0,     0,     0,
     952,     0,     0,     0,     0,     0,     0,   969,   970,     0,
       0,     0,     0,     0,   981,     0,   987,   988,   990,   992,
       0,   996,  1007,  1008,  1009,     0,  1011,  1016,  1018,  1019,
    1017,   925,     0,   998,     0,   997,   937,     0,     0,  1003,
       0,  1005,     0,  1004,  1025,  1006,  1013,     0,     0,   356,
       0,     0,   549,   550,     0,   547,   543,     0,   163,   163,
     163,   164,   165,   561,   562,   159,   158,     0,   163,   163,
     163,     0,   567,   577,   160,   163,   163,   163,   161,   162,
     163,   163,     0,   163,   163,     0,   160,     0,   590,     0,
       0,     0,   616,     0,   615,     0,     0,   592,     0,   591,
       0,     0,     0,     0,   160,   160,   157,     0,     0,   157,
       0,     0,     0,   163,   163,   690,     0,   163,   163,   695,
       0,   176,   177,   178,   179,   180,   181,     0,    85,    86,
      84,   726,     0,     0,     0,     0,     0,     0,   872,   870,
     865,     0,   875,   859,   876,   862,   874,   868,   857,   871,
     860,   858,   877,   873,     0,     0,     0,   742,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,     0,   785,   787,     0,
       0,   792,   791,     0,     0,   166,     0,     0,     0,   142,
       0,   801,     0,     0,     0,     0,   806,   807,   808,     0,
       0,     0,   814,   830,   834,   836,   839,   838,     0,     0,
       0,   843,   880,   882,     0,   881,   711,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1026,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   715,     0,     0,     0,     0,   816,     0,   142,
       0,  1036,  1034,     0,     0,   142,  1039,   821,     0,     0,
       0,   827,     0,     0,  1077,   847,   848,     0,   850,  1108,
    1110,  1107,  1106,  1097,     0,     0,     0,  1130,     0,     0,
    1134,  1142,   187,   188,   189,   190,   186,  1157,  1156,     0,
       0,     0,  1159,  1158,   185,     0,     0,     0,  1167,     0,
       0,     0,     0,     0,  1184,     0,  1198,  1197,  1199,     0,
       0,     0,  1170,     0,     0,     0,  1169,  1179,  1178,  1180,
    1176,  1175,  1177,  1201,  1200,  1202,     0,     0,     0,  1218,
     142,     0,   142,  1233,  1228,  1231,     0,     0,   142,     0,
       0,     0,   220,     0,     0,     0,     0,     0,     0,     0,
       0,   291,   290,     0,     0,   282,   293,   295,     0,   305,
     307,   306,   304,   142,   312,     0,     0,     0,   150,   142,
       0,     0,     0,     0,   435,   449,    79,    78,   457,     0,
     452,   155,   156,   154,   445,     0,   142,     0,     0,     0,
     433,   427,     0,     0,     0,     0,     0,     0,   142,   939,
       0,   942,     0,     0,   945,     0,   142,   950,     0,   953,
     954,     0,   956,   957,   958,     0,   962,     0,     0,   965,
       0,   971,     0,     0,     0,   976,   977,   975,     0,     0,
       0,   982,   983,     0,     0,   986,   989,   991,   993,     0,
       0,  1010,  1012,   929,  1021,   930,     0,     0,  1023,  1014,
       0,     0,   503,   504,     0,     0,   548,     0,   558,   559,
     560,   163,   564,   565,   566,     0,     0,     0,   571,   572,
     157,     0,     0,     0,   163,   578,   579,   580,   581,   583,
     160,   586,   587,     0,   163,     0,     0,     0,   160,   160,
     157,     0,     0,     0,     0,   614,     0,   618,     0,     0,
       0,     0,     0,   160,   160,   157,     0,     0,   157,     0,
       0,     0,     0,     0,   160,   160,   157,     0,     0,   157,
       0,     0,     0,     0,     0,   160,   160,   157,     0,     0,
     157,     0,     0,     0,     0,   160,   160,   157,     0,     0,
       0,   160,   594,   595,   596,   597,   599,     0,   602,   603,
       0,   160,     0,     0,   688,   689,   163,   692,   693,     0,
     725,   142,   727,     0,     0,   731,     0,     0,     0,     0,
       0,   864,   861,   867,   866,   863,   869,     0,   740,     0,
       0,     0,     0,   142,   747,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   764,   765,
     766,     0,   770,   767,   769,     0,     0,   775,   774,   776,
     777,     0,     0,     0,     0,     0,     0,   142,   142,   790,
     172,   168,   173,   167,   170,   169,   171,   796,   797,   798,
       0,     0,   800,   802,   142,   142,     0,   809,   812,   142,
     142,   837,   841,   883,   712,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1067,   908,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   909,     0,     0,     0,     0,     0,   723,   724,   142,
     150,     0,   142,   142,  1042,  1043,     0,     0,   823,     0,
     142,  1073,  1075,   846,     0,  1127,  1128,  1131,  1132,   185,
     185,   185,  1203,  1182,  1181,  1183,  1186,  1185,  1189,  1188,
    1190,  1187,  1195,  1194,  1196,  1192,  1191,  1193,     0,     0,
    1212,  1217,     0,  1234,     0,   142,     0,  1237,     0,     0,
     224,     0,   221,     0,     0,     0,   260,     0,     0,     0,
       0,   142,     0,   297,   130,     0,   390,     0,   411,   150,
     153,     0,     0,   424,     0,   142,   459,   142,     0,   428,
     931,     0,     0,     0,     0,   142,   940,   153,   153,   153,
     142,   946,   153,   150,   153,   153,   142,   959,   153,   153,
     153,   142,   966,   153,   153,   142,     0,   153,   142,   153,
     153,   142,   153,   142,  1000,  1001,     0,     0,   502,   544,
       0,   563,   568,   569,   570,     0,   574,   575,   576,   582,
     163,   160,   588,   605,   606,   607,   608,   609,     0,   611,
     612,   160,     0,     0,     0,   160,   160,   157,     0,     0,
       0,     0,     0,     0,   160,   160,   157,     0,     0,     0,
       0,     0,     0,   160,   160,   157,     0,     0,     0,   160,
     163,   163,   163,   163,   163,     0,   163,   163,     0,   160,
     160,   163,   163,   163,   163,   163,     0,   163,   163,     0,
     160,   160,   668,   669,   670,   671,   673,     0,   676,   677,
       0,   160,   679,   680,   681,   682,   683,     0,   685,   686,
     160,   598,   160,     0,   604,     0,     0,   691,     0,   728,
     153,     0,     0,   153,     0,     0,     0,   739,   153,   743,
     744,   153,   746,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   768,   771,   772,     0,
     153,     0,     0,     0,   788,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1068,  1047,     0,  1054,  1055,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,     0,
       0,    82,     0,     0,   915,   916,   150,     0,     0,     0,
    1037,  1035,  1045,   822,   824,   150,  1120,  1161,  1160,  1162,
    1204,     0,  1214,  1244,     0,     0,  1239,  1238,   225,     0,
       0,     0,   265,     0,     0,     0,   283,   153,   391,   395,
     412,   414,     0,   422,   456,   460,   461,     0,     0,     0,
       0,     0,   936,   941,   944,   943,   947,   948,   949,   951,
     955,   960,   961,   963,   964,   967,   968,   972,   150,   153,
     979,   150,   980,   984,   150,   994,   150,     0,     0,   501,
       0,   573,   584,   163,   160,   613,   163,   163,   163,   163,
     163,     0,   163,   163,   160,   163,   163,   163,   163,   163,
       0,   163,   163,   160,   163,   163,   163,   163,   163,     0,
     163,   163,   160,   163,   628,   629,   630,   631,   633,   160,
     636,   637,     0,   163,   163,   657,   658,   659,   660,   662,
     160,   665,   666,     0,   163,   672,   160,     0,   678,   160,
     687,   600,   160,   696,   697,   142,   730,     0,   153,   733,
       0,   142,     0,   741,   745,   142,     0,   752,   753,   754,
     755,   759,   760,   756,   757,   758,     0,     0,   153,   780,
       0,   142,     0,     0,   793,   153,     0,     0,   153,   153,
       0,   840,     0,   174,   174,     0,     0,   174,     0,   174,
    1026,     0,     0,     0,     0,     0,     0,     0,     0,  1046,
       0,     0,   174,   174,     0,     0,     0,     0,     0,     0,
       0,     0,   910,     0,     0,     0,  1026,    83,     0,   174,
       0,  1070,   914,     0,     0,     0,   207,  1246,  1245,     0,
       0,   229,     0,     0,     0,     0,   298,   423,   317,   932,
       0,   142,     0,   973,   974,   978,   985,   995,   349,   317,
       0,   585,   610,   619,   620,   621,   622,   623,   160,   625,
     626,   163,   648,   649,   650,   651,   652,   160,   654,   655,
     163,   639,   640,   641,   642,   643,   160,   645,   646,   163,
     632,   163,   160,   638,   661,   163,   160,   667,   674,   160,
     684,   601,     0,   153,   734,     0,     0,     0,     0,     0,
     761,   762,   778,     0,     0,     0,   789,   794,     0,   803,
     804,   795,   153,     0,   175,  1026,  1026,    82,     0,  1026,
       0,  1026,   884,   142,     0,  1049,     0,  1052,  1086,  1053,
    1051,  1048,     0,  1026,  1026,    82,     0,     0,  1026,  1026,
       0,     0,  1026,   913,   911,   912,   891,  1026,  1026,  1070,
    1081,     0,  1038,   826,     0,     0,     0,   231,     0,     0,
       0,   318,   319,   339,     0,   182,   935,   357,     0,   163,
     627,   163,   656,   163,   647,   634,   163,   663,   163,   675,
       0,   729,   153,   153,     0,   153,     0,   153,   153,     0,
     153,     0,  1026,   897,   893,  1026,     0,   898,     0,   892,
    1026,     0,  1050,     0,   895,   894,  1026,     0,     0,   889,
     887,  1026,   142,   888,   890,   896,  1081,  1032,     0,     0,
    1071,  1079,  1119,     0,     0,     0,   261,   284,   287,   285,
       0,     0,   142,   183,   184,   934,   546,   624,   653,   644,
     635,   664,   153,   732,   738,     0,   751,   748,   779,   784,
       0,   799,     0,   902,   886,    82,     0,   900,  1087,     0,
     885,    82,     0,   901,     0,  1033,  1083,  1085,     0,  1078,
       0,     0,   266,     0,     0,     0,     0,   182,     0,   735,
     142,   749,   781,   813,  1026,     0,     0,  1026,     0,   153,
    1084,  1080,   230,     0,     0,     0,     0,     0,   933,   707,
     142,   736,   750,   142,   782,   904,     0,  1026,   903,     0,
       0,   232,   277,     0,   276,     0,   737,   783,    82,   905,
      82,  1026,   275,   274,  1026,  1026,   899,   907,   906
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,  1380,   172,   152,  1227,  2456,  2457,   421,   422,
     423,   424,   153,   154,   155,    91,   787,   444,  1177,  1644,
    1317,  1330,  1313,  1887,  2555,  1377,  2675,  1547,   335,   740,
     743,   746,   754,    63,   358,   364,   368,   371,    68,   374,
      75,   389,   385,   379,   396,    82,   401,    92,    98,   406,
     408,   410,   478,   841,  1613,   412,   415,   105,   431,   156,
     158,  2603,   174,   214,   467,   830,   469,   479,   833,   838,
     481,   483,   844,   486,   846,   497,   849,   851,   500,   504,
     508,   510,   513,   517,   544,   540,  1240,   531,   868,   873,
     865,  1228,   878,   534,   551,   554,   559,   564,   572,   907,
     909,   911,   913,   577,   917,   217,   579,  1714,   235,   581,
     583,   587,   592,   600,   244,  1306,   603,   252,   612,  1322,
     614,   620,   962,  1338,   957,  1755,  1344,  1342,  1757,   958,
    1347,  1349,   626,   629,   624,   254,   262,   264,   667,  1039,
    1404,  1028,  1502,  1931,  2249,  1044,  1037,   902,  1281,  1285,
    1293,  1295,  1915,   269,  1053,  1056,  1064,  2221,  2222,  2223,
    1916,  2590,  2591,  1087,  1090,  2660,  2661,  2657,  2658,  2706,
    2224,  2225,   275,   281,   289,   682,   677,   294,   299,   301,
     692,   699,  1115,  1120,   749,   737,   307,   311,   706,   317,
     713,  1552,   726,   727,  1151,  1146,  1558,  1136,  1564,  1576,
    1572,  1140,   731,   715,   323,   324,   339,  1164,   342,   348,
     764,   767,   761,   350,   353,   772
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2496
static const yytype_int16 yypact[] =
{
    5119,    71,    98,    44, -2496, -2496,  1046,  -125,   399,   927,
     849,   150,  2638,   166,   282,  1477,    64,  5153,   321,  1176,
   -2496,   282,   828,   221,  1144,    26,    37,   516,   220,   412,
     460,   629,  2875,    28,   528,   532,   479,   220, -2496,   -27,
      32,  1037, -2496,    88,   535,   400, -2496,    89, -2496,   105,
    3970,   362,   110,   615,   630,   146,   368,   650,   673,   112,
     678,    -1,   568, -2496, -2496, -2496,   773,   987, -2496,   116,
       9,   282,   448,   179,   119, -2496,   682,   987, -2496, -2496,
      49,   987, -2496, -2496, -2496, -2496,   987, -2496, -2496, -2496,
   -2496, -2496, -2496,    57,   667,   761,   775,   489, -2496,   987,
    1360,   987,   987,   946,   987, -2496, -2496, -2496,   539, -2496,
   -2496, -2496, -2496,  4679, -2496, -2496, -2496, -2496, -2496, -2496,
     987, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1145, -2496,   987, -2496,   787, -2496, -2496,
     282,   282,   282,   282,   282,   282, -2496, -2496,   282,   282,
     282,   282, -2496,   665, -2496,   738,  1542,   733,   123,   577,
     718,   731,  4168,   466,  4760,  4641,   833,  4679,  3650, -2496,
     496,  -106,   896,   834,   947,   156,   888,   220,   514, -2496,
     870, -2496,   716,   691,   -23, -2496,   100, -2496,   507, -2496,
      29,   898,    73, -2496, -2496,  4825, -2496, -2496, -2496,   945,
    1013, -2496, -2496, -2496, -2496,   560, -2496, -2496, -2496, -2496,
     782, -2496, -2496,  4825,  4287, -2496, -2496,   224, -2496,  1043,
    1048,   126, -2496,   987, -2496,  1067,    75,  1068,    23,   672,
    1074,    21, -2496, -2496, -2496,  1081,  1090,   282,   282,   987,
     987, -2496, -2496,  1099, -2496, -2496, -2496, -2496, -2496,  1061,
   -2496,  1104,  1103,  4825,   987, -2496,  1107, -2496, -2496, -2496,
   -2496, -2496,   987,  1003,   282,  3056,   987,  1145,   987, -2496,
    1122, -2496,  4788, -2496, -2496,   683,  1129,  1136,   987, -2496,
    1143, -2496, -2496,    -7,  1146,  4825,  1150, -2496,  1102,   987,
    1060, -2496,   388,  1054,   664,   436,  1158, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,  1172, -2496,   410,    62,    65,   184,
     475, -2496,   987,   987,   168, -2496,   987,   912,  1182, -2496,
     987,   987, -2496,  1198,    20,    39,  1201,  1145, -2496, -2496,
   -2496,   866,   987, -2496, -2496, -2496, -2496,   987, -2496,  1235,
    1244, -2496,   987,   871, -2496, -2496, -2496, -2496, -2496, -2496,
     987, -2496, -2496,   987, -2496, -2496,   398,   398,  1246, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
    1062,   987,   987,  1255,  1257,  1258, -2496, -2496,   987,   987,
     987, -2496,   987, -2496,  1259, -2496, -2496, -2496, -2496,  1000,
   -2496,  1262, -2496,  4825,  1264, -2496,   987, -2496, -2496, -2496,
     987,  1265,  1253,  1253,  4825,   987,   987,   987,   987,   987,
     987, -2496,   987,  4679,  1360,   987,   987, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,  1360,   987, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1277, -2496,  1018,
     411, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
     320, -2496, -2496, -2496,  1118, -2496,   487,   546,   546, -2496,
   -2496, -2496,  1287, -2496,  1289, -2496, -2496,   -47, -2496,  1112,
   -2496, -2496, -2496,  1128, -2496, -2496,  1145, -2496,   987,   987,
   -2496,  4825,  4825,  1145, -2496, -2496,  1145, -2496, -2496, -2496,
   -2496,  1145, -2496, -2496,  4825,  1145,   987, -2496, -2496,  4825,
   -2496, -2496,   494,  1106,     5, -2496, -2496,  1108,  4825,   -55,
   -2496, -2496, -2496, -2496, -2496,  1306,  1307,  1290, -2496,  1120,
   -2496, -2496, -2496,   987, -2496, -2496,   574, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,    29, -2496, -2496, -2496, -2496,
   -2496, -2496,  1131,  1132, -2496, -2496,  1247,  1260,  1263, -2496,
   -2496,  1113, -2496,   987,  1316,  1105,  4788, -2496,  1145, -2496,
    1325, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  4825,  4825,  4825,  4825, -2496,
   -2496,  1332,   282, -2496, -2496,  1335,  1336,  1147,   987, -2496,
     369,  1256, -2496,  1340, -2496,   283,  1269,  5157,    61,  1341,
   -2496,  1345, -2496,  1347, -2496,    41, -2496,  1354,  1357, -2496,
    1362, -2496, -2496, -2496,   987, -2496,  4788,  4602,  1567,   476,
    1367,   377,  1274, -2496, -2496, -2496,  1358,   471,  1370,  1372,
      51,   987,   730,   778,    54,  4825,   282,  1858,   841,    12,
      58,   255,    25, -2496,  1366,  1368,  1380, -2496, -2496, -2496,
   -2496, -2496, -2496,   987,   987,   987,   987, -2496, -2496,   987,
    1145,   987, -2496,   987,  1360,   987,  1383,  1145, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,  1386,   408,   453, -2496,
   -2496, -2496,  1388, -2496, -2496, -2496, -2496,  1296, -2496,  1391,
    1394,  1313,  1402, -2496,  1405, -2496,  1422,  1343,  1428,   455,
     405,   469,   451,   533,  1430,   628, -2496, -2496,  1432,  1433,
    1431, -2496, -2496,  1436, -2496, -2496, -2496, -2496,  1437, -2496,
   -2496,  1438, -2496, -2496,  1441, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,   987,   987, -2496,   987,  1126,   987,   987, -2496,
    3852, -2496,  1133,  1443, -2496,  1210,  1444, -2496, -2496,   -72,
     987,   987, -2496,  1439, -2496, -2496,  1445,   905,   987,  1446,
    1016, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496,  1449,  1451,   987,   987,   987,
    1452,   282,  1453,  1456,  1145,  4825, -2496, -2496, -2496, -2496,
   -2496,  1145, -2496, -2496,   987,   987,   987,  4825,   987,  1360,
     987, -2496,   987, -2496, -2496, -2496, -2496, -2496,  1457,  1458,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,   466, -2496,   987, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,  4825,   987,  1145,  1145,   -72,   -72,
     -72,  1145,  1360,   987,  1145, -2496, -2496,   987, -2496,     6,
    1299,  1460,  1464, -2496, -2496,  1145,  1293,  1305, -2496,  1465,
    1467,  1466,  1220,   987,  4607,   434,   705, -2496, -2496, -2496,
     987,   499,   174, -2496,  1219, -2496,  1858,  1222,   501,  1192,
     124, -2496, -2496,   987, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,   987,  1474, -2496, -2496, -2496,   -72,
   -2496, -2496, -2496, -2496, -2496,  4707, -2496, -2496,  1494,  1500,
     987,  1501,  1502,  1508,   -10,   -10,   -35,  1495,  1513,  1520,
    1521,  1251,  1261,  1522,  1524,  1525,   418,   418,   -35,  1530,
    1534,   -35,  1526,  1535,  5190,  1536,  1538, -2496, -2496,  1539,
    1540,   472, -2496,  1543,  1544,  1545,  1546,   -10,   -35,  1552,
    1553, -2496,  1554, -2496, -2496,  1145,   -17,  1116,  1321,    -9,
    1324,  1459,   503,   370,  1561,   109,  1411,  1462,  1285,  1298,
    1528,   482,  1333,  1468,  1565,  1363,    17,    36,   326,   -30,
    4825,  1858,  1531,   415,  1334,  1371,  1571,    40, -2496, -2496,
     117,  1573,  1574, -2496, -2496, -2496,  1577,  1377,    83,  1858,
    1378, -2496, -2496, -2496,   282,  1585,  1587,   987, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496,    13, -2496,  3058,
   -2496,   987, -2496,   987, -2496, -2496, -2496, -2496,   987,   987,
     987,   377,  4825, -2496,  1594,  1225, -2496, -2496,   987, -2496,
   -2496,   987,  4825,   987, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   282,   987,
   -2496,   987,   377,  1597, -2496,   987,   987, -2496,   282, -2496,
   -2496, -2496,   917,  1599,  1604, -2496, -2496, -2496, -2496,   987,
     987, -2496, -2496,  1360,   987,   987, -2496, -2496, -2496, -2496,
    1606,   987, -2496,   987,  1506, -2496,   987, -2496,   987,  1507,
   -2496,  1608, -2496,  1155,  1155,   698,  1155,  1615, -2496,   710,
   -2496, -2496,  1616,  1619,   727,  1621, -2496,  1622,  1626,  1628,
   -2496,   753,   817,  1629,  1630,  1633, -2496, -2496,  1634,  1635,
    1637, -2496,  1155,  1155,  1155,   987, -2496, -2496, -2496,   987,
   -2496,   987,   972,  4825, -2496,   987, -2496,  4788,  1145, -2496,
   -2496,  1639, -2496, -2496,  1643, -2496, -2496, -2496, -2496,  1614,
    3056, -2496,   987,  1638,   987,   987,   987,  1029, -2496,  1632,
    1645,   987,   987,    87,  1646,   282,   282, -2496,  1145,   987,
    1648,  1650,  1651,  1145,  4825, -2496,   987, -2496, -2496, -2496,
     987,   987,   987,  1145,  4825,   -72, -2496, -2496, -2496, -2496,
    1360,   987,  1653,   -72,   987,  1623,  1624,   495, -2496,  1654,
   -2496, -2496,   869,  3773,   987, -2496,   987,  1659,  1665,   987,
   -2496,  1664,   739,  4679,  1434,   500,  1435,    90,  4825,   524,
   -2496,   130,  1537,   158,   722,  1442,   202, -2496, -2496,   444,
    1505,   829,  1556,   -79,  1858,   926, -2496,  1670,  1448, -2496,
     508, -2496, -2496, -2496, -2496,  1858,  1475, -2496, -2496, -2496,
   -2496, -2496,   987, -2496,   987, -2496, -2496,   987,   987, -2496,
     987, -2496,   987, -2496, -2496, -2496, -2496,  1484,   987, -2496,
     987,    30, -2496, -2496,  1678,  1679, -2496,   987,   -10,   -10,
     -10, -2496, -2496, -2496, -2496, -2496, -2496,  1682,   -10,   -10,
     -10,   470, -2496, -2496,   418,   -10,   -10,   -10, -2496, -2496,
     -10,   -10,  1683,   -10,   -10,  1684,   418,   729, -2496,  1685,
    1689,  1692, -2496,   695, -2496,   942,   978, -2496,   749, -2496,
    1440,  1694,  1695,  1696,   418,   418,   -35,  1701,  1702,   -35,
    1704,  1706,  1707,   -10,   -10, -2496,  1708,   -10,   -10, -2496,
    1712, -2496, -2496, -2496, -2496, -2496, -2496,   282, -2496, -2496,
   -2496,  4679,  1168,   282,   987,  1189,  1409,   786, -2496, -2496,
   -2496,   815, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496,  1713,   282,   987, -2496,   282,  1715,
     987,  4825,   282,  1415,  1485,  1486,   210,   231,  1488,   232,
    1385,  1423,  1709,  1721,  1722,   503,  1724,  1726,  1727,  1429,
    1447,  1239,  1728,   282,   987,  1223,  1421, -2496, -2496,   282,
    4825, -2496, -2496,  4825,   987,    33,  1730,   282,   987,  1145,
     282, -2496,  1731,  4825,  4825,   987, -2496, -2496, -2496,   282,
     282,  4825, -2496, -2496, -2496, -2496, -2496, -2496,  4825,   987,
     282, -2496, -2496, -2496,   987, -2496, -2496,  1733,   987,  1517,
     189,   987,  1519,   987,   197,   987, -2496,   987,  1523,  1532,
     987,   987,   987,   987,   987,   987,   987,   987,    18,   987,
     987,  1533, -2496,   987,   987,   987,   987, -2496,  4825,  1145,
    1737,  4825,  4825,   987,   987,  1145, -2496,   987,   987,   987,
    4825, -2496,   987,   987, -2496, -2496, -2496,  1738, -2496, -2496,
   -2496, -2496, -2496, -2496,  1740,   987,   987, -2496,   987,   987,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1741,
    1742,  1744, -2496, -2496,  1155,  1747,  1748,  1752, -2496,  1753,
    1754,  1757,  1758,  1755, -2496,  1760, -2496, -2496, -2496,  1761,
    1762,  1764, -2496,  1765,  1767,  1769, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,   987,   987,   987, -2496,
    1145,   987,  1145, -2496, -2496, -2496,  3056,   987,  1145,   987,
     987,   987, -2496,   987,   987,  1770,   987,  1772,  1729,   987,
     987, -2496, -2496,  1773,  4825, -2496, -2496, -2496,   987, -2496,
   -2496, -2496, -2496,  1145, -2496,   993,   987,   993,   -72,  1145,
    4825,   987,   987,  1775, -2496, -2496, -2496, -2496, -2496,   987,
   -2496, -2496, -2496, -2496, -2496,  4825,  1145,  4825,   987,  1776,
   -2496, -2496,  4825,  1777,  1778,  1780,  1782,  4825,  1145, -2496,
    4825, -2496,  4825,  4825,  4679,  4825,  1145, -2496,  4825, -2496,
   -2496,  4825, -2496, -2496,  4679,  4825, -2496,  4825,  4825,  4679,
    4825, -2496,  4825,  4825,   987, -2496, -2496, -2496,  4825,  4825,
    4825, -2496, -2496,  4825,  4825, -2496, -2496, -2496, -2496,  4825,
    4825, -2496, -2496, -2496, -2496, -2496,   987,   987, -2496, -2496,
    1785,   987, -2496, -2496,  1786,  1788, -2496,   987, -2496, -2496,
   -2496,   -10, -2496, -2496, -2496,  1789,  1790,  1791, -2496, -2496,
     -35,  1793,  1795,  1796,   -10, -2496, -2496, -2496, -2496, -2496,
     418, -2496, -2496,  1798,   -10,  1799,  1800,  1801,   418,   418,
     -35,  1803,  1804,  1805,   772, -2496,   792, -2496,   811,  1498,
    1806,  1809,  1812,   418,   418,   -35,  1814,  1820,   -35,  1821,
    1560,  1823,  1824,  1825,   418,   418,   -35,  1827,  1828,   -35,
    1829,  1566,  1830,  1831,  1832,   418,   418,   -35,  1834,  1835,
     -35,  1836,  1837,  1838,  1849,   418,   418,   -35,  1851,  1852,
    1853,   418, -2496, -2496, -2496, -2496, -2496,  1855, -2496, -2496,
    1856,   418,  1860,  1861, -2496, -2496,   -10, -2496, -2496,  1857,
   -2496,  1145, -2496,  4825,   987, -2496,   987,  4825,   987,  1862,
    1116, -2496, -2496, -2496, -2496, -2496, -2496,  1864, -2496,  4825,
     282,  1866,  4825,  1145, -2496,  1867,  1116,   987,   987,   987,
     987,   987,   987,   987,   987,   987,  1870,  1871, -2496, -2496,
   -2496,  1872, -2496, -2496, -2496,  1874,  1875, -2496, -2496, -2496,
   -2496,   987,  4825,   987,  1877,  1116,   282,  1145,  1145, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
     987,  1360, -2496, -2496,  1145,  1145,   987, -2496, -2496,  1145,
    1145, -2496, -2496, -2496, -2496,   987,   987,   987,   987,   987,
     987,   987,   987,   987,   987,  1310, -2496,   987,   987,   987,
     987,   987,   987,   987,   987,   987,   987,   987,  2488,  1878,
     987, -2496,   987,   987,   987,  1876,  1880, -2496, -2496,  1145,
     -72,  1881,  1145,  1145, -2496, -2496,  1360,   987, -2496,  1882,
    1145, -2496, -2496, -2496,  1885, -2496, -2496, -2496, -2496,  1155,
    1155,  1155, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,  1116,   987,
   -2496, -2496,   987, -2496,   987,  1145,   987, -2496,  1360,   987,
   -2496,   987, -2496,  1781,  1886,  1887, -2496,  1890,   987,   987,
    1891,  1145,  4825, -2496, -2496,   987, -2496,   987, -2496,   -72,
     869,   987,  1892, -2496,   987,  1145, -2496,  1145,    29, -2496,
   -2496,  1893,  1894,  1895,  1896,  1145, -2496,   869,   869,   869,
    1145, -2496,   869,   -72,   869,   869,  1145, -2496,   869,   869,
     869,  1145, -2496,   869,   869,  1145,  4825,   869,  1145,   869,
     869,  1145,   869,  1145, -2496, -2496,  1908,    29,  1921, -2496,
     987, -2496, -2496, -2496, -2496,  1909, -2496, -2496, -2496, -2496,
     -10,   418, -2496, -2496, -2496, -2496, -2496, -2496,  1924, -2496,
   -2496,   418,  1927,  1928,  1929,   418,   418,   -35,  1931,  1933,
    1934,  1935,  1936,  1937,   418,   418,   -35,  1941,  1942,  1943,
    1945,  1946,  1947,   418,   418,   -35,  1949,  1952,  1953,   418,
     -10,   -10,   -10,   -10,   -10,  1955,   -10,   -10,  1956,   418,
     418,   -10,   -10,   -10,   -10,   -10,  1957,   -10,   -10,  1960,
     418,   418, -2496, -2496, -2496, -2496, -2496,  1961, -2496, -2496,
    1962,   418, -2496, -2496, -2496, -2496, -2496,  1963, -2496, -2496,
     418, -2496,   418,  1964, -2496,  1965,  1966, -2496,  4788, -2496,
     869,  1967,  4825,   869,   987,  4825,  1968, -2496,   869, -2496,
   -2496,   869, -2496,  4825,  1969,   987,   987,   987,   987,   987,
     987,   987,   987,   987,   987,   987, -2496, -2496, -2496,  4825,
     869,   987,  4825,  1970, -2496,  1360,  1360,  4825,  1360,  1360,
    4825,  4825,  1360,  1360,   987,   987,   987,   987,   987,   987,
    1116,   987,   987,   987,  1427,  1493,  1510,  1529,  1549,  1591,
    1600,  1310, -2496,  1631, -2496, -2496,  1116,   987,   987,   987,
     987,  1116,   987,   987,   987,   987,   987,   987,  1145,   987,
    1469,  1116,   987,   987, -2496, -2496,   -72,   282,  1971,  1973,
   -2496, -2496, -2496, -2496, -2496,   -72,  1976, -2496, -2496, -2496,
   -2496,   987, -2496, -2496,  1360,   987, -2496, -2496, -2496,  1086,
    1977,  1982, -2496,   987,  1985,   993, -2496,   869, -2496, -2496,
   -2496, -2496,  1986, -2496, -2496, -2496, -2496,  1988,  1989,  1993,
    4825,  1994, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   -72,   869,
   -2496,   -72, -2496, -2496,   -72, -2496,   -72,  1995,  1990, -2496,
     987, -2496, -2496,   -10,   418, -2496,   -10,   -10,   -10,   -10,
     -10,  1997,   -10,   -10,   418,   -10,   -10,   -10,   -10,   -10,
    1999,   -10,   -10,   418,   -10,   -10,   -10,   -10,   -10,  2002,
     -10,   -10,   418,   -10, -2496, -2496, -2496, -2496, -2496,   418,
   -2496, -2496,  2005,   -10,   -10, -2496, -2496, -2496, -2496, -2496,
     418, -2496, -2496,  2006,   -10, -2496,   418,  2008, -2496,   418,
   -2496, -2496,   418, -2496, -2496,  1145, -2496,  4825,   869, -2496,
    2009,  1145,   987, -2496, -2496,  1145,   987, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496,   987,   987,   869, -2496,
    2010,  1145,   987,  1360, -2496,   869,   987,  1360,   869,   869,
    4825, -2496,   987,  2012,  2012,   987,   987,  2012,  1116,  2012,
   -2496,  4825,   503,  2013,  2015,  2016,  2017,  2019,  2023, -2496,
     282,  1116,  2012,  2012,   987,   987,  1116,   987,   987,   987,
     987,   987, -2496,  1360,   987,  2026, -2496, -2496,   987,  2012,
     282,    14, -2496,  2027,   282,  2029, -2496, -2496, -2496,  2030,
     987, -2496,  2032,  2034,  1794,   987, -2496, -2496,    22, -2496,
    2035,  1145,  4825, -2496, -2496, -2496, -2496, -2496, -2496,    22,
     987, -2496, -2496, -2496, -2496, -2496, -2496, -2496,   418, -2496,
   -2496,   -10, -2496, -2496, -2496, -2496, -2496,   418, -2496, -2496,
     -10, -2496, -2496, -2496, -2496, -2496,   418, -2496, -2496,   -10,
   -2496,   -10,   418, -2496, -2496,   -10,   418, -2496, -2496,   418,
   -2496, -2496,   987,   869, -2496,  4825,  4825,   987,  4825,   987,
   -2496, -2496, -2496,  4825,  4825,   987, -2496, -2496,  4825, -2496,
   -2496, -2496,   869,  2037, -2496, -2496, -2496,  1116,   987, -2496,
    2038, -2496, -2496,  1145,  2039, -2496,  2041, -2496, -2496, -2496,
   -2496, -2496,  2042, -2496, -2496,  1116,   987,  2043, -2496, -2496,
     987,  4825, -2496, -2496, -2496, -2496, -2496, -2496, -2496,    14,
    1586,  1858, -2496, -2496,  2044,  2045,  2046, -2496,  1797,  2049,
      16, -2496, -2496, -2496,  4825,    50, -2496, -2496,  2050,   -10,
   -2496,   -10, -2496,   -10, -2496, -2496,   -10, -2496,   -10, -2496,
    4788, -2496,   869,   869,   987,   869,  2051,   869,   869,   987,
     869,   987, -2496, -2496, -2496, -2496,  2054, -2496,   987, -2496,
   -2496,  2056, -2496,   987, -2496, -2496, -2496,  2055,   987, -2496,
   -2496, -2496,  1145, -2496, -2496, -2496,  1586, -2496,  1610,  1673,
    1858, -2496, -2496,  2057,  2058,  2060, -2496, -2496, -2496, -2496,
     723,   723,  1145, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,   869, -2496, -2496,  2061, -2496,  4679, -2496, -2496,
    2062, -2496,  1116, -2496, -2496,  1116,   987, -2496, -2496,   987,
   -2496,  1116,   987, -2496,  4825, -2496,  1610, -2496,   282, -2496,
    2063,  2064, -2496,   987,   987,   987,   987,    50,  2066,  4679,
    1145, -2496,  4679, -2496, -2496,   987,  2068, -2496,   987,   869,
   -2496, -2496, -2496,  2071,  2072,   987,  2073,   987, -2496, -2496,
    1145, -2496, -2496,  1145, -2496, -2496,  2069, -2496, -2496,  2076,
    2077, -2496, -2496,  2078, -2496,  2079, -2496, -2496,  1116, -2496,
    1116, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2496, -2496,    -3, -2496,   290, -2496, -1573,  -904,  1569, -2496,
     823,  -383,  1841,   -49,   -21, -1621,  1640,  1275,  -700,  1527,
    -941,  1350,  1284, -2496, -1038, -2496,  -908, -1047, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496,  -561,  -473, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496,  -446, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -1422, -2496, -2496, -2496, -2496, -2496,  -637, -2496, -2496, -2496,
   -2496, -2496, -2496,   525, -2496, -2496, -2496, -2496,  -172,  -655,
   -1711,  -522, -2496, -2496, -2496, -2496,  -579,  -571, -2496, -2496,
   -2495, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496,  1369, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496, -2496,
   -2496, -2496, -2496, -2496, -2496, -2496
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1217
static const yytype_int16 yytable[] =
{
      67,   347,  1078,  1861,  2005,   842,  2007,  1332,   104,   870,
    1335,   288,    64,    65, -1069,  1052,  1055,  1082,  1476,    64,
      65,    64,    65,  1928,   762,  1175,   627,  1366,   615,   286,
    1091,   366,   106,   290,   304,    64,    65,   310,   556,    64,
      65,   106,   255,   765,  1439,  1458,   341,    64,    65,   352,
    1712,   821,   357,   399,  2601,   965,   363,    64,    65,   370,
    1880,   824,   404,   373,   375,  1371,   106,   384,  1047,   106,
     391,   395,  1441,  1381,   398,  1084,   876,  1548,   402,  1553,
     610,  1881,  2673,   403,  1882,   109,    64,    65,  1688,   575,
    1057,  1447,   435,   336,  1058,  1883,   416,   420,   425,   426,
     430,   432,   966,   256,   532,  1583,  1584,  1585,    64,    65,
      55,  1664,  1383,    64,    65,    64,    65,   436,  1884,  1466,
     376,   560,    64,    65,  1092,   257,    64,    65,   738,  1315,
    1093,   741,   606,  1611,  1372,  1885,  1408,    54,   318,  1225,
     616,  1296,   697,  1689,  1460,   847,  1311,   111,   959,    64,
      65,    56,   445,    64,    65,    76,   111,  1669,  1217,  1218,
    1219,   541,   499,  2707,   507,  1059,   512,   516,  1442,    57,
     871,    64,    65,  1312,   543,   477,   258,    64,    65,  1674,
     498,   111,    64,    65,   111,  1176,  1060,   319,   106,   573,
      99,  1286,    64,    65,   533,   380,   320,   392,    58,   157,
      64,    65,  2667,  1373,  1374,   356,   848,  1690,   173,   100,
    1448,  2730,   109,   337,   617,  1467,    59,   960,  1375,  1301,
      60,   542,  1297,  1679,   321,   308,  1316,  1384,   601,   114,
     967,  1849,    61,   877,   561,   115,   116,   245,   114,  1440,
     608,  1289,   117,   687,   115,   116,   607,  1061,   698,  1226,
     744,   305,  1851,  1854,   253,   557,   634,   635,  1376,   106,
    1048,   101,  1713,   114,   681,   618,   114,  1085,   576,   115,
     116,   671,   115,   116,   306,  1409,   367,   265,   558,   673,
     676,   405,   679,   683,  1459,   685,   106,   628,   942,   619,
     393,   400,   338,  1083, -1069,   695,  1670,   943,   944,  2602,
     968,  1106,   763,   111,   159,   705,   707,   381,   377,   470,
     969,   236,   872,  1477,  2668,   471,   261,   611,  1929,   119,
     309,   766,  1094,   293,  1443,   291,  1665,  2674,   119,   750,
     751,   753,    66,   755,   259,   292,   562,   758,   759,  1461,
    1049,   970,  1062,   102,   945,  1410,  1450,  1086,   771,   773,
     382,   383,   472,   119,   774,  1612,   119,   475,  2669,   777,
     779,   386,   378,   563,  1470,   394,  1671,   780,   149,   117,
     781,  1468,   150,   151,   111,   390,   473,   149,   322,  1886,
     260,   150,   151,   931,   932,   114,    62,  1411,   791,   792,
     752,   115,   116,   340,  1675,   796,   797,   798,   351,   799,
     362,   111,   149,    77,   215,   149,   150,   151,  1672,   150,
     151,  1907,   820,   806,  1508,  1807,   602,   807,  1810,  1912,
     216,   474,   812,   813,   814,   815,   816,   817,   782,   818,
     933,   420,   822,   823,   103,  1328,  1205,   326,  1680,    78,
    1030,   420,   825,   266,   734,  1520,  1850,   327,  1111,   709,
     447,   448,   449,   450,   451,   452,   114,   267,   453,   454,
     455,   456,   115,   116,   475,   476,  1132,  1852,  1855,    64,
      65,  1681,   946,   947,   328,   119,   270,  1350,   271,  1221,
    1023,  1031,  1830,   114,  1725,  1726,  1351,  1352,   747,   115,
     116,  1405,   783,  1116,   413,   854,   855,   728,   866,  1638,
    1272,   867,    64,    65,    64,    65,  1024,  1962,   710,  1846,
      79,  1041,   831,   863,   828,  1630,   716,   735,   268,  1112,
     414,   263,   109,  1634,   149,  1133,   276,   918,   150,   151,
    1137,  1727,  1875,  1353,   903,  1698,   300,  1088,  1141,   325,
     883,   518,   948,  1387,   565,  1452,   119,   632,   633,   329,
     109,   109,   949,   950,   566,   519,   729,   951,   934,   935,
     784,  1134,   303,  1273,  1117,   835,   832,   302,   956,  1388,
     914,    64,    65,   119,   678,   718,  1329,   520,   884,   885,
     547,   567,  1042,   952,  1445,   330,   387,   975,  1274,  1138,
     349,  1446,    80,   272,  1143,   149,   521,   829,   295,   150,
     151,  1113,  1389,  1433,   584,   930,  1406,  1142,  1390,  1691,
    1032,  1682,   736,   522,  1391,   354,   523,   739,   742,   745,
    1701,  1661,   149,   388,  1033,  1034,   150,   151,   936,   331,
     711,   974,  1392,   359,   886,   355,  1025,  1453,   937,   938,
     887,    81,   524,   525,   785,  1667,  1118,   585,  1050,   786,
     332,  1063,  1393,  1144,  2475,   360,   568,   712,   836,  1728,
    1729,  1354,  1355,   748,  1043,  1275,  1683,  1394,  1114,   939,
    1098,  1099,  1100,  1101,  1135,  1699,  1102,   361,  1104,   117,
    1105,   420,  1107,   365,   839,   333,  1026,   397,   888,  1148,
     273,   369,   569,  1454,   526,   548,   296,  1395,   407,   274,
    1759,   334,   527,   889,  1283,   730,  1291,   117,   117,  1760,
    1761,  1168,  1027,  1119,  1276,  1035,  1036,   890,  1434,  2562,
    1531,   840,   546,   891,   724,   716,    64,    65,   892,  1730,
    1700,  1356,   433,   837,  1396,  1277,  1662,   688,  1139,  1731,
    1732,  1357,  1358,  1745,  1746,  2586,  1359,  1397,  1149,  1159,
    1160,   586,  1161,  1163,  1165,  1166,  1762,   570,  1398,  1549,
    1668,   528,   529,  1792,  1793,   621,   409,  1178,  1179,   297,
    1733,  1555,  1360,   689,  1183,  1184,    64,    65,   298,   893,
     411,   717,   457,   622,   718,  1399,  2082,  2083,  1561,  2065,
    1747,   446,   549,  1030,  1190,  1191,  1192,  1400,   894,  1401,
    1402,   550,  1145,   895,   458,   896,  2091,  2092,   571,  2078,
    1794,  1200,  1201,  1202,  1569,  1204,   420,  1206,  1550,  1207,
     719,  1652,  1211,   690,  2115,  2100,  2101,  2118,   897,   898,
    1556,   277,   530,  2084,  1031,  2126,   899,  1631,  2129,  1403,
    1210,  1030,  1212,  1676,  2633,  2634,  2137,  1562,  2637,  2140,
    2639,   468,  1214,  2093,   900,   720,  2147,   480,   623,   420,
    1222,   839,  2644,  2645,  1224,  1278,   509,  2649,  2650,    64,
      65,  2653,  2102,  1570,    64,    65,  2654,  2655,  1573,  1239,
    1241,  1079,  1031,   778,  1763,  1764,   482,  1282,  1284,  1287,
    1653,  1831,   926,  1641,  1642,  1292,   372,  1150,   840,   484,
    1298,   535,  1054,   721,   545,  1341,   722,   485,    64,    65,
     901,  1299,  2257,  2258,  2259,  1279,   237,  1182,  1748,  1749,
    1834,  2693,  1525,   536,  2694,   691,  2166,  1307,  2008,  2697,
     723,   588,    93,   724,  1526,  2700,   552,  1574,  1795,  1796,
    2703,  1280,  2174,   725,   238,   553,  1066,  1770,    94,    64,
      65,  1089,  1080,   537,  1765,    83,  1771,  1772,  1677,  1654,
    1655,  2085,  2086,  1032,  1766,  1767,  1643,  1551,   278,  1768,
     555,  2193, -1216,   279,  1656,   280,  1589,  1033,  1034,  1557,
    1832,  2094,  2095,  1781,  2635,  1051,   427,   574,  1750,   770,
      64,    65,  1782,  1783,  1444,  1769,  1563,   589,  1751,  1752,
    2103,  2104,  2646,  1773,   801,   802,    64,    65,  1797,  1835,
    2564,  1032,   239,  2745,  1657,  1469,  2748,   580,  1798,  1799,
    1186,    83,  1571,    95,  1475,  1033,  1034,   240,  1187,  1753,
    1833,  2087,    64,    65,  1081,   538,  2759,   590,  1503,  1784,
    1504,  2088,  2089,   674,   582,  1505,  1506,  1507,   604,  1800,
    2766,  2096,   605,  2767,  2768,  1513,  1692,   428,  1514,  1836,
    1516,  2097,  2098,   312,    96,   637,   638,   539,  1035,  1036,
    2105,   609,  2090,   613,  2260,   591,  1518,    84,  1519,   625,
    2106,  2107,  1522,  1523,   241,   630,  1575,  1685,  1605,    64,
      65,  1194,  2099,  1693,  1686,   631,  1529,  1530,    97,    85,
     420,  1532,  1533,    86,   636,    64,    65,   669,  1535,   668,
    1536,  2108,   672,  1538,   675,  1539,  1035,  1036,  1592,    64,
      65,   639,  2724,  1378,  1379,   242,   686,   640,  2727,    64,
    1162,  1774,  1775,   693,   641,   243,   642,  1169,  1170,   429,
     694,   643,   703,    84,   644,  2469,  2331,   696,  1694,   313,
     645,   700,  1586,    87,   702,  2340,  1587,   708,  1588,  1599,
     646,   314,  1591,   732,  2349,    85,   647,  1785,  1786,  2004,
     246,    64,    65,  1823,   714,   648,   733,  1597,   756,  1600,
     437,  1602,  1603,  1604,  1606,  2764,   757,  2765,  1609,  1610,
     649,    88,    64,    65,  1827,   218,  1618,  1542,  1543,    89,
      90,  1776,   760,  1624,  1695,   768,  1639,  1625,  1626,  1627,
     650,  1777,  1778,   704,  1172,  1173,  1779,   420,  1632,    87,
     219,  1635,  1659,    64,  1238,   651,    64,    65,  1872,  1511,
    1512,  1647,    69,  1648,   652,   653,  1650,  1787,    70,   775,
    2247,   315,  1780,  1867,  1868,   809,   810,  1788,  1789,   776,
     789,   438,  1790,   220,   316,   654,   247,    88,   790,   793,
     221,   794,   795,   800,   419,    89,    90,   803,   248,   805,
     222,   223,   439,   440,   417,    71,   655,   224,  1791,  1703,
     441,  1704,   826,   827,  1705,  1706,   834,  1707,   850,  1708,
     656,   843,   657,   845,   881,  1710,   852,  1711,   442,    72,
     225,   869,   249,   874,  1717,   658,  2428,  1414,   443,  2280,
     659,   879,   880,   906,  1472,   882,   660,   226,   904,   905,
    1422,   915,  2441,   661,  1544,  1545,   908,  2446,   916,   910,
     920,   227,   228,  2298,  1415,   912,   925,  1416,   229,   927,
     928,   662,   929,   940,    73,   941,   961,  1423,   250,   963,
    1424,   964,  1546,  1425,   663,   664,   953,   665,   230,   971,
    1822,   251,   972,    64,    65,  2214,   973,  1417,  1517,   417,
     418,   419,  1029,  1038,  1045,  1040,  2215,  1046,  1524,  1824,
    1426,  1826,  1828,  1095,  1097,  1096,  2556,  1108,    74,  2559,
    1110,  2561,  1121,  1122,   231,  1418,  1123,   666,  1419,  1124,
    1125,  1067,  2216,  1839,  2573,  2574,  1126,  1842,  1427,  1068,
    1127,  1428,    64,    65,  1829,  1069,  1378,  1379,    64,    65,
    1845,  2588,  1378,  1379,    64,    65,  1874,  1128,  1378,  1379,
    1129,  1871,  1873,  1130,  1147,  1154,  1070,  1152,  1153,  2217,
    1155,  1879,  1156,  1157,   232,  1890,  1158,  1171,  1174,  1233,
    1181,  1180,  1896,  1188,   233,  1189,  1193,  1195,  1185,  1071,
    1196,  1234,  1208,  1209,  1229,  1230,  1901,  1072,  1231,  1235,
    1237,  1903,  1236,  1288,  1294,  1905,  1290,  1908,  1909,  1300,
    1911,  1913,  1914,   234,  1917,  1615,  1616,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,  1930,  1932,  1933,  1304,  1318,
    1935,  1936,  1937,  1938,  1073,  1305,  1308,  1309,  2198,  1420,
    1944,  1945,  1074,  1310,  1947,  1948,  1949,  1319,  1323,  1951,
    1952,   160,  1429,   161,  2560,  1320,  1321,  1325,  1324,  1326,
    1327,  1336,  1955,  1956,  1333,  1957,  1958,  2572,  1334,  1421,
    1337,  1343,  2577,  1345,  1346,  1348,  2460,  1361,  1362,  1412,
    1363,  1364,  1430,   162,  1075,  2464,  1367,  1382,  1368,  1369,
    1385,   163,   684,  2252,  1386,  1076,  1407,  1413,  1432,  1435,
    1437,  1451,  1438,  1436,  1455,  1986,  1457,  1462,  1431,  1463,
    1456,  1077,  1464,  1978,  1979,  1980,  1465,  1471,  1982,  1473,
    2218,  1474,  2219,  1984,  1987,   459,  1989,  1990,  1991,  1510,
    1992,  1993,  1521,  1995,  1527,  2266,  1998,  1999,  2483,  1528,
    1534,  2485,  1541,   460,  2486,  2002,  2487,  1537,  1540,   164,
    1554,  1559,   769,  2006,  1560,  1565,  1596,  1566,  2011,  2012,
     461,  1567,  1568,  1012,  1577,  1578,  2014,  1579,  1607,  1580,
    1581,  1582,   462,  2031,  1594,  2018,  2220,  1013,  1595,  1608,
    1601,  1614,  1619,  2037,  1620,  1621,  1014,  1633,  2042,  1640,
     463,  1636,  1637,  1649,   464,  -432,  1015,  1820,   165,  1651,
    1660,  1663,  1684,  1825,  1696,  1673,   465,  1687,  1678,  1709,
    1702,  2046,  1715,  1716,   166,   167,  1721,  1740,  1743,  1856,
    1754,   168,  1697,   169,  1756,  1838,  1016,  1758,  1840,  1802,
    1803,  1804,  1844,  2054,  2055,  1808,  1809,  1801,  2057,  1811,
    1812,  1813,  1816,  1858,  2060,   466,  1017,  1819,  1837,   170,
    1841,  1847,  1848,  1870,  1853,  1859,  1860,  1857,  1862,  1876,
    1863,  1864,  1869,  1865,  1888,  1997,  1893,  1889,  1904,  1906,
    1892,  1910,  1941,  1953,  1954,  1918,  1959,  1960,  1961,  1897,
    1898,  1866,  1963,  1964,  1919,  1934,  1965,  1966,  1967,  1970,
    1902,  1018,  1968,  1969,  1971,  2109,  1972,  1973,  1974,  2455,
    1975,   853,  1976,  1977,  2432,  1994,  1996,  2000,   858,  2013,
    2019,   859,  2021,  2022,   171,  2023,   860,  2024,  2723,  2056,
     862,  2058,  2059,  2269,  2062,  2063,  2064,  2066,  1019,  2067,
    2599,  2068,  2071,  2665,  2073,  2074,  2075,  2079,  2080,  2738,
    2081,  2110,  2413,  2414,  2111,  2416,  2417,  2112,  2116,  2420,
    2421,  2161,  1020,  2162,  2117,  2164,  2119,  2120,  2121,  2122,
    2123,  2127,  2128,  2131,  2130,  2132,  2133,  2134,  2138,  2139,
    2433,  2141,  2142,  2143,  2175,  2176,  2177,  2178,  2179,  2180,
    2181,  2182,  2183,   919,  2144,  2148,  2149,  2434,  2150,  2152,
    2153,  1021,  2158,  1022,  2155,  2156, -1082,  2165,  2189,  2167,
    2191,  2170,  2173,   287,  2184,  2185,  2435,  2186,  2187,  2188,
    2244,  2467,  2192,  2239,  2245,  2248,  2254,  2197,   420,  2256,
    2218,  2270,  2271,  2201,  2272,  2275,  2436,  2283,  2288,  2289,
    2290,  2291,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,
    2212,  2213,  2317,  2321,  2226,  2227,  2228,  2229,  2230,  2231,
    2232,  2233,  2234,  2235,  2236,  2237,  2319,  2240,  2324,  2241,
    2242,  2243,  2326,  2327,  2328,  2332,  2659,  2333,  2437,  2334,
    2335,  2336,  2337,   420,  2253,  2341,  2342,  2438,  2343,  1067,
    2344,  2345,  2346,  2350,   434,  1103,  2351,  1068,  2352,  2359,
    2362,  2370,  1109,  1069,  2373,  2376,  2377,  2379,  2382,  2383,
    2384,  2387,  2392,  2396,  2412,  2462,  2261,  2463,  2440,  2262,
    2465,  2263,  2471,  2265,  1070,   420,  2267,  2472,  2268,  2474,
     808,  2477,  2478,  2479,  2489,  2273,  2274,  2287,  2480,  2482,
    2488,  2498,  2278,  2507,  2279,  2659,  2516,  1071,  2282,  2522,
    2526,  2284,  2529,  2535,  2543,  1072,  2554,   788,  2565,  2566,
    2708,  2567,  2568,   496,  2569,   503,   506,  2570,   511,   515,
    2546,  2585,  2592,  2594,  2549,  2595,  2318,  2597,  2598,  2671,
    2604,  2632,  2638,  2607,  2641,  2642,  2643,  2648,  2662,  2439,
    2663,  2664,  1073,  2666,  2676,  2687,   578,  2320,  2695,  2701,
    1074,  2698,  2710,  2711,  2712,  2719,  2722,  2656,  2732,  2733,
    2583,  2739,  2747,  2758,   593,   599,  2751,  2752,  2754,  1197,
    2760,  2709,  2761,  2762,  2763,  2705,  1199,     0,  1131,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1075,     0,     0,     0,     0,     0,     0,  2385,
       0,     0,     0,  1076,   670,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   680,     0,     0,  1077,
    2169,  1215,  1216,     0,     0,     0,  1220,     0,     0,  1223,
       0,     0,     0,     0,     0,     0,   701,     0,     0,     0,
    1232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2390,     0,     0,     0,     0,  2194,     0,     0,     0,
       0,     0,  2397,  2398,  2399,  2400,  2401,  2402,  2403,  2404,
    2405,  2406,  2407,     0,     0,     0,     0,     0,  2410,     0,
       0,     0,   420,   420,     0,   420,   420,  2714,  2716,   420,
     420,  2422,  2423,  2424,  2425,  2426,  2427,     0,  2429,  2430,
    2431,     0,     0,     0,     0,     0,     0,     0,     0,  1314,
       0,     0,     0,     0,  2442,  2443,  2444,  2445,     0,  2447,
    2448,  2449,  2450,  2451,  2452,     0,  2454,     0,     0,  2458,
    2459,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1370,  1365,     0,     0,   804,     0,     0,     0,  2466,     0,
       0,   420,  2468,     0,     0,   811,  2470,     0,     0,     0,
    2473,     0,     0,     0,   819,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2490,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   856,   857,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   861,     0,     0,     0,     0,
     864,     0,     0,     0,     0,     0,     0,     0,     0,   875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2537,
       0,     0,     0,  2539,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2540,  2541,     0,     0,     0,     0,  2545,
     420,     0,     0,  2548,   420,     0,     0,     0,     0,  2553,
       0,     0,  2557,  2558,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   921,   922,   923,   924,
       0,  2575,  2576,  1593,  2578,  2579,  2580,  2581,  2582,     0,
     420,  2584,     0,     0,     0,  2587,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2596,     0,     0,
       0,     0,  2600,  1617,     0,     0,     0,     0,  1622,     0,
       0,     0,     0,     0,     0,     0,     0,  2608,  1628,     0,
       0,    64,    65,     0,     0,     0,  1065,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2620,
       0,     0,     0,     0,  2624,     0,  2626,  2461,     0,     0,
       0,     0,  2629,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2636,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2682,     0,  2647,     0,     0,     0,  2651,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,  1718,  1719,  1720,     0,     0,  2670,     0,     0,
       0,     0,  1722,  1723,  1724,     0,     0,     0,     0,  1735,
    1736,  1737,     0,     0,  1738,  1739,     0,  1741,  1742,     0,
       0,  2685,     0,     0,     0,     0,  2690,     0,  2692,     0,
       0,     0,     0,     0,     0,  2696,     0,     0,     0,     0,
    2699,     0,   106,     0,   112,  2702,  1198,  1814,  1815,     0,
       0,  1817,  1818,     0,     0,     0,     0,   107,  1203,     0,
       0,     0,     0,     0,     0,     0,  2721,  2713,  2715,     0,
       0,     0,     0,     0,  1734,     0,     0,     0,   108,     0,
       0,     0,     0,     0,     0,     0,  1744,     0,     0,     0,
       0,     0,     0,  2725,   109,  1213,  2726,     0,  2741,  2728,
       0,  2744,     0,     0,  1805,  1806,   118,     0,     0,     0,
    2734,  2735,  2736,  2737,     0,     0,     0,     0,     0,     0,
       0,     0,  2746,     0,  1891,  2749,     0,     0,     0,     0,
    2571,     0,  2753,     0,  2755,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2589,     0,     0,     0,  2593,     0,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,  1303,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1940,     0,     0,     0,     0,     0,
    1946,     0,     0,     0,   112,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,   114,
       0,  1449,     0,     0,     0,   115,   116,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,  1981,     0,  1983,     0,     0,
       0,     0,     0,  1988,     0,     0,     0,     0,    64,    65,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1509,   107,     0,     0,     0,  2003,     0,
       0,     0,     0,  1515,  2009,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
       0,  2016,     0,     0,     0,     0,     0,     0,     0,   119,
       0,   109,     0,  2026,     0,     0,     0,     0,     0,     0,
       0,  2033,     0,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,   110,     0,   149,     0,
       0,     0,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2731,     0,
       0,     0,     0,     0,  1590,  2061,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2069,     0,
       0,  1598,     0,     0,     0,     0,     0,     0,  2072,     0,
       0,   112,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1623,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1629,     0,     0,     0,    64,
      65,     0,     0,     0,     0,     0,     0,     0,   283,     0,
       0,     0,     0,     0,  1646,   107,     0,     0,     0,     0,
    1478,     0,     0,     0,  1658,  1479,     0,     0,   117,  1666,
    2070,     0,     0,   118,     0,     0,  2159,     0,  2076,  2077,
    2157,     0,     0,     0,   284,     0,  1480,  1481,     0,  1482,
    1483,     0,   109,  2113,  2114,     0,     0,     0,  2172,     0,
    1484,     0,     0,     0,  2124,  2125,     0,     0,     0,     0,
       0,     0,  1485,  1486,     0,  2135,  2136,     0,     0,     0,
    1487,     0,     0,  1488,     0,  2145,  2146,     0,     0,     0,
       0,  2151,  2195,  2196,     0,     0,     0,   110,     0,     0,
    1489,  2154,     0,   285,     0,     0,     0,  1490,  1491,  2199,
    2200,  1492,     0,     0,  2202,  2203,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,   112,     0,  2246,     0,     0,  2250,  2251,     0,
       0,     0,  1821,     0,     0,  2255,     0,     0,     0,  1493,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1843,     0,     0,     0,     0,     0,     0,     0,
    2264,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,   118,     0,  2276,     0,     0,     0,
       0,  1877,  1494,     0,  1878,     0,     0,     0,  1495,     0,
    2285,     0,  2286,     0,  1894,  1895,     0,     0,     0,     0,
    2292,     0,  1899,  1496,     0,  2296,     0,     0,     0,  1900,
       0,  2301,  1497,     0,     0,     0,  2305,     0,     0,     0,
    2308,     0,     0,  2311,     0,     0,  2314,     0,  2316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1498,
    1499,     0,     0,     0,     0,     0,     0,     0,     0,  1939,
       0,     0,  1942,  1943,  2322,     0,     0,     0,     0,     0,
    1500,  1950,     0,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,  2354,  2355,  2356,  2357,  2358,     0,
    2360,  2361,     0,     0,  1501,  2365,  2366,  2367,  2368,  2369,
       0,  2371,  2372,     0,     0,     0,     0,     0,     0,     0,
       0,  2323,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2325,     0,     0,     0,  2329,  2330,  1985,     0,     0,
       0,     0,     0,     0,  2338,  2339,     0,     0,     0,     0,
       0,     0,     0,  2347,  2348,  2001,     0,     0,     0,  2353,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2363,
    2364,  2010,     0,     0,     0,     0,     0,     0,     0,     0,
    2374,  2375,     0,     0,     0,     0,  2015,     0,  2017,     0,
       0,  2378,     0,  2020,     0,     0,     0,     0,  2025,     0,
    2380,  2027,  2381,  2028,  2029,  2030,  2032,     0,     0,  2034,
       0,     0,  2035,  2453,     0,  2036,  2038,     0,  2039,  2040,
    2041,  2043,     0,  2044,  2045,     0,     0,     0,     0,  2047,
    2048,  2049,     0,     0,  2050,  2051,     0,  2281,     0,     0,
    2052,  2053,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2293,  2294,  2295,     0,     0,  2297,
       0,  2299,  2300,     0,     0,  2302,  2303,  2304,     0,     0,
    2306,  2307,     0,     0,  2310,     0,  2312,  2313,     0,  2315,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2491,     0,     0,
    2493,  2494,  2495,  2496,  2497,     0,  2499,  2500,     0,  2502,
    2503,  2504,  2505,  2506,     0,  2508,  2509,     0,  2511,  2512,
    2513,  2514,  2515,     0,  2517,  2518,     0,  2520,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2523,  2524,     0,
       0,     0,     0,     0,   514,     0,     0,     0,  2527,     0,
    2532,     0,     0,     0,  2160,     0,  2536,     0,  2163,   107,
    2538,     0,     0,     0,  2492,     0,     0,     0,     0,     0,
    2168,     0,     0,  2171,  2501,     0,  2544,  2386,     0,     0,
    2389,     0,     0,  2510,     0,  2393,     0,     0,  2394,     0,
       0,     0,  2519,     0,     0,     0,   109,     0,     0,  2521,
       0,     0,     0,  2190,     0,     0,     0,  2409,     0,     0,
    2525,     0,     0,     0,     0,     0,  2528,     0,     0,  2530,
       0,     0,  2531,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,  2605,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2238,
       0,     0,     0,     0,     0,     0,     0,  1645,     0,     0,
       0,     0,     0,     0,     0,  2610,     0,     0,     0,     0,
       0,     0,   107,     0,  2612,     0,     0,     0,     0,     0,
       0,     0,     0,  2614,  2476,  2615,   112,     0,     0,  2617,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2484,     0,  2640,     0,
       0,     0,     0,  2277,     0,     0,     0,     0,  2609,     0,
       0,     0,     0,     0,     0,     0,     0,  2611,  1167,     0,
       0,     0,     0,   117,     0,     0,  2613,     0,   118,     0,
       0,     0,  2616,     0,   110,     0,  2618,     0,     0,  2619,
       0,     0,     0,     0,     0,     0,     0,  2309,     0,     0,
       0,     0,     0,  2677,     0,  2678,     0,  2679,     0,     0,
    2680,     0,  2681,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2534,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2704,     0,   112,
       0,     0,     0,     0,     0,  2542,     0,     0,     0,     0,
       0,     0,  2547,     0,     0,  2550,  2551,  2717,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,   343,     0,     0,     0,
       0,   118,     0,   344,     0,  2742,     0,     0,     0,     0,
       0,     0,     0,  2388,     0,     0,  2391,     0,     0,     0,
       0,     0,     0,     0,  2395,  2756,     0,     0,  2757,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2408,     0,     0,  2411,     0,     0,     0,     0,  2415,     0,
       0,  2418,  2419,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2621,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2631,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2481,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2683,
    2684,     0,  2686,     0,  2688,  2689,     0,  2691,     0,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   107,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   345,  2718,
     346,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2533,     0,
       0,     0,     0,   487,   488,     0,     0,   489,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2750,     0,     0,   490,
       0,  2552,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,  2563,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   594,   107,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2606,   112,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   491,     0,     0,     0,
       0,     0,     0,     0,     0,   595,     0,     0,     0,     0,
       0,     0,     0,   492,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   493,     0,     0,  2622,  2623,     0,  2625,
       0,     0,     0,     0,  2627,  2628,   118,     0,   110,  2630,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   596,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2652,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   494,     0,     0,     0,
       0,     0,     0,   112,     0,  2672,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   597,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,   495,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2720,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2729,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2740,     0,     0,  2743,     0,     0,     0,     0,     0,     0,
       0,   598,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   976,   977,   978,     0,     0,  1242,  1243,  1244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     979,   980,     0,     0,   981,  1245,  1246,   982,     0,  1247,
     107,     0,     0,     0,   983,     0,  1248,     0,   984,  1249,
       0,     0,     0,  1250,     0,     0,   985,   986,     0,     0,
       0,  1251,  1252,     0,   987,   988,     0,     0,     0,  1253,
       0,     0,     0,     0,     0,     0,     0,   109,   107,     0,
       0,   989,     0,     0,     0,     0,     0,   990,     0,     0,
       0,   991,   992,     0,     0,   993,  1254,  1255,     0,     0,
    1256,     0,     0,     0,     0,     0,   107,     0,     0,     0,
       0,   994,     0,     0,     0,   109,  1257,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,   995,     0,     0,     0,     0,  1258,     0,     0,     0,
       0,     0,     0,  1302,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   996,     0,     0,     0,     0,  1259,   107,
     110,     0,     0,     0,     0,     0,     0,  1260,     0,     0,
       0,     0,     0,     0,     0,     0,   997,   112,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   501,
       0,     0,     0,     0,   998,     0,   999,     0,     0,  1261,
       0,  1262,  1000,  1001,     0,   112,     0,  1263,  1264,     0,
       0,     0,     0,     0,   107,     0,  1002,  1003,     0,     0,
       0,     0,  1265,     0,   117,     0,  1004,  1005,     0,   118,
       0,   110,  1266,   112,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,     0,  1007,     0,     0,  1267,     0,  1268,
       0,     0,   117,     0,     0,     0,  1008,   118,  1009,  1269,
       0,     0,     0,     0,  1010,     0,     0,     0,     0,  1270,
       0,     0,     0,     0,     0,     0,   112,   505,     0,     0,
       0,     0,     0,     0,     0,   118,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1011,     0,
       0,     0,     0,  1271,     0,     0,     0,     0,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,     0,     0,   118,     0,
       0,   112,     0,     0,     0,     0,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,   118,   502,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       1,     0,     0,     2,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       0,     0,     0,     5,     6,     0,     7,     8,     9,     0,
       0,     0,     0,     0,   175,     0,    10,   176,     0,   177,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,   178,     0,
     179,   180,   181,     0,     0,     0,     0,     0,     0,     0,
     182,     0,   183,     0,     0,     0,     0,   184,     0,   185,
     186,   187,     0,     0,    16,     0,   188,     0,   189,     0,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
      18,     0,     0,    19,     0,     0,     0,    20,    21,     0,
       0,     0,     0,     0,    22,     0,     0,   190,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,   191,     0,    25,    26,    27,     0,
       0,    28,    29,     0,   192,   193,     0,     0,   194,     0,
       0,     0,   195,   954,   196,    30,     0,     0,   955,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,     0,   197,   198,     0,     0,   199,
       0,     0,     0,     0,    34,     0,    35,     0,     0,   200,
       0,  1339,     0,    36,     0,     0,    37,     0,     0,    38,
       0,    39,     0,    40,   201,   202,     0,     0,    41,     0,
       0,     0,   203,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,    43,     0,     0,
       0,     0,     0,     0,     0,   204,     0,   205,     0,     0,
       0,     0,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,    47,     0,     0,     0,
       0,   206,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,   208,     0,     0,
       0,     0,     0,     0,     0,   209,     0,     0,     0,     0,
       0,     0,   210,     0,     0,     0,    51,     0,   211,     0,
     212,     0,    52,     0,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,   213,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,  1340
};

static const yytype_int16 yycheck[] =
{
       3,    50,   657,  1425,  1625,   478,  1627,   948,    11,     4,
     951,    32,     3,     4,     0,   652,   653,     5,     5,     3,
       4,     3,     4,     5,     4,    97,     5,   968,     5,    32,
       5,    32,     4,     5,    61,     3,     4,    40,    61,     3,
       4,     4,     5,     4,    27,     5,    49,     3,     4,    52,
      20,   434,    55,     4,    32,    14,    59,     3,     4,    62,
      27,   444,     5,    66,    67,    82,     4,    70,    17,     4,
      73,    74,    36,   977,    77,    17,   131,  1124,    81,  1126,
       5,    48,    32,    86,    51,    56,     3,     4,   167,    16,
      36,   121,   113,     4,    40,    62,    99,   100,   101,   102,
     103,   104,    61,    66,   210,  1152,  1153,  1154,     3,     4,
      12,    21,   121,     3,     4,     3,     4,   120,    85,    36,
       4,    21,     3,     4,    99,    88,     3,     4,    66,   164,
     105,    66,     6,    46,   151,   102,    27,    66,    50,   133,
     117,    17,   149,   222,    27,   192,   156,   119,    87,     3,
       4,    53,   155,     3,     4,   280,   119,    27,   858,   859,
     860,     5,   183,  2658,   185,   111,   187,   188,   132,    71,
     165,     3,     4,   183,   195,   178,   139,     3,     4,    21,
     183,   119,     3,     4,   119,   257,   132,    99,     4,   210,
      40,    17,     3,     4,   300,   186,   108,    78,   100,    33,
       3,     4,   186,   220,   221,    59,   253,   286,   144,    59,
     240,  2706,    56,   124,   191,   132,   118,   156,   235,   919,
     122,    65,    98,    21,   136,   193,   261,   236,     4,   201,
     189,    21,   134,   288,   134,   207,   208,    16,   201,   222,
     243,   896,   213,   292,   207,   208,   120,   193,   255,   243,
      66,   278,    21,    21,   228,   278,   259,   260,   275,     4,
     209,   111,   232,   201,   285,   242,   201,   209,   195,   207,
     208,   274,   207,   208,   301,   166,   277,    57,   301,   282,
     283,   224,   285,   286,   244,   288,     4,   266,     5,   266,
     171,   242,   203,   281,   280,   298,   166,    14,    15,   277,
     259,   684,   282,   119,    14,   308,   309,   298,   192,   186,
     269,    21,   307,   300,   298,   192,    26,   242,   300,   291,
     288,   282,   297,    33,   288,   297,   236,   277,   291,   332,
     333,   334,   288,   336,   297,   307,   236,   340,   341,   222,
     289,   300,   288,   193,    61,   236,  1001,   289,   351,   352,
     341,   342,   229,   291,   357,   268,   291,   341,   342,   362,
     363,    71,   246,   263,  1019,   246,   236,   370,   340,   213,
     373,   288,   344,   345,   119,   196,   253,   340,   290,   346,
     343,   344,   345,    14,    15,   201,   288,   278,   391,   392,
     222,   207,   208,   288,   236,   398,   399,   400,   288,   402,
     288,   119,   340,     4,    83,   340,   344,   345,   278,   344,
     345,   222,   433,   416,  1051,  1356,   192,   420,  1359,   222,
      99,   298,   425,   426,   427,   428,   429,   430,    30,   432,
      61,   434,   435,   436,   284,    17,   819,    37,   236,    40,
      63,   444,   445,   223,    34,  1082,   236,    47,    40,    61,
     160,   161,   162,   163,   164,   165,   201,   237,   168,   169,
     170,   171,   207,   208,   341,   342,    61,   236,   236,     3,
       4,    27,   189,   190,    74,   291,    64,     5,    66,   862,
       4,   104,  1386,   201,    14,    15,    14,    15,    13,   207,
     208,   121,    94,    40,     5,   498,   499,    61,     4,     4,
      66,   522,     3,     4,     3,     4,    30,  1554,   120,  1413,
     111,    40,   192,   516,   103,  1215,    61,   107,   298,   111,
      31,     5,    56,  1223,   340,   120,    66,   576,   344,   345,
      61,    61,  1436,    61,   555,    27,     4,   282,    87,     4,
     543,    45,   259,    40,    37,   130,   291,   257,   258,   149,
      56,    56,   269,   270,    47,    59,   120,   274,   189,   190,
     162,   156,    37,   129,   111,    78,   246,    88,   617,    66,
     573,     3,     4,   291,   284,   120,   158,    81,     4,     5,
      66,    74,   111,   300,   258,   185,   138,   636,   154,   120,
     228,   265,   193,   181,    61,   340,   100,   186,    70,   344,
     345,   193,    99,   121,    44,   608,   236,   156,   105,  1264,
     233,   167,   202,   117,   111,     0,   120,   327,   328,   329,
    1275,   121,   340,   175,   247,   248,   344,   345,   259,   229,
     242,   634,   129,   265,    60,     5,   160,   222,   269,   270,
      66,   242,   146,   147,   246,   121,   193,    87,   651,   251,
     250,   654,   149,   120,  2275,     5,   149,   269,   171,   189,
     190,   189,   190,   188,   193,   231,   222,   164,   260,   300,
     673,   674,   675,   676,   269,   167,   679,     4,   681,   213,
     683,   684,   685,     5,   138,   285,   210,     5,   114,    61,
     278,   123,   185,   278,   198,   181,   168,   194,    31,   287,
       5,   301,   206,   129,   205,   269,   205,   213,   213,    14,
      15,   760,   236,   260,   280,   338,   339,   143,   236,  2430,
    1103,   175,   197,   149,   269,    61,     3,     4,   154,   259,
     222,   259,   193,   246,   231,    30,   236,    54,   269,   269,
     270,   269,   270,    14,    15,  2456,   274,   244,   120,   752,
     753,   191,   755,   756,   757,   758,    61,   250,   255,    61,
     236,   265,   266,    14,    15,    93,     5,   770,   771,   241,
     300,    61,   300,    90,   777,   778,     3,     4,   250,   205,
       5,   117,   117,   111,   120,   282,    14,    15,    61,  1730,
      61,     4,   278,    63,   797,   798,   799,   294,   224,   296,
     297,   287,   269,   229,    66,   231,    14,    15,   301,  1750,
      61,   814,   815,   816,    61,   818,   819,   820,   120,   822,
     156,    82,   843,   140,  1765,    14,    15,  1768,   254,   255,
     120,   202,   336,    61,   104,  1776,   262,  1220,  1779,   336,
     843,    63,   845,   121,  2555,  2556,  1787,   120,  2559,  1790,
    2561,   118,   855,    61,   280,   191,  1797,   280,   186,   862,
     863,   138,  2573,  2574,   867,   160,    33,  2578,  2579,     3,
       4,  2582,    61,   120,     3,     4,  2587,  2588,    61,   882,
     883,    40,   104,    12,   189,   190,   168,   890,   891,   892,
     151,   105,   602,    24,    25,   898,   123,   269,   175,   168,
     903,     5,   124,   239,    16,   954,   242,   176,     3,     4,
     336,   914,  1959,  1960,  1961,   210,    88,    12,   189,   190,
     105,  2632,     5,    89,  2635,   242,  1830,   930,  1628,  2640,
     266,   149,    83,   269,    17,  2646,    66,   120,   189,   190,
    2651,   236,  1846,   279,   116,   229,   656,     5,    99,     3,
       4,   661,   111,     6,   259,    28,    14,    15,   236,   220,
     221,   189,   190,   233,   269,   270,    97,   269,   339,   274,
     279,  1875,     0,   344,   235,   346,     4,   247,   248,   269,
     194,   189,   190,     5,  2557,   255,    40,    89,   259,   123,
       3,     4,    14,    15,   997,   300,   269,   215,   269,   270,
     189,   190,  2575,    61,     4,     5,     3,     4,   259,   194,
    2432,   233,   184,  2724,   275,  1018,  2727,    72,   269,   270,
       4,    28,   269,   174,  1027,   247,   248,   199,    12,   300,
     244,   259,     3,     4,   193,    88,  2747,   255,  1041,    61,
    1043,   269,   270,    40,    31,  1048,  1049,  1050,     5,   300,
    2761,   259,     4,  2764,  2765,  1058,   130,   111,  1061,   244,
    1063,   269,   270,    26,   215,     4,     5,   120,   338,   339,
     259,     4,   300,     5,  1978,   293,  1079,   150,  1081,     5,
     269,   270,  1085,  1086,   256,     4,   269,   258,    59,     3,
       4,   801,   300,   167,   265,     5,  1099,  1100,   249,   172,
    1103,  1104,  1105,   176,     5,     3,     4,     4,  1111,     5,
    1113,   300,     5,  1116,   111,  1118,   338,   339,  1167,     3,
       4,    60,  2695,     7,     8,   297,     4,    66,  2701,     3,
       4,   189,   190,     4,    73,   307,    75,     4,     5,   193,
       4,    80,    40,   150,    83,    59,  2087,     4,   222,   112,
      89,     5,  1155,   226,     4,  2096,  1159,    97,  1161,  1180,
      99,   124,  1165,     5,  2105,   172,   105,   189,   190,   176,
      26,     3,     4,     5,   120,   114,     4,  1180,   266,  1182,
      35,  1184,  1185,  1186,  1187,  2758,     4,  2760,  1191,  1192,
     129,   264,     3,     4,     5,    19,  1199,    42,    43,   272,
     273,   259,     4,  1206,   278,     4,  1227,  1210,  1211,  1212,
     149,   269,   270,   111,     4,     5,   274,  1220,  1221,   226,
      44,  1224,  1243,     3,     4,   164,     3,     4,     5,     4,
       5,  1234,   186,  1236,   173,   174,  1239,   259,   192,     4,
    1940,   204,   300,     4,     5,   422,   423,   269,   270,     5,
       4,   106,   274,    77,   217,   194,   112,   264,   196,     4,
      84,     4,     4,     4,    11,   272,   273,     5,   124,     5,
      94,    95,   127,   128,     9,   229,   215,   101,   300,  1282,
     135,  1284,     5,   265,  1287,  1288,   168,  1290,   176,  1292,
     229,     4,   231,     4,     4,  1298,   168,  1300,   153,   253,
     124,   195,   158,   195,  1307,   244,  2210,    22,   163,  2009,
     249,     5,     5,    66,  1024,   195,   255,   141,   187,   187,
      22,     5,  2226,   262,   169,   170,    66,  2231,   223,    66,
       5,   155,   156,  2033,    49,   222,     4,    52,   162,     4,
       4,   280,   195,    87,   298,     5,     5,    49,   204,     4,
      52,     4,   197,    55,   293,   294,    87,   296,   182,     5,
    1381,   217,     5,     3,     4,    55,     4,    82,  1078,     9,
      10,    11,     5,    99,     4,    17,    66,     5,  1088,  1382,
      82,  1384,  1385,    17,     4,    17,  2424,     4,   342,  2427,
       4,  2429,     4,    97,   218,   110,     5,   336,   113,     5,
      87,    91,    92,  1406,  2442,  2443,     4,  1410,   110,    99,
       5,   113,     3,     4,     5,   105,     7,     8,     3,     4,
       5,  2459,     7,     8,     3,     4,     5,     5,     7,     8,
      87,  1434,  1435,     5,     4,     4,   126,     5,     5,   129,
       4,  1444,     5,     5,   268,  1448,     5,     4,     4,   156,
       5,    12,  1455,     4,   278,     4,     4,     4,    12,   149,
       4,   156,     5,     5,   165,     5,  1469,   157,     4,     4,
       4,  1474,     5,   254,   282,  1478,   254,  1480,  1481,     5,
    1483,  1484,  1485,   307,  1487,  1195,  1196,  1490,  1491,  1492,
    1493,  1494,  1495,  1496,  1497,  1498,  1499,  1500,     4,     4,
    1503,  1504,  1505,  1506,   194,     5,     5,     5,  1891,   224,
    1513,  1514,   202,     5,  1517,  1518,  1519,     4,   267,  1522,
    1523,    44,   224,    46,  2428,     5,     5,     5,   267,     5,
       5,     5,  1535,  1536,     4,  1538,  1539,  2441,     4,   254,
       5,     5,  2446,     5,     5,     5,  2246,     4,     4,   138,
       5,     5,   254,    76,   244,  2255,     4,   236,     5,     5,
     236,    84,   287,  1946,   105,   255,     5,   105,    40,   236,
       5,    40,   209,   105,   240,  1596,     5,     4,   280,     5,
     209,   271,     5,  1586,  1587,  1588,   209,   209,  1591,     4,
     280,     4,   282,  1596,  1597,    53,  1599,  1600,  1601,     5,
    1603,  1604,     5,  1606,     5,  1988,  1609,  1610,  2308,     5,
       4,  2311,     4,    71,  2314,  1618,  2316,   111,   111,   142,
       5,     5,   347,  1626,     5,     4,    12,     5,  1631,  1632,
      88,     5,     4,    66,     5,     5,  1639,     4,     6,     5,
       5,     4,   100,  1664,     5,  1648,   336,    80,     5,     4,
      12,     5,     4,  1674,     4,     4,    89,     4,  1679,     5,
     118,    38,    38,     4,   122,     0,    99,  1377,   191,     5,
     236,   236,   167,  1383,     4,   138,   134,   121,   236,   195,
     205,  1684,     4,     4,   207,   208,     4,     4,     4,   304,
       5,   214,   244,   216,     5,  1405,   129,     5,  1408,     5,
       5,     5,  1412,  1706,  1707,     4,     4,   267,  1711,     5,
       4,     4,     4,     4,  1717,   173,   149,     5,     5,   242,
       5,   236,   236,  1433,   236,     4,     4,   304,     4,  1439,
       4,     4,     4,   304,     4,     6,     5,  1447,     5,   222,
    1450,   222,     5,     5,     4,   222,     5,     5,     4,  1459,
    1460,   304,     5,     5,   222,   222,     4,     4,     4,     4,
    1470,   194,     5,     5,     4,   267,     5,     5,     4,   300,
       5,   496,     5,     4,   347,     5,     4,     4,   503,     4,
       4,   506,     5,     5,   307,     5,   511,     5,  2692,     4,
     515,     5,     4,    12,     5,     5,     5,     4,   231,     4,
       6,     5,     4,     6,     5,     5,     5,     4,     4,  2717,
       5,     5,  2195,  2196,     5,  2198,  2199,     5,     4,  2202,
    2203,  1824,   255,  1826,     4,  1828,     5,   267,     5,     5,
       5,     4,     4,   267,     5,     5,     5,     5,     4,     4,
     347,     5,     5,     5,  1847,  1848,  1849,  1850,  1851,  1852,
    1853,  1854,  1855,   578,     5,     4,     4,   347,     5,     4,
       4,   294,     5,   296,     4,     4,   280,     5,  1871,     5,
    1873,     5,     5,    32,     4,     4,   347,     5,     4,     4,
       4,  2264,     5,     5,     4,     4,     4,  1890,  1891,     4,
     280,     5,     5,  1896,     4,     4,   347,     5,     5,     5,
       5,     5,  1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,
    1913,  1914,     4,     4,  1917,  1918,  1919,  1920,  1921,  1922,
    1923,  1924,  1925,  1926,  1927,  1928,     5,  1930,     4,  1932,
    1933,  1934,     5,     5,     5,     4,  2591,     4,   347,     5,
       5,     5,     5,  1946,  1947,     4,     4,   347,     5,    91,
       5,     5,     5,     4,   113,   680,     4,    99,     5,     4,
       4,     4,   687,   105,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,  1979,     4,   347,  1982,
       4,  1984,     5,  1986,   126,  1988,  1989,     5,  1991,     4,
     421,     5,     4,     4,     4,  1998,  1999,  2018,     5,     5,
       5,     4,  2005,     4,  2007,  2660,     4,   149,  2011,     4,
       4,  2014,     4,     4,     4,   157,     4,   377,     5,     4,
     347,     5,     5,   182,     5,   184,   185,     4,   187,   188,
    2413,     5,     5,     4,  2417,     5,  2057,     5,     4,  2600,
       5,     4,     4,  2489,     5,     4,     4,     4,     4,  2221,
       5,     5,   194,     4,     4,     4,   215,  2060,     4,     4,
     202,     5,     5,     5,     4,     4,     4,  2589,     5,     5,
    2453,     5,     4,     4,   233,   234,     5,     5,     5,   804,
       4,  2660,     5,     5,     5,  2656,   811,    -1,   719,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,    -1,    -1,    -1,    -1,    -1,    -1,  2158,
      -1,    -1,    -1,   255,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,   271,
    1840,   856,   857,    -1,    -1,    -1,   861,    -1,    -1,   864,
      -1,    -1,    -1,    -1,    -1,    -1,   305,    -1,    -1,    -1,
     875,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2164,    -1,    -1,    -1,    -1,  1876,    -1,    -1,    -1,
      -1,    -1,  2175,  2176,  2177,  2178,  2179,  2180,  2181,  2182,
    2183,  2184,  2185,    -1,    -1,    -1,    -1,    -1,  2191,    -1,
      -1,    -1,  2195,  2196,    -1,  2198,  2199,  2670,  2671,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,    -1,  2211,  2212,
    2213,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   935,
      -1,    -1,    -1,    -1,  2227,  2228,  2229,  2230,    -1,  2232,
    2233,  2234,  2235,  2236,  2237,    -1,  2239,    -1,    -1,  2242,
    2243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     975,   967,    -1,    -1,   413,    -1,    -1,    -1,  2261,    -1,
      -1,  2264,  2265,    -1,    -1,   424,  2269,    -1,    -1,    -1,
    2273,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   947,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   501,   502,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   514,    -1,    -1,    -1,    -1,
     519,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   528,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2392,
      -1,    -1,    -1,  2396,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2406,  2407,    -1,    -1,    -1,    -1,  2412,
    2413,    -1,    -1,  2416,  2417,    -1,    -1,    -1,    -1,  2422,
      -1,    -1,  2425,  2426,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   595,   596,   597,   598,
      -1,  2444,  2445,  1168,  2447,  2448,  2449,  2450,  2451,    -1,
    2453,  2454,    -1,    -1,    -1,  2458,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2470,    -1,    -1,
      -1,    -1,  2475,  1198,    -1,    -1,    -1,    -1,  1203,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2490,  1213,    -1,
      -1,     3,     4,    -1,    -1,    -1,   655,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2532,
      -1,    -1,    -1,    -1,  2537,    -1,  2539,  2247,    -1,    -1,
      -1,    -1,  2545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2620,    -1,  2576,    -1,    -1,    -1,  2580,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,  1308,  1309,  1310,    -1,    -1,  2600,    -1,    -1,
      -1,    -1,  1318,  1319,  1320,    -1,    -1,    -1,    -1,  1325,
    1326,  1327,    -1,    -1,  1330,  1331,    -1,  1333,  1334,    -1,
      -1,  2624,    -1,    -1,    -1,    -1,  2629,    -1,  2631,    -1,
      -1,    -1,    -1,    -1,    -1,  2638,    -1,    -1,    -1,    -1,
    2643,    -1,     4,    -1,   156,  2648,   805,  1363,  1364,    -1,
      -1,  1367,  1368,    -1,    -1,    -1,    -1,    19,   817,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2687,  2670,  2671,    -1,
      -1,    -1,    -1,    -1,  1324,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1336,    -1,    -1,    -1,
      -1,    -1,    -1,  2696,    56,   854,  2699,    -1,  2719,  2702,
      -1,  2722,    -1,    -1,  1354,  1355,   218,    -1,    -1,    -1,
    2713,  2714,  2715,  2716,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2725,    -1,  1449,  2728,    -1,    -1,    -1,    -1,
    2440,    -1,  2735,    -1,  2737,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2460,    -1,    -1,    -1,  2464,    -1,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   925,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1509,    -1,    -1,    -1,    -1,    -1,
    1515,    -1,    -1,    -1,   156,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,  1000,    -1,    -1,    -1,   207,   208,    -1,    -1,    -1,
      -1,   213,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1590,    -1,  1592,    -1,    -1,
      -1,    -1,    -1,  1598,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1052,    19,    -1,    -1,    -1,  1623,    -1,
      -1,    -1,    -1,  1062,  1629,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,  1646,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,
      -1,    56,    -1,  1658,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1666,    -1,    -1,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,   101,    -1,   340,    -1,
      -1,    -1,   344,   345,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2708,    -1,
      -1,    -1,    -1,    -1,  1163,  1721,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1734,    -1,
      -1,  1180,    -1,    -1,    -1,    -1,    -1,    -1,  1744,    -1,
      -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1214,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   193,    -1,
      -1,    -1,    -1,    -1,  1233,    19,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,  1243,    27,    -1,    -1,   213,  1248,
    1740,    -1,    -1,   218,    -1,    -1,  1821,    -1,  1748,  1749,
    1816,    -1,    -1,    -1,   229,    -1,    48,    49,    -1,    51,
      52,    -1,    56,  1763,  1764,    -1,    -1,    -1,  1843,    -1,
      62,    -1,    -1,    -1,  1774,  1775,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    75,    -1,  1785,  1786,    -1,    -1,    -1,
      82,    -1,    -1,    85,    -1,  1795,  1796,    -1,    -1,    -1,
      -1,  1801,  1877,  1878,    -1,    -1,    -1,   101,    -1,    -1,
     102,  1811,    -1,   288,    -1,    -1,    -1,   109,   110,  1894,
    1895,   113,    -1,    -1,  1899,  1900,    -1,    -1,    -1,    -1,
      -1,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      -1,    -1,   156,    -1,  1939,    -1,    -1,  1942,  1943,    -1,
      -1,    -1,  1381,    -1,    -1,  1950,    -1,    -1,    -1,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1411,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1985,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   213,
      -1,    -1,    -1,    -1,   218,    -1,  2001,    -1,    -1,    -1,
      -1,  1440,   224,    -1,  1443,    -1,    -1,    -1,   230,    -1,
    2015,    -1,  2017,    -1,  1453,  1454,    -1,    -1,    -1,    -1,
    2025,    -1,  1461,   245,    -1,  2030,    -1,    -1,    -1,  1468,
      -1,  2036,   254,    -1,    -1,    -1,  2041,    -1,    -1,    -1,
    2045,    -1,    -1,  2048,    -1,    -1,  2051,    -1,  2053,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
     282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1508,
      -1,    -1,  1511,  1512,  2070,    -1,    -1,    -1,    -1,    -1,
     302,  1520,    -1,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,    -1,    -1,    -1,  2110,  2111,  2112,  2113,  2114,    -1,
    2116,  2117,    -1,    -1,   346,  2121,  2122,  2123,  2124,  2125,
      -1,  2127,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2071,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2081,    -1,    -1,    -1,  2085,  2086,  1596,    -1,    -1,
      -1,    -1,    -1,    -1,  2094,  2095,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2103,  2104,  1614,    -1,    -1,    -1,  2109,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2119,
    2120,  1630,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2130,  2131,    -1,    -1,    -1,    -1,  1645,    -1,  1647,    -1,
      -1,  2141,    -1,  1652,    -1,    -1,    -1,    -1,  1657,    -1,
    2150,  1660,  2152,  1662,  1663,  1664,  1665,    -1,    -1,  1668,
      -1,    -1,  1671,  2238,    -1,  1674,  1675,    -1,  1677,  1678,
    1679,  1680,    -1,  1682,  1683,    -1,    -1,    -1,    -1,  1688,
    1689,  1690,    -1,    -1,  1693,  1694,    -1,  2010,    -1,    -1,
    1699,  1700,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2027,  2028,  2029,    -1,    -1,  2032,
      -1,  2034,  2035,    -1,    -1,  2038,  2039,  2040,    -1,    -1,
    2043,  2044,    -1,    -1,  2047,    -1,  2049,  2050,    -1,  2052,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2323,    -1,    -1,
    2326,  2327,  2328,  2329,  2330,    -1,  2332,  2333,    -1,  2335,
    2336,  2337,  2338,  2339,    -1,  2341,  2342,    -1,  2344,  2345,
    2346,  2347,  2348,    -1,  2350,  2351,    -1,  2353,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2363,  2364,    -1,
      -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,  2374,    -1,
    2385,    -1,    -1,    -1,  1823,    -1,  2391,    -1,  1827,    19,
    2395,    -1,    -1,    -1,  2324,    -1,    -1,    -1,    -1,    -1,
    1839,    -1,    -1,  1842,  2334,    -1,  2411,  2160,    -1,    -1,
    2163,    -1,    -1,  2343,    -1,  2168,    -1,    -1,  2171,    -1,
      -1,    -1,  2352,    -1,    -1,    -1,    56,    -1,    -1,  2359,
      -1,    -1,    -1,  1872,    -1,    -1,    -1,  2190,    -1,    -1,
    2370,    -1,    -1,    -1,    -1,    -1,  2376,    -1,    -1,  2379,
      -1,    -1,  2382,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,  2481,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1928,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2501,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,  2510,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2519,  2277,  2521,   156,    -1,    -1,  2525,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2309,    -1,  2563,    -1,
      -1,    -1,    -1,  2002,    -1,    -1,    -1,    -1,  2498,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2507,     6,    -1,
      -1,    -1,    -1,   213,    -1,    -1,  2516,    -1,   218,    -1,
      -1,    -1,  2522,    -1,   101,    -1,  2526,    -1,    -1,  2529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2046,    -1,    -1,
      -1,    -1,    -1,  2609,    -1,  2611,    -1,  2613,    -1,    -1,
    2616,    -1,  2618,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2388,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2652,    -1,   156,
      -1,    -1,    -1,    -1,    -1,  2408,    -1,    -1,    -1,    -1,
      -1,    -1,  2415,    -1,    -1,  2418,  2419,  2672,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    -1,    16,    -1,    -1,    -1,
      -1,   218,    -1,    23,    -1,  2720,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2162,    -1,    -1,  2165,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2173,  2740,    -1,    -1,  2743,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2189,    -1,    -1,  2192,    -1,    -1,    -1,    -1,  2197,    -1,
      -1,  2200,  2201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2533,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2552,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,
    2623,    -1,  2625,    -1,  2627,  2628,    -1,  2630,    -1,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,  2682,
     240,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2387,    -1,
      -1,    -1,    -1,    65,    66,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2729,    -1,    -1,    91,
      -1,  2420,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,  2431,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2482,   156,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   205,    -1,    -1,  2535,  2536,    -1,  2538,
      -1,    -1,    -1,    -1,  2543,  2544,   218,    -1,   101,  2548,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2581,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,   156,    -1,  2604,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,   336,   218,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2687,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2704,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2719,    -1,    -1,  2722,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   284,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    20,    21,    22,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    52,    48,    49,    55,    -1,    52,
      19,    -1,    -1,    -1,    62,    -1,    59,    -1,    66,    62,
      -1,    -1,    -1,    66,    -1,    -1,    74,    75,    -1,    -1,
      -1,    74,    75,    -1,    82,    83,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    19,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,   109,   110,    -1,    -1,   113,   109,   110,    -1,    -1,
     113,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,    56,   129,    -1,    -1,    -1,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   171,    -1,    -1,    -1,    -1,   171,    19,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,   156,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,   222,    -1,   224,    -1,    -1,   222,
      -1,   224,   230,   231,    -1,   156,    -1,   230,   231,    -1,
      -1,    -1,    -1,    -1,    19,    -1,   244,   245,    -1,    -1,
      -1,    -1,   245,    -1,   213,    -1,   254,   255,    -1,   218,
      -1,   101,   255,   156,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,   282,    -1,    -1,   280,    -1,   282,
      -1,    -1,   213,    -1,    -1,    -1,   294,   218,   296,   292,
      -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,    -1,   302,
      -1,    -1,    -1,    -1,    -1,    -1,   156,   276,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   218,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   336,    -1,
      -1,    -1,    -1,   336,    -1,    -1,    -1,    -1,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,    -1,    -1,   218,    -1,
      -1,   156,    -1,    -1,    -1,    -1,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,   218,   284,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
      41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    77,    44,    -1,    46,
      -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    95,    96,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    -1,    -1,   125,    -1,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,    -1,
     141,    -1,    -1,   144,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    -1,   155,    -1,    -1,   124,    -1,    -1,
     161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   174,   141,    -1,   177,   178,   179,    -1,
      -1,   182,   183,    -1,   151,   152,    -1,    -1,   155,    -1,
      -1,    -1,   159,   156,   161,   196,    -1,    -1,   161,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,   212,   213,    -1,    -1,   182,   183,    -1,    -1,   186,
      -1,    -1,    -1,    -1,   225,    -1,   227,    -1,    -1,   196,
      -1,   161,    -1,   234,    -1,    -1,   237,    -1,    -1,   240,
      -1,   242,    -1,   244,   211,   212,    -1,    -1,   249,    -1,
      -1,    -1,   219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   262,    -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   242,    -1,   244,    -1,    -1,
      -1,    -1,   283,   284,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   295,    -1,   297,    -1,    -1,    -1,
      -1,   268,   303,    -1,    -1,   306,   307,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   283,   284,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   292,    -1,    -1,    -1,    -1,
      -1,    -1,   299,    -1,    -1,    -1,   337,    -1,   305,    -1,
     307,    -1,   343,    -1,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,    -1,    -1,    -1,    -1,   343,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335
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
      64,    66,   181,   278,   287,   520,    66,   202,   339,   344,
     346,   521,    39,   193,   229,   288,   350,   360,   362,   522,
       5,   297,   307,   352,   525,    70,   168,   241,   250,   526,
       4,   527,    88,   501,    61,   278,   301,   534,   193,   288,
     350,   535,    26,   112,   124,   204,   217,   537,    50,    99,
     108,   136,   290,   552,   553,     4,    37,    47,    74,   149,
     185,   229,   250,   285,   301,   376,     4,   124,   203,   554,
     288,   350,   556,    16,    23,   238,   240,   361,   557,   228,
     561,   288,   350,   562,     0,     5,    59,   350,   382,   265,
       5,     4,   288,   350,   383,     5,    32,   277,   384,   123,
     350,   385,   123,   350,   387,   350,     4,   192,   246,   391,
     186,   298,   341,   342,   350,   390,   352,   138,   175,   389,
     196,   350,    78,   171,   246,   350,   392,     5,   350,     4,
     242,   394,   350,   350,     5,   224,   397,    31,   398,     5,
     399,     5,   403,     5,    31,   404,   350,     9,    10,    11,
     350,   356,   357,   358,   359,   350,   350,    40,   111,   193,
     350,   406,   350,   193,   360,   362,   350,    35,   106,   127,
     128,   135,   153,   163,   365,   350,     4,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   117,    66,    53,
      71,    88,   100,   118,   122,   134,   173,   412,   118,   414,
     186,   192,   229,   253,   298,   341,   342,   350,   400,   415,
     280,   418,   168,   419,   168,   176,   421,    65,    66,    69,
      91,   168,   185,   205,   268,   336,   360,   423,   350,   362,
     426,    59,   284,   360,   427,   276,   360,   362,   428,    33,
     429,   360,   362,   430,     4,   360,   362,   431,    45,    59,
      81,   100,   117,   120,   146,   147,   198,   206,   265,   266,
     336,   435,   210,   300,   441,     5,    89,     6,    88,   120,
     433,     5,    65,   362,   432,    16,   501,    66,   181,   278,
     287,   442,    66,   229,   443,   279,    61,   278,   301,   444,
      21,   134,   236,   263,   445,    37,    47,    74,   149,   185,
     250,   301,   446,   362,    89,    16,   195,   451,   360,   454,
      72,   457,    31,   458,    44,    87,   191,   459,   149,   215,
     255,   293,   460,   360,    18,    58,   115,   172,   284,   360,
     461,     4,   192,   464,     5,     4,     6,   120,   350,     4,
       5,   242,   466,     5,   468,     5,   117,   191,   242,   266,
     469,    93,   111,   186,   482,     5,   480,     5,   266,   481,
       4,     5,   352,   352,   350,   350,     5,     4,     5,    60,
      66,    73,    75,    80,    83,    89,    99,   105,   114,   129,
     149,   164,   173,   174,   194,   215,   229,   231,   244,   249,
     255,   262,   280,   293,   294,   296,   336,   486,     5,     4,
     360,   350,     5,   350,    40,   111,   350,   524,   352,   350,
     360,   362,   523,   350,   365,   350,     4,   361,    54,    90,
     140,   242,   528,     4,     4,   350,     4,   149,   255,   529,
       5,   360,     4,    40,   111,   350,   536,   350,    97,    61,
     120,   242,   269,   538,   120,   551,    61,   117,   120,   156,
     191,   239,   242,   266,   269,   279,   540,   541,    61,   120,
     269,   550,     5,     4,    34,   107,   202,   533,    66,   352,
     377,    66,   352,   378,    66,   352,   379,    13,   188,   532,
     350,   350,   222,   350,   380,   350,   266,     4,   350,   350,
       4,   560,     4,   282,   558,     4,   282,   559,     4,   365,
     123,   350,   563,   350,   350,     4,     5,   350,    12,   350,
     350,   350,    30,    94,   162,   246,   251,   364,   364,     4,
     196,   350,   350,     4,     4,     4,   350,   350,   350,   350,
       4,     4,     5,     5,   360,     5,   350,   350,   356,   358,
     358,   360,   350,   350,   350,   350,   350,   350,   350,   360,
     362,   359,   350,   350,   359,   350,     5,   265,   103,   186,
     413,   192,   246,   416,   168,    78,   171,   246,   417,   138,
     175,   401,   401,     4,   420,     4,   422,   192,   253,   424,
     176,   425,   168,   365,   350,   350,   360,   360,   365,   365,
     365,   360,   365,   350,   360,   438,     4,   362,   436,   195,
       4,   165,   307,   437,   195,   360,   131,   288,   440,     5,
       5,     4,   195,   350,     4,     5,    60,    66,   114,   129,
     143,   149,   154,   205,   224,   229,   231,   254,   255,   262,
     280,   336,   495,   362,   187,   187,    66,   447,    66,   448,
      66,   449,   222,   450,   350,     5,   223,   452,   361,   365,
       5,   360,   360,   360,   360,     4,   352,     4,     4,   195,
     350,    14,    15,    61,   189,   190,   259,   269,   270,   300,
      87,     5,     5,    14,    15,    61,   189,   190,   259,   269,
     270,   274,   300,    87,   156,   161,   361,   472,   477,    87,
     156,     5,   470,     4,     4,    14,    61,   189,   259,   269,
     300,     5,     5,     4,   350,   361,    20,    21,    22,    48,
      49,    52,    55,    62,    66,    74,    75,    82,    83,    99,
     105,   109,   110,   113,   129,   149,   171,   194,   222,   224,
     230,   231,   244,   245,   254,   255,   280,   282,   294,   296,
     302,   336,    66,    80,    89,    99,   129,   149,   194,   231,
     255,   294,   296,     4,    30,   160,   210,   236,   489,     5,
      63,   104,   233,   247,   248,   338,   339,   494,    99,   487,
      17,    40,   111,   193,   493,     4,     5,    17,   209,   289,
     350,   255,   494,   502,   124,   494,   503,    36,    40,   111,
     132,   193,   288,   350,   504,   360,   352,    91,    99,   105,
     126,   149,   157,   194,   202,   244,   255,   271,   507,    40,
     111,   193,     5,   281,    17,   209,   289,   511,   282,   352,
     512,     5,    99,   105,   297,    17,    17,     4,   350,   350,
     350,   350,   350,   365,   350,   350,   359,   350,     4,   365,
       4,    40,   111,   193,   260,   530,    40,   111,   193,   260,
     531,     4,    97,     5,     5,    87,     4,     5,     5,    87,
       5,   541,    61,   120,   156,   269,   545,    61,   120,   269,
     549,    87,   156,    61,   120,   269,   543,     4,    61,   120,
     269,   542,     5,     5,     4,     4,     5,     5,     5,   350,
     350,   350,     4,   350,   555,   350,   350,     6,   361,     4,
       5,     4,     4,     5,     4,    97,   257,   366,   350,   350,
      12,     5,    12,   350,   350,    12,     4,    12,     4,     4,
     350,   350,   350,     4,   352,     4,     4,   365,   360,   365,
     350,   350,   350,   360,   350,   359,   350,   350,     5,     5,
     350,   362,   350,   360,   350,   365,   365,   366,   366,   366,
     365,   359,   350,   365,   350,   133,   243,   353,   439,   165,
       5,     4,   365,   156,   156,     4,     5,     4,     4,   350,
     434,   350,    20,    21,    22,    48,    49,    52,    59,    62,
      66,    74,    75,    82,   109,   110,   113,   129,   149,   171,
     180,   222,   224,   230,   231,   245,   255,   280,   282,   292,
     302,   336,    66,   129,   154,   231,   280,    30,   160,   210,
     236,   496,   350,   205,   350,   497,    17,   350,   254,   507,
     254,   205,   350,   498,   282,   499,    17,    98,   350,   350,
       5,   366,    56,   360,     4,     5,   463,   350,     5,     5,
       5,   156,   183,   370,   370,   164,   261,   368,     4,     4,
       5,     5,   467,   267,   267,     5,     5,     5,    17,   158,
     369,   369,   368,     4,     4,   368,     5,     5,   471,   161,
     335,   361,   475,     5,   474,     5,     5,   478,     5,   479,
       5,    14,    15,    61,   189,   190,   259,   269,   270,   274,
     300,     4,     4,     5,     5,   370,   368,     4,     5,     5,
     365,    82,   151,   220,   221,   235,   275,   373,     7,     8,
     350,   355,   236,   121,   236,   236,   105,    40,    66,    99,
     105,   111,   129,   149,   164,   194,   231,   244,   255,   282,
     294,   296,   297,   336,   488,   121,   236,     5,    27,   166,
     236,   278,   138,   105,    22,    49,    52,    82,   110,   113,
     224,   254,    22,    49,    52,    55,    82,   110,   113,   224,
     254,   280,    40,   121,   236,   236,   105,     5,   209,    27,
     222,    36,   132,   288,   350,   258,   265,   121,   240,   360,
     507,    40,   130,   222,   278,   240,   209,     5,     5,   244,
      27,   222,     4,     5,     5,   209,    36,   132,   288,   350,
     507,   209,   352,     4,     4,   350,     5,   300,    22,    27,
      48,    49,    51,    52,    62,    74,    75,    82,    85,   102,
     109,   110,   113,   171,   224,   230,   245,   254,   281,   282,
     302,   346,   490,   350,   350,   350,   350,   350,   494,   360,
       5,     4,     5,   350,   350,   360,   350,   352,   350,   350,
     494,     5,   350,   350,   352,     5,    17,     5,     5,   350,
     350,   359,   350,   350,     4,   350,   350,   111,   350,   350,
     111,     4,    42,    43,   169,   170,   197,   375,   375,    61,
     120,   269,   539,   375,     5,    61,   120,   269,   544,     5,
       5,    61,   120,   269,   546,     4,     5,     5,     4,    61,
     120,   269,   548,    61,   120,   269,   547,     5,     5,     4,
       5,     5,     4,   375,   375,   375,   350,   350,   350,     4,
     360,   350,   361,   365,     5,     5,    12,   350,   360,   362,
     350,    12,   350,   350,   350,    59,   350,     6,     4,   350,
     350,    46,   268,   402,     5,   352,   352,   365,   350,     4,
       4,     4,   365,   360,   350,   350,   350,   350,   365,   360,
     366,   359,   350,     4,   366,   350,    38,    38,     4,   362,
       5,    24,    25,    97,   367,     4,   360,   350,   350,     4,
     350,     5,    82,   151,   220,   221,   235,   275,   360,   362,
     236,   121,   236,   236,    21,   236,   360,   121,   236,    27,
     166,   236,   278,   138,    21,   236,   121,   236,   236,    21,
     236,    27,   167,   222,   167,   258,   265,   121,   167,   222,
     286,   507,   130,   167,   222,   278,     4,   244,    27,   167,
     222,   507,   205,   350,   350,   350,   350,   350,   350,   195,
     350,   350,    20,   232,   455,     4,     4,   350,   370,   370,
     370,     4,   370,   370,   370,    14,    15,    61,   189,   190,
     259,   269,   270,   300,   369,   370,   370,   370,   370,   370,
       4,   370,   370,     4,   369,    14,    15,    61,   189,   190,
     259,   269,   270,   300,     5,   473,     5,   476,     5,     5,
      14,    15,    61,   189,   190,   259,   269,   270,   274,   300,
       5,    14,    15,    61,   189,   190,   259,   269,   270,   274,
     300,     5,    14,    15,    61,   189,   190,   259,   269,   270,
     274,   300,    14,    15,    61,   189,   190,   259,   269,   270,
     300,   267,     5,     5,     5,   369,   369,   368,     4,     4,
     368,     5,     4,     4,   370,   370,     4,   370,   370,     5,
     352,   360,   362,     5,   350,   352,   350,     5,   350,     5,
     355,   105,   194,   244,   105,   194,   244,     5,   352,   350,
     352,     5,   350,   360,   352,     5,   355,   236,   236,    21,
     236,    21,   236,   236,    21,   236,   304,   304,     4,     4,
       4,   488,     4,     4,     4,   304,   304,     4,     5,     4,
     352,   350,     5,   350,     5,   355,   352,   360,   360,   350,
      27,    48,    51,    62,    85,   102,   346,   371,     4,   352,
     350,   365,   352,     5,   360,   360,   350,   352,   352,   360,
     360,   350,   352,   350,     5,   350,   222,   222,   350,   350,
     222,   350,   222,   350,   350,   500,   508,   350,   222,   222,
     350,   350,   350,   350,   350,   350,   350,   350,     5,   300,
     350,   491,   350,   350,   222,   350,   350,   350,   350,   360,
     365,     5,   360,   360,   350,   350,   365,   350,   350,   350,
     360,   350,   350,     5,     4,   350,   350,   350,   350,     5,
       5,     4,   375,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   350,   350,
     350,   365,   350,   365,   350,   360,   362,   350,   365,   350,
     350,   350,   350,   350,     5,   350,     4,     6,   350,   350,
       4,   360,   350,   365,   176,   363,   350,   363,   366,   365,
     360,   350,   350,     4,   350,   360,   365,   360,   350,     4,
     360,     5,     5,     5,     5,   360,   365,   360,   360,   360,
     360,   362,   360,   365,   360,   360,   360,   362,   360,   360,
     360,   360,   362,   360,   360,   360,   350,   360,   360,   360,
     360,   360,   360,   360,   350,   350,     4,   350,     5,     4,
     350,   370,     5,     5,     5,   368,     4,     4,     5,   370,
     369,     4,   370,     5,     5,     5,   369,   369,   368,     4,
       4,     5,    14,    15,    61,   189,   190,   259,   269,   270,
     300,    14,    15,    61,   189,   190,   259,   269,   270,   300,
      14,    15,    61,   189,   190,   259,   269,   270,   300,   267,
       5,     5,     5,   369,   369,   368,     4,     4,   368,     5,
     267,     5,     5,     5,   369,   369,   368,     4,     4,   368,
       5,   267,     5,     5,     5,   369,   369,   368,     4,     4,
     368,     5,     5,     5,     5,   369,   369,   368,     4,     4,
       5,   369,     4,     4,   369,     4,     4,   370,     5,   365,
     360,   350,   350,   360,   350,     5,   355,     5,   360,   352,
       5,   360,   365,     5,   355,   350,   350,   350,   350,   350,
     350,   350,   350,   350,     4,     4,     5,     4,     4,   350,
     360,   350,     5,   355,   352,   365,   365,   350,   359,   365,
     365,   350,   365,   365,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,    55,    66,    92,   129,   280,   282,
     336,   505,   506,   507,   518,   519,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   360,     5,
     350,   350,   350,   350,     4,     4,   365,   366,     4,   492,
     365,   365,   359,   350,     4,   365,     4,   375,   375,   375,
     355,   350,   350,   350,   365,   350,   359,   350,   350,    12,
       5,     5,     4,   350,   350,     4,   365,   360,   350,   350,
     366,   367,   350,     5,   350,   365,   365,   362,     5,     5,
       5,     5,   365,   367,   367,   367,   365,   367,   366,   367,
     367,   365,   367,   367,   367,   365,   367,   367,   365,   360,
     367,   365,   367,   367,   365,   367,   365,     4,   362,     5,
     350,     4,   370,   369,     4,   369,     5,     5,     5,   369,
     369,   368,     4,     4,     5,     5,     5,     5,   369,   369,
     368,     4,     4,     5,     5,     5,     5,   369,   369,   368,
       4,     4,     5,   369,   370,   370,   370,   370,   370,     4,
     370,   370,     4,   369,   369,   370,   370,   370,   370,   370,
       4,   370,   370,     4,   369,   369,     4,     4,   369,     4,
     369,   369,     4,     4,     4,   361,   367,     4,   360,   367,
     350,   360,     4,   367,   367,   360,     4,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   360,   367,
     350,   360,     4,   359,   359,   360,   359,   359,   360,   360,
     359,   359,   350,   350,   350,   350,   350,   350,   355,   350,
     350,   350,   347,   347,   347,   347,   347,   347,   347,   506,
     347,   355,   350,   350,   350,   350,   355,   350,   350,   350,
     350,   350,   350,   365,   350,   300,   354,   355,   350,   350,
     366,   352,     4,     4,   366,     4,   350,   359,   350,    59,
     350,     5,     5,   350,     4,   363,   367,     5,     4,     4,
       5,   360,     5,   366,   367,   366,   366,   366,     5,     4,
     350,   370,   369,   370,   370,   370,   370,   370,     4,   370,
     370,   369,   370,   370,   370,   370,   370,     4,   370,   370,
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
     370,   369,   370,   369,   370,   370,   369,   370,   369,   369,
     350,   367,   360,   360,   350,   360,   350,   360,   360,   350,
     360,   367,     4,   508,   508,   354,   350,   508,     4,   508,
     365,     5,     4,     4,   508,   508,   354,   350,     4,   508,
     508,   350,   360,   508,   508,   508,   509,   515,   516,   507,
     513,   514,     4,     5,     5,     6,     4,   186,   298,   342,
     350,   400,   360,    32,   277,   374,     4,   370,   370,   370,
     370,   370,   361,   367,   367,   350,   367,     4,   367,   367,
     350,   367,   350,   508,   508,     4,   350,   508,     5,   350,
     508,     4,   350,   508,   365,   515,   517,   518,   347,   514,
       5,     5,     4,   350,   401,   350,   401,   365,   367,     4,
     360,   362,     4,   355,   354,   350,   350,   354,   350,   360,
     518,   352,     5,     5,   350,   350,   350,   350,   374,     5,
     360,   362,   365,   360,   362,   508,   350,     4,   508,   350,
     367,     5,     5,   350,     5,   350,   365,   365,     4,   508,
       4,     5,     5,     5,   354,   354,   508,   508,   508
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
    {fr->getMaskSystemCmd();;}
    break;

  case 468:
#line 1230 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 469:
#line 1233 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 470:
#line 1236 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 471:
#line 1237 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 472:
#line 1238 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 473:
#line 1241 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 474:
#line 1242 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 475:
#line 1243 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 476:
#line 1244 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 477:
#line 1245 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 478:
#line 1246 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 483:
#line 1253 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 484:
#line 1254 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 485:
#line 1255 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 486:
#line 1258 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 487:
#line 1259 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 488:
#line 1262 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 489:
#line 1263 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 490:
#line 1266 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 491:
#line 1267 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 492:
#line 1270 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 493:
#line 1271 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 494:
#line 1274 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 496:
#line 1276 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 497:
#line 1279 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 498:
#line 1280 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 500:
#line 1284 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 501:
#line 1288 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 502:
#line 1291 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 503:
#line 1298 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 504:
#line 1299 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 505:
#line 1302 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 508:
#line 1305 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 509:
#line 1306 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 510:
#line 1307 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 511:
#line 1308 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 513:
#line 1310 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 514:
#line 1311 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 515:
#line 1312 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 517:
#line 1314 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 518:
#line 1315 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 519:
#line 1316 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 520:
#line 1317 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 522:
#line 1321 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 523:
#line 1324 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 524:
#line 1325 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 525:
#line 1328 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 526:
#line 1329 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 527:
#line 1330 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 528:
#line 1331 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 529:
#line 1334 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 530:
#line 1335 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 531:
#line 1336 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 532:
#line 1337 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 533:
#line 1340 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 534:
#line 1341 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1342 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1343 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 537:
#line 1344 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 538:
#line 1345 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 539:
#line 1348 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 540:
#line 1349 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 541:
#line 1350 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 544:
#line 1354 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 545:
#line 1355 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 546:
#line 1358 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 547:
#line 1361 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 548:
#line 1362 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1366 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 550:
#line 1368 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 551:
#line 1369 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 558:
#line 1381 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 559:
#line 1383 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 560:
#line 1385 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 561:
#line 1386 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 562:
#line 1388 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 563:
#line 1390 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 564:
#line 1392 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 565:
#line 1394 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1396 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1400 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 569:
#line 1401 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 570:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 571:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 572:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 573:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 574:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 575:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1412 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 578:
#line 1416 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1418 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1420 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1422 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 582:
#line 1424 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 583:
#line 1426 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 584:
#line 1428 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 585:
#line 1430 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 586:
#line 1433 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1435 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1437 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 594:
#line 1445 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 595:
#line 1446 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 596:
#line 1447 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 598:
#line 1449 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 599:
#line 1450 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 600:
#line 1452 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 601:
#line 1454 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 602:
#line 1455 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1456 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1457 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 605:
#line 1460 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1461 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 611:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 619:
#line 1480 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 620:
#line 1483 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 621:
#line 1486 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 622:
#line 1489 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 623:
#line 1492 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 624:
#line 1495 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 625:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 626:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 628:
#line 1509 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 633:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 635:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 636:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 639:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 642:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 643:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 644:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 645:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 648:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 653:
#line 1583 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 654:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1592 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 662:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 664:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 665:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 668:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1633 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1634 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 673:
#line 1635 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1637 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 675:
#line 1639 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 676:
#line 1640 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1641 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1642 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 679:
#line 1645 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1646 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1647 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1648 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1649 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1651 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 685:
#line 1652 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1653 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1654 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 688:
#line 1658 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 689:
#line 1660 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 690:
#line 1661 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 691:
#line 1663 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 692:
#line 1665 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 693:
#line 1667 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 694:
#line 1670 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 695:
#line 1671 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 696:
#line 1674 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 697:
#line 1675 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 698:
#line 1676 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 699:
#line 1679 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 700:
#line 1686 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 701:
#line 1687 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 702:
#line 1688 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 703:
#line 1689 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 704:
#line 1690 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 705:
#line 1691 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 706:
#line 1692 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 707:
#line 1696 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 709:
#line 1704 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 710:
#line 1705 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 711:
#line 1707 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 712:
#line 1709 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 713:
#line 1710 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 714:
#line 1711 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 716:
#line 1712 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 717:
#line 1713 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 718:
#line 1714 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 720:
#line 1716 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 721:
#line 1717 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 722:
#line 1719 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 723:
#line 1721 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 724:
#line 1723 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 725:
#line 1726 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1728 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 727:
#line 1729 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 728:
#line 1731 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 729:
#line 1734 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 730:
#line 1737 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 731:
#line 1739 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 732:
#line 1742 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 733:
#line 1745 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 734:
#line 1748 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 735:
#line 1751 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 736:
#line 1755 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 737:
#line 1759 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 738:
#line 1764 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 739:
#line 1768 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 740:
#line 1769 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1771 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1772 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 743:
#line 1774 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1776 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 745:
#line 1778 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 746:
#line 1780 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 747:
#line 1781 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1783 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1785 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 750:
#line 1788 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 751:
#line 1792 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 752:
#line 1796 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 753:
#line 1798 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 754:
#line 1800 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 755:
#line 1802 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 756:
#line 1804 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 757:
#line 1806 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 758:
#line 1808 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 759:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 760:
#line 1812 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 761:
#line 1814 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 762:
#line 1816 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 763:
#line 1818 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 764:
#line 1820 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1822 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1823 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 767:
#line 1825 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 768:
#line 1827 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 769:
#line 1828 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 770:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 771:
#line 1831 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 772:
#line 1833 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 773:
#line 1834 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 774:
#line 1835 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 775:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1838 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1839 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1841 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 779:
#line 1845 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 780:
#line 1848 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 781:
#line 1851 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 782:
#line 1855 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 783:
#line 1859 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 784:
#line 1864 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 785:
#line 1868 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 786:
#line 1869 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 787:
#line 1870 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 788:
#line 1872 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1874 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 790:
#line 1878 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 791:
#line 1879 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1880 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 793:
#line 1882 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 794:
#line 1885 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 795:
#line 1888 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 796:
#line 1891 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 797:
#line 1892 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 798:
#line 1894 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 799:
#line 1897 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1901 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 801:
#line 1903 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1904 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 803:
#line 1906 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 804:
#line 1909 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 805:
#line 1912 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 806:
#line 1913 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1915 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 808:
#line 1916 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 809:
#line 1917 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 810:
#line 1919 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 811:
#line 1920 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 812:
#line 1922 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1925 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 814:
#line 1928 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 815:
#line 1930 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 816:
#line 1931 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 820:
#line 1936 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 821:
#line 1937 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 822:
#line 1939 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 823:
#line 1941 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 824:
#line 1943 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 825:
#line 1944 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 826:
#line 1946 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 827:
#line 1947 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 830:
#line 1952 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1953 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 832:
#line 1954 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 833:
#line 1955 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 834:
#line 1956 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 835:
#line 1957 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 836:
#line 1958 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 837:
#line 1959 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 838:
#line 1960 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 839:
#line 1961 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 840:
#line 1963 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 841:
#line 1965 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 842:
#line 1966 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 843:
#line 1967 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 844:
#line 1968 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 845:
#line 1969 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 846:
#line 1971 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 847:
#line 1972 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 848:
#line 1973 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 849:
#line 1974 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 850:
#line 1975 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1977 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 852:
#line 1978 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 853:
#line 1979 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 854:
#line 1980 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 855:
#line 1981 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 856:
#line 1982 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 857:
#line 1985 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 858:
#line 1986 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 859:
#line 1987 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 860:
#line 1988 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 861:
#line 1989 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 862:
#line 1990 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 863:
#line 1991 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 864:
#line 1992 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 865:
#line 1993 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 866:
#line 1994 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 867:
#line 1995 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 868:
#line 1996 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 869:
#line 1997 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 870:
#line 1998 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 871:
#line 1999 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 872:
#line 2000 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 873:
#line 2001 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 874:
#line 2002 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 875:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 876:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 877:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 878:
#line 2008 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 879:
#line 2009 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 880:
#line 2010 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 881:
#line 2011 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 882:
#line 2012 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 883:
#line 2014 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 884:
#line 2024 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 885:
#line 2032 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 886:
#line 2041 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 887:
#line 2049 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 888:
#line 2056 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 889:
#line 2063 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 890:
#line 2071 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 891:
#line 2079 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 892:
#line 2084 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 893:
#line 2089 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 894:
#line 2094 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 895:
#line 2099 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 896:
#line 2104 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 897:
#line 2109 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 898:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 899:
#line 2123 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer), 
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 900:
#line 2133 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 901:
#line 2143 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2152 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2160 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2170 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2180 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2190 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2202 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2211 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2219 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 911:
#line 2221 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 912:
#line 2223 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 913:
#line 2228 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 914:
#line 2231 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 915:
#line 2235 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 916:
#line 2237 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 917:
#line 2238 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 918:
#line 2241 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 919:
#line 2242 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 920:
#line 2243 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 921:
#line 2244 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 922:
#line 2245 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 923:
#line 2246 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 924:
#line 2247 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 926:
#line 2251 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 927:
#line 2252 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 928:
#line 2253 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 929:
#line 2254 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 930:
#line 2255 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 931:
#line 2258 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 932:
#line 2260 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 933:
#line 2262 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 934:
#line 2264 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(Coord::CoordSystem)(yyvsp[(6) - (8)].integer),(Coord::SkyFrame)(yyvsp[(7) - (8)].integer), (Marker::AnalysisMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 935:
#line 2266 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 936:
#line 2268 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 937:
#line 2270 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 938:
#line 2271 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 939:
#line 2272 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 940:
#line 2274 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 941:
#line 2276 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 942:
#line 2278 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 943:
#line 2280 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 944:
#line 2282 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 945:
#line 2283 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 946:
#line 2284 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 947:
#line 2286 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 948:
#line 2288 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 949:
#line 2291 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 950:
#line 2293 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 951:
#line 2295 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 952:
#line 2296 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 953:
#line 2297 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 954:
#line 2298 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 955:
#line 2300 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 956:
#line 2301 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 957:
#line 2302 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 958:
#line 2303 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 959:
#line 2304 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 960:
#line 2306 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2308 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 962:
#line 2309 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2311 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2313 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2315 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 966:
#line 2316 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 967:
#line 2318 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2320 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2321 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 970:
#line 2322 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 971:
#line 2323 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2325 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2327 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 974:
#line 2330 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 975:
#line 2333 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2334 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2335 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2337 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 979:
#line 2340 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2343 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2344 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 982:
#line 2345 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 983:
#line 2346 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2348 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2350 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 986:
#line 2352 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2353 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 988:
#line 2355 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 989:
#line 2356 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 990:
#line 2357 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2358 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2359 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 993:
#line 2361 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 994:
#line 2363 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2365 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2367 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2369 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 999:
#line 2370 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1000:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1001:
#line 2374 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1002:
#line 2375 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1003:
#line 2376 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1005:
#line 2378 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1007:
#line 2382 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1008:
#line 2383 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1009:
#line 2384 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1010:
#line 2385 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1011:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1012:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1013:
#line 2389 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1014:
#line 2390 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1015:
#line 2392 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1016:
#line 2395 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1017:
#line 2396 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1018:
#line 2397 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1019:
#line 2398 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1020:
#line 2401 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1021:
#line 2402 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1022:
#line 2405 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1023:
#line 2406 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1024:
#line 2409 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1025:
#line 2410 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1026:
#line 2413 "frame/parser.Y"
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

  case 1027:
#line 2426 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1028:
#line 2427 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1029:
#line 2431 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1030:
#line 2432 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1031:
#line 2436 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1032:
#line 2441 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1033:
#line 2446 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1034:
#line 2452 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1035:
#line 2454 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1036:
#line 2457 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1037:
#line 2459 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1038:
#line 2462 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1039:
#line 2465 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1040:
#line 2466 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1041:
#line 2467 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1042:
#line 2468 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1043:
#line 2469 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1044:
#line 2470 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1045:
#line 2472 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1048:
#line 2479 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1049:
#line 2480 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1050:
#line 2481 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1051:
#line 2482 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1052:
#line 2483 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1053:
#line 2484 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1056:
#line 2489 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1057:
#line 2490 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1058:
#line 2491 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1059:
#line 2492 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1060:
#line 2493 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1061:
#line 2494 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1062:
#line 2495 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1063:
#line 2496 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1064:
#line 2497 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1065:
#line 2498 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1066:
#line 2499 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1069:
#line 2506 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1070:
#line 2507 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1072:
#line 2510 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1073:
#line 2511 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1074:
#line 2512 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1075:
#line 2513 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2516 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1077:
#line 2517 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1080:
#line 2525 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1081:
#line 2528 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1082:
#line 2529 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1086:
#line 2536 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1087:
#line 2539 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1088:
#line 2543 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1093:
#line 2550 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1094:
#line 2551 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1095:
#line 2552 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1096:
#line 2553 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1097:
#line 2557 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1098:
#line 2558 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1099:
#line 2560 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1100:
#line 2565 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1102:
#line 2567 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1104:
#line 2569 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1105:
#line 2572 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1106:
#line 2574 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1107:
#line 2579 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1108:
#line 2582 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2583 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1110:
#line 2584 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1111:
#line 2587 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1112:
#line 2589 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1113:
#line 2593 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1114:
#line 2594 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1115:
#line 2598 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1116:
#line 2599 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1117:
#line 2600 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1118:
#line 2601 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1119:
#line 2607 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1120:
#line 2608 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1121:
#line 2614 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1122:
#line 2615 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1123:
#line 2616 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1124:
#line 2617 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1127:
#line 2625 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2627 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2628 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1130:
#line 2629 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1131:
#line 2633 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1132:
#line 2634 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1133:
#line 2635 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1134:
#line 2636 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1135:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1136:
#line 2640 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1137:
#line 2643 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1138:
#line 2644 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1139:
#line 2645 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1140:
#line 2648 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1141:
#line 2649 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1142:
#line 2650 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1143:
#line 2653 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1144:
#line 2654 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1146:
#line 2656 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1147:
#line 2657 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1148:
#line 2660 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1149:
#line 2661 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1150:
#line 2662 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1155:
#line 2669 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1156:
#line 2673 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1157:
#line 2675 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2677 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1160:
#line 2682 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1161:
#line 2684 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1162:
#line 2686 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2699 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1173:
#line 2700 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2701 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1175:
#line 2704 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1176:
#line 2705 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1177:
#line 2706 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1178:
#line 2709 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1179:
#line 2710 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1180:
#line 2711 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1181:
#line 2714 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1182:
#line 2715 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1183:
#line 2716 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1185:
#line 2720 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2721 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2722 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1188:
#line 2725 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1189:
#line 2726 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2727 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1191:
#line 2730 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2731 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2732 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2735 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2736 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2737 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1197:
#line 2740 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2741 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2742 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2746 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1201:
#line 2748 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2750 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2754 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1204:
#line 2758 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1205:
#line 2760 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1206:
#line 2764 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1207:
#line 2767 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1208:
#line 2768 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1209:
#line 2769 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1210:
#line 2770 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1211:
#line 2773 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1212:
#line 2775 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1213:
#line 2776 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1214:
#line 2778 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1216:
#line 2782 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1217:
#line 2784 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].real), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame (yyvsp[(3) - (3)].integer)));;}
    break;

  case 1218:
#line 2785 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->sliceCmd((yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1219:
#line 2791 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1220:
#line 2792 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1221:
#line 2796 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1223:
#line 2798 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1226:
#line 2803 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2804 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2805 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1229:
#line 2808 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2809 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2810 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1232:
#line 2813 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1233:
#line 2815 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1234:
#line 2820 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1235:
#line 2823 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1236:
#line 2830 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1237:
#line 2832 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1238:
#line 2834 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1239:
#line 2839 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1241:
#line 2843 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1242:
#line 2844 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1243:
#line 2845 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1244:
#line 2847 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1245:
#line 2849 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1246:
#line 2854 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10804 "frame/parser.C"
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


#line 2858 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

