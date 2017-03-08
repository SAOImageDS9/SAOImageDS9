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
     FILTER_ = 375,
     FIT_ = 376,
     FITS_ = 377,
     FITSY_ = 378,
     FIXED_ = 379,
     FK4_ = 380,
     FK4_NO_E_ = 381,
     FK5_ = 382,
     FONT_ = 383,
     FRONT_ = 384,
     FULL_ = 385,
     FUNCTION_ = 386,
     GALACTIC_ = 387,
     GAUSSIAN_ = 388,
     GET_ = 389,
     GLOBAL_ = 390,
     GRAPHICS_ = 391,
     GRAY_ = 392,
     GRID_ = 393,
     GZ_ = 394,
     HANDLE_ = 395,
     HAS_ = 396,
     HEAD_ = 397,
     HEADER_ = 398,
     HEIGHT_ = 399,
     HELIOECLIPTIC_ = 400,
     HIDE_ = 401,
     HIGHLITE_ = 402,
     HISTEQU_ = 403,
     HISTOGRAM_ = 404,
     HORIZONTAL_ = 405,
     ICRS_ = 406,
     ID_ = 407,
     IIS_ = 408,
     IMAGE_ = 409,
     INCLUDE_ = 410,
     INCR_ = 411,
     INFO_ = 412,
     INTEGER_ = 413,
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
     MIP_ = 441,
     MMAP_ = 442,
     MMAPINCR_ = 443,
     MOSAIC_ = 444,
     MODE_ = 445,
     MOTION_ = 446,
     MOVE_ = 447,
     NAME_ = 448,
     NAN_ = 449,
     NATIVE_ = 450,
     NAXES_ = 451,
     NEW_ = 452,
     NEXT_ = 453,
     NO_ = 454,
     NONE_ = 455,
     NOW_ = 456,
     NRRD_ = 457,
     NUMBER_ = 458,
     OBJECT_ = 459,
     OFF_ = 460,
     ON_ = 461,
     ONLY_ = 462,
     OPTION_ = 463,
     ORIENT_ = 464,
     PAN_ = 465,
     PANNER_ = 466,
     PARSER_ = 467,
     PASTE_ = 468,
     PERF_ = 469,
     PHOTO_ = 470,
     PHYSICAL_ = 471,
     PIXEL_ = 472,
     PLOT2D_ = 473,
     PLOT3D_ = 474,
     POINT_ = 475,
     POINTER_ = 476,
     POLYGON_ = 477,
     POSTSCRIPT_ = 478,
     POW_ = 479,
     PRINT_ = 480,
     PRESERVE_ = 481,
     PROJECTION_ = 482,
     PROPERTY_ = 483,
     PUBLICATION_ = 484,
     PROS_ = 485,
     QUERY_ = 486,
     RADIAL_ = 487,
     RADIUS_ = 488,
     REGION_ = 489,
     REPLACE_ = 490,
     RESAMPLE_ = 491,
     RESET_ = 492,
     RESOLUTION_ = 493,
     RGB_ = 494,
     ROOT_ = 495,
     ROTATE_ = 496,
     RULER_ = 497,
     SAMPLE_ = 498,
     SAOIMAGE_ = 499,
     SAOTNG_ = 500,
     SAVE_ = 501,
     SCALE_ = 502,
     SCAN_ = 503,
     SCIENTIFIC_ = 504,
     SCOPE_ = 505,
     SEGMENT_ = 506,
     SELECT_ = 507,
     SET_ = 508,
     SEXAGESIMAL_ = 509,
     SHAPE_ = 510,
     SHARED_ = 511,
     SHIFT_ = 512,
     SHMID_ = 513,
     SHOW_ = 514,
     SINH_ = 515,
     SIZE_ = 516,
     SLICE_ = 517,
     SMMAP_ = 518,
     SMOOTH_ = 519,
     SOCKET_ = 520,
     SOCKETGZ_ = 521,
     SOURCE_ = 522,
     SQRT_ = 523,
     SQUARED_ = 524,
     SSHARED_ = 525,
     STATS_ = 526,
     STATUS_ = 527,
     SUPERGALACTIC_ = 528,
     SUM_ = 529,
     SYSTEM_ = 530,
     TABLE_ = 531,
     TAG_ = 532,
     TEMPLATE_ = 533,
     TEXT_ = 534,
     THREADS_ = 535,
     THREED_ = 536,
     THRESHOLD_ = 537,
     THICK_ = 538,
     TRANSPARENCY_ = 539,
     TO_ = 540,
     TOGGLE_ = 541,
     TOPHAT_ = 542,
     TRUE_ = 543,
     TYPE_ = 544,
     UNDO_ = 545,
     UNHIGHLITE_ = 546,
     UNLOAD_ = 547,
     UNSELECT_ = 548,
     UPDATE_ = 549,
     USER_ = 550,
     VALUE_ = 551,
     VAR_ = 552,
     VIEW_ = 553,
     VECTOR_ = 554,
     VERSION_ = 555,
     VERTEX_ = 556,
     VERTICAL_ = 557,
     WARP_ = 558,
     WCS_ = 559,
     WCSA_ = 560,
     WCSB_ = 561,
     WCSC_ = 562,
     WCSD_ = 563,
     WCSE_ = 564,
     WCSF_ = 565,
     WCSG_ = 566,
     WCSH_ = 567,
     WCSI_ = 568,
     WCSJ_ = 569,
     WCSK_ = 570,
     WCSL_ = 571,
     WCSM_ = 572,
     WCSN_ = 573,
     WCSO_ = 574,
     WCSP_ = 575,
     WCSQ_ = 576,
     WCSR_ = 577,
     WCSS_ = 578,
     WCST_ = 579,
     WCSU_ = 580,
     WCSV_ = 581,
     WCSW_ = 582,
     WCSX_ = 583,
     WCSY_ = 584,
     WCSZ_ = 585,
     WCS0_ = 586,
     WFPC2_ = 587,
     WIDTH_ = 588,
     WIN32_ = 589,
     XML_ = 590,
     XY_ = 591,
     YES_ = 592,
     ZMAX_ = 593,
     ZSCALE_ = 594,
     ZOOM_ = 595
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
#define FILTER_ 375
#define FIT_ 376
#define FITS_ 377
#define FITSY_ 378
#define FIXED_ 379
#define FK4_ 380
#define FK4_NO_E_ 381
#define FK5_ 382
#define FONT_ 383
#define FRONT_ 384
#define FULL_ 385
#define FUNCTION_ 386
#define GALACTIC_ 387
#define GAUSSIAN_ 388
#define GET_ 389
#define GLOBAL_ 390
#define GRAPHICS_ 391
#define GRAY_ 392
#define GRID_ 393
#define GZ_ 394
#define HANDLE_ 395
#define HAS_ 396
#define HEAD_ 397
#define HEADER_ 398
#define HEIGHT_ 399
#define HELIOECLIPTIC_ 400
#define HIDE_ 401
#define HIGHLITE_ 402
#define HISTEQU_ 403
#define HISTOGRAM_ 404
#define HORIZONTAL_ 405
#define ICRS_ 406
#define ID_ 407
#define IIS_ 408
#define IMAGE_ 409
#define INCLUDE_ 410
#define INCR_ 411
#define INFO_ 412
#define INTEGER_ 413
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
#define MIP_ 441
#define MMAP_ 442
#define MMAPINCR_ 443
#define MOSAIC_ 444
#define MODE_ 445
#define MOTION_ 446
#define MOVE_ 447
#define NAME_ 448
#define NAN_ 449
#define NATIVE_ 450
#define NAXES_ 451
#define NEW_ 452
#define NEXT_ 453
#define NO_ 454
#define NONE_ 455
#define NOW_ 456
#define NRRD_ 457
#define NUMBER_ 458
#define OBJECT_ 459
#define OFF_ 460
#define ON_ 461
#define ONLY_ 462
#define OPTION_ 463
#define ORIENT_ 464
#define PAN_ 465
#define PANNER_ 466
#define PARSER_ 467
#define PASTE_ 468
#define PERF_ 469
#define PHOTO_ 470
#define PHYSICAL_ 471
#define PIXEL_ 472
#define PLOT2D_ 473
#define PLOT3D_ 474
#define POINT_ 475
#define POINTER_ 476
#define POLYGON_ 477
#define POSTSCRIPT_ 478
#define POW_ 479
#define PRINT_ 480
#define PRESERVE_ 481
#define PROJECTION_ 482
#define PROPERTY_ 483
#define PUBLICATION_ 484
#define PROS_ 485
#define QUERY_ 486
#define RADIAL_ 487
#define RADIUS_ 488
#define REGION_ 489
#define REPLACE_ 490
#define RESAMPLE_ 491
#define RESET_ 492
#define RESOLUTION_ 493
#define RGB_ 494
#define ROOT_ 495
#define ROTATE_ 496
#define RULER_ 497
#define SAMPLE_ 498
#define SAOIMAGE_ 499
#define SAOTNG_ 500
#define SAVE_ 501
#define SCALE_ 502
#define SCAN_ 503
#define SCIENTIFIC_ 504
#define SCOPE_ 505
#define SEGMENT_ 506
#define SELECT_ 507
#define SET_ 508
#define SEXAGESIMAL_ 509
#define SHAPE_ 510
#define SHARED_ 511
#define SHIFT_ 512
#define SHMID_ 513
#define SHOW_ 514
#define SINH_ 515
#define SIZE_ 516
#define SLICE_ 517
#define SMMAP_ 518
#define SMOOTH_ 519
#define SOCKET_ 520
#define SOCKETGZ_ 521
#define SOURCE_ 522
#define SQRT_ 523
#define SQUARED_ 524
#define SSHARED_ 525
#define STATS_ 526
#define STATUS_ 527
#define SUPERGALACTIC_ 528
#define SUM_ 529
#define SYSTEM_ 530
#define TABLE_ 531
#define TAG_ 532
#define TEMPLATE_ 533
#define TEXT_ 534
#define THREADS_ 535
#define THREED_ 536
#define THRESHOLD_ 537
#define THICK_ 538
#define TRANSPARENCY_ 539
#define TO_ 540
#define TOGGLE_ 541
#define TOPHAT_ 542
#define TRUE_ 543
#define TYPE_ 544
#define UNDO_ 545
#define UNHIGHLITE_ 546
#define UNLOAD_ 547
#define UNSELECT_ 548
#define UPDATE_ 549
#define USER_ 550
#define VALUE_ 551
#define VAR_ 552
#define VIEW_ 553
#define VECTOR_ 554
#define VERSION_ 555
#define VERTEX_ 556
#define VERTICAL_ 557
#define WARP_ 558
#define WCS_ 559
#define WCSA_ 560
#define WCSB_ 561
#define WCSC_ 562
#define WCSD_ 563
#define WCSE_ 564
#define WCSF_ 565
#define WCSG_ 566
#define WCSH_ 567
#define WCSI_ 568
#define WCSJ_ 569
#define WCSK_ 570
#define WCSL_ 571
#define WCSM_ 572
#define WCSN_ 573
#define WCSO_ 574
#define WCSP_ 575
#define WCSQ_ 576
#define WCSR_ 577
#define WCSS_ 578
#define WCST_ 579
#define WCSU_ 580
#define WCSV_ 581
#define WCSW_ 582
#define WCSX_ 583
#define WCSY_ 584
#define WCSZ_ 585
#define WCS0_ 586
#define WFPC2_ 587
#define WIDTH_ 588
#define WIN32_ 589
#define XML_ 590
#define XY_ 591
#define YES_ 592
#define ZMAX_ 593
#define ZSCALE_ 594
#define ZOOM_ 595




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
#line 836 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 849 "frame/parser.C"

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
#define YYLAST   5475

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  345
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1262
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2802

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   595

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
       2,   344,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   342,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   343,   341,
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
     335,   336,   337,   338,   339,   340
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
    2466,  2476,  2483,  2490,  2498,  2509,  2521,  2534,  2544,  2550,
    2556,  2563,  2567,  2573,  2579,  2585,  2592,  2598,  2603,  2613,
    2624,  2636,  2646,  2653,  2660,  2667,  2674,  2681,  2688,  2695,
    2702,  2709,  2717,  2725,  2728,  2733,  2738,  2743,  2748,  2754,
    2759,  2764,  2770,  2776,  2780,  2785,  2790,  2795,  2802,  2810,
    2819,  2829,  2836,  2847,  2859,  2872,  2882,  2886,  2889,  2893,
    2899,  2906,  2914,  2919,  2923,  2927,  2934,  2941,  2948,  2956,
    2963,  2971,  2976,  2981,  2988,  2998,  3003,  3007,  3014,  3022,
    3030,  3033,  3037,  3041,  3045,  3050,  3053,  3056,  3061,  3069,
    3080,  3084,  3086,  3090,  3093,  3096,  3099,  3102,  3106,  3112,
    3117,  3123,  3126,  3134,  3138,  3141,  3144,  3148,  3151,  3154,
    3157,  3161,  3164,  3168,  3173,  3177,  3181,  3187,  3194,  3199,
    3202,  3206,  3209,  3212,  3217,  3221,  3225,  3228,  3232,  3234,
    3237,  3239,  3242,  3245,  3248,  3250,  3252,  3254,  3256,  3259,
    3261,  3264,  3267,  3269,  3272,  3275,  3277,  3280,  3282,  3284,
    3286,  3288,  3290,  3292,  3294,  3296,  3297,  3299,  3302,  3305,
    3308,  3312,  3318,  3326,  3334,  3341,  3348,  3355,  3362,  3368,
    3375,  3382,  3389,  3396,  3403,  3410,  3417,  3428,  3436,  3444,
    3452,  3462,  3472,  3483,  3496,  3509,  3512,  3515,  3519,  3524,
    3529,  3534,  3537,  3542,  3547,  3549,  3551,  3553,  3555,  3557,
    3559,  3561,  3563,  3566,  3568,  3570,  3572,  3576,  3580,  3585,
    3592,  3603,  3611,  3619,  3625,  3630,  3637,  3648,  3656,  3664,
    3670,  3673,  3676,  3680,  3685,  3691,  3697,  3703,  3707,  3712,
    3718,  3724,  3730,  3736,  3739,  3743,  3747,  3753,  3757,  3761,
    3765,  3770,  3776,  3782,  3788,  3794,  3798,  3803,  3809,  3815,
    3818,  3821,  3825,  3831,  3838,  3845,  3849,  3853,  3860,  3866,
    3872,  3875,  3879,  3885,  3892,  3896,  3899,  3902,  3906,  3909,
    3913,  3916,  3920,  3926,  3933,  3936,  3939,  3942,  3944,  3949,
    3954,  3956,  3959,  3962,  3965,  3968,  3971,  3974,  3977,  3981,
    3984,  3988,  3991,  3995,  3997,  3999,  4001,  4003,  4005,  4006,
    4009,  4010,  4013,  4014,  4016,  4017,  4018,  4020,  4022,  4024,
    4026,  4028,  4036,  4045,  4048,  4053,  4056,  4061,  4068,  4071,
    4073,  4075,  4079,  4083,  4085,  4089,  4094,  4097,  4099,  4103,
    4107,  4112,  4116,  4120,  4124,  4126,  4128,  4130,  4132,  4134,
    4136,  4138,  4140,  4142,  4144,  4146,  4148,  4150,  4152,  4155,
    4156,  4157,  4160,  4162,  4166,  4168,  4172,  4174,  4177,  4180,
    4182,  4186,  4187,  4188,  4191,  4194,  4196,  4200,  4206,  4208,
    4211,  4214,  4217,  4219,  4221,  4223,  4225,  4230,  4233,  4237,
    4241,  4244,  4248,  4251,  4254,  4257,  4261,  4265,  4269,  4272,
    4276,  4278,  4282,  4286,  4288,  4291,  4294,  4297,  4300,  4302,
    4304,  4306,  4308,  4311,  4314,  4318,  4322,  4324,  4327,  4331,
    4335,  4337,  4340,  4342,  4344,  4346,  4348,  4350,  4353,  4356,
    4361,  4363,  4366,  4369,  4372,  4376,  4378,  4380,  4382,  4385,
    4388,  4391,  4394,  4397,  4401,  4405,  4409,  4413,  4417,  4421,
    4425,  4427,  4430,  4433,  4436,  4440,  4443,  4447,  4451,  4454,
    4457,  4460,  4463,  4466,  4469,  4472,  4475,  4478,  4481,  4484,
    4487,  4490,  4493,  4497,  4501,  4505,  4508,  4511,  4514,  4517,
    4520,  4523,  4526,  4529,  4532,  4535,  4538,  4541,  4545,  4549,
    4553,  4558,  4561,  4563,  4565,  4567,  4569,  4570,  4576,  4578,
    4585,  4589,  4591,  4594,  4597,  4601,  4604,  4608,  4612,  4615,
    4618,  4621,  4624,  4627,  4630,  4634,  4637,  4640,  4644,  4646,
    4650,  4655,  4657,  4660,  4666,  4673,  4680,  4683,  4685,  4688,
    4691,  4697,  4704
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     346,     0,    -1,    96,   348,    -1,    20,   378,    -1,    44,
     380,    -1,    41,    66,     5,    -1,    46,   385,    -1,    59,
      -1,    64,    -1,    65,   387,    -1,    67,   277,     5,    -1,
      68,   392,    -1,    69,   394,    -1,    77,   395,    -1,    84,
     404,    -1,    86,   406,    -1,    87,   407,    -1,    95,   349,
      -1,   123,   408,    -1,   134,   409,    -1,   138,   451,    -1,
     141,   454,    -1,   146,    -1,   147,   349,    -1,   153,   460,
      -1,   160,    16,     4,    -1,   173,   463,    -1,   176,   481,
      -1,   177,   482,    -1,   178,   483,    -1,   181,   499,   484,
      -1,   182,   518,    -1,   194,    66,     5,    -1,   209,   519,
      -1,   210,   520,    -1,   211,   523,    -1,   231,    88,    -1,
     223,   524,    -1,   237,    -1,   234,   499,   526,    -1,   239,
     531,    -1,   241,   532,    -1,   246,   534,    -1,   259,    -1,
     264,   549,    -1,   280,     4,    -1,   281,   373,    -1,   292,
      -1,   294,   551,    -1,   300,    -1,   303,   553,    -1,   304,
     554,    -1,   334,   558,    -1,   340,   559,    -1,     3,    -1,
       4,    -1,   206,    -1,   205,    -1,    29,   349,    -1,   189,
     349,    -1,   212,   349,    -1,   214,   349,    -1,   304,   349,
      -1,    44,   349,    -1,    46,   349,    -1,    76,   349,    -1,
      84,   349,    -1,   139,   349,    -1,   239,   349,    -1,     4,
      -1,   337,    -1,   341,    -1,   206,    -1,   288,    -1,   199,
      -1,   342,    -1,   205,    -1,   118,    -1,    -1,   240,    38,
      -1,   130,    38,    -1,   240,    -1,   130,    -1,    -1,   352,
      -1,   347,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   353,   353,    -1,   354,   355,    -1,   355,
     355,    -1,   347,   347,    -1,   154,    -1,   216,    -1,   101,
      -1,    19,    -1,   358,    -1,   304,    -1,   305,    -1,   306,
      -1,   307,    -1,   308,    -1,   309,    -1,   310,    -1,   311,
      -1,   312,    -1,   313,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,
      -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,
      -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,   331,
      -1,    56,    -1,   211,    -1,   171,    -1,   175,    -1,   224,
      -1,   268,    -1,   269,    -1,    28,    -1,   260,    -1,   148,
      -1,    30,    -1,   248,    -1,   243,    -1,    94,    -1,   161,
      -1,    -1,   125,    -1,   126,    -1,    35,    -1,   127,    -1,
     162,    -1,   151,    -1,   132,    -1,   273,    -1,   106,    -1,
     145,    -1,    -1,    97,    -1,   254,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   258,    -1,   163,    -1,    -1,
      17,    -1,   156,    -1,    -1,   154,    -1,   182,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   343,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   149,
      -1,   218,    -1,   219,    -1,   232,    -1,   271,    -1,    -1,
      32,    -1,   274,    -1,    -1,   195,    -1,    42,    -1,    43,
      -1,   168,    -1,   169,    -1,   298,   377,    -1,    47,   374,
      -1,    74,   375,    -1,   147,   376,    -1,   184,   529,    -1,
      37,   530,    -1,   247,   347,    -1,   226,    -1,   282,   347,
      -1,   349,    -1,    66,     5,    -1,   349,    -1,    66,     5,
      -1,   349,    -1,    66,     5,    -1,   347,   347,    -1,   220,
     347,   347,   347,   347,   347,    -1,    40,   347,   347,    -1,
     191,   347,   347,    -1,   110,   347,   347,    -1,   237,    -1,
     255,   379,    -1,    62,   347,   347,    -1,   108,   347,   347,
      -1,    48,   347,   347,    -1,   222,   347,   347,    -1,   220,
     347,   347,    -1,   299,   347,   347,    -1,    22,   347,   347,
      -1,   109,   347,   347,    -1,    49,   347,   347,    -1,    12,
     381,    -1,    71,     5,     5,     5,    -1,   100,     4,    -1,
     117,   382,    -1,   131,   383,    -1,    53,   261,     4,    -1,
     285,   384,    -1,   120,     5,    -1,    59,    -1,   347,   347,
      -1,   347,    -1,   347,   347,    -1,   347,    12,   347,   347,
      -1,   347,   347,    12,   347,   347,    -1,   285,   347,    -1,
     285,   347,   347,    -1,   285,   347,    12,   347,   347,    -1,
     285,   347,   347,    12,   347,   347,    -1,    32,    -1,   274,
      -1,   121,    -1,   347,   347,    12,    59,     5,     5,     5,
      -1,   347,   347,     4,   347,   347,    12,    59,     5,     5,
       5,     5,    -1,   347,   347,    12,   347,   347,     5,     5,
       5,    -1,   347,   347,     4,   347,   347,    12,   347,   347,
       5,     5,     5,     5,    -1,   347,    -1,   347,   347,    -1,
     285,   386,    -1,   121,    -1,   347,    -1,   347,   347,    -1,
     250,   388,    -1,   190,   389,    -1,   185,   390,    -1,   295,
     347,   347,    -1,   339,   391,    -1,   226,   349,    -1,   135,
      -1,   174,    -1,   347,    -1,   185,    -1,   339,    -1,   338,
      -1,   295,    -1,     4,   361,    -1,   190,   361,    -1,   243,
       4,    -1,   347,     4,     4,    -1,    78,   347,    -1,   243,
       4,    -1,   170,     4,    -1,     4,   347,   347,     4,     6,
       4,    -1,   239,   347,   347,   347,   347,   347,   347,     4,
       6,     4,    -1,    40,    -1,   191,   393,    -1,   110,    -1,
       4,   347,   347,     4,     6,     4,    -1,   239,   347,   347,
     347,   347,   347,   347,     4,     6,     4,    -1,   360,    -1,
     175,   347,    -1,    83,   396,    -1,    99,   397,    -1,   173,
     398,    -1,   213,   402,    -1,   246,   403,    -1,     5,     4,
       4,   401,     4,     4,   360,   347,   399,   400,   347,   347,
       5,    -1,     5,     4,     4,   401,     4,     4,   360,   347,
     347,   400,   347,   347,     5,    -1,   222,    -1,    -1,    31,
      -1,     5,    -1,     5,     5,     4,   349,    -1,     5,     4,
     349,     5,   357,   362,    -1,   185,    -1,   339,    -1,   338,
      -1,   295,    -1,   135,    -1,   174,    -1,   264,    -1,    46,
      -1,     5,    -1,     5,     5,     4,   349,    -1,     5,   357,
     362,    -1,    31,     5,   357,   362,    -1,    -1,   347,   347,
     347,   347,   357,   362,    -1,    59,   356,   357,   362,   347,
     347,   357,   364,    -1,   281,   405,    -1,    40,   347,   347,
      -1,   191,   347,   347,    -1,   110,   347,   347,    -1,    -1,
     347,   347,   357,    -1,    40,   347,   347,     4,    -1,   191,
     347,   347,     4,    -1,   110,   347,   347,     4,    -1,   359,
     347,   347,    -1,   357,   362,   356,    -1,   349,    -1,   303,
     347,   347,    -1,    40,   191,   359,   347,   347,    -1,   191,
     359,   347,   347,    -1,    40,   191,   357,   356,    -1,   191,
     357,   356,    -1,    33,     4,    -1,   141,   116,     5,    -1,
      41,    66,    -1,    44,   410,    -1,    46,   412,    -1,    65,
     413,    -1,    68,   417,    -1,    67,   416,    -1,    69,   419,
      -1,    77,   421,    -1,    79,   424,    -1,    84,   425,    -1,
      86,   426,    -1,    88,   428,    -1,    87,   427,    -1,    93,
     429,    -1,    95,    -1,   122,   433,    -1,   138,   439,    -1,
     149,     5,     5,     4,    -1,   150,    89,     5,     5,   347,
     347,   359,    -1,   153,   431,    -1,   157,   430,    -1,   160,
      16,    -1,   185,    -1,   181,   499,   493,    -1,   182,   440,
      -1,   194,    66,    -1,   209,    -1,   210,   441,    -1,   217,
     276,   359,   347,   347,     4,     4,     5,    -1,   239,   442,
      -1,   241,    -1,   264,   443,    -1,   280,    -1,   281,   444,
      -1,   289,    -1,   296,   359,   347,   347,    -1,   302,    89,
       5,     5,   347,   347,   359,    -1,   304,   449,    -1,   340,
      -1,   100,    -1,   117,    -1,   131,    -1,    53,   261,    -1,
      88,    -1,   120,    -1,    71,   411,    -1,   172,    -1,    -1,
     185,     5,    -1,   103,     5,    -1,   117,    -1,    -1,   399,
     400,    -1,   347,   400,    -1,   250,    -1,   190,    -1,   185,
     414,    -1,   295,   167,    -1,   339,   415,    -1,   226,    -1,
     190,    -1,   243,    -1,    78,    -1,   243,    -1,   170,    -1,
      -1,   277,    -1,   167,   418,    -1,     4,    -1,     4,   359,
     347,   347,    -1,     4,   347,   347,   360,   347,    -1,    -1,
     167,   420,    -1,   175,    -1,     4,   347,   347,   360,   347,
      -1,   357,   362,    -1,    65,   422,    -1,    66,    -1,    91,
      -1,   167,    -1,   203,   167,    -1,   184,    -1,    69,   423,
      -1,   264,    -1,   333,    -1,    -1,   190,    -1,   250,    -1,
      -1,   175,    -1,   347,   347,   357,   362,   363,    -1,   359,
     347,   347,   357,   362,   363,    -1,   347,   357,   357,     4,
      -1,   357,   362,   363,    -1,    59,   357,   362,   363,   357,
     364,    -1,   281,   357,    -1,   359,    -1,   357,   362,   363,
      -1,   272,    -1,    33,    -1,   359,    -1,   357,   362,   363,
      -1,   357,   362,   356,   347,   347,     5,    -1,     4,   357,
     362,   356,   347,   347,     5,    -1,   359,   347,   347,     4,
       4,    -1,     5,    -1,    65,    -1,   359,   347,   347,     5,
      -1,     6,     4,     4,     4,     4,    -1,    88,    -1,   119,
     193,   432,    -1,    -1,     4,    -1,   347,   347,    -1,   196,
      -1,    59,   357,   362,   363,    -1,    81,    -1,   100,   436,
      -1,    45,    -1,   116,   434,    -1,   119,   193,   437,    -1,
     143,   435,    -1,   144,    -1,   204,   193,    -1,   261,    -1,
     261,   357,   362,   364,    -1,   262,   438,    -1,   333,    -1,
       4,    -1,   359,   347,   347,    -1,     4,    -1,   164,     5,
      -1,     4,   164,     5,    -1,   304,     4,    -1,    -1,     4,
      -1,   350,    -1,   350,   359,   347,   347,    -1,   350,     4,
      -1,    -1,     4,    -1,   357,    -1,     4,   357,    -1,    -1,
     208,    -1,   297,    -1,    66,    -1,   180,    -1,   284,    -1,
     226,    -1,    61,    -1,   275,    -1,   298,    -1,   131,    -1,
     233,    -1,   298,   448,    -1,    47,   445,    -1,    74,   446,
      -1,   147,   447,    -1,   184,    -1,    37,    -1,   247,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,
     220,    -1,    -1,    16,   450,    -1,   193,   358,    -1,    -1,
     221,    -1,    83,   452,    -1,    99,    -1,   357,   362,   363,
     453,     5,     5,    -1,   357,   362,   363,   453,     5,    -1,
      20,    -1,   229,    -1,    19,    -1,    44,   455,    -1,    77,
     456,    -1,    84,    -1,    94,    -1,    95,    -1,   101,    -1,
     122,   457,    -1,   138,    -1,   153,    -1,   161,    -1,   181,
     458,    -1,   216,    -1,   264,    -1,   275,   357,    -1,   304,
     459,    -1,    72,     5,    -1,    -1,    31,    -1,    -1,    44,
      -1,    87,    -1,   189,    -1,   147,    -1,   252,    -1,   213,
      -1,   290,    -1,   357,    -1,   114,   357,    -1,    58,   357,
      -1,    18,    -1,   281,   357,    -1,   197,     4,     4,    -1,
     115,    -1,   183,     5,    -1,    88,   462,    -1,   253,   119,
     193,   461,    -1,   253,     6,     4,     4,     4,     4,    -1,
     294,    -1,   304,   347,   347,   347,   347,   347,   347,   347,
     347,     4,    -1,     5,    -1,     5,     4,    -1,     4,     4,
      56,    -1,     4,     4,   357,    -1,   190,   349,    -1,    26,
     464,    -1,   111,   466,    -1,   122,   467,    -1,   156,   480,
      -1,   202,   478,    -1,   215,   479,    -1,     5,    14,     5,
     367,    -1,     5,    15,     5,   367,    -1,     5,    61,     5,
     367,    -1,     5,   187,   367,    -1,     5,   188,   367,    -1,
       5,   256,   365,     4,   367,    -1,     5,   265,     4,   367,
      -1,     5,   266,     4,   367,    -1,     5,   297,     5,   367,
      -1,   239,    87,   465,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   187,    -1,
       5,   188,    -1,     5,   256,   365,     4,    -1,     5,   265,
       4,    -1,     5,   266,     4,    -1,     5,   297,     5,    -1,
       5,     5,   263,    -1,     5,    14,     5,   367,    -1,     5,
      15,     5,   367,    -1,     5,    61,     5,   367,    -1,     5,
     187,   366,   367,    -1,     5,     5,   263,   366,   367,    -1,
       5,   188,   366,   367,    -1,     5,   256,   365,     4,   366,
     367,    -1,     5,   270,   365,     4,     4,   366,   367,    -1,
       5,   265,     4,   367,    -1,     5,   266,     4,   367,    -1,
       5,   297,     5,   366,   367,    -1,   262,   468,    -1,   116,
      87,   469,    -1,   239,   154,   477,    -1,   239,    87,   476,
      -1,   189,   470,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   187,   366,    -1,
       5,     5,   263,   366,    -1,     5,   188,   366,    -1,     5,
     256,   365,     4,   366,    -1,     5,   270,   365,     4,     4,
     366,    -1,     5,   265,     4,    -1,     5,   266,     4,    -1,
       5,   297,     5,   366,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   187,   366,
      -1,     5,   188,   366,    -1,     5,   256,   365,     4,   366,
      -1,     5,   265,     4,    -1,     5,   266,     4,    -1,     5,
     297,     5,   366,    -1,   154,   160,   471,    -1,   160,   472,
      -1,   154,   473,    -1,   474,    -1,   154,   332,   475,    -1,
       5,    14,     5,   367,    -1,     5,    15,     5,   367,    -1,
       5,    61,     5,   367,    -1,     5,   187,   366,   367,    -1,
       5,   188,   366,   367,    -1,     5,   256,   365,     4,   366,
     367,    -1,     5,   265,     4,   367,    -1,     5,   266,     4,
     367,    -1,     5,   297,     5,   366,   367,    -1,     5,    14,
       5,   367,    -1,     5,    15,     5,   367,    -1,     5,    61,
       5,   367,    -1,     5,   187,   366,   367,    -1,     5,     5,
     263,   366,   367,    -1,     5,   188,   366,   367,    -1,     5,
     256,   365,     4,   366,   367,    -1,     5,   270,   365,     4,
       4,   366,   367,    -1,     5,   265,     4,   367,    -1,     5,
     266,     4,   367,    -1,     5,   297,     5,   366,   367,    -1,
     358,     5,    14,     5,   367,    -1,   358,     5,    15,     5,
     367,    -1,   358,     5,    61,     5,   367,    -1,   358,     5,
     187,   366,   367,    -1,   358,     5,   188,   366,   367,    -1,
     358,     5,   256,   365,     4,   366,   367,    -1,   358,     5,
     265,     4,   367,    -1,   358,     5,   266,     4,   367,    -1,
     358,     5,   297,     5,   366,   367,    -1,   358,     5,    14,
       5,   367,    -1,   358,     5,    15,     5,   367,    -1,   358,
       5,    61,     5,   367,    -1,   358,     5,   187,   366,   367,
      -1,   358,     5,     5,   263,   366,   367,    -1,   358,     5,
     188,   366,   367,    -1,   358,     5,   256,   365,     4,   366,
     367,    -1,   358,     5,   270,   365,     4,     4,   366,   367,
      -1,   358,     5,   265,     4,   367,    -1,   358,     5,   266,
       4,   367,    -1,   358,     5,   297,     5,   366,   367,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   187,   366,    -1,     5,   188,   366,    -1,
       5,   256,   365,     4,   366,    -1,     5,   265,     4,    -1,
       5,   266,     4,    -1,     5,   297,     5,   366,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   187,   366,    -1,     5,     5,   263,   366,    -1,
       5,   188,   366,    -1,     5,   256,   365,     4,   366,    -1,
       5,   270,   365,     4,     4,   366,    -1,     5,   265,     4,
      -1,     5,   266,     4,    -1,     5,   297,     5,   366,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   187,   366,    -1,     5,   188,   366,    -1,
       5,   256,   365,     4,   366,    -1,     5,   265,     4,    -1,
       5,   266,     4,    -1,     5,   297,     5,   366,    -1,     5,
      14,     5,   367,    -1,     5,    61,     5,   367,    -1,     5,
     187,   367,    -1,     5,   256,   365,     4,   367,    -1,     5,
     265,     4,   367,    -1,     5,   297,     5,   367,    -1,     5,
       5,    -1,   262,     5,     5,    -1,    93,     4,     4,     4,
       4,     4,    -1,   185,     4,     4,     4,     4,     4,    -1,
     110,    -1,   225,    -1,   349,    -1,   136,   349,    -1,    88,
     349,    -1,    66,     5,    -1,     5,     4,     4,    -1,   294,
     347,   347,    -1,   340,   347,    -1,     5,     5,   358,   362,
       5,     5,   358,   362,   347,   358,   364,     5,    -1,    60,
     487,    -1,    66,     5,    -1,    80,    -1,    73,   492,     5,
      -1,    73,   492,   297,     5,    -1,    75,    99,    -1,    -1,
      83,   485,   488,    -1,    89,    -1,    99,    -1,    99,    17,
      -1,   105,   491,    -1,   113,     4,    -1,   128,     5,    -1,
     147,    17,    -1,   147,   207,   347,   347,    -1,   147,   286,
     347,   347,    -1,     4,    20,   370,   349,    -1,     4,    21,
     352,    -1,     4,    21,   352,   359,    -1,     4,    21,   352,
     357,   362,    -1,     4,    22,   233,   347,   347,     4,   359,
      -1,     4,    22,   233,   347,   347,     4,   357,   364,    -1,
       4,    22,   233,     5,   357,   364,    -1,     4,    49,   233,
     347,   347,   347,     4,   359,    -1,     4,    49,   233,   347,
     347,   347,     4,   357,   364,    -1,     4,    49,   233,     5,
     357,   364,    -1,     4,    48,   233,   347,   347,   359,    -1,
       4,    48,   233,   347,   347,   357,   364,    -1,     4,    52,
     105,   352,   352,     4,   347,   347,   347,     4,    -1,     4,
      52,   105,   352,   352,     4,   347,   347,   347,     4,   359,
      -1,     4,    52,   105,   352,   352,     4,   347,   347,   347,
       4,   357,   362,    -1,     4,    52,   105,     5,     5,   357,
     362,   357,   364,    -1,     4,    55,   486,     5,     5,    -1,
       4,    62,   233,   347,   359,    -1,     4,    62,   233,   347,
     357,   364,    -1,     4,    66,     5,    -1,     4,    74,    27,
     349,   349,    -1,     4,    74,   165,     5,     5,    -1,     4,
      74,   233,   347,   359,    -1,     4,    74,   233,   347,   357,
     364,    -1,     4,    74,   275,   357,   362,    -1,     4,    75,
     135,   349,    -1,     4,    82,   105,   352,   352,     4,   347,
     347,     4,    -1,     4,    82,   105,   352,   352,     4,   347,
     347,     4,   359,    -1,     4,    82,   105,   352,   352,     4,
     347,   347,     4,   357,   362,    -1,     4,    82,   105,     5,
       5,   357,   362,   357,   364,    -1,     4,    83,    22,   233,
     347,   347,    -1,     4,    83,    49,   233,   347,   347,    -1,
       4,    83,    52,    21,   347,   347,    -1,     4,    83,    52,
     233,   347,   347,    -1,     4,    83,   109,   233,   347,   347,
      -1,     4,    83,   112,    21,   347,   347,    -1,     4,    83,
     112,   233,   347,   347,    -1,     4,    83,    82,    21,   347,
     347,    -1,     4,    83,    82,   233,   347,   347,    -1,     4,
      83,   222,   301,     4,   347,   347,    -1,     4,    83,   251,
     301,     4,   347,   347,    -1,     4,    99,    -1,     4,    99,
      22,     4,    -1,     4,    99,    49,     4,    -1,     4,    99,
      52,     4,    -1,     4,    99,   109,     4,    -1,     4,    99,
      55,   486,     5,    -1,     4,    99,   112,     4,    -1,     4,
      99,    82,     4,    -1,     4,    99,   222,   301,     4,    -1,
       4,    99,   251,   301,     4,    -1,     4,    99,   277,    -1,
       4,    99,   277,     5,    -1,     4,    99,   277,     4,    -1,
       4,   105,    40,     4,    -1,     4,   108,   233,   347,   347,
     359,    -1,     4,   108,   233,   347,   347,   357,   364,    -1,
       4,   109,   233,   347,   347,   347,     4,   359,    -1,     4,
     109,   233,   347,   347,   347,     4,   357,   364,    -1,     4,
     109,   233,     5,   357,   364,    -1,     4,   112,   105,   352,
     352,     4,   347,   347,   347,     4,    -1,     4,   112,   105,
     352,   352,     4,   347,   347,   347,     4,   359,    -1,     4,
     112,   105,   352,   352,     4,   347,   347,   347,     4,   357,
     362,    -1,     4,   112,   105,     5,     5,   357,   362,   357,
     364,    -1,     4,   128,     5,    -1,     4,   147,    -1,     4,
     147,   207,    -1,     4,   170,    27,   349,   349,    -1,     4,
     170,   220,   359,   356,   356,    -1,     4,   170,   220,   357,
     362,   356,   356,    -1,     4,   192,   347,   347,    -1,     4,
     192,   129,    -1,     4,   192,    36,    -1,     4,   192,   285,
     359,   347,   347,    -1,     4,   192,   285,   357,   362,   356,
      -1,     4,   222,   237,   347,   347,   359,    -1,     4,   222,
     237,   347,   347,   357,   364,    -1,     4,   251,   237,   347,
     347,   359,    -1,     4,   251,   237,   347,   347,   357,   364,
      -1,     4,   220,   255,   368,    -1,     4,   220,   261,     4,
      -1,     4,   227,   359,   356,   356,   347,    -1,     4,   227,
     357,   362,   356,   356,   347,   357,   364,    -1,     4,   228,
     505,   349,    -1,     4,   241,    40,    -1,     4,   242,   220,
     359,   356,   356,    -1,     4,   242,   220,   357,   362,   356,
     356,    -1,     4,   242,   275,   357,   362,   357,   364,    -1,
       4,   252,    -1,     4,   252,   207,    -1,     4,   277,     5,
      -1,     4,   279,     5,    -1,     4,   279,   241,   349,    -1,
       4,   291,    -1,     4,   293,    -1,     4,   299,    27,   349,
      -1,     4,   299,   220,   359,   356,   347,   352,    -1,     4,
     299,   220,   357,   362,   356,   357,   364,   347,   352,    -1,
       4,   333,     4,    -1,   163,    -1,   163,   347,   347,    -1,
     172,   500,    -1,   173,   501,    -1,   192,   502,    -1,   226,
     349,    -1,   228,   505,   349,    -1,   228,   505,   349,   347,
     347,    -1,   241,    40,   347,   347,    -1,   241,   191,   347,
     347,     4,    -1,   241,   110,    -1,   246,     5,   492,   357,
     362,   363,   349,    -1,   246,   278,     5,    -1,   252,   509,
      -1,   259,   510,    -1,     5,    66,     5,    -1,     5,    80,
      -1,     5,    99,    -1,     5,    89,    -1,     5,   128,     5,
      -1,     5,   147,    -1,     5,   147,   207,    -1,     5,   192,
     347,   347,    -1,     5,   192,   129,    -1,     5,   192,    36,
      -1,     5,   192,   285,   359,   356,    -1,     5,   192,   285,
     357,   362,   356,    -1,     5,   228,   505,   349,    -1,     5,
     252,    -1,     5,   252,   207,    -1,     5,   291,    -1,     5,
     293,    -1,   277,   105,     5,     5,    -1,   277,    99,     5,
      -1,   277,    99,    17,    -1,   277,     5,    -1,   277,   294,
       5,    -1,   213,    -1,   213,   357,    -1,   290,    -1,   291,
      17,    -1,   293,    17,    -1,   333,     4,    -1,   252,    -1,
     293,    -1,   147,    -1,   291,    -1,    40,   192,    -1,   192,
      -1,   110,   192,    -1,    40,   105,    -1,   105,    -1,   110,
     105,    -1,    40,   241,    -1,   241,    -1,   110,   241,    -1,
      99,    -1,   279,    -1,    66,    -1,   333,    -1,   228,    -1,
     128,    -1,   163,    -1,   294,    -1,    -1,     4,    -1,    30,
     349,    -1,   233,   347,    -1,   159,     4,    -1,   208,     4,
     347,    -1,    62,   347,   347,   347,   506,    -1,   108,   347,
     347,   347,   347,   351,   506,    -1,    48,   347,   347,   347,
     347,   351,   506,    -1,   222,   347,   347,   347,   347,   506,
      -1,   251,   347,   347,   347,   347,   506,    -1,   170,   347,
     347,   347,   347,   506,    -1,   299,   347,   347,   347,   347,
     506,    -1,   279,   347,   347,   351,   506,    -1,    62,   220,
     347,   347,   369,   506,    -1,    48,   220,   347,   347,   369,
     506,    -1,   102,   220,   347,   347,   369,   506,    -1,    85,
     220,   347,   347,   369,   506,    -1,   343,   220,   347,   347,
     369,   506,    -1,    27,   220,   347,   347,   369,   506,    -1,
      51,   220,   347,   347,   369,   506,    -1,   242,   347,   347,
     347,   347,   357,   362,   357,   364,   506,    -1,    74,   347,
     347,   347,   357,   362,   506,    -1,   227,   347,   347,   347,
     347,   347,   506,    -1,    22,   347,   347,   347,   347,     4,
     506,    -1,   109,   347,   347,   347,   347,   347,     4,   351,
     506,    -1,    49,   347,   347,   347,   347,   347,     4,   351,
     506,    -1,    82,   347,   347,   352,   352,     4,   347,   347,
       4,   506,    -1,   112,   347,   347,   352,   352,     4,   347,
     347,   347,     4,   351,   506,    -1,    52,   347,   347,   352,
     352,     4,   347,   347,   347,     4,   351,   506,    -1,    75,
     506,    -1,   278,   489,    -1,     5,   347,   347,    -1,   297,
       5,   347,   347,    -1,   347,   347,   297,     5,    -1,     5,
     357,   362,   356,    -1,     4,     4,    -1,    40,   347,   347,
       4,    -1,   191,   347,   347,     4,    -1,   110,    -1,   104,
      -1,   335,    -1,    63,    -1,   245,    -1,   244,    -1,   230,
      -1,   336,    -1,    60,   494,    -1,    66,    -1,   128,    -1,
     113,    -1,   140,   347,   347,    -1,   152,   347,   347,    -1,
     146,    20,    82,   357,    -1,   146,    20,   149,     5,     5,
       4,    -1,   146,    20,   218,     5,     5,     5,     5,   357,
     362,   371,    -1,   146,    20,   219,     5,     5,   357,   371,
      -1,   146,    20,   232,     5,     5,     5,   357,    -1,   146,
      20,   271,   357,   362,    -1,     4,    20,    82,   357,    -1,
       4,    20,   149,     5,     5,     4,    -1,     4,    20,   218,
       5,     5,     5,     5,   357,   362,   371,    -1,     4,    20,
     219,     5,     5,   357,   371,    -1,     4,    20,   232,     5,
       5,     5,   357,    -1,     4,    20,   271,   357,   362,    -1,
     152,    17,    -1,     4,    21,    -1,     4,    21,   359,    -1,
       4,    21,   357,   362,    -1,     4,    22,   233,   357,   364,
      -1,     4,    49,   233,   357,   364,    -1,     4,    48,   233,
     357,   364,    -1,     4,    52,    21,    -1,     4,    52,    21,
     359,    -1,     4,    52,    21,   357,   362,    -1,     4,    52,
     233,   357,   364,    -1,     4,    59,   357,   362,   363,    -1,
       4,    62,   233,   357,   364,    -1,     4,    66,    -1,     4,
      74,    27,    -1,     4,    74,   165,    -1,     4,    74,   233,
     357,   364,    -1,     4,    74,   275,    -1,     4,    75,   135,
      -1,     4,    82,    21,    -1,     4,    82,    21,   359,    -1,
       4,    82,    21,   357,   362,    -1,     4,    82,   233,   357,
     364,    -1,     4,   108,   233,   357,   364,    -1,     4,   109,
     233,   357,   364,    -1,     4,   112,    21,    -1,     4,   112,
      21,   359,    -1,     4,   112,    21,   357,   362,    -1,     4,
     112,   233,   357,   364,    -1,     4,   128,    -1,     4,   147,
      -1,     4,   170,    27,    -1,     4,   170,   166,   357,   364,
      -1,     4,   170,   220,   357,   362,   363,    -1,     4,   179,
     166,   347,   357,   364,    -1,     4,   220,   255,    -1,     4,
     220,   261,    -1,     4,   227,   220,   357,   362,   363,    -1,
       4,   227,   166,   357,   364,    -1,     4,   227,   283,   357,
     364,    -1,     4,   228,    -1,     4,   228,   505,    -1,     4,
     242,   166,   357,   364,    -1,     4,   242,   220,   357,   362,
     363,    -1,     4,   242,   275,    -1,     4,   252,    -1,     4,
     277,    -1,     4,   277,     4,    -1,     4,   279,    -1,     4,
     279,   241,    -1,     4,   289,    -1,     4,   299,    27,    -1,
       4,   299,   166,   357,   364,    -1,     4,   299,   220,   357,
     362,   363,    -1,     4,   333,    -1,   147,   495,    -1,   147,
     203,    -1,   203,    -1,   222,   251,   347,   347,    -1,   251,
     251,   347,   347,    -1,   226,    -1,   228,   505,    -1,   252,
     496,    -1,   252,   203,    -1,   259,   497,    -1,     5,    66,
      -1,     5,   128,    -1,     5,   152,    -1,     5,   228,   505,
      -1,     5,   277,    -1,     5,   277,   203,    -1,   277,    17,
      -1,   277,    98,   193,    -1,   333,    -1,    30,    -1,   233,
      -1,   159,    -1,   208,    -1,    -1,   347,   347,    -1,    -1,
     347,   347,    -1,    -1,   279,    -1,    -1,    -1,   221,    -1,
     234,    -1,   295,    -1,    57,    -1,    20,    -1,   492,   357,
     362,   363,   349,   507,   513,    -1,   252,   492,   357,   362,
     363,   349,   507,   513,    -1,   492,     5,    -1,   492,     5,
     357,   362,    -1,   492,     4,    -1,   492,     4,   357,   362,
      -1,   122,     5,     5,   490,     4,     5,    -1,   347,   347,
      -1,   129,    -1,    36,    -1,    40,   347,   347,    -1,   191,
     347,   347,    -1,   110,    -1,   285,   359,   356,    -1,   285,
     357,   362,   356,    -1,   503,   504,    -1,   504,    -1,   505,
     344,   349,    -1,    66,   344,     5,    -1,    92,   344,     4,
       4,    -1,   333,   344,     4,    -1,   128,   344,     5,    -1,
     279,   344,     5,    -1,   516,    -1,   517,    -1,   200,    -1,
     252,    -1,   147,    -1,    91,    -1,   124,    -1,   105,    -1,
     192,    -1,   241,    -1,    99,    -1,   155,    -1,   267,    -1,
     498,    -1,   498,   503,    -1,    -1,    -1,   508,   511,    -1,
      17,    -1,   207,   347,   347,    -1,   286,    -1,   286,   347,
     347,    -1,   349,    -1,   279,   349,    -1,   511,   512,    -1,
     512,    -1,   505,   344,   349,    -1,    -1,    -1,   514,   515,
      -1,   515,   516,    -1,   516,    -1,   277,   344,     5,    -1,
      55,   344,   486,     5,     5,    -1,    64,    -1,    66,     5,
      -1,   180,     4,    -1,   284,   347,    -1,   343,    -1,   341,
      -1,   336,    -1,   200,    -1,   347,   347,   347,   347,    -1,
     347,   347,    -1,   359,   347,   347,    -1,   357,   362,   356,
      -1,   285,   521,    -1,    39,   347,   347,    -1,   191,   522,
      -1,   226,   349,    -1,   347,   347,    -1,   359,   347,   347,
      -1,   357,   362,   356,    -1,    40,   347,   347,    -1,   347,
     347,    -1,   110,   347,   347,    -1,   349,    -1,   304,   358,
     362,    -1,     5,     4,     4,    -1,   294,    -1,    70,   525,
      -1,   167,     4,    -1,   238,     4,    -1,   247,   347,    -1,
      54,    -1,   137,    -1,   239,    -1,    90,    -1,   147,   527,
      -1,   252,   528,    -1,    40,   347,   347,    -1,   191,   347,
     347,    -1,   110,    -1,   257,   110,    -1,    40,   347,   347,
      -1,   191,   347,   347,    -1,   110,    -1,   257,   110,    -1,
     186,    -1,    13,    -1,   200,    -1,    34,    -1,   107,    -1,
      61,     5,    -1,   275,   357,    -1,   298,     4,     4,     4,
      -1,   347,    -1,   347,    97,    -1,   191,   533,    -1,   285,
     347,    -1,   285,   347,    97,    -1,    40,    -1,   347,    -1,
     110,    -1,    26,   535,    -1,   122,   537,    -1,   202,   547,
      -1,   111,   548,    -1,   215,     5,    -1,   119,     5,   372,
      -1,    61,     5,   372,    -1,   265,     4,   372,    -1,   239,
      87,   536,    -1,   119,     5,   372,    -1,    61,     5,   372,
      -1,   265,     4,   372,    -1,   538,    -1,   154,   538,    -1,
     276,   539,    -1,   262,   540,    -1,   116,    87,   541,    -1,
     189,   542,    -1,   239,   154,   544,    -1,   239,    87,   545,
      -1,   236,   546,    -1,   119,     5,    -1,    61,     5,    -1,
     265,     4,    -1,   119,     5,    -1,    61,     5,    -1,   265,
       4,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   119,     5,    -1,    61,     5,    -1,   265,     4,    -1,
     154,   543,    -1,   119,     5,     4,    -1,    61,     5,     4,
      -1,   265,     4,     4,    -1,   119,     5,    -1,    61,     5,
      -1,   265,     4,    -1,   119,     5,    -1,    61,     5,    -1,
     265,     4,    -1,   119,     5,    -1,    61,     5,    -1,   265,
       4,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   119,     5,   372,    -1,    61,     5,   372,    -1,   265,
       4,   372,    -1,   119,     5,     5,   372,    -1,   550,     4,
      -1,    99,    -1,    50,    -1,   133,    -1,   287,    -1,    -1,
       4,   347,   347,   347,   347,    -1,   201,    -1,   201,     4,
     347,   347,   347,   347,    -1,   122,   262,   552,    -1,     4,
      -1,   347,   357,    -1,     4,     4,    -1,     4,   347,   357,
      -1,   347,   347,    -1,   285,   347,   347,    -1,   358,   362,
     363,    -1,    16,   557,    -1,   237,     4,    -1,   235,   556,
      -1,    23,   555,    -1,     4,     4,    -1,     4,     5,    -1,
     279,     4,     5,    -1,     4,     4,    -1,     4,     5,    -1,
     279,     4,     5,    -1,     4,    -1,     4,   358,   362,    -1,
       4,     6,   358,   362,    -1,   225,    -1,   347,   347,    -1,
     347,   347,    12,   347,   347,    -1,   347,   347,    12,   359,
     347,   347,    -1,   347,   347,    12,   357,   362,   356,    -1,
     285,   560,    -1,   121,    -1,   121,   347,    -1,   347,   347,
      -1,   347,   347,    12,   347,   347,    -1,   347,   347,    12,
     359,   347,   347,    -1,   347,   347,    12,   357,   362,   356,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   446,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   500,   501,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   519,
     521,   522,   523,   524,   526,   527,   528,   529,   532,   533,
     534,   535,   536,   539,   540,   543,   544,   545,   548,   551,
     554,   557,   569,   576,   583,   591,   592,   593,   594,   595,
     598,   599,   600,   601,   602,   603,   604,   605,   606,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,   617,
     618,   619,   620,   621,   622,   623,   624,   625,   628,   629,
     632,   633,   634,   635,   636,   637,   638,   639,   642,   643,
     644,   645,   646,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   662,   663,   664,   667,   668,   669,
     670,   673,   674,   675,   678,   679,   680,   683,   684,   685,
     688,   689,   690,   691,   692,   693,   694,   695,   698,   699,
     702,   703,   704,   705,   706,   707,   710,   711,   712,   715,
     716,   717,   718,   719,   720,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   735,   736,   739,   740,   743,   744,
     747,   748,   750,   751,   752,   755,   756,   759,   761,   763,
     765,   767,   769,   771,   773,   775,   779,   780,   781,   782,
     783,   784,   785,   786,   789,   790,   793,   794,   795,   797,
     799,   800,   801,   803,   807,   808,   811,   812,   814,   817,
     819,   825,   826,   827,   830,   831,   832,   835,   836,   837,
     838,   839,   840,   846,   847,   850,   851,   852,   853,   854,
     857,   858,   859,   862,   863,   868,   873,   880,   882,   884,
     885,   886,   889,   891,   894,   895,   898,   899,   900,   901,
     902,   905,   907,   909,   912,   913,   916,   917,   918,   925,
     926,   927,   928,   931,   932,   935,   936,   939,   940,   943,
     945,   949,   950,   953,   955,   956,   957,   958,   961,   962,
     963,   964,   965,   968,   970,   972,   973,   975,   977,   979,
     981,   985,   988,   991,   992,   993,   994,   995,   996,   997,
     998,   999,  1000,  1001,  1002,  1003,  1004,  1005,  1006,  1007,
    1008,  1009,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1030,
    1032,  1033,  1036,  1037,  1038,  1039,  1040,  1041,  1042,  1043,
    1046,  1047,  1048,  1051,  1054,  1055,  1057,  1059,  1060,  1061,
    1062,  1063,  1064,  1071,  1072,  1075,  1076,  1077,  1080,  1081,
    1084,  1087,  1088,  1090,  1094,  1095,  1096,  1099,  1103,  1105,
    1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,  1116,  1117,
    1118,  1121,  1122,  1125,  1127,  1133,  1137,  1139,  1141,  1144,
    1145,  1147,  1150,  1153,  1154,  1158,  1160,  1163,  1168,  1169,
    1170,  1174,  1175,  1176,  1179,  1180,  1181,  1184,  1185,  1187,
    1188,  1189,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1198,
    1199,  1202,  1203,  1206,  1207,  1208,  1209,  1212,  1213,  1216,
    1218,  1221,  1225,  1226,  1227,  1228,  1231,  1232,  1233,  1236,
    1237,  1238,  1241,  1244,  1245,  1246,  1249,  1250,  1253,  1254,
    1255,  1256,  1257,  1258,  1259,  1262,  1263,  1266,  1267,  1270,
    1271,  1274,  1275,  1278,  1279,  1280,  1283,  1284,  1287,  1288,
    1291,  1294,  1302,  1303,  1306,  1307,  1308,  1309,  1310,  1311,
    1312,  1313,  1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,
    1324,  1327,  1328,  1331,  1332,  1333,  1334,  1337,  1338,  1339,
    1340,  1343,  1344,  1345,  1346,  1347,  1350,  1351,  1352,  1353,
    1354,  1355,  1357,  1358,  1363,  1364,  1367,  1369,  1371,  1374,
    1375,  1376,  1377,  1378,  1379,  1382,  1384,  1386,  1388,  1389,
    1391,  1393,  1395,  1397,  1399,  1402,  1403,  1404,  1405,  1406,
    1407,  1409,  1410,  1411,  1414,  1417,  1419,  1421,  1423,  1425,
    1427,  1429,  1431,  1434,  1436,  1438,  1440,  1441,  1442,  1443,
    1444,  1447,  1448,  1449,  1450,  1451,  1452,  1453,  1455,  1457,
    1458,  1459,  1462,  1463,  1464,  1465,  1466,  1467,  1469,  1470,
    1471,  1474,  1475,  1476,  1477,  1478,  1481,  1484,  1487,  1490,
    1493,  1496,  1499,  1502,  1505,  1510,  1513,  1516,  1519,  1522,
    1525,  1528,  1531,  1534,  1537,  1540,  1545,  1548,  1551,  1554,
    1557,  1560,  1563,  1566,  1569,  1574,  1577,  1580,  1583,  1586,
    1589,  1592,  1595,  1598,  1601,  1604,  1609,  1611,  1612,  1613,
    1614,  1615,  1617,  1618,  1619,  1621,  1622,  1623,  1624,  1625,
    1626,  1627,  1629,  1631,  1632,  1633,  1636,  1637,  1638,  1639,
    1640,  1641,  1643,  1644,  1645,  1648,  1650,  1652,  1653,  1655,
    1657,  1661,  1662,  1665,  1666,  1667,  1670,  1677,  1678,  1679,
    1680,  1681,  1682,  1683,  1686,  1694,  1695,  1696,  1697,  1699,
    1701,  1702,  1702,  1703,  1704,  1705,  1706,  1707,  1708,  1710,
    1711,  1713,  1716,  1719,  1720,  1721,  1724,  1726,  1729,  1732,
    1735,  1739,  1742,  1744,  1747,  1750,  1754,  1759,  1764,  1766,
    1768,  1770,  1771,  1773,  1775,  1777,  1779,  1781,  1782,  1784,
    1786,  1790,  1795,  1797,  1799,  1801,  1803,  1805,  1807,  1809,
    1811,  1813,  1815,  1818,  1819,  1821,  1823,  1824,  1826,  1828,
    1829,  1830,  1832,  1834,  1835,  1836,  1838,  1839,  1841,  1844,
    1848,  1852,  1855,  1858,  1862,  1867,  1873,  1874,  1875,  1877,
    1878,  1880,  1884,  1886,  1887,  1888,  1890,  1893,  1895,  1898,
    1900,  1903,  1905,  1907,  1910,  1915,  1918,  1919,  1922,  1925,
    1929,  1930,  1932,  1933,  1934,  1936,  1937,  1939,  1940,  1942,
    1947,  1949,  1950,  1952,  1953,  1954,  1955,  1956,  1957,  1959,
    1961,  1963,  1964,  1966,  1967,  1969,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1983,  1985,  1987,
    1988,  1989,  1990,  1992,  1993,  1994,  1995,  1996,  1998,  1999,
    2000,  2001,  2002,  2003,  2006,  2007,  2008,  2009,  2010,  2011,
    2012,  2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,
    2022,  2023,  2024,  2025,  2026,  2029,  2030,  2031,  2032,  2033,
    2034,  2042,  2049,  2058,  2067,  2074,  2081,  2089,  2097,  2104,
    2109,  2114,  2119,  2124,  2129,  2134,  2140,  2149,  2159,  2169,
    2176,  2186,  2196,  2205,  2217,  2230,  2235,  2238,  2240,  2242,
    2247,  2251,  2254,  2256,  2258,  2261,  2262,  2263,  2264,  2265,
    2266,  2267,  2270,  2271,  2272,  2273,  2274,  2275,  2277,  2279,
    2281,  2283,  2285,  2287,  2290,  2292,  2294,  2296,  2298,  2300,
    2303,  2304,  2305,  2306,  2308,  2311,  2313,  2315,  2316,  2317,
    2319,  2322,  2325,  2327,  2328,  2329,  2330,  2332,  2333,  2334,
    2335,  2336,  2338,  2340,  2342,  2345,  2346,  2347,  2349,  2351,
    2352,  2353,  2354,  2356,  2359,  2363,  2364,  2365,  2368,  2371,
    2373,  2374,  2375,  2377,  2380,  2381,  2383,  2384,  2385,  2386,
    2387,  2389,  2390,  2392,  2395,  2396,  2397,  2398,  2399,  2401,
    2403,  2404,  2405,  2406,  2408,  2410,  2411,  2412,  2413,  2414,
    2415,  2417,  2418,  2420,  2423,  2424,  2425,  2426,  2429,  2430,
    2433,  2434,  2437,  2438,  2441,  2454,  2455,  2459,  2460,  2464,
    2465,  2468,  2473,  2480,  2482,  2485,  2487,  2490,  2494,  2495,
    2496,  2497,  2498,  2499,  2500,  2502,  2506,  2507,  2510,  2511,
    2512,  2513,  2514,  2515,  2516,  2517,  2520,  2521,  2522,  2523,
    2524,  2525,  2526,  2527,  2528,  2529,  2530,  2533,  2534,  2537,
    2538,  2538,  2541,  2542,  2543,  2544,  2547,  2548,  2551,  2552,
    2555,  2559,  2560,  2560,  2563,  2564,  2567,  2570,  2574,  2575,
    2576,  2577,  2580,  2581,  2582,  2583,  2586,  2588,  2589,  2594,
    2596,  2597,  2598,  2599,  2602,  2603,  2608,  2612,  2613,  2614,
    2617,  2618,  2623,  2624,  2627,  2629,  2630,  2631,  2636,  2637,
    2638,  2639,  2642,  2643,  2646,  2648,  2650,  2651,  2654,  2656,
    2657,  2658,  2661,  2662,  2665,  2666,  2667,  2670,  2671,  2672,
    2675,  2676,  2677,  2678,  2679,  2682,  2683,  2684,  2687,  2688,
    2689,  2690,  2691,  2694,  2696,  2698,  2700,  2703,  2705,  2707,
    2710,  2711,  2712,  2713,  2714,  2715,  2716,  2717,  2718,  2721,
    2722,  2723,  2726,  2727,  2728,  2731,  2732,  2733,  2736,  2737,
    2738,  2741,  2742,  2743,  2744,  2747,  2748,  2749,  2752,  2753,
    2754,  2757,  2758,  2759,  2762,  2763,  2764,  2767,  2769,  2771,
    2775,  2779,  2780,  2783,  2784,  2785,  2788,  2789,  2791,  2792,
    2794,  2797,  2798,  2799,  2800,  2803,  2804,  2807,  2809,  2810,
    2811,  2812,  2815,  2816,  2817,  2820,  2821,  2822,  2825,  2826,
    2831,  2835,  2842,  2843,  2845,  2850,  2852,  2855,  2856,  2857,
    2858,  2860,  2865
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
  "FILE_", "FILTER_", "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_",
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
     595,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   345,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   347,   347,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   350,   350,
     350,   350,   350,   351,   351,   352,   352,   352,   353,   354,
     355,   356,   356,   356,   356,   357,   357,   357,   357,   357,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   359,   359,
     360,   360,   360,   360,   360,   360,   360,   360,   361,   361,
     361,   361,   361,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   363,   363,   363,   364,   364,   364,
     364,   365,   365,   365,   366,   366,   366,   367,   367,   367,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   369,
     370,   370,   370,   370,   370,   370,   371,   371,   371,   372,
     372,   372,   372,   372,   372,   373,   373,   373,   373,   373,
     373,   373,   373,   373,   374,   374,   375,   375,   376,   376,
     377,   377,   377,   377,   377,   378,   378,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   380,   380,   380,   380,
     380,   380,   380,   380,   381,   381,   382,   382,   382,   382,
     382,   382,   382,   382,   383,   383,   384,   384,   384,   384,
     384,   385,   385,   385,   386,   386,   386,   387,   387,   387,
     387,   387,   387,   388,   388,   389,   389,   389,   389,   389,
     390,   390,   390,   391,   391,   391,   391,   392,   392,   392,
     392,   392,   393,   393,   394,   394,   395,   395,   395,   395,
     395,   396,   396,   396,   397,   397,   398,   398,   398,   399,
     399,   399,   399,   400,   400,   401,   401,   402,   402,   403,
     403,   404,   404,   404,   404,   404,   404,   404,   405,   405,
     405,   405,   405,   406,   406,   406,   406,   406,   406,   406,
     406,   407,   408,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   411,   412,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   414,   414,   415,   415,   415,   416,   416,
     417,   418,   418,   418,   419,   419,   419,   420,   421,   421,
     421,   421,   421,   421,   421,   421,   421,   421,   422,   422,
     422,   423,   423,   424,   424,   424,   425,   425,   425,   426,
     426,   426,   427,   428,   428,   429,   429,   429,   430,   430,
     430,   431,   431,   431,   432,   432,   432,   433,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   434,   434,   435,   435,   435,   435,   436,   436,   437,
     437,   437,   438,   438,   438,   438,   439,   439,   439,   440,
     440,   440,   441,   442,   442,   442,   443,   443,   444,   444,
     444,   444,   444,   444,   444,   445,   445,   446,   446,   447,
     447,   448,   448,   449,   449,   449,   450,   450,   451,   451,
     452,   452,   453,   453,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     455,   456,   456,   457,   457,   457,   457,   458,   458,   458,
     458,   459,   459,   459,   459,   459,   460,   460,   460,   460,
     460,   460,   460,   460,   461,   461,   462,   462,   462,   463,
     463,   463,   463,   463,   463,   464,   464,   464,   464,   464,
     464,   464,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   465,   465,   465,   466,   467,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   470,   470,   470,   470,   470,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   472,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   473,   473,   473,   473,
     473,   473,   473,   473,   473,   474,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   475,   475,   475,   475,
     475,   475,   475,   475,   475,   476,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   477,   477,   477,   477,
     477,   477,   477,   477,   477,   478,   478,   478,   478,   478,
     478,   479,   479,   480,   480,   480,   481,   482,   482,   482,
     482,   482,   482,   482,   483,   484,   484,   484,   484,   484,
     484,   485,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   484,   484,   484,   484,   484,   484,
     484,   484,   484,   484,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   487,   487,   487,   487,   487,
     487,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   489,   489,   489,
     489,   490,   491,   491,   491,   492,   492,   492,   492,   492,
     492,   492,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   494,   494,   494,   494,   495,   495,
     496,   496,   497,   497,   498,   499,   499,   499,   499,   499,
     499,   500,   500,   501,   501,   501,   501,   501,   502,   502,
     502,   502,   502,   502,   502,   502,   503,   503,   504,   504,
     504,   504,   504,   504,   504,   504,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   506,   506,   507,
     508,   507,   509,   509,   509,   509,   510,   510,   511,   511,
     512,   513,   514,   513,   515,   515,   516,   517,   518,   518,
     518,   518,   519,   519,   519,   519,   520,   520,   520,   520,
     520,   520,   520,   520,   521,   521,   521,   522,   522,   522,
     523,   523,   523,   523,   524,   524,   524,   524,   525,   525,
     525,   525,   526,   526,   527,   527,   527,   527,   528,   528,
     528,   528,   529,   529,   530,   530,   530,   531,   531,   531,
     532,   532,   532,   532,   532,   533,   533,   533,   534,   534,
     534,   534,   534,   535,   535,   535,   535,   536,   536,   536,
     537,   537,   537,   537,   537,   537,   537,   537,   537,   538,
     538,   538,   539,   539,   539,   540,   540,   540,   541,   541,
     541,   542,   542,   542,   542,   543,   543,   543,   544,   544,
     544,   545,   545,   545,   546,   546,   546,   547,   547,   547,
     548,   549,   549,   550,   550,   550,   551,   551,   551,   551,
     551,   552,   552,   552,   552,   553,   553,   554,   554,   554,
     554,   554,   555,   555,   555,   556,   556,   556,   557,   557,
     557,   558,   559,   559,   559,   559,   559,   560,   560,   560,
     560,   560,   560
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
       4,     4,     4,     3,     4,     5,     7,     8,     6,     8,
       9,     6,     6,     7,    10,    11,    12,     9,     5,     5,
       6,     3,     5,     5,     5,     6,     5,     4,     9,    10,
      11,     9,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     7,     7,     2,     4,     4,     4,     4,     5,     4,
       4,     5,     5,     3,     4,     4,     4,     6,     7,     8,
       9,     6,    10,    11,    12,     9,     3,     2,     3,     5,
       6,     7,     4,     3,     3,     6,     6,     6,     7,     6,
       7,     4,     4,     6,     9,     4,     3,     6,     7,     7,
       2,     3,     3,     3,     4,     2,     2,     4,     7,    10,
       3,     1,     3,     2,     2,     2,     2,     3,     5,     4,
       5,     2,     7,     3,     2,     2,     3,     2,     2,     2,
       3,     2,     3,     4,     3,     3,     5,     6,     4,     2,
       3,     2,     2,     4,     3,     3,     2,     3,     1,     2,
       1,     2,     2,     2,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     2,     2,
       3,     5,     7,     7,     6,     6,     6,     6,     5,     6,
       6,     6,     6,     6,     6,     6,    10,     7,     7,     7,
       9,     9,    10,    12,    12,     2,     2,     3,     4,     4,
       4,     2,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     4,     6,
      10,     7,     7,     5,     4,     6,    10,     7,     7,     5,
       2,     2,     3,     4,     5,     5,     5,     3,     4,     5,
       5,     5,     5,     2,     3,     3,     5,     3,     3,     3,
       4,     5,     5,     5,     5,     3,     4,     5,     5,     2,
       2,     3,     5,     6,     6,     3,     3,     6,     5,     5,
       2,     3,     5,     6,     3,     2,     2,     3,     2,     3,
       2,     3,     5,     6,     2,     2,     2,     1,     4,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     1,     0,     0,     1,     1,     1,     1,
       1,     7,     8,     2,     4,     2,     4,     6,     2,     1,
       1,     3,     3,     1,     3,     4,     2,     1,     3,     3,
       4,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     1,     3,     1,     3,     1,     2,     2,     1,
       3,     0,     0,     2,     2,     1,     3,     5,     1,     2,
       2,     2,     1,     1,     1,     1,     4,     2,     3,     3,
       2,     3,     2,     2,     2,     3,     3,     3,     2,     3,
       1,     3,     3,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     2,     2,     3,     3,     1,     2,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     2,     2,     4,
       1,     2,     2,     2,     3,     1,     1,     1,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     2,     2,     3,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       4,     2,     1,     1,     1,     1,     0,     5,     1,     6,
       3,     1,     2,     2,     3,     2,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     1,     3,
       4,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   311,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1045,
       0,     0,     0,     0,     0,     0,     0,  1045,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1226,    49,     0,
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
       0,  1045,     0,   355,     0,   359,     0,     0,     0,   363,
       0,   365,     0,   367,     0,     0,   503,   371,    19,     0,
     509,    20,   514,     0,   531,   517,   518,   519,   520,   533,
     522,   523,   524,     0,   526,   527,     0,     0,    21,    23,
       0,   547,     0,     0,     0,   552,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   706,    27,     0,     0,
       0,     0,     0,     0,   707,    28,     0,    29,  1050,  1049,
    1046,  1047,  1048,     0,  1108,     0,     0,     0,    31,     0,
    1115,  1114,  1113,  1112,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1133,     0,  1130,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1160,    41,     0,     0,     0,     0,     0,    42,  1223,
    1222,  1224,  1225,    44,     0,    45,     0,     0,     0,     0,
       0,   202,     0,     0,     0,    46,     0,     0,  1228,    48,
       0,     0,    50,     0,     0,     0,     0,   143,    51,  1251,
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
     710,   709,   708,     0,   713,     0,     0,     0,   895,     0,
       0,     0,   717,   721,   723,   724,     0,     0,     0,     0,
     831,     0,     0,     0,   868,     0,     0,     0,     0,     0,
       0,     0,   870,     0,     0,     0,    30,  1109,  1110,  1111,
      32,     0,     0,     0,     0,  1122,  1123,     0,   143,     0,
    1120,  1117,     0,     0,     0,   143,  1138,  1141,  1139,  1140,
    1134,  1135,  1136,  1137,     0,     0,    39,  1157,  1158,     0,
    1165,  1167,  1166,  1162,  1163,  1161,     0,     0,     0,     0,
    1168,     0,  1171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1169,  1180,     0,     0,     0,  1170,  1172,
    1221,  1155,  1156,  1154,   200,     0,   204,   196,     0,   206,
     197,     0,   208,   198,  1153,  1152,   199,   201,   203,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,  1235,
    1248,  1238,     0,     0,  1241,     0,     0,  1240,  1239,   154,
    1257,     0,  1256,  1252,     0,     0,     0,     0,     0,     0,
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
       0,     0,   444,     0,     0,     0,     0,   943,   945,   944,
       0,     0,  1038,     0,  1017,     0,  1020,     0,     0,  1040,
    1042,     0,  1033,   356,     0,   496,   489,   498,   490,   500,
     491,   502,   488,     0,     0,   507,   504,   505,   154,   530,
     543,   542,   545,     0,   558,   546,     0,     0,     0,     0,
       0,     0,   167,   167,   161,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,     0,     0,   600,   624,     0,     0,     0,
     596,     0,     0,     0,     0,   167,   161,     0,     0,   701,
       0,   711,   712,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   773,     0,     0,
       0,     0,     0,   797,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   820,     0,     0,   825,   826,     0,     0,
       0,   847,   849,   848,     0,   851,     0,     0,   859,   861,
     862,   896,     0,     0,     0,     0,   715,   716,   937,   935,
     940,   939,   938,   936,   941,     0,   720,     0,   725,     0,
     934,     0,   726,   727,   728,   729,     0,     0,     0,     0,
       0,   833,     0,     0,   834,  1060,     0,  1063,  1059,     0,
       0,     0,   835,   869,   836,  1079,  1084,  1081,  1080,  1078,
    1085,  1082,  1076,  1083,  1077,  1086,     0,     0,   841,     0,
       0,     0,  1092,     0,  1094,   844,     0,  1096,   845,   866,
       0,     0,     0,   871,   872,   873,  1121,     0,     0,  1128,
    1124,     0,     0,     0,  1119,  1118,  1132,  1131,     0,  1146,
       0,     0,  1142,     0,  1150,     0,     0,  1143,     0,  1164,
     189,   189,     0,   189,     0,  1190,     0,  1189,  1181,     0,
       0,     0,     0,  1185,     0,     0,     0,  1188,     0,     0,
       0,     0,     0,  1183,  1191,     0,     0,     0,  1182,   189,
     189,   189,   205,   207,   209,     0,     0,     0,     0,   210,
       0,    55,     0,  1230,     0,  1236,     0,   143,  1242,  1243,
       0,  1245,  1246,     0,   155,   156,  1237,  1258,  1259,     0,
     223,   219,   225,   217,   218,   224,   221,   220,   222,   227,
       0,   241,     0,     0,     0,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   309,   143,     0,     0,     0,
       0,   319,     0,   329,     0,   328,   382,   381,     0,     0,
       0,   143,     0,     0,   154,   426,   430,   434,     0,     0,
       0,   154,     0,    82,    81,   469,   453,     0,   464,   466,
     157,   475,   350,     0,     0,    55,     0,   443,     0,     0,
     961,     0,     0,     0,     0,     0,     0,   973,     0,     0,
       0,     0,     0,     0,   989,   990,     0,     0,     0,     0,
    1000,     0,  1005,  1006,  1008,  1010,     0,  1014,  1025,  1026,
    1027,     0,  1029,  1034,  1036,  1037,  1035,   942,     0,     0,
    1016,     0,  1015,   960,     0,     0,  1021,     0,  1023,     0,
    1022,  1043,  1024,  1031,     0,     0,   368,     0,     0,   556,
     557,     0,   554,   550,     0,   167,   167,   167,   168,   169,
     568,   569,   163,   162,     0,   167,   167,   167,     0,   574,
     584,   164,   167,   167,   167,   165,   166,   167,   167,     0,
     167,   167,     0,   164,     0,   597,     0,     0,     0,   623,
       0,   622,     0,     0,   599,     0,   598,     0,     0,     0,
       0,   164,   164,   161,     0,     0,   161,     0,     0,     0,
     167,   167,   697,     0,   167,   167,   702,     0,   180,   181,
     182,   183,   184,   185,     0,    86,    87,    85,   733,     0,
       0,     0,     0,     0,   889,   887,   882,     0,   892,   876,
     893,   879,   891,   885,   874,   888,   877,   875,   894,   890,
       0,     0,   751,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   783,     0,     0,     0,
       0,   796,   798,     0,     0,   804,   803,     0,     0,   170,
       0,     0,   143,     0,     0,   816,     0,     0,     0,   821,
     822,   823,     0,     0,     0,   830,   846,   850,   852,   855,
     854,     0,     0,     0,   860,   897,   899,     0,   898,   718,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1044,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   722,     0,     0,     0,     0,
     832,     0,   143,     0,  1055,  1053,     0,     0,   143,     0,
    1058,   837,     0,     0,     0,   843,     0,     0,  1097,   864,
     865,     0,   867,  1127,  1129,  1126,  1125,  1116,     0,     0,
    1147,     0,     0,  1151,  1159,   191,   192,   193,   194,   190,
    1174,  1173,     0,     0,     0,  1176,  1175,   189,     0,     0,
       0,  1184,     0,     0,     0,     0,     0,  1201,     0,  1215,
    1214,  1216,     0,     0,     0,  1187,     0,     0,     0,  1186,
    1196,  1195,  1197,  1193,  1192,  1194,  1218,  1217,  1219,   212,
     214,   213,     0,     0,    55,     0,  1232,     0,   143,  1249,
    1244,  1247,     0,     0,   143,     0,     0,     0,   238,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   305,     0,
       0,   297,   308,   310,     0,   320,   322,   321,   143,   327,
       0,     0,     0,   154,   425,   143,     0,     0,     0,     0,
     448,   462,    80,    79,   471,     0,   465,   159,   160,   158,
     458,     0,     0,   446,   440,     0,     0,     0,     0,     0,
       0,   143,   962,     0,     0,     0,   967,     0,   143,     0,
     974,   975,     0,   977,   978,   979,     0,     0,     0,   985,
       0,   991,     0,     0,     0,   995,   996,     0,     0,     0,
    1001,     0,     0,  1004,  1007,  1009,  1011,     0,     0,  1028,
    1030,   946,     0,     0,     0,     0,     0,     0,  1039,   947,
       0,     0,  1041,  1032,     0,     0,   512,   513,     0,     0,
     555,     0,   565,   566,   567,   167,   571,   572,   573,     0,
       0,     0,   578,   579,   161,     0,     0,     0,   167,   585,
     586,   587,   588,   590,   164,   593,   594,     0,   167,     0,
       0,     0,   164,   164,   161,     0,     0,     0,     0,   621,
       0,   625,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,   164,
     164,   161,     0,     0,     0,   164,   601,   602,   603,   604,
     606,     0,   609,   610,     0,   164,     0,     0,   695,   696,
     167,   699,   700,     0,   732,   143,   734,     0,     0,     0,
       0,     0,     0,     0,   881,   878,   884,   883,   880,   886,
       0,     0,     0,     0,     0,   143,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     774,   775,   776,     0,   780,   777,   779,     0,     0,   785,
     784,   786,     0,     0,     0,     0,     0,     0,   143,     0,
     143,     0,   802,   176,   172,   177,   171,   174,   173,   175,
     811,   812,     0,     0,     0,   815,   143,     0,   143,     0,
     824,   827,   143,     0,   143,     0,   853,   858,   900,   719,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1087,   925,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   926,     0,     0,     0,
       0,     0,   730,   731,   143,   154,     0,   143,   143,  1061,
    1062,     0,  1064,     0,   839,     0,   143,  1093,  1095,   863,
    1144,  1145,  1148,  1149,   189,   189,   189,  1220,  1199,  1198,
    1200,  1203,  1202,  1206,  1205,  1207,  1204,  1212,  1211,  1213,
    1209,  1208,  1210,     0,  1227,  1234,     0,  1250,     0,   143,
       0,  1253,     0,     0,   242,     0,   239,     0,     0,     0,
     277,     0,     0,     0,     0,   143,     0,   312,   131,     0,
     402,     0,   423,   154,   157,     0,     0,   437,     0,     0,
     441,   954,     0,     0,     0,     0,   143,   963,   157,   157,
     157,   143,   968,   157,   154,   157,   157,   143,   980,   157,
     157,   157,   143,   986,   157,   157,   143,     0,   157,   143,
     157,   157,   143,   157,   143,   948,     0,     0,     0,     0,
     143,  1018,  1019,     0,     0,   511,   551,     0,   570,   575,
     576,   577,     0,   581,   582,   583,   589,   167,   164,   595,
     612,   613,   614,   615,   616,     0,   618,   619,   164,     0,
       0,     0,   164,   164,   161,     0,     0,     0,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,     0,     0,
     164,   164,   161,     0,     0,     0,   164,   167,   167,   167,
     167,   167,     0,   167,   167,     0,   164,   164,   167,   167,
     167,   167,   167,     0,   167,   167,     0,   164,   164,   675,
     676,   677,   678,   680,     0,   683,   684,     0,   164,   686,
     687,   688,   689,   690,     0,   692,   693,   164,   605,   164,
       0,   611,     0,     0,   698,     0,   735,   157,     0,     0,
     157,     0,     0,     0,   748,   157,   749,   752,   753,   157,
     754,   756,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   778,   781,   782,     0,   157,
       0,     0,     0,   799,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   856,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1088,  1067,     0,  1074,
    1075,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,    83,     0,     0,   932,
     933,   154,     0,     0,     0,  1056,  1054,  1065,   838,   840,
     154,  1178,  1177,  1179,     0,  1229,  1260,     0,     0,  1255,
    1254,   243,     0,     0,     0,   282,     0,     0,     0,   298,
     157,   403,   407,   424,   427,     0,   435,   470,   351,     0,
       0,     0,     0,   959,   964,   966,   965,   969,   970,   971,
     972,   976,   981,   982,   983,   984,   987,   988,   992,   154,
     157,   998,   154,   999,  1002,   154,  1012,   154,     0,     0,
       0,     0,   953,     0,   369,   510,     0,   580,   591,   167,
     164,   620,   167,   167,   167,   167,   167,     0,   167,   167,
     164,   666,   667,   668,   669,   670,     0,   672,   673,   164,
     167,   167,   167,   167,   167,     0,   167,   167,   164,   167,
     635,   636,   637,   638,   640,   164,   643,   644,     0,   167,
     167,   655,   656,   657,   658,   660,   164,   663,   664,     0,
     167,   679,   164,     0,   685,   164,   694,   607,   164,   703,
     704,   143,   738,     0,   157,   742,   741,     0,   143,     0,
     750,   755,   143,     0,   762,   763,   764,   765,   769,   770,
     766,   767,   768,     0,     0,   157,   787,   791,     0,   143,
       0,     0,   800,   806,   805,   157,   807,     0,   813,     0,
     817,   157,   157,   809,     0,     0,   857,     0,   178,   178,
       0,     0,   178,     0,   178,  1044,     0,     0,     0,     0,
       0,     0,     0,     0,  1066,     0,     0,   178,   178,     0,
       0,     0,     0,     0,     0,     0,     0,   927,     0,     0,
       0,  1044,    84,     0,   178,     0,  1090,   931,     0,     0,
     211,  1262,  1261,     0,     0,   247,     0,     0,     0,     0,
     313,   436,   955,     0,   186,     0,   993,   994,   997,  1003,
    1013,   949,     0,   186,     0,   361,     0,   592,   617,   626,
     627,   628,   629,   630,   164,   632,   633,   167,   164,   674,
     646,   647,   648,   649,   650,   164,   652,   653,   167,   639,
     167,   164,   645,   659,   167,   164,   665,   681,   164,   691,
     608,     0,   157,   736,   743,     0,     0,     0,     0,     0,
     771,   772,   788,     0,     0,     0,   801,   808,     0,   818,
     819,   810,   157,   828,     0,   179,  1044,  1044,    83,     0,
    1044,     0,  1044,   901,   143,     0,  1069,     0,  1072,  1106,
    1073,  1071,  1068,     0,  1044,  1044,    83,     0,     0,  1044,
    1044,     0,     0,  1044,   930,   928,   929,   908,  1044,  1044,
    1090,  1101,     0,  1057,   842,     0,     0,   249,     0,     0,
       0,     0,   187,   188,   957,   958,     0,   951,   952,     0,
     167,   634,   671,   167,   654,   641,   167,   661,   167,   682,
       0,   737,   157,   739,   157,     0,   157,     0,   157,   789,
     157,     0,   157,     0,  1044,   914,   910,  1044,     0,   915,
       0,   909,  1044,     0,  1070,     0,   912,   911,  1044,     0,
       0,   906,   904,  1044,   143,   905,   907,   913,  1101,  1051,
       0,     0,  1091,  1099,     0,     0,     0,   278,   299,   302,
     300,     0,     0,   143,   143,   553,   631,   651,   642,   662,
     157,   740,   747,     0,   761,   758,   790,   795,     0,   814,
       0,   919,   903,    83,     0,   917,  1107,     0,   902,    83,
       0,   918,     0,  1052,  1103,  1105,     0,  1098,     0,     0,
     283,     0,     0,   186,   186,     0,   744,   143,   759,   792,
     829,  1044,     0,     0,  1044,     0,   157,  1104,  1100,   248,
       0,     0,     0,   956,   950,   714,   143,   745,   760,   143,
     793,   921,     0,  1044,   920,     0,  1044,   250,     0,     0,
     746,   794,    83,   922,    83,   916,   292,   291,  1044,  1044,
     924,   923
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1255,  2501,  2502,   430,   431,
     432,   433,   156,   157,   158,    94,   806,   456,  1196,  1670,
    1344,  1357,  1340,  1910,  2596,  1404,  2644,  1570,   335,   747,
     750,   753,   764,    56,   364,    66,   368,   374,   378,   381,
      71,   384,    78,   399,   395,   389,   405,    85,   410,    95,
     101,   415,   417,   419,   491,   859,  1639,   421,   424,   108,
     440,   159,   161,   178,   218,   480,   848,   482,   492,   851,
     856,   494,   496,   862,   499,   864,   510,   867,   869,   513,
     517,   521,   523,   526,   530,   557,   553,  1267,   544,   888,
     893,   885,  1256,   898,   547,   563,   566,   571,   574,   582,
     926,   928,   930,   932,   587,   936,   221,   589,  1738,   238,
     591,   593,   597,   602,   609,   247,  1333,   612,   255,   621,
    1349,   623,   629,   980,  1365,   975,  1779,  1371,  1369,   976,
    1781,  1374,  1376,   635,   638,   633,   257,   265,   267,   676,
    1057,  1430,  1046,  1525,  1956,  2284,  1062,  1055,   923,  1307,
    1312,  1320,  1322,  1940,   273,  1071,  1074,  1082,  2256,  2257,
    2258,  1941,  2631,  2632,  1105,  1108,  2702,  2703,  2699,  2700,
    2744,  2259,  2260,   278,   284,   292,   690,   685,   297,   302,
     700,   706,  1132,  1137,   756,   744,   308,   312,   713,   318,
     720,  1575,   733,   734,  1168,  1163,  1581,  1153,  1587,  1599,
    1595,  1157,   738,   722,   323,   324,   339,  1183,   342,   348,
     774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2554
static const yytype_int16 yypact[] =
{
    4200,   294,   131,    99,    59, -2554, -2554,   732,  -133,   409,
    1160,   755,   102,  2658,   154,   213,   952,    86,  5106,   401,
    2013, -2554,   213,   397,   215,   816,     9,    30,   264,   168,
     415,   390,   656,  1042,     8,   767,   383,   168, -2554,   -38,
      37,   741, -2554,   -17,   526,   418, -2554,   617, -2554,    75,
    1511,   321,    80,   553, -2554,   101, -2554,   577,   887,   326,
     612,   621,    88,   647,    12,   128, -2554, -2554, -2554,   537,
     606, -2554,    84,    39,   213,   355,   606,   173, -2554,   679,
     606, -2554, -2554,    56,   606, -2554, -2554, -2554, -2554,   606,
   -2554, -2554, -2554, -2554, -2554, -2554,    44,   676,   706,   710,
     150, -2554,   606,  1142,   606,   606,  1030,   606, -2554, -2554,
   -2554,   527, -2554, -2554, -2554, -2554,  4666, -2554, -2554, -2554,
   -2554, -2554, -2554,   606, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,  1518, -2554,   606, -2554,
     731, -2554, -2554,   213,   213,   213,   213,   213,   213,   213,
   -2554, -2554,   213,   213,   213,   213, -2554,   644, -2554,   703,
    1326,   658,    90,   514,   638,    29,  4251,   155,  4752,  4632,
     783,  4666,  3065, -2554,   906,   -36,   828,   771,   159,   471,
     873,   168,    -7, -2554,   834, -2554,   677,   629,   140, -2554,
      10, -2554,   524, -2554,   431,   818,   395, -2554, -2554,  4815,
   -2554, -2554, -2554,   842,   885, -2554, -2554, -2554, -2554,   891,
   -2554, -2554, -2554,   727, -2554, -2554,  4815,  3854, -2554, -2554,
     236, -2554,   913,   929,   122, -2554,   606, -2554,   932,    32,
     945,    14,    36,   947,    48, -2554, -2554, -2554,   935,   959,
     213,   213,   606,   606, -2554, -2554,   966, -2554, -2554, -2554,
   -2554, -2554, -2554,  2930, -2554,   972,   981,   606, -2554,  1002,
   -2554, -2554, -2554, -2554, -2554,   606,   927,   213,  3674,   606,
    1518,   606, -2554,   986, -2554,  4780, -2554, -2554,   565,   996,
    1015,   606, -2554, -2554,   -32,  1016,  4815,  1026, -2554,  1093,
     606,   946, -2554,    49,   939,  1617,   171,  1049, -2554, -2554,
   -2554, -2554, -2554, -2554,  1062, -2554,   436,    51,   120,   136,
     500, -2554,   606,   606,   603, -2554,   606,   798,  1065, -2554,
     606,   606, -2554,  1072,    21,    22,  1074,  1518, -2554, -2554,
   -2554,   841,   606, -2554, -2554,   606,   606,   606,   606,   606,
     606,   606,   606,   606, -2554, -2554, -2554,   606, -2554,  1078,
    1080, -2554,   606,  1108, -2554, -2554, -2554, -2554, -2554, -2554,
     606, -2554, -2554,   606, -2554, -2554,   450,   450,  1084, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
     606,   606,  1088,  1090,  1097, -2554, -2554,   606,   606,   606,
   -2554,   606, -2554,  1104, -2554, -2554, -2554, -2554,   740, -2554,
    1110, -2554,  4815,  1112, -2554,   606, -2554, -2554, -2554,   606,
    1114,  1117,  1117,  4815,   606,   606,   606,   606,   606,   606,
   -2554,   606,  4666,  1142,   606,   606, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,  1142,   606, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
    1120, -2554,   877,    -6, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   -68, -2554, -2554, -2554,   965, -2554,   381,
     546,   546, -2554, -2554, -2554,  1130, -2554,  1144, -2554, -2554,
     -55, -2554,   975, -2554, -2554, -2554,   987, -2554, -2554,  1518,
   -2554,  3707,   606, -2554,  4815,  4815,  1518, -2554, -2554,  1518,
   -2554, -2554, -2554, -2554,  1518, -2554, -2554,  4815,  1518,   606,
   -2554, -2554,  4815, -2554,  1161,   479,   976,     3, -2554, -2554,
     988,  4815,  2229, -2554, -2554, -2554, -2554, -2554,  1174,  1184,
    1190, -2554,  1005, -2554, -2554, -2554,   606, -2554, -2554,   386,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554,   431, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,  1141,  1166,  1175, -2554,
   -2554,  1023, -2554,   606,  1213,  1028,  4780, -2554,  1518, -2554,
    1241, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554,  4815,  4815,  4815, -2554, -2554,
    1251,   213, -2554, -2554,  1253,  1263,  1077,   606, -2554,   542,
    1178, -2554,  1275, -2554,   481,  1196,  5107,    46,  1283, -2554,
    1290, -2554,  1292, -2554,     7, -2554,  1293,  1295, -2554,  1302,
   -2554, -2554, -2554,   606, -2554,  4780,  4567,  1050,   464,  1307,
     430,  1198, -2554, -2554, -2554,  1282,   475,  1312,  1313,    60,
     606,   318,   360,    35,  4815,   213,  1294,   785,    13,   108,
     181,    15, -2554,  1300,  1303,  1315, -2554, -2554, -2554, -2554,
   -2554,   606,   606,   606,   606, -2554, -2554,   606,  1518,   606,
   -2554,   606,  1142,   606,  1321,  1518, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,   410,   435, -2554, -2554, -2554,  1322,
   -2554, -2554, -2554, -2554,  1231, -2554,  1324,  1333,  1252,  1338,
   -2554,  1339, -2554,  1369,  1289,  1372,   353,    52,   405,    64,
     441,  1376,   445, -2554, -2554,  1377,  1378,  1382, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554,  1383, -2554, -2554,  1384, -2554,
   -2554,  1385, -2554, -2554, -2554, -2554, -2554, -2554, -2554,   606,
     606,   606,   606,   606, -2554,   606,   806,   606,   606, -2554,
    1267, -2554,  1019,  1387, -2554,  1197,  1390, -2554, -2554,    -2,
     606,   606, -2554,  1386,   606,   606,   606,   606,   606,   606,
     606,   606,   606, -2554, -2554,  1391,  1132,   606,  1388,   555,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,  1397,  1398,   606,   606,   606,  1399,   213,
    1400,  1406,  1518,  4815, -2554, -2554, -2554, -2554, -2554,  1518,
   -2554, -2554,   606,   606,   606,  4815,   606,  1142,   606, -2554,
     606, -2554, -2554, -2554, -2554, -2554,  1407,  1408, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554,   155, -2554,   606, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,  4815,  4815,   606,  1518, -2554,    -2,    -2,    -2,
    1518,  1142,   606,  1518, -2554, -2554, -2554,   606, -2554,     4,
    1217,  1410,  1413, -2554, -2554,  1518,  4815, -2554, -2554,  1415,
    1417,  1419,  1201,   606,  4634,   512,   424, -2554, -2554, -2554,
     606,  1375,   485,  1070, -2554,  1173, -2554,  1294,  1179,   569,
    1146,    95, -2554, -2554,   606, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   606,  1428, -2554, -2554, -2554,    -2, -2554,
   -2554, -2554, -2554,  4696, -2554, -2554,  1431,  1432,   606,  1433,
    1434,  1435,     2,     2,    -3,  1440,  1441,  1442,  1443,  1148,
    1187,  1446,  1447,  1448,    92,    92,    -3,  1457,  1461,    -3,
    1466,  1470,  5143,  1471,  1472, -2554, -2554,  1473,  1474,   561,
   -2554,  1462,  1476,  1477,  1478,     2,    -3,  1480,  1482, -2554,
    1484, -2554, -2554,  1518,   630,  1152,  1248,  1257,  1258,  1396,
     774,  1259,  1490,   100,  1361,  1402,  1170,  1165,  1468,  1272,
    1287,  1421,  1523,  1340,    63,    28,   -81,  1299,  4666,  1294,
    1491,   283,  1308,  1341,  1535,    23, -2554, -2554,   178,  1545,
    1546, -2554, -2554, -2554,  1551,  1352,    53,  1294,  1353, -2554,
   -2554, -2554,   213,  1558,  1559,   606, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554,     1, -2554,  4031, -2554,   606,
   -2554,   606, -2554, -2554, -2554, -2554,   606,   606,   606,   430,
    4815, -2554,  1562,  1233, -2554, -2554,   606, -2554, -2554,   606,
    4666,   606, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554,   213,   606, -2554,   606,
     430,  1563, -2554,   606,   606, -2554,   213, -2554, -2554, -2554,
     492,  1564,  1595, -2554, -2554, -2554, -2554,   606,   606, -2554,
   -2554,  1142,   606,   606, -2554, -2554, -2554, -2554,   606, -2554,
     606,  1454, -2554,   606, -2554,   606,  1493, -2554,  1600, -2554,
     573,   573,   449,   573,  1601, -2554,   508, -2554, -2554,  1605,
    1606,   530,  1608, -2554,  1609,  1610,  1612, -2554,   586,   590,
    1615,  1622,  1613, -2554, -2554,  1624,  1625,  1629, -2554,   573,
     573,   573, -2554, -2554, -2554,   606,   606,   606,   606, -2554,
     606,   980,  4815, -2554,   606, -2554,  4780,  1518, -2554, -2554,
    1630, -2554, -2554,  1631, -2554, -2554, -2554, -2554,  1626,  3674,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
     606,  1627,   606,   606,   606,   957, -2554,  1628,  1633,   606,
     606,    97,  1637,   213,   213, -2554,  1518,   606,  1642,  1644,
    1645, -2554,  4815, -2554,   606, -2554, -2554, -2554,   606,   606,
     606,  1518,  1647,  4815,    -2, -2554, -2554, -2554,  1142,   606,
    1648,    -2,   606,  1603,  1618,   543, -2554,  1652, -2554, -2554,
     844, -2554, -2554,   606,  1654,  1659,   606, -2554,  1655,   692,
    4666,  1429,  1437,  1438,    78,  4815,  1439, -2554,   241,  1529,
     141,  1444,  1449,   187, -2554, -2554,   570,  1500,   373,   301,
    1294,   -30, -2554,  1664,  1445, -2554,   604, -2554, -2554, -2554,
   -2554,  1294,  1481, -2554, -2554, -2554, -2554, -2554,   606,   871,
   -2554,   606, -2554, -2554,   606,   606, -2554,   606, -2554,   606,
   -2554, -2554, -2554, -2554,  1483,   606, -2554,   606,   172, -2554,
   -2554,  1669,  1670, -2554,   606,     2,     2,     2, -2554, -2554,
   -2554, -2554, -2554, -2554,  1671,     2,     2,     2,   782, -2554,
   -2554,    92,     2,     2,     2, -2554, -2554,     2,     2,  1675,
       2,     2,  1677,    92,   786, -2554,  1678,  1680,  1682, -2554,
     615, -2554,   689,   738, -2554,   934, -2554,  1425,  1684,  1685,
    1686,    92,    92,    -3,  1688,  1689,    -3,  1690,  1692,  1693,
       2,     2, -2554,  1694,     2,     2, -2554,  1696, -2554, -2554,
   -2554, -2554, -2554, -2554,   213, -2554, -2554, -2554,  4666,  1101,
     606,  1158,  1329,   400, -2554, -2554, -2554,   701, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
    1697,   606, -2554,   213,  1698,   606,  4815,   213,  1455,  1475,
    1479,   194,   212,  1485,   218,  1393,  1403,  1695,  1701,  1702,
     774,  1703,  1705,  1706,  1412,  1414,  1271,  1707,   606,  1223,
    1465, -2554, -2554,   213,  4666, -2554, -2554,  4666,   606,    19,
    1710,   606,  1518,  1142,   213, -2554,  4666,  4815,   606, -2554,
   -2554, -2554,   213,   213,  4666, -2554, -2554, -2554, -2554, -2554,
   -2554,  4666,   606,   213, -2554, -2554, -2554,   606, -2554, -2554,
    1711,   606,  1497,    83,   606,  1499,   606,   219,   606, -2554,
     606,  1501,  1502,   606,   606,   606,   606,   606,   606,   606,
     606,    11,   606,   606,  1504, -2554,   606,   606,   606,   606,
   -2554,  4815,  1518,  1715,  4815,  4815,   606,   606,  1518,  1142,
   -2554,   606,   606,   606,  4815, -2554,   606,   606, -2554, -2554,
   -2554,  1720, -2554, -2554, -2554, -2554, -2554, -2554,   606,   606,
   -2554,   606,   606, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,  1723,  1724,  1726, -2554, -2554,   573,  1727,  1729,
    1734, -2554,  1735,  1736,  1737,  1738,  1740, -2554,  1741, -2554,
   -2554, -2554,  1742,  1746,  1748, -2554,  1749,  1750,  1752, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,   606,   606,  1757,  4815, -2554,   606,  1518, -2554,
   -2554, -2554,  3674,   606,  1518,   606,   606,   606, -2554,   606,
     606,  1753,   606,  1756,  1758,   606,   606, -2554, -2554,  1759,
    4815, -2554, -2554, -2554,   606, -2554, -2554, -2554,  1518, -2554,
    1261,   606,  1261,    -2, -2554,  1518,  4815,   606,   606,  1761,
   -2554, -2554, -2554, -2554, -2554,   606, -2554, -2554, -2554, -2554,
   -2554,   606,  1762, -2554, -2554,  4815,  1763,  1764,  1765,  1767,
    4815,  1518, -2554,  4815,  4815,  4815,  4666,  4815,  1518,  4815,
   -2554, -2554,  4815, -2554, -2554,  4666,  4815,  4815,  4815,  4666,
    4815, -2554,  4815,  4815,   606, -2554, -2554,  4815,  4815,  4815,
   -2554,  4815,  4815, -2554, -2554, -2554, -2554,  4815,  4815, -2554,
   -2554, -2554,  4815,  1768,  1769,  1770,  1771,  4815, -2554, -2554,
     606,   606, -2554, -2554,  1773,   606, -2554, -2554,  1774,  1776,
   -2554,   606, -2554, -2554, -2554,     2, -2554, -2554, -2554,  1779,
    1781,  1782, -2554, -2554,    -3,  1777,  1784,  1785,     2, -2554,
   -2554, -2554, -2554, -2554,    92, -2554, -2554,  1788,     2,  1789,
    1790,  1791,    92,    92,    -3,  1793,  1794,  1795,   995, -2554,
     998, -2554,  1025,  1515,  1796,  1797,  1798,    92,    92,    -3,
    1800,  1801,    -3,  1803,  1526,  1805,  1806,  1807,    92,    92,
      -3,  1809,  1810,    -3,  1838,  1530,  1841,  1845,  1846,    92,
      92,    -3,  1848,  1850,    -3,  1852,  1853,  1854,  1855,    92,
      92,    -3,  1851,  1857,  1858,    92, -2554, -2554, -2554, -2554,
   -2554,  1870, -2554, -2554,  1871,    92,  1872,  1873, -2554, -2554,
       2, -2554, -2554,  1875, -2554,  1518, -2554,  4815,   606,   606,
    4815,   606,  1876,  1152, -2554, -2554, -2554, -2554, -2554, -2554,
    1878,  4666,   213,  1879,  4666,  1518, -2554,  1880,  1152,   606,
     606,   606,   606,   606,   606,   606,   606,   606,  1874,  1882,
   -2554, -2554, -2554,  1884, -2554, -2554, -2554,  1883,  1887, -2554,
   -2554, -2554,   606,  4815,   606,  1889,  1152,   213,  1518,  1142,
    1518,   606, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554,   606,  1142,  1142, -2554,  1518,  1142,  1518,   606,
   -2554, -2554,  1518,  1142,  1518,  1142, -2554, -2554, -2554, -2554,
     606,   606,   606,   606,   606,   606,   606,   606,   606,   606,
    2991, -2554,   606,   606,   606,   606,   606,   606,   606,   606,
     606,   606,   606,  3707,  1890,   606, -2554,   606,   606,   606,
    1892,  1894, -2554, -2554,  1518,    -2,  1895,  1518,  1518, -2554,
   -2554,  1142, -2554,   606, -2554,  1897,  1518, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,   573,   573,   573, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   606, -2554, -2554,   606, -2554,   606,  1518,
     606, -2554,  1142,   606, -2554,   606, -2554,  1755,  1898,  1900,
   -2554,  1902,   606,   606,  1903,  1518,  4815, -2554, -2554,   606,
   -2554,   606, -2554,    -2,   844,   606,  1904, -2554,   606,   431,
   -2554, -2554,  1905,  1906,  1907,  1908,  1518, -2554,   844,   844,
     844,  1518, -2554,   844,    -2,   844,   844,  1518, -2554,   844,
     844,   844,  1518, -2554,   844,   844,  1518,  4815,   844,  1518,
     844,   844,  1518,   844,  1518, -2554,  1909,  1911,  1912,  1913,
    1518, -2554, -2554,  1915,   431,  1916, -2554,   606, -2554, -2554,
   -2554, -2554,  1918, -2554, -2554, -2554, -2554,     2,    92, -2554,
   -2554, -2554, -2554, -2554, -2554,  1919, -2554, -2554,    92,  1920,
    1931,  1932,    92,    92,    -3,  1946,  1948,  1951,  1952,  1953,
    1954,    92,    92,    -3,  1957,  1958,  1959,  1960,  1961,  1962,
      92,    92,    -3,  1964,  1966,  1967,    92,     2,     2,     2,
       2,     2,  1969,     2,     2,  1970,    92,    92,     2,     2,
       2,     2,     2,  1972,     2,     2,  1974,    92,    92, -2554,
   -2554, -2554, -2554, -2554,  1975, -2554, -2554,  1976,    92, -2554,
   -2554, -2554, -2554, -2554,  1977, -2554, -2554,    92, -2554,    92,
    1978, -2554,  1980,  1981, -2554,  4780, -2554,   844,  1982,  4666,
     844,   606,  4815,  1983, -2554,   844, -2554, -2554, -2554,   844,
   -2554, -2554,  4815,  1984,   606,   606,   606,   606,   606,   606,
     606,   606,   606,   606,   606, -2554, -2554, -2554,  4666,   844,
     606,  4815,  1985, -2554,  1142,  1142,  1142,   606,  4666,  1142,
     606,  1142,  1142,  4815,  4666,  1142,   606,  1142, -2554,   606,
     606,   606,   606,   606,   606,  1152,   606,   606,   606,  1418,
    1576,  1580,  1646,  1649,  1650,  1651,  2991, -2554,  1653, -2554,
   -2554,  1152,   606,   606,   606,   606,  1152,   606,   606,   606,
     606,   606,   606,  1518,   606,  1565,  1152,   606,   606, -2554,
   -2554,    -2,   213,  1987,  1994, -2554, -2554, -2554, -2554, -2554,
      -2, -2554, -2554, -2554,   606, -2554, -2554,  1142,   606, -2554,
   -2554, -2554,   985,  1995,  1996, -2554,   606,  1999,  1261, -2554,
     844, -2554, -2554, -2554, -2554,  2000, -2554, -2554, -2554,  2003,
    2005,  4815,  2007, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,    -2,
     844, -2554,    -2, -2554, -2554,    -2, -2554,    -2,  2004,  2008,
    4815,  2009, -2554,  2010, -2554, -2554,   606, -2554, -2554,     2,
      92, -2554,     2,     2,     2,     2,     2,  2012,     2,     2,
      92, -2554, -2554, -2554, -2554, -2554,  2016, -2554, -2554,    92,
       2,     2,     2,     2,     2,  2019,     2,     2,    92,     2,
   -2554, -2554, -2554, -2554, -2554,    92, -2554, -2554,  2020,     2,
       2, -2554, -2554, -2554, -2554, -2554,    92, -2554, -2554,  2022,
       2, -2554,    92,  2024, -2554,    92, -2554, -2554,    92, -2554,
   -2554,  1518, -2554,  4666,   844, -2554, -2554,  2025,  1518,   606,
   -2554, -2554,  1518,   606, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,   606,   606,   844, -2554, -2554,  2026,  1518,
     606,  1142, -2554, -2554, -2554,   844, -2554,   606, -2554,  1142,
   -2554,   844,   844, -2554,  4815,  1152, -2554,   606,  2031,  2031,
     606,   606,  2031,  1152,  2031, -2554,  4815,   774,  2032,  2034,
    2035,  2038,  2039,  2041, -2554,   213,  1152,  2031,  2031,   606,
     606,  1152,   606,   606,   606,   606,   606, -2554,  1142,   606,
    2043, -2554, -2554,   606,  2031,   213,    17, -2554,  2044,   213,
   -2554, -2554, -2554,  2045,   606, -2554,  2046,  2042,  1896,   606,
   -2554, -2554, -2554,  2049,   121,  4815, -2554, -2554, -2554, -2554,
   -2554, -2554,  2058,   121,  4815, -2554,   606, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,    92, -2554, -2554,     2,    92, -2554,
   -2554, -2554, -2554, -2554, -2554,    92, -2554, -2554,     2, -2554,
       2,    92, -2554, -2554,     2,    92, -2554, -2554,    92, -2554,
   -2554,   606,   844, -2554, -2554,  4666,  4815,   606,  4815,   606,
   -2554, -2554, -2554,  4666,  4815,   606, -2554, -2554,  4815, -2554,
   -2554, -2554,   844, -2554,  2060, -2554, -2554, -2554,  1152,   606,
   -2554,  2062, -2554, -2554,  1518,  2064, -2554,  2066, -2554, -2554,
   -2554, -2554, -2554,  2068, -2554, -2554,  1152,   606,  2070, -2554,
   -2554,   606,  4815, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
      17,  1464,  1294, -2554, -2554,  2071,  2072, -2554,  1965,  2074,
     104,  4815, -2554, -2554, -2554, -2554,  4815, -2554, -2554,  2075,
       2, -2554, -2554,     2, -2554, -2554,     2, -2554,     2, -2554,
    4780, -2554,   844, -2554,   844,   606,   844,  2076,   844, -2554,
     844,   606,   844,   606, -2554, -2554, -2554, -2554,  2077, -2554,
     606, -2554, -2554,  2079, -2554,   606, -2554, -2554, -2554,  2078,
     606, -2554, -2554, -2554,  1518, -2554, -2554, -2554,  1464, -2554,
    1522,  1673,  1294, -2554,  2080,  2082,  2084, -2554, -2554, -2554,
   -2554,   546,   546,  1518,  1518, -2554, -2554, -2554, -2554, -2554,
     844, -2554, -2554,  2085, -2554,  4666, -2554, -2554,  2087, -2554,
    1152, -2554, -2554,  1152,   606, -2554, -2554,   606, -2554,  1152,
     606, -2554,  4815, -2554,  1522, -2554,   213, -2554,  2088,  2089,
   -2554,   606,   606,   121,   121,  2090,  4666,  1518, -2554,  4666,
   -2554, -2554,   606,  2092, -2554,   606,   844, -2554, -2554, -2554,
    2093,   606,   606, -2554, -2554, -2554,  1518, -2554, -2554,  1518,
   -2554, -2554,  2095, -2554, -2554,  2096, -2554, -2554,  2097,  2100,
   -2554, -2554,  1152, -2554,  1152, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2554, -2554,    -4, -2554,   559, -2554, -1489,  -921,  1662, -2554,
     855,  -164,  1867,   -49,   705, -1647,  1714,  1829,  -740,  1636,
    -939,  1056,  1269, -2554, -1203, -2554, -2344, -1119, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554,  -604,  -487, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -1448, -2554, -2554, -2554, -2554, -2554,  -652, -2554, -2554,
   -2554, -2554, -2554, -2554,   461, -2554, -2554, -2554, -2554,  -217,
    -655,   123,  -555, -2554, -2554, -2554, -2554,  -596,  -589, -2554,
   -2554, -2553, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554,  1389, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554, -2554,
   -2554, -2554, -2554, -2554, -2554, -2554
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1234
static const yytype_int16 yytable[] =
{
      70,   347,  1883,  2029,   860,  2031,  1499,   890,   107,  1070,
    1073,  1096,   109,   293,    67,    68,  1953, -1089,  1100,   624,
    1109,   983,  1571,   305,  1576,   772,   775,  1359,  1481,   289,
    1362,    67,    68,   319,   109,   258,   311,   619,    67,    68,
      67,    68,    67,    68,   376,   341,  1903,  1393,   352,   413,
    1606,  1607,  1608,   636,   367,   109,    67,    68,   373,   560,
     408,   380,    67,    68,  1465,   383,   385,  1904,   984,   394,
    1905,  1075,   400,   404,  1408,  1076,   407,  1065,    67,    68,
     411,  1906,   320,    67,    68,   412,    67,    68,   386,  1489,
    1463,    67,    68,    67,    68,  1194,   259,   846,   425,  1686,
     434,   435,   439,   441,  1907,    67,    68,    67,    68,  1355,
     716,    58,  1323,  1149,  1110,   704,   321,   745,   260,   445,
    1111,  1908,   849,   355,   109,  1102,   114,  1433,   615,   630,
     625,    67,    68,   977,  1253,   865,  1711,  1245,  1246,  1247,
     109,   572,   102,  1637,    79,  1077,   631,  2745,   114,   356,
     357,  1158,    59,  2642,   457,   422,  1338,  1466,    67,    68,
    1342,   103,  1695,   358,  1078,   550,   261,   891,   717,   114,
      60,  1150,   545,   561,  1469,   850,    67,    68,   490,   847,
    1470,   423,  1490,   511,  1339,   109,   748,   160,   268,  2647,
    1712,  2767,  1736,  1324,   985,   866,   497,    57,  1328,    61,
     978,   568,   751,   626,   498,  1483,  1151,   117,  1699,   359,
     360,   112,   104,   118,   119,  1871,    62,   109,  1159,    63,
     705,   632,    67,    68,   390,   269,  1079,   177,   309,   117,
      64,   248,   735,  1873,   256,   118,   119,   306,   114,  1876,
     610,   616,   617,   573,  1254,  1713,   695,   551,  1356,   379,
     117,   401,  1195,   627,   114,  1343,   118,   119,   643,   644,
     307,   546,  1316,   986,  1482,  1434,   414,  1066,  1690,   266,
     322,   620,   987,   679,   387,   483,   628,   562,   552,   839,
     484,   681,   684,  1464,   687,   691,   377,   693,   718,  2708,
     736,  1101,   842,   105, -1089,   409,   122,   703,  1500,   114,
     773,   776,   294,  1932,   988,   712,   714,   892,  1954,  1112,
     637,  1687,   295,  1467,   719,  1103,   485,  1152,   122,   117,
    1080,   361,   310,   362,   262,   118,   119,   388,   757,   758,
     763,   114,   765,  1435,   391,   117,   768,   769,  1491,   122,
     486,   118,   119,   402,    69,   152,  1067,   781,   783,   153,
     154,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     340,  1638,  1909,   793,  1474,   351,   120,   152,   796,   798,
     263,   153,   154,   372,  1696,  1436,   799,   392,   393,   800,
     117,  1048,  1493,   106,    65,   487,   118,   119,   152,   270,
     904,   905,   153,   154,  1104,  2643,   809,   810,  1484,  2709,
     363,  1737,   271,   814,   815,   816,  1691,   817,   122,  2773,
    2774,   585,   117,    80,   723,   569,   403,  1531,   118,   119,
    1700,   824,  1049,  1048,   122,   825,   611,  1872,   488,   489,
     830,   831,   832,   833,   834,   835,   737,   836,   570,  1937,
     840,   841,   488,  2710,  1831,  1874,   906,  1834,  1544,    81,
    1128,  1877,   907,   843,  1303,   326,   279,   152,  1987,   853,
    1106,   153,   154,   272,  1049,   327,  1154,  1707,  1041,   122,
     741,   303,   725,   152,  1692,  1133,   554,   153,   154,   274,
     801,   275,  1072,   886,   219,   240,   960,   112,    67,    68,
     397,  1853,   328,  1048,  1042,   961,   962,  1549,   304,   908,
     220,   122,  1160,  1476,  1656,  1854,  1165,   872,   874,  1550,
    1572,  1660,   241,   754,   909,  1059,  1693,  1868,   152,    82,
    1129,  1708,   153,   154,  1155,   882,   910,   112,  1124,   398,
     325,    54,   911,   912,  1049,   112,   555,   937,   913,  1896,
      67,    68,   963,   742,   802,  1134,   349,  1664,  1050,    55,
     152,   854,   903,   354,   153,   154,   949,   950,  1477,  1214,
    1161,   575,  1051,  1052,  1166,   329,  1377,  1215,  1573,  1578,
    1069,   576,    67,    68,   162,  1378,  1379,   974,  1298,   933,
     242,   239,   365,  1304,  1709,  1060,   264,   369,   586,   914,
    1050,  1584,  1855,   296,   243,   276,   993,  1701,   577,   112,
      83,  1130,   330,   951,  1051,  1052,    67,    68,   915,    67,
      68,   803,   916,   948,   917,  1565,  1566,   370,   731,   696,
    1783,   336,  1380,  1043,   855,   371,  1135,  1579,  1705,  1784,
    1785,  1716,  1305,   396,  1706,  1710,   743,   918,   919,   992,
    1299,  1856,   120,   759,   331,   920,  1719,  1592,    84,  1585,
     244,  1596,   375,  1053,  1054,   697,  1068,  1306,   382,  1081,
    1050,  2519,   559,   921,  1300,   332,  1061,  1131,   964,   965,
    1156,   578,  1044,  1233,  1051,  1052,  1786,  1116,  1117,  1118,
    1119,   857,   120,  1120,   406,  1122,   755,  1123,  1310,  1125,
     120,   245,  1136,   804,  1794,  1053,  1054,  1045,   805,   277,
     333,   246,   698,  1795,  1796,  1593,  1162,   416,   579,  1597,
    1167,   418,  1398,   760,  1574,   420,   334,  1249,   442,   922,
     858,  1187,   459,   460,   461,   462,   463,   464,   465,   952,
     953,   466,   467,   468,   469,   458,  1702,   966,   291,   337,
    1301,  1567,  1568,  1805,   819,   820,   967,   968,  1381,  1382,
    1797,   969,  1806,  1807,   120,  1175,  1176,  1177,  1178,  1179,
     470,  1180,  1182,  1184,  1185,  1053,  1054,   313,  1569,   471,
    1717,   580,  1318,  1580,  1675,   481,  1197,  1198,   970,  1399,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1302,
    1703,   493,  1211,  1212,   761,  1586,  1749,  1750,   954,  1808,
    1769,  1770,  1787,  1788,   699,   495,  1857,   955,   956,    67,
    1181,  1218,  1219,  1220,  1413,  2092,   522,  1383,   338,   641,
     642,   444,   581,   762,  1718,  1097,  1384,  1385,  1228,  1229,
    1230,  1386,  1232,   548,  1234,  2105,  1235,   298,    96,   957,
    1414,  1676,   249,  1751,    67,    68,   686,  1771,  1400,  1401,
    2142,  1594,   314,  2145,    97,  1598,   280,  1238,  1387,  1240,
     549,  2153,  1402,   315,  2156,  2291,  2292,  2293,  1667,  1668,
    1243,  1789,  2164,  1415,   598,  2167,  1798,  1799,  1250,  1416,
    1790,  1791,  2174,  1252,  1417,  1792,   746,   749,   752,   558,
      67,    68,   512,  1858,   520,  1098,   525,   529,  1266,  1268,
     564,  1403,  1418,   565,   556,   567,  1308,   584,  1311,  1314,
    1677,  1678,  1793,  2032,   590,  1319,   592,    72,   613,   583,
    1325,  1419,    73,  1368,  1679,  1809,  1810,   250,    98,  1326,
      67,    68,  2193,   614,   299,   594,   618,  1420,   251,   639,
     599,  1669,  1859,   316,  1334,  1800,   366,  2203,  1816,  1817,
     622,   531,   634,  1722,  1801,  1802,   317,  1555,    74,  1803,
      67,    68,   780,  1680,   640,   532,  1421,   682,    99,  1752,
    1753,   645,   252,  1772,  1773,  2222,  1099,   677,   595,   600,
   -1231,   163,    75,    67,  1614,   678,  1804,   533,    67,    68,
     694,  1407,   281,   689,  1811,  1818,   164,   282,   165,   283,
     701,   100,  1422,  1812,  1813,   300,   534,   680,  1814,  2109,
    2110,  1468,  2118,  2119,   301,  1423,  1631,   601,   253,   702,
    1723,   707,   535,  1188,  1189,   536,  1424,    76,   166,  2605,
     709,   254,  1492,    67,    68,  1815,   167,   683,  1754,  2127,
    2128,  1498,  1774,   715,  2513,    67,    68,  1755,  1756,   537,
     538,  1775,  1776,  1425,   739,  1526,  2111,  1527,   721,  2120,
     766,   110,  1528,  1529,  1530,  1426,   740,  1427,  1428,   767,
     436,    77,  1536,    67,    68,  1537,   770,  1540,   778,  1757,
     596,   285,   794,  1777,  1657,   795,  2129,  1313,   808,  1724,
    1725,   168,   811,  1542,   812,  1543,    67,    68,   112,  1546,
    1547,   813,   539,  1726,    67,    68,  1847,  1429,   818,  2677,
     540,    67,    68,  1553,  1554,   821,  1030,   823,  1556,  1557,
     797,  1819,  1820,   426,  1558,   844,  1559,  2688,   428,  1561,
    1031,  1562,   852,   710,   861,    67,    68,  1618,   845,  1032,
     437,   169,  1727,   113,  1210,    67,    68,   838,   863,  1033,
     868,   426,   427,   428,   870,    67,    68,   170,   171,  1405,
    1406,    67,    68,  1850,   172,   884,   173,   541,   542,   889,
     944,  1609,  1610,  1611,  1612,  2367,  1613,  1615,  1034,   899,
    1617,   894,  2112,  2113,  2376,  2121,  2122,  1447,    86,   900,
    1821,   174,  1439,  2385,   901,  1623,   115,  1035,   902,  1822,
    1823,  1191,  1192,   711,    67,  1265,  1626,   925,  1628,  1629,
    1630,  1632,  2130,  2131,  1448,  1635,  1636,  1449,   934,  1440,
    1450,   438,  1441,  1644,  1084,  2282,    67,    68,  1893,  1107,
    1649,  1824,   927,   286,  1650,  1651,  1652,  1534,  1535,   543,
     887,   929,  1036,   931,  2761,  1658,   939,  1451,  1661,   935,
    2764,  2114,  1442,   120,  2123,   943,   175,   945,   121,  1671,
    2115,  2116,  1673,  2124,  2125,   958,  2597,   946,   287,  2600,
     947,  2602,   924,  1186,  1452,  1889,  1890,  1453,  1037,  1443,
     959,  2132,  1444,   971,  2614,  2615,   827,   828,   979,    86,
    2133,  2134,  2117,  2313,   981,  2126,   982,  1056,   989,  1058,
     990,  2629,  1038,  2798,  1721,  2799,   991,  1728,    87,  1914,
    1729,  1730,  1047,  1731,  2329,  1732,  1063,  1113,  1064,  1115,
    1114,  1734,  2135,  1735,  2473,  1126,  1138,   288,  1139,  1140,
    1741,    88,    67,    68,  1852,    89,  1405,  1406,  1141,  1142,
    2486,  1039,  1143,  1040,  1144,  2491,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,  1145,  1972,  1146,  1147,  1222,   472,
    1164,  1257,  1169,  1170,    90,  1085,  1171,  1454,  1172,  1173,
    1174,  1190,  1445,  1086,  1193,  1309,  1209,   473,  1199,  1087,
    1213,  1216,  1217,  1221,  1223,  1848,  1849,  1851,  1407,    87,
    1224,  1350,  1236,  1237,   474,  1258,  1455,  1259,  1088,  1262,
      91,  1446,  1263,  1264,  1315,  1321,   475,  1861,    92,    93,
    1317,  1864,    88,  1327,  1407,  1331,  2028,  1332,  1335,  1336,
    1337,  1089,  1456,   476,  1345,  1346,   477,  1347,  1348,  1090,
    1351,  1352,  1353,  1354,  1892,  1894,  1407,   478,    67,    68,
    1867,  1360,  1405,  1406,  1902,  1361,  1388,  1912,    67,    68,
    1895,  1363,  1405,  1406,  1919,  1364,  1370,  1372,  1373,  1375,
    1389,  1409,  1390,  1391,  1394,    90,  1091,  1395,  1926,  1396,
    1410,  1411,  1431,  1928,  1092,  1432,  1437,  1930,   479,  1933,
    1934,  1412,  1936,  1938,  1939,  1458,  1942,  1438,  1457,  1945,
    1946,  1947,  1948,  1949,  1950,  1951,  1952,  1955,  1957,  1958,
    1459,    91,  1960,  1961,  1962,  1963,  1460,   343,  1461,    92,
      93,  1475,  1969,  1970,   344,  1093,  1471,  1973,  1974,  1975,
    1480,  2505,  1977,  1978,  2593,  1478,  1094,  1462,  1479,  1485,
    2509,  1486,  2601,   446,  1980,  1981,  1487,  1982,  1983,  1488,
    1494,  1095,  1496,  1497,  1560,  2613,  1239,  1533,  1545,  1551,
    2618,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,  2526,
    1552,  1495,  2528,  1563,  1564,  2529,  1577,  2530,  2003,  2004,
    1582,  1583,  1588,  2006,  1589,  1590,  1591,  1602,  2008,  2011,
    1600,  2013,  2014,  2015,   447,  2016,  2017,  1601,  2019,  1603,
    1604,  2022,  2023,  1605,  1633,  1620,  1621,  1634,  1622,  1627,
    2026,  1662,  1640,   448,   449,   450,  1645,  2030,  1646,  1647,
     451,  1654,  1659,  2035,  2036,  1541,  1663,  1666,  1672,  -445,
    1674,  2038,  1683,   452,  1694,  1548,  1704,  2039,  1714,   453,
    1684,  1685,  1689,  1739,  1740,  1745,  1733,  1697,   723,  1764,
     454,  1767,  1698,  1778,  1720,  1780,  1715,  1782,  1825,  1826,
    1827,  1828,  1832,  1833,  1878,  1835,  1836,  1837,  1840,  1880,
    2067,  1843,  1860,  1863,  1879,  1881,  1882,  1884,  1869,  1885,
    1886,  1891,  1870,  1887,  1911,  1888,  1929,  1931,  1875,  1935,
    1966,  1943,  1944,  1473,  1959,  1979,  2081,  2082,  1984,  1985,
    1986,  2084,  1988,   724,  1989,  2225,   725,  2087,  1990,  1991,
    1992, -1102,  1993,  1994,  1995,  1996,   345,  1997,   346,  2229,
    2230,  1998,  1999,  2232,  2000,  2001,  2002, -1233,  2018,  2236,
    2020,  2238,  2477,  2024,  2021,  2037,  2040,  2302,  2042,  2043,
    2044,   726,  2045,  2076,  2077,  2078,  2079,  2083,  2136,  2085,
    2086,  2093,  1641,  1642,  2089,  1539,  2090,  2091,  2094,  2147,
    2095,   455,  2098,  2158,  2100,  2101,  2102,  2106,  2107,  2253,
    2108,  2137,  2138,  2139,  2143,  2144,   727,  2287,  2146,  2760,
    2148,  2149,  2150,  2154,  2155,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,  2157,  2188,  2189,  2159,  2191,  2299,  1407,
    2160,  2161,  2165,   728,  2166,  2175,   729,  2168,  2169,  2170,
    2171,  2176,  2500,  2177,  1407,  2204,  2205,  2206,  2207,  2208,
    2209,  2210,  2211,  2212,  2179,  2180,  2182,  2183,  2213,   730,
    2185,  2192,   731,  2194,  2198,  2202,  2214,  2216,  2218,  2215,
    2220,  2217,  1407,   732,  2221,  2274,  2279,  2227,  2280,  2283,
     290,  2289,  2639,  2303,  1625,  2304,  2305,  2308,  2228,  2316,
    2319,  2320,  2321,  2322,  2348,  2234,  2349,  2350,  2351,  2353,
    2478,  2355,  2357,  2360,  2479,  2362,  2239,  2240,  2241,  2242,
    2243,  2244,  2245,  2246,  2247,  2248,  2363,  2364,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,
    2368,  2275,  2369,  2276,  2277,  2278,  2370,  2371,  2372,  2373,
    1665,  2377,  2378,  1844,  2379,  2380,  2381,  2382,  2386,  2288,
    2387,  2706,  2388,  2395,  2398,  1682,  2406,  2701,  2409,  2412,
    2413,  2415,  2418,   443,  2419,  2420,  2423,  2429,  2433,  2450,
    2480,  2507,  1862,  2481,  2482,  2483,  1866,  2485,  2508,  2294,
    2515,  2516,  2295,  2518,  2296,  2521,  2298,  2522,  2531,  2300,
    2523,  2301,  2525,  2532,  2534,  2535,  2544,  2746,  2306,  2307,
    2548,  1358,  1897,  2555,  2561,  2311,  2565,  2312,  2568,  2575,
    2583,  2315,   222,  1915,  2317,  2595,  2712,  2606,  2607,  2484,
    2608,  1920,  1921,  2609,  2610,  2611,  2638,  2701,  2626,  2633,
    2635,  2637,  1927,   509,  2641,   516,   519,   223,   524,   528,
    2451,  2452,  2453,  2646,  2674,  2457,  2680,  2459,  2460,  2683,
    2684,  2464,  2685,  2466,  2690,  2698,  2704,  2705,  2707,  2715,
    2725,  2733,  2739,  2356,  2736,  2748,   588,  2749,  2750,  2756,
     224,  2759,   826,  2769,  2770,  2775,  2783,   225,  2787,  2792,
    2794,   807,  2796,   603,   608,  2797,  2747,   226,   227,  2743,
       0,     0,     0,  1846,   228,  1148,     0,     0,     0,   692,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2511,     0,   229,  2421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,     0,     0,     0,   688,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   231,     0,     0,  1899,
       0,     0,  1901,   708,   232,     0,   779,     0,     0,     0,
       0,  1917,     0,     0,     0,     0,     0,  2427,     0,  1923,
       0,     0,     0,     0,   233,     0,  1925,     0,     0,     0,
    2434,  2435,  2436,  2437,  2438,  2439,  2440,  2441,  2442,  2443,
    2444,     0,     0,     0,     0,     0,  2448,     0,     0,     0,
       0,     0,  1341,  2454,  2751,  2752,  2458,     0,     0,   234,
       0,     0,  2465,   896,     0,  2467,  2468,  2469,  2470,  2471,
    2472,  1407,  2474,  2475,  2476,     0,     0,     0,   110,     0,
       0,     0,     0,     0,  1392,     0,     0,  1407,  2487,  2488,
    2489,  2490,  1407,  2492,  2493,  2494,  2495,  2496,  2497,     0,
    2499,     0,  1407,  2503,  2504,     0,     0,   235,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2586,   236,   822,
    2510,     0,     0,     0,  2512,  2589,     0,     0,  2514,     0,
     829,     0,  2517,     0,     0,     0,     0,     0,     0,   837,
       0,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2010,     0,     0,
     113,     0,     0,     0,  2624,     0,     0,     0,   871,     0,
       0,     0,     0,     0,     0,   877,     0,     0,   878,     0,
       0,     0,  2536,   879,     0,     0,     0,   881,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   873,     0,
       0,   875,   876,   115,     0,     0,     0,     0,     0,     0,
       0,  2052,     0,     0,   880,     0,     0,     0,     0,   883,
    2058,     0,     0,     0,  2063,     0,     0,  1758,   895,   897,
       0,     0,     0,     0,     0,     0,     0,   938,     0,  1768,
       0,  2197,     0,     0,     0,  2577,     0,     0,     0,  2579,
       0,     0,     0,     0,     0,     0,     0,  1829,  1830,  2580,
    2581,     0,     0,     0,     0,   121,  2585,     0,     0,     0,
       0,     0,     0,  2588,     0,     0,  2223,     0,     0,     0,
       0,  1407,     0,  2594,     0,     0,  2598,  2599,     0,  1407,
       0,     0,   940,   941,   942,     0,     0,     0,     0,     0,
       0,     0,  1407,     0,     0,  2616,  2617,  1407,  2619,  2620,
    2621,  2622,  2623,     0,     0,  2625,     0,     0,     0,  2628,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2636,     0,     0,     0,     0,  2640,     0,  1121,     0,     0,
       0,     0,     0,     0,  1127,     0,     0,     0,     0,     0,
       0,  1083,  2649,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,     0,     0,     0,  2196,  2660,     0,  2200,
       0,     0,     0,  2665,     0,  2667,     0,     0,     0,     0,
       0,  2671,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1407,  2678,     0,     0,  2603,     0,
       0,     0,     0,     0,  1742,  1743,  1744,     0,     0,     0,
       0,  2720,  1407,  2689,  1746,  1747,  1748,  2693,     0,     0,
       0,  1759,  1760,  1761,  2627,     0,  1762,  1763,     0,  1765,
    1766,     0,     0,     0,     0,     0,  2711,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1225,     0,     0,     0,     0,     0,     0,  1227,  1838,
    1839,  2723,   109,  1841,  1842,     0,     0,  2728,     0,  2730,
       0,     0,     0,     0,     0,     0,  2734,   110,     0,     0,
       0,  2737,     0,     0,     0,     0,  2740,     0,     0,     0,
    1226,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,  1231,     0,  1244,     0,     0,     0,     0,  1248,
       0,     0,  1251,     0,   112,     0,     0,     0,     0,  2675,
    2676,     0,     0,  2679,  1260,  2681,  1407,     0,     0,  1407,
    2762,     0,     0,  2763,     0,  1407,  2765,  2686,  2687,  1241,
    1242,     0,  2691,  2692,  2318,     0,  2695,  2771,  2772,     0,
       0,  2696,  2697,     0,     0,     0,     0,     0,  2782,   113,
       0,  2785,     0,  1261,     0,     0,     0,  2788,  2789,     0,
       0,     0,     0,     0,     0,     0,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1407,  2354,
    1407,     0,     0,     0,     0,     0,     0,  2731,     0,     0,
    2732,     0,     0,     0,     0,  2735,     0,     0,     0,     0,
    1330,  2738,   115,     0,     0,     0,  2741,     0,     0,     0,
    2097,     0,  1397,     0,     0,     0,     0,     0,  2103,  2104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2506,     0,  2140,  2141,     0,     0,     0,     0,   116,
       0,     0,     0,     0,  2151,  2152,     0,   117,     0,     0,
       0,     0,     0,   118,   119,  2162,  2163,     0,     0,   120,
       0,     0,     0,     0,   121,  2172,  2173,     0,     0,     0,
       0,  2178,     0,     0,  2781,  1472,     0,  2784,     0,     0,
       0,  2181,     0,     0,  2425,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2793,     0,     0,  2795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2800,  2801,  2446,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2456,   646,   647,     0,  1532,     0,  2463,
       0,     0,     0,     0,     0,     0,   122,  1538,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     648,     0,     0,     0,     0,   152,   649,     0,     0,   153,
     154,     0,     0,   650,     0,   651,     0,     0,     0,     0,
     652,     0,     0,   653,  2088,     0,  1619,     0,     0,   654,
       0,     0,     0,     0,     0,     0,     0,  2096,     0,   655,
       0,     0,     0,     0,     0,   656,     0,  2099,     0,     0,
       0,     0,     0,   657,  2612,     0,  2249,     0,     0,  1616,
       0,     0,     0,     0,     0,  1643,     0,  2250,   658,     0,
       0,     0,     0,     0,  2630,     0,  1624,     0,  2634,   527,
    1653,     0,     0,     0,     0,     0,     0,   659,     0,     0,
       0,     0,  1085,  2251,   110,     0,     0,     0,     0,     0,
    1086,     0,     0,   660,     0,     0,  1087,     0,     0,  1648,
       0,     0,   661,   662,     0,     0,     0,     0,     0,  2184,
    1655,     0,     0,     0,     0,  1088,     0,     0,     0,  2252,
       0,   112,   663,     0,     0,     0,     0,     0,  2573,     0,
       0,     0,     0,     0,     0,     0,     0,  1681,  1089,     0,
       0,     0,  1688,   664,     0,     0,  1090,     0,     0,     0,
       0,     0,     0,     0,  2359,     0,   665,     0,   666,     0,
       0,     0,     0,     0,  2361,     0,   113,     0,  2365,  2366,
       0,   667,     0,     0,     0,     0,   668,  2374,  2375,     0,
       0,     0,   669,  1091,     0,     0,  2383,  2384,     0,   670,
       0,  1092,  2389,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2399,  2400,     0,     0,     0,   671,     0,     0,
       0,     0,     0,  2410,  2411,     0,     0,     0,     0,   115,
     672,   673,     0,   674,  2414,     0,     0,     0,     0,     0,
       0,     0,  1093,  2416,     0,  2417,     0,     0,     0,     0,
       0,     0,     0,  1094,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1095,     0,
       0,     0,     0,   675,     0,     0,     0,     0,  2253,     0,
    2254,     0,     0,     0,     0,  1845,   120,     0,     0,     0,
    2663,   121,     0,     0,     0,     0,     0,     0,  2669,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1913,     0,  1865,     0,  2768,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2255,     0,     0,     0,     0,     0,
       0,  1898,     0,     0,  1900,     0,     0,     0,     0,     0,
       0,     0,     0,  1916,  1918,     0,     0,     0,     0,     0,
       0,  1922,     0,     0,     0,     0,     0,     0,  1924,     0,
       0,  1965,     0,     0,     0,     0,  2358,  1971,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,  1964,     0,
       0,  1967,  1968,     0,     0,     0,  2390,  2391,  2392,  2393,
    2394,  1976,  2396,  2397,     0,     0,  2538,  2401,  2402,  2403,
    2404,  2405,     0,  2407,  2408,     0,  2547,     0,     0,     0,
    2758,     0,     0,     0,     0,  2549,     0,     0,     0,     0,
       0,     0,     0,     0,  2558,     0,     0,  2007,     0,     0,
       0,  2560,     0,  2012,     0,     0,     0,     0,     0,     0,
       0,  2777,  2564,     0,  2780,     0,     0,     0,  2567,     0,
       0,  2569,     0,     0,  2570,     0,     0,  2027,     0,     0,
       0,     0,  2005,     0,  2033,     0,     0,     0,     0,  2009,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2025,     0,     0,
    2047,     0,     0,     0,     0,     0,     0,  2054,     0,     0,
       0,     0,     0,  2034,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2041,     0,     0,     0,     0,  2046,     0,     0,
    2048,  2049,  2050,  2051,  2053,     0,  2055,     0,     0,  2056,
       0,     0,  2057,  2059,  2060,  2061,  2062,  2064,     0,  2065,
    2066,     0,     0,     0,  2068,  2069,  2070,     0,  2071,  2072,
       0,     0,     0,     0,  2073,  2074,     0,     0,     0,  2075,
       0,     0,     0,     0,  2080,     0,     0,     0,     0,     0,
    2650,     0,     0,     0,  2652,     0,     0,     0,     0,     0,
       0,  2653,     0,     0,     0,     0,     0,  2656,     0,     0,
       0,  2658,     0,     0,  2659,     0,     0,     0,  2537,     0,
       0,  2539,  2540,  2541,  2542,  2543,     0,  2545,  2546,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2550,
    2551,  2552,  2553,  2554,     0,  2556,  2557,     0,  2559,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2562,  2563,
    2314,     0,     0,     0,  2186,     0,     0,    67,    68,  2566,
       0,     0,     0,     0,  2324,  2325,  2326,     0,     0,  2328,
       0,  2330,  2331,   110,  2201,  2333,  2334,  2335,     0,     0,
    2337,  2338,     0,     0,  2341,     0,  2343,  2344,     0,  2346,
      67,    68,     0,     0,  2187,     0,     0,  2190,     0,     0,
       0,     0,     0,     0,     0,     0,   110,  2224,  2195,  2226,
     112,  2199,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2231,     0,  2233,     0,     0,
       0,  2235,     0,  2237,     0,     0,     0,     0,     0,     0,
    2219,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2281,     0,     0,  2285,  2286,     0,     0,
       0,     0,     0,     0,     0,  2290,     0,     0,   113,     0,
       0,     0,     0,     0,     0,     0,  2651,     0,     0,     0,
    2273,     0,     0,  2422,     0,     0,  2426,  2654,   115,  2655,
       0,  2430,     0,  2657,     0,  2431,     0,     0,  2297,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2309,  2447,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   604,   110,     0,  2323,     0,     0,     0,     0,
    2327,     0,     0,     0,     0,   120,  2332,     0,     0,     0,
     121,  2336,     0,  2310,     0,  2339,     0,     0,  2342,     0,
       0,  2345,     0,  2347,     0,     0,     0,     0,     0,  2352,
       0,     0,   605,     0,     0,     0,     0,     0,     0,  2716,
       0,     0,  2717,   121,     0,  2718,     0,  2719,     0,     0,
       0,     0,     0,     0,  2340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2520,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   606,     0,
       0,     0,     0,     0,     0,     0,  2527,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,   115,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1501,     0,     0,  2424,     0,  1502,  2428,
    2574,     0,     0,     0,     0,     0,     0,     0,     0,  2432,
     121,     0,     0,     0,     0,     0,     0,     0,     0,  1503,
    1504,  2582,  1505,  1506,     0,  2445,     0,     0,  2449,     0,
       0,  2587,     0,  1507,     0,  2455,     0,  2590,  2591,     0,
    2461,  2462,  2498,     0,     0,  1508,  1509,     0,     0,     0,
       0,     0,     0,  1510,     0,     0,  1511,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1512,     0,   607,     0,     0,     0,  1513,
    1514,     0,     0,  1515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,  2524,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1516,     0,     0,     0,     0,     0,     0,  2661,     0,
       0,     0,     0,     0,     0,     0,     0,  2533,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,  2673,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     0,     4,     0,     0,     0,
    2571,     0,     0,  1517,     0,     0,     0,  2576,  1518,     5,
       0,  2578,     0,     0,     6,     7,     0,     8,     9,    10,
     110,     0,     0,  1519,     0,     0,     0,    11,  2584,     0,
       0,     0,  1520,     0,    12,     0,    13,    14,     0,     0,
    2572,     0,     0,     0,     0,    15,    16,     0,  2721,     0,
    2722,     0,  2724,     0,  2726,     0,  2727,     0,  2729,  1521,
    1522,     0,     0,     0,     0,     0,   500,   501,     0,     0,
     502,     0,     0,    17,     0,     0,     0,     0,     0,     0,
    1523,  2592,     0,     0,    18,     0,     0,     0,    19,     0,
       0,    20,   503,  2604,     0,     0,    21,    22,     0,     0,
       0,     0,   113,    23,     0,     0,  2755,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,  1524,     0,    26,    27,    28,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2645,     0,    31,     0,     0,     0,     0,     0,
       0,  2648,  2786,     0,     0,   115,     0,     0,     0,    32,
      33,    34,     0,     0,     0,     0,     0,     0,   504,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,     0,  2682,    37,   505,     0,    38,     0,    39,
       0,    40,  2662,  2664,     0,  2666,    41,     0,     0,     0,
    2668,  2670,     0,     0,   506,  2672,     0,     0,     0,    42,
       0,     0,     0,     0,    43,     0,     0,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,     0,     0,     0,     0,     0,     0,     0,  2694,
       0,     0,    46,     0,    47,     0,     0,     0,     0,     0,
      48,     0,     0,    49,    50,     0,     0,     0,  2713,     0,
       0,     0,     0,  2714,     0,   507,     0,     0,     0,     0,
       0,     0,     0,  2742,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      52,     0,  2753,  2754,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,   508,     0,  2778,   994,   995,   996,
       0,     0,  2757,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2790,     0,     0,  2791,  2766,
       0,     0,     0,     0,     0,   997,   998,     0,     0,   999,
       0,     0,  1000,  2776,     0,     0,  2779,     0,     0,  1001,
       0,     0,     0,  1002,     0,     0,     0,     0,     0,     0,
       0,  1003,  1004,     0,     0,     0,     0,     0,     0,  1005,
    1006,   110,     0,     0,  1269,  1270,  1271,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1007,     0,     0,     0,
       0,     0,  1008,     0,     0,  1009,  1010,     0,     0,  1011,
       0,     0,  1272,  1273,     0,   110,  1274,     0,   112,     0,
       0,     0,     0,  1275,     0,  1012,  1276,     0,     0,     0,
    1277,     0,     0,     0,     0,     0,     0,     0,  1278,  1279,
       0,     0,     0,     0,  1013,   110,  1280,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,  1014,     0,     0,
       0,     0,  1281,  1282,     0,     0,  1283,     0,     0,     0,
       0,     0,  1329,     0,     0,     0,     0,     0,     0,  1015,
       0,     0,  1284,     0,     0,     0,     0,   113,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1285,     0,     0,     0,     0,   115,  1016,     0,  1017,
       0,     0,     0,     0,  1018,  1019,     0,   113,     0,     0,
       0,     0,     0,     0,  1286,     0,     0,     0,  1020,  1021,
       0,   514,     0,  1287,     0,     0,     0,     0,  1022,  1023,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   120,  1024,     0,  1025,     0,   121,     0,
     115,     0,     0,   113,  1288,     0,     0,     0,  1026,     0,
    1027,  1289,  1290,     0,     0,     0,  1028,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1291,   120,     0,     0,
       0,     0,   121,     0,     0,     0,  1292,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1029,     0,     0,     0,   518,     0,   115,     0,     0,     0,
       0,  1293,   121,  1294,     0,     0,   113,     0,     0,     0,
       0,     0,     0,  1295,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1296,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,  1297,   121,   115,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,   121,     0,   515,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   179,     0,     0,
     180,     0,   181,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,   183,   184,   185,     0,     0,     0,     0,
       0,     0,     0,   186,     0,   187,     0,     0,     0,     0,
     188,     0,   189,   190,   191,     0,     0,     0,     0,   192,
       0,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   196,   197,     0,     0,   198,
       0,   972,     0,   199,     0,     0,   200,   973,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,  1366,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   205,   206,     0,     0,     0,
       0,     0,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   208,     0,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   211,   212,     0,     0,
       0,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,   214,     0,     0,     0,     0,     0,   215,     0,
     216,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,   217,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,  1367
};

static const yytype_int16 yycheck[] =
{
       4,    50,  1450,  1650,   491,  1652,     5,     4,    12,   661,
     662,   666,     4,     5,     3,     4,     5,     0,     5,     5,
       5,    14,  1141,    61,  1143,     4,     4,   966,     5,    33,
     969,     3,     4,    50,     4,     5,    40,     5,     3,     4,
       3,     4,     3,     4,    32,    49,    27,   986,    52,     5,
    1169,  1170,  1171,     5,    58,     4,     3,     4,    62,    66,
       4,    65,     3,     4,    36,    69,    70,    48,    61,    73,
      51,    36,    76,    77,   995,    40,    80,    17,     3,     4,
      84,    62,    99,     3,     4,    89,     3,     4,     4,    36,
      27,     3,     4,     3,     4,    97,    66,   103,   102,    21,
     104,   105,   106,   107,    85,     3,     4,     3,     4,    17,
      61,    12,    17,    61,    99,   147,   133,    66,    88,   123,
     105,   102,   190,    22,     4,    17,   118,    27,     6,    93,
     116,     3,     4,    87,   130,   190,   166,   877,   878,   879,
       4,   131,    40,    46,   277,   110,   110,  2700,   118,    48,
      49,    87,    53,    32,   158,     5,   154,   129,     3,     4,
     163,    59,    21,    62,   129,     6,   136,   164,   119,   118,
      71,   119,   208,   180,   255,   243,     3,     4,   182,   185,
     261,    31,   129,   187,   182,     4,    66,    33,    20,  2533,
     220,  2744,    20,    98,   187,   250,   167,    66,   938,   100,
     154,    61,    66,   189,   175,    27,   154,   199,    21,   108,
     109,    56,   110,   205,   206,    21,   117,     4,   154,   120,
     252,   185,     3,     4,   185,    57,   191,   141,   191,   199,
     131,    16,    61,    21,   225,   205,   206,   275,   118,    21,
       4,   119,   246,   233,   240,   275,   295,    88,   156,   121,
     199,    78,   254,   239,   118,   258,   205,   206,   262,   263,
     298,   297,   917,   256,   241,   165,   222,   207,    27,     5,
     287,   239,   265,   277,   190,   185,   262,   284,   119,   443,
     190,   285,   286,   220,   288,   289,   274,   291,   239,   185,
     119,   278,   456,   191,   277,   239,   288,   301,   297,   118,
     279,   279,   294,   220,   297,   309,   310,   304,   297,   294,
     262,   233,   304,   285,   265,   207,   226,   265,   288,   199,
     285,   220,   285,   222,   294,   205,   206,   243,   332,   333,
     334,   118,   336,   233,   295,   199,   340,   341,   285,   288,
     250,   205,   206,   170,   285,   337,   286,   351,   352,   341,
     342,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     285,   264,   343,   367,  1019,   285,   211,   337,   372,   373,
     340,   341,   342,   285,   233,   275,   380,   338,   339,   383,
     199,    63,  1037,   281,   285,   295,   205,   206,   337,   221,
       4,     5,   341,   342,   286,   274,   400,   401,   220,   295,
     299,   229,   234,   407,   408,   409,   165,   411,   288,  2753,
    2754,    16,   199,     4,    61,   275,   243,  1069,   205,   206,
     233,   425,   104,    63,   288,   429,   190,   233,   338,   339,
     434,   435,   436,   437,   438,   439,   265,   441,   298,   220,
     444,   445,   338,   339,  1383,   233,    60,  1386,  1100,    40,
      40,   233,    66,   457,    30,    37,    66,   337,  1577,    78,
     279,   341,   342,   295,   104,    47,    61,   166,     4,   288,
      34,    88,   119,   337,   233,    40,     5,   341,   342,    64,
      30,    66,   122,     4,    83,    88,     5,    56,     3,     4,
     135,  1412,    74,    63,    30,    14,    15,     5,    37,   113,
      99,   288,    61,   220,  1244,   105,    61,   511,   512,    17,
      61,  1251,   115,    13,   128,    40,   275,  1438,   337,   110,
     110,   220,   341,   342,   119,   529,   140,    56,   692,   174,
       4,   237,   146,   147,   104,    56,    65,   586,   152,  1460,
       3,     4,    61,   107,    94,   110,   225,     4,   230,   255,
     337,   170,   556,     0,   341,   342,    14,    15,   275,     4,
     119,    37,   244,   245,   119,   147,     5,    12,   119,    61,
     252,    47,     3,     4,    15,    14,    15,   626,    66,   583,
     183,    22,     5,   159,   283,   110,    27,   261,   193,   203,
     230,    61,   192,    34,   197,   180,   645,    27,    74,    56,
     191,   191,   184,    61,   244,   245,     3,     4,   222,     3,
       4,   161,   226,   617,   228,    42,    43,     5,   265,    54,
       5,     4,    61,   159,   243,     4,   191,   119,   255,    14,
      15,    27,   208,    74,   261,  1290,   200,   251,   252,   643,
     128,   241,   211,    40,   226,   259,  1301,    61,   239,   119,
     253,    61,     5,   335,   336,    90,   660,   233,   121,   663,
     230,  2308,   201,   277,   152,   247,   191,   257,   187,   188,
     265,   147,   208,   837,   244,   245,    61,   681,   682,   683,
     684,   135,   211,   687,     5,   689,   186,   691,   203,   693,
     211,   294,   257,   243,     5,   335,   336,   233,   248,   284,
     282,   304,   137,    14,    15,   119,   265,    31,   184,   119,
     265,     5,    82,   110,   265,     5,   298,   881,   191,   333,
     174,   770,   163,   164,   165,   166,   167,   168,   169,   187,
     188,   172,   173,   174,   175,     4,   166,   256,    33,   122,
     228,   168,   169,     5,     4,     5,   265,   266,   187,   188,
      61,   270,    14,    15,   211,   759,   760,   761,   762,   763,
     116,   765,   766,   767,   768,   335,   336,    26,   195,    66,
     166,   247,   203,   265,    82,   117,   780,   781,   297,   149,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   277,
     220,   277,   796,   797,   191,   265,    14,    15,   256,    61,
      14,    15,   187,   188,   239,   167,   105,   265,   266,     3,
       4,   815,   816,   817,    40,  1754,    33,   256,   201,   260,
     261,   116,   298,   220,   220,    40,   265,   266,   832,   833,
     834,   270,   836,     5,   838,  1774,   840,    70,    83,   297,
      66,   149,    26,    61,     3,     4,   287,    61,   218,   219,
    1789,   265,   111,  1792,    99,   265,   200,   861,   297,   863,
      89,  1800,   232,   122,  1803,  1984,  1985,  1986,    24,    25,
     874,   256,  1811,    99,   147,  1814,   187,   188,   882,   105,
     265,   266,  1821,   887,   110,   270,   327,   328,   329,    16,
       3,     4,   187,   192,   189,   110,   191,   192,   902,   903,
      66,   271,   128,   226,   199,   276,   910,    89,   912,   913,
     218,   219,   297,  1653,    72,   919,    31,   185,     5,   214,
     924,   147,   190,   972,   232,   187,   188,   111,   173,   933,
       3,     4,  1853,     4,   167,    44,     4,   163,   122,     4,
     213,    97,   241,   202,   948,   256,    59,  1868,    14,    15,
       5,    45,     5,    82,   265,   266,   215,  1121,   226,   270,
       3,     4,   121,   271,     5,    59,   192,    40,   213,   187,
     188,     5,   156,   187,   188,  1896,   191,     5,    87,   252,
       0,    29,   250,     3,     4,     4,   297,    81,     3,     4,
       4,   995,   336,   288,   256,    61,    44,   341,    46,   343,
       4,   246,   228,   265,   266,   238,   100,     5,   270,    14,
      15,  1015,    14,    15,   247,   241,    59,   290,   202,     4,
     149,     5,   116,     4,     5,   119,   252,   295,    76,  2477,
       4,   215,  1036,     3,     4,   297,    84,   110,   256,    14,
      15,  1045,   256,    97,    59,     3,     4,   265,   266,   143,
     144,   265,   266,   279,     5,  1059,    61,  1061,   119,    61,
     262,    19,  1066,  1067,  1068,   291,     4,   293,   294,     4,
      40,   339,  1076,     3,     4,  1079,     4,  1081,     4,   297,
     189,    39,     4,   297,  1248,     5,    61,    17,     4,   218,
     219,   139,     4,  1097,     4,  1099,     3,     4,    56,  1103,
    1104,     4,   196,   232,     3,     4,     5,   333,     4,  2598,
     204,     3,     4,  1117,  1118,     5,    66,     5,  1122,  1123,
      12,   187,   188,     9,  1128,     5,  1130,  2616,    11,  1133,
      80,  1135,   167,    40,     4,     3,     4,  1186,   261,    89,
     110,   189,   271,   101,    12,     3,     4,   442,     4,    99,
     175,     9,    10,    11,   167,     3,     4,   205,   206,     7,
       8,     3,     4,     5,   212,     4,   214,   261,   262,   193,
     611,  1175,  1176,  1177,  1178,  2114,  1180,  1181,   128,     5,
    1184,   193,   187,   188,  2123,   187,   188,    22,    28,     5,
     256,   239,    22,  2132,     4,  1199,   154,   147,   193,   265,
     266,     4,     5,   110,     3,     4,  1210,    66,  1212,  1213,
    1214,  1215,   187,   188,    49,  1219,  1220,    52,     5,    49,
      55,   191,    52,  1227,   665,  1965,     3,     4,     5,   670,
    1234,   297,    66,   191,  1238,  1239,  1240,     4,     5,   333,
     535,    66,   192,   220,  2733,  1249,     5,    82,  1252,   221,
    2739,   256,    82,   211,   256,     4,   304,     4,   216,  1263,
     265,   266,  1266,   265,   266,    87,  2469,     4,   226,  2472,
     193,  2474,   567,     6,   109,     4,     5,   112,   228,   109,
       5,   256,   112,    87,  2487,  2488,   431,   432,     5,    28,
     265,   266,   297,  2033,     4,   297,     4,    99,     5,    17,
       5,  2504,   252,  2792,  1308,  2794,     4,  1311,   148,  1473,
    1314,  1315,     5,  1317,  2054,  1319,     4,    17,     5,     4,
      17,  1325,   297,  1327,  2245,     4,     4,   285,    97,     5,
    1334,   171,     3,     4,     5,   175,     7,     8,     5,    87,
    2261,   291,     4,   293,     5,  2266,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     5,  1539,    87,     5,   819,    53,
       4,   164,     5,     5,   224,    91,     4,   222,     5,     5,
       5,     4,   222,    99,     4,    20,     5,    71,    12,   105,
      12,     4,     4,     4,     4,  1409,  1410,  1411,  1412,   148,
       4,   263,     5,     5,    88,     5,   251,     4,   124,     4,
     260,   251,     5,     4,   251,   279,   100,  1431,   268,   269,
     251,  1435,   171,     5,  1438,     4,   175,     5,     5,     5,
       5,   147,   277,   117,     4,     4,   120,     5,     5,   155,
     263,     5,     5,     5,  1458,  1459,  1460,   131,     3,     4,
       5,     4,     7,     8,  1468,     4,     4,  1471,     3,     4,
       5,     5,     7,     8,  1478,     5,     5,     5,     5,     5,
       4,   233,     5,     5,     4,   224,   192,     5,  1492,     5,
     233,   233,   233,  1497,   200,     5,   135,  1501,   172,  1503,
    1504,   105,  1506,  1507,  1508,   233,  1510,   105,    40,  1513,
    1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,  1523,
     233,   260,  1526,  1527,  1528,  1529,   105,    16,     5,   268,
     269,    40,  1536,  1537,    23,   241,   237,  1541,  1542,  1543,
       5,  2281,  1546,  1547,  2465,   237,   252,   207,   207,     4,
    2290,     5,  2473,    35,  1558,  1559,     5,  1561,  1562,   207,
     207,   267,     4,     4,   110,  2486,   861,     5,     5,     5,
    2491,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,  2339,
       5,  1042,  2342,   110,     4,  2345,     5,  2347,  1612,  1613,
       5,     5,     4,  1617,     5,     5,     4,     4,  1622,  1623,
       5,  1625,  1626,  1627,   106,  1629,  1630,     5,  1632,     5,
       5,  1635,  1636,     4,     6,     5,     5,     4,    12,    12,
    1644,    38,     5,   125,   126,   127,     4,  1651,     4,     4,
     132,     4,     4,  1657,  1658,  1096,    38,     5,     4,     0,
       5,  1665,   233,   145,   135,  1106,   166,  1671,     4,   151,
     233,   233,   233,     4,     4,     4,   193,   233,    61,     4,
     162,     4,   233,     5,   203,     5,   241,     5,   263,     5,
       5,     5,     4,     4,   301,     5,     4,     4,     4,     4,
    1704,     5,     5,     5,   301,     4,     4,     4,   233,     4,
       4,     4,   233,   301,     4,   301,     5,   220,   233,   220,
       5,   220,   220,  1018,   220,     5,  1730,  1731,     5,     5,
       4,  1735,     5,   116,     5,  1899,   119,  1741,     4,     4,
       4,   277,     5,     5,     4,     4,   235,     5,   237,  1913,
    1914,     5,     4,  1917,     5,     5,     4,     0,     5,  1923,
       4,  1925,   344,     4,     6,     4,     4,    12,     5,     5,
       5,   154,     5,     5,     5,     5,     5,     4,   263,     5,
       4,     4,  1223,  1224,     5,  1080,     5,     5,     4,   263,
       5,   273,     4,   263,     5,     5,     5,     4,     4,   277,
       5,     5,     5,     5,     4,     4,   189,  1971,     5,  2730,
       5,     5,     5,     4,     4,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     5,  1848,  1849,     5,  1851,  2012,  1853,
       5,     5,     4,   236,     4,     4,   239,     5,     5,     5,
       5,     4,   297,     5,  1868,  1869,  1870,  1871,  1872,  1873,
    1874,  1875,  1876,  1877,     4,     4,     4,     4,     4,   262,
       5,     5,   265,     5,     5,     5,     4,     4,  1892,     5,
    1894,     4,  1896,   276,     5,     5,     4,  1901,     4,     4,
      33,     4,     6,     5,  1199,     5,     4,     4,  1912,     5,
       5,     5,     5,     5,     5,  1919,     5,     5,     5,     4,
     344,     5,     4,     4,   344,     5,  1930,  1931,  1932,  1933,
    1934,  1935,  1936,  1937,  1938,  1939,     5,     5,  1942,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,
       4,  1955,     4,  1957,  1958,  1959,     5,     5,     5,     5,
    1255,     4,     4,  1404,     5,     5,     5,     5,     4,  1973,
       4,     6,     5,     4,     4,  1270,     4,  2632,     4,     4,
       4,     4,     4,   116,     4,     4,     4,     4,     4,     4,
     344,     4,  1433,   344,   344,   344,  1437,   344,     4,  2003,
       5,     5,  2006,     4,  2008,     5,  2010,     4,     4,  2013,
       5,  2015,     5,     5,     5,     5,     4,   344,  2022,  2023,
       4,   965,  1463,     4,     4,  2029,     4,  2031,     4,     4,
       4,  2035,    19,  1474,  2038,     4,  2640,     5,     4,  2256,
       5,  1482,  1483,     5,     5,     4,     4,  2702,     5,     5,
       5,     5,  1493,   186,     5,   188,   189,    44,   191,   192,
    2224,  2225,  2226,     5,     4,  2229,     4,  2231,  2232,     5,
       4,  2235,     4,  2237,     4,  2630,     5,     5,     4,     4,
       4,     4,     4,  2087,     5,     5,   219,     5,     4,     4,
      77,     4,   430,     5,     5,     5,     4,    84,     5,     4,
       4,   387,     5,   236,   237,     5,  2702,    94,    95,  2698,
      -1,    -1,    -1,  1408,   101,   726,    -1,    -1,    -1,   290,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2297,    -1,   122,  2185,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,    -1,    -1,   288,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   153,    -1,    -1,  1464,
      -1,    -1,  1467,   306,   161,    -1,   347,    -1,    -1,    -1,
      -1,  1476,    -1,    -1,    -1,    -1,    -1,  2191,    -1,  1484,
      -1,    -1,    -1,    -1,   181,    -1,  1491,    -1,    -1,    -1,
    2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,  2213,
    2214,    -1,    -1,    -1,    -1,    -1,  2220,    -1,    -1,    -1,
      -1,    -1,   953,  2227,  2711,  2712,  2230,    -1,    -1,   216,
      -1,    -1,  2236,     4,    -1,  2239,  2240,  2241,  2242,  2243,
    2244,  2245,  2246,  2247,  2248,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,   985,    -1,    -1,  2261,  2262,  2263,
    2264,  2265,  2266,  2267,  2268,  2269,  2270,  2271,  2272,    -1,
    2274,    -1,  2276,  2277,  2278,    -1,    -1,   264,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2451,   275,   422,
    2294,    -1,    -1,    -1,  2298,  2459,    -1,    -1,  2302,    -1,
     433,    -1,  2306,    -1,    -1,    -1,    -1,    -1,    -1,   442,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1622,    -1,    -1,
     101,    -1,    -1,    -1,  2498,    -1,    -1,    -1,   509,    -1,
      -1,    -1,    -1,    -1,    -1,   516,    -1,    -1,   519,    -1,
      -1,    -1,  2356,   524,    -1,    -1,    -1,   528,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   511,    -1,
      -1,   514,   515,   154,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1686,    -1,    -1,   527,    -1,    -1,    -1,    -1,   532,
    1695,    -1,    -1,    -1,  1699,    -1,    -1,  1351,   541,   542,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   588,    -1,  1363,
      -1,  1862,    -1,    -1,    -1,  2429,    -1,    -1,    -1,  2433,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1381,  1382,  2443,
    2444,    -1,    -1,    -1,    -1,   216,  2450,    -1,    -1,    -1,
      -1,    -1,    -1,  2457,    -1,    -1,  1897,    -1,    -1,    -1,
      -1,  2465,    -1,  2467,    -1,    -1,  2470,  2471,    -1,  2473,
      -1,    -1,   605,   606,   607,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2486,    -1,    -1,  2489,  2490,  2491,  2492,  2493,
    2494,  2495,  2496,    -1,    -1,  2499,    -1,    -1,    -1,  2503,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2514,    -1,    -1,    -1,    -1,  2519,    -1,   688,    -1,    -1,
      -1,    -1,    -1,    -1,   695,    -1,    -1,    -1,    -1,    -1,
      -1,   664,  2536,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    -1,    -1,    -1,    -1,    -1,  1861,  2571,    -1,  1864,
      -1,    -1,    -1,  2577,    -1,  2579,    -1,    -1,    -1,    -1,
      -1,  2585,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2598,  2599,    -1,    -1,  2475,    -1,
      -1,    -1,    -1,    -1,  1335,  1336,  1337,    -1,    -1,    -1,
      -1,  2660,  2616,  2617,  1345,  1346,  1347,  2621,    -1,    -1,
      -1,  1352,  1353,  1354,  2501,    -1,  1357,  1358,    -1,  1360,
    1361,    -1,    -1,    -1,    -1,    -1,  2640,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   822,    -1,    -1,    -1,    -1,    -1,    -1,   829,  1390,
    1391,  2665,     4,  1394,  1395,    -1,    -1,  2671,    -1,  2673,
      -1,    -1,    -1,    -1,    -1,    -1,  2680,    19,    -1,    -1,
      -1,  2685,    -1,    -1,    -1,    -1,  2690,    -1,    -1,    -1,
     823,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,   835,    -1,   875,    -1,    -1,    -1,    -1,   880,
      -1,    -1,   883,    -1,    56,    -1,    -1,    -1,    -1,  2596,
    2597,    -1,    -1,  2600,   895,  2602,  2730,    -1,    -1,  2733,
    2734,    -1,    -1,  2737,    -1,  2739,  2740,  2614,  2615,   872,
     873,    -1,  2619,  2620,  2039,    -1,  2623,  2751,  2752,    -1,
      -1,  2628,  2629,    -1,    -1,    -1,    -1,    -1,  2762,   101,
      -1,  2765,    -1,   896,    -1,    -1,    -1,  2771,  2772,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2792,  2084,
    2794,    -1,    -1,    -1,    -1,    -1,    -1,  2674,    -1,    -1,
    2677,    -1,    -1,    -1,    -1,  2682,    -1,    -1,    -1,    -1,
     943,  2688,   154,    -1,    -1,    -1,  2693,    -1,    -1,    -1,
    1764,    -1,   993,    -1,    -1,    -1,    -1,    -1,  1772,  1773,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2282,    -1,  1787,  1788,    -1,    -1,    -1,    -1,   191,
      -1,    -1,    -1,    -1,  1798,  1799,    -1,   199,    -1,    -1,
      -1,    -1,    -1,   205,   206,  1809,  1810,    -1,    -1,   211,
      -1,    -1,    -1,    -1,   216,  1819,  1820,    -1,    -1,    -1,
      -1,  1825,    -1,    -1,  2761,  1018,    -1,  2764,    -1,    -1,
      -1,  1835,    -1,    -1,  2189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2783,    -1,    -1,  2786,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2798,  2799,  2218,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2228,     4,     5,    -1,  1070,    -1,  2234,
      -1,    -1,    -1,    -1,    -1,    -1,   288,  1080,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      60,    -1,    -1,    -1,    -1,   337,    66,    -1,    -1,   341,
     342,    -1,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,  1745,    -1,  1187,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1758,    -1,    99,
      -1,    -1,    -1,    -1,    -1,   105,    -1,  1768,    -1,    -1,
      -1,    -1,    -1,   113,  2485,    -1,    55,    -1,    -1,  1182,
      -1,    -1,    -1,    -1,    -1,  1226,    -1,    66,   128,    -1,
      -1,    -1,    -1,    -1,  2505,    -1,  1199,    -1,  2509,     4,
    1241,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    91,    92,    19,    -1,    -1,    -1,    -1,    -1,
      99,    -1,    -1,   163,    -1,    -1,   105,    -1,    -1,  1232,
      -1,    -1,   172,   173,    -1,    -1,    -1,    -1,    -1,  1840,
    1243,    -1,    -1,    -1,    -1,   124,    -1,    -1,    -1,   128,
      -1,    56,   192,    -1,    -1,    -1,    -1,    -1,  2423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1270,   147,    -1,
      -1,    -1,  1275,   213,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2098,    -1,   226,    -1,   228,    -1,
      -1,    -1,    -1,    -1,  2108,    -1,   101,    -1,  2112,  2113,
      -1,   241,    -1,    -1,    -1,    -1,   246,  2121,  2122,    -1,
      -1,    -1,   252,   192,    -1,    -1,  2130,  2131,    -1,   259,
      -1,   200,  2136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2146,  2147,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,  2157,  2158,    -1,    -1,    -1,    -1,   154,
     290,   291,    -1,   293,  2168,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   241,  2177,    -1,  2179,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   252,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   267,    -1,
      -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,   277,    -1,
     279,    -1,    -1,    -1,    -1,  1408,   211,    -1,    -1,    -1,
    2575,   216,    -1,    -1,    -1,    -1,    -1,    -1,  2583,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1472,    -1,  1436,    -1,  2746,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,
      -1,  1464,    -1,    -1,  1467,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1476,  1477,    -1,    -1,    -1,    -1,    -1,
      -1,  1484,    -1,    -1,    -1,    -1,    -1,    -1,  1491,    -1,
      -1,  1532,    -1,    -1,    -1,    -1,  2097,  1538,    -1,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    -1,  1531,    -1,
      -1,  1534,  1535,    -1,    -1,    -1,  2137,  2138,  2139,  2140,
    2141,  1544,  2143,  2144,    -1,    -1,  2360,  2148,  2149,  2150,
    2151,  2152,    -1,  2154,  2155,    -1,  2370,    -1,    -1,    -1,
    2725,    -1,    -1,    -1,    -1,  2379,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2388,    -1,    -1,  1618,    -1,    -1,
      -1,  2395,    -1,  1624,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2756,  2406,    -1,  2759,    -1,    -1,    -1,  2412,    -1,
      -1,  2415,    -1,    -1,  2418,    -1,    -1,  1648,    -1,    -1,
      -1,    -1,  1615,    -1,  1655,    -1,    -1,    -1,    -1,  1622,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1640,    -1,    -1,
    1681,    -1,    -1,    -1,    -1,    -1,    -1,  1688,    -1,    -1,
      -1,    -1,    -1,  1656,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1675,    -1,    -1,    -1,    -1,  1680,    -1,    -1,
    1683,  1684,  1685,  1686,  1687,    -1,  1689,    -1,    -1,  1692,
      -1,    -1,  1695,  1696,  1697,  1698,  1699,  1700,    -1,  1702,
    1703,    -1,    -1,    -1,  1707,  1708,  1709,    -1,  1711,  1712,
      -1,    -1,    -1,    -1,  1717,  1718,    -1,    -1,    -1,  1722,
      -1,    -1,    -1,    -1,  1727,    -1,    -1,    -1,    -1,    -1,
    2544,    -1,    -1,    -1,  2548,    -1,    -1,    -1,    -1,    -1,
      -1,  2555,    -1,    -1,    -1,    -1,    -1,  2561,    -1,    -1,
      -1,  2565,    -1,    -1,  2568,    -1,    -1,    -1,  2359,    -1,
      -1,  2362,  2363,  2364,  2365,  2366,    -1,  2368,  2369,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2380,
    2381,  2382,  2383,  2384,    -1,  2386,  2387,    -1,  2389,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2399,  2400,
    2034,    -1,    -1,    -1,  1845,    -1,    -1,     3,     4,  2410,
      -1,    -1,    -1,    -1,  2048,  2049,  2050,    -1,    -1,  2053,
      -1,  2055,  2056,    19,  1865,  2059,  2060,  2061,    -1,    -1,
    2064,  2065,    -1,    -1,  2068,    -1,  2070,  2071,    -1,  2073,
       3,     4,    -1,    -1,  1847,    -1,    -1,  1850,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,  1898,  1861,  1900,
      56,  1864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1916,    -1,  1918,    -1,    -1,
      -1,  1922,    -1,  1924,    -1,    -1,    -1,    -1,    -1,    -1,
    1893,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1964,    -1,    -1,  1967,  1968,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1976,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2547,    -1,    -1,    -1,
    1953,    -1,    -1,  2187,    -1,    -1,  2190,  2558,   154,  2560,
      -1,  2195,    -1,  2564,    -1,  2199,    -1,    -1,  2009,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2025,  2219,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,  2046,    -1,    -1,    -1,    -1,
    2051,    -1,    -1,    -1,    -1,   211,  2057,    -1,    -1,    -1,
     216,  2062,    -1,  2026,    -1,  2066,    -1,    -1,  2069,    -1,
      -1,  2072,    -1,  2074,    -1,    -1,    -1,    -1,    -1,  2080,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,  2650,
      -1,    -1,  2653,   216,    -1,  2656,    -1,  2658,    -1,    -1,
      -1,    -1,    -1,    -1,  2067,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2310,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2340,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,   154,    -1,
      -1,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,  2189,    -1,    27,  2192,
    2424,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2202,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,  2445,    51,    52,    -1,  2218,    -1,    -1,  2221,    -1,
      -1,  2455,    -1,    62,    -1,  2228,    -1,  2461,  2462,    -1,
    2233,  2234,  2273,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,    -1,   281,    -1,    -1,    -1,   108,
     109,    -1,    -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,  2321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   170,    -1,    -1,    -1,    -1,    -1,    -1,  2572,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2350,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
    2421,    -1,    -1,   222,    -1,    -1,    -1,  2428,   227,    59,
      -1,  2432,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      19,    -1,    -1,   242,    -1,    -1,    -1,    77,  2449,    -1,
      -1,    -1,   251,    -1,    84,    -1,    86,    87,    -1,    -1,
    2423,    -1,    -1,    -1,    -1,    95,    96,    -1,  2662,    -1,
    2664,    -1,  2666,    -1,  2668,    -1,  2670,    -1,  2672,   278,
     279,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      69,    -1,    -1,   123,    -1,    -1,    -1,    -1,    -1,    -1,
     299,  2464,    -1,    -1,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,    91,  2476,    -1,    -1,   146,   147,    -1,    -1,
      -1,    -1,   101,   153,    -1,    -1,  2720,    -1,    -1,    -1,
     160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   173,   343,    -1,   176,   177,   178,    -1,
      -1,   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2525,    -1,   194,    -1,    -1,    -1,    -1,    -1,
      -1,  2534,  2766,    -1,    -1,   154,    -1,    -1,    -1,   209,
     210,   211,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,  2604,   234,   184,    -1,   237,    -1,   239,
      -1,   241,  2575,  2576,    -1,  2578,   246,    -1,    -1,    -1,
    2583,  2584,    -1,    -1,   203,  2588,    -1,    -1,    -1,   259,
      -1,    -1,    -1,    -1,   264,    -1,    -1,   216,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     280,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2622,
      -1,    -1,   292,    -1,   294,    -1,    -1,    -1,    -1,    -1,
     300,    -1,    -1,   303,   304,    -1,    -1,    -1,  2641,    -1,
      -1,    -1,    -1,  2646,    -1,   264,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2694,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,    -1,
     340,    -1,  2713,  2714,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    -1,   333,    -1,  2757,    20,    21,    22,
      -1,    -1,  2725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2776,    -1,    -1,  2779,  2742,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      -1,    -1,    55,  2756,    -1,    -1,  2759,    -1,    -1,    62,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    19,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,   105,    -1,    -1,   108,   109,    -1,    -1,   112,
      -1,    -1,    48,    49,    -1,    19,    52,    -1,    56,    -1,
      -1,    -1,    -1,    59,    -1,   128,    62,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    -1,   147,    19,    82,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,   170,    -1,    -1,
      -1,    -1,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,   192,
      -1,    -1,   128,    -1,    -1,    -1,    -1,   101,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,   154,   220,    -1,   222,
      -1,    -1,    -1,    -1,   227,   228,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,   241,   242,
      -1,    59,    -1,   179,    -1,    -1,    -1,    -1,   251,   252,
     154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   211,   277,    -1,   279,    -1,   216,    -1,
     154,    -1,    -1,   101,   220,    -1,    -1,    -1,   291,    -1,
     293,   227,   228,    -1,    -1,    -1,   299,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   211,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     333,    -1,    -1,    -1,   272,    -1,   154,    -1,    -1,    -1,
      -1,   277,   216,   279,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,    -1,    -1,    -1,   333,   216,   154,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    -1,    -1,
      -1,   216,    -1,   281,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    41,    -1,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    -1,    -1,    -1,    -1,    93,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,   150,    -1,    -1,   153,
      -1,   154,    -1,   157,    -1,    -1,   160,   160,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,   210,    -1,    -1,    -1,
      -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,    -1,   241,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   280,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,
      -1,    -1,   296,    -1,    -1,    -1,    -1,    -1,   302,    -1,
     304,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   123,   134,   138,
     141,   146,   147,   153,   160,   173,   176,   177,   178,   181,
     182,   194,   209,   210,   211,   223,   231,   234,   237,   239,
     241,   246,   259,   264,   280,   281,   292,   294,   300,   303,
     304,   334,   340,   346,   237,   255,   378,    66,    12,    53,
      71,   100,   117,   120,   131,   285,   380,     3,     4,   285,
     347,   385,   185,   190,   226,   250,   295,   339,   387,   277,
       4,    40,   110,   191,   239,   392,    28,   148,   171,   175,
     224,   260,   268,   269,   360,   394,    83,    99,   173,   213,
     246,   395,    40,    59,   110,   191,   281,   347,   404,     4,
      19,    40,    56,   101,   118,   154,   191,   199,   205,   206,
     211,   216,   288,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   337,   341,   342,   349,   357,   358,   359,   406,
      33,   407,   349,    29,    44,    46,    76,    84,   139,   189,
     205,   206,   212,   214,   239,   304,   348,   141,   408,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   122,   138,   149,   150,   153,   157,
     160,   181,   182,   185,   194,   209,   210,   217,   239,   241,
     264,   280,   281,   289,   296,   302,   304,   340,   409,    83,
      99,   451,    19,    44,    77,    84,    94,    95,   101,   122,
     138,   153,   161,   181,   216,   264,   275,   304,   454,   349,
      88,   115,   183,   197,   253,   294,   304,   460,    16,    26,
     111,   122,   156,   202,   215,   463,   225,   481,     5,    66,
      88,   136,   294,   340,   349,   482,     5,   483,    20,    57,
     221,   234,   295,   499,    64,    66,   180,   284,   518,    66,
     200,   336,   341,   343,   519,    39,   191,   226,   285,   347,
     357,   359,   520,     5,   294,   304,   349,   523,    70,   167,
     238,   247,   524,    88,   499,    61,   275,   298,   531,   191,
     285,   347,   532,    26,   111,   122,   202,   215,   534,    50,
      99,   133,   287,   549,   550,     4,    37,    47,    74,   147,
     184,   226,   247,   282,   298,   373,     4,   122,   201,   551,
     285,   347,   553,    16,    23,   235,   237,   358,   554,   225,
     558,   285,   347,   559,     0,    22,    48,    49,    62,   108,
     109,   220,   222,   299,   379,     5,    59,   347,   381,   261,
       5,     4,   285,   347,   382,     5,    32,   274,   383,   121,
     347,   384,   121,   347,   386,   347,     4,   190,   243,   390,
     185,   295,   338,   339,   347,   389,   349,   135,   174,   388,
     347,    78,   170,   243,   347,   391,     5,   347,     4,   239,
     393,   347,   347,     5,   222,   396,    31,   397,     5,   398,
       5,   402,     5,    31,   403,   347,     9,    10,    11,   347,
     353,   354,   355,   356,   347,   347,    40,   110,   191,   347,
     405,   347,   191,   357,   359,   347,    35,   106,   125,   126,
     127,   132,   145,   151,   162,   273,   362,   347,     4,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     116,    66,    53,    71,    88,   100,   117,   120,   131,   172,
     410,   117,   412,   185,   190,   226,   250,   295,   338,   339,
     347,   399,   413,   277,   416,   167,   417,   167,   175,   419,
      65,    66,    69,    91,   167,   184,   203,   264,   333,   357,
     421,   347,   359,   424,    59,   281,   357,   425,   272,   357,
     359,   426,    33,   427,   357,   359,   428,     4,   357,   359,
     429,    45,    59,    81,   100,   116,   119,   143,   144,   196,
     204,   261,   262,   333,   433,   208,   297,   439,     5,    89,
       6,    88,   119,   431,     5,    65,   359,   430,    16,   499,
      66,   180,   284,   440,    66,   226,   441,   276,    61,   275,
     298,   442,   131,   233,   443,    37,    47,    74,   147,   184,
     247,   298,   444,   359,    89,    16,   193,   449,   357,   452,
      72,   455,    31,   456,    44,    87,   189,   457,   147,   213,
     252,   290,   458,   357,    18,    58,   114,   281,   357,   459,
       4,   190,   462,     5,     4,     6,   119,   347,     4,     5,
     239,   464,     5,   466,     5,   116,   189,   239,   262,   467,
      93,   110,   185,   480,     5,   478,     5,   262,   479,     4,
       5,   349,   349,   347,   347,     5,     4,     5,    60,    66,
      73,    75,    80,    83,    89,    99,   105,   113,   128,   147,
     163,   172,   173,   192,   213,   226,   228,   241,   246,   252,
     259,   277,   290,   291,   293,   333,   484,     5,     4,   347,
       5,   347,    40,   110,   347,   522,   349,   347,   357,   359,
     521,   347,   362,   347,     4,   358,    54,    90,   137,   239,
     525,     4,     4,   347,   147,   252,   526,     5,   357,     4,
      40,   110,   347,   533,   347,    97,    61,   119,   239,   265,
     535,   119,   548,    61,   116,   119,   154,   189,   236,   239,
     262,   265,   276,   537,   538,    61,   119,   265,   547,     5,
       4,    34,   107,   200,   530,    66,   349,   374,    66,   349,
     375,    66,   349,   376,    13,   186,   529,   347,   347,    40,
     110,   191,   220,   347,   377,   347,   262,     4,   347,   347,
       4,   557,     4,   279,   555,     4,   279,   556,     4,   362,
     121,   347,   560,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,     4,     5,   347,    12,   347,   347,
     347,    30,    94,   161,   243,   248,   361,   361,     4,   347,
     347,     4,     4,     4,   347,   347,   347,   347,     4,     4,
       5,     5,   357,     5,   347,   347,   353,   355,   355,   357,
     347,   347,   347,   347,   347,   347,   347,   357,   359,   356,
     347,   347,   356,   347,     5,   261,   103,   185,   411,   190,
     243,   414,   167,    78,   170,   243,   415,   135,   174,   400,
     400,     4,   418,     4,   420,   190,   250,   422,   175,   423,
     167,   362,   347,   357,   347,   357,   357,   362,   362,   362,
     357,   362,   347,   357,     4,   436,     4,   359,   434,   193,
       4,   164,   304,   435,   193,   357,     4,   357,   438,     5,
       5,     4,   193,   347,     4,     5,    60,    66,   113,   128,
     140,   146,   147,   152,   203,   222,   226,   228,   251,   252,
     259,   277,   333,   493,   359,    66,   445,    66,   446,    66,
     447,   220,   448,   347,     5,   221,   450,   358,   362,     5,
     357,   357,   357,     4,   349,     4,     4,   193,   347,    14,
      15,    61,   187,   188,   256,   265,   266,   297,    87,     5,
       5,    14,    15,    61,   187,   188,   256,   265,   266,   270,
     297,    87,   154,   160,   358,   470,   474,    87,   154,     5,
     468,     4,     4,    14,    61,   187,   256,   265,   297,     5,
       5,     4,   347,   358,    20,    21,    22,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,    99,   105,   108,
     109,   112,   128,   147,   170,   192,   220,   222,   227,   228,
     241,   242,   251,   252,   277,   279,   291,   293,   299,   333,
      66,    80,    89,    99,   128,   147,   192,   228,   252,   291,
     293,     4,    30,   159,   208,   233,   487,     5,    63,   104,
     230,   244,   245,   335,   336,   492,    99,   485,    17,    40,
     110,   191,   491,     4,     5,    17,   207,   286,   347,   252,
     492,   500,   122,   492,   501,    36,    40,   110,   129,   191,
     285,   347,   502,   357,   349,    91,    99,   105,   124,   147,
     155,   192,   200,   241,   252,   267,   505,    40,   110,   191,
       5,   278,    17,   207,   286,   509,   279,   349,   510,     5,
      99,   105,   294,    17,    17,     4,   347,   347,   347,   347,
     347,   362,   347,   347,   356,   347,     4,   362,    40,   110,
     191,   257,   527,    40,   110,   191,   257,   528,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   538,    61,
     119,   154,   265,   542,    61,   119,   265,   546,    87,   154,
      61,   119,   265,   540,     4,    61,   119,   265,   539,     5,
       5,     4,     5,     5,     5,   347,   347,   347,   347,   347,
     347,     4,   347,   552,   347,   347,     6,   358,     4,     5,
       4,     4,     5,     4,    97,   254,   363,   347,   347,    12,
     347,   347,   347,   347,   347,   347,   347,   347,   347,     5,
      12,   347,   347,    12,     4,    12,     4,     4,   347,   347,
     347,     4,   349,     4,     4,   362,   357,   362,   347,   347,
     347,   357,   347,   356,   347,   347,     5,     5,   347,   359,
     347,   357,   357,   347,   362,   363,   363,   363,   362,   356,
     347,   362,   347,   130,   240,   350,   437,   164,     5,     4,
     362,   357,     4,     5,     4,     4,   347,   432,   347,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   108,   109,   112,   128,   147,   170,   179,   220,   227,
     228,   242,   252,   277,   279,   289,   299,   333,    66,   128,
     152,   228,   277,    30,   159,   208,   233,   494,   347,    20,
     203,   347,   495,    17,   347,   251,   505,   251,   203,   347,
     496,   279,   497,    17,    98,   347,   347,     5,   363,    56,
     357,     4,     5,   461,   347,     5,     5,     5,   154,   182,
     367,   367,   163,   258,   365,     4,     4,     5,     5,   465,
     263,   263,     5,     5,     5,    17,   156,   366,   366,   365,
       4,     4,   365,     5,     5,   469,   160,   332,   358,   473,
       5,   472,     5,     5,   476,     5,   477,     5,    14,    15,
      61,   187,   188,   256,   265,   266,   270,   297,     4,     4,
       5,     5,   367,   365,     4,     5,     5,   362,    82,   149,
     218,   219,   232,   271,   370,     7,     8,   347,   352,   233,
     233,   233,   105,    40,    66,    99,   105,   110,   128,   147,
     163,   192,   228,   241,   252,   279,   291,   293,   294,   333,
     486,   233,     5,    27,   165,   233,   275,   135,   105,    22,
      49,    52,    82,   109,   112,   222,   251,    22,    49,    52,
      55,    82,   109,   112,   222,   251,   277,    40,   233,   233,
     105,     5,   207,    27,   220,    36,   129,   285,   347,   255,
     261,   237,   357,   359,   505,    40,   220,   275,   237,   207,
       5,     5,   241,    27,   220,     4,     5,     5,   207,    36,
     129,   285,   347,   505,   207,   349,     4,     4,   347,     5,
     297,    22,    27,    48,    49,    51,    52,    62,    74,    75,
      82,    85,   102,   108,   109,   112,   170,   222,   227,   242,
     251,   278,   279,   299,   343,   488,   347,   347,   347,   347,
     347,   492,   357,     5,     4,     5,   347,   347,   357,   359,
     347,   349,   347,   347,   492,     5,   347,   347,   349,     5,
      17,     5,     5,   347,   347,   356,   347,   347,   347,   347,
     110,   347,   347,   110,     4,    42,    43,   168,   169,   195,
     372,   372,    61,   119,   265,   536,   372,     5,    61,   119,
     265,   541,     5,     5,    61,   119,   265,   543,     4,     5,
       5,     4,    61,   119,   265,   545,    61,   119,   265,   544,
       5,     5,     4,     5,     5,     4,   372,   372,   372,   347,
     347,   347,   347,   347,     4,   347,   357,   347,   358,   362,
       5,     5,    12,   347,   357,   359,   347,    12,   347,   347,
     347,    59,   347,     6,     4,   347,   347,    46,   264,   401,
       5,   349,   349,   362,   347,     4,     4,     4,   357,   347,
     347,   347,   347,   362,     4,   357,   363,   356,   347,     4,
     363,   347,    38,    38,     4,   359,     5,    24,    25,    97,
     364,   347,     4,   347,     5,    82,   149,   218,   219,   232,
     271,   357,   359,   233,   233,   233,    21,   233,   357,   233,
      27,   165,   233,   275,   135,    21,   233,   233,   233,    21,
     233,    27,   166,   220,   166,   255,   261,   166,   220,   283,
     505,   166,   220,   275,     4,   241,    27,   166,   220,   505,
     203,   347,    82,   149,   218,   219,   232,   271,   347,   347,
     347,   347,   347,   193,   347,   347,    20,   229,   453,     4,
       4,   347,   367,   367,   367,     4,   367,   367,   367,    14,
      15,    61,   187,   188,   256,   265,   266,   297,   366,   367,
     367,   367,   367,   367,     4,   367,   367,     4,   366,    14,
      15,    61,   187,   188,   256,   265,   266,   297,     5,   471,
       5,   475,     5,     5,    14,    15,    61,   187,   188,   256,
     265,   266,   270,   297,     5,    14,    15,    61,   187,   188,
     256,   265,   266,   270,   297,     5,    14,    15,    61,   187,
     188,   256,   265,   266,   270,   297,    14,    15,    61,   187,
     188,   256,   265,   266,   297,   263,     5,     5,     5,   366,
     366,   365,     4,     4,   365,     5,     4,     4,   367,   367,
       4,   367,   367,     5,   349,   357,   359,     5,   347,   347,
       5,   347,     5,   352,   105,   192,   241,   105,   192,   241,
       5,   347,   349,     5,   347,   357,   349,     5,   352,   233,
     233,    21,   233,    21,   233,   233,    21,   233,   301,   301,
       4,     4,     4,   486,     4,     4,     4,   301,   301,     4,
       5,     4,   347,     5,   347,     5,   352,   349,   357,   359,
     357,   359,   347,    27,    48,    51,    62,    85,   102,   343,
     368,     4,   347,   362,   356,   349,   357,   359,   357,   347,
     349,   349,   357,   359,   357,   359,   347,   349,   347,     5,
     347,   220,   220,   347,   347,   220,   347,   220,   347,   347,
     498,   506,   347,   220,   220,   347,   347,   347,   347,   347,
     347,   347,   347,     5,   297,   347,   489,   347,   347,   220,
     347,   347,   347,   347,   357,   362,     5,   357,   357,   347,
     347,   362,   356,   347,   347,   347,   357,   347,   347,     5,
     347,   347,   347,   347,     5,     5,     4,   372,     5,     5,
       4,     4,     4,     5,     5,     4,     4,     5,     5,     4,
       5,     5,     4,   347,   347,   357,   347,   362,   347,   357,
     359,   347,   362,   347,   347,   347,   347,   347,     5,   347,
       4,     6,   347,   347,     4,   357,   347,   362,   175,   360,
     347,   360,   363,   362,   357,   347,   347,     4,   347,   347,
       4,   357,     5,     5,     5,     5,   357,   362,   357,   357,
     357,   357,   359,   357,   362,   357,   357,   357,   359,   357,
     357,   357,   357,   359,   357,   357,   357,   347,   357,   357,
     357,   357,   357,   357,   357,   357,     5,     5,     5,     5,
     357,   347,   347,     4,   347,     5,     4,   347,   367,     5,
       5,     5,   365,     4,     4,     5,   367,   366,     4,   367,
       5,     5,     5,   366,   366,   365,     4,     4,     5,    14,
      15,    61,   187,   188,   256,   265,   266,   297,    14,    15,
      61,   187,   188,   256,   265,   266,   297,    14,    15,    61,
     187,   188,   256,   265,   266,   297,   263,     5,     5,     5,
     366,   366,   365,     4,     4,   365,     5,   263,     5,     5,
       5,   366,   366,   365,     4,     4,   365,     5,   263,     5,
       5,     5,   366,   366,   365,     4,     4,   365,     5,     5,
       5,     5,   366,   366,   365,     4,     4,     5,   366,     4,
       4,   366,     4,     4,   367,     5,   362,   357,   347,   347,
     357,   347,     5,   352,     5,   357,   359,   349,     5,   357,
     359,   362,     5,   352,   347,   347,   347,   347,   347,   347,
     347,   347,   347,     4,     4,     5,     4,     4,   347,   357,
     347,     5,   352,   349,   362,   356,   362,   347,   347,   356,
     356,   362,   356,   362,   347,   362,   356,   362,   356,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,    55,
      66,    92,   128,   277,   279,   333,   503,   504,   505,   516,
     517,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   357,     5,   347,   347,   347,   347,     4,
       4,   362,   363,     4,   490,   362,   362,   356,   347,     4,
     362,   372,   372,   372,   347,   347,   347,   362,   347,   356,
     347,   347,    12,     5,     5,     4,   347,   347,     4,   362,
     357,   347,   347,   363,   364,   347,     5,   347,   359,     5,
       5,     5,     5,   362,   364,   364,   364,   362,   364,   363,
     364,   364,   362,   364,   364,   364,   362,   364,   364,   362,
     357,   364,   362,   364,   364,   362,   364,   362,     5,     5,
       5,     5,   362,     4,   359,     5,   347,     4,   367,   366,
       4,   366,     5,     5,     5,   366,   366,   365,     4,     4,
       5,     5,     5,     5,   366,   366,   365,     4,     4,     5,
       5,     5,     5,   366,   366,   365,     4,     4,     5,   366,
     367,   367,   367,   367,   367,     4,   367,   367,     4,   366,
     366,   367,   367,   367,   367,   367,     4,   367,   367,     4,
     366,   366,     4,     4,   366,     4,   366,   366,     4,     4,
       4,   358,   364,     4,   357,   359,   364,   347,   357,     4,
     364,   364,   357,     4,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   357,   359,   364,   347,   357,
       4,   356,   356,   356,   347,   357,   359,   356,   347,   356,
     356,   357,   357,   359,   356,   347,   356,   347,   347,   347,
     347,   347,   347,   352,   347,   347,   347,   344,   344,   344,
     344,   344,   344,   344,   504,   344,   352,   347,   347,   347,
     347,   352,   347,   347,   347,   347,   347,   347,   362,   347,
     297,   351,   352,   347,   347,   363,   349,     4,     4,   363,
     347,   356,   347,    59,   347,     5,     5,   347,     4,   360,
     364,     5,     4,     5,   357,     5,   363,   364,   363,   363,
     363,     4,     5,   357,     5,     5,   347,   367,   366,   367,
     367,   367,   367,   367,     4,   367,   367,   366,     4,   366,
     367,   367,   367,   367,   367,     4,   367,   367,   366,   367,
     366,     4,   367,   367,   366,     4,   367,   366,     4,   366,
     366,   362,   357,   359,   364,     4,   362,   347,   362,   347,
     347,   347,   364,     4,   362,   347,   356,   364,   347,   356,
     364,   364,   357,   352,   347,     4,   369,   369,   347,   347,
     369,   352,   369,   506,   357,   486,     5,     4,     5,     5,
       5,     4,   349,   352,   369,   369,   347,   347,   352,   347,
     347,   347,   347,   347,   356,   347,     5,   506,   347,   369,
     349,   507,   508,     5,   349,     5,   347,     5,     4,     6,
     347,     5,    32,   274,   371,   357,     5,   371,   357,   347,
     366,   367,   366,   366,   367,   367,   366,   367,   366,   366,
     347,   364,   357,   359,   357,   347,   357,   347,   357,   359,
     357,   347,   357,   364,     4,   506,   506,   351,   347,   506,
       4,   506,   362,     5,     4,     4,   506,   506,   351,   347,
       4,   506,   506,   347,   357,   506,   506,   506,   507,   513,
     514,   505,   511,   512,     5,     5,     6,     4,   185,   295,
     339,   347,   399,   357,   357,     4,   367,   367,   367,   367,
     358,   364,   364,   347,   364,     4,   364,   364,   347,   364,
     347,   506,   506,     4,   347,   506,     5,   347,   506,     4,
     347,   506,   362,   513,   515,   516,   344,   512,     5,     5,
       4,   400,   400,   362,   362,   364,     4,   357,   359,     4,
     352,   351,   347,   347,   351,   347,   357,   516,   349,     5,
       5,   347,   347,   371,   371,     5,   357,   359,   362,   357,
     359,   506,   347,     4,   506,   347,   364,     5,   347,   347,
     362,   362,     4,   506,     4,   506,     5,     5,   351,   351,
     506,   506
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
#line 449 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 451 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 452 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 454 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 461 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 466 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 467 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 469 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 476 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 480 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 482 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 487 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 489 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 491 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 493 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 500 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 501 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 504 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 505 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 506 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 507 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 508 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 509 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 510 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 511 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 512 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 513 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 514 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 515 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 516 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 519 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 521 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 522 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 523 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 524 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 526 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 527 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 528 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 529 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 532 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 533 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 534 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 539 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 540 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 543 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 544 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 545 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 548 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 551 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 554 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 558 "frame/parser.Y"
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
#line 570 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 577 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 584 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 591 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 592 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 593 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 594 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 595 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 628 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 629 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 632 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 633 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 634 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 642 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 643 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 644 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 662 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 663 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 664 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 673 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 674 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 678 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 679 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 680 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 683 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 684 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 688 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 698 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 699 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 702 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 703 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 727 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 728 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 729 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 730 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 732 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 735 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 736 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 739 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 740 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 743 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 744 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 747 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 749 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 750 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 213:
#line 751 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 214:
#line 752 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 215:
#line 755 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 217:
#line 760 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 762 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 764 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 780 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 781 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 784 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 786 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 789 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 790 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 793 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 794 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 796 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 798 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 799 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 800 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 802 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 804 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 807 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 808 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 811 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 813 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 816 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 821 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 825 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 826 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 830 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 831 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 832 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 838 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 262:
#line 841 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 846 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 847 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 850 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 851 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 857 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 858 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 862 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 864 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 874 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 881 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 883 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 884 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 886 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 890 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 892 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 894 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 895 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 906 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 908 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 909 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 294:
#line 912 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 295:
#line 913 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 296:
#line 916 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 297:
#line 917 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 298:
#line 919 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 299:
#line 925 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 300:
#line 926 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 301:
#line 927 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 302:
#line 928 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 303:
#line 931 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 304:
#line 932 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 305:
#line 935 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 306:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 307:
#line 939 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 308:
#line 940 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 944 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 310:
#line 946 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 949 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 312:
#line 951 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 313:
#line 954 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 315:
#line 956 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 957 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 317:
#line 958 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 961 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 319:
#line 962 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 320:
#line 963 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 964 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 322:
#line 965 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 969 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 324:
#line 971 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 325:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 326:
#line 973 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 327:
#line 976 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 328:
#line 978 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 329:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 330:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 331:
#line 985 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 332:
#line 988 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 333:
#line 991 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 347:
#line 1005 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 350:
#line 1008 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1010 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 354:
#line 1013 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 355:
#line 1014 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 358:
#line 1017 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 359:
#line 1018 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 361:
#line 1021 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 363:
#line 1023 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 365:
#line 1025 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 367:
#line 1027 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 368:
#line 1029 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 369:
#line 1031 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 371:
#line 1033 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 372:
#line 1036 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 373:
#line 1037 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 374:
#line 1038 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 375:
#line 1039 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 376:
#line 1040 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 377:
#line 1041 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 379:
#line 1043 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 380:
#line 1046 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 381:
#line 1047 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 382:
#line 1048 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 383:
#line 1051 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 384:
#line 1054 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 385:
#line 1056 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 386:
#line 1058 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 387:
#line 1059 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 388:
#line 1060 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 390:
#line 1062 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 392:
#line 1065 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 393:
#line 1071 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 394:
#line 1072 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 395:
#line 1075 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 396:
#line 1076 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 397:
#line 1077 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 398:
#line 1080 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 399:
#line 1081 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 401:
#line 1087 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 402:
#line 1089 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 403:
#line 1091 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 404:
#line 1094 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 406:
#line 1096 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 407:
#line 1100 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 408:
#line 1104 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 410:
#line 1106 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 411:
#line 1107 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 412:
#line 1108 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 413:
#line 1109 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 414:
#line 1110 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 416:
#line 1112 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 417:
#line 1113 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 418:
#line 1116 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 419:
#line 1117 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 420:
#line 1118 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 421:
#line 1121 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 422:
#line 1122 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 423:
#line 1126 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 424:
#line 1128 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 425:
#line 1134 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 426:
#line 1138 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 427:
#line 1140 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 428:
#line 1141 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 429:
#line 1144 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 430:
#line 1146 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 431:
#line 1147 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 432:
#line 1150 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 433:
#line 1153 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 434:
#line 1155 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 435:
#line 1159 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 436:
#line 1161 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 437:
#line 1164 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 438:
#line 1168 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 439:
#line 1169 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 440:
#line 1171 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 441:
#line 1174 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 442:
#line 1175 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 444:
#line 1179 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 445:
#line 1180 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 446:
#line 1181 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 447:
#line 1184 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 448:
#line 1186 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 449:
#line 1187 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 451:
#line 1189 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 455:
#line 1193 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 456:
#line 1194 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 457:
#line 1195 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 458:
#line 1197 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyDist)(yyvsp[(4) - (4)].integer));;}
    break;

  case 460:
#line 1199 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 461:
#line 1202 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 462:
#line 1204 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 463:
#line 1206 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 464:
#line 1207 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 465:
#line 1208 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 466:
#line 1209 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 467:
#line 1212 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 468:
#line 1213 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1217 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1219 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 471:
#line 1222 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 472:
#line 1225 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 473:
#line 1226 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1227 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1228 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 476:
#line 1231 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 477:
#line 1232 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 478:
#line 1233 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 479:
#line 1236 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 480:
#line 1237 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 481:
#line 1238 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 482:
#line 1241 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 483:
#line 1244 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 484:
#line 1245 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 485:
#line 1246 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 486:
#line 1249 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 487:
#line 1250 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 492:
#line 1257 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 493:
#line 1258 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 494:
#line 1259 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 495:
#line 1262 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 496:
#line 1263 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 497:
#line 1266 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 498:
#line 1267 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 499:
#line 1270 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 500:
#line 1271 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 501:
#line 1274 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 502:
#line 1275 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 503:
#line 1278 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 505:
#line 1280 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 506:
#line 1283 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 507:
#line 1284 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 509:
#line 1288 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 510:
#line 1292 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 511:
#line 1295 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 512:
#line 1302 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 513:
#line 1303 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 514:
#line 1306 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 517:
#line 1309 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 518:
#line 1310 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 519:
#line 1311 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 520:
#line 1312 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 522:
#line 1314 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 523:
#line 1315 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 524:
#line 1316 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 526:
#line 1318 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 527:
#line 1319 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 528:
#line 1320 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1324 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 531:
#line 1327 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 532:
#line 1328 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 533:
#line 1331 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 534:
#line 1332 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 535:
#line 1333 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 536:
#line 1334 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 537:
#line 1337 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 538:
#line 1338 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 539:
#line 1339 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 540:
#line 1340 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 541:
#line 1343 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 542:
#line 1344 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 543:
#line 1345 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1346 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 545:
#line 1347 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 546:
#line 1350 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 547:
#line 1351 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 548:
#line 1352 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 551:
#line 1356 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 552:
#line 1357 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 553:
#line 1360 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 554:
#line 1363 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 555:
#line 1364 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 556:
#line 1368 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 557:
#line 1370 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 558:
#line 1371 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 565:
#line 1383 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 566:
#line 1385 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1387 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1388 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 569:
#line 1390 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1392 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 571:
#line 1394 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1396 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1398 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 575:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 576:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1404 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 579:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 580:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 581:
#line 1409 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1410 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1411 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1414 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 585:
#line 1418 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 586:
#line 1420 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1422 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1424 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1426 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 590:
#line 1428 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1430 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 592:
#line 1432 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 593:
#line 1435 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1437 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1439 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 601:
#line 1447 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 602:
#line 1448 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1449 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1450 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1451 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 606:
#line 1452 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1454 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 608:
#line 1456 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 609:
#line 1457 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1458 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1459 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 612:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1464 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 618:
#line 1469 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1470 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1471 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 626:
#line 1482 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 627:
#line 1485 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1488 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1491 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1494 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1497 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 632:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1506 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 635:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 642:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 643:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 652:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 655:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 660:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 662:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 663:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 667:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 672:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1619 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 675:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1624 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 680:
#line 1626 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1628 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 682:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 683:
#line 1631 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1632 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1633 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 686:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1638 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1642 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1643 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1644 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1645 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 695:
#line 1649 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 696:
#line 1651 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1652 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 698:
#line 1654 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 699:
#line 1656 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 700:
#line 1658 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1661 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 702:
#line 1662 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 703:
#line 1665 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 704:
#line 1666 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1667 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 706:
#line 1670 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 707:
#line 1677 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 708:
#line 1678 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 709:
#line 1679 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 710:
#line 1680 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 711:
#line 1681 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 712:
#line 1682 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 713:
#line 1683 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 714:
#line 1687 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::SkyDist)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 716:
#line 1695 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 717:
#line 1696 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 718:
#line 1698 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 719:
#line 1700 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 720:
#line 1701 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 721:
#line 1702 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 723:
#line 1703 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 724:
#line 1704 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 725:
#line 1705 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 727:
#line 1707 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 728:
#line 1708 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 729:
#line 1710 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 730:
#line 1712 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 731:
#line 1714 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 732:
#line 1717 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 733:
#line 1719 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 734:
#line 1720 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 735:
#line 1722 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1725 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 737:
#line 1727 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 738:
#line 1730 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1733 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 740:
#line 1737 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 741:
#line 1740 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 742:
#line 1743 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1745 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 744:
#line 1748 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 745:
#line 1752 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 746:
#line 1756 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 747:
#line 1761 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1765 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 749:
#line 1767 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1769 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 751:
#line 1770 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 752:
#line 1772 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 753:
#line 1774 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 754:
#line 1776 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1778 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 756:
#line 1780 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1781 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 758:
#line 1783 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 759:
#line 1785 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 760:
#line 1788 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 761:
#line 1792 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 762:
#line 1796 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1800 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1802 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1804 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1806 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1808 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1812 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1814 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 772:
#line 1816 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 773:
#line 1818 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 774:
#line 1820 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 775:
#line 1822 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1823 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1825 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1827 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 779:
#line 1828 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1829 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1831 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 782:
#line 1833 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1834 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 784:
#line 1835 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 785:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1838 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1840 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1842 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 789:
#line 1846 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 790:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 791:
#line 1853 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 793:
#line 1860 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 794:
#line 1864 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 795:
#line 1869 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 796:
#line 1873 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 797:
#line 1874 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 798:
#line 1875 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 799:
#line 1877 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 800:
#line 1879 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 801:
#line 1881 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 802:
#line 1885 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 803:
#line 1886 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 804:
#line 1887 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 805:
#line 1889 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 806:
#line 1891 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 807:
#line 1894 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 808:
#line 1896 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 809:
#line 1899 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 810:
#line 1901 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 811:
#line 1904 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 812:
#line 1905 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 814:
#line 1912 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 815:
#line 1916 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1918 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 817:
#line 1920 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 818:
#line 1923 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 819:
#line 1926 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 820:
#line 1929 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 821:
#line 1930 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 822:
#line 1932 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 823:
#line 1933 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1934 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1936 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 826:
#line 1937 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1939 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 828:
#line 1941 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 829:
#line 1944 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 830:
#line 1947 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 831:
#line 1949 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 832:
#line 1950 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 836:
#line 1955 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 837:
#line 1956 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 838:
#line 1958 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 839:
#line 1960 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 840:
#line 1962 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 841:
#line 1963 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 842:
#line 1965 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 843:
#line 1966 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 846:
#line 1971 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1972 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 848:
#line 1973 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1974 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1975 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1976 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1977 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 853:
#line 1978 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 854:
#line 1979 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 855:
#line 1980 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1982 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 857:
#line 1984 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 858:
#line 1986 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1987 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 1988 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 861:
#line 1989 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 1990 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 1992 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 864:
#line 1993 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 865:
#line 1994 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 866:
#line 1995 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 867:
#line 1996 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 868:
#line 1998 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 869:
#line 1999 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 870:
#line 2000 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 871:
#line 2001 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 872:
#line 2002 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 873:
#line 2003 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 874:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 875:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 876:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 877:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 878:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 879:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 880:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 881:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 882:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 883:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 884:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 885:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 886:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 887:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 888:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 889:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 890:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 891:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 892:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 893:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 894:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 895:
#line 2029 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 896:
#line 2030 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 897:
#line 2031 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 898:
#line 2032 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 899:
#line 2033 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 900:
#line 2035 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 901:
#line 2045 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 902:
#line 2053 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2062 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2070 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2077 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2084 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2092 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2100 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2105 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2110 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2115 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2120 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2144 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2153 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2163 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2172 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2180 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2190 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2200 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2210 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2222 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2231 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2239 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 928:
#line 2241 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 929:
#line 2243 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 930:
#line 2248 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 931:
#line 2251 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 932:
#line 2255 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 933:
#line 2257 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2258 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 935:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 936:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 937:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 938:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 939:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 940:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 941:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 943:
#line 2271 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 944:
#line 2272 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 945:
#line 2273 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 946:
#line 2274 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 947:
#line 2275 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 948:
#line 2278 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 949:
#line 2280 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 950:
#line 2282 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 951:
#line 2284 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 952:
#line 2286 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 953:
#line 2288 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 954:
#line 2291 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 955:
#line 2293 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 956:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 957:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 958:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 959:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 960:
#line 2303 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 961:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 962:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 963:
#line 2307 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 964:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 965:
#line 2312 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2314 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 968:
#line 2316 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 969:
#line 2318 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2323 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2327 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 974:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2333 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 981:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2341 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2343 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 987:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2351 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 990:
#line 2352 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2353 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2355 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2357 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 994:
#line 2360 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2363 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2364 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2366 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 998:
#line 2369 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 999:
#line 2372 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2373 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1001:
#line 2374 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1002:
#line 2376 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1003:
#line 2378 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1004:
#line 2380 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2381 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1006:
#line 2383 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2384 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1008:
#line 2385 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2386 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2387 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1011:
#line 2389 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1012:
#line 2391 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2393 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1014:
#line 2395 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1016:
#line 2397 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1017:
#line 2398 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1018:
#line 2400 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1019:
#line 2402 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1020:
#line 2403 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1021:
#line 2404 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1023:
#line 2406 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1025:
#line 2410 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1026:
#line 2411 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1027:
#line 2412 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1028:
#line 2413 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1029:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1030:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1031:
#line 2417 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1032:
#line 2418 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1033:
#line 2420 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1034:
#line 2423 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1035:
#line 2424 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1036:
#line 2425 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1037:
#line 2426 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1038:
#line 2429 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1039:
#line 2430 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1040:
#line 2433 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1041:
#line 2434 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1042:
#line 2437 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1043:
#line 2438 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1044:
#line 2441 "frame/parser.Y"
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

  case 1045:
#line 2454 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1046:
#line 2455 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1047:
#line 2459 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1048:
#line 2460 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1049:
#line 2464 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1050:
#line 2465 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1051:
#line 2470 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1052:
#line 2475 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1053:
#line 2481 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1054:
#line 2483 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1055:
#line 2486 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1056:
#line 2488 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1057:
#line 2491 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1058:
#line 2494 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1059:
#line 2495 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1060:
#line 2496 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1061:
#line 2497 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1062:
#line 2498 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2499 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1064:
#line 2501 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1065:
#line 2503 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1068:
#line 2510 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1069:
#line 2511 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1070:
#line 2512 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1071:
#line 2513 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1072:
#line 2514 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1073:
#line 2515 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1076:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1077:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1078:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1079:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1080:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1081:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1082:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1083:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1084:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1085:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1086:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1089:
#line 2537 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1090:
#line 2538 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1092:
#line 2541 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1093:
#line 2542 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1094:
#line 2543 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1095:
#line 2544 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1096:
#line 2547 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1097:
#line 2548 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1100:
#line 2556 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1101:
#line 2559 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1102:
#line 2560 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1106:
#line 2567 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1107:
#line 2570 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1108:
#line 2574 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1109:
#line 2575 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1110:
#line 2576 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2577 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1112:
#line 2580 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1113:
#line 2581 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1114:
#line 2582 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1115:
#line 2583 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1116:
#line 2587 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1117:
#line 2588 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1118:
#line 2590 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1119:
#line 2595 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1121:
#line 2597 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1123:
#line 2599 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2602 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1125:
#line 2604 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1126:
#line 2609 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1127:
#line 2612 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2613 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2614 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1130:
#line 2617 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1131:
#line 2619 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1132:
#line 2623 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1133:
#line 2624 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1134:
#line 2628 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1135:
#line 2629 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2630 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2631 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1138:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1139:
#line 2637 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1140:
#line 2638 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1141:
#line 2639 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1144:
#line 2647 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1145:
#line 2649 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2650 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1147:
#line 2651 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1148:
#line 2655 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1149:
#line 2656 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2657 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1151:
#line 2658 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1152:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1153:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1154:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1155:
#line 2666 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1156:
#line 2667 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1157:
#line 2670 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1158:
#line 2671 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1159:
#line 2672 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1160:
#line 2675 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1161:
#line 2676 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1163:
#line 2678 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1164:
#line 2679 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1165:
#line 2682 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1166:
#line 2683 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1167:
#line 2684 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1172:
#line 2691 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1173:
#line 2695 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1174:
#line 2697 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2699 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1177:
#line 2704 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2706 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2708 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2721 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1190:
#line 2722 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2723 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1192:
#line 2726 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1193:
#line 2727 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2728 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2731 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1196:
#line 2732 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2733 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1198:
#line 2736 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2737 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2738 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1202:
#line 2742 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2743 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1204:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2747 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2748 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2749 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2752 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2753 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2757 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2758 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2759 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2762 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2763 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2764 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1217:
#line 2768 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1218:
#line 2770 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2772 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2776 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1221:
#line 2779 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2780 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1223:
#line 2783 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1224:
#line 2784 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1225:
#line 2785 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1226:
#line 2788 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1227:
#line 2790 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1228:
#line 2791 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1229:
#line 2793 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1231:
#line 2797 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1232:
#line 2798 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1233:
#line 2799 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2800 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1235:
#line 2803 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1236:
#line 2804 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1237:
#line 2808 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1239:
#line 2810 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2815 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2816 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1244:
#line 2817 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1245:
#line 2820 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2821 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1247:
#line 2822 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1248:
#line 2825 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1249:
#line 2827 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1250:
#line 2832 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1251:
#line 2835 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1252:
#line 2842 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1253:
#line 2844 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1254:
#line 2846 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1255:
#line 2851 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1257:
#line 2855 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1258:
#line 2856 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1259:
#line 2857 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1260:
#line 2859 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1261:
#line 2861 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1262:
#line 2866 "frame/parser.Y"
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


#line 2870 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

