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
     CELESTRIAL_ = 313,
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
     ELLIPSE_ = 363,
     ELLIPSEANNULUS_ = 364,
     END_ = 365,
     ENVI_ = 366,
     EPANDA_ = 367,
     EPSILON_ = 368,
     EQUATORIAL_ = 369,
     ERASE_ = 370,
     EXT_ = 371,
     FACTOR_ = 372,
     FALSE_ = 373,
     FILE_ = 374,
     FILL_ = 375,
     FILTER_ = 376,
     FIT_ = 377,
     FITS_ = 378,
     FITSY_ = 379,
     FIXED_ = 380,
     FK4_ = 381,
     FK4_NO_E_ = 382,
     FK5_ = 383,
     FONT_ = 384,
     FRONT_ = 385,
     FULL_ = 386,
     FUNCTION_ = 387,
     GALACTIC_ = 388,
     GAUSSIAN_ = 389,
     GET_ = 390,
     GLOBAL_ = 391,
     GRAPHICS_ = 392,
     GRAY_ = 393,
     GRID_ = 394,
     GZ_ = 395,
     HANDLE_ = 396,
     HAS_ = 397,
     HEAD_ = 398,
     HEADER_ = 399,
     HEIGHT_ = 400,
     HELIOECLIPTIC_ = 401,
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
     INTEGER_ = 414,
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
     PRINT_ = 481,
     PRESERVE_ = 482,
     PROJECTION_ = 483,
     PROPERTY_ = 484,
     PUBLICATION_ = 485,
     PROS_ = 486,
     QUERY_ = 487,
     RADIAL_ = 488,
     RADIUS_ = 489,
     REGION_ = 490,
     REPLACE_ = 491,
     RESAMPLE_ = 492,
     RESET_ = 493,
     RESOLUTION_ = 494,
     RGB_ = 495,
     ROOT_ = 496,
     ROTATE_ = 497,
     RULER_ = 498,
     SAMPLE_ = 499,
     SAOIMAGE_ = 500,
     SAOTNG_ = 501,
     SAVE_ = 502,
     SCALE_ = 503,
     SCAN_ = 504,
     SCIENTIFIC_ = 505,
     SCOPE_ = 506,
     SEGMENT_ = 507,
     SELECT_ = 508,
     SET_ = 509,
     SEXAGESIMAL_ = 510,
     SHAPE_ = 511,
     SHARED_ = 512,
     SHIFT_ = 513,
     SHMID_ = 514,
     SHOW_ = 515,
     SINH_ = 516,
     SIZE_ = 517,
     SLICE_ = 518,
     SMMAP_ = 519,
     SMOOTH_ = 520,
     SOCKET_ = 521,
     SOCKETGZ_ = 522,
     SOURCE_ = 523,
     SQRT_ = 524,
     SQUARED_ = 525,
     SSHARED_ = 526,
     STATS_ = 527,
     STATUS_ = 528,
     SUPERGALACTIC_ = 529,
     SUM_ = 530,
     SYSTEM_ = 531,
     TABLE_ = 532,
     TAG_ = 533,
     TEMPLATE_ = 534,
     TEXT_ = 535,
     THREADS_ = 536,
     THREED_ = 537,
     THRESHOLD_ = 538,
     THICK_ = 539,
     TRANSPARENCY_ = 540,
     TO_ = 541,
     TOGGLE_ = 542,
     TOPHAT_ = 543,
     TRUE_ = 544,
     TYPE_ = 545,
     UNDO_ = 546,
     UNHIGHLITE_ = 547,
     UNLOAD_ = 548,
     UNSELECT_ = 549,
     UPDATE_ = 550,
     USER_ = 551,
     VALUE_ = 552,
     VAR_ = 553,
     VIEW_ = 554,
     VECTOR_ = 555,
     VERSION_ = 556,
     VERTEX_ = 557,
     VERTICAL_ = 558,
     WARP_ = 559,
     WCS_ = 560,
     WCSA_ = 561,
     WCSB_ = 562,
     WCSC_ = 563,
     WCSD_ = 564,
     WCSE_ = 565,
     WCSF_ = 566,
     WCSG_ = 567,
     WCSH_ = 568,
     WCSI_ = 569,
     WCSJ_ = 570,
     WCSK_ = 571,
     WCSL_ = 572,
     WCSM_ = 573,
     WCSN_ = 574,
     WCSO_ = 575,
     WCSP_ = 576,
     WCSQ_ = 577,
     WCSR_ = 578,
     WCSS_ = 579,
     WCST_ = 580,
     WCSU_ = 581,
     WCSV_ = 582,
     WCSW_ = 583,
     WCSX_ = 584,
     WCSY_ = 585,
     WCSZ_ = 586,
     WCS0_ = 587,
     WFPC2_ = 588,
     WIDTH_ = 589,
     WIN32_ = 590,
     XML_ = 591,
     XY_ = 592,
     YES_ = 593,
     ZMAX_ = 594,
     ZSCALE_ = 595,
     ZOOM_ = 596
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
#define CELESTRIAL_ 313
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
#define ELLIPSE_ 363
#define ELLIPSEANNULUS_ 364
#define END_ 365
#define ENVI_ 366
#define EPANDA_ 367
#define EPSILON_ 368
#define EQUATORIAL_ 369
#define ERASE_ 370
#define EXT_ 371
#define FACTOR_ 372
#define FALSE_ 373
#define FILE_ 374
#define FILL_ 375
#define FILTER_ 376
#define FIT_ 377
#define FITS_ 378
#define FITSY_ 379
#define FIXED_ 380
#define FK4_ 381
#define FK4_NO_E_ 382
#define FK5_ 383
#define FONT_ 384
#define FRONT_ 385
#define FULL_ 386
#define FUNCTION_ 387
#define GALACTIC_ 388
#define GAUSSIAN_ 389
#define GET_ 390
#define GLOBAL_ 391
#define GRAPHICS_ 392
#define GRAY_ 393
#define GRID_ 394
#define GZ_ 395
#define HANDLE_ 396
#define HAS_ 397
#define HEAD_ 398
#define HEADER_ 399
#define HEIGHT_ 400
#define HELIOECLIPTIC_ 401
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
#define INTEGER_ 414
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
#define PRINT_ 481
#define PRESERVE_ 482
#define PROJECTION_ 483
#define PROPERTY_ 484
#define PUBLICATION_ 485
#define PROS_ 486
#define QUERY_ 487
#define RADIAL_ 488
#define RADIUS_ 489
#define REGION_ 490
#define REPLACE_ 491
#define RESAMPLE_ 492
#define RESET_ 493
#define RESOLUTION_ 494
#define RGB_ 495
#define ROOT_ 496
#define ROTATE_ 497
#define RULER_ 498
#define SAMPLE_ 499
#define SAOIMAGE_ 500
#define SAOTNG_ 501
#define SAVE_ 502
#define SCALE_ 503
#define SCAN_ 504
#define SCIENTIFIC_ 505
#define SCOPE_ 506
#define SEGMENT_ 507
#define SELECT_ 508
#define SET_ 509
#define SEXAGESIMAL_ 510
#define SHAPE_ 511
#define SHARED_ 512
#define SHIFT_ 513
#define SHMID_ 514
#define SHOW_ 515
#define SINH_ 516
#define SIZE_ 517
#define SLICE_ 518
#define SMMAP_ 519
#define SMOOTH_ 520
#define SOCKET_ 521
#define SOCKETGZ_ 522
#define SOURCE_ 523
#define SQRT_ 524
#define SQUARED_ 525
#define SSHARED_ 526
#define STATS_ 527
#define STATUS_ 528
#define SUPERGALACTIC_ 529
#define SUM_ 530
#define SYSTEM_ 531
#define TABLE_ 532
#define TAG_ 533
#define TEMPLATE_ 534
#define TEXT_ 535
#define THREADS_ 536
#define THREED_ 537
#define THRESHOLD_ 538
#define THICK_ 539
#define TRANSPARENCY_ 540
#define TO_ 541
#define TOGGLE_ 542
#define TOPHAT_ 543
#define TRUE_ 544
#define TYPE_ 545
#define UNDO_ 546
#define UNHIGHLITE_ 547
#define UNLOAD_ 548
#define UNSELECT_ 549
#define UPDATE_ 550
#define USER_ 551
#define VALUE_ 552
#define VAR_ 553
#define VIEW_ 554
#define VECTOR_ 555
#define VERSION_ 556
#define VERTEX_ 557
#define VERTICAL_ 558
#define WARP_ 559
#define WCS_ 560
#define WCSA_ 561
#define WCSB_ 562
#define WCSC_ 563
#define WCSD_ 564
#define WCSE_ 565
#define WCSF_ 566
#define WCSG_ 567
#define WCSH_ 568
#define WCSI_ 569
#define WCSJ_ 570
#define WCSK_ 571
#define WCSL_ 572
#define WCSM_ 573
#define WCSN_ 574
#define WCSO_ 575
#define WCSP_ 576
#define WCSQ_ 577
#define WCSR_ 578
#define WCSS_ 579
#define WCST_ 580
#define WCSU_ 581
#define WCSV_ 582
#define WCSW_ 583
#define WCSX_ 584
#define WCSY_ 585
#define WCSZ_ 586
#define WCS0_ 587
#define WFPC2_ 588
#define WIDTH_ 589
#define WIN32_ 590
#define XML_ 591
#define XY_ 592
#define YES_ 593
#define ZMAX_ 594
#define ZSCALE_ 595
#define ZOOM_ 596




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
#line 838 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 851 "frame/parser.C"

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
#define YYLAST   5541

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  346
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2815

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   596

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
       2,   345,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   343,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   344,   342,
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
     335,   336,   337,   338,   339,   340,   341
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    12,    16,    19,    21,    23,
      26,    30,    33,    36,    39,    42,    45,    48,    51,    54,
      57,    60,    63,    65,    68,    71,    75,    78,    81,    84,
      87,    91,    94,    98,   101,   104,   107,   110,   113,   115,
     119,   122,   125,   128,   130,   133,   136,   139,   141,   144,
     146,   149,   152,   155,   158,   160,   162,   164,   166,   169,
     172,   175,   178,   181,   184,   187,   190,   193,   196,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   218,
     221,   224,   226,   228,   229,   231,   233,   235,   237,   239,
     241,   243,   246,   249,   252,   255,   257,   259,   261,   263,
     265,   267,   269,   271,   273,   275,   277,   279,   281,   283,
     285,   287,   289,   291,   293,   295,   297,   299,   301,   303,
     305,   307,   309,   311,   313,   315,   317,   319,   321,   323,
     325,   327,   329,   331,   333,   335,   337,   339,   341,   343,
     345,   347,   349,   351,   352,   354,   356,   358,   360,   362,
     364,   366,   368,   370,   372,   373,   375,   377,   378,   380,
     382,   384,   385,   387,   389,   390,   392,   394,   395,   397,
     399,   400,   402,   404,   406,   408,   410,   412,   414,   415,
     417,   419,   421,   423,   425,   427,   429,   430,   432,   434,
     435,   437,   439,   441,   443,   445,   448,   451,   454,   457,
     460,   463,   466,   468,   471,   473,   476,   478,   481,   483,
     486,   489,   496,   500,   504,   508,   510,   513,   517,   521,
     525,   529,   533,   537,   541,   545,   549,   552,   557,   560,
     563,   566,   570,   573,   576,   578,   581,   583,   586,   591,
     597,   600,   604,   610,   617,   619,   621,   623,   631,   643,
     652,   665,   667,   670,   673,   675,   677,   680,   683,   686,
     689,   693,   696,   699,   701,   703,   705,   707,   709,   711,
     713,   716,   719,   722,   726,   729,   732,   735,   742,   753,
     755,   758,   760,   767,   778,   780,   783,   786,   789,   792,
     795,   798,   812,   826,   828,   829,   831,   833,   838,   845,
     847,   849,   851,   853,   855,   857,   859,   861,   863,   868,
     872,   877,   878,   885,   894,   897,   901,   905,   909,   910,
     914,   919,   924,   929,   933,   937,   939,   943,   949,   954,
     959,   963,   966,   970,   973,   976,   979,   982,   985,   988,
     991,   994,   997,  1000,  1003,  1006,  1009,  1012,  1014,  1017,
    1020,  1025,  1033,  1036,  1039,  1042,  1044,  1048,  1051,  1054,
    1056,  1059,  1068,  1071,  1073,  1076,  1078,  1081,  1083,  1088,
    1096,  1099,  1101,  1103,  1105,  1107,  1110,  1112,  1114,  1117,
    1119,  1120,  1123,  1126,  1128,  1129,  1132,  1135,  1137,  1139,
    1142,  1145,  1148,  1150,  1152,  1154,  1156,  1158,  1160,  1161,
    1163,  1166,  1168,  1173,  1179,  1180,  1183,  1185,  1191,  1194,
    1197,  1199,  1201,  1203,  1206,  1208,  1211,  1213,  1215,  1216,
    1218,  1220,  1221,  1223,  1229,  1236,  1241,  1245,  1252,  1255,
    1257,  1261,  1263,  1265,  1267,  1271,  1278,  1286,  1292,  1294,
    1296,  1301,  1307,  1309,  1313,  1314,  1316,  1319,  1321,  1326,
    1328,  1331,  1333,  1336,  1340,  1343,  1345,  1348,  1350,  1355,
    1358,  1360,  1362,  1366,  1368,  1371,  1375,  1378,  1379,  1381,
    1383,  1388,  1391,  1392,  1394,  1396,  1399,  1400,  1402,  1404,
    1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1425,
    1428,  1431,  1434,  1436,  1438,  1440,  1441,  1443,  1444,  1446,
    1447,  1449,  1450,  1452,  1453,  1456,  1459,  1460,  1462,  1465,
    1467,  1474,  1480,  1482,  1484,  1486,  1489,  1492,  1494,  1496,
    1498,  1500,  1503,  1505,  1507,  1509,  1512,  1514,  1516,  1519,
    1522,  1525,  1526,  1528,  1529,  1531,  1533,  1535,  1537,  1539,
    1541,  1543,  1545,  1548,  1551,  1553,  1556,  1560,  1562,  1565,
    1568,  1573,  1580,  1582,  1593,  1595,  1598,  1602,  1606,  1609,
    1612,  1615,  1618,  1621,  1624,  1627,  1632,  1637,  1642,  1646,
    1650,  1656,  1661,  1666,  1671,  1675,  1679,  1683,  1687,  1690,
    1693,  1698,  1702,  1706,  1710,  1714,  1719,  1724,  1729,  1734,
    1740,  1745,  1752,  1760,  1765,  1770,  1776,  1779,  1783,  1787,
    1791,  1794,  1798,  1802,  1806,  1810,  1815,  1819,  1825,  1832,
    1836,  1840,  1845,  1849,  1853,  1857,  1861,  1865,  1871,  1875,
    1879,  1884,  1888,  1891,  1894,  1896,  1900,  1905,  1910,  1915,
    1920,  1925,  1932,  1937,  1942,  1948,  1953,  1958,  1963,  1968,
    1974,  1979,  1986,  1994,  1999,  2004,  2010,  2016,  2022,  2028,
    2034,  2040,  2048,  2054,  2060,  2067,  2073,  2079,  2085,  2091,
    2098,  2104,  2112,  2121,  2127,  2133,  2140,  2144,  2148,  2152,
    2156,  2160,  2166,  2170,  2174,  2179,  2183,  2187,  2191,  2195,
    2200,  2204,  2210,  2217,  2221,  2225,  2230,  2234,  2238,  2242,
    2246,  2250,  2256,  2260,  2264,  2269,  2274,  2279,  2283,  2289,
    2294,  2299,  2302,  2306,  2313,  2320,  2322,  2324,  2326,  2329,
    2332,  2335,  2339,  2343,  2346,  2359,  2362,  2365,  2367,  2371,
    2376,  2379,  2380,  2384,  2386,  2388,  2391,  2394,  2397,  2400,
    2403,  2408,  2413,  2418,  2422,  2427,  2433,  2441,  2450,  2457,
    2462,  2471,  2481,  2488,  2495,  2503,  2514,  2526,  2539,  2549,
    2555,  2560,  2566,  2573,  2577,  2583,  2589,  2595,  2602,  2608,
    2613,  2623,  2634,  2646,  2656,  2663,  2670,  2677,  2684,  2691,
    2698,  2705,  2712,  2719,  2727,  2735,  2738,  2743,  2748,  2753,
    2758,  2764,  2769,  2774,  2780,  2786,  2790,  2795,  2800,  2805,
    2810,  2817,  2825,  2834,  2844,  2851,  2862,  2874,  2887,  2897,
    2901,  2904,  2908,  2914,  2921,  2929,  2934,  2938,  2942,  2949,
    2956,  2963,  2971,  2978,  2986,  2991,  2996,  3001,  3008,  3018,
    3023,  3027,  3034,  3042,  3050,  3053,  3057,  3061,  3065,  3070,
    3073,  3076,  3081,  3089,  3100,  3104,  3106,  3110,  3113,  3116,
    3119,  3122,  3126,  3132,  3137,  3143,  3146,  3154,  3158,  3161,
    3164,  3168,  3171,  3174,  3177,  3181,  3184,  3188,  3193,  3197,
    3201,  3207,  3214,  3219,  3222,  3226,  3229,  3232,  3237,  3241,
    3245,  3248,  3252,  3254,  3257,  3259,  3262,  3265,  3268,  3270,
    3272,  3274,  3276,  3279,  3281,  3284,  3287,  3289,  3292,  3295,
    3297,  3300,  3302,  3304,  3306,  3308,  3310,  3312,  3314,  3316,
    3317,  3319,  3322,  3325,  3328,  3332,  3338,  3346,  3354,  3361,
    3368,  3375,  3382,  3388,  3395,  3402,  3409,  3416,  3423,  3430,
    3437,  3448,  3456,  3464,  3472,  3482,  3492,  3503,  3516,  3529,
    3532,  3535,  3539,  3544,  3549,  3554,  3557,  3562,  3567,  3569,
    3571,  3573,  3575,  3577,  3579,  3581,  3583,  3586,  3588,  3590,
    3592,  3596,  3600,  3605,  3612,  3623,  3631,  3639,  3645,  3650,
    3657,  3668,  3676,  3684,  3690,  3693,  3696,  3700,  3705,  3711,
    3715,  3721,  3727,  3731,  3736,  3742,  3748,  3754,  3758,  3764,
    3767,  3771,  3775,  3781,  3785,  3789,  3793,  3798,  3804,  3810,
    3814,  3820,  3826,  3830,  3835,  3841,  3847,  3850,  3853,  3857,
    3863,  3870,  3877,  3881,  3885,  3889,  3896,  3902,  3908,  3911,
    3915,  3921,  3928,  3932,  3935,  3938,  3942,  3945,  3949,  3952,
    3956,  3962,  3969,  3972,  3975,  3978,  3980,  3985,  3990,  3992,
    3995,  3998,  4001,  4004,  4007,  4010,  4013,  4017,  4020,  4024,
    4027,  4031,  4033,  4035,  4037,  4039,  4041,  4042,  4045,  4046,
    4049,  4050,  4052,  4053,  4054,  4056,  4058,  4060,  4062,  4064,
    4072,  4081,  4084,  4089,  4092,  4097,  4104,  4107,  4109,  4111,
    4115,  4119,  4121,  4125,  4130,  4133,  4135,  4139,  4143,  4148,
    4152,  4156,  4160,  4162,  4164,  4166,  4168,  4170,  4172,  4174,
    4176,  4178,  4180,  4182,  4184,  4186,  4188,  4191,  4192,  4193,
    4196,  4198,  4202,  4204,  4208,  4210,  4213,  4216,  4218,  4222,
    4223,  4224,  4227,  4230,  4232,  4236,  4242,  4244,  4247,  4250,
    4253,  4255,  4257,  4259,  4261,  4266,  4269,  4273,  4277,  4280,
    4284,  4287,  4290,  4293,  4297,  4301,  4305,  4308,  4312,  4314,
    4318,  4322,  4324,  4327,  4330,  4333,  4336,  4338,  4340,  4342,
    4344,  4347,  4350,  4354,  4358,  4360,  4363,  4367,  4371,  4373,
    4376,  4378,  4380,  4382,  4384,  4386,  4389,  4392,  4397,  4399,
    4402,  4405,  4408,  4412,  4414,  4416,  4418,  4421,  4424,  4427,
    4430,  4433,  4437,  4441,  4445,  4449,  4453,  4457,  4461,  4463,
    4466,  4469,  4472,  4476,  4479,  4483,  4487,  4490,  4493,  4496,
    4499,  4502,  4505,  4508,  4511,  4514,  4517,  4520,  4523,  4526,
    4529,  4533,  4537,  4541,  4544,  4547,  4550,  4553,  4556,  4559,
    4562,  4565,  4568,  4571,  4574,  4577,  4581,  4585,  4589,  4594,
    4597,  4599,  4601,  4603,  4605,  4606,  4612,  4614,  4621,  4625,
    4627,  4630,  4633,  4637,  4640,  4644,  4648,  4651,  4654,  4657,
    4660,  4663,  4666,  4670,  4673,  4676,  4680,  4682,  4686,  4691,
    4693,  4696,  4702,  4709,  4716,  4719,  4721,  4724,  4727,  4733,
    4740
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     347,     0,    -1,    96,   349,    -1,    20,   379,    -1,    44,
     381,    -1,    41,    66,     5,    -1,    46,   386,    -1,    59,
      -1,    64,    -1,    65,   388,    -1,    67,   278,     5,    -1,
      68,   393,    -1,    69,   395,    -1,    77,   396,    -1,    84,
     405,    -1,    86,   407,    -1,    87,   408,    -1,    95,   350,
      -1,   124,   409,    -1,   135,   410,    -1,   139,   452,    -1,
     142,   455,    -1,   147,    -1,   148,   350,    -1,   154,   461,
      -1,   161,    16,     4,    -1,   174,   464,    -1,   177,   482,
      -1,   178,   483,    -1,   179,   484,    -1,   182,   500,   485,
      -1,   183,   519,    -1,   195,    66,     5,    -1,   210,   520,
      -1,   211,   521,    -1,   212,   524,    -1,   232,    88,    -1,
     224,   525,    -1,   238,    -1,   235,   500,   527,    -1,   240,
     532,    -1,   242,   533,    -1,   247,   535,    -1,   260,    -1,
     265,   550,    -1,   281,     4,    -1,   282,   374,    -1,   293,
      -1,   295,   552,    -1,   301,    -1,   304,   554,    -1,   305,
     555,    -1,   335,   559,    -1,   341,   560,    -1,     3,    -1,
       4,    -1,   207,    -1,   206,    -1,    29,   350,    -1,   190,
     350,    -1,   213,   350,    -1,   215,   350,    -1,   305,   350,
      -1,    44,   350,    -1,    46,   350,    -1,    76,   350,    -1,
      84,   350,    -1,   140,   350,    -1,   240,   350,    -1,     4,
      -1,   338,    -1,   342,    -1,   207,    -1,   289,    -1,   200,
      -1,   343,    -1,   206,    -1,   118,    -1,    -1,   241,    38,
      -1,   131,    38,    -1,   241,    -1,   131,    -1,    -1,   353,
      -1,   348,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   354,   354,    -1,   355,   356,    -1,   356,
     356,    -1,   348,   348,    -1,   155,    -1,   217,    -1,   101,
      -1,    19,    -1,   359,    -1,   305,    -1,   306,    -1,   307,
      -1,   308,    -1,   309,    -1,   310,    -1,   311,    -1,   312,
      -1,   313,    -1,   314,    -1,   315,    -1,   316,    -1,   317,
      -1,   318,    -1,   319,    -1,   320,    -1,   321,    -1,   322,
      -1,   323,    -1,   324,    -1,   325,    -1,   326,    -1,   327,
      -1,   328,    -1,   329,    -1,   330,    -1,   331,    -1,   332,
      -1,    56,    -1,   212,    -1,   172,    -1,   176,    -1,   225,
      -1,   269,    -1,   270,    -1,    28,    -1,   261,    -1,   149,
      -1,    30,    -1,   249,    -1,   244,    -1,    94,    -1,   162,
      -1,    -1,   126,    -1,   127,    -1,    35,    -1,   128,    -1,
     163,    -1,   152,    -1,   133,    -1,   274,    -1,   106,    -1,
     146,    -1,    -1,    97,    -1,   255,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   259,    -1,   164,    -1,    -1,
      17,    -1,   157,    -1,    -1,   155,    -1,   183,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   344,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   150,
      -1,   219,    -1,   220,    -1,   233,    -1,   272,    -1,    -1,
      32,    -1,   275,    -1,    -1,   196,    -1,    42,    -1,    43,
      -1,   169,    -1,   170,    -1,   299,   378,    -1,    47,   375,
      -1,    74,   376,    -1,   148,   377,    -1,   185,   530,    -1,
      37,   531,    -1,   248,   348,    -1,   227,    -1,   283,   348,
      -1,   350,    -1,    66,     5,    -1,   350,    -1,    66,     5,
      -1,   350,    -1,    66,     5,    -1,   348,   348,    -1,   221,
     348,   348,   348,   348,   348,    -1,    40,   348,   348,    -1,
     192,   348,   348,    -1,   110,   348,   348,    -1,   238,    -1,
     256,   380,    -1,    62,   348,   348,    -1,   108,   348,   348,
      -1,    48,   348,   348,    -1,   223,   348,   348,    -1,   221,
     348,   348,    -1,   300,   348,   348,    -1,    22,   348,   348,
      -1,   109,   348,   348,    -1,    49,   348,   348,    -1,    12,
     382,    -1,    71,     5,     5,     5,    -1,   100,     4,    -1,
     117,   383,    -1,   132,   384,    -1,    53,   262,     4,    -1,
     286,   385,    -1,   121,     5,    -1,    59,    -1,   348,   348,
      -1,   348,    -1,   348,   348,    -1,   348,    12,   348,   348,
      -1,   348,   348,    12,   348,   348,    -1,   286,   348,    -1,
     286,   348,   348,    -1,   286,   348,    12,   348,   348,    -1,
     286,   348,   348,    12,   348,   348,    -1,    32,    -1,   275,
      -1,   122,    -1,   348,   348,    12,    59,     5,     5,     5,
      -1,   348,   348,     4,   348,   348,    12,    59,     5,     5,
       5,     5,    -1,   348,   348,    12,   348,   348,     5,     5,
       5,    -1,   348,   348,     4,   348,   348,    12,   348,   348,
       5,     5,     5,     5,    -1,   348,    -1,   348,   348,    -1,
     286,   387,    -1,   122,    -1,   348,    -1,   348,   348,    -1,
     251,   389,    -1,   191,   390,    -1,   186,   391,    -1,   296,
     348,   348,    -1,   340,   392,    -1,   227,   350,    -1,   136,
      -1,   175,    -1,   348,    -1,   186,    -1,   340,    -1,   339,
      -1,   296,    -1,     4,   362,    -1,   191,   362,    -1,   244,
       4,    -1,   348,     4,     4,    -1,    78,   348,    -1,   244,
       4,    -1,   171,     4,    -1,     4,   348,   348,     4,     6,
       4,    -1,   240,   348,   348,   348,   348,   348,   348,     4,
       6,     4,    -1,    40,    -1,   192,   394,    -1,   110,    -1,
       4,   348,   348,     4,     6,     4,    -1,   240,   348,   348,
     348,   348,   348,   348,     4,     6,     4,    -1,   361,    -1,
     176,   348,    -1,    83,   397,    -1,    99,   398,    -1,   174,
     399,    -1,   214,   403,    -1,   247,   404,    -1,     5,     4,
       4,   402,     4,     4,   361,   348,   400,   401,   348,   348,
       5,    -1,     5,     4,     4,   402,     4,     4,   361,   348,
     348,   401,   348,   348,     5,    -1,   223,    -1,    -1,    31,
      -1,     5,    -1,     5,     5,     4,   350,    -1,     5,     4,
     350,     5,   358,   363,    -1,   186,    -1,   340,    -1,   339,
      -1,   296,    -1,   136,    -1,   175,    -1,   265,    -1,    46,
      -1,     5,    -1,     5,     5,     4,   350,    -1,     5,   358,
     363,    -1,    31,     5,   358,   363,    -1,    -1,   348,   348,
     348,   348,   358,   363,    -1,    59,   357,   358,   363,   348,
     348,   358,   365,    -1,   282,   406,    -1,    40,   348,   348,
      -1,   192,   348,   348,    -1,   110,   348,   348,    -1,    -1,
     348,   348,   358,    -1,    40,   348,   348,     4,    -1,   192,
     348,   348,     4,    -1,   110,   348,   348,     4,    -1,   360,
     348,   348,    -1,   358,   363,   357,    -1,   350,    -1,   304,
     348,   348,    -1,    40,   192,   360,   348,   348,    -1,   192,
     360,   348,   348,    -1,    40,   192,   358,   357,    -1,   192,
     358,   357,    -1,    33,     4,    -1,   142,   116,     5,    -1,
      41,    66,    -1,    44,   411,    -1,    46,   413,    -1,    65,
     414,    -1,    68,   418,    -1,    67,   417,    -1,    69,   420,
      -1,    77,   422,    -1,    79,   425,    -1,    84,   426,    -1,
      86,   427,    -1,    88,   429,    -1,    87,   428,    -1,    93,
     430,    -1,    95,    -1,   123,   434,    -1,   139,   440,    -1,
     150,     5,     5,     4,    -1,   151,    89,     5,     5,   348,
     348,   360,    -1,   154,   432,    -1,   158,   431,    -1,   161,
      16,    -1,   186,    -1,   182,   500,   494,    -1,   183,   441,
      -1,   195,    66,    -1,   210,    -1,   211,   442,    -1,   218,
     277,   360,   348,   348,     4,     4,     5,    -1,   240,   443,
      -1,   242,    -1,   265,   444,    -1,   281,    -1,   282,   445,
      -1,   290,    -1,   297,   360,   348,   348,    -1,   303,    89,
       5,     5,   348,   348,   360,    -1,   305,   450,    -1,   341,
      -1,   100,    -1,   117,    -1,   132,    -1,    53,   262,    -1,
      88,    -1,   121,    -1,    71,   412,    -1,   173,    -1,    -1,
     186,     5,    -1,   103,     5,    -1,   117,    -1,    -1,   400,
     401,    -1,   348,   401,    -1,   251,    -1,   191,    -1,   186,
     415,    -1,   296,   168,    -1,   340,   416,    -1,   227,    -1,
     191,    -1,   244,    -1,    78,    -1,   244,    -1,   171,    -1,
      -1,   278,    -1,   168,   419,    -1,     4,    -1,     4,   360,
     348,   348,    -1,     4,   348,   348,   361,   348,    -1,    -1,
     168,   421,    -1,   176,    -1,     4,   348,   348,   361,   348,
      -1,   358,   363,    -1,    65,   423,    -1,    66,    -1,    91,
      -1,   168,    -1,   204,   168,    -1,   185,    -1,    69,   424,
      -1,   265,    -1,   334,    -1,    -1,   191,    -1,   251,    -1,
      -1,   176,    -1,   348,   348,   358,   363,   364,    -1,   360,
     348,   348,   358,   363,   364,    -1,   348,   358,   358,     4,
      -1,   358,   363,   364,    -1,    59,   358,   363,   364,   358,
     365,    -1,   282,   358,    -1,   360,    -1,   358,   363,   364,
      -1,   273,    -1,    33,    -1,   360,    -1,   358,   363,   364,
      -1,   358,   363,   357,   348,   348,     5,    -1,     4,   358,
     363,   357,   348,   348,     5,    -1,   360,   348,   348,     4,
       4,    -1,     5,    -1,    65,    -1,   360,   348,   348,     5,
      -1,     6,     4,     4,     4,     4,    -1,    88,    -1,   119,
     194,   433,    -1,    -1,     4,    -1,   348,   348,    -1,   197,
      -1,    59,   358,   363,   364,    -1,    81,    -1,   100,   437,
      -1,    45,    -1,   116,   435,    -1,   119,   194,   438,    -1,
     144,   436,    -1,   145,    -1,   205,   194,    -1,   262,    -1,
     262,   358,   363,   365,    -1,   263,   439,    -1,   334,    -1,
       4,    -1,   360,   348,   348,    -1,     4,    -1,   165,     5,
      -1,     4,   165,     5,    -1,   305,     4,    -1,    -1,     4,
      -1,   351,    -1,   351,   360,   348,   348,    -1,   351,     4,
      -1,    -1,     4,    -1,   358,    -1,     4,   358,    -1,    -1,
     209,    -1,   298,    -1,    66,    -1,   181,    -1,   285,    -1,
     227,    -1,    61,    -1,   276,    -1,   299,    -1,   132,    -1,
     234,    -1,   299,   449,    -1,    47,   446,    -1,    74,   447,
      -1,   148,   448,    -1,   185,    -1,    37,    -1,   248,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,
     221,    -1,    -1,    16,   451,    -1,   194,   359,    -1,    -1,
     222,    -1,    83,   453,    -1,    99,    -1,   358,   363,   364,
     454,     5,     5,    -1,   358,   363,   364,   454,     5,    -1,
      20,    -1,   230,    -1,    19,    -1,    44,   456,    -1,    77,
     457,    -1,    84,    -1,    94,    -1,    95,    -1,   101,    -1,
     123,   458,    -1,   139,    -1,   154,    -1,   162,    -1,   182,
     459,    -1,   217,    -1,   265,    -1,   276,   358,    -1,   305,
     460,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,
      -1,    87,    -1,   190,    -1,   148,    -1,   253,    -1,   214,
      -1,   291,    -1,   358,    -1,   114,   358,    -1,    58,   358,
      -1,    18,    -1,   282,   358,    -1,   198,     4,     4,    -1,
     115,    -1,   184,     5,    -1,    88,   463,    -1,   254,   119,
     194,   462,    -1,   254,     6,     4,     4,     4,     4,    -1,
     295,    -1,   305,   348,   348,   348,   348,   348,   348,   348,
     348,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      56,    -1,     4,     4,   358,    -1,   191,   350,    -1,    26,
     465,    -1,   111,   467,    -1,   123,   468,    -1,   157,   481,
      -1,   203,   479,    -1,   216,   480,    -1,     5,    14,     5,
     368,    -1,     5,    15,     5,   368,    -1,     5,    61,     5,
     368,    -1,     5,   188,   368,    -1,     5,   189,   368,    -1,
       5,   257,   366,     4,   368,    -1,     5,   266,     4,   368,
      -1,     5,   267,     4,   368,    -1,     5,   298,     5,   368,
      -1,   240,    87,   466,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   188,    -1,
       5,   189,    -1,     5,   257,   366,     4,    -1,     5,   266,
       4,    -1,     5,   267,     4,    -1,     5,   298,     5,    -1,
       5,     5,   264,    -1,     5,    14,     5,   368,    -1,     5,
      15,     5,   368,    -1,     5,    61,     5,   368,    -1,     5,
     188,   367,   368,    -1,     5,     5,   264,   367,   368,    -1,
       5,   189,   367,   368,    -1,     5,   257,   366,     4,   367,
     368,    -1,     5,   271,   366,     4,     4,   367,   368,    -1,
       5,   266,     4,   368,    -1,     5,   267,     4,   368,    -1,
       5,   298,     5,   367,   368,    -1,   263,   469,    -1,   116,
      87,   470,    -1,   240,   155,   478,    -1,   240,    87,   477,
      -1,   190,   471,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   188,   367,    -1,
       5,     5,   264,   367,    -1,     5,   189,   367,    -1,     5,
     257,   366,     4,   367,    -1,     5,   271,   366,     4,     4,
     367,    -1,     5,   266,     4,    -1,     5,   267,     4,    -1,
       5,   298,     5,   367,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   188,   367,
      -1,     5,   189,   367,    -1,     5,   257,   366,     4,   367,
      -1,     5,   266,     4,    -1,     5,   267,     4,    -1,     5,
     298,     5,   367,    -1,   155,   161,   472,    -1,   161,   473,
      -1,   155,   474,    -1,   475,    -1,   155,   333,   476,    -1,
       5,    14,     5,   368,    -1,     5,    15,     5,   368,    -1,
       5,    61,     5,   368,    -1,     5,   188,   367,   368,    -1,
       5,   189,   367,   368,    -1,     5,   257,   366,     4,   367,
     368,    -1,     5,   266,     4,   368,    -1,     5,   267,     4,
     368,    -1,     5,   298,     5,   367,   368,    -1,     5,    14,
       5,   368,    -1,     5,    15,     5,   368,    -1,     5,    61,
       5,   368,    -1,     5,   188,   367,   368,    -1,     5,     5,
     264,   367,   368,    -1,     5,   189,   367,   368,    -1,     5,
     257,   366,     4,   367,   368,    -1,     5,   271,   366,     4,
       4,   367,   368,    -1,     5,   266,     4,   368,    -1,     5,
     267,     4,   368,    -1,     5,   298,     5,   367,   368,    -1,
     359,     5,    14,     5,   368,    -1,   359,     5,    15,     5,
     368,    -1,   359,     5,    61,     5,   368,    -1,   359,     5,
     188,   367,   368,    -1,   359,     5,   189,   367,   368,    -1,
     359,     5,   257,   366,     4,   367,   368,    -1,   359,     5,
     266,     4,   368,    -1,   359,     5,   267,     4,   368,    -1,
     359,     5,   298,     5,   367,   368,    -1,   359,     5,    14,
       5,   368,    -1,   359,     5,    15,     5,   368,    -1,   359,
       5,    61,     5,   368,    -1,   359,     5,   188,   367,   368,
      -1,   359,     5,     5,   264,   367,   368,    -1,   359,     5,
     189,   367,   368,    -1,   359,     5,   257,   366,     4,   367,
     368,    -1,   359,     5,   271,   366,     4,     4,   367,   368,
      -1,   359,     5,   266,     4,   368,    -1,   359,     5,   267,
       4,   368,    -1,   359,     5,   298,     5,   367,   368,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   188,   367,    -1,     5,   189,   367,    -1,
       5,   257,   366,     4,   367,    -1,     5,   266,     4,    -1,
       5,   267,     4,    -1,     5,   298,     5,   367,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   188,   367,    -1,     5,     5,   264,   367,    -1,
       5,   189,   367,    -1,     5,   257,   366,     4,   367,    -1,
       5,   271,   366,     4,     4,   367,    -1,     5,   266,     4,
      -1,     5,   267,     4,    -1,     5,   298,     5,   367,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   188,   367,    -1,     5,   189,   367,    -1,
       5,   257,   366,     4,   367,    -1,     5,   266,     4,    -1,
       5,   267,     4,    -1,     5,   298,     5,   367,    -1,     5,
      14,     5,   368,    -1,     5,    61,     5,   368,    -1,     5,
     188,   368,    -1,     5,   257,   366,     4,   368,    -1,     5,
     266,     4,   368,    -1,     5,   298,     5,   368,    -1,     5,
       5,    -1,   263,     5,     5,    -1,    93,     4,     4,     4,
       4,     4,    -1,   186,     4,     4,     4,     4,     4,    -1,
     110,    -1,   226,    -1,   350,    -1,   137,   350,    -1,    88,
     350,    -1,    66,     5,    -1,     5,     4,     4,    -1,   295,
     348,   348,    -1,   341,   348,    -1,     5,     5,   359,   363,
       5,     5,   359,   363,   348,   359,   365,     5,    -1,    60,
     488,    -1,    66,     5,    -1,    80,    -1,    73,   493,     5,
      -1,    73,   493,   298,     5,    -1,    75,    99,    -1,    -1,
      83,   486,   489,    -1,    89,    -1,    99,    -1,    99,    17,
      -1,   105,   492,    -1,   113,     4,    -1,   129,     5,    -1,
     148,    17,    -1,   148,   208,   348,   348,    -1,   148,   287,
     348,   348,    -1,     4,    20,   371,   350,    -1,     4,    21,
     353,    -1,     4,    21,   353,   360,    -1,     4,    21,   353,
     358,   363,    -1,     4,    22,   234,   348,   348,     4,   360,
      -1,     4,    22,   234,   348,   348,     4,   358,   365,    -1,
       4,    22,   234,     5,   358,   365,    -1,     4,    48,   120,
     350,    -1,     4,    49,   234,   348,   348,   348,     4,   360,
      -1,     4,    49,   234,   348,   348,   348,     4,   358,   365,
      -1,     4,    49,   234,     5,   358,   365,    -1,     4,    48,
     234,   348,   348,   360,    -1,     4,    48,   234,   348,   348,
     358,   365,    -1,     4,    52,   105,   353,   353,     4,   348,
     348,   348,     4,    -1,     4,    52,   105,   353,   353,     4,
     348,   348,   348,     4,   360,    -1,     4,    52,   105,   353,
     353,     4,   348,   348,   348,     4,   358,   363,    -1,     4,
      52,   105,     5,     5,   358,   363,   358,   365,    -1,     4,
      55,   487,     5,     5,    -1,     4,    62,   120,   350,    -1,
       4,    62,   234,   348,   360,    -1,     4,    62,   234,   348,
     358,   365,    -1,     4,    66,     5,    -1,     4,    74,    27,
     350,   350,    -1,     4,    74,   166,     5,     5,    -1,     4,
      74,   234,   348,   360,    -1,     4,    74,   234,   348,   358,
     365,    -1,     4,    74,   276,   358,   363,    -1,     4,    75,
     136,   350,    -1,     4,    82,   105,   353,   353,     4,   348,
     348,     4,    -1,     4,    82,   105,   353,   353,     4,   348,
     348,     4,   360,    -1,     4,    82,   105,   353,   353,     4,
     348,   348,     4,   358,   363,    -1,     4,    82,   105,     5,
       5,   358,   363,   358,   365,    -1,     4,    83,    22,   234,
     348,   348,    -1,     4,    83,    49,   234,   348,   348,    -1,
       4,    83,    52,    21,   348,   348,    -1,     4,    83,    52,
     234,   348,   348,    -1,     4,    83,   109,   234,   348,   348,
      -1,     4,    83,   112,    21,   348,   348,    -1,     4,    83,
     112,   234,   348,   348,    -1,     4,    83,    82,    21,   348,
     348,    -1,     4,    83,    82,   234,   348,   348,    -1,     4,
      83,   223,   302,     4,   348,   348,    -1,     4,    83,   252,
     302,     4,   348,   348,    -1,     4,    99,    -1,     4,    99,
      22,     4,    -1,     4,    99,    49,     4,    -1,     4,    99,
      52,     4,    -1,     4,    99,   109,     4,    -1,     4,    99,
      55,   487,     5,    -1,     4,    99,   112,     4,    -1,     4,
      99,    82,     4,    -1,     4,    99,   223,   302,     4,    -1,
       4,    99,   252,   302,     4,    -1,     4,    99,   278,    -1,
       4,    99,   278,     5,    -1,     4,    99,   278,     4,    -1,
       4,   105,    40,     4,    -1,     4,   108,   120,   350,    -1,
       4,   108,   234,   348,   348,   360,    -1,     4,   108,   234,
     348,   348,   358,   365,    -1,     4,   109,   234,   348,   348,
     348,     4,   360,    -1,     4,   109,   234,   348,   348,   348,
       4,   358,   365,    -1,     4,   109,   234,     5,   358,   365,
      -1,     4,   112,   105,   353,   353,     4,   348,   348,   348,
       4,    -1,     4,   112,   105,   353,   353,     4,   348,   348,
     348,     4,   360,    -1,     4,   112,   105,   353,   353,     4,
     348,   348,   348,     4,   358,   363,    -1,     4,   112,   105,
       5,     5,   358,   363,   358,   365,    -1,     4,   129,     5,
      -1,     4,   148,    -1,     4,   148,   208,    -1,     4,   171,
      27,   350,   350,    -1,     4,   171,   221,   360,   357,   357,
      -1,     4,   171,   221,   358,   363,   357,   357,    -1,     4,
     193,   348,   348,    -1,     4,   193,   130,    -1,     4,   193,
      36,    -1,     4,   193,   286,   360,   348,   348,    -1,     4,
     193,   286,   358,   363,   357,    -1,     4,   223,   238,   348,
     348,   360,    -1,     4,   223,   238,   348,   348,   358,   365,
      -1,     4,   252,   238,   348,   348,   360,    -1,     4,   252,
     238,   348,   348,   358,   365,    -1,     4,   221,   256,   369,
      -1,     4,   221,   262,     4,    -1,     4,   223,   120,   350,
      -1,     4,   228,   360,   357,   357,   348,    -1,     4,   228,
     358,   363,   357,   357,   348,   358,   365,    -1,     4,   229,
     506,   350,    -1,     4,   242,    40,    -1,     4,   243,   221,
     360,   357,   357,    -1,     4,   243,   221,   358,   363,   357,
     357,    -1,     4,   243,   276,   358,   363,   358,   365,    -1,
       4,   253,    -1,     4,   253,   208,    -1,     4,   278,     5,
      -1,     4,   280,     5,    -1,     4,   280,   242,   350,    -1,
       4,   292,    -1,     4,   294,    -1,     4,   300,    27,   350,
      -1,     4,   300,   221,   360,   357,   348,   353,    -1,     4,
     300,   221,   358,   363,   357,   358,   365,   348,   353,    -1,
       4,   334,     4,    -1,   164,    -1,   164,   348,   348,    -1,
     173,   501,    -1,   174,   502,    -1,   193,   503,    -1,   227,
     350,    -1,   229,   506,   350,    -1,   229,   506,   350,   348,
     348,    -1,   242,    40,   348,   348,    -1,   242,   192,   348,
     348,     4,    -1,   242,   110,    -1,   247,     5,   493,   358,
     363,   364,   350,    -1,   247,   279,     5,    -1,   253,   510,
      -1,   260,   511,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   129,     5,
      -1,     5,   148,    -1,     5,   148,   208,    -1,     5,   193,
     348,   348,    -1,     5,   193,   130,    -1,     5,   193,    36,
      -1,     5,   193,   286,   360,   357,    -1,     5,   193,   286,
     358,   363,   357,    -1,     5,   229,   506,   350,    -1,     5,
     253,    -1,     5,   253,   208,    -1,     5,   292,    -1,     5,
     294,    -1,   278,   105,     5,     5,    -1,   278,    99,     5,
      -1,   278,    99,    17,    -1,   278,     5,    -1,   278,   295,
       5,    -1,   214,    -1,   214,   358,    -1,   291,    -1,   292,
      17,    -1,   294,    17,    -1,   334,     4,    -1,   253,    -1,
     294,    -1,   148,    -1,   292,    -1,    40,   193,    -1,   193,
      -1,   110,   193,    -1,    40,   105,    -1,   105,    -1,   110,
     105,    -1,    40,   242,    -1,   242,    -1,   110,   242,    -1,
      99,    -1,   280,    -1,    66,    -1,   334,    -1,   229,    -1,
     129,    -1,   164,    -1,   295,    -1,    -1,     4,    -1,    30,
     350,    -1,   234,   348,    -1,   160,     4,    -1,   209,     4,
     348,    -1,    62,   348,   348,   348,   507,    -1,   108,   348,
     348,   348,   348,   352,   507,    -1,    48,   348,   348,   348,
     348,   352,   507,    -1,   223,   348,   348,   348,   348,   507,
      -1,   252,   348,   348,   348,   348,   507,    -1,   171,   348,
     348,   348,   348,   507,    -1,   300,   348,   348,   348,   348,
     507,    -1,   280,   348,   348,   352,   507,    -1,    62,   221,
     348,   348,   370,   507,    -1,    48,   221,   348,   348,   370,
     507,    -1,   102,   221,   348,   348,   370,   507,    -1,    85,
     221,   348,   348,   370,   507,    -1,   344,   221,   348,   348,
     370,   507,    -1,    27,   221,   348,   348,   370,   507,    -1,
      51,   221,   348,   348,   370,   507,    -1,   243,   348,   348,
     348,   348,   358,   363,   358,   365,   507,    -1,    74,   348,
     348,   348,   358,   363,   507,    -1,   228,   348,   348,   348,
     348,   348,   507,    -1,    22,   348,   348,   348,   348,     4,
     507,    -1,   109,   348,   348,   348,   348,   348,     4,   352,
     507,    -1,    49,   348,   348,   348,   348,   348,     4,   352,
     507,    -1,    82,   348,   348,   353,   353,     4,   348,   348,
       4,   507,    -1,   112,   348,   348,   353,   353,     4,   348,
     348,   348,     4,   352,   507,    -1,    52,   348,   348,   353,
     353,     4,   348,   348,   348,     4,   352,   507,    -1,    75,
     507,    -1,   279,   490,    -1,     5,   348,   348,    -1,   298,
       5,   348,   348,    -1,   348,   348,   298,     5,    -1,     5,
     358,   363,   357,    -1,     4,     4,    -1,    40,   348,   348,
       4,    -1,   192,   348,   348,     4,    -1,   110,    -1,   104,
      -1,   336,    -1,    63,    -1,   246,    -1,   245,    -1,   231,
      -1,   337,    -1,    60,   495,    -1,    66,    -1,   129,    -1,
     113,    -1,   141,   348,   348,    -1,   153,   348,   348,    -1,
     147,    20,    82,   358,    -1,   147,    20,   150,     5,     5,
       4,    -1,   147,    20,   219,     5,     5,     5,     5,   358,
     363,   372,    -1,   147,    20,   220,     5,     5,   358,   372,
      -1,   147,    20,   233,     5,     5,     5,   358,    -1,   147,
      20,   272,   358,   363,    -1,     4,    20,    82,   358,    -1,
       4,    20,   150,     5,     5,     4,    -1,     4,    20,   219,
       5,     5,     5,     5,   358,   363,   372,    -1,     4,    20,
     220,     5,     5,   358,   372,    -1,     4,    20,   233,     5,
       5,     5,   358,    -1,     4,    20,   272,   358,   363,    -1,
     153,    17,    -1,     4,    21,    -1,     4,    21,   360,    -1,
       4,    21,   358,   363,    -1,     4,    22,   234,   358,   365,
      -1,     4,    48,   120,    -1,     4,    49,   234,   358,   365,
      -1,     4,    48,   234,   358,   365,    -1,     4,    52,    21,
      -1,     4,    52,    21,   360,    -1,     4,    52,    21,   358,
     363,    -1,     4,    52,   234,   358,   365,    -1,     4,    59,
     358,   363,   364,    -1,     4,    62,   120,    -1,     4,    62,
     234,   358,   365,    -1,     4,    66,    -1,     4,    74,    27,
      -1,     4,    74,   166,    -1,     4,    74,   234,   358,   365,
      -1,     4,    74,   276,    -1,     4,    75,   136,    -1,     4,
      82,    21,    -1,     4,    82,    21,   360,    -1,     4,    82,
      21,   358,   363,    -1,     4,    82,   234,   358,   365,    -1,
       4,   108,   120,    -1,     4,   108,   234,   358,   365,    -1,
       4,   109,   234,   358,   365,    -1,     4,   112,    21,    -1,
       4,   112,    21,   360,    -1,     4,   112,    21,   358,   363,
      -1,     4,   112,   234,   358,   365,    -1,     4,   129,    -1,
       4,   148,    -1,     4,   171,    27,    -1,     4,   171,   167,
     358,   365,    -1,     4,   171,   221,   358,   363,   364,    -1,
       4,   180,   167,   348,   358,   365,    -1,     4,   223,   120,
      -1,     4,   221,   256,    -1,     4,   221,   262,    -1,     4,
     228,   221,   358,   363,   364,    -1,     4,   228,   167,   358,
     365,    -1,     4,   228,   284,   358,   365,    -1,     4,   229,
      -1,     4,   229,   506,    -1,     4,   243,   167,   358,   365,
      -1,     4,   243,   221,   358,   363,   364,    -1,     4,   243,
     276,    -1,     4,   253,    -1,     4,   278,    -1,     4,   278,
       4,    -1,     4,   280,    -1,     4,   280,   242,    -1,     4,
     290,    -1,     4,   300,    27,    -1,     4,   300,   167,   358,
     365,    -1,     4,   300,   221,   358,   363,   364,    -1,     4,
     334,    -1,   148,   496,    -1,   148,   204,    -1,   204,    -1,
     223,   252,   348,   348,    -1,   252,   252,   348,   348,    -1,
     227,    -1,   229,   506,    -1,   253,   497,    -1,   253,   204,
      -1,   260,   498,    -1,     5,    66,    -1,     5,   129,    -1,
       5,   153,    -1,     5,   229,   506,    -1,     5,   278,    -1,
       5,   278,   204,    -1,   278,    17,    -1,   278,    98,   194,
      -1,   334,    -1,    30,    -1,   234,    -1,   160,    -1,   209,
      -1,    -1,   348,   348,    -1,    -1,   348,   348,    -1,    -1,
     280,    -1,    -1,    -1,   222,    -1,   235,    -1,   296,    -1,
      57,    -1,    20,    -1,   493,   358,   363,   364,   350,   508,
     514,    -1,   253,   493,   358,   363,   364,   350,   508,   514,
      -1,   493,     5,    -1,   493,     5,   358,   363,    -1,   493,
       4,    -1,   493,     4,   358,   363,    -1,   123,     5,     5,
     491,     4,     5,    -1,   348,   348,    -1,   130,    -1,    36,
      -1,    40,   348,   348,    -1,   192,   348,   348,    -1,   110,
      -1,   286,   360,   357,    -1,   286,   358,   363,   357,    -1,
     504,   505,    -1,   505,    -1,   506,   345,   350,    -1,    66,
     345,     5,    -1,    92,   345,     4,     4,    -1,   334,   345,
       4,    -1,   129,   345,     5,    -1,   280,   345,     5,    -1,
     517,    -1,   518,    -1,   201,    -1,   253,    -1,   148,    -1,
      91,    -1,   125,    -1,   105,    -1,   193,    -1,   242,    -1,
      99,    -1,   156,    -1,   268,    -1,   499,    -1,   499,   504,
      -1,    -1,    -1,   509,   512,    -1,    17,    -1,   208,   348,
     348,    -1,   287,    -1,   287,   348,   348,    -1,   350,    -1,
     280,   350,    -1,   512,   513,    -1,   513,    -1,   506,   345,
     350,    -1,    -1,    -1,   515,   516,    -1,   516,   517,    -1,
     517,    -1,   278,   345,     5,    -1,    55,   345,   487,     5,
       5,    -1,    64,    -1,    66,     5,    -1,   181,     4,    -1,
     285,   348,    -1,   344,    -1,   342,    -1,   337,    -1,   201,
      -1,   348,   348,   348,   348,    -1,   348,   348,    -1,   360,
     348,   348,    -1,   358,   363,   357,    -1,   286,   522,    -1,
      39,   348,   348,    -1,   192,   523,    -1,   227,   350,    -1,
     348,   348,    -1,   360,   348,   348,    -1,   358,   363,   357,
      -1,    40,   348,   348,    -1,   348,   348,    -1,   110,   348,
     348,    -1,   350,    -1,   305,   359,   363,    -1,     5,     4,
       4,    -1,   295,    -1,    70,   526,    -1,   168,     4,    -1,
     239,     4,    -1,   248,   348,    -1,    54,    -1,   138,    -1,
     240,    -1,    90,    -1,   148,   528,    -1,   253,   529,    -1,
      40,   348,   348,    -1,   192,   348,   348,    -1,   110,    -1,
     258,   110,    -1,    40,   348,   348,    -1,   192,   348,   348,
      -1,   110,    -1,   258,   110,    -1,   187,    -1,    13,    -1,
     201,    -1,    34,    -1,   107,    -1,    61,     5,    -1,   276,
     358,    -1,   299,     4,     4,     4,    -1,   348,    -1,   348,
      97,    -1,   192,   534,    -1,   286,   348,    -1,   286,   348,
      97,    -1,    40,    -1,   348,    -1,   110,    -1,    26,   536,
      -1,   123,   538,    -1,   203,   548,    -1,   111,   549,    -1,
     216,     5,    -1,   119,     5,   373,    -1,    61,     5,   373,
      -1,   266,     4,   373,    -1,   240,    87,   537,    -1,   119,
       5,   373,    -1,    61,     5,   373,    -1,   266,     4,   373,
      -1,   539,    -1,   155,   539,    -1,   277,   540,    -1,   263,
     541,    -1,   116,    87,   542,    -1,   190,   543,    -1,   240,
     155,   545,    -1,   240,    87,   546,    -1,   237,   547,    -1,
     119,     5,    -1,    61,     5,    -1,   266,     4,    -1,   119,
       5,    -1,    61,     5,    -1,   266,     4,    -1,   119,     5,
      -1,    61,     5,    -1,   266,     4,    -1,   119,     5,    -1,
      61,     5,    -1,   266,     4,    -1,   155,   544,    -1,   119,
       5,     4,    -1,    61,     5,     4,    -1,   266,     4,     4,
      -1,   119,     5,    -1,    61,     5,    -1,   266,     4,    -1,
     119,     5,    -1,    61,     5,    -1,   266,     4,    -1,   119,
       5,    -1,    61,     5,    -1,   266,     4,    -1,   119,     5,
      -1,    61,     5,    -1,   266,     4,    -1,   119,     5,   373,
      -1,    61,     5,   373,    -1,   266,     4,   373,    -1,   119,
       5,     5,   373,    -1,   551,     4,    -1,    99,    -1,    50,
      -1,   134,    -1,   288,    -1,    -1,     4,   348,   348,   348,
     348,    -1,   202,    -1,   202,     4,   348,   348,   348,   348,
      -1,   123,   263,   553,    -1,     4,    -1,   348,   358,    -1,
       4,     4,    -1,     4,   348,   358,    -1,   348,   348,    -1,
     286,   348,   348,    -1,   359,   363,   364,    -1,    16,   558,
      -1,   238,     4,    -1,   236,   557,    -1,    23,   556,    -1,
       4,     4,    -1,     4,     5,    -1,   280,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   280,     4,     5,    -1,
       4,    -1,     4,   359,   363,    -1,     4,     6,   359,   363,
      -1,   226,    -1,   348,   348,    -1,   348,   348,    12,   348,
     348,    -1,   348,   348,    12,   360,   348,   348,    -1,   348,
     348,    12,   358,   363,   357,    -1,   286,   561,    -1,   122,
      -1,   122,   348,    -1,   348,   348,    -1,   348,   348,    12,
     348,   348,    -1,   348,   348,    12,   360,   348,   348,    -1,
     348,   348,    12,   358,   363,   357,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   447,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   501,   502,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   520,
     522,   523,   524,   525,   527,   528,   529,   530,   533,   534,
     535,   536,   537,   540,   541,   544,   545,   546,   549,   552,
     555,   558,   570,   577,   584,   592,   593,   594,   595,   596,
     599,   600,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   613,   614,   615,   616,   617,   618,
     619,   620,   621,   622,   623,   624,   625,   626,   629,   630,
     633,   634,   635,   636,   637,   638,   639,   640,   643,   644,
     645,   646,   647,   650,   651,   652,   653,   654,   655,   656,
     657,   658,   659,   660,   663,   664,   665,   668,   669,   670,
     671,   674,   675,   676,   679,   680,   681,   684,   685,   686,
     689,   690,   691,   692,   693,   694,   695,   696,   699,   700,
     703,   704,   705,   706,   707,   708,   711,   712,   713,   716,
     717,   718,   719,   720,   721,   724,   725,   726,   727,   728,
     729,   730,   731,   732,   736,   737,   740,   741,   744,   745,
     748,   749,   751,   752,   753,   756,   757,   760,   762,   764,
     766,   768,   770,   772,   774,   776,   780,   781,   782,   783,
     784,   785,   786,   787,   790,   791,   794,   795,   796,   798,
     800,   801,   802,   804,   808,   809,   812,   813,   815,   818,
     820,   826,   827,   828,   831,   832,   833,   836,   837,   838,
     839,   840,   841,   847,   848,   851,   852,   853,   854,   855,
     858,   859,   860,   863,   864,   869,   874,   881,   883,   885,
     886,   887,   890,   892,   895,   896,   899,   900,   901,   902,
     903,   906,   908,   910,   913,   914,   917,   918,   919,   926,
     927,   928,   929,   932,   933,   936,   937,   940,   941,   944,
     946,   950,   951,   954,   956,   957,   958,   959,   962,   963,
     964,   965,   966,   969,   971,   973,   974,   976,   978,   980,
     982,   986,   989,   992,   993,   994,   995,   996,   997,   998,
     999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009,  1010,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1031,
    1033,  1034,  1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,
    1047,  1048,  1049,  1052,  1055,  1056,  1058,  1060,  1061,  1062,
    1063,  1064,  1065,  1072,  1073,  1076,  1077,  1078,  1081,  1082,
    1085,  1088,  1089,  1091,  1095,  1096,  1097,  1100,  1104,  1106,
    1107,  1108,  1109,  1110,  1111,  1112,  1113,  1114,  1117,  1118,
    1119,  1122,  1123,  1126,  1128,  1134,  1138,  1140,  1142,  1145,
    1146,  1148,  1151,  1154,  1155,  1159,  1161,  1164,  1169,  1170,
    1171,  1175,  1176,  1177,  1180,  1181,  1182,  1185,  1186,  1188,
    1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1199,
    1200,  1203,  1204,  1207,  1208,  1209,  1210,  1213,  1214,  1217,
    1219,  1222,  1226,  1227,  1228,  1229,  1232,  1233,  1234,  1237,
    1238,  1239,  1242,  1245,  1246,  1247,  1250,  1251,  1254,  1255,
    1256,  1257,  1258,  1259,  1260,  1263,  1264,  1267,  1268,  1271,
    1272,  1275,  1276,  1279,  1280,  1281,  1284,  1285,  1288,  1289,
    1292,  1295,  1303,  1304,  1307,  1308,  1309,  1310,  1311,  1312,
    1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,
    1325,  1328,  1329,  1332,  1333,  1334,  1335,  1338,  1339,  1340,
    1341,  1344,  1345,  1346,  1347,  1348,  1351,  1352,  1353,  1354,
    1355,  1356,  1358,  1359,  1364,  1365,  1368,  1370,  1372,  1375,
    1376,  1377,  1378,  1379,  1380,  1383,  1385,  1387,  1389,  1390,
    1392,  1394,  1396,  1398,  1400,  1403,  1404,  1405,  1406,  1407,
    1408,  1410,  1411,  1412,  1415,  1418,  1420,  1422,  1424,  1426,
    1428,  1430,  1432,  1435,  1437,  1439,  1441,  1442,  1443,  1444,
    1445,  1448,  1449,  1450,  1451,  1452,  1453,  1454,  1456,  1458,
    1459,  1460,  1463,  1464,  1465,  1466,  1467,  1468,  1470,  1471,
    1472,  1475,  1476,  1477,  1478,  1479,  1482,  1485,  1488,  1491,
    1494,  1497,  1500,  1503,  1506,  1511,  1514,  1517,  1520,  1523,
    1526,  1529,  1532,  1535,  1538,  1541,  1546,  1549,  1552,  1555,
    1558,  1561,  1564,  1567,  1570,  1575,  1578,  1581,  1584,  1587,
    1590,  1593,  1596,  1599,  1602,  1605,  1610,  1612,  1613,  1614,
    1615,  1616,  1618,  1619,  1620,  1622,  1623,  1624,  1625,  1626,
    1627,  1628,  1630,  1632,  1633,  1634,  1637,  1638,  1639,  1640,
    1641,  1642,  1644,  1645,  1646,  1649,  1651,  1653,  1654,  1656,
    1658,  1662,  1663,  1666,  1667,  1668,  1671,  1678,  1679,  1680,
    1681,  1682,  1683,  1684,  1687,  1695,  1696,  1697,  1698,  1700,
    1702,  1703,  1703,  1704,  1705,  1706,  1707,  1708,  1709,  1711,
    1712,  1714,  1717,  1720,  1721,  1722,  1725,  1727,  1730,  1733,
    1734,  1737,  1741,  1744,  1746,  1749,  1752,  1756,  1761,  1766,
    1768,  1769,  1771,  1773,  1774,  1776,  1778,  1780,  1782,  1784,
    1785,  1787,  1789,  1793,  1798,  1800,  1802,  1804,  1806,  1808,
    1810,  1812,  1814,  1816,  1818,  1821,  1822,  1824,  1826,  1827,
    1829,  1831,  1832,  1833,  1835,  1837,  1838,  1839,  1841,  1842,
    1843,  1845,  1848,  1852,  1856,  1859,  1862,  1866,  1871,  1877,
    1878,  1879,  1881,  1882,  1884,  1888,  1890,  1891,  1892,  1894,
    1897,  1899,  1902,  1904,  1907,  1909,  1911,  1912,  1915,  1920,
    1923,  1924,  1927,  1930,  1934,  1935,  1937,  1938,  1939,  1941,
    1942,  1944,  1945,  1947,  1952,  1954,  1955,  1957,  1958,  1959,
    1960,  1961,  1962,  1964,  1966,  1968,  1969,  1971,  1972,  1974,
    1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,  1985,
    1986,  1988,  1990,  1992,  1993,  1994,  1995,  1997,  1998,  1999,
    2000,  2001,  2003,  2004,  2005,  2006,  2007,  2008,  2011,  2012,
    2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,  2022,
    2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2031,  2034,
    2035,  2036,  2037,  2038,  2039,  2047,  2054,  2063,  2072,  2079,
    2086,  2094,  2102,  2109,  2114,  2119,  2124,  2129,  2134,  2139,
    2145,  2154,  2164,  2174,  2181,  2191,  2201,  2210,  2222,  2235,
    2240,  2243,  2245,  2247,  2252,  2256,  2259,  2261,  2263,  2266,
    2267,  2268,  2269,  2270,  2271,  2272,  2275,  2276,  2277,  2278,
    2279,  2280,  2282,  2284,  2286,  2288,  2290,  2292,  2295,  2297,
    2299,  2301,  2303,  2305,  2308,  2309,  2310,  2311,  2313,  2316,
    2317,  2319,  2321,  2322,  2323,  2325,  2328,  2331,  2332,  2334,
    2335,  2336,  2337,  2339,  2340,  2341,  2342,  2343,  2345,  2347,
    2348,  2350,  2353,  2354,  2355,  2357,  2359,  2360,  2361,  2362,
    2364,  2367,  2371,  2372,  2373,  2374,  2377,  2380,  2382,  2383,
    2384,  2386,  2389,  2390,  2392,  2393,  2394,  2395,  2396,  2398,
    2399,  2401,  2404,  2405,  2406,  2407,  2408,  2410,  2412,  2413,
    2414,  2415,  2417,  2419,  2420,  2421,  2422,  2423,  2424,  2426,
    2427,  2429,  2432,  2433,  2434,  2435,  2438,  2439,  2442,  2443,
    2446,  2447,  2450,  2463,  2464,  2468,  2469,  2473,  2474,  2477,
    2482,  2489,  2491,  2494,  2496,  2499,  2503,  2504,  2505,  2506,
    2507,  2508,  2509,  2511,  2515,  2516,  2519,  2520,  2521,  2522,
    2523,  2524,  2525,  2526,  2529,  2530,  2531,  2532,  2533,  2534,
    2535,  2536,  2537,  2538,  2539,  2542,  2543,  2546,  2547,  2547,
    2550,  2551,  2552,  2553,  2556,  2557,  2560,  2561,  2564,  2568,
    2569,  2569,  2572,  2573,  2576,  2579,  2583,  2584,  2585,  2586,
    2589,  2590,  2591,  2592,  2595,  2597,  2598,  2603,  2605,  2606,
    2607,  2608,  2611,  2612,  2617,  2621,  2622,  2623,  2626,  2627,
    2632,  2633,  2636,  2638,  2639,  2640,  2645,  2646,  2647,  2648,
    2651,  2652,  2655,  2657,  2659,  2660,  2663,  2665,  2666,  2667,
    2670,  2671,  2674,  2675,  2676,  2679,  2680,  2681,  2684,  2685,
    2686,  2687,  2688,  2691,  2692,  2693,  2696,  2697,  2698,  2699,
    2700,  2703,  2705,  2707,  2709,  2712,  2714,  2716,  2719,  2720,
    2721,  2722,  2723,  2724,  2725,  2726,  2727,  2730,  2731,  2732,
    2735,  2736,  2737,  2740,  2741,  2742,  2745,  2746,  2747,  2750,
    2751,  2752,  2753,  2756,  2757,  2758,  2761,  2762,  2763,  2766,
    2767,  2768,  2771,  2772,  2773,  2776,  2778,  2780,  2784,  2788,
    2789,  2792,  2793,  2794,  2797,  2798,  2800,  2801,  2803,  2806,
    2807,  2808,  2809,  2812,  2813,  2816,  2818,  2819,  2820,  2821,
    2824,  2825,  2826,  2829,  2830,  2831,  2834,  2835,  2840,  2844,
    2851,  2852,  2854,  2859,  2861,  2864,  2865,  2866,  2867,  2869,
    2874
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
  "BUFFER_", "BW_", "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTRIAL_",
  "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_",
  "CLIP_", "COLOR_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_",
  "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_",
  "DETECTOR_", "DIAMOND_", "DIM_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_", "ENVI_", "EPANDA_",
  "EPSILON_", "EQUATORIAL_", "ERASE_", "EXT_", "FACTOR_", "FALSE_",
  "FILE_", "FILL_", "FILTER_", "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_",
  "FK4_NO_E_", "FK5_", "FONT_", "FRONT_", "FULL_", "FUNCTION_",
  "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_", "GRAY_",
  "GRID_", "GZ_", "HANDLE_", "HAS_", "HEAD_", "HEADER_", "HEIGHT_",
  "HELIOECLIPTIC_", "HIDE_", "HIGHLITE_", "HISTEQU_", "HISTOGRAM_",
  "HORIZONTAL_", "ICRS_", "ID_", "IIS_", "IMAGE_", "INCLUDE_", "INCR_",
  "INFO_", "INTEGER_", "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_",
  "KEYWORD_", "LABEL_", "LENGTH_", "LEVEL_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "MACOSX_",
  "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MESSAGE_",
  "METHOD_", "MINMAX_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_",
  "MOTION_", "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_",
  "NEXT_", "NO_", "NONE_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_",
  "ON_", "ONLY_", "OPTION_", "ORIENT_", "PAN_", "PANNER_", "PARSER_",
  "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_",
  "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRINT_",
  "PRESERVE_", "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_",
  "QUERY_", "RADIAL_", "RADIUS_", "REGION_", "REPLACE_", "RESAMPLE_",
  "RESET_", "RESOLUTION_", "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_",
  "SAOIMAGE_", "SAOTNG_", "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_",
  "SCOPE_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_",
  "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SINH_", "SIZE_", "SLICE_",
  "SMMAP_", "SMOOTH_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_",
  "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "SUPERGALACTIC_", "SUM_",
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
  "threedHighlite", "threedView", "analysis", "analysisShape", "bin",
  "binAbout", "binFactor", "binFunction", "binTo", "block", "blockTo",
  "clip", "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "fitsy", "get", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
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
  "panner", "postscript", "pscolorspace", "region", "regionHighlite",
  "regionSelect", "renderMethod", "renderBackground", "rgb", "rotate",
  "rotateMotion", "save", "saveArray", "saveArrayRGBCube", "saveFits",
  "saveFitsImage", "saveFitsTable", "saveFitsSlice", "saveFitsExtCube",
  "saveFitsMosaic", "saveFitsMosaicImage", "saveFitsRGBImage",
  "saveFitsRGBCube", "saveFitsResample", "saveNRRD", "saveENVI", "smooth",
  "smoothFunction", "update", "updateFitsSlice", "warp", "wcs",
  "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     595,   596,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   346,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   348,   348,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   351,   351,
     351,   351,   351,   352,   352,   353,   353,   353,   354,   355,
     356,   357,   357,   357,   357,   358,   358,   358,   358,   358,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   360,   360,
     361,   361,   361,   361,   361,   361,   361,   361,   362,   362,
     362,   362,   362,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   364,   364,   364,   365,   365,   365,
     365,   366,   366,   366,   367,   367,   367,   368,   368,   368,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   370,
     371,   371,   371,   371,   371,   371,   372,   372,   372,   373,
     373,   373,   373,   373,   373,   374,   374,   374,   374,   374,
     374,   374,   374,   374,   375,   375,   376,   376,   377,   377,
     378,   378,   378,   378,   378,   379,   379,   380,   380,   380,
     380,   380,   380,   380,   380,   380,   381,   381,   381,   381,
     381,   381,   381,   381,   382,   382,   383,   383,   383,   383,
     383,   383,   383,   383,   384,   384,   385,   385,   385,   385,
     385,   386,   386,   386,   387,   387,   387,   388,   388,   388,
     388,   388,   388,   389,   389,   390,   390,   390,   390,   390,
     391,   391,   391,   392,   392,   392,   392,   393,   393,   393,
     393,   393,   394,   394,   395,   395,   396,   396,   396,   396,
     396,   397,   397,   397,   398,   398,   399,   399,   399,   400,
     400,   400,   400,   401,   401,   402,   402,   403,   403,   404,
     404,   405,   405,   405,   405,   405,   405,   405,   406,   406,
     406,   406,   406,   407,   407,   407,   407,   407,   407,   407,
     407,   408,   409,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   411,   411,   411,   411,   411,   411,   411,   411,
     412,   412,   412,   413,   414,   414,   414,   414,   414,   414,
     414,   414,   414,   415,   415,   416,   416,   416,   417,   417,
     418,   419,   419,   419,   420,   420,   420,   421,   422,   422,
     422,   422,   422,   422,   422,   422,   422,   422,   423,   423,
     423,   424,   424,   425,   425,   425,   426,   426,   426,   427,
     427,   427,   428,   429,   429,   430,   430,   430,   431,   431,
     431,   432,   432,   432,   433,   433,   433,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   435,   435,   436,   436,   436,   436,   437,   437,   438,
     438,   438,   439,   439,   439,   439,   440,   440,   440,   441,
     441,   441,   442,   443,   443,   443,   444,   444,   445,   445,
     445,   445,   445,   445,   445,   446,   446,   447,   447,   448,
     448,   449,   449,   450,   450,   450,   451,   451,   452,   452,
     453,   453,   454,   454,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     456,   457,   457,   458,   458,   458,   458,   459,   459,   459,
     459,   460,   460,   460,   460,   460,   461,   461,   461,   461,
     461,   461,   461,   461,   462,   462,   463,   463,   463,   464,
     464,   464,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   465,   465,   465,   466,   466,   466,   466,   466,
     466,   466,   466,   466,   467,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   471,   471,   471,   471,   471,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   473,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   475,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   477,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   478,   478,   478,   478,
     478,   478,   478,   478,   478,   479,   479,   479,   479,   479,
     479,   480,   480,   481,   481,   481,   482,   483,   483,   483,
     483,   483,   483,   483,   484,   485,   485,   485,   485,   485,
     485,   486,   485,   485,   485,   485,   485,   485,   485,   485,
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
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   490,   490,   490,   490,   491,   492,   492,   492,   493,
     493,   493,   493,   493,   493,   493,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   495,   495,   495,   495,   496,   496,   497,   497,
     498,   498,   499,   500,   500,   500,   500,   500,   500,   501,
     501,   502,   502,   502,   502,   502,   503,   503,   503,   503,
     503,   503,   503,   503,   504,   504,   505,   505,   505,   505,
     505,   505,   505,   505,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   507,   507,   508,   509,   508,
     510,   510,   510,   510,   511,   511,   512,   512,   513,   514,
     515,   514,   516,   516,   517,   518,   519,   519,   519,   519,
     520,   520,   520,   520,   521,   521,   521,   521,   521,   521,
     521,   521,   522,   522,   522,   523,   523,   523,   524,   524,
     524,   524,   525,   525,   525,   525,   526,   526,   526,   526,
     527,   527,   528,   528,   528,   528,   529,   529,   529,   529,
     530,   530,   531,   531,   531,   532,   532,   532,   533,   533,
     533,   533,   533,   534,   534,   534,   535,   535,   535,   535,
     535,   536,   536,   536,   536,   537,   537,   537,   538,   538,
     538,   538,   538,   538,   538,   538,   538,   539,   539,   539,
     540,   540,   540,   541,   541,   541,   542,   542,   542,   543,
     543,   543,   543,   544,   544,   544,   545,   545,   545,   546,
     546,   546,   547,   547,   547,   548,   548,   548,   549,   550,
     550,   551,   551,   551,   552,   552,   552,   552,   552,   553,
     553,   553,   553,   554,   554,   555,   555,   555,   555,   555,
     556,   556,   556,   557,   557,   557,   558,   558,   558,   559,
     560,   560,   560,   560,   560,   561,   561,   561,   561,   561,
     561
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     3,     2,     2,     2,     2,
       3,     2,     3,     2,     2,     2,     2,     2,     1,     3,
       2,     2,     2,     1,     2,     2,     2,     1,     2,     1,
       2,     2,     2,     2,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       2,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     0,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     0,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     6,     3,     3,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     4,     2,     2,
       2,     3,     2,     2,     1,     2,     1,     2,     4,     5,
       2,     3,     5,     6,     1,     1,     1,     7,    11,     8,
      12,     1,     2,     2,     1,     1,     2,     2,     2,     2,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     3,     2,     2,     2,     6,    10,     1,
       2,     1,     6,    10,     1,     2,     2,     2,     2,     2,
       2,    13,    13,     1,     0,     1,     1,     4,     6,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       4,     0,     6,     8,     2,     3,     3,     3,     0,     3,
       4,     4,     4,     3,     3,     1,     3,     5,     4,     4,
       3,     2,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       4,     7,     2,     2,     2,     1,     3,     2,     2,     1,
       2,     8,     2,     1,     2,     1,     2,     1,     4,     7,
       2,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       0,     2,     2,     1,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       1,     1,     1,     2,     1,     2,     1,     1,     0,     1,
       1,     0,     1,     5,     6,     4,     3,     6,     2,     1,
       3,     1,     1,     1,     3,     6,     7,     5,     1,     1,
       4,     5,     1,     3,     0,     1,     2,     1,     4,     1,
       2,     1,     2,     3,     2,     1,     2,     1,     4,     2,
       1,     1,     3,     1,     2,     3,     2,     0,     1,     1,
       4,     2,     0,     1,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     1,     1,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     0,     2,     2,     0,     1,     2,     1,
       6,     5,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     2,     2,
       2,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     3,     1,     2,     2,
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
       5,     7,     5,     5,     6,     5,     5,     5,     5,     6,
       5,     7,     8,     5,     5,     6,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     3,     5,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     1,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     4,     5,     7,     8,     6,     4,
       8,     9,     6,     6,     7,    10,    11,    12,     9,     5,
       4,     5,     6,     3,     5,     5,     5,     6,     5,     4,
       9,    10,    11,     9,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     7,     7,     2,     4,     4,     4,     4,
       5,     4,     4,     5,     5,     3,     4,     4,     4,     4,
       6,     7,     8,     9,     6,    10,    11,    12,     9,     3,
       2,     3,     5,     6,     7,     4,     3,     3,     6,     6,
       6,     7,     6,     7,     4,     4,     4,     6,     9,     4,
       3,     6,     7,     7,     2,     3,     3,     3,     4,     2,
       2,     4,     7,    10,     3,     1,     3,     2,     2,     2,
       2,     3,     5,     4,     5,     2,     7,     3,     2,     2,
       3,     2,     2,     2,     3,     2,     3,     4,     3,     3,
       5,     6,     4,     2,     3,     2,     2,     4,     3,     3,
       2,     3,     1,     2,     1,     2,     2,     2,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     2,     3,     5,     7,     7,     6,     6,
       6,     6,     5,     6,     6,     6,     6,     6,     6,     6,
      10,     7,     7,     7,     9,     9,    10,    12,    12,     2,
       2,     3,     4,     4,     4,     2,     4,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       3,     3,     4,     6,    10,     7,     7,     5,     4,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     3,
       5,     5,     3,     4,     5,     5,     5,     3,     5,     2,
       3,     3,     5,     3,     3,     3,     4,     5,     5,     3,
       5,     5,     3,     4,     5,     5,     2,     2,     3,     5,
       6,     6,     3,     3,     3,     6,     5,     5,     2,     3,
       5,     6,     3,     2,     2,     3,     2,     3,     2,     3,
       5,     6,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       0,     1,     0,     0,     1,     1,     1,     1,     1,     7,
       8,     2,     4,     2,     4,     6,     2,     1,     1,     3,
       3,     1,     3,     4,     2,     1,     3,     3,     4,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     0,     2,
       1,     3,     1,     3,     1,     2,     2,     1,     3,     0,
       0,     2,     2,     1,     3,     5,     1,     2,     2,     2,
       1,     1,     1,     1,     4,     2,     3,     3,     2,     3,
       2,     2,     2,     3,     3,     3,     2,     3,     1,     3,
       3,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     3,     3,     1,     2,     3,     3,     1,     2,
       1,     1,     1,     1,     1,     2,     2,     4,     1,     2,
       2,     2,     3,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     2,
       2,     2,     3,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     4,     2,
       1,     1,     1,     1,     0,     5,     1,     6,     3,     1,
       2,     2,     3,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     3,     2,     2,     3,     1,     3,     4,     1,
       2,     5,     6,     6,     2,     1,     2,     2,     5,     6,
       6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   311,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1053,
       0,     0,     0,     0,     0,     0,     0,  1053,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1234,    49,     0,
       0,     0,     0,     0,   215,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,    54,    55,     0,
     251,     6,     0,     0,     0,     0,     0,     0,     9,     0,
       0,   279,   281,     0,     0,    11,   135,   137,   130,   131,
     132,   136,   133,   134,   284,    12,     0,   294,     0,     0,
       0,    13,     0,     0,     0,     0,   318,     0,    14,    69,
      98,     0,   128,    97,    77,    95,     0,    74,    76,    72,
     129,    96,    73,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    70,    71,    75,   325,   143,    99,     0,    15,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      57,    56,     0,     0,     0,     0,     2,     0,    18,     0,
       0,     0,   384,   398,     0,   404,     0,     0,     0,     0,
       0,     0,     0,   347,     0,   476,     0,     0,     0,     0,
       0,  1053,     0,   355,     0,   359,     0,     0,     0,   363,
       0,   365,     0,   367,     0,     0,   503,   371,    19,     0,
     509,    20,   514,     0,   531,   517,   518,   519,   520,   533,
     522,   523,   524,     0,   526,   527,     0,     0,    21,    23,
       0,   547,     0,     0,     0,   552,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   706,    27,     0,     0,
       0,     0,     0,     0,   707,    28,     0,    29,  1058,  1057,
    1054,  1055,  1056,     0,  1116,     0,     0,     0,    31,     0,
    1123,  1122,  1121,  1120,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1141,     0,  1138,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1168,    41,     0,     0,     0,     0,     0,    42,  1231,
    1230,  1232,  1233,    44,     0,    45,     0,     0,     0,     0,
       0,   202,     0,     0,     0,    46,     0,     0,  1236,    48,
       0,     0,    50,     0,     0,     0,     0,   143,    51,  1259,
      52,     0,     0,    53,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     5,   234,     0,   226,     0,
       0,   228,     0,   236,   229,   233,   244,   245,   230,   246,
       0,   232,   254,   255,   253,   252,     0,     0,     0,   259,
     266,   269,   268,   267,   265,   258,   262,   263,   264,   257,
       0,     0,     0,     0,     0,   261,    10,     0,     0,     0,
     280,     0,   285,     0,   293,   286,   295,   287,   296,   288,
     307,   289,     0,     0,   290,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,     0,     0,     0,     0,     0,   146,   152,   144,   145,
     147,   150,   153,   149,   148,   151,     0,     0,   331,    58,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   333,     0,   380,   376,   372,   373,   377,   374,   379,
     334,   383,   335,   299,   388,   392,   387,   302,   301,   300,
       0,     0,   336,   399,   338,     0,   337,     0,   406,   339,
     418,   410,   421,   411,   412,   414,     0,   416,   417,   143,
     340,     0,     0,   341,     0,     0,   143,   342,   431,   143,
     429,   343,   432,   345,   143,   433,   344,     0,   143,     0,
     346,   451,     0,   449,   467,     0,     0,     0,   455,   447,
       0,   457,   472,   460,   348,   477,   478,   349,     0,     0,
       0,   442,     0,   352,   438,   439,     0,   353,   354,     0,
     479,   480,   481,   357,   358,   482,   360,     0,   483,   484,
     485,   362,   486,   487,   364,   493,   495,   497,   499,   492,
     494,   501,   366,     0,     0,   506,     0,   370,   143,   508,
       0,   515,   532,   516,   534,   535,   536,   521,   537,   539,
     538,   540,   525,   528,   544,     0,     0,     0,   541,   529,
       0,     0,   549,   548,     0,     0,     0,     0,    25,     0,
       0,   559,     0,   560,     0,     0,     0,     0,     0,   561,
       0,   705,     0,   562,     0,   563,     0,     0,   564,     0,
     710,   709,   708,     0,   713,     0,     0,     0,   899,     0,
       0,     0,   717,   721,   723,   724,     0,     0,     0,     0,
     835,     0,     0,     0,   872,     0,     0,     0,     0,     0,
       0,     0,   874,     0,     0,     0,    30,  1117,  1118,  1119,
      32,     0,     0,     0,     0,  1130,  1131,     0,   143,     0,
    1128,  1125,     0,     0,     0,   143,  1146,  1149,  1147,  1148,
    1142,  1143,  1144,  1145,     0,     0,    39,  1165,  1166,     0,
    1173,  1175,  1174,  1170,  1171,  1169,     0,     0,     0,     0,
    1176,     0,  1179,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1177,  1188,     0,     0,     0,  1178,  1180,
    1229,  1163,  1164,  1162,   200,     0,   204,   196,     0,   206,
     197,     0,   208,   198,  1161,  1160,   199,   201,   203,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,  1243,
    1256,  1246,     0,     0,  1249,     0,     0,  1248,  1247,   154,
    1265,     0,  1264,  1260,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   231,     0,   240,     0,   237,     0,
     256,   138,   141,   142,   140,   139,   270,   271,   272,   260,
     274,   276,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,   315,    94,    91,    92,    93,   143,
     317,   316,     0,     0,     0,     0,     0,     0,     0,   330,
       0,   326,   324,   323,   332,   375,     0,     0,   378,   393,
     394,   389,   390,   395,   397,   396,   391,   303,   304,   386,
     385,   401,   400,     0,   405,   419,   420,   409,   422,   415,
     413,   408,     0,     0,     0,   143,   428,   154,   154,   154,
     143,     0,     0,   143,   468,   450,   461,     0,   452,    78,
     463,     0,     0,   454,   456,   143,   473,   474,   459,     0,
       0,     0,   444,     0,     0,     0,     0,   947,   949,   948,
       0,     0,  1046,     0,  1025,     0,  1028,     0,     0,  1048,
    1050,     0,  1041,   356,     0,   496,   489,   498,   490,   500,
     491,   502,   488,     0,     0,   507,   504,   505,   154,   530,
     543,   542,   545,     0,   558,   546,     0,     0,     0,     0,
       0,     0,   167,   167,   161,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,     0,     0,   600,   624,     0,     0,     0,
     596,     0,     0,     0,     0,   167,   161,     0,     0,   701,
       0,   711,   712,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   775,     0,     0,
       0,     0,     0,   800,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   824,     0,     0,   829,   830,     0,     0,
       0,   851,   853,   852,     0,   855,     0,     0,   863,   865,
     866,   900,     0,     0,     0,     0,   715,   716,   941,   939,
     944,   943,   942,   940,   945,     0,   720,     0,   725,     0,
     938,     0,   726,   727,   728,   729,     0,     0,     0,     0,
       0,   837,     0,     0,   838,  1068,     0,  1071,  1067,     0,
       0,     0,   839,   873,   840,  1087,  1092,  1089,  1088,  1086,
    1093,  1090,  1084,  1091,  1085,  1094,     0,     0,   845,     0,
       0,     0,  1100,     0,  1102,   848,     0,  1104,   849,   870,
       0,     0,     0,   875,   876,   877,  1129,     0,     0,  1136,
    1132,     0,     0,     0,  1127,  1126,  1140,  1139,     0,  1154,
       0,     0,  1150,     0,  1158,     0,     0,  1151,     0,  1172,
     189,   189,     0,   189,     0,  1198,     0,  1197,  1189,     0,
       0,     0,     0,  1193,     0,     0,     0,  1196,     0,     0,
       0,     0,     0,  1191,  1199,     0,     0,     0,  1190,   189,
     189,   189,   205,   207,   209,     0,     0,     0,     0,   210,
       0,    55,     0,  1238,     0,  1244,     0,   143,  1250,  1251,
       0,  1253,  1254,     0,   155,   156,  1245,  1266,  1267,     0,
     223,   219,   225,   217,   218,   224,   221,   220,   222,   227,
       0,   241,     0,     0,     0,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   309,   143,     0,     0,     0,
       0,   319,     0,   329,     0,   328,   382,   381,     0,     0,
       0,   143,     0,     0,   154,   426,   430,   434,     0,     0,
       0,   154,     0,    82,    81,   469,   453,     0,   464,   466,
     157,   475,   350,     0,     0,    55,     0,   443,     0,     0,
     965,     0,     0,     0,     0,     0,     0,   979,     0,     0,
       0,     0,     0,     0,   996,   997,     0,     0,     0,     0,
       0,  1008,     0,  1013,  1014,  1016,  1018,     0,  1022,  1033,
    1034,  1035,     0,  1037,  1042,  1044,  1045,  1043,   946,     0,
       0,  1024,     0,  1023,   964,     0,     0,  1029,     0,  1031,
       0,  1030,  1051,  1032,  1039,     0,     0,   368,     0,     0,
     556,   557,     0,   554,   550,     0,   167,   167,   167,   168,
     169,   568,   569,   163,   162,     0,   167,   167,   167,     0,
     574,   584,   164,   167,   167,   167,   165,   166,   167,   167,
       0,   167,   167,     0,   164,     0,   597,     0,     0,     0,
     623,     0,   622,     0,     0,   599,     0,   598,     0,     0,
       0,     0,   164,   164,   161,     0,     0,   161,     0,     0,
       0,   167,   167,   697,     0,   167,   167,   702,     0,   180,
     181,   182,   183,   184,   185,     0,    86,    87,    85,   733,
       0,     0,     0,     0,     0,     0,   893,   891,   886,     0,
     896,   880,   897,   883,   895,   889,   878,   892,   881,   879,
     898,   894,     0,     0,     0,   753,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   785,
       0,     0,     0,     0,     0,   799,   801,     0,     0,   807,
     806,     0,     0,   170,     0,     0,     0,   143,     0,     0,
     820,     0,     0,     0,   825,   826,   827,     0,     0,     0,
     834,   850,   854,   856,   859,   858,     0,     0,     0,   864,
     901,   903,     0,   902,   718,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1052,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     722,     0,     0,     0,     0,   836,     0,   143,     0,  1063,
    1061,     0,     0,   143,     0,  1066,   841,     0,     0,     0,
     847,     0,     0,  1105,   868,   869,     0,   871,  1135,  1137,
    1134,  1133,  1124,     0,     0,  1155,     0,     0,  1159,  1167,
     191,   192,   193,   194,   190,  1182,  1181,     0,     0,     0,
    1184,  1183,   189,     0,     0,     0,  1192,     0,     0,     0,
       0,     0,  1209,     0,  1223,  1222,  1224,     0,     0,     0,
    1195,     0,     0,     0,  1194,  1204,  1203,  1205,  1201,  1200,
    1202,  1226,  1225,  1227,   212,   214,   213,     0,     0,    55,
       0,  1240,     0,   143,  1257,  1252,  1255,     0,     0,   143,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,   306,   305,     0,     0,   297,   308,   310,     0,
     320,   322,   321,   143,   327,     0,     0,     0,   154,   425,
     143,     0,     0,     0,     0,   448,   462,    80,    79,   471,
       0,   465,   159,   160,   158,   458,     0,     0,   446,   440,
       0,     0,     0,     0,     0,     0,   143,   966,     0,   969,
       0,     0,   972,     0,   143,   977,     0,   980,   981,     0,
     983,   984,   985,     0,   989,     0,     0,   992,     0,   998,
       0,     0,     0,  1003,  1004,  1002,     0,     0,     0,  1009,
       0,     0,  1012,  1015,  1017,  1019,     0,     0,  1036,  1038,
     950,     0,     0,     0,     0,     0,     0,  1047,   951,     0,
       0,  1049,  1040,     0,     0,   512,   513,     0,     0,   555,
       0,   565,   566,   567,   167,   571,   572,   573,     0,     0,
       0,   578,   579,   161,     0,     0,     0,   167,   585,   586,
     587,   588,   590,   164,   593,   594,     0,   167,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,   621,     0,
     625,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,     0,   164,   164,
     161,     0,     0,     0,   164,   601,   602,   603,   604,   606,
       0,   609,   610,     0,   164,     0,     0,   695,   696,   167,
     699,   700,     0,   732,   143,   734,     0,     0,   739,     0,
       0,     0,     0,     0,   885,   882,   888,   887,   884,   890,
       0,   750,     0,     0,     0,     0,   143,   759,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   776,   777,   778,     0,   782,   779,   781,     0,     0,
     787,   786,   788,   789,     0,     0,     0,     0,     0,     0,
     143,     0,   143,     0,   805,   176,   172,   177,   171,   174,
     173,   175,   814,   815,   816,     0,     0,     0,   819,   143,
       0,   143,     0,   828,   831,   143,     0,   143,     0,   857,
     862,   904,   719,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1095,   929,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   930,
       0,     0,     0,     0,     0,   730,   731,   143,   154,     0,
     143,   143,  1069,  1070,     0,  1072,     0,   843,     0,   143,
    1101,  1103,   867,  1152,  1153,  1156,  1157,   189,   189,   189,
    1228,  1207,  1206,  1208,  1211,  1210,  1214,  1213,  1215,  1212,
    1220,  1219,  1221,  1217,  1216,  1218,     0,  1235,  1242,     0,
    1258,     0,   143,     0,  1261,     0,     0,   242,     0,   239,
       0,     0,     0,   277,     0,     0,     0,     0,   143,     0,
     312,   131,     0,   402,     0,   423,   154,   157,     0,     0,
     437,     0,     0,   441,   958,     0,     0,     0,     0,   143,
     967,   157,   157,   157,   143,   973,   157,   154,   157,   157,
     143,   986,   157,   157,   157,   143,   993,   157,   157,   143,
       0,   157,   143,   157,   157,   143,   157,   143,   952,     0,
       0,     0,     0,   143,  1026,  1027,     0,     0,   511,   551,
       0,   570,   575,   576,   577,     0,   581,   582,   583,   589,
     167,   164,   595,   612,   613,   614,   615,   616,     0,   618,
     619,   164,     0,     0,     0,   164,   164,   161,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,     0,   164,
     167,   167,   167,   167,   167,     0,   167,   167,     0,   164,
     164,   167,   167,   167,   167,   167,     0,   167,   167,     0,
     164,   164,   675,   676,   677,   678,   680,     0,   683,   684,
       0,   164,   686,   687,   688,   689,   690,     0,   692,   693,
     164,   605,   164,     0,   611,     0,     0,   698,     0,   735,
     157,     0,     0,   157,     0,     0,     0,   749,   157,   751,
     754,   755,   157,   756,   758,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   780,   783,
     784,     0,   157,     0,     0,     0,   802,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   860,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1096,
    1075,     0,  1082,  1083,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,    83,
       0,     0,   936,   937,   154,     0,     0,     0,  1064,  1062,
    1073,   842,   844,   154,  1186,  1185,  1187,     0,  1237,  1268,
       0,     0,  1263,  1262,   243,     0,     0,     0,   282,     0,
       0,     0,   298,   157,   403,   407,   424,   427,     0,   435,
     470,   351,     0,     0,     0,     0,   963,   968,   971,   970,
     974,   975,   976,   978,   982,   987,   988,   990,   991,   994,
     995,   999,   154,   157,  1006,   154,  1007,  1010,   154,  1020,
     154,     0,     0,     0,     0,   957,     0,   369,   510,     0,
     580,   591,   167,   164,   620,   167,   167,   167,   167,   167,
       0,   167,   167,   164,   666,   667,   668,   669,   670,     0,
     672,   673,   164,   167,   167,   167,   167,   167,     0,   167,
     167,   164,   167,   635,   636,   637,   638,   640,   164,   643,
     644,     0,   167,   167,   655,   656,   657,   658,   660,   164,
     663,   664,     0,   167,   679,   164,     0,   685,   164,   694,
     607,   164,   703,   704,   143,   738,     0,   157,   743,   742,
       0,   143,     0,   752,   757,   143,     0,   764,   765,   766,
     767,   771,   772,   768,   769,   770,     0,     0,   157,   790,
     794,     0,   143,     0,     0,   803,   809,   808,   157,   810,
       0,   817,     0,   821,   157,   157,   812,     0,     0,   861,
       0,   178,   178,     0,     0,   178,     0,   178,  1052,     0,
       0,     0,     0,     0,     0,     0,     0,  1074,     0,     0,
     178,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     931,     0,     0,     0,  1052,    84,     0,   178,     0,  1098,
     935,     0,     0,   211,  1270,  1269,     0,     0,   247,     0,
       0,     0,     0,   313,   436,   959,     0,   186,     0,  1000,
    1001,  1005,  1011,  1021,   953,     0,   186,     0,   361,     0,
     592,   617,   626,   627,   628,   629,   630,   164,   632,   633,
     167,   164,   674,   646,   647,   648,   649,   650,   164,   652,
     653,   167,   639,   167,   164,   645,   659,   167,   164,   665,
     681,   164,   691,   608,     0,   157,   736,   744,     0,     0,
       0,     0,     0,   773,   774,   791,     0,     0,     0,   804,
     811,     0,   822,   823,   813,   157,   832,     0,   179,  1052,
    1052,    83,     0,  1052,     0,  1052,   905,   143,     0,  1077,
       0,  1080,  1114,  1081,  1079,  1076,     0,  1052,  1052,    83,
       0,     0,  1052,  1052,     0,     0,  1052,   934,   932,   933,
     912,  1052,  1052,  1098,  1109,     0,  1065,   846,     0,     0,
     249,     0,     0,     0,     0,   187,   188,   961,   962,     0,
     955,   956,     0,   167,   634,   671,   167,   654,   641,   167,
     661,   167,   682,     0,   737,   157,   740,   157,     0,   157,
       0,   157,   792,   157,     0,   157,     0,  1052,   918,   914,
    1052,     0,   919,     0,   913,  1052,     0,  1078,     0,   916,
     915,  1052,     0,     0,   910,   908,  1052,   143,   909,   911,
     917,  1109,  1059,     0,     0,  1099,  1107,     0,     0,     0,
     278,   299,   302,   300,     0,     0,   143,   143,   553,   631,
     651,   642,   662,   157,   741,   748,     0,   763,   760,   793,
     798,     0,   818,     0,   923,   907,    83,     0,   921,  1115,
       0,   906,    83,     0,   922,     0,  1060,  1111,  1113,     0,
    1106,     0,     0,   283,     0,     0,   186,   186,     0,   745,
     143,   761,   795,   833,  1052,     0,     0,  1052,     0,   157,
    1112,  1108,   248,     0,     0,     0,   960,   954,   714,   143,
     746,   762,   143,   796,   925,     0,  1052,   924,     0,  1052,
     250,     0,     0,   747,   797,    83,   926,    83,   920,   292,
     291,  1052,  1052,   928,   927
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1255,  2514,  2515,   430,   431,
     432,   433,   156,   157,   158,    94,   806,   456,  1196,  1675,
    1345,  1358,  1341,  1922,  2609,  1405,  2657,  1575,   335,   747,
     750,   753,   764,    56,   364,    66,   368,   374,   378,   381,
      71,   384,    78,   399,   395,   389,   405,    85,   410,    95,
     101,   415,   417,   419,   491,   859,  1644,   421,   424,   108,
     440,   159,   161,   178,   218,   480,   848,   482,   492,   851,
     856,   494,   496,   862,   499,   864,   510,   867,   869,   513,
     517,   521,   523,   526,   530,   557,   553,  1267,   544,   888,
     893,   885,  1256,   898,   547,   563,   566,   571,   574,   582,
     926,   928,   930,   932,   587,   936,   221,   589,  1747,   238,
     591,   593,   597,   602,   609,   247,  1334,   612,   255,   621,
    1350,   623,   629,   980,  1366,   975,  1788,  1372,  1370,   976,
    1790,  1375,  1377,   635,   638,   633,   257,   265,   267,   676,
    1057,  1432,  1046,  1530,  1969,  2297,  1062,  1055,   923,  1308,
    1313,  1321,  1323,  1953,   273,  1071,  1074,  1082,  2269,  2270,
    2271,  1954,  2644,  2645,  1105,  1108,  2715,  2716,  2712,  2713,
    2757,  2272,  2273,   278,   284,   292,   690,   685,   297,   302,
     700,   706,  1132,  1137,   756,   744,   308,   312,   713,   318,
     720,  1580,   733,   734,  1168,  1163,  1586,  1153,  1592,  1604,
    1600,  1157,   738,   722,   323,   324,   339,  1183,   342,   348,
     774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2502
static const yytype_int16 yypact[] =
{
    4214,  -108,    69,   821,    37, -2502, -2502,   783,  -132,    31,
     394,  1170,   157,  2942,   117,   268,   985,    96,  5143,    92,
    1064, -2502,   268,   849,   442,   935,   234,    29,   526,    30,
     210,   370,   640,  3006,   104,   531,   445,    30, -2502,   116,
      22,  1091, -2502,    86,   545,  1037, -2502,   398, -2502,    39,
    4251,   328,    53,   583, -2502,   752, -2502,   580,   525,   347,
     613,   621,   103,   622,    -5,    93, -2502, -2502, -2502,   585,
     850, -2502,    56,    89,   268,   369,   850,   223, -2502,   649,
     850, -2502, -2502,    28,   850, -2502, -2502, -2502, -2502,   850,
   -2502, -2502, -2502, -2502, -2502, -2502,    57,   598,   676,   681,
     504, -2502,   850,  1356,   850,   850,   513,   850, -2502, -2502,
   -2502,   514, -2502, -2502, -2502, -2502,  4289, -2502, -2502, -2502,
   -2502, -2502, -2502,   850, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,   441, -2502,   850, -2502,
     717, -2502, -2502,   268,   268,   268,   268,   268,   268,   268,
   -2502, -2502,   268,   268,   268,   268, -2502,   662, -2502,   730,
    1569,   701,   275,   573,   700,   452,  4320,   556,  4785,  4734,
     816,  4289,  3783, -2502,   871,   -80,   866,   797,   840,   628,
     874,    30,   312, -2502,   831, -2502,   678,   633,   173, -2502,
     -17, -2502,   624, -2502,    25,   852,    68, -2502, -2502,  4851,
   -2502, -2502, -2502,   867,   945, -2502, -2502, -2502, -2502,   450,
   -2502, -2502, -2502,   -14, -2502, -2502,  4851,  4376, -2502, -2502,
      70, -2502,   963,   968,    77, -2502,   850, -2502,   981,    59,
     984,    54,   769,   993,    23, -2502, -2502, -2502,   996,  1001,
     268,   268,   850,   850, -2502, -2502,  1004, -2502, -2502, -2502,
   -2502, -2502, -2502,  3574, -2502,  1017,  1021,   850, -2502,  1025,
   -2502, -2502, -2502, -2502, -2502,   850,   878,   268,  3714,   850,
     441,   850, -2502,  1031, -2502,  5209, -2502, -2502,   870,  1033,
    1045,   850, -2502, -2502,   250,  1066,  4851,  1069, -2502,  1264,
     850,   983, -2502,   426,   959,  1335,   443,  1081, -2502, -2502,
   -2502, -2502, -2502, -2502,  1094, -2502,   425,     2,   127,   135,
     435, -2502,   850,   850,   802, -2502,   850,   846,  1108, -2502,
     850,   850, -2502,  1112,     8,    40,  1117,   441, -2502, -2502,
   -2502,   818,   850, -2502, -2502,   850,   850,   850,   850,   850,
     850,   850,   850,   850, -2502, -2502, -2502,   850, -2502,  1123,
    1127, -2502,   850,  1041, -2502, -2502, -2502, -2502, -2502, -2502,
     850, -2502, -2502,   850, -2502, -2502,   424,   424,  1145, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
     850,   850,  1153,  1163,  1180, -2502, -2502,   850,   850,   850,
   -2502,   850, -2502,  1182, -2502, -2502, -2502, -2502,   927, -2502,
    1141, -2502,  4851,  1183, -2502,   850, -2502, -2502, -2502,   850,
    1187,  1196,  1196,  4851,   850,   850,   850,   850,   850,   850,
   -2502,   850,  4289,  1356,   850,   850, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,  1356,   850, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
    1212, -2502,   958,    46, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502,   351, -2502, -2502, -2502,  1053, -2502,   645,
     462,   462, -2502, -2502, -2502,  1224, -2502,  1229, -2502, -2502,
     339, -2502,  1062, -2502, -2502, -2502,  1073, -2502, -2502,   441,
   -2502,  3754,   850, -2502,  4851,  4851,   441, -2502, -2502,   441,
   -2502, -2502, -2502, -2502,   441, -2502, -2502,  4851,   441,   850,
   -2502, -2502,  4851, -2502,  1240,   168,  1038,    16, -2502, -2502,
    1057,  4851,  3901, -2502, -2502, -2502, -2502, -2502,  1247,  1250,
    1262, -2502,  1076, -2502, -2502, -2502,   850, -2502, -2502,   941,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502,    25, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,  1205,  1207,  1208, -2502,
   -2502,  1055, -2502,   850,  1272,  1065,  5209, -2502,   441, -2502,
    1279, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502,  4851,  4851,  4851, -2502, -2502,
    1282,   268, -2502, -2502,  1285,  1287,  1103,   850, -2502,   350,
    1213, -2502,  1296, -2502,   403,  1219,  5144,    35,  1308, -2502,
    1311, -2502,  1317, -2502,    -9, -2502,  1318,  1320, -2502,  1324,
   -2502, -2502, -2502,   850, -2502,  5209,  4689,   937,   787,  1327,
     558,  1246, -2502, -2502, -2502,  1332,   770,  1350,  1352,    32,
     850,   310,   471,    74,  4851,   268,  1825,   791,    83,   169,
     292,    19, -2502,  1347,  1353,  1367, -2502, -2502, -2502, -2502,
   -2502,   850,   850,   850,   850, -2502, -2502,   850,   441,   850,
   -2502,   850,  1356,   850,  1378,   441, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502,    11,   562, -2502, -2502, -2502,  1381,
   -2502, -2502, -2502, -2502,  1290, -2502,  1383,  1386,  1307,  1393,
   -2502,  1394, -2502,  1397,  1333,  1402,   454,   391,   459,    55,
     571,  1407,   581, -2502, -2502,  1414,  1416,  1420, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502,  1422, -2502, -2502,  1423, -2502,
   -2502,  1424, -2502, -2502, -2502, -2502, -2502, -2502, -2502,   850,
     850,   850,   850,   850, -2502,   850,   954,   850,   850, -2502,
     421, -2502,   974,  1421, -2502,  1023,  1428, -2502, -2502,   -42,
     850,   850, -2502,  1426,   850,   850,   850,   850,   850,   850,
     850,   850,   850, -2502, -2502,  1430,  1157,   850,  1427,   844,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502,  1429,  1437,   850,   850,   850,  1440,   268,
    1441,  1442,   441,  4851, -2502, -2502, -2502, -2502, -2502,   441,
   -2502, -2502,   850,   850,   850,  4851,   850,  1356,   850, -2502,
     850, -2502, -2502, -2502, -2502, -2502,  1450,  1451, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502,   556, -2502,   850, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502,  4851,  4851,   850,   441, -2502,   -42,   -42,   -42,
     441,  1356,   850,   441, -2502, -2502, -2502,   850, -2502,    -8,
    1233,  1452,  1461, -2502, -2502,   441,  4851, -2502, -2502,  1465,
    1466,  1472,  1101,   850,  4700,   565,   666, -2502, -2502, -2502,
     850,  1460,   251,   946, -2502,  1230, -2502,  1825,  1231,   508,
    1201,   121, -2502, -2502,   850, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502,   850,  1479, -2502, -2502, -2502,   -42, -2502,
   -2502, -2502, -2502,  4813, -2502, -2502,  1481,  1482,   850,  1483,
    1486,  1489,   644,   644,   -48,  1492,  1495,  1496,  1498,  1222,
    1242,  1505,  1508,  1526,    73,    73,   -48,  1522,  1528,   -48,
    1529,  1536,  5180,  1540,  1544, -2502, -2502,  1546,  1547,   636,
   -2502,  1549,  1550,  1552,  1556,   644,   -48,  1561,  1562, -2502,
    1563, -2502, -2502,   441,   917,  1369,  1299,    12,  1312,  1468,
    2362,   402,  1565,   285,  1438,  1473,  1190,  1595,  1537,   431,
    1345,  1476,  1578,  1358,   224,    27,   420,    -7,  4289,  1825,
    1545,   -77,  1349,  1382,  1586,    41, -2502, -2502,   280,  1588,
    1589, -2502, -2502, -2502,  1598,  1392,   185,  1825,  1396, -2502,
   -2502, -2502,   268,  1604,  1605,   850, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502,     5, -2502,  1341, -2502,   850,
   -2502,   850, -2502, -2502, -2502, -2502,   850,   850,   850,   558,
    4851, -2502,  1606,  1158, -2502, -2502,   850, -2502, -2502,   850,
    4289,   850, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,   268,   850, -2502,   850,
     558,  1614, -2502,   850,   850, -2502,   268, -2502, -2502, -2502,
     686,  1620,  1624, -2502, -2502, -2502, -2502,   850,   850, -2502,
   -2502,  1356,   850,   850, -2502, -2502, -2502, -2502,   850, -2502,
     850,  1500, -2502,   850, -2502,   850,  1524, -2502,  1628, -2502,
    1113,  1113,   592,  1113,  1633, -2502,   647, -2502, -2502,  1634,
    1637,   736,  1639, -2502,  1641,  1643,  1645, -2502,   754,   758,
    1646,  1649,  1651, -2502, -2502,  1655,  1656,  1652, -2502,  1113,
    1113,  1113, -2502, -2502, -2502,   850,   850,   850,   850, -2502,
     850,  1056,  4851, -2502,   850, -2502,  5209,   441, -2502, -2502,
    1658, -2502, -2502,  1659, -2502, -2502, -2502, -2502,  1653,  3714,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
     850,  1661,   850,   850,   850,   860, -2502,  1662,  1663,   850,
     850,   141,  1665,   268,   268, -2502,   441,   850,  1667,  1670,
    1672, -2502,  4851, -2502,   850, -2502, -2502, -2502,   850,   850,
     850,   441,  1676,  4851,   -42, -2502, -2502, -2502,  1356,   850,
    1677,   -42,   850,  1644,  1650,   440, -2502,  1678, -2502, -2502,
     499, -2502, -2502,   850,  1680,  1687,   850, -2502,  1684,  1142,
    4289,  1458,   485,  1463,    26,  4851,   488, -2502,   348,  1557,
     112,   568,  1464,   148, -2502, -2502,   631,  1532,   692,  1575,
     -56,  1825,   -78, -2502,  1696,  1469, -2502,   683, -2502, -2502,
   -2502, -2502,  1825,  1499, -2502, -2502, -2502, -2502, -2502,   850,
    1228, -2502,   850, -2502, -2502,   850,   850, -2502,   850, -2502,
     850, -2502, -2502, -2502, -2502,  1519,   850, -2502,   850,    33,
   -2502, -2502,  1698,  1710, -2502,   850,   644,   644,   644, -2502,
   -2502, -2502, -2502, -2502, -2502,  1711,   644,   644,   644,   824,
   -2502, -2502,    73,   644,   644,   644, -2502, -2502,   644,   644,
    1712,   644,   644,  1713,    73,  1138, -2502,  1714,  1715,  1717,
   -2502,   699, -2502,   830,   990, -2502,  1521, -2502,  1454,  1718,
    1719,  1720,    73,    73,   -48,  1722,  1724,   -48,  1726,  1728,
    1729,   644,   644, -2502,  1730,   644,   644, -2502,  1732, -2502,
   -2502, -2502, -2502, -2502, -2502,   268, -2502, -2502, -2502,  4289,
    1314,   268,   850,  1338,  1330,    -1, -2502, -2502, -2502,    50,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502,  1733,   268,   850, -2502,   268,  1734,   850,  4851,
     268,  1459,  1507,  1509,   161,   186,  1510,   204,  1443,  1445,
    1744,  1746,  1747,  2362,  1749,  1750,  1751,  1455,  1456,  1177,
    1755,   268,   850,  1376,  1470, -2502, -2502,   268,  4289, -2502,
   -2502,  4289,   850,    43,  1756,   268,   850,   441,  1356,   268,
   -2502,  4289,  4851,   850, -2502, -2502, -2502,   268,   268,  4289,
   -2502, -2502, -2502, -2502, -2502, -2502,  4289,   850,   268, -2502,
   -2502, -2502,   850, -2502, -2502,  1759,   850,  1551,   191,   850,
    1553,   850,   202,   850, -2502,   850,  1554,  1555,   850,   850,
     850,   850,   850,   850,   850,   850,    18,   850,   850,  1558,
   -2502,   850,   850,   850,   850, -2502,  4851,   441,  1761,  4851,
    4851,   850,   850,   441,  1356, -2502,   850,   850,   850,  4851,
   -2502,   850,   850, -2502, -2502, -2502,  1762, -2502, -2502, -2502,
   -2502, -2502, -2502,   850,   850, -2502,   850,   850, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502,  1763,  1768,  1757,
   -2502, -2502,  1113,  1775,  1776,  1778, -2502,  1780,  1781,  1787,
    1788,  1782, -2502,  1790, -2502, -2502, -2502,  1791,  1794,  1796,
   -2502,  1797,  1800,  1802, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502,   850,   850,  1801,
    4851, -2502,   850,   441, -2502, -2502, -2502,  3714,   850,   441,
     850,   850,   850, -2502,   850,   850,  1804,   850,  1806,  1805,
     850,   850, -2502, -2502,  1808,  4851, -2502, -2502, -2502,   850,
   -2502, -2502, -2502,   441, -2502,  1078,   850,  1078,   -42, -2502,
     441,  4851,   850,   850,  1809, -2502, -2502, -2502, -2502, -2502,
     850, -2502, -2502, -2502, -2502, -2502,   850,  1812, -2502, -2502,
    4851,  1815,  1816,  1817,  1818,  4851,   441, -2502,  4851, -2502,
    4851,  4851,  4289,  4851,   441, -2502,  4851, -2502, -2502,  4851,
   -2502, -2502,  4289,  4851, -2502,  4851,  4851,  4289,  4851, -2502,
    4851,  4851,   850, -2502, -2502, -2502,  4851,  4851,  4851, -2502,
    4851,  4851, -2502, -2502, -2502, -2502,  4851,  4851, -2502, -2502,
   -2502,  4851,  1819,  1820,  1821,  1822,  4851, -2502, -2502,   850,
     850, -2502, -2502,  1813,   850, -2502, -2502,  1824,  1826, -2502,
     850, -2502, -2502, -2502,   644, -2502, -2502, -2502,  1828,  1829,
    1830, -2502, -2502,   -48,  1832,  1833,  1837,   644, -2502, -2502,
   -2502, -2502, -2502,    73, -2502, -2502,  1834,   644,  1838,  1839,
    1840,    73,    73,   -48,  1842,  1844,  1845,  1541, -2502,  1574,
   -2502,  1601,  1585,  1846,  1847,  1849,    73,    73,   -48,  1852,
    1856,   -48,  1857,  1597,  1858,  1859,  1860,    73,    73,   -48,
    1862,  1866,   -48,  1869,  1607,  1880,  1881,  1882,    73,    73,
     -48,  1884,  1886,   -48,  1887,  1888,  1889,  1890,    73,    73,
     -48,  1892,  1893,  1896,    73, -2502, -2502, -2502, -2502, -2502,
    1894, -2502, -2502,  1899,    73,  1901,  1906, -2502, -2502,   644,
   -2502, -2502,  1907, -2502,   441, -2502,  4851,   850, -2502,   850,
    4851,   850,  1910,  1369, -2502, -2502, -2502, -2502, -2502, -2502,
    1913, -2502,  4289,   268,  1915,  4289,   441, -2502,  1917,  1369,
     850,   850,   850,   850,   850,   850,   850,   850,   850,  1919,
    1921, -2502, -2502, -2502,  1922, -2502, -2502, -2502,  1925,  1928,
   -2502, -2502, -2502, -2502,   850,  4851,   850,  1929,  1369,   268,
     441,  1356,   441,   850, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502,   850,  1356,  1356, -2502,   441,
    1356,   441,   850, -2502, -2502,   441,  1356,   441,  1356, -2502,
   -2502, -2502, -2502,   850,   850,   850,   850,   850,   850,   850,
     850,   850,   850,  2472, -2502,   850,   850,   850,   850,   850,
     850,   850,   850,   850,   850,   850,  3754,  1930,   850, -2502,
     850,   850,   850,  1932,  1933, -2502, -2502,   441,   -42,  1934,
     441,   441, -2502, -2502,  1356, -2502,   850, -2502,  1945,   441,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502,  1113,  1113,  1113,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,   850, -2502, -2502,   850,
   -2502,   850,   441,   850, -2502,  1356,   850, -2502,   850, -2502,
    1879,  1958,  1960, -2502,  1965,   850,   850,  1966,   441,  4851,
   -2502, -2502,   850, -2502,   850, -2502,   -42,   499,   850,  1967,
   -2502,   850,    25, -2502, -2502,  1969,  1970,  1971,  1972,   441,
   -2502,   499,   499,   499,   441, -2502,   499,   -42,   499,   499,
     441, -2502,   499,   499,   499,   441, -2502,   499,   499,   441,
    4851,   499,   441,   499,   499,   441,   499,   441, -2502,  1973,
    1975,  1978,  1979,   441, -2502, -2502,  1981,    25,  1983, -2502,
     850, -2502, -2502, -2502, -2502,  1982, -2502, -2502, -2502, -2502,
     644,    73, -2502, -2502, -2502, -2502, -2502, -2502,  1985, -2502,
   -2502,    73,  1986,  1988,  1989,    73,    73,   -48,  1991,  1992,
    1993,  1995,  1996,  1997,    73,    73,   -48,  1999,  2000,  2001,
    2002,  2003,  2004,    73,    73,   -48,  2006,  2007,  2008,    73,
     644,   644,   644,   644,   644,  2010,   644,   644,  2012,    73,
      73,   644,   644,   644,   644,   644,  2016,   644,   644,  2017,
      73,    73, -2502, -2502, -2502, -2502, -2502,  2019, -2502, -2502,
    2021,    73, -2502, -2502, -2502, -2502, -2502,  2023, -2502, -2502,
      73, -2502,    73,  2024, -2502,  2025,  2026, -2502,  5209, -2502,
     499,  2029,  4289,   499,   850,  4851,  2030, -2502,   499, -2502,
   -2502, -2502,   499, -2502, -2502,  4851,  2031,   850,   850,   850,
     850,   850,   850,   850,   850,   850,   850,   850, -2502, -2502,
   -2502,  4289,   499,   850,  4851,  2035, -2502,  1356,  1356,  1356,
     850,  4289,  1356,   850,  1356,  1356,  4851,  4289,  1356,   850,
    1356, -2502,   850,   850,   850,   850,   850,   850,  1369,   850,
     850,   850,  1581,  1626,  1660,  1697,  1700,  1701,  1703,  2472,
   -2502,  1704, -2502, -2502,  1369,   850,   850,   850,   850,  1369,
     850,   850,   850,   850,   850,   850,   441,   850,  1635,  1369,
     850,   850, -2502, -2502,   -42,   268,  2037,  2039, -2502, -2502,
   -2502, -2502, -2502,   -42, -2502, -2502, -2502,   850, -2502, -2502,
    1356,   850, -2502, -2502, -2502,   989,  2047,  2048, -2502,   850,
    2050,  1078, -2502,   499, -2502, -2502, -2502, -2502,  2051, -2502,
   -2502, -2502,  2053,  2054,  4851,  2058, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502,   -42,   499, -2502,   -42, -2502, -2502,   -42, -2502,
     -42,  2060,  2063,  4851,  2064, -2502,  2066, -2502, -2502,   850,
   -2502, -2502,   644,    73, -2502,   644,   644,   644,   644,   644,
    2061,   644,   644,    73, -2502, -2502, -2502, -2502, -2502,  2068,
   -2502, -2502,    73,   644,   644,   644,   644,   644,  2069,   644,
     644,    73,   644, -2502, -2502, -2502, -2502, -2502,    73, -2502,
   -2502,  2070,   644,   644, -2502, -2502, -2502, -2502, -2502,    73,
   -2502, -2502,  2071,   644, -2502,    73,  2072, -2502,    73, -2502,
   -2502,    73, -2502, -2502,   441, -2502,  4289,   499, -2502, -2502,
    2073,   441,   850, -2502, -2502,   441,   850, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502,   850,   850,   499, -2502,
   -2502,  2075,   441,   850,  1356, -2502, -2502, -2502,   499, -2502,
     850, -2502,  1356, -2502,   499,   499, -2502,  4851,  1369, -2502,
     850,  2076,  2076,   850,   850,  2076,  1369,  2076, -2502,  4851,
    2362,  2077,  2079,  2080,  2081,  2082,  2084, -2502,   268,  1369,
    2076,  2076,   850,   850,  1369,   850,   850,   850,   850,   850,
   -2502,  1356,   850,  2085, -2502, -2502,   850,  2076,   268,    17,
   -2502,  2086,   268, -2502, -2502, -2502,  2087,   850, -2502,  2089,
    2091,  1984,   850, -2502, -2502, -2502,  2092,   108,  4851, -2502,
   -2502, -2502, -2502, -2502, -2502,  2093,   108,  4851, -2502,   850,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502,    73, -2502, -2502,
     644,    73, -2502, -2502, -2502, -2502, -2502, -2502,    73, -2502,
   -2502,   644, -2502,   644,    73, -2502, -2502,   644,    73, -2502,
   -2502,    73, -2502, -2502,   850,   499, -2502, -2502,  4289,  4851,
     850,  4851,   850, -2502, -2502, -2502,  4289,  4851,   850, -2502,
   -2502,  4851, -2502, -2502, -2502,   499, -2502,  2095, -2502, -2502,
   -2502,  1369,   850, -2502,  2096, -2502, -2502,   441,  2097, -2502,
    2099, -2502, -2502, -2502, -2502, -2502,  2100, -2502, -2502,  1369,
     850,  2101, -2502, -2502,   850,  4851, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502,    17,  1777,  1825, -2502, -2502,  2103,  2104,
   -2502,  2078,  2106,   123,  4851, -2502, -2502, -2502, -2502,  4851,
   -2502, -2502,  2107,   644, -2502, -2502,   644, -2502, -2502,   644,
   -2502,   644, -2502,  5209, -2502,   499, -2502,   499,   850,   499,
    2108,   499, -2502,   499,   850,   499,   850, -2502, -2502, -2502,
   -2502,  2109, -2502,   850, -2502, -2502,  2110, -2502,   850, -2502,
   -2502, -2502,  2112,   850, -2502, -2502, -2502,   441, -2502, -2502,
   -2502,  1777, -2502,  1803,  1772,  1825, -2502,  2113,  2114,  2116,
   -2502, -2502, -2502, -2502,   462,   462,   441,   441, -2502, -2502,
   -2502, -2502, -2502,   499, -2502, -2502,  2118, -2502,  4289, -2502,
   -2502,  2119, -2502,  1369, -2502, -2502,  1369,   850, -2502, -2502,
     850, -2502,  1369,   850, -2502,  4851, -2502,  1803, -2502,   268,
   -2502,  2120,  2121, -2502,   850,   850,   108,   108,  2122,  4289,
     441, -2502,  4289, -2502, -2502,   850,  2124, -2502,   850,   499,
   -2502, -2502, -2502,  2126,   850,   850, -2502, -2502, -2502,   441,
   -2502, -2502,   441, -2502, -2502,  2125, -2502, -2502,  2128, -2502,
   -2502,  2129,  2130, -2502, -2502,  1369, -2502,  1369, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2502, -2502,    -4, -2502,   316, -2502, -1509,  -928,  1567, -2502,
     711,  -331,  1164,   -46,   851, -1654,  1702,  1542,  -863, -1910,
    -887,  1769,   812, -2502, -1222, -2502, -2366, -1132, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502,  -552,  -484, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -1451, -2502, -2502, -2502, -2502, -2502,  -643, -2502, -2502,
   -2502, -2502, -2502, -2502,    49, -2502, -2502, -2502, -2502,  -155,
    -653,  -255,  -519, -2502, -2502, -2502, -2502,  -579,  -574, -2502,
   -2502, -2501, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502,  1412, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502, -2502,
   -2502, -2502, -2502, -2502, -2502, -2502
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1242
static const yytype_int16 yytable[] =
{
      70,  2042,  1894,  2044,   347,   983,   109,   860,   107,  1576,
    1504,  1581,   772,  1096,  1245,  1246,  1247, -1097,  1070,  1073,
     890,    67,    68,  1966,  1109,    67,    68,   376,   636,   289,
      67,    68,   408,   109,   258,    80,   311,  1611,  1612,  1613,
      67,    68,    67,    68,   775,   341,  1486,  1692,   352,  1065,
     268,  1128,   984,  1745,   367,  1194,    67,    68,   373,   624,
     386,   380,   413,  1469,   619,   383,   385,  1409,   745,   394,
    1915,    81,   400,   404,   610,  1329,   407,    67,    68,  1360,
     411,   112,  1363,   615,   585,   412,   304,   269,  1100,  1720,
    1356,  1916,    67,    68,  1917,   259,    67,    68,   425,  1394,
     434,   435,   439,   441,  1864,  1918,    67,    68,   109,   293,
    1075,  1716,   839,  1475,  1076,   572,  1343,   260,  1110,   445,
     114,  1129,   977,  1253,  1111,   842,    67,    68,  1919,   545,
      54,   109,  1411,  1702,   598,    57,   319,  2327,  1324,   109,
    2655,    82,  1158,  1721,  1481,  1920,    79,   114,    55,   846,
     160,  2337,  2338,  2339,   457,  1867,  2341,  1470,  2343,  2344,
      67,    68,  2346,  2347,  2348,  1717,   261,  2350,  2351,  1707,
     625,  2354,   886,  2356,  2357,   219,  2359,   305,   490,   985,
    2660,   891,  1882,   511,  1077,   320,  1102,  1642,    67,    68,
     978,   220,  1865,   748,    67,    68,   616,   102,  1722,  1482,
     599,   751,   117,  1130,  1078,    67,    68,  1884,   118,   119,
    1159,  1344,  2758,  1195,   309,   379,   103,   573,   546,  1325,
     321,  1494,   114,    83,   112,  1887,    67,    68,  1718,   117,
    1357,  1476,   847,  1254,   568,   118,   119,   120,   177,   600,
    1066,  1866,   617,  1868,   626,   114,  1412,   387,   986,   695,
     559,  1467,   270,   114,    67,    68,  2780,   987,   643,   644,
    1693,   611,   586,  1746,  1317,   271,  1079,   104,   409,  1131,
     377,    84,   109,   679,   274,   390,   275,   601,    67,    68,
     414,   681,   684,  1487,   687,   691,   637,   693,   773,   988,
    2435,   122,  1869,  2439,   627, -1097,   109,   703,  2443,   620,
     388,   401,  2444,  1505,   117,   712,   714,  1488,   310,  2721,
     118,   119,  1436,  1471,  1112,  1495,  1967,   628,   122,  1067,
     776,   892,  2460,    69,   262,   340,   272,   117,   757,   758,
     763,   162,   765,   118,   119,   117,   768,   769,   239,   351,
     152,   118,   119,   264,   153,   154,  1703,   781,   783,   105,
     296,   784,   785,   786,   787,   788,   789,   790,   791,   792,
    1080,  1124,  1101,   793,   949,   950,  1479,   152,   796,   798,
     263,   153,   154,  1048,   322,  1697,   799,  1103,   560,   800,
     120,  1661,  1708,  2656,  1498,   391,   114,  1921,  1665,   372,
     396,   276,   306,   122,   402,  1883,   809,   810,   704,   294,
    2786,  2787,   336,   814,   815,   816,  1643,   817,   960,   295,
     114,   951,  1945,  2533,  1049,   307,   122,   961,   962,  2722,
    1885,   824,    86,  1950,   122,   825,  1536,  1186,   392,   393,
     830,   831,   832,   833,   834,   835,   279,   836,  1888,   106,
     840,   841,   152,  2540,  1669,  1468,   153,   154,   754,   569,
    2000,  1437,  1149,   843,   801,  1311,  1104,  1549,   248,   741,
     256,   483,   488,  2723,   963,   152,   484,   403,   117,   153,
     154,  1496,   570,   152,   118,   119,   446,   153,   154,   459,
     460,   461,   462,   463,   464,   465,  1863,   716,   466,   467,
     468,   469,   117,   561,   594,   277,   112,  1840,   118,   119,
    1843,  1489,   485,   705,   735,   397,  1233,   872,   874,   422,
    1150,    67,    68,  1879,  1698,   723,    67,    68,   802,  1438,
    1154,   337,  1433,  1672,  1673,   882,   486,  2587,    67,    68,
     865,   266,   742,   303,  1048,   423,  1908,   595,   952,   953,
     937,  1050,   849,    87,   398,   717,  1151,   447,  2595,   325,
    1249,  1461,   903,   436,   349,  1051,  1052,   122,  2600,    67,
      68,  1439,   736,  1069,  2603,  2604,    88,   448,   449,   450,
      89,   487,  1106,   725,   451,  1049,   641,   642,  1155,   933,
     974,   122,  1699,   354,   366,   365,   803,   452,    67,    68,
     866,   964,   965,   453,  1072,   850,  1674,   562,   857,   993,
     338,   298,  1133,   686,   454,  1689,   152,   954,  1695,   369,
     153,   154,   112,   948,   488,   489,   955,   956,   370,    90,
     497,  1048,   755,   437,  1700,   371,   743,   375,   498,   416,
     152,  1299,  1160,   554,   153,   154,  1434,   858,  1719,   992,
     596,  1378,  1165,   746,   749,   752,  1053,  1054,   957,  1728,
    1379,  1380,   120,  1577,   406,    91,  1068,  1152,  1709,  1081,
     966,   575,  1049,    92,    93,  1462,   718,  2532,   804,   967,
     968,   576,  1134,   805,   969,  2674,  1473,  1116,  1117,  1118,
    1119,   418,  1474,  1120,   112,  1122,   420,  1123,  1704,  1125,
    1161,  1554,   719,   555,  1300,  2686,  1304,  1381,   577,   299,
    1166,   970,  1050,  1555,  1792,   438,   442,   382,  1583,   737,
    1725,  1578,  1319,  1793,  1794,   455,  1051,  1052,  1301,  1690,
     731,   458,  1696,   853,  1187,  1156,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,  1135,  1175,  1176,  1177,  1178,  1179,
    1795,  1180,  1182,  1184,  1185,  2734,  1584,  2735,   120,  2737,
     300,  2739,   578,  2740,   355,  2742,  1197,  1198,   470,   301,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1050,
    1560,  1041,  1211,  1212,  1302,  2045,   471,  1589,  1710,  1339,
     356,   357,  1705,  1051,  1052,    67,    68,  1053,  1054,   579,
    1059,  1218,  1219,  1220,   358,  1597,   854,  1042,   481,  1601,
    1136,    67,    68,  2768,  1382,  1383,  1305,  1340,  1228,  1229,
    1230,  1097,  1232,    58,  1234,  1803,  1235,  1162,  1758,  1759,
     120,   280,   759,  1303,  1804,  1805,   550,  1167,  1214,   522,
    1726,   493,  1711,    67,    68,  1590,  1215,  1238,  1579,  1240,
     359,   360,   630,    67,    68,  2304,  2305,  2306,   495,  2799,
    1243,   548,   580,  1598,    59,  1306,  2105,  1602,  1250,   631,
    1060,    67,    68,  1252,   291,  1760,   549,  1796,  1797,   855,
     558,  1806,    60,  1384,  1053,  1054,  2118,   564,  1266,  1268,
    1307,  1098,  1385,  1386,  1727,   565,  1309,  1387,  1312,  1315,
     567,  2155,   760,  1585,  2158,  1320,   531,  1662,   682,  1636,
    1326,    61,  2166,   581,   696,  2169,  1369,   944,   551,  1327,
     532,   819,   820,  2177,  1388,  2206,  2180,   240,    62,   590,
     780,   584,    63,  2187,  1335,   904,   905,  1043,  1713,    67,
      68,  2216,   533,    64,  1714,   632,  1798,    67,  1181,   552,
     697,   249,  1061,  1314,   241,  1799,  1800,   444,   613,    72,
    1801,   534,   614,   361,    73,   362,   592,   281,  1188,  1189,
    2235,  1084,   282,  1099,   283,   618,  1107,   535,   683,   622,
     536,  1408,    67,    68,   761,  1814,  1044,  1802,   634,  1399,
     639,   906,  1591,  1030,  1815,  1816,   640,   907,   698,   645,
      74,  1472,  1761,  1762,   163,   537,   538,  1031,  1807,  1808,
    1599,  1045,   677,   762,  1603,   678,  1032,  1191,  1192,   164,
     680,   165,  1497,   242,    75,   694,  1033,   701,   512,  2618,
     520,  1503,   525,   529,    67,    68,   250,   243,  2526,   702,
     556,  1817,   363,   797,   908,  1531, -1239,  1532,   251,    67,
    1619,   166,  1533,  1534,  1535,   583,  1034,  1400,   539,   167,
     909,   707,  1541,   709,   326,  1542,   540,  1545,   721,    76,
     715,  1763,   910,   222,   327,  1035,   739,  1809,   911,   912,
    1764,  1765,   252,  1547,   913,  1548,  1810,  1811,   740,  1551,
    1552,  1812,  2690,   244,    67,  1265,    86,    65,   223,   766,
     699,   328,   767,  1558,  1559,  2295,   770,   313,  1561,  1562,
    2701,   778,  1766,    77,  1563,   168,  1564,   794,  1813,  1566,
    1036,  1567,   795,   541,   542,  1222,  1401,  1402,   253,   689,
    1623,   224,   827,   828,   245,   914,   821,  1927,   225,   808,
    1403,   254,  1778,  1779,   246,  1570,  1571,   811,   226,   227,
      67,    68,  1539,  1540,   915,   228,  1037,   812,   916,  1210,
     917,  1614,  1615,  1616,  1617,   169,  1618,  1620,  1818,  1819,
    1622,  1900,  1901,  2326,   813,   329,   818,   229,   823,  1404,
    1038,   170,   171,   918,   919,  1628,   426,   290,   172,  1780,
     173,   920,   314,   230,  2342,   543,  1631,   428,  1633,  1634,
    1635,  1637,  1442,  1985,   315,  1640,  1641,   844,   231,   921,
     845,   852,   330,  1649,  1680,   174,   232,    87,   861,  1039,
    1654,  1040,   889,   863,  1655,  1656,  1657,  2774,   868,  1443,
    2380,   870,  1444,  2777,   884,  1663,   233,  1820,  1666,  2389,
      88,   894,   899,    96,  2041,   900,  1821,  1822,  2398,  1676,
    2610,  1823,  1678,  2613,   331,  2615,   901,    67,    68,    97,
     902,   925,  1445,   927,   929,   922,   931,   934,  2627,  2628,
     443,   234,  1572,  1573,   939,   332,   943,   935,  1824,   945,
     175,   946,  1681,   838,   316,  2642,  2811,   947,  2812,  1446,
     958,   959,  1447,    90,   710,  1730,   971,   317,  1737,  1574,
    1731,  1738,  1739,   979,  1740,   981,  1741,    67,    68,  1856,
     333,   982,  1743,   989,  1744,   990,  1781,  1782,   991,   235,
    2486,  1750,  1047,    67,    68,  1862,   334,  1406,  1407,    91,
     236,    67,    68,  1860,    98,  1056,  2499,    92,    93,  1058,
     509,  2504,   516,   519,  1063,   524,   528,  1064,  1500,    67,
      68,  1682,  1683,  1506,  1113,   426,   427,   428,  1507,   237,
    1114,  1115,    67,    68,   711,  1684,  1406,  1407,  1732,    67,
      68,  1905,  1126,   588,    99,  1138,   887,  1139,  1140,  1508,
    1509,  1141,  1510,  1511,  1142,  1783,   723,  1143,  1257,  1144,
     603,   608,  1145,  1512,  1784,  1785,  1857,  1147,  1859,  1861,
    1408,  1164,  1546,  1448,  1685,  1513,  1514,   100,   924,  1169,
    1146,  1170,  1553,  1515,  1171,  1190,  1516,  1172,  1173,  1174,
    1872,  2518,  1193,  1216,  1875,  1209,  1786,  1408,  1199,  1213,
    2522,  1217,  1449,  1517,  1221,  1223,  1224,  1733,  1734,  1518,
    1519,   724,   688,  1520,   725,  1236,  1237,  1258,  1904,  1906,
    1408,  1735,    67,    68,  1878,  1259,  1406,  1407,  1914,  1262,
     708,  1263,  1925,    67,    68,  1907,  1264,  1406,  1407,  1932,
    1310,  1322,  1316,  1318,  1328,  1332,  1351,  1333,  1336,  2539,
     726,  1337,  2541,  1939,  1338,  2542,  1346,  2543,  1941,  1347,
    1736,  1348,  1943,  1349,  1946,  1947,  1352,  1949,  1951,  1952,
    1353,  1955,  1521,  1354,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1968,  1970,  1971,   727,  1361,  1973,  1974,  1975,
    1976,  1355,  1362,  1410,  1364,  1825,  1826,  1982,  1983,  1646,
    1647,  1365,  1986,  1987,  1988,  1371,  1413,  1990,  1991,  1373,
    2606,  1374,  1376,  1389,  1390,  2122,  2123,  1391,  2614,  1993,
    1994,  1392,  1995,  1996,  1522,  1395,  1466,  1396,  1397,  1523,
    1435,  2626,   728,  1414,  1440,   729,  2631,  1460,  1441,  1463,
    2238,  1464,  1827,  1465,  1524,  1480,   822,  1483,  2131,  2132,
    1484,  1485,  1490,  1525,  1491,  2242,  2243,   829,   730,  2245,
    1493,   731,  2124,  1492,  1499,  2249,   837,  2251,  1501,  1502,
    1565,  1538,   732,  2016,  2017,  2140,  2141,  1450,  2019,  1550,
    1526,  1527,   472,  2021,  2024,  1556,  2026,  2027,  2028,  1557,
    2029,  2030,  1569,  2032,  1568,  2133,  2035,  2036,  1582,  1587,
     473,  1528,  1588,  1593,  1451,  2039,  1594,  1452,  1595,  1596,
    1453,  1605,  2043,  2300,  1606,  1607,  1610,   474,  2048,  2049,
    1608,  1609,  2142,  1625,  1626,  1627,  2051,  1639,  1638,   475,
    1645,  1650,  2052,  1632,  1651,   873,  1652,  1454,   875,   876,
    1659,  1664,  1667,  1671,  1677,  1529,   476,  -445,  1668,  1679,
     477,   880,  1688,  1701,  2312,  1715,   883,  1691,  1706,  1712,
    1723,   478,  1748,  1729,  1455,   895,   897,  1456,  2080,  1828,
    1829,  1724,  1239,  1742,  1749,  1754,  1773,  1776,  1834,  1787,
    1789,  1853,  1791,  1835,  1836,  1837,  1841,  1858,  1842,  2125,
    2126,  1844,  1845,  1846,  1849,  2094,  2095,  1852,  1870,  1874,
    2097,  1880,   479,  1881,  1886,  1889,  2100,  1890,  1891,  1871,
    1892,  1893,  1873,  1895,  1896,  1897,  1877,  1898,  1899,  1902,
    1923,  1999,  2134,  2135,  1942,  1342,  1979,  1992,  1997,   940,
     941,   942,  1944,  1998,  1948,  1956,  1957,  1903,  1830,  1972,
    2001,  2002,  2003,  1909,  2004,  2005,  2008,  1831,  1832,  2143,
    2144,  1924,  2006,  2007,  2009,  1928,  2010,  1393,  2127,  2011,
    2012, -1241,  2013,  1933,  1934,  2014,  2015,  2128,  2129,  2031,
    2033,  2034,  2037,  2050,  1940,  2773,  2053,  2096,  1457,  1833,
    2055,  2056,  2057,  2058,  2089,  2090,  2091,  2092,  1083,  2098,
    2099,  2136,   692,  2102,  2103,  2104,  2106,  2107,  2111,  2130,
    2137,  2138,  2108,  2113,  2114,  2115,  2119,  1458,  2120,  2149,
    2121,  2150,  2151,  2201,  2152,  2202,  2156,  2204,  2145,  1408,
    2157,  2160,  2159,  2161,  2162,  2163,  2167,  2146,  2147,  1478,
    2168,  2171,  2139,  1459,  2170,  1408,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2172,  2173,  2174,  2178,   779,
    2179,  2315,  2181,  2182,  2183,  2184,  2188,  2189,  2192,  2148,
    2231,  2190,  2233,  2193,  1408,  2195,  2464,  2465,  2466,  2240,
    2196,  2470,  2198,  2472,  2473,  2205,  1085,  2477,  2207,  2479,
    2211,  2241,  2215,  2226,  1086,  2227,  2490,  2228,  2247,  2229,
    1087,  1544,  2230,  2513,  2234,  2287,  2292,  2293,  2296,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2302,
    1088,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,  2316,  2288,  2317,  2289,  2290,  2291,  2318,
    2321,  2491,  2329,  1089,  2332,  2333,  2334,  2335,  2361,  2524,
    2362,  1090,  2301,  2363,  2364,  2366,  2370,  1226,  2368,  2373,
    2652,  2375,  2714,  2376,  2377,  2381,  2382,   826,  2383,  1231,
    2384,  2385,  2386,  2390,  2391,  2492,  2392,  2393,  2394,  2395,
    2399,  2400,  2307,  2401,  2408,  2308,  2411,  2309,  1091,  2311,
    2419,  2422,  2313,  2425,  2314,  2426,  1092,  2428,  2431,  2432,
    2433,  2319,  2320,  2436,  2442,  2446,  1241,  1242,  2324,  2463,
    2325,  2520,  2493,  2521,  2328,  2494,  2495,  2330,  2496,  2498,
    1630,   871,  2528,  2529,  2531, -1110,  2534,  2535,   877,  2536,
    1261,   878,  2714,  2538,  2544,  2557,   879,  1093,  2545,  2547,
     881,  2548,  2561,  2568,  2574,  2578,  2581,  2588,  1094,  2596,
    2608,  2266,  2619,  2620,  2719,  2621,  2622,  2623,  2624,   807,
    2639,  2646,  2648,  1095,  2650,  2651,  2369,  2654,  2659,  2687,
    2693,  2725,  2696,  2697,  2698,  2703,  1670,  1331,  2717,  2718,
    2720,  2728,  2738,  2746,  2497,  2749,  2752,  2759,  2761,  2762,
    2763,  1687,  2769,  2772,  2711,  2782,  2783,  2788,  2796,  2805,
     938,  2800,  2807,  2599,  2809,  2810,  2760,  2756,  1148,     0,
       0,  2602,     0,     0,     0,     0,     0,     0,  1751,  1752,
    1753,     0,  2434,     0,     0,     0,     0,     0,  1755,  1756,
    1757,     0,     0,     0,     0,  1768,  1769,  1770,     0,     0,
    1771,  1772,     0,  1774,  1775,     0,     0,     0,     0,     0,
    2637,     0,  1477,     0,     0,     0,     0,     0,     0,  2210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2440,     0,     0,  1847,  1848,     0,     0,  1850,  1851,     0,
       0,     0,     0,  2447,  2448,  2449,  2450,  2451,  2452,  2453,
    2454,  2455,  2456,  2457,     0,  2236,     0,     0,     0,  2461,
    1121,     0,     0,  2616,  1537,     0,  2467,  1127,     0,  2471,
    2764,  2765,     0,     0,  1543,  2478,     0,     0,  2480,  2481,
    2482,  2483,  2484,  2485,  1408,  2487,  2488,  2489,     0,  2640,
    1855,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1408,  2500,  2501,  2502,  2503,  1408,  2505,  2506,  2507,  2508,
    2509,  2510,     0,  2512,     0,  1408,  2516,  2517,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2523,     0,     0,     0,  2525,     0,     0,
       0,  2527,     0,     0,     0,  2530,     0,     0,     0,  1911,
       0,     0,  1913,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1930,     0,     0,     0,     0,     0,     0,     0,
    1936,     0,     0,     0,     0,     0,  1621,  1938,     0,     0,
       0,     0,     0,     0,  2688,  2689,     0,     0,  2692,     0,
    2694,     0,     0,  1629,  1225,  2549,     0,     0,     0,     0,
       0,  1227,  2699,  2700,     0,     0,     0,  2704,  2705,     0,
       0,  2708,     0,     0,     0,     0,  2709,  2710,     0,     0,
       0,     0,     0,     0,     0,     0,  1653,     0,     0,     0,
       0,     0,  1415,     0,     0,     0,     0,  1660,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1244,     0,     0,
       0,     0,  1248,     0,     0,  1251,     0,     0,  1416,     0,
       0,     0,  2744,     0,  1686,  2745,     0,  1260,  2590,  1694,
    2748,     0,  2592,     0,     0,     0,  2751,     0,     0,     0,
       0,  2754,  2593,  2594,     0,     0,     0,     0,     0,  2598,
       0,  1417,     0,     0,     0,     0,  2601,  1418,     0,     0,
       0,     0,  1419,     0,  1408,     0,  2607,     0,  2023,  2611,
    2612,     0,  1408,     0,     0,     0,     0,     0,     0,     0,
       0,  1420,     0,     0,     0,  1408,     0,     0,  2629,  2630,
    1408,  2632,  2633,  2634,  2635,  2636,     0,     0,  2638,     0,
    1421,     0,  2641,     0,     0,     0,     0,     0,     0,  2794,
       0,     0,  2797,  2649,     0,     0,  1422,  2262,  2653,     0,
       0,     0,     0,     0,     0,  1398,     0,     0,  2263,     0,
       0,  2806,     0,  2065,  2808,  2662,     0,     0,     0,     0,
       0,     0,     0,  2071,     0,  1423,  2813,  2814,  2076,     0,
       0,     0,     0,  1085,  2264,     0,  2101,     0,     0,     0,
       0,  1086,     0,  1854,     0,     0,     0,  1087,     0,  2109,
    2673,     0,     0,     0,     0,     0,  2678,     0,  2680,  2112,
       0,  1424,     0,     0,  2684,     0,     0,  1088,     0,     0,
       0,  2265,     0,  1876,  1425,     0,     0,  1408,  2691,     0,
       0,  2519,     0,     0,     0,  1426,     0,     0,     0,     0,
    1089,     0,     0,     0,     0,  1408,  2702,  2733,  1090,     0,
    2706,     0,  1910,     0,     0,  1912,     0,     0,     0,     0,
       0,     0,  1427,     0,     0,  1929,  1931,     0,     0,  2724,
       0,     0,     0,  1935,  1428,     0,  1429,  1430,     0,     0,
    1937,  2197,     0,     0,     0,  1091,     0,     0,     0,     0,
       0,     0,     0,  1092,  2736,     0,     0,     0,     0,     0,
    2741,     0,  2743,     0,     0,     0,     0,     0,     0,  2747,
       0,     0,     0,     0,  2750,     0,  1431,     0,     0,  2753,
    1977,     0,     0,  1980,  1981,     0,     0,     0,     0,     0,
       0,     0,     0,  1989,  1093,     0,     0,     0,     0,     0,
       0,     0,     0,  2209,     0,  1094,  2213,     0,     0,  1624,
       0,     0,     0,     0,  1359,     0,     0,     0,     0,  1408,
    1095,     0,  1408,  2775,     0,     0,  2776,     0,  1408,  2778,
    2266,     0,  2267,     0,     0,     0,     0,     0,     0,     0,
    2784,  2785,     0,     0,     0,     0,     0,     0,  1648,     0,
       0,  2795,     0,     0,  2798,     0,     0,     0,     0,     0,
    2801,  2802,     0,  1658,  2018,     0,     0,     0,     0,     0,
       0,  2022,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1408,     0,  1408,     0,     0,  2268,     0,     0,  2038,
       0,     0,     0,     0,  2625,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2047,     0,     0,     0,     0,
       0,     0,     0,     0,  2643,     0,     0,     0,  2647,     0,
       0,     0,     0,     0,  2054,     0,     0,     0,     0,  2059,
       0,     0,  2061,     0,  2062,  2063,  2064,  2066,     0,     0,
    2068,     0,     0,  2069,     0,     0,  2070,  2072,     0,  2073,
    2074,  2075,  2077,     0,  2078,  2079,     0,     0,     0,     0,
    2081,  2082,  2083,     0,  2084,  2085,     0,     0,     0,     0,
    2086,  2087,     0,     0,     0,  2088,     0,     0,     0,     0,
    2093,     0,     0,  2331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2371,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   109,     0,  2367,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   110,  2403,  2404,  2405,  2406,  2407,     0,  2409,  2410,
       0,     0,     0,  2414,  2415,  2416,  2417,  2418,     0,  2420,
    2421,     0,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,  1926,
    2200,     0,     0,     0,  2203,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2208,     0,     0,  2212,
       0,     0,     0,   113,     0,   285,     0,     0,     0,     0,
       0,     0,     0,  2438,     0,     0,     0,     0,     0,     0,
     114,     0,   112,     0,     0,     0,     0,     0,     0,  2232,
       0,     0,     0,     0,     0,  2781,     0,     0,     0,  1978,
       0,     0,  2459,     0,     0,  1984,     0,     0,     0,     0,
       0,     0,  2469,     0,     0,     0,     0,   115,  2476,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1767,     0,     0,     0,     0,     0,     0,     0,     0,
    2286,     0,     0,  1777,   116,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,   118,   119,
       0,  1838,  1839,     0,   120,     0,     0,     0,     0,   121,
       0,   115,     0,     0,     0,  2020,     0,     0,     0,     0,
       0,  2025,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2550,     0,     0,  2552,  2553,  2554,
    2555,  2556,     0,  2558,  2559,  2040,     0,     0,   286,     0,
       0,     0,  2046,  2323,     0,  2563,  2564,  2565,  2566,  2567,
       0,  2569,  2570,     0,  2572,     0,     0,     0,   120,     0,
       0,     0,     0,   121,  2575,  2576,     0,     0,  2060,     0,
       0,   122,     0,   287,     0,  2579,  2067,     0,     0,     0,
       0,     0,     0,     0,  2353,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,     0,
     152,     0,     0,     0,   153,   154,     0,  2586,     0,     0,
       0,     0,   288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2437,     0,     0,  2441,
       0,     0,  2664,     0,     0,     0,     0,     0,     0,  2445,
       0,     0,     0,  2667,     0,  2668,     0,     0,     0,  2670,
       0,     0,     0,     0,     0,  2458,  2199,     0,  2462,     0,
       0,     0,     0,     0,     0,  2468,     0,     0,     0,     0,
    2474,  2475,     0,     0,     0,     0,     0,     0,  2214,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2676,
       0,     0,     0,     0,     0,     0,     0,  2682,     0,     0,
       0,     0,  2237,     0,  2239,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2244,     0,  2246,     0,  2729,     0,  2248,  2730,  2250,
       0,  2731,     0,  2732,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2537,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2294,
       0,     0,  2298,  2299,     0,     0,     0,  2546,     0,     0,
       0,  2303,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2110,     0,     0,     0,     0,     0,     0,     0,
    2116,  2117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2310,  2153,  2154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2164,  2165,   646,   647,
    2322,     0,     0,     0,     0,     0,     0,  2175,  2176,  2771,
       0,     0,     0,     0,     0,     0,     0,  2185,  2186,     0,
    2585,  2336,     0,  2191,     0,     0,  2340,     0,     0,     0,
       0,     0,  2345,  2194,     0,     0,     0,  2349,     0,     0,
    2790,  2352,     0,  2793,  2355,     0,     0,  2358,     0,  2360,
       0,     0,     0,     0,   648,  2365,     0,     0,     0,     0,
     649,  2605,     0,     0,     0,     0,     0,   650,     0,   651,
       0,     0,     0,  2617,   652,     0,     0,   653,     0,     0,
       0,     0,     0,   654,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   655,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,     0,     0,     0,   657,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2658,   658,     0,     0,     0,     0,     0,     0,
       0,  2661,     0,     0,     0,     0,     0,    67,    68,     0,
       0,     0,   659,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,   660,     0,
       0,     0,     0,     0,     0,     0,     0,   661,   662,     0,
       0,     0,  2675,  2677,     0,  2679,     0,    67,    68,     0,
    2681,  2683,     0,     0,     0,  2685,     0,   663,     0,     0,
     112,     0,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   527,   664,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2707,
       0,   665,   110,   666,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   667,     0,  2726,     0,
       0,   668,     0,  2727,     0,     0,     0,   669,  2511,     0,
       0,     0,     0,     0,   670,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   671,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   672,   673,     0,   674,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2372,     0,     0,     0,   113,     0,     0,     0,     0,     0,
    2374,     0,     0,     0,  2378,  2379,     0,     0,     0,     0,
       0,     0,  2770,  2387,  2388,   896,     0,     0,   675,   115,
       0,     0,  2396,  2397,     0,     0,     0,     0,  2402,  2779,
     110,     0,     0,     0,     0,     0,   120,     0,  2412,  2413,
       0,   121,     0,  2789,     0,     0,  2792,     0,   115,  2423,
    2424,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2427,     0,     0,     0,     0,     0,     0,     0,     0,  2429,
       0,  2430,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     0,     0,     0,     0,  2584,     0,     0,     0,
       0,     0,     0,  2589,     0,     0,     0,  2591,     0,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
     121,     0,   113,     0,  2597,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2551,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2560,     0,     0,     0,     0,     0,     0,  2695,
       0,  2562,     0,     0,     0,     0,     0,     0,     0,     0,
    2571,     0,     0,     0,     0,     0,     0,  2573,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2577,     0,
       0,     0,     0,     0,  2580,     0,     0,  2582,     0,     0,
    2583,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2755,
       0,     0,     0,     0,     0,     2,     0,     0,     3,     0,
       4,     0,     0,     0,     0,     0,     0,   343,  2766,  2767,
       0,     0,     0,     5,   344,     0,     0,     0,     6,     7,
       0,     8,     9,    10,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,     0,     0,     0,     0,     0,     0,   110,    15,
      16,     0,  2791,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2663,     0,     0,     0,
    2665,  2803,     0,     0,  2804,     0,     0,  2666,    17,   110,
       0,     0,     0,  2669,     0,   112,     0,  2671,     0,    18,
    2672,     0,     0,    19,     0,     0,    20,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   500,   501,     0,    25,   502,
     113,    26,    27,    28,   604,   110,    29,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,   503,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,     0,    32,    33,    34,     0,     0,     0,
       0,     0,     0,     0,   605,     0,     0,     0,    35,     0,
       0,     0,     0,     0,   115,     0,    36,     0,     0,    37,
       0,     0,    38,     0,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,   115,     0,   113,     0,    43,
       0,     0,     0,     0,     0,     0,     0,   345,   504,   346,
     606,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,   120,     0,     0,     0,   505,   121,    46,     0,    47,
       0,     0,     0,     0,     0,    48,     0,     0,    49,    50,
       0,     0,     0,     0,   506,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,   507,     0,     0,     0,     0,
       0,     0,     0,   121,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,   508,     0,     0,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   994,
     995,   996,     0,     0,     0,     0,     0,     0,     0,     0,
    1269,  1270,  1271,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   997,   998,     0,
       0,   999,     0,     0,  1000,     0,     0,     0,  1272,  1273,
       0,  1001,  1274,   110,     0,  1002,     0,     0,     0,  1275,
       0,     0,  1276,  1003,  1004,     0,  1277,     0,     0,     0,
       0,  1005,  1006,     0,  1278,  1279,     0,     0,     0,     0,
       0,     0,  1280,     0,     0,     0,     0,     0,  1007,     0,
     112,     0,     0,     0,  1008,     0,     0,  1009,  1010,     0,
       0,  1011,     0,     0,   110,     0,     0,     0,  1281,  1282,
       0,     0,  1283,     0,     0,     0,     0,     0,  1012,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1284,
       0,     0,   110,     0,     0,   113,     0,  1013,     0,     0,
       0,     0,     0,     0,   514,     0,     0,     0,  1285,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1014,     0,     0,     0,     0,     0,     0,     0,     0,  1330,
     110,  1286,     0,     0,     0,     0,     0,     0,     0,     0,
    1287,     0,  1015,     0,     0,     0,   113,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1016,     0,  1017,     0,   113,     0,     0,  1018,  1019,     0,
       0,  1288,     0,  1289,     0,     0,     0,     0,  1290,  1291,
       0,  1020,  1021,     0,     0,     0,     0,     0,     0,     0,
     115,  1022,  1023,  1292,     0,     0,   120,     0,     0,     0,
       0,   121,   113,  1293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1024,   115,  1025,
       0,     0,     0,     0,     0,     0,     0,     0,  1294,     0,
    1295,  1026,     0,  1027,     0,     0,     0,     0,     0,  1028,
    1296,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1297,     0,   121,     0,     0,     0,   115,   518,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1029,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,  1298,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   515,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   179,     0,     0,   180,     0,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   182,     0,
     183,   184,   185,     0,     0,     0,     0,     0,     0,     0,
     186,     0,   187,     0,     0,     0,     0,   188,     0,   189,
     190,   191,     0,     0,     0,     0,   192,     0,   193,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   195,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,     0,     0,   198,     0,   972,
       0,   199,     0,     0,   200,   973,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   201,   202,     0,     0,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   204,     0,
       0,  1367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   205,   206,     0,     0,     0,     0,     0,
       0,   207,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,     0,
       0,     0,     0,   213,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,   215,     0,   216,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,     0,     0,     0,   217,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,  1368,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151
};

static const yytype_int16 yycheck[] =
{
       4,  1655,  1453,  1657,    50,    14,     4,   491,    12,  1141,
       5,  1143,     4,   666,   877,   878,   879,     0,   661,   662,
       4,     3,     4,     5,     5,     3,     4,    32,     5,    33,
       3,     4,     4,     4,     5,     4,    40,  1169,  1170,  1171,
       3,     4,     3,     4,     4,    49,     5,    21,    52,    17,
      20,    40,    61,    20,    58,    97,     3,     4,    62,     5,
       4,    65,     5,    36,     5,    69,    70,   995,    66,    73,
      27,    40,    76,    77,     4,   938,    80,     3,     4,   966,
      84,    56,   969,     6,    16,    89,    37,    57,     5,   167,
      17,    48,     3,     4,    51,    66,     3,     4,   102,   986,
     104,   105,   106,   107,   105,    62,     3,     4,     4,     5,
      36,   167,   443,   120,    40,   132,   164,    88,    99,   123,
     118,   110,    87,   131,   105,   456,     3,     4,    85,   209,
     238,     4,   120,    21,   148,    66,    50,  2047,    17,     4,
      32,   110,    87,   221,   221,   102,   278,   118,   256,   103,
      33,  2061,  2062,  2063,   158,   105,  2066,   130,  2068,  2069,
       3,     4,  2072,  2073,  2074,   221,   137,  2077,  2078,    21,
     116,  2081,     4,  2083,  2084,    83,  2086,    61,   182,   188,
    2546,   165,    21,   187,   110,    99,    17,    46,     3,     4,
     155,    99,   193,    66,     3,     4,   119,    40,   276,   276,
     214,    66,   200,   192,   130,     3,     4,    21,   206,   207,
     155,   259,  2713,   255,   192,   122,    59,   234,   298,    98,
     134,    36,   118,   192,    56,    21,     3,     4,   284,   200,
     157,   238,   186,   241,    61,   206,   207,   212,   142,   253,
     208,   242,   246,   193,   190,   118,   234,   191,   257,   295,
     201,    27,   222,   118,     3,     4,  2757,   266,   262,   263,
     234,   191,   194,   230,   917,   235,   192,   110,   240,   258,
     275,   240,     4,   277,    64,   186,    66,   291,     3,     4,
     223,   285,   286,   242,   288,   289,   263,   291,   280,   298,
    2200,   289,   242,  2203,   240,   278,     4,   301,  2208,   240,
     244,    78,  2212,   298,   200,   309,   310,    27,   286,   186,
     206,   207,    27,   286,   295,   130,   298,   263,   289,   287,
     280,   305,  2232,   286,   295,   286,   296,   200,   332,   333,
     334,    15,   336,   206,   207,   200,   340,   341,    22,   286,
     338,   206,   207,    27,   342,   343,   234,   351,   352,   192,
      34,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     286,   692,   279,   367,    14,    15,  1019,   338,   372,   373,
     341,   342,   343,    63,   288,    27,   380,   208,    66,   383,
     212,  1244,   234,   275,  1037,   296,   118,   344,  1251,   286,
      74,   181,   276,   289,   171,   234,   400,   401,   148,   295,
    2766,  2767,     4,   407,   408,   409,   265,   411,     5,   305,
     118,    61,   221,  2323,   104,   299,   289,    14,    15,   296,
     234,   425,    28,   221,   289,   429,  1069,     6,   339,   340,
     434,   435,   436,   437,   438,   439,    66,   441,   234,   282,
     444,   445,   338,  2353,     4,   221,   342,   343,    13,   276,
    1582,   166,    61,   457,    30,   204,   287,  1100,    16,    34,
     226,   186,   339,   340,    61,   338,   191,   244,   200,   342,
     343,   286,   299,   338,   206,   207,    35,   342,   343,   163,
     164,   165,   166,   167,   168,   169,  1414,    61,   172,   173,
     174,   175,   200,   181,    44,   285,    56,  1384,   206,   207,
    1387,   221,   227,   253,    61,   136,   837,   511,   512,     5,
     119,     3,     4,  1441,   166,    61,     3,     4,    94,   234,
      61,   123,   120,    24,    25,   529,   251,  2437,     3,     4,
     191,     5,   107,    88,    63,    31,  1464,    87,   188,   189,
     586,   231,   191,   149,   175,   119,   155,   106,  2458,     4,
     881,   120,   556,    40,   226,   245,   246,   289,  2468,     3,
       4,   276,   119,   253,  2474,  2475,   172,   126,   127,   128,
     176,   296,   280,   119,   133,   104,   260,   261,   119,   583,
     626,   289,   234,     0,    59,     5,   162,   146,     3,     4,
     251,   188,   189,   152,   123,   244,    97,   285,   136,   645,
     202,    70,    40,   287,   163,   120,   338,   257,   120,   262,
     342,   343,    56,   617,   339,   340,   266,   267,     5,   225,
     168,    63,   187,   110,   276,     4,   201,     5,   176,    31,
     338,    66,    61,     5,   342,   343,   234,   175,  1291,   643,
     190,     5,    61,   327,   328,   329,   336,   337,   298,  1302,
      14,    15,   212,    61,     5,   261,   660,   266,    27,   663,
     257,    37,   104,   269,   270,   234,   240,  2321,   244,   266,
     267,    47,   110,   249,   271,  2585,   256,   681,   682,   683,
     684,     5,   262,   687,    56,   689,     5,   691,   120,   693,
     119,     5,   266,    65,   129,  2605,    30,    61,    74,   168,
     119,   298,   231,    17,     5,   192,   192,   122,    61,   266,
      27,   119,   204,    14,    15,   274,   245,   246,   153,   234,
     266,     4,   234,    78,   770,   266,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   192,   759,   760,   761,   762,   763,
      61,   765,   766,   767,   768,  2675,   119,  2677,   212,  2679,
     239,  2681,   148,  2683,    22,  2685,   780,   781,   116,   248,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   231,
    1121,     4,   796,   797,   229,  1658,    66,    61,   167,   155,
      48,    49,   234,   245,   246,     3,     4,   336,   337,   185,
      40,   815,   816,   817,    62,    61,   171,    30,   117,    61,
     258,     3,     4,  2733,   188,   189,   160,   183,   832,   833,
     834,    40,   836,    12,   838,     5,   840,   266,    14,    15,
     212,   201,    40,   278,    14,    15,     6,   266,     4,    33,
     167,   278,   221,     3,     4,   119,    12,   861,   266,   863,
     108,   109,    93,     3,     4,  1997,  1998,  1999,   168,  2779,
     874,     5,   248,   119,    53,   209,  1763,   119,   882,   110,
     110,     3,     4,   887,    33,    61,    89,   188,   189,   244,
      16,    61,    71,   257,   336,   337,  1783,    66,   902,   903,
     234,   110,   266,   267,   221,   227,   910,   271,   912,   913,
     277,  1798,   110,   266,  1801,   919,    45,  1248,    40,    59,
     924,   100,  1809,   299,    54,  1812,   972,   611,    88,   933,
      59,     4,     5,  1820,   298,  1863,  1823,    88,   117,    72,
     122,    89,   121,  1830,   948,     4,     5,   160,   256,     3,
       4,  1879,    81,   132,   262,   186,   257,     3,     4,   119,
      90,    26,   192,    17,   115,   266,   267,   116,     5,   186,
     271,   100,     4,   221,   191,   223,    31,   337,     4,     5,
    1908,   665,   342,   192,   344,     4,   670,   116,   110,     5,
     119,   995,     3,     4,   192,     5,   209,   298,     5,    82,
       4,    60,   266,    66,    14,    15,     5,    66,   138,     5,
     227,  1015,   188,   189,    29,   144,   145,    80,   188,   189,
     266,   234,     5,   221,   266,     4,    89,     4,     5,    44,
       5,    46,  1036,   184,   251,     4,    99,     4,   187,  2490,
     189,  1045,   191,   192,     3,     4,   111,   198,    59,     4,
     199,    61,   300,    12,   113,  1059,     0,  1061,   123,     3,
       4,    76,  1066,  1067,  1068,   214,   129,   150,   197,    84,
     129,     5,  1076,     4,    37,  1079,   205,  1081,   119,   296,
      97,   257,   141,    19,    47,   148,     5,   257,   147,   148,
     266,   267,   157,  1097,   153,  1099,   266,   267,     4,  1103,
    1104,   271,  2611,   254,     3,     4,    28,   286,    44,   263,
     240,    74,     4,  1117,  1118,  1978,     4,    26,  1122,  1123,
    2629,     4,   298,   340,  1128,   140,  1130,     4,   298,  1133,
     193,  1135,     5,   262,   263,   819,   219,   220,   203,   288,
    1186,    77,   431,   432,   295,   204,     5,  1478,    84,     4,
     233,   216,    14,    15,   305,    42,    43,     4,    94,    95,
       3,     4,     4,     5,   223,   101,   229,     4,   227,    12,
     229,  1175,  1176,  1177,  1178,   190,  1180,  1181,   188,   189,
    1184,     4,     5,  2046,     4,   148,     4,   123,     5,   272,
     253,   206,   207,   252,   253,  1199,     9,    33,   213,    61,
     215,   260,   111,   139,  2067,   334,  1210,    11,  1212,  1213,
    1214,  1215,    22,  1544,   123,  1219,  1220,     5,   154,   278,
     262,   168,   185,  1227,    82,   240,   162,   149,     4,   292,
    1234,   294,   194,     4,  1238,  1239,  1240,  2746,   176,    49,
    2127,   168,    52,  2752,     4,  1249,   182,   257,  1252,  2136,
     172,   194,     5,    83,   176,     5,   266,   267,  2145,  1263,
    2482,   271,  1266,  2485,   227,  2487,     4,     3,     4,    99,
     194,    66,    82,    66,    66,   334,   221,     5,  2500,  2501,
     116,   217,   169,   170,     5,   248,     4,   222,   298,     4,
     305,     4,   150,   442,   203,  2517,  2805,   194,  2807,   109,
      87,     5,   112,   225,    40,  1309,    87,   216,  1312,   196,
      82,  1315,  1316,     5,  1318,     4,  1320,     3,     4,     5,
     283,     4,  1326,     5,  1328,     5,   188,   189,     4,   265,
    2258,  1335,     5,     3,     4,     5,   299,     7,     8,   261,
     276,     3,     4,     5,   174,    99,  2274,   269,   270,    17,
     186,  2279,   188,   189,     4,   191,   192,     5,  1042,     3,
       4,   219,   220,    22,    17,     9,    10,    11,    27,   305,
      17,     4,     3,     4,   110,   233,     7,     8,   150,     3,
       4,     5,     4,   219,   214,     4,   535,    97,     5,    48,
      49,     5,    51,    52,    87,   257,    61,     4,   165,     5,
     236,   237,     5,    62,   266,   267,  1410,     5,  1412,  1413,
    1414,     4,  1096,   223,   272,    74,    75,   247,   567,     5,
      87,     5,  1106,    82,     4,     4,    85,     5,     5,     5,
    1434,  2294,     4,     4,  1438,     5,   298,  1441,    12,    12,
    2303,     4,   252,   102,     4,     4,     4,   219,   220,   108,
     109,   116,   288,   112,   119,     5,     5,     5,  1462,  1463,
    1464,   233,     3,     4,     5,     4,     7,     8,  1472,     4,
     306,     5,  1476,     3,     4,     5,     4,     7,     8,  1483,
      20,   280,   252,   252,     5,     4,   264,     5,     5,  2352,
     155,     5,  2355,  1497,     5,  2358,     4,  2360,  1502,     4,
     272,     5,  1506,     5,  1508,  1509,   264,  1511,  1512,  1513,
       5,  1515,   171,     5,  1518,  1519,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,   190,     4,  1531,  1532,  1533,
    1534,     5,     4,   234,     5,    14,    15,  1541,  1542,  1223,
    1224,     5,  1546,  1547,  1548,     5,   234,  1551,  1552,     5,
    2478,     5,     5,     4,     4,    14,    15,     5,  2486,  1563,
    1564,     5,  1566,  1567,   223,     4,   208,     5,     5,   228,
       5,  2499,   237,   105,   136,   240,  2504,    40,   105,   234,
    1911,   105,    61,     5,   243,    40,   422,   238,    14,    15,
     208,     5,     4,   252,     5,  1926,  1927,   433,   263,  1930,
     208,   266,    61,     5,   208,  1936,   442,  1938,     4,     4,
     110,     5,   277,  1617,  1618,    14,    15,    22,  1622,     5,
     279,   280,    53,  1627,  1628,     5,  1630,  1631,  1632,     5,
    1634,  1635,     4,  1637,   110,    61,  1640,  1641,     5,     5,
      71,   300,     5,     4,    49,  1649,     5,    52,     5,     4,
      55,     5,  1656,  1984,     5,     4,     4,    88,  1662,  1663,
       5,     5,    61,     5,     5,    12,  1670,     4,     6,   100,
       5,     4,  1676,    12,     4,   511,     4,    82,   514,   515,
       4,     4,    38,     5,     4,   344,   117,     0,    38,     5,
     121,   527,   234,   136,  2025,   120,   532,   234,   234,   167,
       4,   132,     4,   204,   109,   541,   542,   112,  1712,   188,
     189,   242,   861,   194,     4,     4,     4,     4,   264,     5,
       5,  1405,     5,     5,     5,     5,     4,  1411,     4,   188,
     189,     5,     4,     4,     4,  1739,  1740,     5,     5,     5,
    1744,   234,   173,   234,   234,   302,  1750,   302,     4,  1433,
       4,     4,  1436,     4,     4,     4,  1440,   302,   302,     4,
       4,     4,   188,   189,     5,   953,     5,     5,     5,   605,
     606,   607,   221,     5,   221,   221,   221,  1461,   257,   221,
       5,     5,     4,  1467,     4,     4,     4,   266,   267,   188,
     189,  1475,     5,     5,     4,  1479,     5,   985,   257,     5,
       4,     0,     5,  1487,  1488,     5,     4,   266,   267,     5,
       4,     6,     4,     4,  1498,  2743,     4,     4,   223,   298,
       5,     5,     5,     5,     5,     5,     5,     5,   664,     5,
       4,   257,   290,     5,     5,     5,     4,     4,     4,   298,
     266,   267,     5,     5,     5,     5,     4,   252,     4,   264,
       5,     5,     5,  1857,     5,  1859,     4,  1861,   257,  1863,
       4,   264,     5,     5,     5,     5,     4,   266,   267,  1018,
       4,   264,   298,   278,     5,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,     5,     5,     5,     4,   347,
       4,    12,     5,     5,     5,     5,     4,     4,     4,   298,
    1904,     5,  1906,     4,  1908,     4,  2237,  2238,  2239,  1913,
       4,  2242,     5,  2244,  2245,     5,    91,  2248,     5,  2250,
       5,  1925,     5,     4,    99,     4,   345,     5,  1932,     4,
     105,  1080,     4,   298,     5,     5,     4,     4,     4,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,     4,
     125,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,     5,  1968,     5,  1970,  1971,  1972,     4,
       4,   345,     5,   148,     5,     5,     5,     5,     5,  2310,
       5,   156,  1986,     5,     5,     4,     4,   823,     5,     4,
       6,     5,  2645,     5,     5,     4,     4,   430,     5,   835,
       5,     5,     5,     4,     4,   345,     5,     5,     5,     5,
       4,     4,  2016,     5,     4,  2019,     4,  2021,   193,  2023,
       4,     4,  2026,     4,  2028,     4,   201,     4,     4,     4,
       4,  2035,  2036,     4,     4,     4,   872,   873,  2042,     4,
    2044,     4,   345,     4,  2048,   345,   345,  2051,   345,   345,
    1199,   509,     5,     5,     4,   278,     5,     4,   516,     5,
     896,   519,  2715,     5,     4,     4,   524,   242,     5,     5,
     528,     5,     4,     4,     4,     4,     4,     4,   253,     4,
       4,   278,     5,     4,     6,     5,     5,     5,     4,   387,
       5,     5,     5,   268,     5,     4,  2100,     5,     5,     4,
       4,  2653,     5,     4,     4,     4,  1255,   943,     5,     5,
       4,     4,     4,     4,  2269,     5,     4,   345,     5,     5,
       4,  1270,     4,     4,  2643,     5,     5,     5,     4,     4,
     588,     5,     4,  2464,     5,     5,  2715,  2711,   726,    -1,
      -1,  2472,    -1,    -1,    -1,    -1,    -1,    -1,  1336,  1337,
    1338,    -1,  2198,    -1,    -1,    -1,    -1,    -1,  1346,  1347,
    1348,    -1,    -1,    -1,    -1,  1353,  1354,  1355,    -1,    -1,
    1358,  1359,    -1,  1361,  1362,    -1,    -1,    -1,    -1,    -1,
    2511,    -1,  1018,    -1,    -1,    -1,    -1,    -1,    -1,  1873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2204,    -1,    -1,  1391,  1392,    -1,    -1,  1395,  1396,    -1,
      -1,    -1,    -1,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,    -1,  1909,    -1,    -1,    -1,  2233,
     688,    -1,    -1,  2488,  1070,    -1,  2240,   695,    -1,  2243,
    2724,  2725,    -1,    -1,  1080,  2249,    -1,    -1,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,    -1,  2514,
    1409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,    -1,  2287,    -1,  2289,  2290,  2291,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2307,    -1,    -1,    -1,  2311,    -1,    -1,
      -1,  2315,    -1,    -1,    -1,  2319,    -1,    -1,    -1,  1468,
      -1,    -1,  1471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1481,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1489,    -1,    -1,    -1,    -1,    -1,  1182,  1496,    -1,    -1,
      -1,    -1,    -1,    -1,  2609,  2610,    -1,    -1,  2613,    -1,
    2615,    -1,    -1,  1199,   822,  2369,    -1,    -1,    -1,    -1,
      -1,   829,  2627,  2628,    -1,    -1,    -1,  2632,  2633,    -1,
      -1,  2636,    -1,    -1,    -1,    -1,  2641,  2642,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1232,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,  1243,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   875,    -1,    -1,
      -1,    -1,   880,    -1,    -1,   883,    -1,    -1,    66,    -1,
      -1,    -1,  2687,    -1,  1270,  2690,    -1,   895,  2442,  1275,
    2695,    -1,  2446,    -1,    -1,    -1,  2701,    -1,    -1,    -1,
      -1,  2706,  2456,  2457,    -1,    -1,    -1,    -1,    -1,  2463,
      -1,    99,    -1,    -1,    -1,    -1,  2470,   105,    -1,    -1,
      -1,    -1,   110,    -1,  2478,    -1,  2480,    -1,  1627,  2483,
    2484,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,    -1,    -1,    -1,  2499,    -1,    -1,  2502,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,    -1,    -1,  2512,    -1,
     148,    -1,  2516,    -1,    -1,    -1,    -1,    -1,    -1,  2774,
      -1,    -1,  2777,  2527,    -1,    -1,   164,    55,  2532,    -1,
      -1,    -1,    -1,    -1,    -1,   993,    -1,    -1,    66,    -1,
      -1,  2796,    -1,  1692,  2799,  2549,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1702,    -1,   193,  2811,  2812,  1707,    -1,
      -1,    -1,    -1,    91,    92,    -1,  1754,    -1,    -1,    -1,
      -1,    99,    -1,  1409,    -1,    -1,    -1,   105,    -1,  1767,
    2584,    -1,    -1,    -1,    -1,    -1,  2590,    -1,  2592,  1777,
      -1,   229,    -1,    -1,  2598,    -1,    -1,   125,    -1,    -1,
      -1,   129,    -1,  1439,   242,    -1,    -1,  2611,  2612,    -1,
      -1,  2295,    -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,  2629,  2630,  2673,   156,    -1,
    2634,    -1,  1468,    -1,    -1,  1471,    -1,    -1,    -1,    -1,
      -1,    -1,   280,    -1,    -1,  1481,  1482,    -1,    -1,  2653,
      -1,    -1,    -1,  1489,   292,    -1,   294,   295,    -1,    -1,
    1496,  1849,    -1,    -1,    -1,   193,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   201,  2678,    -1,    -1,    -1,    -1,    -1,
    2684,    -1,  2686,    -1,    -1,    -1,    -1,    -1,    -1,  2693,
      -1,    -1,    -1,    -1,  2698,    -1,   334,    -1,    -1,  2703,
    1536,    -1,    -1,  1539,  1540,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1549,   242,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1872,    -1,   253,  1875,    -1,    -1,  1187,
      -1,    -1,    -1,    -1,   965,    -1,    -1,    -1,    -1,  2743,
     268,    -1,  2746,  2747,    -1,    -1,  2750,    -1,  2752,  2753,
     278,    -1,   280,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2764,  2765,    -1,    -1,    -1,    -1,    -1,    -1,  1226,    -1,
      -1,  2775,    -1,    -1,  2778,    -1,    -1,    -1,    -1,    -1,
    2784,  2785,    -1,  1241,  1620,    -1,    -1,    -1,    -1,    -1,
      -1,  1627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2805,    -1,  2807,    -1,    -1,   334,    -1,    -1,  1645,
      -1,    -1,    -1,    -1,  2498,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1661,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2518,    -1,    -1,    -1,  2522,    -1,
      -1,    -1,    -1,    -1,  1680,    -1,    -1,    -1,    -1,  1685,
      -1,    -1,  1688,    -1,  1690,  1691,  1692,  1693,    -1,    -1,
    1696,    -1,    -1,  1699,    -1,    -1,  1702,  1703,    -1,  1705,
    1706,  1707,  1708,    -1,  1710,  1711,    -1,    -1,    -1,    -1,
    1716,  1717,  1718,    -1,  1720,  1721,    -1,    -1,    -1,    -1,
    1726,  1727,    -1,    -1,    -1,  1731,    -1,    -1,    -1,    -1,
    1736,    -1,    -1,  2052,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,  2097,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,  2150,  2151,  2152,  2153,  2154,    -1,  2156,  2157,
      -1,    -1,    -1,  2161,  2162,  2163,  2164,  2165,    -1,  2167,
    2168,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1477,
    1856,    -1,    -1,    -1,  1860,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1872,    -1,    -1,  1875,
      -1,    -1,    -1,   101,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2202,    -1,    -1,    -1,    -1,    -1,    -1,
     118,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,  1905,
      -1,    -1,    -1,    -1,    -1,  2759,    -1,    -1,    -1,  1537,
      -1,    -1,  2231,    -1,    -1,  1543,    -1,    -1,    -1,    -1,
      -1,    -1,  2241,    -1,    -1,    -1,    -1,   155,  2247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1352,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1966,    -1,    -1,  1364,   192,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,   206,   207,
      -1,  1382,  1383,    -1,   212,    -1,    -1,    -1,    -1,   217,
      -1,   155,    -1,    -1,    -1,  1623,    -1,    -1,    -1,    -1,
      -1,  1629,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2372,    -1,    -1,  2375,  2376,  2377,
    2378,  2379,    -1,  2381,  2382,  1653,    -1,    -1,   192,    -1,
      -1,    -1,  1660,  2039,    -1,  2393,  2394,  2395,  2396,  2397,
      -1,  2399,  2400,    -1,  2402,    -1,    -1,    -1,   212,    -1,
      -1,    -1,    -1,   217,  2412,  2413,    -1,    -1,  1686,    -1,
      -1,   289,    -1,   227,    -1,  2423,  1694,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2080,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
     338,    -1,    -1,    -1,   342,   343,    -1,  2436,    -1,    -1,
      -1,    -1,   286,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2202,    -1,    -1,  2205,
      -1,    -1,  2560,    -1,    -1,    -1,    -1,    -1,    -1,  2215,
      -1,    -1,    -1,  2571,    -1,  2573,    -1,    -1,    -1,  2577,
      -1,    -1,    -1,    -1,    -1,  2231,  1854,    -1,  2234,    -1,
      -1,    -1,    -1,    -1,    -1,  2241,    -1,    -1,    -1,    -1,
    2246,  2247,    -1,    -1,    -1,    -1,    -1,    -1,  1876,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2588,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2596,    -1,    -1,
      -1,    -1,  1910,    -1,  1912,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1929,    -1,  1931,    -1,  2663,    -1,  1935,  2666,  1937,
      -1,  2669,    -1,  2671,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2334,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1977,
      -1,    -1,  1980,  1981,    -1,    -1,    -1,  2363,    -1,    -1,
      -1,  1989,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1773,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1781,  1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2022,  1796,  1797,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1807,  1808,     4,     5,
    2038,    -1,    -1,    -1,    -1,    -1,    -1,  1818,  1819,  2738,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1828,  1829,    -1,
    2436,  2059,    -1,  1834,    -1,    -1,  2064,    -1,    -1,    -1,
      -1,    -1,  2070,  1844,    -1,    -1,    -1,  2075,    -1,    -1,
    2769,  2079,    -1,  2772,  2082,    -1,    -1,  2085,    -1,  2087,
      -1,    -1,    -1,    -1,    60,  2093,    -1,    -1,    -1,    -1,
      66,  2477,    -1,    -1,    -1,    -1,    -1,    73,    -1,    75,
      -1,    -1,    -1,  2489,    80,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2538,   129,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2547,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,   164,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   173,   174,    -1,
      -1,    -1,  2588,  2589,    -1,  2591,    -1,     3,     4,    -1,
    2596,  2597,    -1,    -1,    -1,  2601,    -1,   193,    -1,    -1,
      56,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,   214,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2635,
      -1,   227,    19,   229,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   242,    -1,  2654,    -1,
      -1,   247,    -1,  2659,    -1,    -1,    -1,   253,  2286,    -1,
      -1,    -1,    -1,    -1,   260,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   291,   292,    -1,   294,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2111,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
    2121,    -1,    -1,    -1,  2125,  2126,    -1,    -1,    -1,    -1,
      -1,    -1,  2738,  2134,  2135,     4,    -1,    -1,   334,   155,
      -1,    -1,  2143,  2144,    -1,    -1,    -1,    -1,  2149,  2755,
      19,    -1,    -1,    -1,    -1,    -1,   212,    -1,  2159,  2160,
      -1,   217,    -1,  2769,    -1,    -1,  2772,    -1,   155,  2170,
    2171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2190,
      -1,  2192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,    -1,  2434,    -1,    -1,    -1,
      -1,    -1,    -1,  2441,    -1,    -1,    -1,  2445,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   212,    -1,    -1,    -1,    -1,
     217,    -1,   101,    -1,  2462,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    -1,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2383,    -1,    -1,    -1,    -1,    -1,    -1,  2617,
      -1,  2392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2401,    -1,    -1,    -1,    -1,    -1,    -1,  2408,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2419,    -1,
      -1,    -1,    -1,    -1,  2425,    -1,    -1,  2428,    -1,    -1,
    2431,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2707,
      -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    16,  2726,  2727,
      -1,    -1,    -1,    59,    23,    -1,    -1,    -1,    64,    65,
      -1,    67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      86,    87,    -1,    -1,    -1,    -1,    -1,    -1,    19,    95,
      96,    -1,  2770,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2557,    -1,    -1,    -1,
    2561,  2789,    -1,    -1,  2792,    -1,    -1,  2568,   124,    19,
      -1,    -1,    -1,  2574,    -1,    56,    -1,  2578,    -1,   135,
    2581,    -1,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,
      -1,   147,   148,    -1,    -1,    -1,    -1,    -1,   154,    -1,
      -1,    -1,    -1,    -1,    -1,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    66,    -1,   174,    69,
     101,   177,   178,   179,    18,    19,   182,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,   210,   211,   212,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,   224,    -1,
      -1,    -1,    -1,    -1,   155,    -1,   232,    -1,    -1,   235,
      -1,    -1,   238,    -1,   240,    -1,   242,    -1,    -1,    -1,
      -1,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   260,   155,    -1,   101,    -1,   265,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,   168,   238,
     114,    -1,    -1,    -1,    -1,   281,   282,    -1,    -1,    -1,
      -1,   212,    -1,    -1,    -1,   185,   217,   293,    -1,   295,
      -1,    -1,    -1,    -1,    -1,   301,    -1,    -1,   304,   305,
      -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,   217,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   335,
      -1,    -1,    -1,    -1,    -1,   341,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    -1,   265,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   217,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    -1,   334,    -1,    -1,    -1,   282,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    -1,    -1,    55,    -1,    -1,    -1,    48,    49,
      -1,    62,    52,    19,    -1,    66,    -1,    -1,    -1,    59,
      -1,    -1,    62,    74,    75,    -1,    66,    -1,    -1,    -1,
      -1,    82,    83,    -1,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      56,    -1,    -1,    -1,   105,    -1,    -1,   108,   109,    -1,
      -1,   112,    -1,    -1,    19,    -1,    -1,    -1,   108,   109,
      -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    19,    -1,    -1,   101,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      19,   171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,    -1,   193,    -1,    -1,    -1,   101,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     221,    -1,   223,    -1,   101,    -1,    -1,   228,   229,    -1,
      -1,   221,    -1,   223,    -1,    -1,    -1,    -1,   228,   229,
      -1,   242,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,   252,   253,   243,    -1,    -1,   212,    -1,    -1,    -1,
      -1,   217,   101,   253,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   155,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,
     280,   292,    -1,   294,    -1,    -1,    -1,    -1,    -1,   300,
     290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     300,    -1,   217,    -1,    -1,    -1,   155,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   282,   217,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    -1,    -1,    -1,    -1,    93,    -1,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,   154,    -1,   155,
      -1,   158,    -1,    -1,   161,   161,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   182,   183,    -1,    -1,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,   161,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   210,   211,    -1,    -1,    -1,    -1,    -1,
      -1,   218,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,    -1,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   281,   282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,
     297,    -1,    -1,    -1,    -1,    -1,   303,    -1,   305,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   341,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   124,   135,   139,
     142,   147,   148,   154,   161,   174,   177,   178,   179,   182,
     183,   195,   210,   211,   212,   224,   232,   235,   238,   240,
     242,   247,   260,   265,   281,   282,   293,   295,   301,   304,
     305,   335,   341,   347,   238,   256,   379,    66,    12,    53,
      71,   100,   117,   121,   132,   286,   381,     3,     4,   286,
     348,   386,   186,   191,   227,   251,   296,   340,   388,   278,
       4,    40,   110,   192,   240,   393,    28,   149,   172,   176,
     225,   261,   269,   270,   361,   395,    83,    99,   174,   214,
     247,   396,    40,    59,   110,   192,   282,   348,   405,     4,
      19,    40,    56,   101,   118,   155,   192,   200,   206,   207,
     212,   217,   289,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   338,   342,   343,   350,   358,   359,   360,   407,
      33,   408,   350,    29,    44,    46,    76,    84,   140,   190,
     206,   207,   213,   215,   240,   305,   349,   142,   409,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   123,   139,   150,   151,   154,   158,
     161,   182,   183,   186,   195,   210,   211,   218,   240,   242,
     265,   281,   282,   290,   297,   303,   305,   341,   410,    83,
      99,   452,    19,    44,    77,    84,    94,    95,   101,   123,
     139,   154,   162,   182,   217,   265,   276,   305,   455,   350,
      88,   115,   184,   198,   254,   295,   305,   461,    16,    26,
     111,   123,   157,   203,   216,   464,   226,   482,     5,    66,
      88,   137,   295,   341,   350,   483,     5,   484,    20,    57,
     222,   235,   296,   500,    64,    66,   181,   285,   519,    66,
     201,   337,   342,   344,   520,    39,   192,   227,   286,   348,
     358,   360,   521,     5,   295,   305,   350,   524,    70,   168,
     239,   248,   525,    88,   500,    61,   276,   299,   532,   192,
     286,   348,   533,    26,   111,   123,   203,   216,   535,    50,
      99,   134,   288,   550,   551,     4,    37,    47,    74,   148,
     185,   227,   248,   283,   299,   374,     4,   123,   202,   552,
     286,   348,   554,    16,    23,   236,   238,   359,   555,   226,
     559,   286,   348,   560,     0,    22,    48,    49,    62,   108,
     109,   221,   223,   300,   380,     5,    59,   348,   382,   262,
       5,     4,   286,   348,   383,     5,    32,   275,   384,   122,
     348,   385,   122,   348,   387,   348,     4,   191,   244,   391,
     186,   296,   339,   340,   348,   390,   350,   136,   175,   389,
     348,    78,   171,   244,   348,   392,     5,   348,     4,   240,
     394,   348,   348,     5,   223,   397,    31,   398,     5,   399,
       5,   403,     5,    31,   404,   348,     9,    10,    11,   348,
     354,   355,   356,   357,   348,   348,    40,   110,   192,   348,
     406,   348,   192,   358,   360,   348,    35,   106,   126,   127,
     128,   133,   146,   152,   163,   274,   363,   348,     4,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     116,    66,    53,    71,    88,   100,   117,   121,   132,   173,
     411,   117,   413,   186,   191,   227,   251,   296,   339,   340,
     348,   400,   414,   278,   417,   168,   418,   168,   176,   420,
      65,    66,    69,    91,   168,   185,   204,   265,   334,   358,
     422,   348,   360,   425,    59,   282,   358,   426,   273,   358,
     360,   427,    33,   428,   358,   360,   429,     4,   358,   360,
     430,    45,    59,    81,   100,   116,   119,   144,   145,   197,
     205,   262,   263,   334,   434,   209,   298,   440,     5,    89,
       6,    88,   119,   432,     5,    65,   360,   431,    16,   500,
      66,   181,   285,   441,    66,   227,   442,   277,    61,   276,
     299,   443,   132,   234,   444,    37,    47,    74,   148,   185,
     248,   299,   445,   360,    89,    16,   194,   450,   358,   453,
      72,   456,    31,   457,    44,    87,   190,   458,   148,   214,
     253,   291,   459,   358,    18,    58,   114,   282,   358,   460,
       4,   191,   463,     5,     4,     6,   119,   348,     4,     5,
     240,   465,     5,   467,     5,   116,   190,   240,   263,   468,
      93,   110,   186,   481,     5,   479,     5,   263,   480,     4,
       5,   350,   350,   348,   348,     5,     4,     5,    60,    66,
      73,    75,    80,    83,    89,    99,   105,   113,   129,   148,
     164,   173,   174,   193,   214,   227,   229,   242,   247,   253,
     260,   278,   291,   292,   294,   334,   485,     5,     4,   348,
       5,   348,    40,   110,   348,   523,   350,   348,   358,   360,
     522,   348,   363,   348,     4,   359,    54,    90,   138,   240,
     526,     4,     4,   348,   148,   253,   527,     5,   358,     4,
      40,   110,   348,   534,   348,    97,    61,   119,   240,   266,
     536,   119,   549,    61,   116,   119,   155,   190,   237,   240,
     263,   266,   277,   538,   539,    61,   119,   266,   548,     5,
       4,    34,   107,   201,   531,    66,   350,   375,    66,   350,
     376,    66,   350,   377,    13,   187,   530,   348,   348,    40,
     110,   192,   221,   348,   378,   348,   263,     4,   348,   348,
       4,   558,     4,   280,   556,     4,   280,   557,     4,   363,
     122,   348,   561,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,     4,     5,   348,    12,   348,   348,
     348,    30,    94,   162,   244,   249,   362,   362,     4,   348,
     348,     4,     4,     4,   348,   348,   348,   348,     4,     4,
       5,     5,   358,     5,   348,   348,   354,   356,   356,   358,
     348,   348,   348,   348,   348,   348,   348,   358,   360,   357,
     348,   348,   357,   348,     5,   262,   103,   186,   412,   191,
     244,   415,   168,    78,   171,   244,   416,   136,   175,   401,
     401,     4,   419,     4,   421,   191,   251,   423,   176,   424,
     168,   363,   348,   358,   348,   358,   358,   363,   363,   363,
     358,   363,   348,   358,     4,   437,     4,   360,   435,   194,
       4,   165,   305,   436,   194,   358,     4,   358,   439,     5,
       5,     4,   194,   348,     4,     5,    60,    66,   113,   129,
     141,   147,   148,   153,   204,   223,   227,   229,   252,   253,
     260,   278,   334,   494,   360,    66,   446,    66,   447,    66,
     448,   221,   449,   348,     5,   222,   451,   359,   363,     5,
     358,   358,   358,     4,   350,     4,     4,   194,   348,    14,
      15,    61,   188,   189,   257,   266,   267,   298,    87,     5,
       5,    14,    15,    61,   188,   189,   257,   266,   267,   271,
     298,    87,   155,   161,   359,   471,   475,    87,   155,     5,
     469,     4,     4,    14,    61,   188,   257,   266,   298,     5,
       5,     4,   348,   359,    20,    21,    22,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,    99,   105,   108,
     109,   112,   129,   148,   171,   193,   221,   223,   228,   229,
     242,   243,   252,   253,   278,   280,   292,   294,   300,   334,
      66,    80,    89,    99,   129,   148,   193,   229,   253,   292,
     294,     4,    30,   160,   209,   234,   488,     5,    63,   104,
     231,   245,   246,   336,   337,   493,    99,   486,    17,    40,
     110,   192,   492,     4,     5,    17,   208,   287,   348,   253,
     493,   501,   123,   493,   502,    36,    40,   110,   130,   192,
     286,   348,   503,   358,   350,    91,    99,   105,   125,   148,
     156,   193,   201,   242,   253,   268,   506,    40,   110,   192,
       5,   279,    17,   208,   287,   510,   280,   350,   511,     5,
      99,   105,   295,    17,    17,     4,   348,   348,   348,   348,
     348,   363,   348,   348,   357,   348,     4,   363,    40,   110,
     192,   258,   528,    40,   110,   192,   258,   529,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   539,    61,
     119,   155,   266,   543,    61,   119,   266,   547,    87,   155,
      61,   119,   266,   541,     4,    61,   119,   266,   540,     5,
       5,     4,     5,     5,     5,   348,   348,   348,   348,   348,
     348,     4,   348,   553,   348,   348,     6,   359,     4,     5,
       4,     4,     5,     4,    97,   255,   364,   348,   348,    12,
     348,   348,   348,   348,   348,   348,   348,   348,   348,     5,
      12,   348,   348,    12,     4,    12,     4,     4,   348,   348,
     348,     4,   350,     4,     4,   363,   358,   363,   348,   348,
     348,   358,   348,   357,   348,   348,     5,     5,   348,   360,
     348,   358,   358,   348,   363,   364,   364,   364,   363,   357,
     348,   363,   348,   131,   241,   351,   438,   165,     5,     4,
     363,   358,     4,     5,     4,     4,   348,   433,   348,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   108,   109,   112,   129,   148,   171,   180,   221,   223,
     228,   229,   243,   253,   278,   280,   290,   300,   334,    66,
     129,   153,   229,   278,    30,   160,   209,   234,   495,   348,
      20,   204,   348,   496,    17,   348,   252,   506,   252,   204,
     348,   497,   280,   498,    17,    98,   348,   348,     5,   364,
      56,   358,     4,     5,   462,   348,     5,     5,     5,   155,
     183,   368,   368,   164,   259,   366,     4,     4,     5,     5,
     466,   264,   264,     5,     5,     5,    17,   157,   367,   367,
     366,     4,     4,   366,     5,     5,   470,   161,   333,   359,
     474,     5,   473,     5,     5,   477,     5,   478,     5,    14,
      15,    61,   188,   189,   257,   266,   267,   271,   298,     4,
       4,     5,     5,   368,   366,     4,     5,     5,   363,    82,
     150,   219,   220,   233,   272,   371,     7,     8,   348,   353,
     234,   120,   234,   234,   105,    40,    66,    99,   105,   110,
     129,   148,   164,   193,   229,   242,   253,   280,   292,   294,
     295,   334,   487,   120,   234,     5,    27,   166,   234,   276,
     136,   105,    22,    49,    52,    82,   109,   112,   223,   252,
      22,    49,    52,    55,    82,   109,   112,   223,   252,   278,
      40,   120,   234,   234,   105,     5,   208,    27,   221,    36,
     130,   286,   348,   256,   262,   120,   238,   358,   360,   506,
      40,   221,   276,   238,   208,     5,     5,   242,    27,   221,
       4,     5,     5,   208,    36,   130,   286,   348,   506,   208,
     350,     4,     4,   348,     5,   298,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   108,   109,
     112,   171,   223,   228,   243,   252,   279,   280,   300,   344,
     489,   348,   348,   348,   348,   348,   493,   358,     5,     4,
       5,   348,   348,   358,   360,   348,   350,   348,   348,   493,
       5,   348,   348,   350,     5,    17,     5,     5,   348,   348,
     357,   348,   348,   348,   348,   110,   348,   348,   110,     4,
      42,    43,   169,   170,   196,   373,   373,    61,   119,   266,
     537,   373,     5,    61,   119,   266,   542,     5,     5,    61,
     119,   266,   544,     4,     5,     5,     4,    61,   119,   266,
     546,    61,   119,   266,   545,     5,     5,     4,     5,     5,
       4,   373,   373,   373,   348,   348,   348,   348,   348,     4,
     348,   358,   348,   359,   363,     5,     5,    12,   348,   358,
     360,   348,    12,   348,   348,   348,    59,   348,     6,     4,
     348,   348,    46,   265,   402,     5,   350,   350,   363,   348,
       4,     4,     4,   358,   348,   348,   348,   348,   363,     4,
     358,   364,   357,   348,     4,   364,   348,    38,    38,     4,
     360,     5,    24,    25,    97,   365,   348,     4,   348,     5,
      82,   150,   219,   220,   233,   272,   358,   360,   234,   120,
     234,   234,    21,   234,   358,   120,   234,    27,   166,   234,
     276,   136,    21,   234,   120,   234,   234,    21,   234,    27,
     167,   221,   167,   256,   262,   120,   167,   221,   284,   506,
     167,   221,   276,     4,   242,    27,   167,   221,   506,   204,
     348,    82,   150,   219,   220,   233,   272,   348,   348,   348,
     348,   348,   194,   348,   348,    20,   230,   454,     4,     4,
     348,   368,   368,   368,     4,   368,   368,   368,    14,    15,
      61,   188,   189,   257,   266,   267,   298,   367,   368,   368,
     368,   368,   368,     4,   368,   368,     4,   367,    14,    15,
      61,   188,   189,   257,   266,   267,   298,     5,   472,     5,
     476,     5,     5,    14,    15,    61,   188,   189,   257,   266,
     267,   271,   298,     5,    14,    15,    61,   188,   189,   257,
     266,   267,   271,   298,     5,    14,    15,    61,   188,   189,
     257,   266,   267,   271,   298,    14,    15,    61,   188,   189,
     257,   266,   267,   298,   264,     5,     5,     5,   367,   367,
     366,     4,     4,   366,     5,     4,     4,   368,   368,     4,
     368,   368,     5,   350,   358,   360,     5,   348,   350,   348,
       5,   348,     5,   353,   105,   193,   242,   105,   193,   242,
       5,   350,   348,   350,     5,   348,   358,   350,     5,   353,
     234,   234,    21,   234,    21,   234,   234,    21,   234,   302,
     302,     4,     4,     4,   487,     4,     4,     4,   302,   302,
       4,     5,     4,   350,   348,     5,   348,     5,   353,   350,
     358,   360,   358,   360,   348,    27,    48,    51,    62,    85,
     102,   344,   369,     4,   350,   348,   363,   357,   350,   358,
     360,   358,   348,   350,   350,   358,   360,   358,   360,   348,
     350,   348,     5,   348,   221,   221,   348,   348,   221,   348,
     221,   348,   348,   499,   507,   348,   221,   221,   348,   348,
     348,   348,   348,   348,   348,   348,     5,   298,   348,   490,
     348,   348,   221,   348,   348,   348,   348,   358,   363,     5,
     358,   358,   348,   348,   363,   357,   348,   348,   348,   358,
     348,   348,     5,   348,   348,   348,   348,     5,     5,     4,
     373,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   348,   348,   358,   348,
     363,   348,   358,   360,   348,   363,   348,   348,   348,   348,
     348,     5,   348,     4,     6,   348,   348,     4,   358,   348,
     363,   176,   361,   348,   361,   364,   363,   358,   348,   348,
       4,   348,   348,     4,   358,     5,     5,     5,     5,   358,
     363,   358,   358,   358,   358,   360,   358,   363,   358,   358,
     358,   360,   358,   358,   358,   358,   360,   358,   358,   358,
     348,   358,   358,   358,   358,   358,   358,   358,   358,     5,
       5,     5,     5,   358,   348,   348,     4,   348,     5,     4,
     348,   368,     5,     5,     5,   366,     4,     4,     5,   368,
     367,     4,   368,     5,     5,     5,   367,   367,   366,     4,
       4,     5,    14,    15,    61,   188,   189,   257,   266,   267,
     298,    14,    15,    61,   188,   189,   257,   266,   267,   298,
      14,    15,    61,   188,   189,   257,   266,   267,   298,   264,
       5,     5,     5,   367,   367,   366,     4,     4,   366,     5,
     264,     5,     5,     5,   367,   367,   366,     4,     4,   366,
       5,   264,     5,     5,     5,   367,   367,   366,     4,     4,
     366,     5,     5,     5,     5,   367,   367,   366,     4,     4,
       5,   367,     4,     4,   367,     4,     4,   368,     5,   363,
     358,   348,   348,   358,   348,     5,   353,     5,   358,   360,
     350,     5,   358,   360,   363,     5,   353,   348,   348,   348,
     348,   348,   348,   348,   348,   348,     4,     4,     5,     4,
       4,   348,   358,   348,     5,   353,   350,   363,   357,   363,
     348,   348,   357,   357,   363,   357,   363,   348,   363,   357,
     363,   357,   348,   348,   348,   348,   348,   348,   348,   348,
     348,   348,    55,    66,    92,   129,   278,   280,   334,   504,
     505,   506,   517,   518,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   358,     5,   348,   348,
     348,   348,     4,     4,   363,   364,     4,   491,   363,   363,
     357,   348,     4,   363,   373,   373,   373,   348,   348,   348,
     363,   348,   357,   348,   348,    12,     5,     5,     4,   348,
     348,     4,   363,   358,   348,   348,   364,   365,   348,     5,
     348,   360,     5,     5,     5,     5,   363,   365,   365,   365,
     363,   365,   364,   365,   365,   363,   365,   365,   365,   363,
     365,   365,   363,   358,   365,   363,   365,   365,   363,   365,
     363,     5,     5,     5,     5,   363,     4,   360,     5,   348,
       4,   368,   367,     4,   367,     5,     5,     5,   367,   367,
     366,     4,     4,     5,     5,     5,     5,   367,   367,   366,
       4,     4,     5,     5,     5,     5,   367,   367,   366,     4,
       4,     5,   367,   368,   368,   368,   368,   368,     4,   368,
     368,     4,   367,   367,   368,   368,   368,   368,   368,     4,
     368,   368,     4,   367,   367,     4,     4,   367,     4,   367,
     367,     4,     4,     4,   359,   365,     4,   358,   360,   365,
     348,   358,     4,   365,   365,   358,     4,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   358,   360,
     365,   348,   358,     4,   357,   357,   357,   348,   358,   360,
     357,   348,   357,   357,   358,   358,   360,   357,   348,   357,
     348,   348,   348,   348,   348,   348,   353,   348,   348,   348,
     345,   345,   345,   345,   345,   345,   345,   505,   345,   353,
     348,   348,   348,   348,   353,   348,   348,   348,   348,   348,
     348,   363,   348,   298,   352,   353,   348,   348,   364,   350,
       4,     4,   364,   348,   357,   348,    59,   348,     5,     5,
     348,     4,   361,   365,     5,     4,     5,   358,     5,   364,
     365,   364,   364,   364,     4,     5,   358,     5,     5,   348,
     368,   367,   368,   368,   368,   368,   368,     4,   368,   368,
     367,     4,   367,   368,   368,   368,   368,   368,     4,   368,
     368,   367,   368,   367,     4,   368,   368,   367,     4,   368,
     367,     4,   367,   367,   363,   358,   360,   365,     4,   363,
     348,   363,   348,   348,   348,   365,     4,   363,   348,   357,
     365,   348,   357,   365,   365,   358,   353,   348,     4,   370,
     370,   348,   348,   370,   353,   370,   507,   358,   487,     5,
       4,     5,     5,     5,     4,   350,   353,   370,   370,   348,
     348,   353,   348,   348,   348,   348,   348,   357,   348,     5,
     507,   348,   370,   350,   508,   509,     5,   350,     5,   348,
       5,     4,     6,   348,     5,    32,   275,   372,   358,     5,
     372,   358,   348,   367,   368,   367,   367,   368,   368,   367,
     368,   367,   367,   348,   365,   358,   360,   358,   348,   358,
     348,   358,   360,   358,   348,   358,   365,     4,   507,   507,
     352,   348,   507,     4,   507,   363,     5,     4,     4,   507,
     507,   352,   348,     4,   507,   507,   348,   358,   507,   507,
     507,   508,   514,   515,   506,   512,   513,     5,     5,     6,
       4,   186,   296,   340,   348,   400,   358,   358,     4,   368,
     368,   368,   368,   359,   365,   365,   348,   365,     4,   365,
     365,   348,   365,   348,   507,   507,     4,   348,   507,     5,
     348,   507,     4,   348,   507,   363,   514,   516,   517,   345,
     513,     5,     5,     4,   401,   401,   363,   363,   365,     4,
     358,   360,     4,   353,   352,   348,   348,   352,   348,   358,
     517,   350,     5,     5,   348,   348,   372,   372,     5,   358,
     360,   363,   358,   360,   507,   348,     4,   507,   348,   365,
       5,   348,   348,   363,   363,     4,   507,     4,   507,     5,
       5,   352,   352,   507,   507
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
        case 5:
#line 450 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 452 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 453 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 455 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 462 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 467 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 468 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 470 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 477 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 481 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 483 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 488 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 490 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 492 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 494 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 501 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 502 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 505 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 506 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 507 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 508 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 509 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 510 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 511 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 512 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 513 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 514 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 515 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 516 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 517 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 520 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 522 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 523 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 524 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 525 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 527 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 528 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 529 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 530 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 533 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 534 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 540 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 541 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 544 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 545 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 546 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 549 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 552 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 555 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 559 "frame/parser.Y"
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
#line 571 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 578 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 585 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 592 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 593 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 594 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 595 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 596 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 629 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 630 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 633 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 634 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 643 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 644 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 663 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 664 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 665 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 671 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 674 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 676 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 679 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 680 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 681 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 699 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 700 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 728 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 729 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 730 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 731 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 733 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 736 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 737 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 740 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 741 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 744 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 745 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 748 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 750 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 751 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 213:
#line 752 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 214:
#line 753 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 215:
#line 756 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 217:
#line 761 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 763 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 765 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 767 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 769 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 771 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 773 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 775 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 777 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 781 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 782 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 785 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 787 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 790 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 791 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 794 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 795 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 797 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 799 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 800 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 801 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 803 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 805 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 808 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 809 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 812 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 814 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 817 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 826 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 827 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 831 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 832 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 833 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 839 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 262:
#line 842 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 847 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 848 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 851 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 858 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 860 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 863 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 865 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 870 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 875 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 882 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 884 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 885 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 887 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 891 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 893 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 895 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 896 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 907 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 909 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 910 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 294:
#line 913 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 295:
#line 914 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 296:
#line 917 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 918 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 920 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 299:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 300:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 301:
#line 928 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 302:
#line 929 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 303:
#line 932 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 304:
#line 933 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 305:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 306:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 307:
#line 940 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 308:
#line 941 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 945 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 947 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 950 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 312:
#line 952 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 313:
#line 955 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 315:
#line 957 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 958 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 959 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 962 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 319:
#line 963 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 964 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 965 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 966 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 970 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 324:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 973 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 974 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 977 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 328:
#line 979 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 329:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 330:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 986 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 332:
#line 989 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 333:
#line 992 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 347:
#line 1006 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 350:
#line 1009 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1011 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 354:
#line 1014 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 355:
#line 1015 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 358:
#line 1018 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 359:
#line 1019 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 361:
#line 1022 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 363:
#line 1024 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 365:
#line 1026 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 367:
#line 1028 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 368:
#line 1030 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 369:
#line 1032 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 371:
#line 1034 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 372:
#line 1037 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 373:
#line 1038 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 374:
#line 1039 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 375:
#line 1040 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 376:
#line 1041 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 377:
#line 1042 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 379:
#line 1044 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 380:
#line 1047 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 381:
#line 1048 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 382:
#line 1049 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 383:
#line 1052 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 384:
#line 1055 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 385:
#line 1057 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 386:
#line 1059 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 387:
#line 1060 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 388:
#line 1061 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 390:
#line 1063 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 392:
#line 1066 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 393:
#line 1072 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 394:
#line 1073 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 395:
#line 1076 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 396:
#line 1077 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 397:
#line 1078 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 398:
#line 1081 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 399:
#line 1082 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 401:
#line 1088 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 402:
#line 1090 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 403:
#line 1092 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 404:
#line 1095 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 406:
#line 1097 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 407:
#line 1101 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 408:
#line 1105 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 410:
#line 1107 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 411:
#line 1108 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 412:
#line 1109 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 413:
#line 1110 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 414:
#line 1111 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 416:
#line 1113 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 417:
#line 1114 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 418:
#line 1117 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 419:
#line 1118 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 420:
#line 1119 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 421:
#line 1122 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 422:
#line 1123 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 423:
#line 1127 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 424:
#line 1129 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 425:
#line 1135 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 426:
#line 1139 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1141 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 428:
#line 1142 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 429:
#line 1145 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 430:
#line 1147 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1148 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 432:
#line 1151 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 433:
#line 1154 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 434:
#line 1156 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 435:
#line 1160 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 436:
#line 1162 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 437:
#line 1165 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 438:
#line 1169 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 439:
#line 1170 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 440:
#line 1172 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 441:
#line 1175 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 442:
#line 1176 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 444:
#line 1180 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 445:
#line 1181 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1182 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 447:
#line 1185 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 448:
#line 1187 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 449:
#line 1188 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 451:
#line 1190 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 455:
#line 1194 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 456:
#line 1195 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 457:
#line 1196 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 458:
#line 1198 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyDist)(yyvsp[(4) - (4)].integer));;}
    break;

  case 460:
#line 1200 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 461:
#line 1203 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1205 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 463:
#line 1207 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1208 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 465:
#line 1209 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 466:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1213 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 468:
#line 1214 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1218 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1220 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 471:
#line 1223 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 472:
#line 1226 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 473:
#line 1227 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1228 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1229 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 476:
#line 1232 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 477:
#line 1233 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 478:
#line 1234 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 479:
#line 1237 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 480:
#line 1238 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 481:
#line 1239 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 482:
#line 1242 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 483:
#line 1245 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 484:
#line 1246 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 485:
#line 1247 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 486:
#line 1250 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 487:
#line 1251 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 492:
#line 1258 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 493:
#line 1259 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 494:
#line 1260 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 495:
#line 1263 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 496:
#line 1264 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 497:
#line 1267 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 498:
#line 1268 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 499:
#line 1271 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 500:
#line 1272 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 501:
#line 1275 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 502:
#line 1276 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 503:
#line 1279 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 505:
#line 1281 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 506:
#line 1284 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 507:
#line 1285 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 509:
#line 1289 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 510:
#line 1293 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 511:
#line 1296 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 512:
#line 1303 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 513:
#line 1304 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 514:
#line 1307 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 517:
#line 1310 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 518:
#line 1311 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 519:
#line 1312 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 520:
#line 1313 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 522:
#line 1315 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 523:
#line 1316 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 524:
#line 1317 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 526:
#line 1319 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 527:
#line 1320 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 528:
#line 1321 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1325 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 531:
#line 1328 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 532:
#line 1329 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 533:
#line 1332 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 534:
#line 1333 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 535:
#line 1334 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 536:
#line 1335 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 537:
#line 1338 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 538:
#line 1339 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 539:
#line 1340 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 540:
#line 1341 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 541:
#line 1344 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 542:
#line 1345 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1346 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1347 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 545:
#line 1348 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1351 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 547:
#line 1352 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 548:
#line 1353 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 551:
#line 1357 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 552:
#line 1358 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 553:
#line 1361 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 554:
#line 1364 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 555:
#line 1365 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1369 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 557:
#line 1371 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 558:
#line 1372 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1384 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1386 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1388 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1389 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 569:
#line 1391 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1393 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 571:
#line 1395 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1397 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1399 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 579:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 580:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 581:
#line 1410 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1411 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1412 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1415 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 585:
#line 1419 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1421 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1423 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1425 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1427 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 590:
#line 1429 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1431 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 592:
#line 1433 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 593:
#line 1436 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1438 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1440 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 601:
#line 1448 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1449 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1450 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1451 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1452 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 606:
#line 1453 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1455 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 608:
#line 1457 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 609:
#line 1458 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1459 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1460 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 612:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 618:
#line 1470 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1471 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1472 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1483 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1486 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1489 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1492 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1495 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 632:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 642:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 643:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 655:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 660:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 662:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 663:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 672:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 675:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 680:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 682:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 683:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1633 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1634 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 686:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1643 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1644 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1645 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1646 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1650 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1653 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 698:
#line 1655 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1657 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1659 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1662 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 702:
#line 1663 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 703:
#line 1666 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 704:
#line 1667 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1668 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 706:
#line 1671 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 707:
#line 1678 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 708:
#line 1679 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 709:
#line 1680 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 710:
#line 1681 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1682 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 712:
#line 1683 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 713:
#line 1684 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 714:
#line 1688 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::SkyDist)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 716:
#line 1696 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 717:
#line 1697 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 718:
#line 1699 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 719:
#line 1701 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 720:
#line 1702 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 721:
#line 1703 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 723:
#line 1704 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 724:
#line 1705 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 725:
#line 1706 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 727:
#line 1708 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 728:
#line 1709 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 729:
#line 1711 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 730:
#line 1713 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 731:
#line 1715 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 732:
#line 1718 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1720 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 734:
#line 1721 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 735:
#line 1723 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1726 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 737:
#line 1728 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 738:
#line 1731 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1733 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1735 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 741:
#line 1739 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 742:
#line 1742 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1745 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1747 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 745:
#line 1750 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 746:
#line 1754 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 747:
#line 1758 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 748:
#line 1763 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1767 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 750:
#line 1768 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1770 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1772 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1773 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 754:
#line 1775 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1777 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1779 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1781 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1783 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1784 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1786 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 761:
#line 1788 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 762:
#line 1791 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 763:
#line 1795 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1801 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1803 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1805 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1807 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1809 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1811 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1813 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1815 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1817 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 774:
#line 1819 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 775:
#line 1821 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 776:
#line 1823 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1825 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1826 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1828 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1830 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 781:
#line 1831 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1832 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1834 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1836 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 786:
#line 1838 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 787:
#line 1839 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1841 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1842 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1844 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1846 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 792:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 793:
#line 1854 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 797:
#line 1868 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 798:
#line 1873 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1877 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 800:
#line 1878 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 801:
#line 1879 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1881 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1883 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 804:
#line 1885 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 805:
#line 1889 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 806:
#line 1890 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1891 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1893 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 809:
#line 1895 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 810:
#line 1898 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1900 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1903 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 813:
#line 1905 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 814:
#line 1908 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1909 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1911 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1913 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 818:
#line 1917 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 819:
#line 1921 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1925 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 823:
#line 1931 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1934 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 825:
#line 1935 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 826:
#line 1937 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 827:
#line 1938 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1939 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1941 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 830:
#line 1942 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1944 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1946 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 833:
#line 1949 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 834:
#line 1952 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 835:
#line 1954 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 836:
#line 1955 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 840:
#line 1960 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 841:
#line 1961 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1963 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 843:
#line 1965 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1967 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 845:
#line 1968 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 846:
#line 1970 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 847:
#line 1971 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1976 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1977 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1978 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1979 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1980 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 1981 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 856:
#line 1982 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 857:
#line 1983 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 858:
#line 1984 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1985 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 860:
#line 1987 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 861:
#line 1989 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 862:
#line 1991 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 1992 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 1993 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 1994 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 866:
#line 1995 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 867:
#line 1997 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 1998 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 1999 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 870:
#line 2000 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 871:
#line 2001 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 872:
#line 2003 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 873:
#line 2004 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 874:
#line 2005 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 875:
#line 2006 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 876:
#line 2007 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 877:
#line 2008 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 879:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 880:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 881:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 882:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 883:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 884:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 885:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 886:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 887:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 888:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 889:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 890:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 891:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 892:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 893:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 894:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 895:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 896:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 897:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 898:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 899:
#line 2034 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 900:
#line 2035 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 901:
#line 2036 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2037 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 903:
#line 2038 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 904:
#line 2040 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 905:
#line 2050 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2058 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2067 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2075 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2082 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2089 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2097 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2105 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2110 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2115 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2149 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2158 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2168 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2177 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2185 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2195 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2205 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2215 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2227 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2236 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2244 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2246 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 933:
#line 2248 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 934:
#line 2253 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 935:
#line 2256 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 936:
#line 2260 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2262 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2263 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 939:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 940:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 941:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 942:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 943:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 944:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 945:
#line 2272 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 947:
#line 2276 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 948:
#line 2277 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 949:
#line 2278 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 950:
#line 2279 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 951:
#line 2280 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 952:
#line 2283 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 953:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 954:
#line 2287 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 955:
#line 2289 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 956:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 957:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2296 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 959:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 960:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 961:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2308 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 965:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 966:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2312 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 968:
#line 2314 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2322 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2324 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2326 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2334 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 980:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2342 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 987:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2349 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2351 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2354 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 994:
#line 2356 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2358 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2359 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2360 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2361 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2363 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2365 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2368 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2375 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2378 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2381 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2383 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2385 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2387 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2389 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2390 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1016:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2396 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2398 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2400 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2402 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1022:
#line 2404 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2406 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1025:
#line 2407 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1026:
#line 2409 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1027:
#line 2411 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1028:
#line 2412 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1029:
#line 2413 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1031:
#line 2415 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1033:
#line 2419 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2420 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1035:
#line 2421 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2422 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1037:
#line 2423 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2424 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1039:
#line 2426 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1040:
#line 2427 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1041:
#line 2429 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1042:
#line 2432 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1043:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1044:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1045:
#line 2435 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1046:
#line 2438 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1047:
#line 2439 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2442 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1049:
#line 2443 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2446 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1051:
#line 2447 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1052:
#line 2450 "frame/parser.Y"
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

  case 1053:
#line 2463 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1054:
#line 2464 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1055:
#line 2468 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1056:
#line 2469 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1057:
#line 2473 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1058:
#line 2474 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1059:
#line 2479 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1060:
#line 2484 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1061:
#line 2490 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1062:
#line 2492 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1063:
#line 2495 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1064:
#line 2497 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1065:
#line 2500 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1066:
#line 2503 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1067:
#line 2504 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1068:
#line 2505 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1069:
#line 2506 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1070:
#line 2507 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1071:
#line 2508 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1072:
#line 2510 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1073:
#line 2512 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1076:
#line 2519 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1077:
#line 2520 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1078:
#line 2521 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1079:
#line 2522 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1080:
#line 2523 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1081:
#line 2524 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1084:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1085:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1086:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1087:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1088:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1089:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1090:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1091:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1092:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1093:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1094:
#line 2539 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1097:
#line 2546 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1098:
#line 2547 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1100:
#line 2550 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1101:
#line 2551 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2552 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1103:
#line 2553 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1104:
#line 2556 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1105:
#line 2557 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1108:
#line 2565 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1109:
#line 2568 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1110:
#line 2569 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1114:
#line 2576 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1115:
#line 2579 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1116:
#line 2583 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1117:
#line 2584 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1118:
#line 2585 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1119:
#line 2586 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1120:
#line 2589 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1121:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1122:
#line 2591 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1123:
#line 2592 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1124:
#line 2596 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1125:
#line 2597 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1126:
#line 2599 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1127:
#line 2604 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1129:
#line 2606 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2608 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1132:
#line 2611 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2613 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1134:
#line 2618 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1135:
#line 2621 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2622 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1137:
#line 2623 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2626 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1139:
#line 2628 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1140:
#line 2632 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1141:
#line 2633 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1142:
#line 2637 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2638 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1144:
#line 2639 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2640 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1146:
#line 2645 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1147:
#line 2646 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1148:
#line 2647 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1149:
#line 2648 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1152:
#line 2656 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2658 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1154:
#line 2659 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1155:
#line 2660 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1156:
#line 2664 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2665 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2666 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1159:
#line 2667 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1160:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1161:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1162:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1163:
#line 2675 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1164:
#line 2676 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1165:
#line 2679 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1166:
#line 2680 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1167:
#line 2681 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1168:
#line 2684 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1169:
#line 2685 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1171:
#line 2687 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1172:
#line 2688 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1173:
#line 2691 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1174:
#line 2692 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1175:
#line 2693 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1180:
#line 2700 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2704 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2706 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2708 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2713 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2715 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2717 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2730 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2731 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2732 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2735 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2736 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2737 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2740 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2741 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2742 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2745 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2746 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2747 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2752 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2753 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2756 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2757 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2758 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2762 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2763 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2766 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2767 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2768 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2771 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2772 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2773 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2777 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2779 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2781 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2785 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1229:
#line 2788 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2789 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1231:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1232:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1233:
#line 2794 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1234:
#line 2797 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1235:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1236:
#line 2800 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1237:
#line 2802 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1239:
#line 2806 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1240:
#line 2807 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2808 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2809 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2812 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1244:
#line 2813 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1245:
#line 2817 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1247:
#line 2819 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2824 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2825 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2826 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1253:
#line 2829 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2830 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1255:
#line 2831 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1256:
#line 2834 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1257:
#line 2836 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1258:
#line 2841 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1259:
#line 2844 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1260:
#line 2851 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2853 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1262:
#line 2855 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1263:
#line 2860 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1265:
#line 2864 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1266:
#line 2865 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1267:
#line 2866 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1268:
#line 2868 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1269:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1270:
#line 2875 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10941 "frame/parser.C"
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

