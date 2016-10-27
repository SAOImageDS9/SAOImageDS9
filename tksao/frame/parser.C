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
#define YYLAST   5976

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  345
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1263
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2793

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
     382,   384,   386,   388,   390,   392,   394,   395,   397,   399,
     400,   402,   404,   405,   407,   409,   410,   412,   414,   416,
     418,   420,   422,   424,   425,   427,   429,   431,   433,   435,
     437,   439,   440,   442,   444,   445,   447,   449,   451,   453,
     455,   458,   461,   464,   467,   470,   473,   476,   478,   481,
     483,   486,   488,   491,   493,   496,   499,   506,   510,   514,
     518,   520,   523,   527,   531,   535,   539,   543,   547,   551,
     555,   559,   562,   567,   570,   573,   576,   580,   583,   586,
     588,   591,   593,   596,   601,   607,   610,   614,   620,   627,
     629,   631,   633,   641,   653,   662,   675,   677,   680,   683,
     685,   687,   690,   693,   696,   699,   703,   706,   709,   711,
     713,   715,   717,   719,   721,   723,   726,   729,   732,   736,
     739,   742,   745,   752,   763,   765,   768,   770,   777,   788,
     790,   793,   796,   799,   802,   805,   808,   821,   823,   824,
     826,   828,   833,   840,   842,   844,   846,   851,   855,   860,
     861,   868,   877,   880,   884,   888,   892,   893,   897,   902,
     907,   912,   916,   920,   922,   926,   932,   937,   942,   946,
     949,   953,   956,   959,   962,   965,   968,   971,   974,   977,
     980,   983,   986,   989,   992,   995,   997,  1000,  1003,  1008,
    1016,  1019,  1022,  1025,  1027,  1031,  1034,  1037,  1039,  1042,
    1051,  1054,  1056,  1059,  1061,  1064,  1066,  1071,  1079,  1082,
    1084,  1086,  1088,  1090,  1093,  1095,  1097,  1100,  1102,  1103,
    1106,  1109,  1111,  1113,  1115,  1117,  1120,  1123,  1126,  1128,
    1129,  1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,
    1149,  1150,  1152,  1155,  1157,  1162,  1168,  1169,  1172,  1174,
    1180,  1183,  1186,  1188,  1190,  1192,  1195,  1197,  1200,  1202,
    1204,  1205,  1207,  1208,  1210,  1216,  1223,  1228,  1232,  1239,
    1242,  1244,  1248,  1250,  1252,  1254,  1258,  1265,  1273,  1279,
    1281,  1283,  1288,  1294,  1296,  1300,  1301,  1303,  1306,  1308,
    1313,  1315,  1318,  1320,  1323,  1327,  1330,  1332,  1335,  1337,
    1342,  1345,  1347,  1349,  1353,  1355,  1358,  1362,  1365,  1366,
    1368,  1370,  1375,  1378,  1379,  1381,  1383,  1386,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1412,  1415,  1418,  1421,  1423,  1425,  1427,  1428,  1430,  1431,
    1433,  1434,  1436,  1437,  1439,  1440,  1443,  1446,  1447,  1449,
    1452,  1454,  1461,  1467,  1469,  1471,  1473,  1476,  1479,  1481,
    1483,  1485,  1487,  1490,  1492,  1494,  1496,  1499,  1501,  1503,
    1506,  1509,  1512,  1513,  1515,  1516,  1518,  1520,  1522,  1524,
    1526,  1528,  1530,  1532,  1535,  1538,  1540,  1543,  1547,  1549,
    1552,  1555,  1560,  1567,  1569,  1580,  1582,  1585,  1589,  1593,
    1596,  1599,  1602,  1605,  1608,  1611,  1614,  1619,  1624,  1629,
    1633,  1637,  1643,  1648,  1653,  1658,  1662,  1666,  1670,  1674,
    1677,  1680,  1685,  1689,  1693,  1697,  1701,  1706,  1711,  1716,
    1721,  1727,  1732,  1739,  1747,  1752,  1757,  1763,  1766,  1770,
    1774,  1778,  1781,  1785,  1789,  1793,  1797,  1802,  1806,  1812,
    1819,  1823,  1827,  1832,  1836,  1840,  1844,  1848,  1852,  1858,
    1862,  1866,  1871,  1875,  1878,  1881,  1883,  1887,  1892,  1897,
    1902,  1907,  1912,  1919,  1924,  1929,  1935,  1940,  1945,  1950,
    1955,  1961,  1966,  1973,  1981,  1986,  1991,  1997,  2003,  2009,
    2015,  2021,  2027,  2035,  2041,  2047,  2054,  2060,  2066,  2072,
    2078,  2085,  2091,  2099,  2108,  2114,  2120,  2127,  2131,  2135,
    2139,  2143,  2147,  2153,  2157,  2161,  2166,  2170,  2174,  2178,
    2182,  2187,  2191,  2197,  2204,  2208,  2212,  2217,  2221,  2225,
    2229,  2233,  2237,  2243,  2247,  2251,  2256,  2261,  2266,  2270,
    2276,  2281,  2286,  2289,  2293,  2300,  2307,  2309,  2311,  2313,
    2316,  2319,  2322,  2326,  2330,  2333,  2346,  2349,  2352,  2354,
    2358,  2363,  2366,  2367,  2371,  2373,  2375,  2378,  2381,  2384,
    2387,  2390,  2395,  2400,  2405,  2409,  2414,  2420,  2428,  2437,
    2444,  2453,  2463,  2470,  2477,  2485,  2496,  2508,  2521,  2531,
    2537,  2543,  2550,  2554,  2560,  2566,  2572,  2579,  2585,  2590,
    2600,  2611,  2623,  2633,  2640,  2647,  2654,  2661,  2668,  2675,
    2682,  2689,  2696,  2704,  2712,  2715,  2720,  2725,  2730,  2735,
    2741,  2746,  2751,  2757,  2763,  2767,  2772,  2777,  2782,  2789,
    2797,  2806,  2816,  2823,  2834,  2846,  2859,  2869,  2873,  2876,
    2880,  2886,  2893,  2901,  2906,  2910,  2914,  2921,  2928,  2935,
    2943,  2950,  2958,  2963,  2968,  2975,  2985,  2990,  2994,  3001,
    3009,  3017,  3020,  3024,  3028,  3032,  3037,  3040,  3043,  3048,
    3056,  3067,  3071,  3073,  3077,  3080,  3083,  3086,  3089,  3093,
    3099,  3104,  3110,  3113,  3121,  3125,  3128,  3131,  3135,  3138,
    3141,  3144,  3148,  3151,  3155,  3160,  3164,  3168,  3174,  3181,
    3186,  3189,  3193,  3196,  3199,  3204,  3208,  3212,  3215,  3219,
    3221,  3224,  3226,  3229,  3232,  3235,  3237,  3239,  3241,  3243,
    3246,  3248,  3251,  3254,  3256,  3259,  3262,  3264,  3267,  3269,
    3271,  3273,  3275,  3277,  3279,  3281,  3283,  3284,  3286,  3289,
    3292,  3295,  3299,  3305,  3313,  3321,  3328,  3335,  3342,  3349,
    3355,  3362,  3369,  3376,  3383,  3390,  3397,  3404,  3415,  3423,
    3431,  3439,  3449,  3459,  3470,  3483,  3496,  3499,  3502,  3506,
    3511,  3516,  3521,  3524,  3529,  3534,  3536,  3538,  3540,  3542,
    3544,  3546,  3548,  3550,  3553,  3555,  3557,  3559,  3563,  3567,
    3572,  3579,  3590,  3598,  3606,  3612,  3617,  3624,  3635,  3643,
    3651,  3657,  3660,  3663,  3667,  3672,  3678,  3684,  3690,  3694,
    3699,  3705,  3711,  3717,  3723,  3726,  3730,  3734,  3740,  3744,
    3748,  3752,  3757,  3763,  3769,  3775,  3781,  3785,  3790,  3796,
    3802,  3805,  3808,  3812,  3818,  3825,  3832,  3836,  3840,  3847,
    3853,  3859,  3862,  3866,  3872,  3879,  3883,  3886,  3889,  3893,
    3896,  3900,  3903,  3907,  3913,  3920,  3923,  3926,  3929,  3931,
    3936,  3941,  3943,  3946,  3949,  3952,  3955,  3958,  3961,  3964,
    3968,  3971,  3975,  3978,  3982,  3984,  3986,  3988,  3990,  3992,
    3993,  3996,  3997,  4000,  4001,  4003,  4004,  4005,  4007,  4009,
    4011,  4013,  4015,  4023,  4032,  4035,  4040,  4043,  4048,  4055,
    4058,  4060,  4062,  4066,  4070,  4072,  4076,  4081,  4084,  4086,
    4090,  4094,  4099,  4103,  4107,  4111,  4113,  4115,  4117,  4119,
    4121,  4123,  4125,  4127,  4129,  4131,  4133,  4135,  4137,  4139,
    4142,  4143,  4144,  4147,  4149,  4153,  4155,  4159,  4161,  4164,
    4167,  4169,  4173,  4174,  4175,  4178,  4181,  4183,  4187,  4193,
    4195,  4198,  4201,  4204,  4206,  4208,  4210,  4212,  4217,  4220,
    4224,  4228,  4231,  4235,  4238,  4241,  4244,  4248,  4252,  4256,
    4259,  4263,  4265,  4269,  4273,  4275,  4278,  4281,  4284,  4287,
    4289,  4291,  4293,  4295,  4298,  4301,  4305,  4309,  4311,  4314,
    4318,  4322,  4324,  4327,  4329,  4331,  4333,  4335,  4337,  4340,
    4343,  4348,  4350,  4353,  4356,  4359,  4363,  4365,  4367,  4369,
    4372,  4375,  4378,  4381,  4384,  4388,  4392,  4396,  4400,  4404,
    4408,  4412,  4414,  4417,  4420,  4423,  4427,  4430,  4434,  4438,
    4441,  4444,  4447,  4450,  4453,  4456,  4459,  4462,  4465,  4468,
    4471,  4474,  4477,  4480,  4484,  4488,  4492,  4495,  4498,  4501,
    4504,  4507,  4510,  4513,  4516,  4519,  4522,  4525,  4528,  4532,
    4536,  4540,  4545,  4548,  4550,  4552,  4554,  4556,  4557,  4563,
    4565,  4572,  4576,  4578,  4581,  4584,  4588,  4591,  4595,  4599,
    4602,  4605,  4608,  4611,  4614,  4617,  4621,  4624,  4627,  4631,
    4633,  4637,  4642,  4644,  4647,  4653,  4660,  4667,  4670,  4672,
    4675,  4678,  4684,  4691
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     346,     0,    -1,    96,   348,    -1,    20,   379,    -1,    44,
     381,    -1,    41,    66,     5,    -1,    46,   386,    -1,    59,
      -1,    64,    -1,    65,   388,    -1,    67,   277,     5,    -1,
      68,   393,    -1,    69,   395,    -1,    77,   396,    -1,    84,
     403,    -1,    86,   405,    -1,    87,   406,    -1,    95,   349,
      -1,   123,   407,    -1,   134,   408,    -1,   138,   451,    -1,
     141,   454,    -1,   146,    -1,   147,   349,    -1,   153,   460,
      -1,   160,    16,     4,    -1,   173,   463,    -1,   176,   481,
      -1,   177,   482,    -1,   178,   483,    -1,   181,   499,   484,
      -1,   182,   518,    -1,   194,    66,     5,    -1,   209,   519,
      -1,   210,   520,    -1,   211,   523,    -1,   231,    88,    -1,
     223,   524,    -1,   237,    -1,   234,   499,   526,    -1,   239,
     531,    -1,   241,   532,    -1,   246,   534,    -1,   259,    -1,
     264,   549,    -1,   280,     4,    -1,   281,   374,    -1,   292,
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
      24,    -1,    25,    -1,   347,    -1,   185,    -1,   339,    -1,
     338,    -1,   295,    -1,    -1,   258,    -1,   163,    -1,    -1,
      17,    -1,   156,    -1,    -1,   154,    -1,   182,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   343,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   149,
      -1,   218,    -1,   219,    -1,   232,    -1,   271,    -1,    -1,
      32,    -1,   274,    -1,    -1,   195,    -1,    42,    -1,    43,
      -1,   168,    -1,   169,    -1,   298,   378,    -1,    47,   375,
      -1,    74,   376,    -1,   147,   377,    -1,   184,   529,    -1,
      37,   530,    -1,   247,   347,    -1,   226,    -1,   282,   347,
      -1,   349,    -1,    66,     5,    -1,   349,    -1,    66,     5,
      -1,   349,    -1,    66,     5,    -1,   347,   347,    -1,   220,
     347,   347,   347,   347,   347,    -1,    40,   347,   347,    -1,
     191,   347,   347,    -1,   110,   347,   347,    -1,   237,    -1,
     255,   380,    -1,    62,   347,   347,    -1,   108,   347,   347,
      -1,    48,   347,   347,    -1,   222,   347,   347,    -1,   220,
     347,   347,    -1,   299,   347,   347,    -1,    22,   347,   347,
      -1,   109,   347,   347,    -1,    49,   347,   347,    -1,    12,
     382,    -1,    71,     5,     5,     5,    -1,   100,     4,    -1,
     117,   383,    -1,   131,   384,    -1,    53,   261,     4,    -1,
     285,   385,    -1,   120,     5,    -1,    59,    -1,   347,   347,
      -1,   347,    -1,   347,   347,    -1,   347,    12,   347,   347,
      -1,   347,   347,    12,   347,   347,    -1,   285,   347,    -1,
     285,   347,   347,    -1,   285,   347,    12,   347,   347,    -1,
     285,   347,   347,    12,   347,   347,    -1,    32,    -1,   274,
      -1,   121,    -1,   347,   347,    12,    59,     5,     5,     5,
      -1,   347,   347,     4,   347,   347,    12,    59,     5,     5,
       5,     5,    -1,   347,   347,    12,   347,   347,     5,     5,
       5,    -1,   347,   347,     4,   347,   347,    12,   347,   347,
       5,     5,     5,     5,    -1,   347,    -1,   347,   347,    -1,
     285,   387,    -1,   121,    -1,   347,    -1,   347,   347,    -1,
     250,   389,    -1,   190,   390,    -1,   185,   391,    -1,   295,
     347,   347,    -1,   339,   392,    -1,   226,   349,    -1,   135,
      -1,   174,    -1,   347,    -1,   185,    -1,   339,    -1,   338,
      -1,   295,    -1,     4,   361,    -1,   190,   361,    -1,   243,
       4,    -1,   347,     4,     4,    -1,    78,   347,    -1,   243,
       4,    -1,   170,     4,    -1,     4,   347,   347,     4,     6,
       4,    -1,   239,   347,   347,   347,   347,   347,   347,     4,
       6,     4,    -1,    40,    -1,   191,   394,    -1,   110,    -1,
       4,   347,   347,     4,     6,     4,    -1,   239,   347,   347,
     347,   347,   347,   347,     4,     6,     4,    -1,   360,    -1,
     175,   347,    -1,    83,   397,    -1,    99,   398,    -1,   173,
     399,    -1,   213,   401,    -1,   246,   402,    -1,     5,     4,
       4,   400,     4,     4,   360,   347,   365,   347,   347,     5,
      -1,   222,    -1,    -1,    31,    -1,     5,    -1,     5,     5,
       4,   349,    -1,     5,     4,   349,     5,   357,   362,    -1,
     264,    -1,    46,    -1,     5,    -1,     5,     5,     4,   349,
      -1,     5,   357,   362,    -1,    31,     5,   357,   362,    -1,
      -1,   347,   347,   347,   347,   357,   362,    -1,    59,   356,
     357,   362,   347,   347,   357,   364,    -1,   281,   404,    -1,
      40,   347,   347,    -1,   191,   347,   347,    -1,   110,   347,
     347,    -1,    -1,   347,   347,   357,    -1,    40,   347,   347,
       4,    -1,   191,   347,   347,     4,    -1,   110,   347,   347,
       4,    -1,   359,   347,   347,    -1,   357,   362,   356,    -1,
     349,    -1,   303,   347,   347,    -1,    40,   191,   359,   347,
     347,    -1,   191,   359,   347,   347,    -1,    40,   191,   357,
     356,    -1,   191,   357,   356,    -1,    33,     4,    -1,   141,
     116,     5,    -1,    41,    66,    -1,    44,   409,    -1,    46,
     411,    -1,    65,   412,    -1,    68,   417,    -1,    67,   416,
      -1,    69,   419,    -1,    77,   421,    -1,    79,   424,    -1,
      84,   425,    -1,    86,   426,    -1,    88,   428,    -1,    87,
     427,    -1,    93,   429,    -1,    95,    -1,   122,   433,    -1,
     138,   439,    -1,   149,     5,     5,     4,    -1,   150,    89,
       5,     5,   347,   347,   359,    -1,   153,   431,    -1,   157,
     430,    -1,   160,    16,    -1,   185,    -1,   181,   499,   493,
      -1,   182,   440,    -1,   194,    66,    -1,   209,    -1,   210,
     441,    -1,   217,   276,   359,   347,   347,     4,     4,     5,
      -1,   239,   442,    -1,   241,    -1,   264,   443,    -1,   280,
      -1,   281,   444,    -1,   289,    -1,   296,   359,   347,   347,
      -1,   302,    89,     5,     5,   347,   347,   359,    -1,   304,
     449,    -1,   340,    -1,   100,    -1,   117,    -1,   131,    -1,
      53,   261,    -1,    88,    -1,   120,    -1,    71,   410,    -1,
     172,    -1,    -1,   185,     5,    -1,   103,     5,    -1,   117,
      -1,   413,    -1,   250,    -1,   190,    -1,   185,   414,    -1,
     295,   167,    -1,   339,   415,    -1,   226,    -1,    -1,   347,
      -1,   185,    -1,   339,    -1,   338,    -1,   295,    -1,   190,
      -1,   243,    -1,    78,    -1,   243,    -1,   170,    -1,    -1,
     277,    -1,   167,   418,    -1,     4,    -1,     4,   359,   347,
     347,    -1,     4,   347,   347,   360,   347,    -1,    -1,   167,
     420,    -1,   175,    -1,     4,   347,   347,   360,   347,    -1,
     357,   362,    -1,    65,   422,    -1,    66,    -1,    91,    -1,
     167,    -1,   203,   167,    -1,   184,    -1,    69,   423,    -1,
     264,    -1,   333,    -1,    -1,   190,    -1,    -1,   175,    -1,
     347,   347,   357,   362,   363,    -1,   359,   347,   347,   357,
     362,   363,    -1,   347,   357,   357,     4,    -1,   357,   362,
     363,    -1,    59,   357,   362,   363,   357,   364,    -1,   281,
     357,    -1,   359,    -1,   357,   362,   363,    -1,   272,    -1,
      33,    -1,   359,    -1,   357,   362,   363,    -1,   357,   362,
     356,   347,   347,     5,    -1,     4,   357,   362,   356,   347,
     347,     5,    -1,   359,   347,   347,     4,     4,    -1,     5,
      -1,    65,    -1,   359,   347,   347,     5,    -1,     6,     4,
       4,     4,     4,    -1,    88,    -1,   119,   193,   432,    -1,
      -1,     4,    -1,   347,   347,    -1,   196,    -1,    59,   357,
     362,   363,    -1,    81,    -1,   100,   436,    -1,    45,    -1,
     116,   434,    -1,   119,   193,   437,    -1,   143,   435,    -1,
     144,    -1,   204,   193,    -1,   261,    -1,   261,   357,   362,
     364,    -1,   262,   438,    -1,   333,    -1,     4,    -1,   359,
     347,   347,    -1,     4,    -1,   164,     5,    -1,     4,   164,
       5,    -1,   304,     4,    -1,    -1,     4,    -1,   350,    -1,
     350,   359,   347,   347,    -1,   350,     4,    -1,    -1,     4,
      -1,   357,    -1,     4,   357,    -1,    -1,   208,    -1,   297,
      -1,    66,    -1,   180,    -1,   284,    -1,   226,    -1,    61,
      -1,   275,    -1,   298,    -1,   131,    -1,   233,    -1,   298,
     448,    -1,    47,   445,    -1,    74,   446,    -1,   147,   447,
      -1,   184,    -1,    37,    -1,   247,    -1,    -1,    66,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,   220,    -1,    -1,
      16,   450,    -1,   193,   358,    -1,    -1,   221,    -1,    83,
     452,    -1,    99,    -1,   357,   362,   363,   453,     5,     5,
      -1,   357,   362,   363,   453,     5,    -1,    20,    -1,   229,
      -1,    19,    -1,    44,   455,    -1,    77,   456,    -1,    84,
      -1,    94,    -1,    95,    -1,   101,    -1,   122,   457,    -1,
     138,    -1,   153,    -1,   161,    -1,   181,   458,    -1,   216,
      -1,   264,    -1,   275,   357,    -1,   304,   459,    -1,    72,
       5,    -1,    -1,    31,    -1,    -1,    44,    -1,    87,    -1,
     189,    -1,   147,    -1,   252,    -1,   213,    -1,   290,    -1,
     357,    -1,   114,   357,    -1,    58,   357,    -1,    18,    -1,
     281,   357,    -1,   197,     4,     4,    -1,   115,    -1,   183,
       5,    -1,    88,   462,    -1,   253,   119,   193,   461,    -1,
     253,     6,     4,     4,     4,     4,    -1,   294,    -1,   304,
     347,   347,   347,   347,   347,   347,   347,   347,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    56,    -1,     4,
       4,   357,    -1,   190,   349,    -1,    26,   464,    -1,   111,
     466,    -1,   122,   467,    -1,   156,   480,    -1,   202,   478,
      -1,   215,   479,    -1,     5,    14,     5,   368,    -1,     5,
      15,     5,   368,    -1,     5,    61,     5,   368,    -1,     5,
     187,   368,    -1,     5,   188,   368,    -1,     5,   256,   366,
       4,   368,    -1,     5,   265,     4,   368,    -1,     5,   266,
       4,   368,    -1,     5,   297,     5,   368,    -1,   239,    87,
     465,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   187,    -1,     5,   188,    -1,
       5,   256,   366,     4,    -1,     5,   265,     4,    -1,     5,
     266,     4,    -1,     5,   297,     5,    -1,     5,     5,   263,
      -1,     5,    14,     5,   368,    -1,     5,    15,     5,   368,
      -1,     5,    61,     5,   368,    -1,     5,   187,   367,   368,
      -1,     5,     5,   263,   367,   368,    -1,     5,   188,   367,
     368,    -1,     5,   256,   366,     4,   367,   368,    -1,     5,
     270,   366,     4,     4,   367,   368,    -1,     5,   265,     4,
     368,    -1,     5,   266,     4,   368,    -1,     5,   297,     5,
     367,   368,    -1,   262,   468,    -1,   116,    87,   469,    -1,
     239,   154,   477,    -1,   239,    87,   476,    -1,   189,   470,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   187,   367,    -1,     5,     5,   263,
     367,    -1,     5,   188,   367,    -1,     5,   256,   366,     4,
     367,    -1,     5,   270,   366,     4,     4,   367,    -1,     5,
     265,     4,    -1,     5,   266,     4,    -1,     5,   297,     5,
     367,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   187,   367,    -1,     5,   188,
     367,    -1,     5,   256,   366,     4,   367,    -1,     5,   265,
       4,    -1,     5,   266,     4,    -1,     5,   297,     5,   367,
      -1,   154,   160,   471,    -1,   160,   472,    -1,   154,   473,
      -1,   474,    -1,   154,   332,   475,    -1,     5,    14,     5,
     368,    -1,     5,    15,     5,   368,    -1,     5,    61,     5,
     368,    -1,     5,   187,   367,   368,    -1,     5,   188,   367,
     368,    -1,     5,   256,   366,     4,   367,   368,    -1,     5,
     265,     4,   368,    -1,     5,   266,     4,   368,    -1,     5,
     297,     5,   367,   368,    -1,     5,    14,     5,   368,    -1,
       5,    15,     5,   368,    -1,     5,    61,     5,   368,    -1,
       5,   187,   367,   368,    -1,     5,     5,   263,   367,   368,
      -1,     5,   188,   367,   368,    -1,     5,   256,   366,     4,
     367,   368,    -1,     5,   270,   366,     4,     4,   367,   368,
      -1,     5,   265,     4,   368,    -1,     5,   266,     4,   368,
      -1,     5,   297,     5,   367,   368,    -1,   358,     5,    14,
       5,   368,    -1,   358,     5,    15,     5,   368,    -1,   358,
       5,    61,     5,   368,    -1,   358,     5,   187,   367,   368,
      -1,   358,     5,   188,   367,   368,    -1,   358,     5,   256,
     366,     4,   367,   368,    -1,   358,     5,   265,     4,   368,
      -1,   358,     5,   266,     4,   368,    -1,   358,     5,   297,
       5,   367,   368,    -1,   358,     5,    14,     5,   368,    -1,
     358,     5,    15,     5,   368,    -1,   358,     5,    61,     5,
     368,    -1,   358,     5,   187,   367,   368,    -1,   358,     5,
       5,   263,   367,   368,    -1,   358,     5,   188,   367,   368,
      -1,   358,     5,   256,   366,     4,   367,   368,    -1,   358,
       5,   270,   366,     4,     4,   367,   368,    -1,   358,     5,
     265,     4,   368,    -1,   358,     5,   266,     4,   368,    -1,
     358,     5,   297,     5,   367,   368,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     187,   367,    -1,     5,   188,   367,    -1,     5,   256,   366,
       4,   367,    -1,     5,   265,     4,    -1,     5,   266,     4,
      -1,     5,   297,     5,   367,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   187,
     367,    -1,     5,     5,   263,   367,    -1,     5,   188,   367,
      -1,     5,   256,   366,     4,   367,    -1,     5,   270,   366,
       4,     4,   367,    -1,     5,   265,     4,    -1,     5,   266,
       4,    -1,     5,   297,     5,   367,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     187,   367,    -1,     5,   188,   367,    -1,     5,   256,   366,
       4,   367,    -1,     5,   265,     4,    -1,     5,   266,     4,
      -1,     5,   297,     5,   367,    -1,     5,    14,     5,   368,
      -1,     5,    61,     5,   368,    -1,     5,   187,   368,    -1,
       5,   256,   366,     4,   368,    -1,     5,   265,     4,   368,
      -1,     5,   297,     5,   368,    -1,     5,     5,    -1,   262,
       5,     5,    -1,    93,     4,     4,     4,     4,     4,    -1,
     185,     4,     4,     4,     4,     4,    -1,   110,    -1,   225,
      -1,   349,    -1,   136,   349,    -1,    88,   349,    -1,    66,
       5,    -1,     5,     4,     4,    -1,   294,   347,   347,    -1,
     340,   347,    -1,     5,     5,   358,   362,     5,     5,   358,
     362,   347,   358,   364,     5,    -1,    60,   487,    -1,    66,
       5,    -1,    80,    -1,    73,   492,     5,    -1,    73,   492,
     297,     5,    -1,    75,    99,    -1,    -1,    83,   485,   488,
      -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,   491,
      -1,   113,     4,    -1,   128,     5,    -1,   147,    17,    -1,
     147,   207,   347,   347,    -1,   147,   286,   347,   347,    -1,
       4,    20,   371,   349,    -1,     4,    21,   352,    -1,     4,
      21,   352,   359,    -1,     4,    21,   352,   357,   362,    -1,
       4,    22,   233,   347,   347,     4,   359,    -1,     4,    22,
     233,   347,   347,     4,   357,   364,    -1,     4,    22,   233,
       5,   357,   364,    -1,     4,    49,   233,   347,   347,   347,
       4,   359,    -1,     4,    49,   233,   347,   347,   347,     4,
     357,   364,    -1,     4,    49,   233,     5,   357,   364,    -1,
       4,    48,   233,   347,   347,   359,    -1,     4,    48,   233,
     347,   347,   357,   364,    -1,     4,    52,   105,   352,   352,
       4,   347,   347,   347,     4,    -1,     4,    52,   105,   352,
     352,     4,   347,   347,   347,     4,   359,    -1,     4,    52,
     105,   352,   352,     4,   347,   347,   347,     4,   357,   362,
      -1,     4,    52,   105,     5,     5,   357,   362,   357,   364,
      -1,     4,    55,   486,     5,     5,    -1,     4,    62,   233,
     347,   359,    -1,     4,    62,   233,   347,   357,   364,    -1,
       4,    66,     5,    -1,     4,    74,    27,   349,   349,    -1,
       4,    74,   165,     5,     5,    -1,     4,    74,   233,   347,
     359,    -1,     4,    74,   233,   347,   357,   364,    -1,     4,
      74,   275,   357,   362,    -1,     4,    75,   135,   349,    -1,
       4,    82,   105,   352,   352,     4,   347,   347,     4,    -1,
       4,    82,   105,   352,   352,     4,   347,   347,     4,   359,
      -1,     4,    82,   105,   352,   352,     4,   347,   347,     4,
     357,   362,    -1,     4,    82,   105,     5,     5,   357,   362,
     357,   364,    -1,     4,    83,    22,   233,   347,   347,    -1,
       4,    83,    49,   233,   347,   347,    -1,     4,    83,    52,
      21,   347,   347,    -1,     4,    83,    52,   233,   347,   347,
      -1,     4,    83,   109,   233,   347,   347,    -1,     4,    83,
     112,    21,   347,   347,    -1,     4,    83,   112,   233,   347,
     347,    -1,     4,    83,    82,    21,   347,   347,    -1,     4,
      83,    82,   233,   347,   347,    -1,     4,    83,   222,   301,
       4,   347,   347,    -1,     4,    83,   251,   301,     4,   347,
     347,    -1,     4,    99,    -1,     4,    99,    22,     4,    -1,
       4,    99,    49,     4,    -1,     4,    99,    52,     4,    -1,
       4,    99,   109,     4,    -1,     4,    99,    55,   486,     5,
      -1,     4,    99,   112,     4,    -1,     4,    99,    82,     4,
      -1,     4,    99,   222,   301,     4,    -1,     4,    99,   251,
     301,     4,    -1,     4,    99,   277,    -1,     4,    99,   277,
       5,    -1,     4,    99,   277,     4,    -1,     4,   105,    40,
       4,    -1,     4,   108,   233,   347,   347,   359,    -1,     4,
     108,   233,   347,   347,   357,   364,    -1,     4,   109,   233,
     347,   347,   347,     4,   359,    -1,     4,   109,   233,   347,
     347,   347,     4,   357,   364,    -1,     4,   109,   233,     5,
     357,   364,    -1,     4,   112,   105,   352,   352,     4,   347,
     347,   347,     4,    -1,     4,   112,   105,   352,   352,     4,
     347,   347,   347,     4,   359,    -1,     4,   112,   105,   352,
     352,     4,   347,   347,   347,     4,   357,   362,    -1,     4,
     112,   105,     5,     5,   357,   362,   357,   364,    -1,     4,
     128,     5,    -1,     4,   147,    -1,     4,   147,   207,    -1,
       4,   170,    27,   349,   349,    -1,     4,   170,   220,   359,
     356,   356,    -1,     4,   170,   220,   357,   362,   356,   356,
      -1,     4,   192,   347,   347,    -1,     4,   192,   129,    -1,
       4,   192,    36,    -1,     4,   192,   285,   359,   347,   347,
      -1,     4,   192,   285,   357,   362,   356,    -1,     4,   222,
     237,   347,   347,   359,    -1,     4,   222,   237,   347,   347,
     357,   364,    -1,     4,   251,   237,   347,   347,   359,    -1,
       4,   251,   237,   347,   347,   357,   364,    -1,     4,   220,
     255,   369,    -1,     4,   220,   261,     4,    -1,     4,   227,
     359,   356,   356,   347,    -1,     4,   227,   357,   362,   356,
     356,   347,   357,   364,    -1,     4,   228,   505,   349,    -1,
       4,   241,    40,    -1,     4,   242,   220,   359,   356,   356,
      -1,     4,   242,   220,   357,   362,   356,   356,    -1,     4,
     242,   275,   357,   362,   357,   364,    -1,     4,   252,    -1,
       4,   252,   207,    -1,     4,   277,     5,    -1,     4,   279,
       5,    -1,     4,   279,   241,   349,    -1,     4,   291,    -1,
       4,   293,    -1,     4,   299,    27,   349,    -1,     4,   299,
     220,   359,   356,   347,   352,    -1,     4,   299,   220,   357,
     362,   356,   357,   364,   347,   352,    -1,     4,   333,     4,
      -1,   163,    -1,   163,   347,   347,    -1,   172,   500,    -1,
     173,   501,    -1,   192,   502,    -1,   226,   349,    -1,   228,
     505,   349,    -1,   228,   505,   349,   347,   347,    -1,   241,
      40,   347,   347,    -1,   241,   191,   347,   347,     4,    -1,
     241,   110,    -1,   246,     5,   492,   357,   362,   363,   349,
      -1,   246,   278,     5,    -1,   252,   509,    -1,   259,   510,
      -1,     5,    66,     5,    -1,     5,    80,    -1,     5,    99,
      -1,     5,    89,    -1,     5,   128,     5,    -1,     5,   147,
      -1,     5,   147,   207,    -1,     5,   192,   347,   347,    -1,
       5,   192,   129,    -1,     5,   192,    36,    -1,     5,   192,
     285,   359,   356,    -1,     5,   192,   285,   357,   362,   356,
      -1,     5,   228,   505,   349,    -1,     5,   252,    -1,     5,
     252,   207,    -1,     5,   291,    -1,     5,   293,    -1,   277,
     105,     5,     5,    -1,   277,    99,     5,    -1,   277,    99,
      17,    -1,   277,     5,    -1,   277,   294,     5,    -1,   213,
      -1,   213,   357,    -1,   290,    -1,   291,    17,    -1,   293,
      17,    -1,   333,     4,    -1,   252,    -1,   293,    -1,   147,
      -1,   291,    -1,    40,   192,    -1,   192,    -1,   110,   192,
      -1,    40,   105,    -1,   105,    -1,   110,   105,    -1,    40,
     241,    -1,   241,    -1,   110,   241,    -1,    99,    -1,   279,
      -1,    66,    -1,   333,    -1,   228,    -1,   128,    -1,   163,
      -1,   294,    -1,    -1,     4,    -1,    30,   349,    -1,   233,
     347,    -1,   159,     4,    -1,   208,     4,   347,    -1,    62,
     347,   347,   347,   506,    -1,   108,   347,   347,   347,   347,
     351,   506,    -1,    48,   347,   347,   347,   347,   351,   506,
      -1,   222,   347,   347,   347,   347,   506,    -1,   251,   347,
     347,   347,   347,   506,    -1,   170,   347,   347,   347,   347,
     506,    -1,   299,   347,   347,   347,   347,   506,    -1,   279,
     347,   347,   351,   506,    -1,    62,   220,   347,   347,   370,
     506,    -1,    48,   220,   347,   347,   370,   506,    -1,   102,
     220,   347,   347,   370,   506,    -1,    85,   220,   347,   347,
     370,   506,    -1,   343,   220,   347,   347,   370,   506,    -1,
      27,   220,   347,   347,   370,   506,    -1,    51,   220,   347,
     347,   370,   506,    -1,   242,   347,   347,   347,   347,   357,
     362,   357,   364,   506,    -1,    74,   347,   347,   347,   357,
     362,   506,    -1,   227,   347,   347,   347,   347,   347,   506,
      -1,    22,   347,   347,   347,   347,     4,   506,    -1,   109,
     347,   347,   347,   347,   347,     4,   351,   506,    -1,    49,
     347,   347,   347,   347,   347,     4,   351,   506,    -1,    82,
     347,   347,   352,   352,     4,   347,   347,     4,   506,    -1,
     112,   347,   347,   352,   352,     4,   347,   347,   347,     4,
     351,   506,    -1,    52,   347,   347,   352,   352,     4,   347,
     347,   347,     4,   351,   506,    -1,    75,   506,    -1,   278,
     489,    -1,     5,   347,   347,    -1,   297,     5,   347,   347,
      -1,   347,   347,   297,     5,    -1,     5,   357,   362,   356,
      -1,     4,     4,    -1,    40,   347,   347,     4,    -1,   191,
     347,   347,     4,    -1,   110,    -1,   104,    -1,   335,    -1,
      63,    -1,   245,    -1,   244,    -1,   230,    -1,   336,    -1,
      60,   494,    -1,    66,    -1,   128,    -1,   113,    -1,   140,
     347,   347,    -1,   152,   347,   347,    -1,   146,    20,    82,
     357,    -1,   146,    20,   149,     5,     5,     4,    -1,   146,
      20,   218,     5,     5,     5,     5,   357,   362,   372,    -1,
     146,    20,   219,     5,     5,   357,   372,    -1,   146,    20,
     232,     5,     5,     5,   357,    -1,   146,    20,   271,   357,
     362,    -1,     4,    20,    82,   357,    -1,     4,    20,   149,
       5,     5,     4,    -1,     4,    20,   218,     5,     5,     5,
       5,   357,   362,   372,    -1,     4,    20,   219,     5,     5,
     357,   372,    -1,     4,    20,   232,     5,     5,     5,   357,
      -1,     4,    20,   271,   357,   362,    -1,   152,    17,    -1,
       4,    21,    -1,     4,    21,   359,    -1,     4,    21,   357,
     362,    -1,     4,    22,   233,   357,   364,    -1,     4,    49,
     233,   357,   364,    -1,     4,    48,   233,   357,   364,    -1,
       4,    52,    21,    -1,     4,    52,    21,   359,    -1,     4,
      52,    21,   357,   362,    -1,     4,    52,   233,   357,   364,
      -1,     4,    59,   357,   362,   363,    -1,     4,    62,   233,
     357,   364,    -1,     4,    66,    -1,     4,    74,    27,    -1,
       4,    74,   165,    -1,     4,    74,   233,   357,   364,    -1,
       4,    74,   275,    -1,     4,    75,   135,    -1,     4,    82,
      21,    -1,     4,    82,    21,   359,    -1,     4,    82,    21,
     357,   362,    -1,     4,    82,   233,   357,   364,    -1,     4,
     108,   233,   357,   364,    -1,     4,   109,   233,   357,   364,
      -1,     4,   112,    21,    -1,     4,   112,    21,   359,    -1,
       4,   112,    21,   357,   362,    -1,     4,   112,   233,   357,
     364,    -1,     4,   128,    -1,     4,   147,    -1,     4,   170,
      27,    -1,     4,   170,   166,   357,   364,    -1,     4,   170,
     220,   357,   362,   363,    -1,     4,   179,   166,   347,   357,
     364,    -1,     4,   220,   255,    -1,     4,   220,   261,    -1,
       4,   227,   220,   357,   362,   363,    -1,     4,   227,   166,
     357,   364,    -1,     4,   227,   283,   357,   364,    -1,     4,
     228,    -1,     4,   228,   505,    -1,     4,   242,   166,   357,
     364,    -1,     4,   242,   220,   357,   362,   363,    -1,     4,
     242,   275,    -1,     4,   252,    -1,     4,   277,    -1,     4,
     277,     4,    -1,     4,   279,    -1,     4,   279,   241,    -1,
       4,   289,    -1,     4,   299,    27,    -1,     4,   299,   166,
     357,   364,    -1,     4,   299,   220,   357,   362,   363,    -1,
       4,   333,    -1,   147,   495,    -1,   147,   203,    -1,   203,
      -1,   222,   251,   347,   347,    -1,   251,   251,   347,   347,
      -1,   226,    -1,   228,   505,    -1,   252,   496,    -1,   252,
     203,    -1,   259,   497,    -1,     5,    66,    -1,     5,   128,
      -1,     5,   152,    -1,     5,   228,   505,    -1,     5,   277,
      -1,     5,   277,   203,    -1,   277,    17,    -1,   277,    98,
     193,    -1,   333,    -1,    30,    -1,   233,    -1,   159,    -1,
     208,    -1,    -1,   347,   347,    -1,    -1,   347,   347,    -1,
      -1,   279,    -1,    -1,    -1,   221,    -1,   234,    -1,   295,
      -1,    57,    -1,    20,    -1,   492,   357,   362,   363,   349,
     507,   513,    -1,   252,   492,   357,   362,   363,   349,   507,
     513,    -1,   492,     5,    -1,   492,     5,   357,   362,    -1,
     492,     4,    -1,   492,     4,   357,   362,    -1,   122,     5,
       5,   490,     4,     5,    -1,   347,   347,    -1,   129,    -1,
      36,    -1,    40,   347,   347,    -1,   191,   347,   347,    -1,
     110,    -1,   285,   359,   356,    -1,   285,   357,   362,   356,
      -1,   503,   504,    -1,   504,    -1,   505,   344,   349,    -1,
      66,   344,     5,    -1,    92,   344,     4,     4,    -1,   333,
     344,     4,    -1,   128,   344,     5,    -1,   279,   344,     5,
      -1,   516,    -1,   517,    -1,   200,    -1,   252,    -1,   147,
      -1,    91,    -1,   124,    -1,   105,    -1,   192,    -1,   241,
      -1,    99,    -1,   155,    -1,   267,    -1,   498,    -1,   498,
     503,    -1,    -1,    -1,   508,   511,    -1,    17,    -1,   207,
     347,   347,    -1,   286,    -1,   286,   347,   347,    -1,   349,
      -1,   279,   349,    -1,   511,   512,    -1,   512,    -1,   505,
     344,   349,    -1,    -1,    -1,   514,   515,    -1,   515,   516,
      -1,   516,    -1,   277,   344,     5,    -1,    55,   344,   486,
       5,     5,    -1,    64,    -1,    66,     5,    -1,   180,     4,
      -1,   284,   347,    -1,   343,    -1,   341,    -1,   336,    -1,
     200,    -1,   347,   347,   347,   347,    -1,   347,   347,    -1,
     359,   347,   347,    -1,   357,   362,   356,    -1,   285,   521,
      -1,    39,   347,   347,    -1,   191,   522,    -1,   226,   349,
      -1,   347,   347,    -1,   359,   347,   347,    -1,   357,   362,
     356,    -1,    40,   347,   347,    -1,   347,   347,    -1,   110,
     347,   347,    -1,   349,    -1,   304,   358,   362,    -1,     5,
       4,     4,    -1,   294,    -1,    70,   525,    -1,   167,     4,
      -1,   238,     4,    -1,   247,   347,    -1,    54,    -1,   137,
      -1,   239,    -1,    90,    -1,   147,   527,    -1,   252,   528,
      -1,    40,   347,   347,    -1,   191,   347,   347,    -1,   110,
      -1,   257,   110,    -1,    40,   347,   347,    -1,   191,   347,
     347,    -1,   110,    -1,   257,   110,    -1,   186,    -1,    13,
      -1,   200,    -1,    34,    -1,   107,    -1,    61,     5,    -1,
     275,   357,    -1,   298,     4,     4,     4,    -1,   347,    -1,
     347,    97,    -1,   191,   533,    -1,   285,   347,    -1,   285,
     347,    97,    -1,    40,    -1,   347,    -1,   110,    -1,    26,
     535,    -1,   122,   537,    -1,   202,   547,    -1,   111,   548,
      -1,   215,     5,    -1,   119,     5,   373,    -1,    61,     5,
     373,    -1,   265,     4,   373,    -1,   239,    87,   536,    -1,
     119,     5,   373,    -1,    61,     5,   373,    -1,   265,     4,
     373,    -1,   538,    -1,   154,   538,    -1,   276,   539,    -1,
     262,   540,    -1,   116,    87,   541,    -1,   189,   542,    -1,
     239,   154,   544,    -1,   239,    87,   545,    -1,   236,   546,
      -1,   119,     5,    -1,    61,     5,    -1,   265,     4,    -1,
     119,     5,    -1,    61,     5,    -1,   265,     4,    -1,   119,
       5,    -1,    61,     5,    -1,   265,     4,    -1,   119,     5,
      -1,    61,     5,    -1,   265,     4,    -1,   154,   543,    -1,
     119,     5,     4,    -1,    61,     5,     4,    -1,   265,     4,
       4,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   119,     5,    -1,    61,     5,    -1,   265,     4,    -1,
     119,     5,    -1,    61,     5,    -1,   265,     4,    -1,   119,
       5,    -1,    61,     5,    -1,   265,     4,    -1,   119,     5,
     373,    -1,    61,     5,   373,    -1,   265,     4,   373,    -1,
     119,     5,     5,   373,    -1,   550,     4,    -1,    99,    -1,
      50,    -1,   133,    -1,   287,    -1,    -1,     4,   347,   347,
     347,   347,    -1,   201,    -1,   201,     4,   347,   347,   347,
     347,    -1,   122,   262,   552,    -1,     4,    -1,   347,   357,
      -1,     4,     4,    -1,     4,   347,   357,    -1,   347,   347,
      -1,   285,   347,   347,    -1,   358,   362,   363,    -1,    16,
     557,    -1,   237,     4,    -1,   235,   556,    -1,    23,   555,
      -1,     4,     4,    -1,     4,     5,    -1,   279,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   279,     4,     5,
      -1,     4,    -1,     4,   358,   362,    -1,     4,     6,   358,
     362,    -1,   225,    -1,   347,   347,    -1,   347,   347,    12,
     347,   347,    -1,   347,   347,    12,   359,   347,   347,    -1,
     347,   347,    12,   357,   362,   356,    -1,   285,   560,    -1,
     121,    -1,   121,   347,    -1,   347,   347,    -1,   347,   347,
      12,   347,   347,    -1,   347,   347,    12,   359,   347,   347,
      -1,   347,   347,    12,   357,   362,   356,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   445,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   499,   500,   503,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   518,
     520,   521,   522,   523,   525,   526,   527,   528,   531,   532,
     533,   534,   535,   538,   539,   542,   543,   544,   547,   550,
     553,   556,   568,   575,   582,   590,   591,   592,   593,   594,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   627,   628,
     631,   632,   633,   634,   635,   636,   637,   638,   641,   642,
     643,   644,   645,   648,   649,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   661,   662,   663,   666,   667,   668,
     669,   672,   673,   674,   675,   676,   679,   680,   681,   684,
     685,   686,   689,   690,   691,   694,   695,   696,   697,   698,
     699,   700,   701,   704,   705,   708,   709,   710,   711,   712,
     713,   716,   717,   718,   721,   722,   723,   724,   725,   726,
     729,   730,   731,   732,   733,   734,   735,   736,   737,   741,
     742,   745,   746,   749,   750,   753,   754,   756,   757,   758,
     761,   762,   765,   767,   769,   771,   773,   775,   777,   779,
     781,   785,   786,   787,   788,   789,   790,   791,   792,   795,
     796,   799,   800,   801,   803,   805,   806,   807,   809,   813,
     814,   817,   818,   820,   823,   825,   831,   832,   833,   836,
     837,   838,   841,   842,   843,   844,   845,   846,   852,   853,
     856,   857,   858,   859,   860,   863,   864,   865,   868,   869,
     874,   879,   886,   888,   890,   891,   892,   895,   897,   900,
     901,   904,   905,   906,   907,   908,   911,   913,   916,   917,
     920,   921,   922,   929,   930,   933,   934,   937,   939,   943,
     944,   947,   949,   950,   951,   952,   955,   956,   957,   958,
     959,   962,   964,   966,   967,   969,   971,   973,   975,   979,
     982,   985,   986,   987,   988,   989,   990,   991,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1005,  1006,  1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,
    1016,  1017,  1018,  1019,  1020,  1021,  1022,  1024,  1026,  1027,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1040,  1041,
    1042,  1045,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1061,
    1062,  1063,  1064,  1065,  1066,  1069,  1070,  1073,  1074,  1075,
    1078,  1079,  1082,  1085,  1086,  1088,  1092,  1093,  1094,  1097,
    1101,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,
    1114,  1115,  1118,  1119,  1122,  1124,  1130,  1134,  1136,  1138,
    1141,  1142,  1144,  1147,  1150,  1151,  1155,  1157,  1160,  1165,
    1166,  1167,  1171,  1172,  1173,  1176,  1177,  1178,  1181,  1182,
    1184,  1185,  1186,  1187,  1188,  1189,  1190,  1191,  1192,  1193,
    1195,  1196,  1199,  1200,  1203,  1204,  1205,  1206,  1209,  1210,
    1213,  1215,  1218,  1222,  1223,  1224,  1225,  1228,  1229,  1230,
    1233,  1234,  1235,  1238,  1241,  1242,  1243,  1246,  1247,  1250,
    1251,  1252,  1253,  1254,  1255,  1256,  1259,  1260,  1263,  1264,
    1267,  1268,  1271,  1272,  1275,  1276,  1277,  1280,  1281,  1284,
    1285,  1288,  1291,  1299,  1300,  1303,  1304,  1305,  1306,  1307,
    1308,  1309,  1310,  1311,  1312,  1313,  1314,  1315,  1316,  1317,
    1318,  1321,  1324,  1325,  1328,  1329,  1330,  1331,  1334,  1335,
    1336,  1337,  1340,  1341,  1342,  1343,  1344,  1347,  1348,  1349,
    1350,  1351,  1352,  1354,  1355,  1360,  1361,  1364,  1366,  1368,
    1371,  1372,  1373,  1374,  1375,  1376,  1379,  1381,  1383,  1385,
    1386,  1388,  1390,  1392,  1394,  1396,  1399,  1400,  1401,  1402,
    1403,  1404,  1406,  1407,  1408,  1411,  1414,  1416,  1418,  1420,
    1422,  1424,  1426,  1428,  1431,  1433,  1435,  1437,  1438,  1439,
    1440,  1441,  1444,  1445,  1446,  1447,  1448,  1449,  1450,  1452,
    1454,  1455,  1456,  1459,  1460,  1461,  1462,  1463,  1464,  1466,
    1467,  1468,  1471,  1472,  1473,  1474,  1475,  1478,  1481,  1484,
    1487,  1490,  1493,  1496,  1499,  1502,  1507,  1510,  1513,  1516,
    1519,  1522,  1525,  1528,  1531,  1534,  1537,  1542,  1545,  1548,
    1551,  1554,  1557,  1560,  1563,  1566,  1571,  1574,  1577,  1580,
    1583,  1586,  1589,  1592,  1595,  1598,  1601,  1606,  1608,  1609,
    1610,  1611,  1612,  1614,  1615,  1616,  1618,  1619,  1620,  1621,
    1622,  1623,  1624,  1626,  1628,  1629,  1630,  1633,  1634,  1635,
    1636,  1637,  1638,  1640,  1641,  1642,  1645,  1647,  1649,  1650,
    1652,  1654,  1658,  1659,  1662,  1663,  1664,  1667,  1674,  1675,
    1676,  1677,  1678,  1679,  1680,  1683,  1691,  1692,  1693,  1694,
    1696,  1698,  1699,  1699,  1700,  1701,  1702,  1703,  1704,  1705,
    1707,  1708,  1710,  1713,  1716,  1717,  1718,  1721,  1723,  1726,
    1729,  1732,  1736,  1739,  1741,  1744,  1747,  1751,  1756,  1761,
    1763,  1765,  1767,  1768,  1770,  1772,  1774,  1776,  1778,  1779,
    1781,  1783,  1787,  1792,  1794,  1796,  1798,  1800,  1802,  1804,
    1806,  1808,  1810,  1812,  1815,  1816,  1818,  1820,  1821,  1823,
    1825,  1826,  1827,  1829,  1831,  1832,  1833,  1835,  1836,  1838,
    1841,  1845,  1849,  1852,  1855,  1859,  1864,  1870,  1871,  1872,
    1874,  1875,  1877,  1881,  1883,  1884,  1885,  1887,  1890,  1892,
    1895,  1897,  1900,  1902,  1904,  1907,  1912,  1915,  1916,  1919,
    1922,  1926,  1927,  1929,  1930,  1931,  1933,  1934,  1936,  1937,
    1939,  1944,  1946,  1947,  1949,  1950,  1951,  1952,  1953,  1954,
    1956,  1958,  1960,  1961,  1963,  1964,  1966,  1968,  1969,  1970,
    1971,  1972,  1973,  1974,  1975,  1976,  1977,  1978,  1980,  1982,
    1984,  1985,  1986,  1987,  1989,  1990,  1991,  1992,  1993,  1995,
    1996,  1997,  1998,  1999,  2000,  2003,  2004,  2005,  2006,  2007,
    2008,  2009,  2010,  2011,  2012,  2013,  2014,  2015,  2016,  2017,
    2018,  2019,  2020,  2021,  2022,  2023,  2026,  2027,  2028,  2029,
    2030,  2031,  2039,  2046,  2055,  2064,  2071,  2078,  2086,  2094,
    2101,  2106,  2111,  2116,  2121,  2126,  2131,  2137,  2146,  2156,
    2166,  2173,  2183,  2193,  2202,  2214,  2227,  2232,  2235,  2237,
    2239,  2244,  2248,  2251,  2253,  2255,  2258,  2259,  2260,  2261,
    2262,  2263,  2264,  2267,  2268,  2269,  2270,  2271,  2272,  2274,
    2276,  2278,  2280,  2282,  2284,  2287,  2289,  2291,  2293,  2295,
    2297,  2300,  2301,  2302,  2303,  2305,  2308,  2310,  2312,  2313,
    2314,  2316,  2319,  2322,  2324,  2325,  2326,  2327,  2329,  2330,
    2331,  2332,  2333,  2335,  2337,  2339,  2342,  2343,  2344,  2346,
    2348,  2349,  2350,  2351,  2353,  2356,  2360,  2361,  2362,  2365,
    2368,  2370,  2371,  2372,  2374,  2377,  2378,  2380,  2381,  2382,
    2383,  2384,  2386,  2387,  2389,  2392,  2393,  2394,  2395,  2396,
    2398,  2400,  2401,  2402,  2403,  2405,  2407,  2408,  2409,  2410,
    2411,  2412,  2414,  2415,  2417,  2420,  2421,  2422,  2423,  2426,
    2427,  2430,  2431,  2434,  2435,  2438,  2451,  2452,  2456,  2457,
    2461,  2462,  2465,  2470,  2477,  2479,  2482,  2484,  2487,  2491,
    2492,  2493,  2494,  2495,  2496,  2497,  2499,  2503,  2504,  2507,
    2508,  2509,  2510,  2511,  2512,  2513,  2514,  2517,  2518,  2519,
    2520,  2521,  2522,  2523,  2524,  2525,  2526,  2527,  2530,  2531,
    2534,  2535,  2535,  2538,  2539,  2540,  2541,  2544,  2545,  2548,
    2549,  2552,  2556,  2557,  2557,  2560,  2561,  2564,  2567,  2571,
    2572,  2573,  2574,  2577,  2578,  2579,  2580,  2583,  2585,  2586,
    2591,  2593,  2594,  2595,  2596,  2599,  2600,  2605,  2609,  2610,
    2611,  2614,  2615,  2620,  2621,  2624,  2626,  2627,  2628,  2633,
    2634,  2635,  2636,  2639,  2640,  2643,  2645,  2647,  2648,  2651,
    2653,  2654,  2655,  2658,  2659,  2662,  2663,  2664,  2667,  2668,
    2669,  2672,  2673,  2674,  2675,  2676,  2679,  2680,  2681,  2684,
    2685,  2686,  2687,  2688,  2691,  2693,  2695,  2697,  2700,  2702,
    2704,  2707,  2708,  2709,  2710,  2711,  2712,  2713,  2714,  2715,
    2718,  2719,  2720,  2723,  2724,  2725,  2728,  2729,  2730,  2733,
    2734,  2735,  2738,  2739,  2740,  2741,  2744,  2745,  2746,  2749,
    2750,  2751,  2754,  2755,  2756,  2759,  2760,  2761,  2764,  2766,
    2768,  2772,  2776,  2777,  2780,  2781,  2782,  2785,  2786,  2788,
    2789,  2791,  2794,  2795,  2796,  2797,  2800,  2801,  2804,  2806,
    2807,  2808,  2809,  2812,  2813,  2814,  2817,  2818,  2819,  2822,
    2823,  2828,  2832,  2839,  2840,  2842,  2847,  2849,  2852,  2853,
    2854,  2855,  2857,  2862
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
  "scaleType", "minmaxMode", "skyFrame", "skyFormat", "skyDist",
  "contourClipMode", "shmType", "incrLoad", "layerType", "pointShape",
  "pointSize", "analysisMethod", "analysisParam", "endian", "threed",
  "threedBorder", "threedCompass", "threedHighlite", "threedView",
  "analysis", "analysisShape", "bin", "binAbout", "binFactor",
  "binFunction", "binTo", "block", "blockTo", "clip", "clipScope",
  "clipMode", "clipMinMax", "clipZScale", "colormap", "colormapMotion",
  "colorscale", "contour", "contourCreate", "contourDelete", "contourLoad",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "fitsy", "get", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipLimits", "getClipMinMax", "getClipZScale",
  "getColorbar", "getColorMap", "getColorMapLevel", "getColorScale",
  "getColorScaleLevel", "getContour", "getContourClip",
  "getContourColorScale", "getCoord", "getCrop", "getCrosshair", "getCube",
  "getCursor", "getData", "getInfo", "getiis", "getIISFileName", "getFits",
  "getFitsExt", "getFitsHeader", "getFitsDepth", "getFitsFileName",
  "getFitsSlice", "getGrid", "getMask", "getPan", "getRGB", "getSmooth",
  "getThreed", "getThreedBorder", "getThreedCompass", "getThreedHighlite",
  "getThreedView", "getWCS", "getWCSAlign", "grid", "gridCreate",
  "gridType", "has", "hasBin", "hasContour", "hasFits", "hasMarker",
  "hasWCS", "iis", "iisSetFileName", "iiscursor", "load", "loadArr",
  "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS", "loadFitsMosaicWCS",
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
     364,   365,   365,   365,   365,   365,   366,   366,   366,   367,
     367,   367,   368,   368,   368,   369,   369,   369,   369,   369,
     369,   369,   369,   370,   370,   371,   371,   371,   371,   371,
     371,   372,   372,   372,   373,   373,   373,   373,   373,   373,
     374,   374,   374,   374,   374,   374,   374,   374,   374,   375,
     375,   376,   376,   377,   377,   378,   378,   378,   378,   378,
     379,   379,   380,   380,   380,   380,   380,   380,   380,   380,
     380,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     382,   383,   383,   383,   383,   383,   383,   383,   383,   384,
     384,   385,   385,   385,   385,   385,   386,   386,   386,   387,
     387,   387,   388,   388,   388,   388,   388,   388,   389,   389,
     390,   390,   390,   390,   390,   391,   391,   391,   392,   392,
     392,   392,   393,   393,   393,   393,   393,   394,   394,   395,
     395,   396,   396,   396,   396,   396,   397,   397,   398,   398,
     399,   399,   399,   400,   400,   401,   401,   402,   402,   403,
     403,   403,   403,   403,   403,   403,   404,   404,   404,   404,
     404,   405,   405,   405,   405,   405,   405,   405,   405,   406,
     407,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     409,   409,   409,   409,   409,   409,   409,   409,   410,   410,
     410,   411,   412,   412,   412,   412,   412,   412,   412,   413,
     413,   413,   413,   413,   413,   414,   414,   415,   415,   415,
     416,   416,   417,   418,   418,   418,   419,   419,   419,   420,
     421,   421,   421,   421,   421,   421,   421,   421,   421,   421,
     422,   422,   423,   423,   424,   424,   424,   425,   425,   425,
     426,   426,   426,   427,   428,   428,   429,   429,   429,   430,
     430,   430,   431,   431,   431,   432,   432,   432,   433,   433,
     433,   433,   433,   433,   433,   433,   433,   433,   433,   433,
     433,   433,   434,   434,   435,   435,   435,   435,   436,   436,
     437,   437,   437,   438,   438,   438,   438,   439,   439,   439,
     440,   440,   440,   441,   442,   442,   442,   443,   443,   444,
     444,   444,   444,   444,   444,   444,   445,   445,   446,   446,
     447,   447,   448,   448,   449,   449,   449,   450,   450,   451,
     451,   452,   452,   453,   453,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   455,   456,   456,   457,   457,   457,   457,   458,   458,
     458,   458,   459,   459,   459,   459,   459,   460,   460,   460,
     460,   460,   460,   460,   460,   461,   461,   462,   462,   462,
     463,   463,   463,   463,   463,   463,   464,   464,   464,   464,
     464,   464,   464,   464,   464,   464,   465,   465,   465,   465,
     465,   465,   465,   465,   465,   466,   467,   467,   467,   467,
     467,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     467,   467,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   470,   470,   470,   470,   470,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   472,   472,   472,   472,
     472,   472,   472,   472,   472,   472,   472,   473,   473,   473,
     473,   473,   473,   473,   473,   473,   474,   474,   474,   474,
     474,   474,   474,   474,   474,   474,   474,   475,   475,   475,
     475,   475,   475,   475,   475,   475,   476,   476,   476,   476,
     476,   476,   476,   476,   476,   476,   476,   477,   477,   477,
     477,   477,   477,   477,   477,   477,   478,   478,   478,   478,
     478,   478,   479,   479,   480,   480,   480,   481,   482,   482,
     482,   482,   482,   482,   482,   483,   484,   484,   484,   484,
     484,   484,   485,   484,   484,   484,   484,   484,   484,   484,
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
     484,   484,   484,   484,   484,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   487,   487,   487,   487,
     487,   487,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   489,   489,
     489,   489,   490,   491,   491,   491,   492,   492,   492,   492,
     492,   492,   492,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   494,   494,   494,   494,   495,
     495,   496,   496,   497,   497,   498,   499,   499,   499,   499,
     499,   499,   500,   500,   501,   501,   501,   501,   501,   502,
     502,   502,   502,   502,   502,   502,   502,   503,   503,   504,
     504,   504,   504,   504,   504,   504,   504,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   506,   506,
     507,   508,   507,   509,   509,   509,   509,   510,   510,   511,
     511,   512,   513,   514,   513,   515,   515,   516,   517,   518,
     518,   518,   518,   519,   519,   519,   519,   520,   520,   520,
     520,   520,   520,   520,   520,   521,   521,   521,   522,   522,
     522,   523,   523,   523,   523,   524,   524,   524,   524,   525,
     525,   525,   525,   526,   526,   527,   527,   527,   527,   528,
     528,   528,   528,   529,   529,   530,   530,   530,   531,   531,
     531,   532,   532,   532,   532,   532,   533,   533,   533,   534,
     534,   534,   534,   534,   535,   535,   535,   535,   536,   536,
     536,   537,   537,   537,   537,   537,   537,   537,   537,   537,
     538,   538,   538,   539,   539,   539,   540,   540,   540,   541,
     541,   541,   542,   542,   542,   542,   543,   543,   543,   544,
     544,   544,   545,   545,   545,   546,   546,   546,   547,   547,
     547,   548,   549,   549,   550,   550,   550,   551,   551,   551,
     551,   551,   552,   552,   552,   552,   553,   553,   554,   554,
     554,   554,   554,   555,   555,   555,   556,   556,   556,   557,
     557,   557,   558,   559,   559,   559,   559,   559,   560,   560,
     560,   560,   560,   560
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
       1,     1,     1,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     0,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     2,     6,     3,     3,     3,
       1,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     4,     2,     2,     2,     3,     2,     2,     1,
       2,     1,     2,     4,     5,     2,     3,     5,     6,     1,
       1,     1,     7,    11,     8,    12,     1,     2,     2,     1,
       1,     2,     2,     2,     2,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     3,     2,
       2,     2,     6,    10,     1,     2,     1,     6,    10,     1,
       2,     2,     2,     2,     2,     2,    12,     1,     0,     1,
       1,     4,     6,     1,     1,     1,     4,     3,     4,     0,
       6,     8,     2,     3,     3,     3,     0,     3,     4,     4,
       4,     3,     3,     1,     3,     5,     4,     4,     3,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     4,     7,
       2,     2,     2,     1,     3,     2,     2,     1,     2,     8,
       2,     1,     2,     1,     2,     1,     4,     7,     2,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     0,     2,
       2,     1,     1,     1,     1,     2,     2,     2,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     4,     5,     0,     2,     1,     5,
       2,     2,     1,     1,     1,     2,     1,     2,     1,     1,
       0,     1,     0,     1,     5,     6,     4,     3,     6,     2,
       1,     3,     1,     1,     1,     3,     6,     7,     5,     1,
       1,     4,     5,     1,     3,     0,     1,     2,     1,     4,
       1,     2,     1,     2,     3,     2,     1,     2,     1,     4,
       2,     1,     1,     3,     1,     2,     3,     2,     0,     1,
       1,     4,     2,     0,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     1,     1,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     2,
       2,     2,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     2,     3,     1,     2,
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
       5,     5,     7,     5,     5,     6,     5,     5,     5,     5,
       6,     5,     7,     8,     5,     5,     6,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     4,     4,     3,     5,
       4,     4,     2,     3,     6,     6,     1,     1,     1,     2,
       2,     2,     3,     3,     2,    12,     2,     2,     1,     3,
       4,     2,     0,     3,     1,     1,     2,     2,     2,     2,
       2,     4,     4,     4,     3,     4,     5,     7,     8,     6,
       8,     9,     6,     6,     7,    10,    11,    12,     9,     5,
       5,     6,     3,     5,     5,     5,     6,     5,     4,     9,
      10,    11,     9,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     7,     7,     2,     4,     4,     4,     4,     5,
       4,     4,     5,     5,     3,     4,     4,     4,     6,     7,
       8,     9,     6,    10,    11,    12,     9,     3,     2,     3,
       5,     6,     7,     4,     3,     3,     6,     6,     6,     7,
       6,     7,     4,     4,     6,     9,     4,     3,     6,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,     7,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     7,     3,     2,     2,     3,     2,     2,
       2,     3,     2,     3,     4,     3,     3,     5,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     2,     2,
       2,     3,     5,     7,     7,     6,     6,     6,     6,     5,
       6,     6,     6,     6,     6,     6,     6,    10,     7,     7,
       7,     9,     9,    10,    12,    12,     2,     2,     3,     4,
       4,     4,     2,     4,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     3,     3,     4,
       6,    10,     7,     7,     5,     4,     6,    10,     7,     7,
       5,     2,     2,     3,     4,     5,     5,     5,     3,     4,
       5,     5,     5,     5,     2,     3,     3,     5,     3,     3,
       3,     4,     5,     5,     5,     5,     3,     4,     5,     5,
       2,     2,     3,     5,     6,     6,     3,     3,     6,     5,
       5,     2,     3,     5,     6,     3,     2,     2,     3,     2,
       3,     2,     3,     5,     6,     2,     2,     2,     1,     4,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     3,
       2,     3,     2,     3,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     0,     1,     0,     0,     1,     1,     1,
       1,     1,     7,     8,     2,     4,     2,     4,     6,     2,
       1,     1,     3,     3,     1,     3,     4,     2,     1,     3,
       3,     4,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     0,     2,     1,     3,     1,     3,     1,     2,     2,
       1,     3,     0,     0,     2,     2,     1,     3,     5,     1,
       2,     2,     2,     1,     1,     1,     1,     4,     2,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     1,
       1,     1,     1,     2,     2,     3,     3,     1,     2,     3,
       3,     1,     2,     1,     1,     1,     1,     1,     2,     2,
       4,     1,     2,     2,     2,     3,     1,     1,     1,     2,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     1,     2,     2,     2,     3,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     4,     2,     1,     1,     1,     1,     0,     5,     1,
       6,     3,     1,     2,     2,     3,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     2,     2,     3,     1,
       3,     4,     1,     2,     5,     6,     6,     2,     1,     2,
       2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   309,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1046,
       0,     0,     0,     0,     0,     0,     0,  1046,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1227,    49,     0,
       0,     0,     0,     0,   220,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,    54,    55,     0,
     256,     6,     0,     0,     0,     0,     0,     0,     9,     0,
       0,   284,   286,     0,     0,    11,   135,   137,   130,   131,
     132,   136,   133,   134,   289,    12,     0,   298,     0,     0,
       0,    13,     0,     0,     0,     0,   316,     0,    14,    69,
      98,     0,   128,    97,    77,    95,     0,    74,    76,    72,
     129,    96,    73,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    70,    71,    75,   323,   143,    99,     0,    15,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      57,    56,     0,     0,     0,     0,     2,     0,    18,     0,
       0,     0,   389,   400,     0,   406,     0,     0,     0,     0,
       0,     0,     0,   345,     0,   477,     0,     0,     0,     0,
       0,  1046,     0,   353,     0,   357,     0,     0,     0,   361,
       0,   363,     0,   365,     0,     0,   504,   369,    19,     0,
     510,    20,   515,     0,   532,   518,   519,   520,   521,   534,
     523,   524,   525,     0,   527,   528,     0,     0,    21,    23,
       0,   548,     0,     0,     0,   553,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   707,    27,     0,     0,
       0,     0,     0,     0,   708,    28,     0,    29,  1051,  1050,
    1047,  1048,  1049,     0,  1109,     0,     0,     0,    31,     0,
    1116,  1115,  1114,  1113,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1134,     0,  1131,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1161,    41,     0,     0,     0,     0,     0,    42,  1224,
    1223,  1225,  1226,    44,     0,    45,     0,     0,     0,     0,
       0,   207,     0,     0,     0,    46,     0,     0,  1229,    48,
       0,     0,    50,     0,     0,     0,     0,   143,    51,  1252,
      52,     0,     0,    53,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   221,     5,   239,     0,   231,     0,
       0,   233,     0,   241,   234,   238,   249,   250,   235,   251,
       0,   237,   259,   260,   258,   257,     0,     0,     0,   264,
     271,   274,   273,   272,   270,   263,   267,   268,   269,   262,
       0,     0,     0,     0,     0,   266,    10,     0,     0,     0,
     285,     0,   290,     0,   297,   291,   299,   292,   300,   293,
     305,   294,     0,     0,   295,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,     0,     0,     0,     0,     0,   146,   152,   144,   145,
     147,   150,   153,   149,   148,   151,     0,     0,   329,    58,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   331,     0,   378,   374,   370,   371,   375,   372,   377,
     332,   381,   333,   391,   384,   388,   383,   394,   393,   392,
     390,   334,   382,   401,   336,     0,   335,     0,   408,   337,
     420,   412,   422,   413,   414,   416,     0,   418,   419,   143,
     338,     0,     0,   339,     0,     0,   143,   340,   432,   143,
     430,   341,   433,   343,   143,   434,   342,     0,   143,     0,
     344,   452,     0,   450,   468,     0,     0,     0,   456,   448,
       0,   458,   473,   461,   346,   478,   479,   347,     0,     0,
       0,   443,     0,   350,   439,   440,     0,   351,   352,     0,
     480,   481,   482,   355,   356,   483,   358,     0,   484,   485,
     486,   360,   487,   488,   362,   494,   496,   498,   500,   493,
     495,   502,   364,     0,     0,   507,     0,   368,   143,   509,
       0,   516,   533,   517,   535,   536,   537,   522,   538,   540,
     539,   541,   526,   529,   545,     0,     0,     0,   542,   530,
       0,     0,   550,   549,     0,     0,     0,     0,    25,     0,
       0,   560,     0,   561,     0,     0,     0,     0,     0,   562,
       0,   706,     0,   563,     0,   564,     0,     0,   565,     0,
     711,   710,   709,     0,   714,     0,     0,     0,   896,     0,
       0,     0,   718,   722,   724,   725,     0,     0,     0,     0,
     832,     0,     0,     0,   869,     0,     0,     0,     0,     0,
       0,     0,   871,     0,     0,     0,    30,  1110,  1111,  1112,
      32,     0,     0,     0,     0,  1123,  1124,     0,   143,     0,
    1121,  1118,     0,     0,     0,   143,  1139,  1142,  1140,  1141,
    1135,  1136,  1137,  1138,     0,     0,    39,  1158,  1159,     0,
    1166,  1168,  1167,  1163,  1164,  1162,     0,     0,     0,     0,
    1169,     0,  1172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1170,  1181,     0,     0,     0,  1171,  1173,
    1222,  1156,  1157,  1155,   205,     0,   209,   201,     0,   211,
     202,     0,   213,   203,  1154,  1153,   204,   206,   208,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,  1236,
    1249,  1239,     0,     0,  1242,     0,     0,  1241,  1240,   154,
    1258,     0,  1257,  1253,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   236,     0,   245,     0,   242,     0,
     261,   138,   141,   142,   140,   139,   275,   276,   277,   265,
     279,   281,   280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,   313,    94,    91,    92,    93,   143,
     315,   314,     0,     0,     0,     0,     0,     0,     0,   328,
       0,   324,   322,   321,   330,   373,     0,     0,   376,   395,
     396,   385,   386,   397,   399,   398,   387,   403,   402,     0,
     407,   421,   411,   423,   417,   415,   410,     0,     0,     0,
     143,   429,   154,   154,   154,   143,     0,     0,   143,   469,
     451,   462,     0,   453,    78,   464,     0,     0,   455,   457,
     143,   474,   475,   460,     0,     0,     0,   445,     0,     0,
       0,     0,   944,   946,   945,     0,     0,  1039,     0,  1018,
       0,  1021,     0,     0,  1041,  1043,     0,  1034,   354,     0,
     497,   490,   499,   491,   501,   492,   503,   489,     0,     0,
     508,   505,   506,   154,   531,   544,   543,   546,     0,   559,
     547,     0,     0,     0,     0,     0,     0,   172,   172,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   169,
     169,   166,     0,     0,   166,     0,     0,     0,     0,     0,
     601,   625,     0,     0,     0,   597,     0,     0,     0,     0,
     172,   166,     0,     0,   702,     0,   712,   713,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   774,     0,     0,     0,     0,     0,   798,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   821,     0,
       0,   826,   827,     0,     0,     0,   848,   850,   849,     0,
     852,     0,     0,   860,   862,   863,   897,     0,     0,     0,
       0,   716,   717,   938,   936,   941,   940,   939,   937,   942,
       0,   721,     0,   726,     0,   935,     0,   727,   728,   729,
     730,     0,     0,     0,     0,     0,   834,     0,     0,   835,
    1061,     0,  1064,  1060,     0,     0,     0,   836,   870,   837,
    1080,  1085,  1082,  1081,  1079,  1086,  1083,  1077,  1084,  1078,
    1087,     0,     0,   842,     0,     0,     0,  1093,     0,  1095,
     845,     0,  1097,   846,   867,     0,     0,     0,   872,   873,
     874,  1122,     0,     0,  1129,  1125,     0,     0,     0,  1120,
    1119,  1133,  1132,     0,  1147,     0,     0,  1143,     0,  1151,
       0,     0,  1144,     0,  1165,   194,   194,     0,   194,     0,
    1191,     0,  1190,  1182,     0,     0,     0,     0,  1186,     0,
       0,     0,  1189,     0,     0,     0,     0,     0,  1184,  1192,
       0,     0,     0,  1183,   194,   194,   194,   210,   212,   214,
       0,     0,     0,     0,   215,     0,    55,     0,  1231,     0,
    1237,     0,   143,  1243,  1244,     0,  1246,  1247,     0,   155,
     156,  1238,  1259,  1260,     0,   228,   224,   230,   222,   223,
     229,   226,   225,   227,   232,     0,   246,     0,     0,     0,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   143,     0,     0,     0,     0,   317,     0,   327,     0,
     326,   380,   379,     0,     0,     0,   143,     0,     0,   154,
     427,   431,   435,     0,     0,     0,   154,     0,    82,    81,
     470,   454,     0,   465,   467,   157,   476,   348,     0,     0,
      55,     0,   444,     0,     0,   962,     0,     0,     0,     0,
       0,     0,   974,     0,     0,     0,     0,     0,     0,   990,
     991,     0,     0,     0,     0,  1001,     0,  1006,  1007,  1009,
    1011,     0,  1015,  1026,  1027,  1028,     0,  1030,  1035,  1037,
    1038,  1036,   943,     0,     0,  1017,     0,  1016,   961,     0,
       0,  1022,     0,  1024,     0,  1023,  1044,  1025,  1032,     0,
       0,   366,     0,     0,   557,   558,     0,   555,   551,     0,
     172,   172,   172,   173,   174,   569,   570,   168,   167,     0,
     172,   172,   172,     0,   575,   585,   169,   172,   172,   172,
     170,   171,   172,   172,     0,   172,   172,     0,   169,     0,
     598,     0,     0,     0,   624,     0,   623,     0,     0,   600,
       0,   599,     0,     0,     0,     0,   169,   169,   166,     0,
       0,   166,     0,     0,     0,   172,   172,   698,     0,   172,
     172,   703,     0,   185,   186,   187,   188,   189,   190,     0,
      86,    87,    85,   734,     0,     0,     0,     0,     0,   890,
     888,   883,     0,   893,   877,   894,   880,   892,   886,   875,
     889,   878,   876,   895,   891,     0,     0,   752,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   784,     0,     0,     0,     0,   797,   799,     0,     0,
     805,   804,     0,     0,   175,     0,     0,   143,     0,     0,
     817,     0,     0,     0,   822,   823,   824,     0,     0,     0,
     831,   847,   851,   853,   856,   855,     0,     0,     0,   861,
     898,   900,     0,   899,   719,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1045,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     723,     0,     0,     0,     0,   833,     0,   143,     0,  1056,
    1054,     0,     0,   143,     0,  1059,   838,     0,     0,     0,
     844,     0,     0,  1098,   865,   866,     0,   868,  1128,  1130,
    1127,  1126,  1117,     0,     0,  1148,     0,     0,  1152,  1160,
     196,   197,   198,   199,   195,  1175,  1174,     0,     0,     0,
    1177,  1176,   194,     0,     0,     0,  1185,     0,     0,     0,
       0,     0,  1202,     0,  1216,  1215,  1217,     0,     0,     0,
    1188,     0,     0,     0,  1187,  1197,  1196,  1198,  1194,  1193,
    1195,  1219,  1218,  1220,   217,   219,   218,     0,     0,    55,
       0,  1233,     0,   143,  1250,  1245,  1248,     0,     0,   143,
       0,     0,     0,   243,     0,     0,     0,     0,     0,     0,
       0,     0,   304,   303,     0,     0,   301,   306,   308,     0,
     318,   320,   319,   143,   325,     0,     0,     0,   154,   426,
     143,     0,     0,     0,     0,   449,   463,    80,    79,   472,
       0,   466,   159,   160,   158,   459,     0,     0,   447,   441,
       0,     0,     0,     0,     0,     0,   143,   963,     0,     0,
       0,   968,     0,   143,     0,   975,   976,     0,   978,   979,
     980,     0,     0,     0,   986,     0,   992,     0,     0,     0,
     996,   997,     0,     0,     0,  1002,     0,     0,  1005,  1008,
    1010,  1012,     0,     0,  1029,  1031,   947,     0,     0,     0,
       0,     0,     0,  1040,   948,     0,     0,  1042,  1033,     0,
       0,   513,   514,     0,     0,   556,     0,   566,   567,   568,
     172,   572,   573,   574,     0,     0,     0,   579,   580,   166,
       0,     0,     0,   172,   586,   587,   588,   589,   591,   169,
     594,   595,     0,   172,     0,     0,     0,   169,   169,   166,
       0,     0,     0,     0,   622,     0,   626,     0,     0,     0,
       0,     0,   169,   169,   166,     0,     0,   166,     0,     0,
       0,     0,     0,   169,   169,   166,     0,     0,   166,     0,
       0,     0,     0,     0,   169,   169,   166,     0,     0,   166,
       0,     0,     0,     0,   169,   169,   166,     0,     0,     0,
     169,   602,   603,   604,   605,   607,     0,   610,   611,     0,
     169,     0,     0,   696,   697,   172,   700,   701,     0,   733,
     143,   735,     0,     0,     0,     0,     0,     0,     0,   882,
     879,   885,   884,   881,   887,     0,     0,     0,     0,     0,
     143,   758,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   775,   776,   777,     0,   781,
     778,   780,     0,     0,   786,   785,   787,     0,     0,     0,
       0,     0,     0,   143,     0,   143,     0,   803,   181,   177,
     182,   176,   179,   178,   180,   812,   813,     0,     0,     0,
     816,   143,     0,   143,     0,   825,   828,   143,     0,   143,
       0,   854,   859,   901,   720,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1088,   926,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   927,     0,     0,     0,     0,     0,   731,   732,   143,
     154,     0,   143,   143,  1062,  1063,     0,  1065,     0,   840,
       0,   143,  1094,  1096,   864,  1145,  1146,  1149,  1150,   194,
     194,   194,  1221,  1200,  1199,  1201,  1204,  1203,  1207,  1206,
    1208,  1205,  1213,  1212,  1214,  1210,  1209,  1211,     0,  1228,
    1235,     0,  1251,     0,   143,     0,  1254,     0,     0,   247,
       0,   244,     0,     0,     0,   282,     0,     0,     0,     0,
     143,     0,   310,   131,     0,   404,     0,   424,   154,   157,
       0,     0,   438,     0,     0,   442,   955,     0,     0,     0,
       0,   143,   964,   157,   157,   157,   143,   969,   157,   154,
     157,   157,   143,   981,   157,   157,   157,   143,   987,   157,
     157,   143,     0,   157,   143,   157,   157,   143,   157,   143,
     949,     0,     0,     0,     0,   143,  1019,  1020,     0,     0,
     512,   552,     0,   571,   576,   577,   578,     0,   582,   583,
     584,   590,   172,   169,   596,   613,   614,   615,   616,   617,
       0,   619,   620,   169,     0,     0,     0,   169,   169,   166,
       0,     0,     0,     0,     0,     0,   169,   169,   166,     0,
       0,     0,     0,     0,     0,   169,   169,   166,     0,     0,
       0,   169,   172,   172,   172,   172,   172,     0,   172,   172,
       0,   169,   169,   172,   172,   172,   172,   172,     0,   172,
     172,     0,   169,   169,   676,   677,   678,   679,   681,     0,
     684,   685,     0,   169,   687,   688,   689,   690,   691,     0,
     693,   694,   169,   606,   169,     0,   612,     0,     0,   699,
       0,   736,   157,     0,     0,   157,     0,     0,     0,   749,
     157,   750,   753,   754,   157,   755,   757,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     779,   782,   783,     0,   157,     0,     0,     0,   800,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   857,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1089,  1068,     0,  1075,  1076,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,    83,     0,     0,   933,   934,   154,     0,     0,     0,
    1057,  1055,  1066,   839,   841,   154,  1179,  1178,  1180,     0,
    1230,  1261,     0,     0,  1256,  1255,   248,     0,     0,     0,
     287,     0,     0,     0,   302,   157,   405,   409,   425,   428,
       0,   436,   471,   349,     0,     0,     0,     0,   960,   965,
     967,   966,   970,   971,   972,   973,   977,   982,   983,   984,
     985,   988,   989,   993,   154,   157,   999,   154,  1000,  1003,
     154,  1013,   154,     0,     0,     0,     0,   954,     0,   367,
     511,     0,   581,   592,   172,   169,   621,   172,   172,   172,
     172,   172,     0,   172,   172,   169,   667,   668,   669,   670,
     671,     0,   673,   674,   169,   172,   172,   172,   172,   172,
       0,   172,   172,   169,   172,   636,   637,   638,   639,   641,
     169,   644,   645,     0,   172,   172,   656,   657,   658,   659,
     661,   169,   664,   665,     0,   172,   680,   169,     0,   686,
     169,   695,   608,   169,   704,   705,   143,   739,     0,   157,
     743,   742,     0,   143,     0,   751,   756,   143,     0,   763,
     764,   765,   766,   770,   771,   767,   768,   769,     0,     0,
     157,   788,   792,     0,   143,     0,     0,   801,   807,   806,
     157,   808,     0,   814,     0,   818,   157,   157,   810,     0,
       0,   858,     0,   183,   183,     0,     0,   183,     0,   183,
    1045,     0,     0,     0,     0,     0,     0,     0,     0,  1067,
       0,     0,   183,   183,     0,     0,     0,     0,     0,     0,
       0,     0,   928,     0,     0,     0,  1045,    84,     0,   183,
       0,  1091,   932,     0,     0,   216,  1263,  1262,     0,     0,
     252,     0,     0,     0,     0,   311,   437,   956,     0,   191,
       0,   994,   995,   998,  1004,  1014,   950,     0,   191,     0,
     359,     0,   593,   618,   627,   628,   629,   630,   631,   169,
     633,   634,   172,   169,   675,   647,   648,   649,   650,   651,
     169,   653,   654,   172,   640,   172,   169,   646,   660,   172,
     169,   666,   682,   169,   692,   609,     0,   157,   737,   744,
       0,     0,     0,     0,     0,   772,   773,   789,     0,     0,
       0,   802,   809,     0,   819,   820,   811,   157,   829,     0,
     184,  1045,  1045,    83,     0,  1045,     0,  1045,   902,   143,
       0,  1070,     0,  1073,  1107,  1074,  1072,  1069,     0,  1045,
    1045,    83,     0,     0,  1045,  1045,     0,     0,  1045,   931,
     929,   930,   909,  1045,  1045,  1091,  1102,     0,  1058,   843,
       0,     0,   254,     0,     0,     0,     0,   192,   193,   958,
     959,     0,   952,   953,     0,   172,   635,   672,   172,   655,
     642,   172,   662,   172,   683,     0,   738,   157,   740,   157,
       0,   157,     0,   157,   790,   157,     0,   157,     0,  1045,
     915,   911,  1045,     0,   916,     0,   910,  1045,     0,  1071,
       0,   913,   912,  1045,     0,     0,   907,   905,  1045,   143,
     906,   908,   914,  1102,  1052,     0,     0,  1092,  1100,     0,
       0,     0,   283,   162,   165,   164,   163,   161,     0,   143,
     143,   554,   632,   652,   643,   663,   157,   741,   748,     0,
     762,   759,   791,   796,     0,   815,     0,   920,   904,    83,
       0,   918,  1108,     0,   903,    83,     0,   919,     0,  1053,
    1104,  1106,     0,  1099,     0,     0,   288,     0,   191,   191,
       0,   745,   143,   760,   793,   830,  1045,     0,     0,  1045,
       0,   157,  1105,  1101,   253,     0,     0,   957,   951,   715,
     143,   746,   761,   143,   794,   922,     0,  1045,   921,     0,
    1045,   255,   296,   747,   795,    83,   923,    83,   917,  1045,
    1045,   925,   924
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1250,  2496,  2497,   430,   431,
     432,   433,   156,   157,   158,    94,   806,   456,  1191,  1665,
    2708,  1339,  1352,  1335,  1905,  2591,  1399,  2639,  1565,   335,
     747,   750,   753,   764,    56,   364,    66,   368,   374,   378,
     381,    71,   384,    78,   399,   395,   389,   405,    85,   410,
      95,   101,   415,   417,   419,  1634,   421,   424,   108,   440,
     159,   161,   178,   218,   480,   848,   482,   491,   492,   851,
     856,   494,   496,   858,   499,   860,   510,   862,   864,   513,
     517,   521,   523,   526,   530,   557,   553,  1262,   544,   883,
     888,   880,  1251,   893,   547,   563,   566,   571,   574,   582,
     921,   923,   925,   927,   587,   931,   221,   589,  1733,   238,
     591,   593,   597,   602,   609,   247,  1328,   612,   255,   621,
    1344,   623,   629,   975,  1360,   970,  1774,  1366,  1364,   971,
    1776,  1369,  1371,   635,   638,   633,   257,   265,   267,   676,
    1052,  1425,  1041,  1520,  1951,  2279,  1057,  1050,   918,  1302,
    1307,  1315,  1317,  1935,   273,  1066,  1069,  1077,  2251,  2252,
    2253,  1936,  2626,  2627,  1100,  1103,  2697,  2698,  2694,  2695,
    2740,  2254,  2255,   278,   284,   292,   690,   685,   297,   302,
     700,   706,  1127,  1132,   756,   744,   308,   312,   713,   318,
     720,  1570,   733,   734,  1163,  1158,  1576,  1148,  1582,  1594,
    1590,  1152,   738,   722,   323,   324,   339,  1178,   342,   348,
     774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2562
static const yytype_int16 yypact[] =
{
    4516,   -71,    69,   444,    80, -2562, -2562,   932,   -85,   563,
    1115,   397,   236,  3453,   163,   330,  1947,    58,  5636,   405,
    1609, -2562,   330,   728,   201,    41,   -22,   105,   244,   190,
      49,   209,   881,  3122,   185,   836,   118,   190, -2562,   -24,
      75,   748, -2562,   -10,   276,   355, -2562,   487, -2562,    90,
    2084,   267,   124,   494, -2562,   498, -2562,   500,   171,   262,
     525,   559,   133,   590,    -7,    88, -2562, -2562, -2562,   539,
     837, -2562,   145,    47,   330,   399,   837,    84, -2562,   592,
     837, -2562, -2562,    53,   837, -2562, -2562, -2562, -2562,   837,
   -2562, -2562, -2562, -2562, -2562, -2562,    28,   581,   612,   633,
     155, -2562,   837,  1553,   837,   837,   979,   837, -2562, -2562,
   -2562,   463, -2562, -2562, -2562, -2562,  5014, -2562, -2562, -2562,
   -2562, -2562, -2562,   837, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562,  1397, -2562,   837, -2562,
     682, -2562, -2562,   330,   330,   330,   330,   330,   330,   330,
   -2562, -2562,   330,   330,   330,   330, -2562,   584, -2562,   624,
    1273,   586,    43,   434,   565,   517,  4582,   322,  5069,  4986,
     697,  5014,  4019, -2562,    61,   -75,   746,   689,   701,    91,
     778,   190,   -13, -2562,   743, -2562,   596,   557,    97, -2562,
     443, -2562,   421, -2562,     0,   761,   125, -2562, -2562,  5258,
   -2562, -2562, -2562,   780,   829, -2562, -2562, -2562, -2562,   564,
   -2562, -2562, -2562,   858, -2562, -2562,  5258,  4637, -2562, -2562,
      45, -2562,   859,   879,   492, -2562,   837, -2562,   887,    25,
     880,   396,   406,   895,    27, -2562, -2562, -2562,   898,   900,
     330,   330,   837,   837, -2562, -2562,   902, -2562, -2562, -2562,
   -2562, -2562, -2562,  2903, -2562,   904,   910,   837, -2562,   935,
   -2562, -2562, -2562, -2562, -2562,   837,  1275,   330,  3782,   837,
    1397,   837, -2562,   931, -2562,  4124, -2562, -2562,   526,   938,
     947,   837, -2562, -2562,    10,   955,  5258,   961, -2562,  1347,
     837,   877, -2562,   495,   875,  1224,   429,  1007, -2562, -2562,
   -2562, -2562, -2562, -2562,  1029, -2562,    52,     8,    73,   360,
     461, -2562,   837,   837,   479, -2562,   837,   776,  1039, -2562,
     837,   837, -2562,  1047,    15,    20,  1059,  1397, -2562, -2562,
   -2562,   617,   837, -2562, -2562,   837,   837,   837,   837,   837,
     837,   837,   837,   837, -2562, -2562, -2562,   837, -2562,  1073,
    1077, -2562,   837,   740, -2562, -2562, -2562, -2562, -2562, -2562,
     837, -2562, -2562,   837, -2562, -2562,   488,   488,  1092, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
     837,   837,  1099,  1107,  1119, -2562, -2562,   837,   837,   837,
   -2562,   837, -2562,  1121, -2562, -2562, -2562, -2562,   883, -2562,
    1125, -2562,  5258,  1129, -2562,   837, -2562, -2562, -2562,   837,
    1127,  1133,  1133,  5258,   837,   837,   837,   837,   837,   837,
   -2562,   837,  5014,  1553,   837,   837, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562,  1553,   837, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
    1140, -2562,   886,     2, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562,   -35, -2562, -2562, -2562,   982, -2562,   379,
   -2562, -2562, -2562, -2562, -2562,  1159, -2562,  1160, -2562, -2562,
     986, -2562,  1002, -2562, -2562, -2562,  1011, -2562, -2562,  1397,
   -2562,  3963,   837, -2562,  5258,  5258,  1397, -2562, -2562,  1397,
   -2562, -2562, -2562, -2562,  1397, -2562, -2562,  5258,  1397,   837,
   -2562, -2562,  5258, -2562,  1175,   419,   988,    12, -2562, -2562,
     991,  5258,  4197, -2562, -2562, -2562, -2562, -2562,  1180,  1183,
    1190, -2562,  1003, -2562, -2562, -2562,   837, -2562, -2562,   595,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,     0, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562,  1134,  1136,  1141, -2562,
   -2562,   989, -2562,   837,  1211,   974,  4124, -2562,  1397, -2562,
    1216, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562,  5258,  5258,  5258, -2562, -2562,
    1222,   330, -2562, -2562,  1228,  1229,  1035,   837, -2562,   440,
    1147, -2562,  1230, -2562,   540,  1150,  4553,    64,  1239, -2562,
    1242, -2562,  1244, -2562,   187, -2562,  1245,  1248, -2562,  1251,
   -2562, -2562, -2562,   837, -2562,  4124,  4949,   945,   483,  1253,
     618,  1157, -2562, -2562, -2562,  1232,   441,  1258,  1261,    14,
     837,   465,   468,    35,  5258,   330,  1482,   466,    39,   114,
     304,    13, -2562,  1250,  1252,  1268, -2562, -2562, -2562, -2562,
   -2562,   837,   837,   837,   837, -2562, -2562,   837,  1397,   837,
   -2562,   837,  1553,   837,  1277,  1397, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562,   110,   513, -2562, -2562, -2562,  1279,
   -2562, -2562, -2562, -2562,  1192, -2562,  1282,  1289,  1197,  1292,
   -2562,  1295, -2562,  1296,  1220,  1304,   543,   510,   614,    82,
     621,  1307,   707, -2562, -2562,  1312,  1315,  1308, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562,  1316, -2562, -2562,  1319, -2562,
   -2562,  1323, -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837,
     837,   837,   837,   837, -2562,   837,   933,   837,   837, -2562,
    1490, -2562,   964,  1326, -2562,   997,  1332, -2562, -2562,   -42,
     837,   837, -2562,  1325,   837,   837,   837,   837,   837,   837,
     837,   837,   837, -2562, -2562,  1343,   981,   837,  1341,   574,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562,  1350,  1363,   837,   837,   837,  1365,   330,
    1366,  1367,  1397,  5258, -2562, -2562, -2562, -2562, -2562,  1397,
   -2562, -2562,   837,   837,   837,  5258,   837,  1553,   837, -2562,
     837, -2562, -2562, -2562, -2562, -2562,  1369,  1371, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,   322, -2562,   837,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,  5258,  5258,   837,
    1397, -2562,   -42,   -42,   -42,  1397,  1553,   837,  1397, -2562,
   -2562, -2562,   837, -2562,    -9,  1208,  1372,  1375, -2562, -2562,
    1397,  5258, -2562, -2562,  1376,  1381,  1377,  1045,   837,  4954,
     522,   812, -2562, -2562, -2562,   837,  1374,   140,   975, -2562,
    1138, -2562,  1482,  1144,   416,  1118,   121, -2562, -2562,   837,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837,  1394,
   -2562, -2562, -2562,   -42, -2562, -2562, -2562, -2562,  5345, -2562,
   -2562,  1401,  1405,   837,  1407,  1409,  1410,   -14,   -14,   -64,
    1415,  1416,  1419,  1420,  1158,  1165,  1426,  1428,  1430,    42,
      42,   -64,  1432,  1433,   -64,  1436,  1437,  5109,  1441,  1447,
   -2562, -2562,  1448,  1449,   710, -2562,  1434,  1454,  1456,  1461,
     -14,   -64,  1463,  1465, -2562,  1467, -2562, -2562,  1397,   725,
    1338,  1241,  1246,  1249,  1379,   785,  1254,  1480,   175,  1355,
    1386,   817,   909,  1453,  1288,  1293,  1425,  1520,  1324,   119,
      24,   616,  1298,  5014,  1482,  1500,   257,  1306,  1337,  1540,
      29, -2562, -2562,   411,  1542,  1546, -2562, -2562, -2562,  1555,
    1340,    59,  1482,  1358, -2562, -2562, -2562,   330,  1562,  1565,
     837, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
      18, -2562,  1053, -2562,   837, -2562,   837, -2562, -2562, -2562,
   -2562,   837,   837,   837,   618,  5258, -2562,  1567,  1049, -2562,
   -2562,   837, -2562, -2562,   837,  5014,   837, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562,   330,   837, -2562,   837,   618,  1569, -2562,   837,   837,
   -2562,   330, -2562, -2562, -2562,   709,  1571,  1572, -2562, -2562,
   -2562, -2562,   837,   837, -2562, -2562,  1553,   837,   837, -2562,
   -2562, -2562, -2562,   837, -2562,   837,  1469, -2562,   837, -2562,
     837,  1470, -2562,  1580, -2562,  1108,  1108,   708,  1108,  1584,
   -2562,   730, -2562, -2562,  1590,  1591,   763,  1593, -2562,  1594,
    1595,  1597, -2562,   770,   777,  1600,  1602,  1598, -2562, -2562,
    1604,  1605,  1607, -2562,  1108,  1108,  1108, -2562, -2562, -2562,
     837,   837,   837,   837, -2562,   837,   916,  5258, -2562,   837,
   -2562,  4124,  1397, -2562, -2562,  1610, -2562, -2562,  1614, -2562,
   -2562, -2562, -2562,  1586,  3782, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562,   837,  1612,   837,   837,   837,
     864, -2562,  1606,  1618,   837,   837,   -11,  1620,   330,   330,
   -2562,  1397,   837,  1626,  1627,  1628, -2562,  5258, -2562,   837,
   -2562, -2562, -2562,   837,   837,   837,  1397,  1629,  5258,   -42,
   -2562, -2562, -2562,  1553,   837,  1630,   -42,   837,  1601,  1603,
     482, -2562,  1631, -2562, -2562,   721, -2562, -2562,   837,  1634,
    1643,   837, -2562,  1639,   798,  5014,  1412,  1413,  1414,   108,
    5258,  1417, -2562,   218,  1516,   179,  1421,  1422,   195, -2562,
   -2562,   432,  1486,   620,   -98,  1482,   -50, -2562,  1653,  1423,
   -2562,   449, -2562, -2562, -2562, -2562,  1482,  1455, -2562, -2562,
   -2562, -2562, -2562,   837,   980, -2562,   837, -2562, -2562,   837,
     837, -2562,   837, -2562,   837, -2562, -2562, -2562, -2562,  1468,
     837, -2562,   837,    32, -2562, -2562,  1656,  1659, -2562,   837,
     -14,   -14,   -14, -2562, -2562, -2562, -2562, -2562, -2562,  1661,
     -14,   -14,   -14,   579, -2562, -2562,    42,   -14,   -14,   -14,
   -2562, -2562,   -14,   -14,  1662,   -14,   -14,  1663,    42,   758,
   -2562,  1666,  1667,  1670, -2562,   734, -2562,  1178,  1403, -2562,
     800, -2562,  1424,  1671,  1672,  1673,    42,    42,   -64,  1675,
    1676,   -64,  1678,  1680,  1681,   -14,   -14, -2562,  1684,   -14,
     -14, -2562,  1685, -2562, -2562, -2562, -2562, -2562, -2562,   330,
   -2562, -2562, -2562,  5014,  1005,   837,  1081,  1149,     3, -2562,
   -2562, -2562,   395, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562,  1686,   837, -2562,   330,  1687,
     837,  5258,   330,  1352,  1464,  1466,   203,   206,  1472,   234,
    1393,  1400,  1694,  1698,  1702,   785,  1703,  1704,  1705,  1411,
    1418,  1056,  1707,   837,  1095,  1473, -2562, -2562,   330,  5014,
   -2562, -2562,  5014,   837,    63,  1709,   837,  1397,  1553,   330,
   -2562,  5014,  5258,   837, -2562, -2562, -2562,   330,   330,  5014,
   -2562, -2562, -2562, -2562, -2562, -2562,  5014,   837,   330, -2562,
   -2562, -2562,   837, -2562, -2562,  1710,   837,  1494,   169,   837,
    1497,   837,   178,   837, -2562,   837,  1498,  1504,   837,   837,
     837,   837,   837,   837,   837,   837,    17,   837,   837,  1507,
   -2562,   837,   837,   837,   837, -2562,  5258,  1397,  1715,  5258,
    5258,   837,   837,  1397,  1553, -2562,   837,   837,   837,  5258,
   -2562,   837,   837, -2562, -2562, -2562,  1723, -2562, -2562, -2562,
   -2562, -2562, -2562,   837,   837, -2562,   837,   837, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,  1725,  1728,  1731,
   -2562, -2562,  1108,  1732,  1733,  1735, -2562,  1736,  1737,  1738,
    1739,  1741, -2562,  1742, -2562, -2562, -2562,  1743,  1745,  1747,
   -2562,  1748,  1749,  1752, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837,   837,  1757,
    5258, -2562,   837,  1397, -2562, -2562, -2562,  3782,   837,  1397,
     837,   837,   837, -2562,   837,   837,  1753,   837,  1755,  1730,
     837,   837, -2562, -2562,  1756,  5258, -2562, -2562, -2562,   837,
   -2562, -2562, -2562,  1397, -2562,  1187,   837,  1187,   -42, -2562,
    1397,  5258,   837,   837,  1759, -2562, -2562, -2562, -2562, -2562,
     837, -2562, -2562, -2562, -2562, -2562,   837,  1760, -2562, -2562,
    5258,  1762,  1763,  1764,  1766,  5258,  1397, -2562,  5258,  5258,
    5258,  5014,  5258,  1397,  5258, -2562, -2562,  5258, -2562, -2562,
    5014,  5258,  5258,  5258,  5014,  5258, -2562,  5258,  5258,   837,
   -2562, -2562,  5258,  5258,  5258, -2562,  5258,  5258, -2562, -2562,
   -2562, -2562,  5258,  5258, -2562, -2562, -2562,  5258,  1767,  1768,
    1771,  1772,  5258, -2562, -2562,   837,   837, -2562, -2562,  1761,
     837, -2562, -2562,  1773,  1775, -2562,   837, -2562, -2562, -2562,
     -14, -2562, -2562, -2562,  1776,  1777,  1778, -2562, -2562,   -64,
    1780,  1782,  1783,   -14, -2562, -2562, -2562, -2562, -2562,    42,
   -2562, -2562,  1787,   -14,  1817,  1818,  1819,    42,    42,   -64,
    1788,  1822,  1823,  1026, -2562,  1032, -2562,  1126,  1479,  1824,
    1825,  1826,    42,    42,   -64,  1828,  1830,   -64,  1831,  1489,
    1832,  1833,  1836,    42,    42,   -64,  1839,  1841,   -64,  1842,
    1524,  1843,  1845,  1846,    42,    42,   -64,  1848,  1849,   -64,
    1850,  1851,  1852,  1853,    42,    42,   -64,  1865,  1866,  1867,
      42, -2562, -2562, -2562, -2562, -2562,  1870, -2562, -2562,  1871,
      42,  1872,  1874, -2562, -2562,   -14, -2562, -2562,  1875, -2562,
    1397, -2562,  5258,   837,   837,  5258,   837,  1876,  1338, -2562,
   -2562, -2562, -2562, -2562, -2562,  1877,  5014,   330,  1881,  5014,
    1397, -2562,  1883,  1338,   837,   837,   837,   837,   837,   837,
     837,   837,   837,  1885,  1886, -2562, -2562, -2562,  1891, -2562,
   -2562, -2562,  1887,  1893, -2562, -2562, -2562,   837,  5258,   837,
    1894,  1338,   330,  1397,  1553,  1397,   837, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837,  1553,  1553,
   -2562,  1397,  1553,  1397,   837, -2562, -2562,  1397,  1553,  1397,
    1553, -2562, -2562, -2562, -2562,   837,   837,   837,   837,   837,
     837,   837,   837,   837,   837,  2906, -2562,   837,   837,   837,
     837,   837,   837,   837,   837,   837,   837,   837,  3963,  1897,
     837, -2562,   837,   837,   837,  1901,  1903, -2562, -2562,  1397,
     -42,  1904,  1397,  1397, -2562, -2562,  1553, -2562,   837, -2562,
    1905,  1397, -2562, -2562, -2562, -2562, -2562, -2562, -2562,  1108,
    1108,  1108, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837, -2562,
   -2562,   837, -2562,   837,  1397,   837, -2562,  1553,   837, -2562,
     837, -2562,  1815,  1906,  1907, -2562,  1910,   837,   837,  1911,
    1397,  5258, -2562, -2562,   837, -2562,   837, -2562,   -42,   721,
     837,  1912, -2562,   837,     0, -2562, -2562,  1913,  1914,  1915,
    1926,  1397, -2562,   721,   721,   721,  1397, -2562,   721,   -42,
     721,   721,  1397, -2562,   721,   721,   721,  1397, -2562,   721,
     721,  1397,  5258,   721,  1397,   721,   721,  1397,   721,  1397,
   -2562,  1927,  1940,  1942,  1946,  1397, -2562, -2562,  1948,     0,
    1949, -2562,   837, -2562, -2562, -2562, -2562,  1952, -2562, -2562,
   -2562, -2562,   -14,    42, -2562, -2562, -2562, -2562, -2562, -2562,
    1953, -2562, -2562,    42,  1954,  1956,  1957,    42,    42,   -64,
    1959,  1961,  1962,  1963,  1964,  1965,    42,    42,   -64,  1967,
    1968,  1969,  1972,  1973,  1974,    42,    42,   -64,  1976,  1977,
    1978,    42,   -14,   -14,   -14,   -14,   -14,  1980,   -14,   -14,
    1981,    42,    42,   -14,   -14,   -14,   -14,   -14,  1982,   -14,
     -14,  1983,    42,    42, -2562, -2562, -2562, -2562, -2562,  1984,
   -2562, -2562,  1985,    42, -2562, -2562, -2562, -2562, -2562,  1986,
   -2562, -2562,    42, -2562,    42,  1988, -2562,  1991,  1992, -2562,
    4124, -2562,   721,  1994,  5014,   721,   837,  5258,  1996, -2562,
     721, -2562, -2562, -2562,   721, -2562, -2562,  5258,  1998,   837,
     837,   837,   837,   837,   837,   837,   837,   837,   837,   837,
   -2562, -2562, -2562,  5014,   721,   837,  5258,  1999, -2562,  1553,
    1553,  1553,   837,  5014,  1553,   837,  1553,  1553,  5258,  5014,
    1553,   837,  1553, -2562,   837,   837,   837,   837,   837,   837,
    1338,   837,   837,   837,  1491,  1502,  1505,  1510,  1527,  1535,
    1638,  2906, -2562,  1664, -2562, -2562,  1338,   837,   837,   837,
     837,  1338,   837,   837,   837,   837,   837,   837,  1397,   837,
    1619,  1338,   837,   837, -2562, -2562,   -42,   330,  2001,  2003,
   -2562, -2562, -2562, -2562, -2562,   -42, -2562, -2562, -2562,   837,
   -2562, -2562,  1553,   837, -2562, -2562, -2562,   930,  2004,  2005,
   -2562,   837,  2007,  1187, -2562,   721, -2562, -2562, -2562, -2562,
    2010, -2562, -2562, -2562,  2008,  2011,  5258,  2012, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562,   -42,   721, -2562,   -42, -2562, -2562,
     -42, -2562,   -42,  2014,  2016,  5258,  2019, -2562,  2020, -2562,
   -2562,   837, -2562, -2562,   -14,    42, -2562,   -14,   -14,   -14,
     -14,   -14,  2015,   -14,   -14,    42, -2562, -2562, -2562, -2562,
   -2562,  2023, -2562, -2562,    42,   -14,   -14,   -14,   -14,   -14,
    2024,   -14,   -14,    42,   -14, -2562, -2562, -2562, -2562, -2562,
      42, -2562, -2562,  2030,   -14,   -14, -2562, -2562, -2562, -2562,
   -2562,    42, -2562, -2562,  2033,   -14, -2562,    42,  2034, -2562,
      42, -2562, -2562,    42, -2562, -2562,  1397, -2562,  5014,   721,
   -2562, -2562,  2035,  1397,   837, -2562, -2562,  1397,   837, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,   837,   837,
     721, -2562, -2562,  2036,  1397,   837,  1553, -2562, -2562, -2562,
     721, -2562,   837, -2562,  1553, -2562,   721,   721, -2562,  5258,
    1338, -2562,   837,  2037,  2037,   837,   837,  2037,  1338,  2037,
   -2562,  5258,   785,  2038,  2040,  2041,  2042,  2043,  2045, -2562,
     330,  1338,  2037,  2037,   837,   837,  1338,   837,   837,   837,
     837,   837, -2562,  1553,   837,  2046, -2562, -2562,   837,  2037,
     330,     6, -2562,  2047,   330, -2562, -2562, -2562,  2048,   837,
   -2562,  2049,  2051,  2044,   837, -2562, -2562, -2562,  2052,    -6,
    5258, -2562, -2562, -2562, -2562, -2562, -2562,  2053,    -6,  5258,
   -2562,   837, -2562, -2562, -2562, -2562, -2562, -2562, -2562,    42,
   -2562, -2562,   -14,    42, -2562, -2562, -2562, -2562, -2562, -2562,
      42, -2562, -2562,   -14, -2562,   -14,    42, -2562, -2562,   -14,
      42, -2562, -2562,    42, -2562, -2562,   837,   721, -2562, -2562,
    5014,  5258,   837,  5258,   837, -2562, -2562, -2562,  5014,  5258,
     837, -2562, -2562,  5258, -2562, -2562, -2562,   721, -2562,  2055,
   -2562, -2562, -2562,  1338,   837, -2562,  2056, -2562, -2562,  1397,
    2057, -2562,  2060, -2562, -2562, -2562, -2562, -2562,  2061, -2562,
   -2562,  1338,   837,  2062, -2562, -2562,   837,  5258, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562,     6,  1484,  1482, -2562, -2562,
    2063,  2064, -2562,  2050,  2066,    78,  5258, -2562, -2562, -2562,
   -2562,  5258, -2562, -2562,  2067,   -14, -2562, -2562,   -14, -2562,
   -2562,   -14, -2562,   -14, -2562,  4124, -2562,   721, -2562,   721,
     837,   721,  2068,   721, -2562,   721,   837,   721,   837, -2562,
   -2562, -2562, -2562,  2069, -2562,   837, -2562, -2562,  2071, -2562,
     837, -2562, -2562, -2562,  2070,   837, -2562, -2562, -2562,  1397,
   -2562, -2562, -2562,  1484, -2562,  1696,  1717,  1482, -2562,  2072,
    2074,  2078, -2562, -2562, -2562, -2562, -2562, -2562,   837,  1397,
    1397, -2562, -2562, -2562, -2562, -2562,   721, -2562, -2562,  2079,
   -2562,  5014, -2562, -2562,  2080, -2562,  1338, -2562, -2562,  1338,
     837, -2562, -2562,   837, -2562,  1338,   837, -2562,  5258, -2562,
    1696, -2562,   330, -2562,  2083,  2085, -2562,   837,    -6,    -6,
    2086,  5014,  1397, -2562,  5014, -2562, -2562,   837,  2081, -2562,
     837,   721, -2562, -2562, -2562,  2087,  2088, -2562, -2562, -2562,
    1397, -2562, -2562,  1397, -2562, -2562,  2090, -2562, -2562,  2091,
   -2562, -2562, -2562, -2562, -2562,  1338, -2562,  1338, -2562, -2562,
   -2562, -2562, -2562
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2562, -2562,    -4, -2562,   297, -2562, -1596,  -893,  1523, -2562,
     675,  -326,  1844,   -49,    99, -1638,  1655,  1951,  -869,   570,
   -2562,  -857,   729,  1581, -2562,  -928, -2562, -2511, -1123, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -1443, -2562, -2562, -2562, -2562, -2562,  -651, -2562, -2562,
   -2562, -2562, -2562, -2562,    33, -2562, -2562, -2562, -2562,  -184,
    -652, -1350,  -536, -2562, -2562, -2562, -2562,  -601,  -596, -2562,
   -2562, -2561, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562,  1373, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562, -2562,
   -2562, -2562, -2562, -2562, -2562, -2562
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1235
static const yytype_int16 yytable[] =
{
      70,   347,  1878,  1240,  1241,  1242, -1090,  2024,   107,  2026,
    1065,  1068,   109,  1566,  1091,  1571,   885,  2642,  1104,   772,
      67,    68,  1948,  1494,   775,   376,  2637,    67,    68,   289,
     619,  1060,   636,   413,  1476,  1632,   311,   305,    67,    68,
     319,  1601,  1602,  1603,  1095,   341,    67,    68,   352,   610,
      67,    68,  1731,   560,   367,  1189,   112,   408,   373,  1350,
    1460,   380,    67,    68,  1323,   383,   385,   249,  1702,   394,
     304,  1070,   400,   404,   745,  1071,   407,   109,    67,    68,
     411,    67,    68,    67,    68,   412,   741,    67,    68,   320,
    1898,    67,    68,    67,    68,  1484,   554,  1403,   425,  1337,
     434,   435,   439,   441,  1354,   846,   531,  1357,  1849,   109,
     258,  1899,  1105,   274,  1900,   275,  1706,   839,  1106,   445,
     532,  1248,  1703,   321,  1388,  1901,   114,    67,    68,  1681,
     842,  1097,   291,   545,  2741,    57,    67,    68,  1318,   748,
    1333,   585,   533,    67,    68,  1072,  1458,   112,  1902,   386,
    1123,   972,   250,  1461,   457,   849,   555,   704,   568,   742,
     422,   534,   401,   251,  1073,  1903,    54,   561,  1334,  1153,
    1707,   259,    67,    68,    67,    68,   886,   535,   490,  2762,
     536,    67,    68,   511,    55,  1704,   423,   847,  1485,   109,
     293,   114,    79,   260,  1338,  1850,   160,   252,  1351,   177,
    1690,   978,  1428,   256,   537,   538,   303,   117,   850,   379,
     268,   120,  1190,   118,   119,   444,  1694,   248,   973,  1319,
    1124,  1061,   546,   114,  1866,  1708,  1074,  1868,   483,   276,
     366,  1249,   390,   484,   559,   611,  1154,  2767,  2768,    67,
      68,   261,   617,   253,  1851,  1685,   695,   269,   979,   266,
     414,   306,   743,  1633,   402,  1871,   254,   539,   643,   644,
    1311,  1732,   705,  2703,   620,   540,   309,   377,  2638,   485,
    1477,   562,   117,   679,   307,   279,   102,   322,   118,   119,
     325,   681,   684, -1090,   687,   691,   512,   693,   520,   637,
     525,   529,   409,   486,   773,   103,   122,   703,   556,   776,
    1062,  1125,   120,   114,   117,   712,   714,  1107,   109,  1462,
     118,   119,   162,   583,  1949,  1495,   887,  1096,   586,   239,
    1075,  1098,   541,   542,   264,    67,    68,   403,   757,   758,
     763,   296,   765,   277,   109,   387,   768,   769,   487,  1459,
    1429,  1682,   391,  1305,  1486,   152,   104,   781,   783,   153,
     154,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     310,   122,  1469,   793,   109,    69,  1119,  1126,   796,   798,
    1651,   396,   569,  2704,   980,   340,   799,  1655,   112,   800,
    1488,   488,   489,  1686,   117,   392,   393,   689,   388,  1927,
     118,   119,   326,   122,   543,   570,   809,   810,  1932,   262,
    1099,   624,   327,   814,   815,   816,  1904,   817,  1430,   351,
     152,   270,  1691,  1526,   153,   154,  2705,  2706,   372,    67,
      68,   824,   114,   881,   271,   825,   751,   105,  1695,   328,
     830,   831,   832,   833,   834,   835,  1867,   836,  1478,  1869,
     840,   841,   152,   981,  1539,   263,   153,   154,   114,  1982,
    1431,  1687,   982,   843,   944,   945,    58,   853,   575,  1696,
     459,   460,   461,   462,   463,   464,   465,  1872,   576,   466,
     467,   468,   469,   122,   754,   112,  1711,  1471,   114,   294,
      96,  1054,    67,    68,   983,   272,  1659,  1036,   219,   295,
     735,   336,   349,  1688,   354,   577,    97,    59,   615,   630,
    1852,   946,   329,   117,   220,   365,  1092,   867,   869,   118,
     119,  1228,   625,  1037,  1848,    60,   631,   106,   801,   759,
     355,  1826,   152,   369,  1829,   877,   153,   154,  1043,   117,
     370,  1043,  1472,   120,   397,   118,   119,   932,   112,   330,
    1863,   838,    67,    68,    61,   955,   356,   357,   736,   854,
    1244,  1055,   898,  1128,   956,   957,   716,   641,   642,   117,
     358,    62,  1891,   371,    63,   118,   119,    80,   578,  1044,
      98,  1144,  1044,   398,   572,    64,  1093,   969,  1209,   928,
     696,   331,   802,  1101,   686,   626,  1210,  1853,  1293,   760,
    1067,   632,   122,  1744,  1745,   375,   988,   406,  1697,   899,
     900,   958,   332,    81,   723,   579,   359,   360,   594,   337,
      99,   616,   416,   943,   717,  1712,   697,   418,   122,  1313,
      67,    68,   855,  1129,   746,   749,   752,   947,   948,  1145,
     120,  1479,  1056,  1705,   882,   627,  1854,   333,   420,   987,
    1746,   152,  1038,   100,  1714,   153,   154,   755,   122,   803,
    1294,   595,  1698,   334,   442,   901,  1063,  1094,   628,  1076,
     382,   902,   725,   698,  1146,  2514,   919,   152,   580,  1713,
     761,   153,   154,    82,  1295,  1149,   573,  1111,  1112,  1113,
    1114,  1043,  1155,  1115,   497,  1117,   458,  1118,   338,  1120,
     471,  1039,   498,   120,   737,  1045,   949,   152,  1045,   762,
     470,   153,   154,   481,  1130,   950,   951,   550,   903,  1046,
    1047,   493,  1046,  1047,  1544,  1372,  1040,  1064,   361,   581,
     362,  1182,  1044,   904,  1373,  1374,  1545,   959,   960,    65,
     522,   804,   495,  1150,   718,   905,   805,   952,   780,  1778,
    1156,   906,   907,    67,    68,  1662,  1663,   908,  1779,  1780,
    1296,   548,   797,   596,    83,  1170,  1171,  1172,  1173,  1174,
     719,  1175,  1177,  1179,  1180,   699,  1747,  1748,  1160,  1567,
    1131,  1375,  1764,  1765,   313,  1147,  1192,  1193,   549,  2027,
    1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,  1203,   551,
    1550,  1573,  1206,  1207,   558,  1781,   961,   363,   909,  1297,
    1048,  1049,    84,  1048,  1049,   962,   963,  1393,   731,   564,
     964,  1213,  1214,  1215,  1811,  1812,   240,   910,  1664,  1766,
     552,   911,   565,   912,  1579,  1408,  1161,  1568,  1223,  1224,
    1225,  1587,  1227,   567,  1229,  1749,  1230,   965,  1591,  1434,
      67,    68,  1298,   241,  1750,  1751,   913,   914,  1045,  1574,
     584,  1409,   590,  1233,   915,  1235,  2286,  2287,  2288,   314,
     592,  1813,  1046,  1047,   613,  1238,  1435,    67,    68,  1436,
     315,  1464,   916,  1245,  1394,  1700,  1752,  1465,  1247,  1151,
    1670,  1701,  1580,   614,  1410,   622,  1157,   819,   820,  1588,
    1411,   618,  2087,  1261,  1263,  1412,  1592,  1376,  1377,  1437,
     634,  1303,   639,  1306,  1309,   640,   298,   645,   939,   677,
    1314,   242,  2100,  1413,   678,  1320, -1232,  1652,  1363,    67,
    1609,  1782,  1783,  1626,  1321,   243,  1438,  2137,   917,  1439,
    2140,  1442,  1414,    67,    68,   694,    67,  1176,  2148,  1329,
     680,  2151,   701,  1395,  1396,  1767,  1768,  1671,  1415,  2159,
     316,   702,  2162,  1048,  1049,  2188,  1234,  1397,  1443,  2169,
     707,  1444,  1079,   317,  1445,   709,  1378,  1102,  1183,  1184,
    2198,  1299,  1162,  1569,   715,  1379,  1380,  1416,    67,    68,
    1381,   244,    67,    68,    67,    68,  1402,  1814,  1815,  2508,
    1784,  1446,  1308,  1205,   721,  1575,  1398,  2672,  2217,  1785,
    1786,  1186,  1187,   299,  1787,   598,  1463,  1382,    67,    68,
    1842,  1025,   739,  1417,  1769,  2683,  1672,  1673,  1447,   436,
    1300,  1448,   245,  1770,  1771,  1026,  1418,  1487,  1581,  2600,
    1674,  1788,   246,   740,  1027,  1589,  1493,  1419,   766,  1440,
    2104,  2105,  1593,   767,  1028,  1301,  2113,  2114,    67,  1260,
    1521,   770,  1522,  1529,  1530,  1772,  1816,  1523,  1524,  1525,
    1884,  1885,  1717,   778,  1420,  1817,  1818,  1531,  1441,  1675,
    1532,   599,  1535,  1029,   300,  1496,  1421,   794,  1422,  1423,
    1497,   280,   795,   301,    67,    68,  1845,  2106,  1537,   437,
    1538,  2277,  1030,  2115,  1541,  1542,   808,  1819,    67,    68,
    1888,  1498,  1499,   811,  1500,  1501,   827,   828,  1548,  1549,
     600,   812,  1468,  1551,  1552,  1502,  1217,    72,  1424,  1553,
    2598,  1554,    73,   813,  1556,   818,  1557,  1503,  1504,  1718,
     821,  1449,  1613,  2756,   823,  1505,   426,  1031,  1506,  2759,
    2122,  2123,  1909,    86,   428,   844,  2622,   845,   601,   852,
    1560,  1561,    67,    68,  1847,  1507,  1400,  1401,    74,  2308,
    1450,  1508,  1509,   857,   859,  1510,  1604,  1605,  1606,  1607,
     438,  1608,  1610,  1032,  1534,  1612,   861,   863,   865,   879,
    2324,   884,    75,  1789,   889,   894,  1451,  2124,   895,  2789,
    1618,  2790,  1790,  1791,   896,   930,   897,  1033,  1719,  1720,
     920,  1621,   922,  1623,  1624,  1625,  1627,   924,  1967,   926,
    1630,  1631,  1721,  2107,  2108,    86,   929,   281,  1639,  2116,
    2117,   934,   282,  1511,   283,  1644,   938,    76,   942,  1645,
    1646,  1647,   940,   941,   953,   954,  1034,   966,  1035,  1792,
    1653,  2670,  2671,  1656,   974,  2674,   976,  2676,   977,  1053,
     984,  1722,  2362,   985,  1666,   986,  1051,  1668,  1042,  2681,
    2682,  2371,  1058,    87,  2686,  2687,  1059,  1108,  2690,  1109,
    2380,    77,  1110,  2691,  2692,  1512,  1562,  1563,    67,    68,
    1513,  1121,  2109,  1133,  1137,   723,    88,  1135,  2118,  1134,
      89,  2110,  2111,  1620,  1136,  1514,  1138,  2119,  2120,  1716,
    1139,  1140,  1723,  1564,  1515,  1724,  1725,  1141,  1726,  1142,
    1727,  1159,  1166,  2125,  2126,   682,  1729,  1164,  1730,  2727,
    1165,  1167,  2728,  2112,  1168,  1736,   472,  2731,  1169,  2121,
    1185,  1516,  1517,  2734,  1490,    87,  1188,  1194,  2737,    90,
     724,    67,    68,   725,   473,  1400,  1401,  2468,  1204,  1660,
      67,    68,  1518,  1208,  1211,    67,    68,  1862,    88,  1400,
    1401,   474,  2023,  2481,  1677,  1793,  1794,  1212,  2486,  1216,
    1218,  1219,  1252,   475,  1231,    91,  1232,  1253,   726,  1254,
    1257,  1259,  2127,    92,    93,   683,  1258,   710,  1536,  1310,
     476,  2128,  2129,   477,  1304,  1312,  1519,  1316,  1543,  1322,
    1843,  1844,  1846,  1402,   478,  1326,  2775,  2500,  1800,  2778,
    1327,    90,  1330,   727,  1331,  1332,  2504,  1801,  1802,  1340,
    1341,  1345,  1856,  2130,  1342,  1343,  1859,  2786,  1346,  1402,
    2788,  1347,   446,  1348,  1795,  1349,  1355,  1356,  1383,  2791,
    2792,  1358,  1359,  1796,  1797,   479,  1365,    91,  1798,  1887,
    1889,  1402,  1367,  1368,  1370,    92,    93,   711,  1384,  1897,
     728,  1385,  1907,   729,  1803,  2521,  1386,  1389,  2523,  1914,
    1390,  2524,  1391,  2525,  1404,  1799,    67,    68,  1890,  1405,
    1400,  1401,  1406,  1921,  1407,  1427,   730,  1426,  1923,   731,
    1432,  1433,  1925,  1452,  1928,  1929,  1181,  1931,  1933,  1934,
     732,  1937,  1841,   447,  1940,  1941,  1942,  1943,  1944,  1945,
    1946,  1947,  1950,  1952,  1953,  1636,  1637,  1955,  1956,  1957,
    1958,  1453,   448,   449,   450,  1456,  1454,  1964,  1965,   451,
    1455,  1457,  1968,  1969,  1970,  1466,  2592,  1972,  1973,  2595,
    1470,  2597,   452,  1473,  1474,  1475,  1480,  1483,   453,  1975,
    1976,  1481,  1977,  1978,  2609,  2610,    67,    68,  1894,   454,
    1482,  1896,   426,   427,   428,  1489,  1491,  2588,  2220,  1492,
    1912,  2624,  1528,  1080,  1540,  2596,  1546,  1547,  1918,  1555,
    1558,  1081,  2224,  2225,  1559,  1920,  2227,  1082,  2608,  1572,
    1804,  1805,  2231,  2613,  2233,  1577,  1578,  1583,  1617,  1584,
    1585,  1586,  1597,  1998,  1999,  1595,  1083,  1596,  2001,  1598,
    1599,  1600,  1628,  2003,  2006,  1615,  2008,  2009,  2010,  1616,
    2011,  2012,  1629,  2014,  1622,  1635,  2017,  2018,   222,  1084,
    1640,  1641,  1642,  1649,  1654,  2021,  1661,  1085,  1667,  1657,
    2282,  1658,  2025,  -446,  1669,  1678,  1679,  1680,  2030,  2031,
    1684,  1689,  1699,   223,  1692,  1693,  2033,  1709,  1715,  1806,
    1734,  1728,  2034,  1735,  1710,  1740,  1759,  1762,  1807,  1808,
     455,  1773,  1775,  1809,  1086,  1777,  1821,  1822,  1823,  1827,
    1828,  2294,  1087,  1830,  1831,  1832,   224,  1820,  1835,  1353,
    1838,  1855,  1858,   225,  1873,  2062,  1839,  1864,  1875,  1865,
    1810,  1874,  1876,   226,   227,  1870,  1877,  1879,  1880,  1881,
     228,  1886,  1882,  1906,  1926,  1924,  2005,  1930,  1938,  1883,
    1961,  2076,  2077,  1088,  1939,  1857,  2079,  1954,  1974,  1861,
    1979,   229,  2082,  1980,  1089,  1981,  2016,  1983,  1984,  1985,
    1986,  1987,  2131,  1988,  1989,  1990,  1991,   230,  1992,  1090,
    1993,  1994,  2142,  1995,  1996,  1892,  1997, -1234,  2013,  2015,
    2019, -1103,   231,  2032,  2035,  2078,  1910,  2037,  2038,  2039,
     232,  2040,  2071,  2072,  1915,  1916,  2073,  2074,  2080,  2081,
    2047,  2084,  2085,  2086,  2088,  1922,  2089,  2153,  2090,  2053,
     233,  2093,  2101,  2058,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,  2095,  2096,  2097,   234,  2102,  2297,  2103,  2132,
    2133,  2134,  2138,  2755,  2139,  2472,  2141,  2143,  2144,  2183,
    2184,  2145,  2186,  2149,  1402,  2150,  2473,  2152,  2154,  2474,
    2155,  2156,  2160,  2161,  2475,  2163,  2164,  2165,  2166,  1402,
    2199,  2200,  2201,  2202,  2203,  2204,  2205,  2206,  2207,  2170,
    2171,  2476,  2172,   235,  2174,  2175,  2177,   290,  2178,  2477,
    2180,  2187,  2189,  2213,   236,  2215,  2193,  1402,  2197,  2208,
    2209,  2211,  2222,  2446,  2447,  2448,  2210,  2212,  2452,  2216,
    2454,  2455,  2269,  2223,  2459,  2274,  2461,  2275,  2278,  2284,
    2229,  2298,  2299,   237,  2300,  2303,  2495,  2311,  2314,  2315,
    2316,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2317,  2343,  2256,  2257,  2258,  2259,  2260,  2261,  2262,
    2263,  2264,  2265,  2266,  2267,  2344,  2270,  2345,  2271,  2272,
    2273,  2346,  2348,   826,  2350,  2191,  2352,  2355,  2195,  2357,
     443,  2358,  2359,  2363,  2283,  2364,  2506,  2365,  2366,  2367,
    2368,  2372,  2373,  2248,  2374,  2696,   163,  2375,  2376,  2377,
    2381,  2382,  2478,  2383,  2390,  2393,  2401,  2404,  2407,  2408,
    2410,   164,  2413,   165,  2289,  2414,  2415,  2290,  2418,  2291,
    2424,  2293,  2428,  2445,  2295,  2502,  2296,  2503,  2480,  2510,
    2511,  2513,  2517,  2301,  2302,  2516,  2518,  2520,  2526,  2539,
    2306,  2527,  2307,   166,  2529,  2530,  2310,  2543,  2550,  2312,
     509,   167,   516,   519,  2556,   524,   528,  2560,  2563,  2570,
    2578,  2590,   807,  2601,  2602,  2696,  2603,  2604,  2605,  2606,
    2634,  2621,  2628,  2630,  2632,  2633,  2701,  2636,  2641,  2669,
    2675,  2742,  2678,   588,  2679,  2680,  2685,  2479,  2699,  2700,
    2702,  2711,  2721,  2729,  2735,  1753,  2732,  2744,  2351,  2745,
     603,   608,  2746,  2751,  2754,  2777,   168,  1763,  2764,  2693,
    2765,  2769,  2781,  2782,  2785,  2787,  2743,  2739,     0,  1143,
     343,     0,     0,     0,     0,  1824,  1825,   344,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2581,     0,     0,     0,     0,     0,     0,     0,  2584,     0,
       0,  2416,   688,  2313,     0,     0,   169,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     708,     0,   170,   171,  2192,     0,     0,     0,     0,   172,
       0,   173,     0,     0,     0,     0,     0,  2619,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2349,     0,
       0,     0,  2422,     0,     0,     0,   174,     0,     0,  2218,
       0,     0,     0,     0,     0,  2429,  2430,  2431,  2432,  2433,
    2434,  2435,  2436,  2437,  2438,  2439,     0,     0,     0,     0,
       0,  2443,     0,     0,     0,     0,     0,     0,  2449,     0,
       0,  2453,     0,     0,     0,     0,     0,  2460,     0,     0,
    2462,  2463,  2464,  2465,  2466,  2467,  1402,  2469,  2470,  2471,
       0,   692,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   175,  1402,  2482,  2483,  2484,  2485,  1402,  2487,  2488,
    2489,  2490,  2491,  2492,     0,  2494,   822,  1402,  2498,  2499,
       0,     0,     0,     0,     0,     0,     0,   829,     0,     0,
       0,     0,     0,  2420,     0,  2505,   837,     0,     0,  2507,
       0,     0,     0,  2509,     0,     0,     0,  2512,   779,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2441,     0,     0,     0,     0,     0,     0,   345,
       0,   346,  2451,     0,     0,     0,     0,     0,  2458,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2531,     0,     0,
       0,     0,     0,     0,     0,   868,     0,     0,   870,   871,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   875,     0,     0,     0,     0,   878,     0,     0,     0,
       0,     0,     0,     0,     0,   890,   892,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
    2572,     0,     0,     0,  2574,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2575,  2576,     0,     0,     0,     0,
       0,  2580,     0,     0,     0,     0,     0,     0,  2583,   935,
     936,   937,     0,     0,     0,     0,  1402,     0,  2589,     0,
     866,  2593,  2594,     0,  1402,     0,     0,   872,     0,     0,
     873,     0,     0,     0,     0,   874,     0,  1402,     0,   876,
    2611,  2612,  1402,  2614,  2615,  2616,  2617,  2618,  2092,     0,
    2620,     0,     0,     0,  2623,     0,  2098,  2099,     0,     0,
       0,     0,     0,     0,     0,  2631,     0,     0,  1078,     0,
    2635,  2135,  2136,     0,     0,     0,     0,  2568,     0,     0,
       0,     0,  2146,  2147,     0,     0,     0,  2644,     0,  1336,
       0,     0,     0,  2157,  2158,     0,     0,     0,     0,   933,
       0,     0,     0,  2167,  2168,     0,     0,     0,     0,  2173,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2176,
       0,  1387,  2655,     0,     0,     0,     0,     0,  2660,     0,
    2662,     0,     0,     0,  2501,     0,  2666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1402,
    2673,     0,     0,     0,     0,     0,     0,     0,     0,  2309,
       0,     0,     0,     0,     0,     0,  2716,  1402,  2684,     0,
       0,     0,  2688,  2319,  2320,  2321,     0,     0,  2323,     0,
    2325,  2326,     0,     0,  2328,  2329,  2330,     0,     0,  2332,
    2333,  2707,     0,  2336,     0,  2338,  2339,     0,  2341,  1116,
       0,     0,     0,     0,     0,     0,  1122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2719,     0,     0,     0,
       0,     0,  2724,     0,  2726,     0,     0,  1221,     0,  2658,
       0,  2730,     0,     0,     0,     0,  2733,  2664,     0,  1226,
       0,  2736,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2747,     0,     0,     0,     0,     0,
       0,  1236,  1237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1402,     0,     0,  1402,  2757,     0,     0,  2758,
       0,  1402,  2760,     0,     0,  1256,     0,     0,     0,     0,
       0,     0,     0,  2766,     0,     0,     0,     0,     0,     0,
       0,     0,  2417,  2776,     0,  2421,  2779,     0,     0,     0,
    2425,     0,     0,     0,  2426,     0,     0,     0,     0,     0,
       0,     0,     0,  1220,     0,     0,     0,  2607,     0,     0,
    1222,  1402,  1325,  1402,  2442,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2625,     0,     0,
       0,  2629,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2753,  1239,  2354,     0,     0,     0,  1243,     0,     0,  1246,
       0,     0,  2356,     0,     0,     0,  2360,  2361,     0,     0,
       0,  1255,     0,     0,     0,  2369,  2370,     0,     0,     0,
    2771,     0,     0,  2774,  2378,  2379,     0,  1467,     0,     0,
    2384,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2394,  2395,     0,     0,     0,  2515,     0,     0,     0,     0,
       0,  2405,  2406,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2409,     0,     0,     0,     0,     0,     0,     0,
       0,  2411,     0,  2412,     0,  2522,     0,   646,   647,  1527,
       0,  1737,  1738,  1739,     0,     0,     0,     0,     0,  1533,
       0,  1741,  1742,  1743,     0,     0,     0,     0,  1754,  1755,
    1756,     0,     0,  1757,  1758,     0,  1760,  1761,     0,  1392,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2244,     0,   648,     0,     0,  1833,  1834,     0,   649,
    1836,  1837,  2245,     0,     0,     0,   650,     0,   651,     0,
       0,     0,     0,   652,     0,     0,   653,     0,     0,  2569,
       0,     0,   654,     0,     0,     0,     0,  1080,  2246,     0,
       0,     0,   655,     0,     0,  1081,     0,     0,   656,     0,
    2577,  1082,     0,     0,     0,     0,   657,     0,     0,     0,
    2582,  1611,     0,     0,     0,     0,  2585,  2586,     0,     0,
    1083,   658,     0,     0,  2247,     0,     0,     0,  1619,  2763,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     659,     0,     0,  1084,     0,     0,     0,     0,     0,     0,
       0,  1085,     0,     0,     0,     0,   660,     0,     0,     0,
       0,  1643,     0,     0,     0,   661,   662,     0,     0,     0,
       0,     0,  1650,     0,  2533,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2542,   663,     0,     0,  1086,     0,
       0,     0,     0,  2544,     0,     0,  1087,     0,     0,  1676,
       0,     0,  2553,     0,  1683,     0,   664,     0,     0,  2555,
       0,     0,     0,     0,     0,    67,    68,     0,     0,   665,
    2559,   666,     0,  1614,     0,     0,  2562,  2656,     0,  2564,
       0,   110,  2565,     0,   667,     0,     0,  1088,     0,   668,
       0,     0,     0,     0,     0,   669,     0,  2668,  1089,     0,
       0,   285,   670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1638,  1090,     0,     0,     0,     0,   112,     0,
     671,     0,     0,  2248,     0,  2249,     0,  1648,     0,     0,
       0,     0,     0,   672,   673,     0,   674,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,  2717,     0,  2718,
       0,  2720,     0,  2722,     0,  2723,   675,  2725,     0,  2250,
       0,     0,     0,     0,     0,     0,     0,  1840,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2645,     0,
       0,     0,  2647,     0,     0,  1860,   115,     0,     0,  2648,
       0,     0,     0,     0,     0,  2651,  2750,     0,     0,  2653,
       0,     0,  2654,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1893,     0,     0,  1895,     0,     0,     0,
       0,     0,     0,   286,     0,  1911,  1913,     0,     0,     0,
       0,  2083,     0,  1917,     0,     0,     0,     0,     0,     0,
    1919,  2780,     0,   120,  2091,     0,     0,     0,   121,     0,
       0,     0,     0,     0,  2094,     0,     0,     0,   287,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1959,     0,     0,  1962,  1963,     0,     0,     0,     0,     0,
       0,     0,     0,  1971,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   288,     0,     0,
       0,     0,     0,     0,     0,     0,  2179,     0,  1908,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,  2000,     0,     0,   109,     0,     0,
       0,  2004,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,  1960,  2020,
       0,     0,     0,     0,  1966,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,  2029,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,  2036,     0,     0,     0,     0,  2041,
       0,     0,  2043,  2044,  2045,  2046,  2048,     0,  2050,     0,
       0,  2051,     0,     0,  2052,  2054,  2055,  2056,  2057,  2059,
       0,  2060,  2061,     0,     0,     0,  2063,  2064,  2065,     0,
    2066,  2067,     0,     0,   113,     0,  2068,  2069,     0,     0,
       0,  2070,     0,     0,  2002,     0,  2075,     0,     0,     0,
    2007,   114,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2022,     0,     0,     0,     0,     0,
       0,  2028,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2042,     0,     0,
       0,     0,     0,     0,  2049,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,   118,   119,
       0,     0,     0,     0,   120,     0,     0,     0,     0,   121,
       0,     0,     0,  2353,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2182,     0,     0,  2185,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2190,     0,     0,  2194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2385,  2386,  2387,  2388,  2389,     0,  2391,
    2392,     0,     0,     0,  2396,  2397,  2398,  2399,  2400,     0,
    2402,  2403,  2214,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,    67,    68,     0,     0,     0,
     152,  2181,  2268,     0,   153,   154,     0,     0,     0,     0,
       0,   110,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2196,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,     0,     0,     0,  2219,     0,  2221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2226,     0,  2228,  2305,     0,     0,  2230,     0,
    2232,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2335,     0,     0,     0,
    2276,     0,     0,  2280,  2281,     0,     0,     0,     0,     0,
       0,     0,  2285,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2532,   115,     0,  2534,  2535,
    2536,  2537,  2538,     0,  2540,  2541,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2292,  2545,  2546,  2547,  2548,
    2549,     0,  2551,  2552,     0,  2554,    67,    68,     0,     0,
       0,  2304,     0,     0,     0,  2557,  2558,     0,     0,     0,
       0,     0,   110,     0,     0,     0,  2561,     0,     0,     0,
       0,     0,  2318,   120,     0,     0,     0,  2322,   121,     0,
       0,     0,     0,  2327,     0,     0,     0,     0,  2331,     0,
       0,     0,  2334,     0,     0,  2337,     0,     0,  2340,     0,
    2342,     0,     0,   527,     0,     0,  2347,     0,  2419,     0,
       0,  2423,     0,     0,     0,     0,     0,     0,   110,     0,
       0,  2427,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2440,     0,     0,
    2444,     0,     0,     0,   113,     0,     0,  2450,     0,     0,
       0,     0,  2456,  2457,     0,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,   115,     0,     0,
     113,     0,     0,  2646,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2649,     0,  2650,     0,     0,     0,
    2652,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2519,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2528,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,     0,     0,  2493,
       0,     0,     0,     0,     0,     0,  2712,     0,     0,  2713,
     120,     0,  2714,     0,  2715,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2567,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,   113,     0,
       0,     0,     0,  2587,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2599,     0,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2640,     0,     0,  2566,     0,     0,
       0,     0,     0,  2643,  2571,     0,     0,     0,  2573,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2579,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   121,  2657,  2659,     0,  2661,     0,     0,
       0,     0,  2663,  2665,     0,     0,     0,  2667,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
       0,  2689,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2709,     0,     0,     0,     0,  2710,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2677,     0,     0,     0,     0,     0,     0,     2,     0,     0,
       3,     0,     4,     0,     0,  2752,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     5,     0,     0,     0,     0,
       6,     7,  2761,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,    11,     0,  2770,     0,     0,  2773,     0,
      12,   110,    13,    14,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    17,
    2738,     0,     0,     0,     0,     0,     0,   500,   501,     0,
      18,   502,     0,     0,    19,   604,   110,    20,     0,     0,
    2748,  2749,    21,    22,     0,     0,     0,     0,     0,    23,
       0,     0,     0,   503,     0,     0,    24,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,    25,
       0,     0,    26,    27,    28,   605,     0,    29,    30,     0,
       0,     0,     0,  2772,     0,     0,     0,   967,     0,     0,
      31,     0,     0,   968,     0,     0,     0,     0,     0,     0,
       0,  2783,     0,     0,  2784,    32,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,   115,     0,   113,    35,
       0,     0,     0,     0,     0,     0,     0,    36,     0,   504,
      37,   606,     0,    38,     0,    39,     0,    40,     0,     0,
       0,     0,    41,     0,     0,     0,   505,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
      43,     0,     0,     0,     0,   506,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,    44,    45,   121,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      47,     0,     0,     0,     0,     0,    48,     0,     0,    49,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   507,     0,     0,     0,
      51,     0,     0,   121,     0,     0,    52,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,   508,     0,     0,   607,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   989,
     990,   991,     0,     0,  1264,  1265,  1266,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   992,   993,     0,
       0,   994,  1267,  1268,   995,   110,  1269,     0,     0,     0,
       0,   996,     0,  1270,     0,   997,  1271,     0,     0,     0,
    1272,     0,     0,   998,   999,     0,     0,     0,  1273,  1274,
       0,  1000,  1001,   110,     0,     0,  1275,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,  1002,     0,
       0,     0,     0,     0,  1003,     0,     0,  1004,  1005,     0,
       0,  1006,  1276,  1277,     0,     0,  1278,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,  1007,     0,     0,
       0,     0,  1279,     0,     0,     0,     0,   113,   110,     0,
       0,     0,     0,     0,     0,     0,  1008,     0,     0,     0,
       0,  1280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,     0,  1009,
       0,     0,     0,     0,  1281,     0,     0,     0,   514,     0,
       0,     0,     0,  1282,     0,     0,     0,     0,     0,     0,
     115,  1010,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,  1011,
     113,  1012,     0,     0,  1283,     0,  1013,  1014,     0,     0,
       0,  1284,  1285,     0,     0,     0,     0,     0,     0,     0,
    1015,  1016,     0,     0,     0,     0,  1286,   120,     0,     0,
    1017,  1018,   121,     0,     0,     0,  1287,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   115,     0,   120,  1019,     0,  1020,     0,
     121,  1288,     0,  1289,     0,     0,     0,     0,     0,     0,
    1021,     0,  1022,  1290,     0,     0,     0,     0,  1023,     0,
       0,     0,     0,  1291,     0,     0,     0,     0,   518,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1361,
       0,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,  1024,     0,     0,   121,     0,  1292,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
     515,     0,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  1324,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  1362,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
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
       0,     0,     0,   199,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,   202,     0,
       0,   203,     0,     0,     0,     0,     0,     0,     0,     0,
     204,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   217
};

static const yytype_int16 yycheck[] =
{
       4,    50,  1445,   872,   873,   874,     0,  1645,    12,  1647,
     661,   662,     4,  1136,   666,  1138,     4,  2528,     5,     4,
       3,     4,     5,     5,     4,    32,    32,     3,     4,    33,
       5,    17,     5,     5,     5,    46,    40,    61,     3,     4,
      50,  1164,  1165,  1166,     5,    49,     3,     4,    52,     4,
       3,     4,    20,    66,    58,    97,    56,     4,    62,    17,
      36,    65,     3,     4,   933,    69,    70,    26,   166,    73,
      37,    36,    76,    77,    66,    40,    80,     4,     3,     4,
      84,     3,     4,     3,     4,    89,    34,     3,     4,    99,
      27,     3,     4,     3,     4,    36,     5,   990,   102,   163,
     104,   105,   106,   107,   961,   103,    45,   964,   105,     4,
       5,    48,    99,    64,    51,    66,   166,   443,   105,   123,
      59,   130,   220,   133,   981,    62,   118,     3,     4,    21,
     456,    17,    33,   208,  2695,    66,     3,     4,    17,    66,
     154,    16,    81,     3,     4,   110,    27,    56,    85,     4,
      40,    87,   111,   129,   158,   190,    65,   147,    61,   107,
       5,   100,    78,   122,   129,   102,   237,   180,   182,    87,
     220,    66,     3,     4,     3,     4,   164,   116,   182,  2740,
     119,     3,     4,   187,   255,   283,    31,   185,   129,     4,
       5,   118,   277,    88,   258,   192,    33,   156,   156,   141,
      21,    14,    27,   225,   143,   144,    88,   199,   243,   121,
      20,   211,   254,   205,   206,   116,    21,    16,   154,    98,
     110,   207,   297,   118,    21,   275,   191,    21,   185,   180,
      59,   240,   185,   190,   201,   190,   154,  2748,  2749,     3,
       4,   136,   246,   202,   241,    27,   295,    57,    61,     5,
     222,   275,   200,   264,   170,    21,   215,   196,   262,   263,
     912,   229,   252,   185,   239,   204,   191,   274,   274,   226,
     241,   284,   199,   277,   298,    66,    40,   287,   205,   206,
       4,   285,   286,   277,   288,   289,   187,   291,   189,   262,
     191,   192,   239,   250,   279,    59,   288,   301,   199,   279,
     286,   191,   211,   118,   199,   309,   310,   294,     4,   285,
     205,   206,    15,   214,   297,   297,   304,   278,   193,    22,
     285,   207,   261,   262,    27,     3,     4,   243,   332,   333,
     334,    34,   336,   284,     4,   190,   340,   341,   295,   220,
     165,   233,   295,   203,   285,   337,   110,   351,   352,   341,
     342,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     285,   288,  1014,   367,     4,   285,   692,   257,   372,   373,
    1239,    74,   275,   295,   187,   285,   380,  1246,    56,   383,
    1032,   338,   339,   165,   199,   338,   339,   288,   243,   220,
     205,   206,    37,   288,   333,   298,   400,   401,   220,   294,
     286,     5,    47,   407,   408,   409,   343,   411,   233,   285,
     337,   221,   233,  1064,   341,   342,   338,   339,   285,     3,
       4,   425,   118,     4,   234,   429,    66,   191,   233,    74,
     434,   435,   436,   437,   438,   439,   233,   441,    27,   233,
     444,   445,   337,   256,  1095,   340,   341,   342,   118,  1572,
     275,   233,   265,   457,    14,    15,    12,    78,    37,    27,
     163,   164,   165,   166,   167,   168,   169,   233,    47,   172,
     173,   174,   175,   288,    13,    56,    27,   220,   118,   294,
      83,    40,     3,     4,   297,   295,     4,     4,    83,   304,
      61,     4,   225,   275,     0,    74,    99,    53,     6,    93,
     105,    61,   147,   199,    99,     5,    40,   511,   512,   205,
     206,   837,   116,    30,  1407,    71,   110,   281,    30,    40,
      22,  1378,   337,   261,  1381,   529,   341,   342,    63,   199,
       5,    63,   275,   211,   135,   205,   206,   586,    56,   184,
    1433,   442,     3,     4,   100,     5,    48,    49,   119,   170,
     876,   110,   556,    40,    14,    15,    61,   260,   261,   199,
      62,   117,  1455,     4,   120,   205,   206,     4,   147,   104,
     173,    61,   104,   174,   131,   131,   110,   626,     4,   583,
      54,   226,    94,   279,   287,   189,    12,   192,    66,   110,
     122,   185,   288,    14,    15,     5,   645,     5,   166,     4,
       5,    61,   247,    40,    61,   184,   108,   109,    44,   122,
     213,   119,    31,   617,   119,   166,    90,     5,   288,   203,
       3,     4,   243,   110,   327,   328,   329,   187,   188,   119,
     211,   220,   191,  1285,   535,   239,   241,   282,     5,   643,
      61,   337,   159,   246,  1296,   341,   342,   186,   288,   161,
     128,    87,   220,   298,   191,    60,   660,   191,   262,   663,
     121,    66,   119,   137,   154,  2303,   567,   337,   247,   220,
     191,   341,   342,   110,   152,    61,   233,   681,   682,   683,
     684,    63,    61,   687,   167,   689,     4,   691,   201,   693,
      66,   208,   175,   211,   265,   230,   256,   337,   230,   220,
     116,   341,   342,   117,   191,   265,   266,     6,   113,   244,
     245,   277,   244,   245,     5,     5,   233,   252,   220,   298,
     222,   770,   104,   128,    14,    15,    17,   187,   188,   285,
      33,   243,   167,   119,   239,   140,   248,   297,   121,     5,
     119,   146,   147,     3,     4,    24,    25,   152,    14,    15,
     228,     5,    12,   189,   191,   759,   760,   761,   762,   763,
     265,   765,   766,   767,   768,   239,   187,   188,    61,    61,
     257,    61,    14,    15,    26,   265,   780,   781,    89,  1648,
     784,   785,   786,   787,   788,   789,   790,   791,   792,    88,
    1116,    61,   796,   797,    16,    61,   256,   299,   203,   277,
     335,   336,   239,   335,   336,   265,   266,    82,   265,    66,
     270,   815,   816,   817,    14,    15,    88,   222,    97,    61,
     119,   226,   226,   228,    61,    40,   119,   119,   832,   833,
     834,    61,   836,   276,   838,   256,   840,   297,    61,    22,
       3,     4,    30,   115,   265,   266,   251,   252,   230,   119,
      89,    66,    72,   857,   259,   859,  1979,  1980,  1981,   111,
      31,    61,   244,   245,     5,   869,    49,     3,     4,    52,
     122,   255,   277,   877,   149,   255,   297,   261,   882,   265,
      82,   261,   119,     4,    99,     5,   265,     4,     5,   119,
     105,     4,  1749,   897,   898,   110,   119,   187,   188,    82,
       5,   905,     4,   907,   908,     5,    70,     5,   611,     5,
     914,   183,  1769,   128,     4,   919,     0,  1243,   967,     3,
       4,   187,   188,    59,   928,   197,   109,  1784,   333,   112,
    1787,    22,   147,     3,     4,     4,     3,     4,  1795,   943,
       5,  1798,     4,   218,   219,   187,   188,   149,   163,  1806,
     202,     4,  1809,   335,   336,  1848,   857,   232,    49,  1816,
       5,    52,   665,   215,    55,     4,   256,   670,     4,     5,
    1863,   159,   265,   265,    97,   265,   266,   192,     3,     4,
     270,   253,     3,     4,     3,     4,   990,   187,   188,    59,
     256,    82,    17,    12,   119,   265,   271,  2593,  1891,   265,
     266,     4,     5,   167,   270,   147,  1010,   297,     3,     4,
       5,    66,     5,   228,   256,  2611,   218,   219,   109,    40,
     208,   112,   294,   265,   266,    80,   241,  1031,   265,  2472,
     232,   297,   304,     4,    89,   265,  1040,   252,   262,   222,
      14,    15,   265,     4,    99,   233,    14,    15,     3,     4,
    1054,     4,  1056,     4,     5,   297,   256,  1061,  1062,  1063,
       4,     5,    82,     4,   279,   265,   266,  1071,   251,   271,
    1074,   213,  1076,   128,   238,    22,   291,     4,   293,   294,
      27,   200,     5,   247,     3,     4,     5,    61,  1092,   110,
    1094,  1960,   147,    61,  1098,  1099,     4,   297,     3,     4,
       5,    48,    49,     4,    51,    52,   431,   432,  1112,  1113,
     252,     4,  1013,  1117,  1118,    62,   819,   185,   333,  1123,
    2470,  1125,   190,     4,  1128,     4,  1130,    74,    75,   149,
       5,   222,  1181,  2729,     5,    82,     9,   192,    85,  2735,
      14,    15,  1468,    28,    11,     5,  2496,   261,   290,   167,
      42,    43,     3,     4,     5,   102,     7,     8,   226,  2028,
     251,   108,   109,     4,     4,   112,  1170,  1171,  1172,  1173,
     191,  1175,  1176,   228,  1075,  1179,   190,   175,   167,     4,
    2049,   193,   250,     5,   193,     5,   277,    61,     5,  2785,
    1194,  2787,    14,    15,     4,   221,   193,   252,   218,   219,
      66,  1205,    66,  1207,  1208,  1209,  1210,    66,  1534,   220,
    1214,  1215,   232,   187,   188,    28,     5,   336,  1222,   187,
     188,     5,   341,   170,   343,  1229,     4,   295,   193,  1233,
    1234,  1235,     4,     4,    87,     5,   291,    87,   293,    61,
    1244,  2591,  2592,  1247,     5,  2595,     4,  2597,     4,    17,
       5,   271,  2109,     5,  1258,     4,    99,  1261,     5,  2609,
    2610,  2118,     4,   148,  2614,  2615,     5,    17,  2618,    17,
    2127,   339,     4,  2623,  2624,   222,   168,   169,     3,     4,
     227,     4,   256,     4,    87,    61,   171,     5,   256,    97,
     175,   265,   266,  1194,     5,   242,     4,   265,   266,  1303,
       5,     5,  1306,   195,   251,  1309,  1310,    87,  1312,     5,
    1314,     4,     4,   187,   188,    40,  1320,     5,  1322,  2669,
       5,     5,  2672,   297,     5,  1329,    53,  2677,     5,   297,
       4,   278,   279,  2683,  1037,   148,     4,    12,  2688,   224,
     116,     3,     4,   119,    71,     7,     8,  2240,     5,  1250,
       3,     4,   299,    12,     4,     3,     4,     5,   171,     7,
       8,    88,   175,  2256,  1265,   187,   188,     4,  2261,     4,
       4,     4,   164,   100,     5,   260,     5,     5,   154,     4,
       4,     4,   256,   268,   269,   110,     5,    40,  1091,   251,
     117,   265,   266,   120,    20,   251,   343,   279,  1101,     5,
    1404,  1405,  1406,  1407,   131,     4,  2756,  2276,     5,  2759,
       5,   224,     5,   189,     5,     5,  2285,    14,    15,     4,
       4,   263,  1426,   297,     5,     5,  1430,  2777,   263,  1433,
    2780,     5,    35,     5,   256,     5,     4,     4,     4,  2789,
    2790,     5,     5,   265,   266,   172,     5,   260,   270,  1453,
    1454,  1455,     5,     5,     5,   268,   269,   110,     4,  1463,
     236,     5,  1466,   239,    61,  2334,     5,     4,  2337,  1473,
       5,  2340,     5,  2342,   233,   297,     3,     4,     5,   233,
       7,     8,   233,  1487,   105,     5,   262,   233,  1492,   265,
     135,   105,  1496,    40,  1498,  1499,     6,  1501,  1502,  1503,
     276,  1505,  1403,   106,  1508,  1509,  1510,  1511,  1512,  1513,
    1514,  1515,  1516,  1517,  1518,  1218,  1219,  1521,  1522,  1523,
    1524,   233,   125,   126,   127,     5,   233,  1531,  1532,   132,
     105,   207,  1536,  1537,  1538,   237,  2464,  1541,  1542,  2467,
      40,  2469,   145,   237,   207,     5,     4,   207,   151,  1553,
    1554,     5,  1556,  1557,  2482,  2483,     3,     4,  1459,   162,
       5,  1462,     9,    10,    11,   207,     4,  2460,  1894,     4,
    1471,  2499,     5,    91,     5,  2468,     5,     5,  1479,   110,
     110,    99,  1908,  1909,     4,  1486,  1912,   105,  2481,     5,
     187,   188,  1918,  2486,  1920,     5,     5,     4,    12,     5,
       5,     4,     4,  1607,  1608,     5,   124,     5,  1612,     5,
       5,     4,     6,  1617,  1618,     5,  1620,  1621,  1622,     5,
    1624,  1625,     4,  1627,    12,     5,  1630,  1631,    19,   147,
       4,     4,     4,     4,     4,  1639,     5,   155,     4,    38,
    1966,    38,  1646,     0,     5,   233,   233,   233,  1652,  1653,
     233,   135,   166,    44,   233,   233,  1660,     4,   203,   256,
       4,   193,  1666,     4,   241,     4,     4,     4,   265,   266,
     273,     5,     5,   270,   192,     5,     5,     5,     5,     4,
       4,  2007,   200,     5,     4,     4,    77,   263,     4,   960,
       5,     5,     5,    84,   301,  1699,  1399,   233,     4,   233,
     297,   301,     4,    94,    95,   233,     4,     4,     4,     4,
     101,     4,   301,     4,   220,     5,  1617,   220,   220,   301,
       5,  1725,  1726,   241,   220,  1428,  1730,   220,     5,  1432,
       5,   122,  1736,     5,   252,     4,     6,     5,     5,     4,
       4,     4,   263,     5,     5,     4,     4,   138,     5,   267,
       5,     4,   263,     5,     5,  1458,     4,     0,     5,     4,
       4,   277,   153,     4,     4,     4,  1469,     5,     5,     5,
     161,     5,     5,     5,  1477,  1478,     5,     5,     5,     4,
    1681,     5,     5,     5,     4,  1488,     4,   263,     5,  1690,
     181,     4,     4,  1694,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     5,     5,     5,   216,     4,    12,     5,     5,
       5,     5,     4,  2726,     4,   344,     5,     5,     5,  1843,
    1844,     5,  1846,     4,  1848,     4,   344,     5,     5,   344,
       5,     5,     4,     4,   344,     5,     5,     5,     5,  1863,
    1864,  1865,  1866,  1867,  1868,  1869,  1870,  1871,  1872,     4,
       4,   344,     5,   264,     4,     4,     4,    33,     4,   344,
       5,     5,     5,  1887,   275,  1889,     5,  1891,     5,     4,
       4,     4,  1896,  2219,  2220,  2221,     5,     4,  2224,     5,
    2226,  2227,     5,  1907,  2230,     4,  2232,     4,     4,     4,
    1914,     5,     5,   304,     4,     4,   297,     5,     5,     5,
       5,  1925,  1926,  1927,  1928,  1929,  1930,  1931,  1932,  1933,
    1934,     5,     5,  1937,  1938,  1939,  1940,  1941,  1942,  1943,
    1944,  1945,  1946,  1947,  1948,     5,  1950,     5,  1952,  1953,
    1954,     5,     4,   430,     5,  1856,     4,     4,  1859,     5,
     116,     5,     5,     4,  1968,     4,  2292,     5,     5,     5,
       5,     4,     4,   277,     5,  2627,    29,     5,     5,     5,
       4,     4,   344,     5,     4,     4,     4,     4,     4,     4,
       4,    44,     4,    46,  1998,     4,     4,  2001,     4,  2003,
       4,  2005,     4,     4,  2008,     4,  2010,     4,   344,     5,
       5,     4,     4,  2017,  2018,     5,     5,     5,     4,     4,
    2024,     5,  2026,    76,     5,     5,  2030,     4,     4,  2033,
     186,    84,   188,   189,     4,   191,   192,     4,     4,     4,
       4,     4,   387,     5,     4,  2697,     5,     5,     5,     4,
       6,     5,     5,     5,     5,     4,     6,     5,     5,     4,
       4,   344,     5,   219,     4,     4,     4,  2251,     5,     5,
       4,     4,     4,     4,     4,  1346,     5,     5,  2082,     5,
     236,   237,     4,     4,     4,     4,   139,  1358,     5,  2625,
       5,     5,     5,     5,     4,     4,  2697,  2693,    -1,   726,
      16,    -1,    -1,    -1,    -1,  1376,  1377,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2454,    -1,
      -1,  2180,   288,  2034,    -1,    -1,   189,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     306,    -1,   205,   206,  1857,    -1,    -1,    -1,    -1,   212,
      -1,   214,    -1,    -1,    -1,    -1,    -1,  2493,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2079,    -1,
      -1,    -1,  2186,    -1,    -1,    -1,   239,    -1,    -1,  1892,
      -1,    -1,    -1,    -1,    -1,  2199,  2200,  2201,  2202,  2203,
    2204,  2205,  2206,  2207,  2208,  2209,    -1,    -1,    -1,    -1,
      -1,  2215,    -1,    -1,    -1,    -1,    -1,    -1,  2222,    -1,
      -1,  2225,    -1,    -1,    -1,    -1,    -1,  2231,    -1,    -1,
    2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,  2243,
      -1,   290,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2263,
    2264,  2265,  2266,  2267,    -1,  2269,   422,  2271,  2272,  2273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   433,    -1,    -1,
      -1,    -1,    -1,  2184,    -1,  2289,   442,    -1,    -1,  2293,
      -1,    -1,    -1,  2297,    -1,    -1,    -1,  2301,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2213,    -1,    -1,    -1,    -1,    -1,    -1,   235,
      -1,   237,  2223,    -1,    -1,    -1,    -1,    -1,  2229,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2351,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   511,    -1,    -1,   514,   515,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   527,    -1,    -1,    -1,    -1,   532,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   541,   542,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,
    2424,    -1,    -1,    -1,  2428,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2438,  2439,    -1,    -1,    -1,    -1,
      -1,  2445,    -1,    -1,    -1,    -1,    -1,    -1,  2452,   605,
     606,   607,    -1,    -1,    -1,    -1,  2460,    -1,  2462,    -1,
     509,  2465,  2466,    -1,  2468,    -1,    -1,   516,    -1,    -1,
     519,    -1,    -1,    -1,    -1,   524,    -1,  2481,    -1,   528,
    2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  1759,    -1,
    2494,    -1,    -1,    -1,  2498,    -1,  1767,  1768,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2509,    -1,    -1,   664,    -1,
    2514,  1782,  1783,    -1,    -1,    -1,    -1,  2418,    -1,    -1,
      -1,    -1,  1793,  1794,    -1,    -1,    -1,  2531,    -1,   948,
      -1,    -1,    -1,  1804,  1805,    -1,    -1,    -1,    -1,   588,
      -1,    -1,    -1,  1814,  1815,    -1,    -1,    -1,    -1,  1820,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1830,
      -1,   980,  2566,    -1,    -1,    -1,    -1,    -1,  2572,    -1,
    2574,    -1,    -1,    -1,  2277,    -1,  2580,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2593,
    2594,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2029,
      -1,    -1,    -1,    -1,    -1,    -1,  2655,  2611,  2612,    -1,
      -1,    -1,  2616,  2043,  2044,  2045,    -1,    -1,  2048,    -1,
    2050,  2051,    -1,    -1,  2054,  2055,  2056,    -1,    -1,  2059,
    2060,  2635,    -1,  2063,    -1,  2065,  2066,    -1,  2068,   688,
      -1,    -1,    -1,    -1,    -1,    -1,   695,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2660,    -1,    -1,    -1,
      -1,    -1,  2666,    -1,  2668,    -1,    -1,   823,    -1,  2570,
      -1,  2675,    -1,    -1,    -1,    -1,  2680,  2578,    -1,   835,
      -1,  2685,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2708,    -1,    -1,    -1,    -1,    -1,
      -1,   867,   868,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2726,    -1,    -1,  2729,  2730,    -1,    -1,  2733,
      -1,  2735,  2736,    -1,    -1,   891,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2747,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2182,  2757,    -1,  2185,  2760,    -1,    -1,    -1,
    2190,    -1,    -1,    -1,  2194,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   822,    -1,    -1,    -1,  2480,    -1,    -1,
     829,  2785,   938,  2787,  2214,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2500,    -1,    -1,
      -1,  2504,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2721,   870,  2093,    -1,    -1,    -1,   875,    -1,    -1,   878,
      -1,    -1,  2103,    -1,    -1,    -1,  2107,  2108,    -1,    -1,
      -1,   890,    -1,    -1,    -1,  2116,  2117,    -1,    -1,    -1,
    2751,    -1,    -1,  2754,  2125,  2126,    -1,  1013,    -1,    -1,
    2131,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2141,  2142,    -1,    -1,    -1,  2305,    -1,    -1,    -1,    -1,
      -1,  2152,  2153,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2172,    -1,  2174,    -1,  2335,    -1,     4,     5,  1065,
      -1,  1330,  1331,  1332,    -1,    -1,    -1,    -1,    -1,  1075,
      -1,  1340,  1341,  1342,    -1,    -1,    -1,    -1,  1347,  1348,
    1349,    -1,    -1,  1352,  1353,    -1,  1355,  1356,    -1,   988,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    60,    -1,    -1,  1385,  1386,    -1,    66,
    1389,  1390,    66,    -1,    -1,    -1,    73,    -1,    75,    -1,
      -1,    -1,    -1,    80,    -1,    -1,    83,    -1,    -1,  2419,
      -1,    -1,    89,    -1,    -1,    -1,    -1,    91,    92,    -1,
      -1,    -1,    99,    -1,    -1,    99,    -1,    -1,   105,    -1,
    2440,   105,    -1,    -1,    -1,    -1,   113,    -1,    -1,    -1,
    2450,  1177,    -1,    -1,    -1,    -1,  2456,  2457,    -1,    -1,
     124,   128,    -1,    -1,   128,    -1,    -1,    -1,  1194,  2742,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     147,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,   163,    -1,    -1,    -1,
      -1,  1227,    -1,    -1,    -1,   172,   173,    -1,    -1,    -1,
      -1,    -1,  1238,    -1,  2355,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2365,   192,    -1,    -1,   192,    -1,
      -1,    -1,    -1,  2374,    -1,    -1,   200,    -1,    -1,  1265,
      -1,    -1,  2383,    -1,  1270,    -1,   213,    -1,    -1,  2390,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,   226,
    2401,   228,    -1,  1182,    -1,    -1,  2407,  2567,    -1,  2410,
      -1,    19,  2413,    -1,   241,    -1,    -1,   241,    -1,   246,
      -1,    -1,    -1,    -1,    -1,   252,    -1,  2587,   252,    -1,
      -1,    39,   259,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1221,   267,    -1,    -1,    -1,    -1,    56,    -1,
     277,    -1,    -1,   277,    -1,   279,    -1,  1236,    -1,    -1,
      -1,    -1,    -1,   290,   291,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,  2657,    -1,  2659,
      -1,  2661,    -1,  2663,    -1,  2665,   333,  2667,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1403,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2539,    -1,
      -1,    -1,  2543,    -1,    -1,  1431,   154,    -1,    -1,  2550,
      -1,    -1,    -1,    -1,    -1,  2556,  2716,    -1,    -1,  2560,
      -1,    -1,  2563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1459,    -1,    -1,  1462,    -1,    -1,    -1,
      -1,    -1,    -1,   191,    -1,  1471,  1472,    -1,    -1,    -1,
      -1,  1740,    -1,  1479,    -1,    -1,    -1,    -1,    -1,    -1,
    1486,  2761,    -1,   211,  1753,    -1,    -1,    -1,   216,    -1,
      -1,    -1,    -1,    -1,  1763,    -1,    -1,    -1,   226,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1526,    -1,    -1,  1529,  1530,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1539,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   285,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1835,    -1,  1467,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,  1610,    -1,    -1,     4,    -1,    -1,
      -1,  1617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,  1527,  1635,
      -1,    -1,    -1,    -1,  1533,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    -1,  1651,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,  1670,    -1,    -1,    -1,    -1,  1675,
      -1,    -1,  1678,  1679,  1680,  1681,  1682,    -1,  1684,    -1,
      -1,  1687,    -1,    -1,  1690,  1691,  1692,  1693,  1694,  1695,
      -1,  1697,  1698,    -1,    -1,    -1,  1702,  1703,  1704,    -1,
    1706,  1707,    -1,    -1,   101,    -1,  1712,  1713,    -1,    -1,
      -1,  1717,    -1,    -1,  1613,    -1,  1722,    -1,    -1,    -1,
    1619,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1643,    -1,    -1,    -1,    -1,    -1,
      -1,  1650,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1676,    -1,    -1,
      -1,    -1,    -1,    -1,  1683,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,    -1,    -1,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,  2092,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1842,    -1,    -1,  1845,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1856,    -1,    -1,  1859,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2132,  2133,  2134,  2135,  2136,    -1,  2138,
    2139,    -1,    -1,    -1,  2143,  2144,  2145,  2146,  2147,    -1,
    2149,  2150,  1888,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     3,     4,    -1,    -1,    -1,
     337,  1840,  1948,    -1,   341,   342,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1860,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,  1893,    -1,  1895,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1911,    -1,  1913,  2021,    -1,    -1,  1917,    -1,
    1919,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2062,    -1,    -1,    -1,
    1959,    -1,    -1,  1962,  1963,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1971,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2354,   154,    -1,  2357,  2358,
    2359,  2360,  2361,    -1,  2363,  2364,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2004,  2375,  2376,  2377,  2378,
    2379,    -1,  2381,  2382,    -1,  2384,     3,     4,    -1,    -1,
      -1,  2020,    -1,    -1,    -1,  2394,  2395,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,  2405,    -1,    -1,    -1,
      -1,    -1,  2041,   211,    -1,    -1,    -1,  2046,   216,    -1,
      -1,    -1,    -1,  2052,    -1,    -1,    -1,    -1,  2057,    -1,
      -1,    -1,  2061,    -1,    -1,  2064,    -1,    -1,  2067,    -1,
    2069,    -1,    -1,     4,    -1,    -1,  2075,    -1,  2184,    -1,
      -1,  2187,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,  2197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2213,    -1,    -1,
    2216,    -1,    -1,    -1,   101,    -1,    -1,  2223,    -1,    -1,
      -1,    -1,  2228,  2229,    -1,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,    -1,    -1,    -1,   154,    -1,    -1,
     101,    -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2553,    -1,  2555,    -1,    -1,    -1,
    2559,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2316,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2345,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,  2268,
      -1,    -1,    -1,    -1,    -1,    -1,  2645,    -1,    -1,  2648,
     211,    -1,  2651,    -1,  2653,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2418,    -1,    -1,    -1,    -1,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,  2459,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2471,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   154,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2520,    -1,    -1,  2416,    -1,    -1,
      -1,    -1,    -1,  2529,  2423,    -1,    -1,    -1,  2427,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2444,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   216,  2570,  2571,    -1,  2573,    -1,    -1,
      -1,    -1,  2578,  2579,    -1,    -1,    -1,  2583,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,
      -1,  2617,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2636,    -1,    -1,    -1,    -1,  2641,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2599,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      44,    -1,    46,    -1,    -1,  2721,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      64,    65,  2738,    67,    68,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,  2751,    -1,    -1,  2754,    -1,
      84,    19,    86,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
    2689,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,
     134,    69,    -1,    -1,   138,    18,    19,   141,    -1,    -1,
    2709,  2710,   146,   147,    -1,    -1,    -1,    -1,    -1,   153,
      -1,    -1,    -1,    91,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,   173,
      -1,    -1,   176,   177,   178,    58,    -1,   181,   182,    -1,
      -1,    -1,    -1,  2752,    -1,    -1,    -1,   154,    -1,    -1,
     194,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2770,    -1,    -1,  2773,   209,   210,   211,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   154,    -1,   101,   223,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,   167,
     234,   114,    -1,   237,    -1,   239,    -1,   241,    -1,    -1,
      -1,    -1,   246,    -1,    -1,    -1,   184,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   259,    -1,    -1,    -1,    -1,
     264,    -1,    -1,    -1,    -1,   203,    -1,    -1,    -1,    -1,
      -1,   154,    -1,    -1,    -1,    -1,   280,   281,   216,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   292,    -1,
     294,    -1,    -1,    -1,    -1,    -1,   300,    -1,    -1,   303,
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,    -1,
     334,    -1,    -1,   216,    -1,    -1,   340,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,    -1,   333,    -1,    -1,   281,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    20,
      21,    22,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    52,    48,    49,    55,    19,    52,    -1,    -1,    -1,
      -1,    62,    -1,    59,    -1,    66,    62,    -1,    -1,    -1,
      66,    -1,    -1,    74,    75,    -1,    -1,    -1,    74,    75,
      -1,    82,    83,    19,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,   105,    -1,    -1,   108,   109,    -1,
      -1,   112,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,    -1,
      -1,    -1,   128,    -1,    -1,    -1,    -1,   101,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,    -1,    -1,    -1,
     154,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,   220,
     101,   222,    -1,    -1,   220,    -1,   227,   228,    -1,    -1,
      -1,   227,   228,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     241,   242,    -1,    -1,    -1,    -1,   242,   211,    -1,    -1,
     251,   252,   216,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,   211,   277,    -1,   279,    -1,
     216,   277,    -1,   279,    -1,    -1,    -1,    -1,    -1,    -1,
     291,    -1,   293,   289,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,   333,    -1,    -1,   216,    -1,   333,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,
     281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   154,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   216,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
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
      -1,    -1,    -1,   157,    -1,    -1,   160,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   181,   182,    -1,
      -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     194,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     304,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   340
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
     304,   334,   340,   346,   237,   255,   379,    66,    12,    53,
      71,   100,   117,   120,   131,   285,   381,     3,     4,   285,
     347,   386,   185,   190,   226,   250,   295,   339,   388,   277,
       4,    40,   110,   191,   239,   393,    28,   148,   171,   175,
     224,   260,   268,   269,   360,   395,    83,    99,   173,   213,
     246,   396,    40,    59,   110,   191,   281,   347,   403,     4,
      19,    40,    56,   101,   118,   154,   191,   199,   205,   206,
     211,   216,   288,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   337,   341,   342,   349,   357,   358,   359,   405,
      33,   406,   349,    29,    44,    46,    76,    84,   139,   189,
     205,   206,   212,   214,   239,   304,   348,   141,   407,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   122,   138,   149,   150,   153,   157,
     160,   181,   182,   185,   194,   209,   210,   217,   239,   241,
     264,   280,   281,   289,   296,   302,   304,   340,   408,    83,
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
     184,   226,   247,   282,   298,   374,     4,   122,   201,   551,
     285,   347,   553,    16,    23,   235,   237,   358,   554,   225,
     558,   285,   347,   559,     0,    22,    48,    49,    62,   108,
     109,   220,   222,   299,   380,     5,    59,   347,   382,   261,
       5,     4,   285,   347,   383,     5,    32,   274,   384,   121,
     347,   385,   121,   347,   387,   347,     4,   190,   243,   391,
     185,   295,   338,   339,   347,   390,   349,   135,   174,   389,
     347,    78,   170,   243,   347,   392,     5,   347,     4,   239,
     394,   347,   347,     5,   222,   397,    31,   398,     5,   399,
       5,   401,     5,    31,   402,   347,     9,    10,    11,   347,
     353,   354,   355,   356,   347,   347,    40,   110,   191,   347,
     404,   347,   191,   357,   359,   347,    35,   106,   125,   126,
     127,   132,   145,   151,   162,   273,   362,   347,     4,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     116,    66,    53,    71,    88,   100,   117,   120,   131,   172,
     409,   117,   411,   185,   190,   226,   250,   295,   338,   339,
     347,   412,   413,   277,   416,   167,   417,   167,   175,   419,
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
       4,    34,   107,   200,   530,    66,   349,   375,    66,   349,
     376,    66,   349,   377,    13,   186,   529,   347,   347,    40,
     110,   191,   220,   347,   378,   347,   262,     4,   347,   347,
       4,   557,     4,   279,   555,     4,   279,   556,     4,   362,
     121,   347,   560,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,     4,     5,   347,    12,   347,   347,
     347,    30,    94,   161,   243,   248,   361,   361,     4,   347,
     347,     4,     4,     4,   347,   347,   347,   347,     4,     4,
       5,     5,   357,     5,   347,   347,   353,   355,   355,   357,
     347,   347,   347,   347,   347,   347,   347,   357,   359,   356,
     347,   347,   356,   347,     5,   261,   103,   185,   410,   190,
     243,   414,   167,    78,   170,   243,   415,     4,   418,     4,
     420,   190,   422,   175,   423,   167,   362,   347,   357,   347,
     357,   357,   362,   362,   362,   357,   362,   347,   357,     4,
     436,     4,   359,   434,   193,     4,   164,   304,   435,   193,
     357,     4,   357,   438,     5,     5,     4,   193,   347,     4,
       5,    60,    66,   113,   128,   140,   146,   147,   152,   203,
     222,   226,   228,   251,   252,   259,   277,   333,   493,   359,
      66,   445,    66,   446,    66,   447,   220,   448,   347,     5,
     221,   450,   358,   362,     5,   357,   357,   357,     4,   349,
       4,     4,   193,   347,    14,    15,    61,   187,   188,   256,
     265,   266,   297,    87,     5,     5,    14,    15,    61,   187,
     188,   256,   265,   266,   270,   297,    87,   154,   160,   358,
     470,   474,    87,   154,     5,   468,     4,     4,    14,    61,
     187,   256,   265,   297,     5,     5,     4,   347,   358,    20,
      21,    22,    48,    49,    52,    55,    62,    66,    74,    75,
      82,    83,    99,   105,   108,   109,   112,   128,   147,   170,
     192,   220,   222,   227,   228,   241,   242,   251,   252,   277,
     279,   291,   293,   299,   333,    66,    80,    89,    99,   128,
     147,   192,   228,   252,   291,   293,     4,    30,   159,   208,
     233,   487,     5,    63,   104,   230,   244,   245,   335,   336,
     492,    99,   485,    17,    40,   110,   191,   491,     4,     5,
      17,   207,   286,   347,   252,   492,   500,   122,   492,   501,
      36,    40,   110,   129,   191,   285,   347,   502,   357,   349,
      91,    99,   105,   124,   147,   155,   192,   200,   241,   252,
     267,   505,    40,   110,   191,     5,   278,    17,   207,   286,
     509,   279,   349,   510,     5,    99,   105,   294,    17,    17,
       4,   347,   347,   347,   347,   347,   362,   347,   347,   356,
     347,     4,   362,    40,   110,   191,   257,   527,    40,   110,
     191,   257,   528,     4,    97,     5,     5,    87,     4,     5,
       5,    87,     5,   538,    61,   119,   154,   265,   542,    61,
     119,   265,   546,    87,   154,    61,   119,   265,   540,     4,
      61,   119,   265,   539,     5,     5,     4,     5,     5,     5,
     347,   347,   347,   347,   347,   347,     4,   347,   552,   347,
     347,     6,   358,     4,     5,     4,     4,     5,     4,    97,
     254,   363,   347,   347,    12,   347,   347,   347,   347,   347,
     347,   347,   347,   347,     5,    12,   347,   347,    12,     4,
      12,     4,     4,   347,   347,   347,     4,   349,     4,     4,
     362,   357,   362,   347,   347,   347,   357,   347,   356,   347,
     347,     5,     5,   347,   359,   347,   357,   357,   347,   362,
     363,   363,   363,   362,   356,   347,   362,   347,   130,   240,
     350,   437,   164,     5,     4,   362,   357,     4,     5,     4,
       4,   347,   432,   347,    20,    21,    22,    48,    49,    52,
      59,    62,    66,    74,    75,    82,   108,   109,   112,   128,
     147,   170,   179,   220,   227,   228,   242,   252,   277,   279,
     289,   299,   333,    66,   128,   152,   228,   277,    30,   159,
     208,   233,   494,   347,    20,   203,   347,   495,    17,   347,
     251,   505,   251,   203,   347,   496,   279,   497,    17,    98,
     347,   347,     5,   363,    56,   357,     4,     5,   461,   347,
       5,     5,     5,   154,   182,   368,   368,   163,   258,   366,
       4,     4,     5,     5,   465,   263,   263,     5,     5,     5,
      17,   156,   367,   367,   366,     4,     4,   366,     5,     5,
     469,   160,   332,   358,   473,     5,   472,     5,     5,   476,
       5,   477,     5,    14,    15,    61,   187,   188,   256,   265,
     266,   270,   297,     4,     4,     5,     5,   368,   366,     4,
       5,     5,   362,    82,   149,   218,   219,   232,   271,   371,
       7,     8,   347,   352,   233,   233,   233,   105,    40,    66,
      99,   105,   110,   128,   147,   163,   192,   228,   241,   252,
     279,   291,   293,   294,   333,   486,   233,     5,    27,   165,
     233,   275,   135,   105,    22,    49,    52,    82,   109,   112,
     222,   251,    22,    49,    52,    55,    82,   109,   112,   222,
     251,   277,    40,   233,   233,   105,     5,   207,    27,   220,
      36,   129,   285,   347,   255,   261,   237,   357,   359,   505,
      40,   220,   275,   237,   207,     5,     5,   241,    27,   220,
       4,     5,     5,   207,    36,   129,   285,   347,   505,   207,
     349,     4,     4,   347,     5,   297,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   108,   109,
     112,   170,   222,   227,   242,   251,   278,   279,   299,   343,
     488,   347,   347,   347,   347,   347,   492,   357,     5,     4,
       5,   347,   347,   357,   359,   347,   349,   347,   347,   492,
       5,   347,   347,   349,     5,    17,     5,     5,   347,   347,
     356,   347,   347,   347,   347,   110,   347,   347,   110,     4,
      42,    43,   168,   169,   195,   373,   373,    61,   119,   265,
     536,   373,     5,    61,   119,   265,   541,     5,     5,    61,
     119,   265,   543,     4,     5,     5,     4,    61,   119,   265,
     545,    61,   119,   265,   544,     5,     5,     4,     5,     5,
       4,   373,   373,   373,   347,   347,   347,   347,   347,     4,
     347,   357,   347,   358,   362,     5,     5,    12,   347,   357,
     359,   347,    12,   347,   347,   347,    59,   347,     6,     4,
     347,   347,    46,   264,   400,     5,   349,   349,   362,   347,
       4,     4,     4,   357,   347,   347,   347,   347,   362,     4,
     357,   363,   356,   347,     4,   363,   347,    38,    38,     4,
     359,     5,    24,    25,    97,   364,   347,     4,   347,     5,
      82,   149,   218,   219,   232,   271,   357,   359,   233,   233,
     233,    21,   233,   357,   233,    27,   165,   233,   275,   135,
      21,   233,   233,   233,    21,   233,    27,   166,   220,   166,
     255,   261,   166,   220,   283,   505,   166,   220,   275,     4,
     241,    27,   166,   220,   505,   203,   347,    82,   149,   218,
     219,   232,   271,   347,   347,   347,   347,   347,   193,   347,
     347,    20,   229,   453,     4,     4,   347,   368,   368,   368,
       4,   368,   368,   368,    14,    15,    61,   187,   188,   256,
     265,   266,   297,   367,   368,   368,   368,   368,   368,     4,
     368,   368,     4,   367,    14,    15,    61,   187,   188,   256,
     265,   266,   297,     5,   471,     5,   475,     5,     5,    14,
      15,    61,   187,   188,   256,   265,   266,   270,   297,     5,
      14,    15,    61,   187,   188,   256,   265,   266,   270,   297,
       5,    14,    15,    61,   187,   188,   256,   265,   266,   270,
     297,    14,    15,    61,   187,   188,   256,   265,   266,   297,
     263,     5,     5,     5,   367,   367,   366,     4,     4,   366,
       5,     4,     4,   368,   368,     4,   368,   368,     5,   349,
     357,   359,     5,   347,   347,     5,   347,     5,   352,   105,
     192,   241,   105,   192,   241,     5,   347,   349,     5,   347,
     357,   349,     5,   352,   233,   233,    21,   233,    21,   233,
     233,    21,   233,   301,   301,     4,     4,     4,   486,     4,
       4,     4,   301,   301,     4,     5,     4,   347,     5,   347,
       5,   352,   349,   357,   359,   357,   359,   347,    27,    48,
      51,    62,    85,   102,   343,   369,     4,   347,   362,   356,
     349,   357,   359,   357,   347,   349,   349,   357,   359,   357,
     359,   347,   349,   347,     5,   347,   220,   220,   347,   347,
     220,   347,   220,   347,   347,   498,   506,   347,   220,   220,
     347,   347,   347,   347,   347,   347,   347,   347,     5,   297,
     347,   489,   347,   347,   220,   347,   347,   347,   347,   357,
     362,     5,   357,   357,   347,   347,   362,   356,   347,   347,
     347,   357,   347,   347,     5,   347,   347,   347,   347,     5,
       5,     4,   373,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   347,   347,
     357,   347,   362,   347,   357,   359,   347,   362,   347,   347,
     347,   347,   347,     5,   347,     4,     6,   347,   347,     4,
     357,   347,   362,   175,   360,   347,   360,   363,   362,   357,
     347,   347,     4,   347,   347,     4,   357,     5,     5,     5,
       5,   357,   362,   357,   357,   357,   357,   359,   357,   362,
     357,   357,   357,   359,   357,   357,   357,   357,   359,   357,
     357,   357,   347,   357,   357,   357,   357,   357,   357,   357,
     357,     5,     5,     5,     5,   357,   347,   347,     4,   347,
       5,     4,   347,   368,     5,     5,     5,   366,     4,     4,
       5,   368,   367,     4,   368,     5,     5,     5,   367,   367,
     366,     4,     4,     5,    14,    15,    61,   187,   188,   256,
     265,   266,   297,    14,    15,    61,   187,   188,   256,   265,
     266,   297,    14,    15,    61,   187,   188,   256,   265,   266,
     297,   263,     5,     5,     5,   367,   367,   366,     4,     4,
     366,     5,   263,     5,     5,     5,   367,   367,   366,     4,
       4,   366,     5,   263,     5,     5,     5,   367,   367,   366,
       4,     4,   366,     5,     5,     5,     5,   367,   367,   366,
       4,     4,     5,   367,     4,     4,   367,     4,     4,   368,
       5,   362,   357,   347,   347,   357,   347,     5,   352,     5,
     357,   359,   349,     5,   357,   359,   362,     5,   352,   347,
     347,   347,   347,   347,   347,   347,   347,   347,     4,     4,
       5,     4,     4,   347,   357,   347,     5,   352,   349,   362,
     356,   362,   347,   347,   356,   356,   362,   356,   362,   347,
     362,   356,   362,   356,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,    55,    66,    92,   128,   277,   279,
     333,   503,   504,   505,   516,   517,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   357,     5,
     347,   347,   347,   347,     4,     4,   362,   363,     4,   490,
     362,   362,   356,   347,     4,   362,   373,   373,   373,   347,
     347,   347,   362,   347,   356,   347,   347,    12,     5,     5,
       4,   347,   347,     4,   362,   357,   347,   347,   363,   364,
     347,     5,   347,   359,     5,     5,     5,     5,   362,   364,
     364,   364,   362,   364,   363,   364,   364,   362,   364,   364,
     364,   362,   364,   364,   362,   357,   364,   362,   364,   364,
     362,   364,   362,     5,     5,     5,     5,   362,     4,   359,
       5,   347,     4,   368,   367,     4,   367,     5,     5,     5,
     367,   367,   366,     4,     4,     5,     5,     5,     5,   367,
     367,   366,     4,     4,     5,     5,     5,     5,   367,   367,
     366,     4,     4,     5,   367,   368,   368,   368,   368,   368,
       4,   368,   368,     4,   367,   367,   368,   368,   368,   368,
     368,     4,   368,   368,     4,   367,   367,     4,     4,   367,
       4,   367,   367,     4,     4,     4,   358,   364,     4,   357,
     359,   364,   347,   357,     4,   364,   364,   357,     4,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   347,   347,
     357,   359,   364,   347,   357,     4,   356,   356,   356,   347,
     357,   359,   356,   347,   356,   356,   357,   357,   359,   356,
     347,   356,   347,   347,   347,   347,   347,   347,   352,   347,
     347,   347,   344,   344,   344,   344,   344,   344,   344,   504,
     344,   352,   347,   347,   347,   347,   352,   347,   347,   347,
     347,   347,   347,   362,   347,   297,   351,   352,   347,   347,
     363,   349,     4,     4,   363,   347,   356,   347,    59,   347,
       5,     5,   347,     4,   360,   364,     5,     4,     5,   357,
       5,   363,   364,   363,   363,   363,     4,     5,   357,     5,
       5,   347,   368,   367,   368,   368,   368,   368,   368,     4,
     368,   368,   367,     4,   367,   368,   368,   368,   368,   368,
       4,   368,   368,   367,   368,   367,     4,   368,   368,   367,
       4,   368,   367,     4,   367,   367,   362,   357,   359,   364,
       4,   362,   347,   362,   347,   347,   347,   364,     4,   362,
     347,   356,   364,   347,   356,   364,   364,   357,   352,   347,
       4,   370,   370,   347,   347,   370,   352,   370,   506,   357,
     486,     5,     4,     5,     5,     5,     4,   349,   352,   370,
     370,   347,   347,   352,   347,   347,   347,   347,   347,   356,
     347,     5,   506,   347,   370,   349,   507,   508,     5,   349,
       5,   347,     5,     4,     6,   347,     5,    32,   274,   372,
     357,     5,   372,   357,   347,   367,   368,   367,   367,   368,
     368,   367,   368,   367,   367,   347,   364,   357,   359,   357,
     347,   357,   347,   357,   359,   357,   347,   357,   364,     4,
     506,   506,   351,   347,   506,     4,   506,   362,     5,     4,
       4,   506,   506,   351,   347,     4,   506,   506,   347,   357,
     506,   506,   506,   507,   513,   514,   505,   511,   512,     5,
       5,     6,     4,   185,   295,   338,   339,   347,   365,   357,
     357,     4,   368,   368,   368,   368,   358,   364,   364,   347,
     364,     4,   364,   364,   347,   364,   347,   506,   506,     4,
     347,   506,     5,   347,   506,     4,   347,   506,   362,   513,
     515,   516,   344,   512,     5,     5,     4,   347,   362,   362,
     364,     4,   357,   359,     4,   352,   351,   347,   347,   351,
     347,   357,   516,   349,     5,     5,   347,   372,   372,     5,
     357,   359,   362,   357,   359,   506,   347,     4,   506,   347,
     364,     5,     5,   362,   362,     4,   506,     4,   506,   351,
     351,   506,   506
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
#line 448 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 450 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 451 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 453 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 460 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 465 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 466 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 468 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 475 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 479 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 481 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 486 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 488 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 490 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 492 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 499 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 500 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 503 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 504 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 505 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 506 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 507 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 508 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 509 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 510 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 511 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 512 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 513 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 514 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 515 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 518 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 520 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 521 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 522 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 523 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 525 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 526 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 527 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 528 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 531 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 532 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 533 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 534 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 538 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 539 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 542 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 543 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 544 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 547 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 550 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 553 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 557 "frame/parser.Y"
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
#line 569 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 576 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 583 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 590 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 591 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 592 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 593 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 594 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 597 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 598 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 599 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 627 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 628 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 631 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 632 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 633 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 634 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 641 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 642 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 643 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 644 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 661 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 662 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 663 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 666 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 667 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 668 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 672 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 162:
#line 673 "frame/parser.Y"
    {(yyval.real) = FrScale::MINMAX;;}
    break;

  case 163:
#line 674 "frame/parser.Y"
    {(yyval.real) = FrScale::ZSCALE;;}
    break;

  case 164:
#line 675 "frame/parser.Y"
    {(yyval.real) = FrScale::ZMAX;;}
    break;

  case 165:
#line 676 "frame/parser.Y"
    {(yyval.real) = FrScale::USERCLIP;;}
    break;

  case 166:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 167:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 168:
#line 681 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 169:
#line 684 "frame/parser.Y"
    {;}
    break;

  case 170:
#line 685 "frame/parser.Y"
    {;}
    break;

  case 171:
#line 686 "frame/parser.Y"
    {;}
    break;

  case 172:
#line 689 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 173:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 174:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 175:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 176:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 177:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 178:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 179:
#line 698 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 180:
#line 699 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 181:
#line 700 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 182:
#line 701 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 183:
#line 704 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 184:
#line 705 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 185:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 186:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 187:
#line 710 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 188:
#line 711 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 189:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 190:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 191:
#line 716 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 192:
#line 717 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 193:
#line 718 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 194:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 195:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 196:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 197:
#line 724 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 198:
#line 725 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 726 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 204:
#line 733 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 205:
#line 734 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 206:
#line 735 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 207:
#line 736 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 208:
#line 738 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 209:
#line 741 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 210:
#line 742 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 211:
#line 745 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 212:
#line 746 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 213:
#line 749 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 214:
#line 750 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 215:
#line 753 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 216:
#line 755 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 217:
#line 756 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 218:
#line 757 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 219:
#line 758 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 220:
#line 761 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 222:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 226:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 228:
#line 778 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 229:
#line 780 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 230:
#line 782 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 232:
#line 786 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 233:
#line 787 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 236:
#line 790 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 238:
#line 792 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 795 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 240:
#line 796 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 799 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 242:
#line 800 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 243:
#line 802 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 244:
#line 804 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 245:
#line 805 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 246:
#line 806 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 247:
#line 808 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 248:
#line 810 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 249:
#line 813 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 250:
#line 814 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 251:
#line 817 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 252:
#line 819 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 253:
#line 822 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 254:
#line 824 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 255:
#line 827 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 256:
#line 831 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 257:
#line 832 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 259:
#line 836 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 260:
#line 837 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 261:
#line 838 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 265:
#line 844 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 267:
#line 847 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 268:
#line 852 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 269:
#line 853 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 270:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 271:
#line 857 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 272:
#line 858 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 273:
#line 859 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 274:
#line 860 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 275:
#line 863 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 276:
#line 864 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 277:
#line 865 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 278:
#line 868 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 279:
#line 870 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 280:
#line 875 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 281:
#line 880 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 282:
#line 887 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 889 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 890 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 286:
#line 892 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 287:
#line 896 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 288:
#line 898 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 289:
#line 900 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 290:
#line 901 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 296:
#line 912 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(yyvsp[(9) - (12)].real),Vector((yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real)),(yyvsp[(12) - (12)].str));;}
    break;

  case 297:
#line 913 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 298:
#line 916 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 299:
#line 917 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 300:
#line 920 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 301:
#line 921 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 302:
#line 923 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 303:
#line 929 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 304:
#line 930 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 305:
#line 933 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 306:
#line 934 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 307:
#line 938 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 308:
#line 940 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 309:
#line 943 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 310:
#line 945 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 311:
#line 948 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 313:
#line 950 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 314:
#line 951 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 315:
#line 952 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 316:
#line 955 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 317:
#line 956 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 318:
#line 957 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 319:
#line 958 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 320:
#line 959 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 321:
#line 963 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 322:
#line 965 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 323:
#line 966 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 324:
#line 967 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 325:
#line 970 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 326:
#line 972 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 327:
#line 974 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 328:
#line 976 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 329:
#line 979 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 330:
#line 982 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 331:
#line 985 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 345:
#line 999 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 348:
#line 1002 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1004 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 352:
#line 1007 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 353:
#line 1008 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 356:
#line 1011 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 357:
#line 1012 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 359:
#line 1015 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 361:
#line 1017 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 363:
#line 1019 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 365:
#line 1021 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 366:
#line 1023 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 367:
#line 1025 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (7)].str),(yyvsp[(4) - (7)].str),Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)),(Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 369:
#line 1027 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 370:
#line 1030 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 371:
#line 1031 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 372:
#line 1032 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 373:
#line 1033 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 374:
#line 1034 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 375:
#line 1035 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 377:
#line 1037 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 378:
#line 1040 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 379:
#line 1041 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 380:
#line 1042 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 381:
#line 1045 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 383:
#line 1049 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 384:
#line 1050 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 386:
#line 1052 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 388:
#line 1055 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 389:
#line 1061 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 390:
#line 1062 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 391:
#line 1063 "frame/parser.Y"
    {fr->getClipCmd(FrScale::MINMAX);;}
    break;

  case 392:
#line 1064 "frame/parser.Y"
    {fr->getClipCmd(FrScale::ZSCALE);;}
    break;

  case 393:
#line 1065 "frame/parser.Y"
    {fr->getClipCmd(FrScale::ZMAX);;}
    break;

  case 394:
#line 1066 "frame/parser.Y"
    {fr->getClipCmd(FrScale::USERCLIP);;}
    break;

  case 395:
#line 1069 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 396:
#line 1070 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 397:
#line 1073 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 398:
#line 1074 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 399:
#line 1075 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 400:
#line 1078 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 401:
#line 1079 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 403:
#line 1085 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 404:
#line 1087 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 405:
#line 1089 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 406:
#line 1092 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 408:
#line 1094 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 409:
#line 1098 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 410:
#line 1102 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 412:
#line 1104 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 413:
#line 1105 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 414:
#line 1106 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 415:
#line 1107 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 416:
#line 1108 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 418:
#line 1110 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 419:
#line 1111 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 420:
#line 1114 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 421:
#line 1115 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 422:
#line 1118 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 423:
#line 1119 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 424:
#line 1123 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 425:
#line 1125 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 426:
#line 1131 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 427:
#line 1135 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 428:
#line 1137 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 429:
#line 1138 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 430:
#line 1141 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 431:
#line 1143 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1144 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 433:
#line 1147 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 434:
#line 1150 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 435:
#line 1152 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1156 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 437:
#line 1158 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 438:
#line 1161 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 439:
#line 1165 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 440:
#line 1166 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 441:
#line 1168 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 442:
#line 1171 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 443:
#line 1172 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 445:
#line 1176 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 446:
#line 1177 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1178 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 448:
#line 1181 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 449:
#line 1183 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 450:
#line 1184 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 452:
#line 1186 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 456:
#line 1190 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 457:
#line 1191 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 458:
#line 1192 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 459:
#line 1194 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyDist)(yyvsp[(4) - (4)].integer));;}
    break;

  case 461:
#line 1196 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 462:
#line 1199 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 463:
#line 1201 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 464:
#line 1203 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 465:
#line 1204 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 466:
#line 1205 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 467:
#line 1206 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 468:
#line 1209 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 469:
#line 1210 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 470:
#line 1214 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 471:
#line 1216 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 472:
#line 1219 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 473:
#line 1222 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 474:
#line 1223 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1224 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 476:
#line 1225 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 477:
#line 1228 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 478:
#line 1229 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 479:
#line 1230 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 480:
#line 1233 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 481:
#line 1234 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 482:
#line 1235 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 483:
#line 1238 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 484:
#line 1241 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 485:
#line 1242 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 486:
#line 1243 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 487:
#line 1246 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 488:
#line 1247 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 493:
#line 1254 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 494:
#line 1255 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 495:
#line 1256 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 496:
#line 1259 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 497:
#line 1260 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 498:
#line 1263 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 499:
#line 1264 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 500:
#line 1267 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 501:
#line 1268 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 502:
#line 1271 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 503:
#line 1272 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 504:
#line 1275 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 506:
#line 1277 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 507:
#line 1280 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 508:
#line 1281 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 510:
#line 1285 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 511:
#line 1289 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 512:
#line 1292 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 513:
#line 1299 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 514:
#line 1300 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 515:
#line 1303 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 518:
#line 1306 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 519:
#line 1307 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 520:
#line 1308 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 521:
#line 1309 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 523:
#line 1311 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 524:
#line 1312 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 525:
#line 1313 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 527:
#line 1315 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 528:
#line 1316 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 529:
#line 1317 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 531:
#line 1321 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 532:
#line 1324 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 533:
#line 1325 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 534:
#line 1328 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 535:
#line 1329 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 536:
#line 1330 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 537:
#line 1331 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 538:
#line 1334 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 539:
#line 1335 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 540:
#line 1336 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 541:
#line 1337 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 542:
#line 1340 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 543:
#line 1341 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 544:
#line 1342 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 545:
#line 1343 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 546:
#line 1344 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 547:
#line 1347 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 548:
#line 1348 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 549:
#line 1349 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 552:
#line 1353 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 553:
#line 1354 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 554:
#line 1357 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 555:
#line 1360 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 556:
#line 1361 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 557:
#line 1365 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 558:
#line 1367 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 559:
#line 1368 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 566:
#line 1380 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 567:
#line 1382 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 568:
#line 1384 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 569:
#line 1385 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 570:
#line 1387 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 571:
#line 1389 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 572:
#line 1391 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1393 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1395 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 576:
#line 1399 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 577:
#line 1400 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 578:
#line 1401 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 579:
#line 1402 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 580:
#line 1403 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 581:
#line 1405 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 582:
#line 1406 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1407 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1408 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 585:
#line 1411 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 586:
#line 1415 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 587:
#line 1417 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 588:
#line 1419 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 589:
#line 1421 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 590:
#line 1423 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 591:
#line 1425 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1427 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 593:
#line 1429 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 594:
#line 1432 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1434 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1436 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 602:
#line 1444 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 603:
#line 1445 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 604:
#line 1446 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 605:
#line 1447 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 606:
#line 1448 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 607:
#line 1449 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1451 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 609:
#line 1453 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 610:
#line 1454 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1455 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1456 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 613:
#line 1459 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 614:
#line 1460 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1461 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1462 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1463 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1465 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 619:
#line 1466 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1467 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1468 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 627:
#line 1479 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 628:
#line 1482 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 629:
#line 1485 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 630:
#line 1488 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 631:
#line 1491 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1494 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 633:
#line 1497 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 636:
#line 1508 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1511 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1514 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1517 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1520 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1523 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1526 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 643:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 644:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 647:
#line 1543 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 648:
#line 1546 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1549 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 650:
#line 1552 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1555 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1558 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 653:
#line 1561 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 656:
#line 1572 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1575 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1578 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1581 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1584 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 661:
#line 1587 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1590 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 663:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 664:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 667:
#line 1607 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1610 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 671:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1613 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 673:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1616 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 676:
#line 1618 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1619 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1620 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1621 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1622 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 681:
#line 1623 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1625 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 683:
#line 1627 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 684:
#line 1628 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1629 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1630 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 687:
#line 1633 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1634 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1635 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1636 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1637 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1639 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 693:
#line 1640 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1641 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1642 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1646 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 697:
#line 1648 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 698:
#line 1649 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 699:
#line 1651 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 700:
#line 1653 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1655 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1658 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 703:
#line 1659 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 704:
#line 1662 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 705:
#line 1663 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 706:
#line 1664 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 707:
#line 1667 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 708:
#line 1674 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 709:
#line 1675 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 710:
#line 1676 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 711:
#line 1677 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 712:
#line 1678 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 713:
#line 1679 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 714:
#line 1680 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 715:
#line 1684 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::SkyDist)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 717:
#line 1692 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 718:
#line 1693 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 719:
#line 1695 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 720:
#line 1697 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 721:
#line 1698 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 722:
#line 1699 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 724:
#line 1700 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 725:
#line 1701 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 726:
#line 1702 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 728:
#line 1704 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 729:
#line 1705 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 730:
#line 1707 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 731:
#line 1709 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 732:
#line 1711 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 733:
#line 1714 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 734:
#line 1716 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 735:
#line 1717 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 736:
#line 1719 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1722 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 738:
#line 1724 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 739:
#line 1727 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 740:
#line 1730 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 741:
#line 1734 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 742:
#line 1737 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1740 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1742 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 745:
#line 1745 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 746:
#line 1749 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 747:
#line 1753 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 748:
#line 1758 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1762 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 750:
#line 1764 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1766 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 752:
#line 1767 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 753:
#line 1769 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1771 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 755:
#line 1773 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1775 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 757:
#line 1777 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1778 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 759:
#line 1780 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 760:
#line 1782 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 761:
#line 1785 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 762:
#line 1789 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 763:
#line 1793 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 764:
#line 1795 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1797 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1799 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1801 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1803 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1805 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1807 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1809 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1811 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 773:
#line 1813 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 774:
#line 1815 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 775:
#line 1817 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 776:
#line 1819 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1820 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1822 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1824 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 780:
#line 1825 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1826 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1828 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1830 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1831 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 785:
#line 1832 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 786:
#line 1833 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1835 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1837 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1839 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 790:
#line 1843 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 791:
#line 1847 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 792:
#line 1850 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 793:
#line 1853 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 794:
#line 1857 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 796:
#line 1866 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 797:
#line 1870 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 798:
#line 1871 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 799:
#line 1872 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 800:
#line 1874 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 801:
#line 1876 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 802:
#line 1878 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 803:
#line 1882 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 804:
#line 1883 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 805:
#line 1884 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 806:
#line 1886 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 807:
#line 1888 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 808:
#line 1891 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 809:
#line 1893 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 810:
#line 1896 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1898 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1901 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 813:
#line 1902 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 814:
#line 1905 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 815:
#line 1909 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 816:
#line 1913 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1915 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 818:
#line 1917 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 820:
#line 1923 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 822:
#line 1927 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 823:
#line 1929 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 824:
#line 1930 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 825:
#line 1931 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1933 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 827:
#line 1934 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 828:
#line 1936 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1938 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 831:
#line 1944 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 832:
#line 1946 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 833:
#line 1947 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 837:
#line 1952 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 838:
#line 1953 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 839:
#line 1955 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 840:
#line 1957 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 841:
#line 1959 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 842:
#line 1960 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 843:
#line 1962 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 844:
#line 1963 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 847:
#line 1968 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 848:
#line 1969 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 849:
#line 1970 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 850:
#line 1971 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 851:
#line 1972 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 852:
#line 1973 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1974 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 854:
#line 1975 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 855:
#line 1976 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 856:
#line 1977 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 857:
#line 1979 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 858:
#line 1981 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 859:
#line 1983 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 1984 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 1985 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 862:
#line 1986 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 863:
#line 1987 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 1989 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 865:
#line 1990 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 866:
#line 1991 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 867:
#line 1992 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 868:
#line 1993 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 1995 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 870:
#line 1996 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 871:
#line 1997 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 872:
#line 1998 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 873:
#line 1999 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 874:
#line 2000 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 875:
#line 2003 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 876:
#line 2004 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 877:
#line 2005 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 878:
#line 2006 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 879:
#line 2007 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 880:
#line 2008 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 881:
#line 2009 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 882:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 883:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 884:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 885:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 886:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 887:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 888:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 889:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 890:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 891:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 892:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 893:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 894:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 895:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 896:
#line 2026 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 897:
#line 2027 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 898:
#line 2028 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 899:
#line 2029 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 900:
#line 2030 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 901:
#line 2032 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 902:
#line 2042 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 903:
#line 2050 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 904:
#line 2059 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 905:
#line 2067 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2074 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2081 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2089 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2097 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2102 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2107 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2112 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2117 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2122 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2127 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2141 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2150 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2160 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2169 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2177 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2187 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2197 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2207 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2219 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2228 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2236 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2238 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 930:
#line 2240 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 931:
#line 2245 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 932:
#line 2248 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 933:
#line 2252 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 934:
#line 2254 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 935:
#line 2255 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 936:
#line 2258 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 937:
#line 2259 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 938:
#line 2260 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 939:
#line 2261 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 940:
#line 2262 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 941:
#line 2263 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 942:
#line 2264 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 944:
#line 2268 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 945:
#line 2269 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 946:
#line 2270 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 947:
#line 2271 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 948:
#line 2272 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 949:
#line 2275 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 950:
#line 2277 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 951:
#line 2279 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 952:
#line 2281 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 953:
#line 2283 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 954:
#line 2285 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 955:
#line 2288 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 956:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 957:
#line 2292 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 958:
#line 2294 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 959:
#line 2296 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 960:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 961:
#line 2300 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 962:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 963:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 964:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 966:
#line 2309 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 967:
#line 2311 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 968:
#line 2312 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 969:
#line 2313 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 970:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2320 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 973:
#line 2323 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2324 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 975:
#line 2325 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2326 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 977:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2329 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 980:
#line 2331 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 982:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2336 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2338 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2340 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 986:
#line 2342 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2343 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 988:
#line 2345 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2347 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 990:
#line 2348 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 991:
#line 2349 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 992:
#line 2350 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2352 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2354 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 995:
#line 2357 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 996:
#line 2360 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 997:
#line 2361 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2363 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 999:
#line 2366 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2369 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1003:
#line 2373 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1004:
#line 2375 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1005:
#line 2377 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1006:
#line 2378 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1007:
#line 2380 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1008:
#line 2381 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1009:
#line 2382 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1010:
#line 2383 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2384 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1012:
#line 2386 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2388 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2390 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1015:
#line 2392 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2394 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1018:
#line 2395 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1019:
#line 2397 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1020:
#line 2399 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1021:
#line 2400 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1022:
#line 2401 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1024:
#line 2403 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1026:
#line 2407 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1027:
#line 2408 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1028:
#line 2409 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1029:
#line 2410 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1030:
#line 2411 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1031:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1032:
#line 2414 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1033:
#line 2415 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1034:
#line 2417 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1035:
#line 2420 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1036:
#line 2421 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1037:
#line 2422 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1038:
#line 2423 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1039:
#line 2426 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1040:
#line 2427 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1041:
#line 2430 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1042:
#line 2431 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1043:
#line 2434 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1044:
#line 2435 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1045:
#line 2438 "frame/parser.Y"
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

  case 1046:
#line 2451 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1047:
#line 2452 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1048:
#line 2456 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1049:
#line 2457 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1050:
#line 2461 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1051:
#line 2462 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1052:
#line 2467 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1053:
#line 2472 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1054:
#line 2478 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1055:
#line 2480 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1056:
#line 2483 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1057:
#line 2485 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1058:
#line 2488 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1059:
#line 2491 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1060:
#line 2492 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1061:
#line 2493 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1062:
#line 2494 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1063:
#line 2495 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1064:
#line 2496 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1065:
#line 2498 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1066:
#line 2500 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1069:
#line 2507 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1070:
#line 2508 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1071:
#line 2509 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1072:
#line 2510 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1073:
#line 2511 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1074:
#line 2512 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1077:
#line 2517 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1078:
#line 2518 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1079:
#line 2519 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1080:
#line 2520 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1081:
#line 2521 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1082:
#line 2522 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1083:
#line 2523 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1084:
#line 2524 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1085:
#line 2525 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1086:
#line 2526 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1087:
#line 2527 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1090:
#line 2534 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1091:
#line 2535 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1093:
#line 2538 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1094:
#line 2539 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1095:
#line 2540 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1096:
#line 2541 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1097:
#line 2544 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1098:
#line 2545 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1101:
#line 2553 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1102:
#line 2556 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1103:
#line 2557 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1107:
#line 2564 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1108:
#line 2567 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1109:
#line 2571 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1110:
#line 2572 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1111:
#line 2573 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1112:
#line 2574 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1113:
#line 2577 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1114:
#line 2578 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1115:
#line 2579 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1116:
#line 2580 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1117:
#line 2584 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1118:
#line 2585 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1119:
#line 2587 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1120:
#line 2592 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1122:
#line 2594 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1124:
#line 2596 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2599 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1126:
#line 2601 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1127:
#line 2606 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1128:
#line 2609 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2610 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1130:
#line 2611 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2614 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1132:
#line 2616 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1133:
#line 2620 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1134:
#line 2621 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1135:
#line 2625 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1136:
#line 2626 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2627 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1138:
#line 2628 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1139:
#line 2633 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1140:
#line 2634 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1141:
#line 2635 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1142:
#line 2636 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1145:
#line 2644 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1146:
#line 2646 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1147:
#line 2647 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1148:
#line 2648 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1149:
#line 2652 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1150:
#line 2653 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1151:
#line 2654 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1152:
#line 2655 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1153:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1154:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1155:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1156:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1157:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1158:
#line 2667 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1159:
#line 2668 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1160:
#line 2669 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1161:
#line 2672 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1162:
#line 2673 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1164:
#line 2675 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1165:
#line 2676 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1166:
#line 2679 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1167:
#line 2680 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1168:
#line 2681 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1173:
#line 2688 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1174:
#line 2692 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1175:
#line 2694 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2696 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1178:
#line 2701 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1179:
#line 2703 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1180:
#line 2705 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2718 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1191:
#line 2719 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1192:
#line 2720 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1193:
#line 2723 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1194:
#line 2724 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1195:
#line 2725 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1196:
#line 2728 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1197:
#line 2729 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2730 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1199:
#line 2733 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1200:
#line 2734 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2735 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2739 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1204:
#line 2740 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1205:
#line 2741 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1206:
#line 2744 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2745 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2746 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2749 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2750 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2751 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2754 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2755 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2756 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2759 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1216:
#line 2760 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2761 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1218:
#line 2765 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2767 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1220:
#line 2769 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1221:
#line 2773 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1222:
#line 2776 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1223:
#line 2777 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1224:
#line 2780 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1225:
#line 2781 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1226:
#line 2782 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1227:
#line 2785 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1228:
#line 2787 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1229:
#line 2788 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1230:
#line 2790 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1232:
#line 2794 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1233:
#line 2795 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2796 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2797 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2800 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1237:
#line 2801 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1238:
#line 2805 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1240:
#line 2807 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1243:
#line 2812 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1244:
#line 2813 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1245:
#line 2814 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1246:
#line 2817 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2818 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1248:
#line 2819 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1249:
#line 2822 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1250:
#line 2824 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1251:
#line 2829 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1252:
#line 2832 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1253:
#line 2839 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2841 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1255:
#line 2843 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1256:
#line 2848 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1258:
#line 2852 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1259:
#line 2853 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1260:
#line 2854 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2856 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1262:
#line 2858 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1263:
#line 2863 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10970 "frame/parser.C"
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


#line 2867 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

