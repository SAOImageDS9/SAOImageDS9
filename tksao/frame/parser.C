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
#define YYLAST   5460

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  345
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  216
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2817

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
    1020,  1025,  1034,  1037,  1040,  1043,  1045,  1049,  1052,  1055,
    1057,  1060,  1069,  1072,  1074,  1077,  1079,  1082,  1084,  1089,
    1098,  1101,  1103,  1105,  1107,  1109,  1112,  1114,  1116,  1119,
    1121,  1122,  1125,  1128,  1130,  1131,  1134,  1137,  1139,  1141,
    1144,  1147,  1150,  1152,  1154,  1156,  1158,  1160,  1162,  1163,
    1165,  1168,  1170,  1175,  1181,  1182,  1185,  1187,  1193,  1196,
    1199,  1201,  1203,  1205,  1208,  1210,  1213,  1215,  1217,  1218,
    1220,  1222,  1223,  1225,  1231,  1238,  1243,  1247,  1254,  1257,
    1259,  1263,  1265,  1267,  1269,  1273,  1280,  1288,  1294,  1296,
    1298,  1303,  1309,  1311,  1315,  1316,  1318,  1321,  1323,  1328,
    1330,  1333,  1335,  1338,  1342,  1345,  1347,  1350,  1352,  1357,
    1360,  1362,  1364,  1368,  1370,  1373,  1377,  1380,  1381,  1383,
    1385,  1390,  1393,  1394,  1396,  1398,  1401,  1402,  1404,  1406,
    1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,  1427,
    1430,  1433,  1436,  1438,  1440,  1442,  1443,  1445,  1446,  1448,
    1449,  1451,  1452,  1454,  1455,  1458,  1461,  1462,  1464,  1467,
    1469,  1476,  1482,  1484,  1486,  1488,  1491,  1494,  1496,  1498,
    1500,  1502,  1505,  1507,  1509,  1511,  1514,  1516,  1518,  1521,
    1524,  1527,  1528,  1530,  1531,  1533,  1535,  1537,  1539,  1541,
    1543,  1545,  1547,  1550,  1553,  1555,  1558,  1562,  1564,  1567,
    1570,  1575,  1582,  1584,  1595,  1597,  1600,  1604,  1608,  1611,
    1614,  1617,  1620,  1623,  1626,  1629,  1634,  1639,  1644,  1648,
    1652,  1658,  1663,  1668,  1673,  1677,  1681,  1685,  1689,  1692,
    1695,  1700,  1704,  1708,  1712,  1716,  1721,  1726,  1731,  1736,
    1742,  1747,  1754,  1762,  1767,  1772,  1778,  1781,  1785,  1789,
    1793,  1796,  1800,  1804,  1808,  1812,  1817,  1821,  1827,  1834,
    1838,  1842,  1847,  1851,  1855,  1859,  1863,  1867,  1873,  1877,
    1881,  1886,  1890,  1893,  1896,  1898,  1902,  1907,  1912,  1917,
    1922,  1927,  1934,  1939,  1944,  1950,  1955,  1960,  1965,  1970,
    1976,  1981,  1988,  1996,  2001,  2006,  2012,  2018,  2024,  2030,
    2036,  2042,  2050,  2056,  2062,  2069,  2075,  2081,  2087,  2093,
    2100,  2106,  2114,  2123,  2129,  2135,  2142,  2146,  2150,  2154,
    2158,  2162,  2168,  2172,  2176,  2181,  2185,  2189,  2193,  2197,
    2202,  2206,  2212,  2219,  2223,  2227,  2232,  2236,  2240,  2244,
    2248,  2252,  2258,  2262,  2266,  2271,  2276,  2281,  2285,  2291,
    2296,  2301,  2304,  2308,  2315,  2322,  2324,  2326,  2328,  2331,
    2334,  2337,  2341,  2345,  2348,  2361,  2364,  2367,  2369,  2373,
    2378,  2381,  2382,  2386,  2388,  2390,  2393,  2396,  2399,  2402,
    2405,  2410,  2415,  2420,  2424,  2429,  2435,  2443,  2452,  2459,
    2464,  2473,  2483,  2490,  2497,  2505,  2516,  2528,  2541,  2551,
    2557,  2562,  2568,  2575,  2579,  2585,  2591,  2597,  2604,  2610,
    2615,  2625,  2636,  2648,  2658,  2665,  2672,  2679,  2686,  2693,
    2700,  2707,  2714,  2721,  2729,  2737,  2740,  2745,  2750,  2755,
    2760,  2766,  2771,  2776,  2782,  2788,  2792,  2797,  2802,  2807,
    2812,  2819,  2827,  2836,  2846,  2853,  2864,  2876,  2889,  2899,
    2903,  2906,  2910,  2916,  2923,  2931,  2936,  2940,  2944,  2951,
    2958,  2965,  2973,  2980,  2988,  2993,  2998,  3003,  3010,  3020,
    3025,  3029,  3036,  3044,  3052,  3055,  3059,  3063,  3067,  3072,
    3075,  3078,  3083,  3091,  3102,  3106,  3108,  3112,  3115,  3118,
    3121,  3124,  3128,  3134,  3139,  3145,  3148,  3156,  3160,  3163,
    3166,  3170,  3173,  3176,  3179,  3183,  3186,  3190,  3195,  3199,
    3203,  3209,  3216,  3221,  3224,  3228,  3231,  3234,  3239,  3243,
    3247,  3250,  3254,  3256,  3259,  3261,  3264,  3267,  3270,  3272,
    3274,  3276,  3278,  3281,  3283,  3286,  3289,  3291,  3294,  3297,
    3299,  3302,  3304,  3306,  3308,  3310,  3312,  3314,  3316,  3318,
    3319,  3321,  3324,  3327,  3330,  3334,  3340,  3348,  3356,  3363,
    3370,  3377,  3384,  3390,  3397,  3404,  3411,  3418,  3425,  3432,
    3439,  3450,  3458,  3466,  3474,  3484,  3494,  3505,  3518,  3531,
    3534,  3537,  3541,  3546,  3551,  3556,  3559,  3564,  3569,  3571,
    3573,  3575,  3577,  3579,  3581,  3583,  3585,  3588,  3590,  3592,
    3594,  3598,  3602,  3607,  3614,  3625,  3633,  3641,  3647,  3652,
    3659,  3670,  3678,  3686,  3692,  3695,  3698,  3702,  3707,  3713,
    3717,  3723,  3729,  3733,  3738,  3744,  3750,  3756,  3760,  3766,
    3769,  3773,  3777,  3783,  3787,  3791,  3795,  3800,  3806,  3812,
    3816,  3822,  3828,  3832,  3837,  3843,  3849,  3852,  3855,  3859,
    3865,  3872,  3879,  3883,  3887,  3891,  3898,  3904,  3910,  3913,
    3917,  3923,  3930,  3934,  3937,  3940,  3944,  3947,  3951,  3954,
    3958,  3964,  3971,  3974,  3977,  3980,  3982,  3987,  3992,  3994,
    3997,  4000,  4003,  4006,  4009,  4012,  4015,  4019,  4022,  4026,
    4029,  4033,  4035,  4037,  4039,  4041,  4043,  4044,  4047,  4048,
    4051,  4052,  4054,  4055,  4056,  4058,  4060,  4062,  4064,  4066,
    4074,  4083,  4086,  4091,  4094,  4099,  4106,  4109,  4111,  4113,
    4117,  4121,  4123,  4127,  4132,  4135,  4137,  4141,  4145,  4150,
    4154,  4158,  4162,  4164,  4166,  4168,  4170,  4172,  4174,  4176,
    4178,  4180,  4182,  4184,  4186,  4188,  4190,  4193,  4194,  4195,
    4198,  4200,  4204,  4206,  4210,  4212,  4215,  4218,  4220,  4224,
    4225,  4226,  4229,  4232,  4234,  4238,  4244,  4246,  4249,  4252,
    4255,  4257,  4259,  4261,  4263,  4268,  4271,  4275,  4279,  4282,
    4286,  4289,  4292,  4295,  4299,  4303,  4307,  4310,  4314,  4316,
    4320,  4324,  4326,  4329,  4332,  4335,  4338,  4340,  4342,  4344,
    4346,  4349,  4352,  4356,  4360,  4362,  4365,  4369,  4373,  4375,
    4378,  4380,  4382,  4384,  4386,  4388,  4391,  4394,  4399,  4401,
    4404,  4407,  4410,  4414,  4416,  4418,  4420,  4423,  4426,  4429,
    4432,  4435,  4439,  4443,  4447,  4451,  4455,  4459,  4463,  4465,
    4468,  4471,  4474,  4478,  4481,  4485,  4489,  4492,  4495,  4498,
    4501,  4504,  4507,  4510,  4513,  4516,  4519,  4522,  4525,  4528,
    4531,  4535,  4539,  4543,  4546,  4549,  4552,  4555,  4558,  4561,
    4564,  4567,  4570,  4573,  4576,  4579,  4583,  4587,  4591,  4596,
    4599,  4601,  4603,  4605,  4607,  4608,  4614,  4616,  4623,  4627,
    4629,  4632,  4635,  4639,  4642,  4646,  4650,  4653,  4656,  4659,
    4662,  4665,  4668,  4672,  4675,  4678,  4682,  4684,  4688,  4693,
    4695,  4698,  4704,  4711,  4718,  4721,  4723,  4726,  4729,  4735,
    4742
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     346,     0,    -1,    96,   348,    -1,    20,   378,    -1,    44,
     380,    -1,    41,    66,     5,    -1,    46,   385,    -1,    59,
      -1,    64,    -1,    65,   387,    -1,    67,   277,     5,    -1,
      68,   392,    -1,    69,   394,    -1,    77,   395,    -1,    84,
     404,    -1,    86,   406,    -1,    87,   407,    -1,    95,   349,
      -1,   124,   408,    -1,   135,   409,    -1,   139,   451,    -1,
     142,   454,    -1,   147,    -1,   148,   349,    -1,   154,   460,
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
      84,   349,    -1,   140,   349,    -1,   239,   349,    -1,     4,
      -1,   337,    -1,   341,    -1,   206,    -1,   288,    -1,   199,
      -1,   342,    -1,   205,    -1,   118,    -1,    -1,   240,    38,
      -1,   131,    38,    -1,   240,    -1,   131,    -1,    -1,   352,
      -1,   347,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,    11,    -1,   353,   353,    -1,   354,   355,    -1,   355,
     355,    -1,   347,   347,    -1,   155,    -1,   216,    -1,   101,
      -1,    19,    -1,   358,    -1,   304,    -1,   305,    -1,   306,
      -1,   307,    -1,   308,    -1,   309,    -1,   310,    -1,   311,
      -1,   312,    -1,   313,    -1,   314,    -1,   315,    -1,   316,
      -1,   317,    -1,   318,    -1,   319,    -1,   320,    -1,   321,
      -1,   322,    -1,   323,    -1,   324,    -1,   325,    -1,   326,
      -1,   327,    -1,   328,    -1,   329,    -1,   330,    -1,   331,
      -1,    56,    -1,   211,    -1,   171,    -1,   175,    -1,   224,
      -1,   268,    -1,   269,    -1,    28,    -1,   260,    -1,   149,
      -1,    30,    -1,   248,    -1,   243,    -1,    94,    -1,   161,
      -1,    -1,   126,    -1,   127,    -1,    35,    -1,   128,    -1,
     162,    -1,   152,    -1,   133,    -1,   273,    -1,   106,    -1,
     146,    -1,    -1,    97,    -1,   254,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   258,    -1,   163,    -1,    -1,
      17,    -1,   157,    -1,    -1,   155,    -1,   182,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   343,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   150,
      -1,   218,    -1,   219,    -1,   232,    -1,   271,    -1,    -1,
      32,    -1,   274,    -1,    -1,   195,    -1,    42,    -1,    43,
      -1,   168,    -1,   169,    -1,   298,   377,    -1,    47,   374,
      -1,    74,   375,    -1,   148,   376,    -1,   184,   529,    -1,
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
     117,   382,    -1,   132,   383,    -1,    53,   261,     4,    -1,
     285,   384,    -1,   121,     5,    -1,    59,    -1,   347,   347,
      -1,   347,    -1,   347,   347,    -1,   347,    12,   347,   347,
      -1,   347,   347,    12,   347,   347,    -1,   285,   347,    -1,
     285,   347,   347,    -1,   285,   347,    12,   347,   347,    -1,
     285,   347,   347,    12,   347,   347,    -1,    32,    -1,   274,
      -1,   122,    -1,   347,   347,    12,    59,     5,     5,     5,
      -1,   347,   347,     4,   347,   347,    12,    59,     5,     5,
       5,     5,    -1,   347,   347,    12,   347,   347,     5,     5,
       5,    -1,   347,   347,     4,   347,   347,    12,   347,   347,
       5,     5,     5,     5,    -1,   347,    -1,   347,   347,    -1,
     285,   386,    -1,   122,    -1,   347,    -1,   347,   347,    -1,
     250,   388,    -1,   190,   389,    -1,   185,   390,    -1,   295,
     347,   347,    -1,   339,   391,    -1,   226,   349,    -1,   136,
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
      -1,   295,    -1,   136,    -1,   174,    -1,   264,    -1,    46,
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
     357,   356,    -1,    33,     4,    -1,   142,   116,     5,    -1,
      41,    66,    -1,    44,   410,    -1,    46,   412,    -1,    65,
     413,    -1,    68,   417,    -1,    67,   416,    -1,    69,   419,
      -1,    77,   421,    -1,    79,   424,    -1,    84,   425,    -1,
      86,   426,    -1,    88,   428,    -1,    87,   427,    -1,    93,
     429,    -1,    95,    -1,   123,   433,    -1,   139,   439,    -1,
     150,     5,     5,     4,    -1,   151,    89,     5,     5,   347,
     347,   359,     4,    -1,   154,   431,    -1,   158,   430,    -1,
     160,    16,    -1,   185,    -1,   181,   499,   493,    -1,   182,
     440,    -1,   194,    66,    -1,   209,    -1,   210,   441,    -1,
     217,   276,   359,   347,   347,     4,     4,     5,    -1,   239,
     442,    -1,   241,    -1,   264,   443,    -1,   280,    -1,   281,
     444,    -1,   289,    -1,   296,   359,   347,   347,    -1,   302,
      89,     5,     5,   347,   347,   359,     4,    -1,   304,   449,
      -1,   340,    -1,   100,    -1,   117,    -1,   132,    -1,    53,
     261,    -1,    88,    -1,   121,    -1,    71,   411,    -1,   172,
      -1,    -1,   185,     5,    -1,   103,     5,    -1,   117,    -1,
      -1,   399,   400,    -1,   347,   400,    -1,   250,    -1,   190,
      -1,   185,   414,    -1,   295,   167,    -1,   339,   415,    -1,
     226,    -1,   190,    -1,   243,    -1,    78,    -1,   243,    -1,
     170,    -1,    -1,   277,    -1,   167,   418,    -1,     4,    -1,
       4,   359,   347,   347,    -1,     4,   347,   347,   360,   347,
      -1,    -1,   167,   420,    -1,   175,    -1,     4,   347,   347,
     360,   347,    -1,   357,   362,    -1,    65,   422,    -1,    66,
      -1,    91,    -1,   167,    -1,   203,   167,    -1,   184,    -1,
      69,   423,    -1,   264,    -1,   333,    -1,    -1,   190,    -1,
     250,    -1,    -1,   175,    -1,   347,   347,   357,   362,   363,
      -1,   359,   347,   347,   357,   362,   363,    -1,   347,   357,
     357,     4,    -1,   357,   362,   363,    -1,    59,   357,   362,
     363,   357,   364,    -1,   281,   357,    -1,   359,    -1,   357,
     362,   363,    -1,   272,    -1,    33,    -1,   359,    -1,   357,
     362,   363,    -1,   357,   362,   356,   347,   347,     5,    -1,
       4,   357,   362,   356,   347,   347,     5,    -1,   359,   347,
     347,     4,     4,    -1,     5,    -1,    65,    -1,   359,   347,
     347,     5,    -1,     6,     4,     4,     4,     4,    -1,    88,
      -1,   119,   193,   432,    -1,    -1,     4,    -1,   347,   347,
      -1,   196,    -1,    59,   357,   362,   363,    -1,    81,    -1,
     100,   436,    -1,    45,    -1,   116,   434,    -1,   119,   193,
     437,    -1,   144,   435,    -1,   145,    -1,   204,   193,    -1,
     261,    -1,   261,   357,   362,   364,    -1,   262,   438,    -1,
     333,    -1,     4,    -1,   359,   347,   347,    -1,     4,    -1,
     164,     5,    -1,     4,   164,     5,    -1,   304,     4,    -1,
      -1,     4,    -1,   350,    -1,   350,   359,   347,   347,    -1,
     350,     4,    -1,    -1,     4,    -1,   357,    -1,     4,   357,
      -1,    -1,   208,    -1,   297,    -1,    66,    -1,   180,    -1,
     284,    -1,   226,    -1,    61,    -1,   275,    -1,   298,    -1,
     132,    -1,   233,    -1,   298,   448,    -1,    47,   445,    -1,
      74,   446,    -1,   148,   447,    -1,   184,    -1,    37,    -1,
     247,    -1,    -1,    66,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,   220,    -1,    -1,    16,   450,    -1,   193,   358,
      -1,    -1,   221,    -1,    83,   452,    -1,    99,    -1,   357,
     362,   363,   453,     5,     5,    -1,   357,   362,   363,   453,
       5,    -1,    20,    -1,   229,    -1,    19,    -1,    44,   455,
      -1,    77,   456,    -1,    84,    -1,    94,    -1,    95,    -1,
     101,    -1,   123,   457,    -1,   139,    -1,   154,    -1,   161,
      -1,   181,   458,    -1,   216,    -1,   264,    -1,   275,   357,
      -1,   304,   459,    -1,    72,     5,    -1,    -1,    31,    -1,
      -1,    44,    -1,    87,    -1,   189,    -1,   148,    -1,   252,
      -1,   213,    -1,   290,    -1,   357,    -1,   114,   357,    -1,
      58,   357,    -1,    18,    -1,   281,   357,    -1,   197,     4,
       4,    -1,   115,    -1,   183,     5,    -1,    88,   462,    -1,
     253,   119,   193,   461,    -1,   253,     6,     4,     4,     4,
       4,    -1,   294,    -1,   304,   347,   347,   347,   347,   347,
     347,   347,   347,     4,    -1,     5,    -1,     5,     4,    -1,
       4,     4,    56,    -1,     4,     4,   357,    -1,   190,   349,
      -1,    26,   464,    -1,   111,   466,    -1,   123,   467,    -1,
     157,   480,    -1,   202,   478,    -1,   215,   479,    -1,     5,
      14,     5,   367,    -1,     5,    15,     5,   367,    -1,     5,
      61,     5,   367,    -1,     5,   187,   367,    -1,     5,   188,
     367,    -1,     5,   256,   365,     4,   367,    -1,     5,   265,
       4,   367,    -1,     5,   266,     4,   367,    -1,     5,   297,
       5,   367,    -1,   239,    87,   465,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     187,    -1,     5,   188,    -1,     5,   256,   365,     4,    -1,
       5,   265,     4,    -1,     5,   266,     4,    -1,     5,   297,
       5,    -1,     5,     5,   263,    -1,     5,    14,     5,   367,
      -1,     5,    15,     5,   367,    -1,     5,    61,     5,   367,
      -1,     5,   187,   366,   367,    -1,     5,     5,   263,   366,
     367,    -1,     5,   188,   366,   367,    -1,     5,   256,   365,
       4,   366,   367,    -1,     5,   270,   365,     4,     4,   366,
     367,    -1,     5,   265,     4,   367,    -1,     5,   266,     4,
     367,    -1,     5,   297,     5,   366,   367,    -1,   262,   468,
      -1,   116,    87,   469,    -1,   239,   155,   477,    -1,   239,
      87,   476,    -1,   189,   470,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   187,
     366,    -1,     5,     5,   263,   366,    -1,     5,   188,   366,
      -1,     5,   256,   365,     4,   366,    -1,     5,   270,   365,
       4,     4,   366,    -1,     5,   265,     4,    -1,     5,   266,
       4,    -1,     5,   297,     5,   366,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     187,   366,    -1,     5,   188,   366,    -1,     5,   256,   365,
       4,   366,    -1,     5,   265,     4,    -1,     5,   266,     4,
      -1,     5,   297,     5,   366,    -1,   155,   160,   471,    -1,
     160,   472,    -1,   155,   473,    -1,   474,    -1,   155,   332,
     475,    -1,     5,    14,     5,   367,    -1,     5,    15,     5,
     367,    -1,     5,    61,     5,   367,    -1,     5,   187,   366,
     367,    -1,     5,   188,   366,   367,    -1,     5,   256,   365,
       4,   366,   367,    -1,     5,   265,     4,   367,    -1,     5,
     266,     4,   367,    -1,     5,   297,     5,   366,   367,    -1,
       5,    14,     5,   367,    -1,     5,    15,     5,   367,    -1,
       5,    61,     5,   367,    -1,     5,   187,   366,   367,    -1,
       5,     5,   263,   366,   367,    -1,     5,   188,   366,   367,
      -1,     5,   256,   365,     4,   366,   367,    -1,     5,   270,
     365,     4,     4,   366,   367,    -1,     5,   265,     4,   367,
      -1,     5,   266,     4,   367,    -1,     5,   297,     5,   366,
     367,    -1,   358,     5,    14,     5,   367,    -1,   358,     5,
      15,     5,   367,    -1,   358,     5,    61,     5,   367,    -1,
     358,     5,   187,   366,   367,    -1,   358,     5,   188,   366,
     367,    -1,   358,     5,   256,   365,     4,   366,   367,    -1,
     358,     5,   265,     4,   367,    -1,   358,     5,   266,     4,
     367,    -1,   358,     5,   297,     5,   366,   367,    -1,   358,
       5,    14,     5,   367,    -1,   358,     5,    15,     5,   367,
      -1,   358,     5,    61,     5,   367,    -1,   358,     5,   187,
     366,   367,    -1,   358,     5,     5,   263,   366,   367,    -1,
     358,     5,   188,   366,   367,    -1,   358,     5,   256,   365,
       4,   366,   367,    -1,   358,     5,   270,   365,     4,     4,
     366,   367,    -1,   358,     5,   265,     4,   367,    -1,   358,
       5,   266,     4,   367,    -1,   358,     5,   297,     5,   366,
     367,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   187,   366,    -1,     5,   188,
     366,    -1,     5,   256,   365,     4,   366,    -1,     5,   265,
       4,    -1,     5,   266,     4,    -1,     5,   297,     5,   366,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   187,   366,    -1,     5,     5,   263,
     366,    -1,     5,   188,   366,    -1,     5,   256,   365,     4,
     366,    -1,     5,   270,   365,     4,     4,   366,    -1,     5,
     265,     4,    -1,     5,   266,     4,    -1,     5,   297,     5,
     366,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   187,   366,    -1,     5,   188,
     366,    -1,     5,   256,   365,     4,   366,    -1,     5,   265,
       4,    -1,     5,   266,     4,    -1,     5,   297,     5,   366,
      -1,     5,    14,     5,   367,    -1,     5,    61,     5,   367,
      -1,     5,   187,   367,    -1,     5,   256,   365,     4,   367,
      -1,     5,   265,     4,   367,    -1,     5,   297,     5,   367,
      -1,     5,     5,    -1,   262,     5,     5,    -1,    93,     4,
       4,     4,     4,     4,    -1,   185,     4,     4,     4,     4,
       4,    -1,   110,    -1,   225,    -1,   349,    -1,   137,   349,
      -1,    88,   349,    -1,    66,     5,    -1,     5,     4,     4,
      -1,   294,   347,   347,    -1,   340,   347,    -1,     5,     5,
     358,   362,     5,     5,   358,   362,   347,   358,   364,     5,
      -1,    60,   487,    -1,    66,     5,    -1,    80,    -1,    73,
     492,     5,    -1,    73,   492,   297,     5,    -1,    75,    99,
      -1,    -1,    83,   485,   488,    -1,    89,    -1,    99,    -1,
      99,    17,    -1,   105,   491,    -1,   113,     4,    -1,   129,
       5,    -1,   148,    17,    -1,   148,   207,   347,   347,    -1,
     148,   286,   347,   347,    -1,     4,    20,   370,   349,    -1,
       4,    21,   352,    -1,     4,    21,   352,   359,    -1,     4,
      21,   352,   357,   362,    -1,     4,    22,   233,   347,   347,
       4,   359,    -1,     4,    22,   233,   347,   347,     4,   357,
     364,    -1,     4,    22,   233,     5,   357,   364,    -1,     4,
      48,   120,   349,    -1,     4,    49,   233,   347,   347,   347,
       4,   359,    -1,     4,    49,   233,   347,   347,   347,     4,
     357,   364,    -1,     4,    49,   233,     5,   357,   364,    -1,
       4,    48,   233,   347,   347,   359,    -1,     4,    48,   233,
     347,   347,   357,   364,    -1,     4,    52,   105,   352,   352,
       4,   347,   347,   347,     4,    -1,     4,    52,   105,   352,
     352,     4,   347,   347,   347,     4,   359,    -1,     4,    52,
     105,   352,   352,     4,   347,   347,   347,     4,   357,   362,
      -1,     4,    52,   105,     5,     5,   357,   362,   357,   364,
      -1,     4,    55,   486,     5,     5,    -1,     4,    62,   120,
     349,    -1,     4,    62,   233,   347,   359,    -1,     4,    62,
     233,   347,   357,   364,    -1,     4,    66,     5,    -1,     4,
      74,    27,   349,   349,    -1,     4,    74,   165,     5,     5,
      -1,     4,    74,   233,   347,   359,    -1,     4,    74,   233,
     347,   357,   364,    -1,     4,    74,   275,   357,   362,    -1,
       4,    75,   136,   349,    -1,     4,    82,   105,   352,   352,
       4,   347,   347,     4,    -1,     4,    82,   105,   352,   352,
       4,   347,   347,     4,   359,    -1,     4,    82,   105,   352,
     352,     4,   347,   347,     4,   357,   362,    -1,     4,    82,
     105,     5,     5,   357,   362,   357,   364,    -1,     4,    83,
      22,   233,   347,   347,    -1,     4,    83,    49,   233,   347,
     347,    -1,     4,    83,    52,    21,   347,   347,    -1,     4,
      83,    52,   233,   347,   347,    -1,     4,    83,   109,   233,
     347,   347,    -1,     4,    83,   112,    21,   347,   347,    -1,
       4,    83,   112,   233,   347,   347,    -1,     4,    83,    82,
      21,   347,   347,    -1,     4,    83,    82,   233,   347,   347,
      -1,     4,    83,   222,   301,     4,   347,   347,    -1,     4,
      83,   251,   301,     4,   347,   347,    -1,     4,    99,    -1,
       4,    99,    22,     4,    -1,     4,    99,    49,     4,    -1,
       4,    99,    52,     4,    -1,     4,    99,   109,     4,    -1,
       4,    99,    55,   486,     5,    -1,     4,    99,   112,     4,
      -1,     4,    99,    82,     4,    -1,     4,    99,   222,   301,
       4,    -1,     4,    99,   251,   301,     4,    -1,     4,    99,
     277,    -1,     4,    99,   277,     5,    -1,     4,    99,   277,
       4,    -1,     4,   105,    40,     4,    -1,     4,   108,   120,
     349,    -1,     4,   108,   233,   347,   347,   359,    -1,     4,
     108,   233,   347,   347,   357,   364,    -1,     4,   109,   233,
     347,   347,   347,     4,   359,    -1,     4,   109,   233,   347,
     347,   347,     4,   357,   364,    -1,     4,   109,   233,     5,
     357,   364,    -1,     4,   112,   105,   352,   352,     4,   347,
     347,   347,     4,    -1,     4,   112,   105,   352,   352,     4,
     347,   347,   347,     4,   359,    -1,     4,   112,   105,   352,
     352,     4,   347,   347,   347,     4,   357,   362,    -1,     4,
     112,   105,     5,     5,   357,   362,   357,   364,    -1,     4,
     129,     5,    -1,     4,   148,    -1,     4,   148,   207,    -1,
       4,   170,    27,   349,   349,    -1,     4,   170,   220,   359,
     356,   356,    -1,     4,   170,   220,   357,   362,   356,   356,
      -1,     4,   192,   347,   347,    -1,     4,   192,   130,    -1,
       4,   192,    36,    -1,     4,   192,   285,   359,   347,   347,
      -1,     4,   192,   285,   357,   362,   356,    -1,     4,   222,
     237,   347,   347,   359,    -1,     4,   222,   237,   347,   347,
     357,   364,    -1,     4,   251,   237,   347,   347,   359,    -1,
       4,   251,   237,   347,   347,   357,   364,    -1,     4,   220,
     255,   368,    -1,     4,   220,   261,     4,    -1,     4,   222,
     120,   349,    -1,     4,   227,   359,   356,   356,   347,    -1,
       4,   227,   357,   362,   356,   356,   347,   357,   364,    -1,
       4,   228,   505,   349,    -1,     4,   241,    40,    -1,     4,
     242,   220,   359,   356,   356,    -1,     4,   242,   220,   357,
     362,   356,   356,    -1,     4,   242,   275,   357,   362,   357,
     364,    -1,     4,   252,    -1,     4,   252,   207,    -1,     4,
     277,     5,    -1,     4,   279,     5,    -1,     4,   279,   241,
     349,    -1,     4,   291,    -1,     4,   293,    -1,     4,   299,
      27,   349,    -1,     4,   299,   220,   359,   356,   347,   352,
      -1,     4,   299,   220,   357,   362,   356,   357,   364,   347,
     352,    -1,     4,   333,     4,    -1,   163,    -1,   163,   347,
     347,    -1,   172,   500,    -1,   173,   501,    -1,   192,   502,
      -1,   226,   349,    -1,   228,   505,   349,    -1,   228,   505,
     349,   347,   347,    -1,   241,    40,   347,   347,    -1,   241,
     191,   347,   347,     4,    -1,   241,   110,    -1,   246,     5,
     492,   357,   362,   363,   349,    -1,   246,   278,     5,    -1,
     252,   509,    -1,   259,   510,    -1,     5,    66,     5,    -1,
       5,    80,    -1,     5,    99,    -1,     5,    89,    -1,     5,
     129,     5,    -1,     5,   148,    -1,     5,   148,   207,    -1,
       5,   192,   347,   347,    -1,     5,   192,   130,    -1,     5,
     192,    36,    -1,     5,   192,   285,   359,   356,    -1,     5,
     192,   285,   357,   362,   356,    -1,     5,   228,   505,   349,
      -1,     5,   252,    -1,     5,   252,   207,    -1,     5,   291,
      -1,     5,   293,    -1,   277,   105,     5,     5,    -1,   277,
      99,     5,    -1,   277,    99,    17,    -1,   277,     5,    -1,
     277,   294,     5,    -1,   213,    -1,   213,   357,    -1,   290,
      -1,   291,    17,    -1,   293,    17,    -1,   333,     4,    -1,
     252,    -1,   293,    -1,   148,    -1,   291,    -1,    40,   192,
      -1,   192,    -1,   110,   192,    -1,    40,   105,    -1,   105,
      -1,   110,   105,    -1,    40,   241,    -1,   241,    -1,   110,
     241,    -1,    99,    -1,   279,    -1,    66,    -1,   333,    -1,
     228,    -1,   129,    -1,   163,    -1,   294,    -1,    -1,     4,
      -1,    30,   349,    -1,   233,   347,    -1,   159,     4,    -1,
     208,     4,   347,    -1,    62,   347,   347,   347,   506,    -1,
     108,   347,   347,   347,   347,   351,   506,    -1,    48,   347,
     347,   347,   347,   351,   506,    -1,   222,   347,   347,   347,
     347,   506,    -1,   251,   347,   347,   347,   347,   506,    -1,
     170,   347,   347,   347,   347,   506,    -1,   299,   347,   347,
     347,   347,   506,    -1,   279,   347,   347,   351,   506,    -1,
      62,   220,   347,   347,   369,   506,    -1,    48,   220,   347,
     347,   369,   506,    -1,   102,   220,   347,   347,   369,   506,
      -1,    85,   220,   347,   347,   369,   506,    -1,   343,   220,
     347,   347,   369,   506,    -1,    27,   220,   347,   347,   369,
     506,    -1,    51,   220,   347,   347,   369,   506,    -1,   242,
     347,   347,   347,   347,   357,   362,   357,   364,   506,    -1,
      74,   347,   347,   347,   357,   362,   506,    -1,   227,   347,
     347,   347,   347,   347,   506,    -1,    22,   347,   347,   347,
     347,     4,   506,    -1,   109,   347,   347,   347,   347,   347,
       4,   351,   506,    -1,    49,   347,   347,   347,   347,   347,
       4,   351,   506,    -1,    82,   347,   347,   352,   352,     4,
     347,   347,     4,   506,    -1,   112,   347,   347,   352,   352,
       4,   347,   347,   347,     4,   351,   506,    -1,    52,   347,
     347,   352,   352,     4,   347,   347,   347,     4,   351,   506,
      -1,    75,   506,    -1,   278,   489,    -1,     5,   347,   347,
      -1,   297,     5,   347,   347,    -1,   347,   347,   297,     5,
      -1,     5,   357,   362,   356,    -1,     4,     4,    -1,    40,
     347,   347,     4,    -1,   191,   347,   347,     4,    -1,   110,
      -1,   104,    -1,   335,    -1,    63,    -1,   245,    -1,   244,
      -1,   230,    -1,   336,    -1,    60,   494,    -1,    66,    -1,
     129,    -1,   113,    -1,   141,   347,   347,    -1,   153,   347,
     347,    -1,   147,    20,    82,   357,    -1,   147,    20,   150,
       5,     5,     4,    -1,   147,    20,   218,     5,     5,     5,
       5,   357,   362,   371,    -1,   147,    20,   219,     5,     5,
     357,   371,    -1,   147,    20,   232,     5,     5,     5,   357,
      -1,   147,    20,   271,   357,   362,    -1,     4,    20,    82,
     357,    -1,     4,    20,   150,     5,     5,     4,    -1,     4,
      20,   218,     5,     5,     5,     5,   357,   362,   371,    -1,
       4,    20,   219,     5,     5,   357,   371,    -1,     4,    20,
     232,     5,     5,     5,   357,    -1,     4,    20,   271,   357,
     362,    -1,   153,    17,    -1,     4,    21,    -1,     4,    21,
     359,    -1,     4,    21,   357,   362,    -1,     4,    22,   233,
     357,   364,    -1,     4,    48,   120,    -1,     4,    49,   233,
     357,   364,    -1,     4,    48,   233,   357,   364,    -1,     4,
      52,    21,    -1,     4,    52,    21,   359,    -1,     4,    52,
      21,   357,   362,    -1,     4,    52,   233,   357,   364,    -1,
       4,    59,   357,   362,   363,    -1,     4,    62,   120,    -1,
       4,    62,   233,   357,   364,    -1,     4,    66,    -1,     4,
      74,    27,    -1,     4,    74,   165,    -1,     4,    74,   233,
     357,   364,    -1,     4,    74,   275,    -1,     4,    75,   136,
      -1,     4,    82,    21,    -1,     4,    82,    21,   359,    -1,
       4,    82,    21,   357,   362,    -1,     4,    82,   233,   357,
     364,    -1,     4,   108,   120,    -1,     4,   108,   233,   357,
     364,    -1,     4,   109,   233,   357,   364,    -1,     4,   112,
      21,    -1,     4,   112,    21,   359,    -1,     4,   112,    21,
     357,   362,    -1,     4,   112,   233,   357,   364,    -1,     4,
     129,    -1,     4,   148,    -1,     4,   170,    27,    -1,     4,
     170,   166,   357,   364,    -1,     4,   170,   220,   357,   362,
     363,    -1,     4,   179,   166,   347,   357,   364,    -1,     4,
     222,   120,    -1,     4,   220,   255,    -1,     4,   220,   261,
      -1,     4,   227,   220,   357,   362,   363,    -1,     4,   227,
     166,   357,   364,    -1,     4,   227,   283,   357,   364,    -1,
       4,   228,    -1,     4,   228,   505,    -1,     4,   242,   166,
     357,   364,    -1,     4,   242,   220,   357,   362,   363,    -1,
       4,   242,   275,    -1,     4,   252,    -1,     4,   277,    -1,
       4,   277,     4,    -1,     4,   279,    -1,     4,   279,   241,
      -1,     4,   289,    -1,     4,   299,    27,    -1,     4,   299,
     166,   357,   364,    -1,     4,   299,   220,   357,   362,   363,
      -1,     4,   333,    -1,   148,   495,    -1,   148,   203,    -1,
     203,    -1,   222,   251,   347,   347,    -1,   251,   251,   347,
     347,    -1,   226,    -1,   228,   505,    -1,   252,   496,    -1,
     252,   203,    -1,   259,   497,    -1,     5,    66,    -1,     5,
     129,    -1,     5,   153,    -1,     5,   228,   505,    -1,     5,
     277,    -1,     5,   277,   203,    -1,   277,    17,    -1,   277,
      98,   193,    -1,   333,    -1,    30,    -1,   233,    -1,   159,
      -1,   208,    -1,    -1,   347,   347,    -1,    -1,   347,   347,
      -1,    -1,   279,    -1,    -1,    -1,   221,    -1,   234,    -1,
     295,    -1,    57,    -1,    20,    -1,   492,   357,   362,   363,
     349,   507,   513,    -1,   252,   492,   357,   362,   363,   349,
     507,   513,    -1,   492,     5,    -1,   492,     5,   357,   362,
      -1,   492,     4,    -1,   492,     4,   357,   362,    -1,   123,
       5,     5,   490,     4,     5,    -1,   347,   347,    -1,   130,
      -1,    36,    -1,    40,   347,   347,    -1,   191,   347,   347,
      -1,   110,    -1,   285,   359,   356,    -1,   285,   357,   362,
     356,    -1,   503,   504,    -1,   504,    -1,   505,   344,   349,
      -1,    66,   344,     5,    -1,    92,   344,     4,     4,    -1,
     333,   344,     4,    -1,   129,   344,     5,    -1,   279,   344,
       5,    -1,   516,    -1,   517,    -1,   200,    -1,   252,    -1,
     148,    -1,    91,    -1,   125,    -1,   105,    -1,   192,    -1,
     241,    -1,    99,    -1,   156,    -1,   267,    -1,   498,    -1,
     498,   503,    -1,    -1,    -1,   508,   511,    -1,    17,    -1,
     207,   347,   347,    -1,   286,    -1,   286,   347,   347,    -1,
     349,    -1,   279,   349,    -1,   511,   512,    -1,   512,    -1,
     505,   344,   349,    -1,    -1,    -1,   514,   515,    -1,   515,
     516,    -1,   516,    -1,   277,   344,     5,    -1,    55,   344,
     486,     5,     5,    -1,    64,    -1,    66,     5,    -1,   180,
       4,    -1,   284,   347,    -1,   343,    -1,   341,    -1,   336,
      -1,   200,    -1,   347,   347,   347,   347,    -1,   347,   347,
      -1,   359,   347,   347,    -1,   357,   362,   356,    -1,   285,
     521,    -1,    39,   347,   347,    -1,   191,   522,    -1,   226,
     349,    -1,   347,   347,    -1,   359,   347,   347,    -1,   357,
     362,   356,    -1,    40,   347,   347,    -1,   347,   347,    -1,
     110,   347,   347,    -1,   349,    -1,   304,   358,   362,    -1,
       5,     4,     4,    -1,   294,    -1,    70,   525,    -1,   167,
       4,    -1,   238,     4,    -1,   247,   347,    -1,    54,    -1,
     138,    -1,   239,    -1,    90,    -1,   148,   527,    -1,   252,
     528,    -1,    40,   347,   347,    -1,   191,   347,   347,    -1,
     110,    -1,   257,   110,    -1,    40,   347,   347,    -1,   191,
     347,   347,    -1,   110,    -1,   257,   110,    -1,   186,    -1,
      13,    -1,   200,    -1,    34,    -1,   107,    -1,    61,     5,
      -1,   275,   357,    -1,   298,     4,     4,     4,    -1,   347,
      -1,   347,    97,    -1,   191,   533,    -1,   285,   347,    -1,
     285,   347,    97,    -1,    40,    -1,   347,    -1,   110,    -1,
      26,   535,    -1,   123,   537,    -1,   202,   547,    -1,   111,
     548,    -1,   215,     5,    -1,   119,     5,   372,    -1,    61,
       5,   372,    -1,   265,     4,   372,    -1,   239,    87,   536,
      -1,   119,     5,   372,    -1,    61,     5,   372,    -1,   265,
       4,   372,    -1,   538,    -1,   155,   538,    -1,   276,   539,
      -1,   262,   540,    -1,   116,    87,   541,    -1,   189,   542,
      -1,   239,   155,   544,    -1,   239,    87,   545,    -1,   236,
     546,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   119,     5,    -1,    61,     5,    -1,   265,     4,    -1,
     119,     5,    -1,    61,     5,    -1,   265,     4,    -1,   119,
       5,    -1,    61,     5,    -1,   265,     4,    -1,   155,   543,
      -1,   119,     5,     4,    -1,    61,     5,     4,    -1,   265,
       4,     4,    -1,   119,     5,    -1,    61,     5,    -1,   265,
       4,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   119,     5,    -1,    61,     5,    -1,   265,     4,    -1,
     119,     5,    -1,    61,     5,    -1,   265,     4,    -1,   119,
       5,   372,    -1,    61,     5,   372,    -1,   265,     4,   372,
      -1,   119,     5,     5,   372,    -1,   550,     4,    -1,    99,
      -1,    50,    -1,   134,    -1,   287,    -1,    -1,     4,   347,
     347,   347,   347,    -1,   201,    -1,   201,     4,   347,   347,
     347,   347,    -1,   123,   262,   552,    -1,     4,    -1,   347,
     357,    -1,     4,     4,    -1,     4,   347,   357,    -1,   347,
     347,    -1,   285,   347,   347,    -1,   358,   362,   363,    -1,
      16,   557,    -1,   237,     4,    -1,   235,   556,    -1,    23,
     555,    -1,     4,     4,    -1,     4,     5,    -1,   279,     4,
       5,    -1,     4,     4,    -1,     4,     5,    -1,   279,     4,
       5,    -1,     4,    -1,     4,   358,   362,    -1,     4,     6,
     358,   362,    -1,   225,    -1,   347,   347,    -1,   347,   347,
      12,   347,   347,    -1,   347,   347,    12,   359,   347,   347,
      -1,   347,   347,    12,   357,   362,   356,    -1,   285,   560,
      -1,   122,    -1,   122,   347,    -1,   347,   347,    -1,   347,
     347,    12,   347,   347,    -1,   347,   347,    12,   359,   347,
     347,    -1,   347,   347,    12,   357,   362,   356,    -1
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
    1733,  1736,  1740,  1743,  1745,  1748,  1751,  1755,  1760,  1765,
    1767,  1768,  1770,  1772,  1773,  1775,  1777,  1779,  1781,  1783,
    1784,  1786,  1788,  1792,  1797,  1799,  1801,  1803,  1805,  1807,
    1809,  1811,  1813,  1815,  1817,  1820,  1821,  1823,  1825,  1826,
    1828,  1830,  1831,  1832,  1834,  1836,  1837,  1838,  1840,  1841,
    1842,  1844,  1847,  1851,  1855,  1858,  1861,  1865,  1870,  1876,
    1877,  1878,  1880,  1881,  1883,  1887,  1889,  1890,  1891,  1893,
    1896,  1898,  1901,  1903,  1906,  1908,  1910,  1911,  1914,  1919,
    1922,  1923,  1926,  1929,  1933,  1934,  1936,  1937,  1938,  1940,
    1941,  1943,  1944,  1946,  1951,  1953,  1954,  1956,  1957,  1958,
    1959,  1960,  1961,  1963,  1965,  1967,  1968,  1970,  1971,  1973,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,
    1985,  1987,  1989,  1991,  1992,  1993,  1994,  1996,  1997,  1998,
    1999,  2000,  2002,  2003,  2004,  2005,  2006,  2007,  2010,  2011,
    2012,  2013,  2014,  2015,  2016,  2017,  2018,  2019,  2020,  2021,
    2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,  2033,
    2034,  2035,  2036,  2037,  2038,  2046,  2053,  2062,  2071,  2078,
    2085,  2093,  2101,  2108,  2113,  2118,  2123,  2128,  2133,  2138,
    2144,  2153,  2163,  2173,  2180,  2190,  2200,  2209,  2221,  2234,
    2239,  2242,  2244,  2246,  2251,  2255,  2258,  2260,  2262,  2265,
    2266,  2267,  2268,  2269,  2270,  2271,  2274,  2275,  2276,  2277,
    2278,  2279,  2281,  2283,  2285,  2287,  2289,  2291,  2294,  2296,
    2298,  2300,  2302,  2304,  2307,  2308,  2309,  2310,  2312,  2315,
    2316,  2318,  2320,  2321,  2322,  2324,  2327,  2330,  2331,  2333,
    2334,  2335,  2336,  2338,  2339,  2340,  2341,  2342,  2344,  2346,
    2347,  2349,  2352,  2353,  2354,  2356,  2358,  2359,  2360,  2361,
    2363,  2366,  2370,  2371,  2372,  2373,  2376,  2379,  2381,  2382,
    2383,  2385,  2388,  2389,  2391,  2392,  2393,  2394,  2395,  2397,
    2398,  2400,  2403,  2404,  2405,  2406,  2407,  2409,  2411,  2412,
    2413,  2414,  2416,  2418,  2419,  2420,  2421,  2422,  2423,  2425,
    2426,  2428,  2431,  2432,  2433,  2434,  2437,  2438,  2441,  2442,
    2445,  2446,  2449,  2462,  2463,  2467,  2468,  2472,  2473,  2476,
    2481,  2488,  2490,  2493,  2495,  2498,  2502,  2503,  2504,  2505,
    2506,  2507,  2508,  2510,  2514,  2515,  2518,  2519,  2520,  2521,
    2522,  2523,  2524,  2525,  2528,  2529,  2530,  2531,  2532,  2533,
    2534,  2535,  2536,  2537,  2538,  2541,  2542,  2545,  2546,  2546,
    2549,  2550,  2551,  2552,  2555,  2556,  2559,  2560,  2563,  2567,
    2568,  2568,  2571,  2572,  2575,  2578,  2582,  2583,  2584,  2585,
    2588,  2589,  2590,  2591,  2594,  2596,  2597,  2602,  2604,  2605,
    2606,  2607,  2610,  2611,  2616,  2620,  2621,  2622,  2625,  2626,
    2631,  2632,  2635,  2637,  2638,  2639,  2644,  2645,  2646,  2647,
    2650,  2651,  2654,  2656,  2658,  2659,  2662,  2664,  2665,  2666,
    2669,  2670,  2673,  2674,  2675,  2678,  2679,  2680,  2683,  2684,
    2685,  2686,  2687,  2690,  2691,  2692,  2695,  2696,  2697,  2698,
    2699,  2702,  2704,  2706,  2708,  2711,  2713,  2715,  2718,  2719,
    2720,  2721,  2722,  2723,  2724,  2725,  2726,  2729,  2730,  2731,
    2734,  2735,  2736,  2739,  2740,  2741,  2744,  2745,  2746,  2749,
    2750,  2751,  2752,  2755,  2756,  2757,  2760,  2761,  2762,  2765,
    2766,  2767,  2770,  2771,  2772,  2775,  2777,  2779,  2783,  2787,
    2788,  2791,  2792,  2793,  2796,  2797,  2799,  2800,  2802,  2805,
    2806,  2807,  2808,  2811,  2812,  2815,  2817,  2818,  2819,  2820,
    2823,  2824,  2825,  2828,  2829,  2830,  2833,  2834,  2839,  2843,
    2850,  2851,  2853,  2858,  2860,  2863,  2864,  2865,  2866,  2868,
    2873
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
  "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_",
  "LABEL_", "LENGTH_", "LEVEL_", "LITTLE_", "LITTLEENDIAN_", "LINE_",
  "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "MACOSX_", "MAGNIFIER_",
  "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MESSAGE_", "METHOD_",
  "MINMAX_", "MIP_", "MMAP_", "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_", "OFF_", "ON_", "ONLY_",
  "OPTION_", "ORIENT_", "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_",
  "PHOTO_", "PHYSICAL_", "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_",
  "POINTER_", "POLYGON_", "POSTSCRIPT_", "POW_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "REGION_", "REPLACE_", "RESAMPLE_", "RESET_", "RESOLUTION_",
  "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_",
  "SAVE_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_", "SEGMENT_",
  "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_", "SHARED_", "SHIFT_",
  "SHMID_", "SHOW_", "SINH_", "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_",
  "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_",
  "STATS_", "STATUS_", "SUPERGALACTIC_", "SUM_", "SYSTEM_", "TABLE_",
  "TAG_", "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_",
  "THICK_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_",
  "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_", "USER_",
  "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_",
  "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_",
  "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_",
  "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_",
  "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_",
  "WIN32_", "XML_", "XY_", "YES_", "ZMAX_", "ZSCALE_", "ZOOM_", "'Y'",
  "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug", "yesno",
  "fileNameType", "optangle", "angle", "sexagesimal", "hms", "dms",
  "coord", "coordSystem", "wcsSystem", "internalSystem", "scaleType",
  "minmaxMode", "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad",
  "layerType", "pointShape", "pointSize", "analysisMethod",
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
     484,   484,   484,   484,   484,   484,   484,   484,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   487,
     487,   487,   487,   487,   487,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   489,   489,   489,   489,   490,   491,   491,   491,   492,
     492,   492,   492,   492,   492,   492,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   494,   494,   494,   494,   495,   495,   496,   496,
     497,   497,   498,   499,   499,   499,   499,   499,   499,   500,
     500,   501,   501,   501,   501,   501,   502,   502,   502,   502,
     502,   502,   502,   502,   503,   503,   504,   504,   504,   504,
     504,   504,   504,   504,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   506,   506,   507,   508,   507,
     509,   509,   509,   509,   510,   510,   511,   511,   512,   513,
     514,   513,   515,   515,   516,   517,   518,   518,   518,   518,
     519,   519,   519,   519,   520,   520,   520,   520,   520,   520,
     520,   520,   521,   521,   521,   522,   522,   522,   523,   523,
     523,   523,   524,   524,   524,   524,   525,   525,   525,   525,
     526,   526,   527,   527,   527,   527,   528,   528,   528,   528,
     529,   529,   530,   530,   530,   531,   531,   531,   532,   532,
     532,   532,   532,   533,   533,   533,   534,   534,   534,   534,
     534,   535,   535,   535,   535,   536,   536,   536,   537,   537,
     537,   537,   537,   537,   537,   537,   537,   538,   538,   538,
     539,   539,   539,   540,   540,   540,   541,   541,   541,   542,
     542,   542,   542,   543,   543,   543,   544,   544,   544,   545,
     545,   545,   546,   546,   546,   547,   547,   547,   548,   549,
     549,   550,   550,   550,   551,   551,   551,   551,   551,   552,
     552,   552,   552,   553,   553,   554,   554,   554,   554,   554,
     555,   555,   555,   556,   556,   556,   557,   557,   557,   558,
     559,   559,   559,   559,   559,   560,   560,   560,   560,   560,
     560
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
       4,     8,     2,     2,     2,     1,     3,     2,     2,     1,
       2,     8,     2,     1,     2,     1,     2,     1,     4,     8,
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
     470,     0,     0,     0,     0,     0,   963,   968,   971,   970,
     974,   975,   976,   978,   982,   987,   988,   990,   991,   994,
     995,   999,   154,   157,  1006,   154,  1007,  1010,   154,  1020,
     154,     0,     0,     0,     0,   957,     0,     0,   510,     0,
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
       0,     0,     0,   313,   436,   351,   959,     0,   186,     0,
    1000,  1001,  1005,  1011,  1021,   953,     0,   186,     0,   361,
     369,     0,   592,   617,   626,   627,   628,   629,   630,   164,
     632,   633,   167,   164,   674,   646,   647,   648,   649,   650,
     164,   652,   653,   167,   639,   167,   164,   645,   659,   167,
     164,   665,   681,   164,   691,   608,     0,   157,   736,   744,
       0,     0,     0,     0,     0,   773,   774,   791,     0,     0,
       0,   804,   811,     0,   822,   823,   813,   157,   832,     0,
     179,  1052,  1052,    83,     0,  1052,     0,  1052,   905,   143,
       0,  1077,     0,  1080,  1114,  1081,  1079,  1076,     0,  1052,
    1052,    83,     0,     0,  1052,  1052,     0,     0,  1052,   934,
     932,   933,   912,  1052,  1052,  1098,  1109,     0,  1065,   846,
       0,     0,   249,     0,     0,     0,     0,   187,   188,   961,
     962,     0,   955,   956,     0,   167,   634,   671,   167,   654,
     641,   167,   661,   167,   682,     0,   737,   157,   740,   157,
       0,   157,     0,   157,   792,   157,     0,   157,     0,  1052,
     918,   914,  1052,     0,   919,     0,   913,  1052,     0,  1078,
       0,   916,   915,  1052,     0,     0,   910,   908,  1052,   143,
     909,   911,   917,  1109,  1059,     0,     0,  1099,  1107,     0,
       0,     0,   278,   299,   302,   300,     0,     0,   143,   143,
     553,   631,   651,   642,   662,   157,   741,   748,     0,   763,
     760,   793,   798,     0,   818,     0,   923,   907,    83,     0,
     921,  1115,     0,   906,    83,     0,   922,     0,  1060,  1111,
    1113,     0,  1106,     0,     0,   283,     0,     0,   186,   186,
       0,   745,   143,   761,   795,   833,  1052,     0,     0,  1052,
       0,   157,  1112,  1108,   248,     0,     0,     0,   960,   954,
     714,   143,   746,   762,   143,   796,   925,     0,  1052,   924,
       0,  1052,   250,     0,     0,   747,   797,    83,   926,    83,
     920,   292,   291,  1052,  1052,   928,   927
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1255,  2514,  2515,   430,   431,
     432,   433,   156,   157,   158,    94,   806,   456,  1196,  1675,
    1345,  1358,  1341,  1922,  2611,  1405,  2659,  1575,   335,   747,
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
    2271,  1954,  2646,  2647,  1105,  1108,  2717,  2718,  2714,  2715,
    2759,  2272,  2273,   278,   284,   292,   690,   685,   297,   302,
     700,   706,  1132,  1137,   756,   744,   308,   312,   713,   318,
     720,  1580,   733,   734,  1168,  1163,  1586,  1153,  1592,  1604,
    1600,  1157,   738,   722,   323,   324,   339,  1183,   342,   348,
     774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2540
static const yytype_int16 yypact[] =
{
    4270,   748,    39,   109,    28, -2540, -2540,   704,  -137,   473,
     843,   835,   471,  2927,   158,   369,  1646,    56,  1630,   523,
    2108, -2540,   369,   772,   247,   720,    -6,    51,   411,    86,
      49,   457,   616,  1065,   118,   793,   438,    86, -2540,   152,
      16,  1121, -2540,    32,   568,   372, -2540,   500, -2540,    37,
    3915,   357,    40,   633, -2540,  1255, -2540,   650,   181,   400,
     660,   750,    87,   719,    -8,   444, -2540, -2540, -2540,   591,
     491, -2540,   218,    46,   369,    34,   491,    75, -2540,   813,
     491, -2540, -2540,    26,   491, -2540, -2540, -2540, -2540,   491,
   -2540, -2540, -2540, -2540, -2540, -2540,    70,   767,   815,   819,
     908, -2540,   491,  1079,   491,   491,   964,   491, -2540, -2540,
   -2540,   667, -2540, -2540, -2540, -2540,  4894, -2540, -2540, -2540,
   -2540, -2540, -2540,   491, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,  1293, -2540,   491, -2540,
     861, -2540, -2540,   369,   369,   369,   369,   369,   369,   369,
   -2540, -2540,   369,   369,   369,   369, -2540,   787, -2540,   846,
    1479,   797,    85,   639,   761,   823,  4369,   190,  4946,  4866,
     918,  4894,  3515, -2540,   470,   -73,   948,   884,   868,   528,
     959,    86,    -7, -2540,   922, -2540,   769,   729,   194, -2540,
     -36, -2540,   425, -2540,    12,   937,    44, -2540, -2540,  5129,
   -2540, -2540, -2540,   935,  1021, -2540, -2540, -2540, -2540,   453,
   -2540, -2540, -2540,   923, -2540, -2540,  5129,  4454, -2540, -2540,
     171, -2540,  1051,  1066,   149, -2540,   491, -2540,  1076,    52,
    1089,   582,    36,  1096,    65, -2540, -2540, -2540,  1104,  1105,
     369,   369,   491,   491, -2540, -2540,  1115, -2540, -2540, -2540,
   -2540, -2540, -2540,  2580, -2540,  1125,  1129,   491, -2540,  1134,
   -2540, -2540, -2540, -2540, -2540,   491,   848,   369,  3158,   491,
    1293,   491, -2540,  1139, -2540,  5095, -2540, -2540,   458,  1140,
    1142,   491, -2540, -2540,   386,  1143,  5129,  1146, -2540,   864,
     491,  1055, -2540,   483,  1037,  1853,    25,  1149, -2540, -2540,
   -2540, -2540, -2540, -2540,  1157, -2540,    53,    33,   161,   311,
     192, -2540,   491,   491,   628, -2540,   491,   902,  1163, -2540,
     491,   491, -2540,  1164,    24,    35,  1165,  1293, -2540, -2540,
   -2540,   604,   491, -2540, -2540,   491,   491,   491,   491,   491,
     491,   491,   491,   491, -2540, -2540, -2540,   491, -2540,  1166,
    1173, -2540,   491,  1009, -2540, -2540, -2540, -2540, -2540, -2540,
     491, -2540, -2540,   491, -2540, -2540,   678,   678,  1183, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
     491,   491,  1186,  1187,  1188, -2540, -2540,   491,   491,   491,
   -2540,   491, -2540,  1192, -2540, -2540, -2540, -2540,   606, -2540,
    1194, -2540,  5129,  1195, -2540,   491, -2540, -2540, -2540,   491,
    1196,  1203,  1203,  5129,   491,   491,   491,   491,   491,   491,
   -2540,   491,  4894,  1079,   491,   491, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,  1079,   491, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
    1202, -2540,   958,   583, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540,   659, -2540, -2540, -2540,  1054, -2540,   450,
      41,    41, -2540, -2540, -2540,  1218, -2540,  1222, -2540, -2540,
     575, -2540,  1052, -2540, -2540, -2540,  1062, -2540, -2540,  1293,
   -2540,  3391,   491, -2540,  5129,  5129,  1293, -2540, -2540,  1293,
   -2540, -2540, -2540, -2540,  1293, -2540, -2540,  5129,  1293,   491,
   -2540, -2540,  5129, -2540,  1227,    38,  1040,     0, -2540, -2540,
    1044,  5129,  3946, -2540, -2540, -2540, -2540, -2540,  1235,  1236,
    1238, -2540,  1056, -2540, -2540, -2540,   491, -2540, -2540,   906,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540,    12, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,  1184,  1189,  1191, -2540,
   -2540,  1043, -2540,   491,  1260,  1050,  5095, -2540,  1293, -2540,
    1269, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540,  5129,  5129,  5129, -2540, -2540,
    1271,   369, -2540, -2540,  1278,  1281,  1095,   491, -2540,   540,
    1207, -2540,  1284, -2540,   504,  1211,  4981,   466,  1285, -2540,
    1295, -2540,  1297, -2540,    13, -2540,  1302,  1304, -2540,  1298,
   -2540, -2540, -2540,   491, -2540,  5095,  4766,  1597,   230,  1305,
     382,  1214, -2540, -2540, -2540,  1308,   518,  1311,  1314,     9,
     491,   610,   170,    80,  5129,   369,  2136,   907,     2,    54,
     358,     5, -2540,  1315,  1316,  1317, -2540, -2540, -2540, -2540,
   -2540,   491,   491,   491,   491, -2540, -2540,   491,  1293,   491,
   -2540,   491,  1079,   491,  1330,  1293, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540,   427,   433, -2540, -2540, -2540,  1331,
   -2540, -2540, -2540, -2540,  1240, -2540,  1334,  1335,  1256,  1338,
   -2540,  1340, -2540,  1348,  1279,  1351,   106,   539,   395,   786,
     654,  1363,   672, -2540, -2540,  1395,  1399,  1364, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540,  1400, -2540, -2540,  1402, -2540,
   -2540,  1406, -2540, -2540, -2540, -2540, -2540, -2540, -2540,   491,
     491,   491,   491,   491, -2540,   491,   613,   491,   491, -2540,
    3680, -2540,   698,  1412, -2540,   774,  1420, -2540, -2540,   203,
     491,   491, -2540,  1415,   491,   491,   491,   491,   491,   491,
     491,   491,   491, -2540, -2540,  1424,  1024,   491,  1419,  1025,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540,  1432,  1434,   491,   491,   491,  1436,   369,
    1438,  1439,  1293,  5129, -2540, -2540, -2540, -2540, -2540,  1293,
   -2540, -2540,   491,   491,   491,  5129,   491,  1079,   491, -2540,
     491, -2540, -2540, -2540, -2540, -2540,  1441,  1447, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540,   190, -2540,   491, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540,  5129,  5129,   491,  1293, -2540,   203,   203,   203,
    1293,  1079,   491,  1293, -2540, -2540, -2540,   491, -2540,   390,
    1290,  1451,  1453, -2540, -2540,  1293,  5129, -2540, -2540,  1457,
    1471,  1478,   997,   491,  4834,   476,   517, -2540, -2540, -2540,
     491,  1467,   208,   993, -2540,  1237, -2540,  2136,  1239,   532,
    1210,   543, -2540, -2540,   491, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540,   491,  1481, -2540, -2540, -2540,   203, -2540,
   -2540, -2540, -2540,  5013, -2540, -2540,  1487,  1492,   491,  1494,
    1495,  1496,   406,   406,   -66,  1499,  1506,  1501,  1507,  1250,
    1263,  1526,  1528,  1530,    95,    95,   -66,  1532,  1537,   -66,
    1540,  1541,  5066,  1546,  1548, -2540, -2540,  1551,  1552,   620,
   -2540,  1554,  1557,  1560,  1563,   406,   -66,  1565,  1568, -2540,
    1572, -2540, -2540,  1293,   745,  1477,  1345,   308,  1347,  1482,
     910,   338,  1577,   177,  1448,  1483,  1443,   685,  1549,   345,
    1353,  1486,  1587,  1386,    82,    31,   -87,    97,  4894,  2136,
    1555,   -96,  1357,  1390,  1593,    42, -2540, -2540,   129,  1595,
    1596, -2540, -2540, -2540,  1598,  1397,    59,  2136,  1398, -2540,
   -2540, -2540,   369,  1602,  1603,   491, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540,     1, -2540,  2738, -2540,   491,
   -2540,   491, -2540, -2540, -2540, -2540,   491,   491,   491,   382,
    5129, -2540,  1604,  1092, -2540, -2540,   491, -2540, -2540,   491,
    4894,   491, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,   369,   491, -2540,   491,
     382,  1605, -2540,   491,   491, -2540,   369, -2540, -2540, -2540,
     182,  1607,  1610, -2540, -2540, -2540, -2540,   491,   491, -2540,
   -2540,  1079,   491,   491, -2540, -2540, -2540, -2540,   491, -2540,
     491,  1498, -2540,   491, -2540,   491,  1509, -2540,  1612, -2540,
     991,   991,   683,   991,  1615, -2540,   714, -2540, -2540,  1616,
    1617,   728,  1613, -2540,  1620,  1624,  1637, -2540,   765,   777,
    1629,  1638,  1642, -2540, -2540,  1645,  1650,  1652, -2540,   991,
     991,   991, -2540, -2540, -2540,   491,   491,   491,   491, -2540,
     491,  1046,  5129, -2540,   491, -2540,  5095,  1293, -2540, -2540,
    1655, -2540, -2540,  1656, -2540, -2540, -2540, -2540,  1590,  3158,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
     491,  1657,   491,   491,   491,   838, -2540,  1636,  1653,   491,
     491,   -13,  1659,   369,   369, -2540,  1293,   491,  1658,  1663,
    1664, -2540,  5129, -2540,   491, -2540, -2540, -2540,   491,   491,
     491,  1293,  1666,  5129,   203, -2540, -2540, -2540,  1079,   491,
    1669,   203,   491,  1640,  1641,   191, -2540,  1676, -2540, -2540,
     566, -2540, -2540,   491,  1678,  1683,   491, -2540,  1679,  1035,
    4894,  1454,   442,  1456,    93,  5129,   449, -2540,   221,  1564,
     113,   472,  1458,   150, -2540, -2540,   522,  1527,   -59,  1581,
     -48,  2136,   703, -2540,  1698,  1462, -2540,   570, -2540, -2540,
   -2540, -2540,  2136,  1503, -2540, -2540, -2540, -2540, -2540,   491,
    1130, -2540,   491, -2540, -2540,   491,   491, -2540,   491, -2540,
     491, -2540, -2540, -2540, -2540,  1511,   491, -2540,   491,    57,
   -2540, -2540,  1701,  1706, -2540,   491,   406,   406,   406, -2540,
   -2540, -2540, -2540, -2540, -2540,  1707,   406,   406,   406,   705,
   -2540, -2540,    95,   406,   406,   406, -2540, -2540,   406,   406,
    1708,   406,   406,  1709,    95,  1030, -2540,  1710,  1714,  1715,
   -2540,   635, -2540,   795,   928, -2540,  1064, -2540,  1461,  1723,
    1724,  1726,    95,    95,   -66,  1728,  1729,   -66,  1732,  1730,
    1734,   406,   406, -2540,  1735,   406,   406, -2540,  1737, -2540,
   -2540, -2540, -2540, -2540, -2540,   369, -2540, -2540, -2540,  4894,
    1019,   369,   491,  1082,  1265,   475, -2540, -2540, -2540,   625,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540,  1738,   369,   491, -2540,   369,  1739,   491,  5129,
     369,  1410,  1515,  1518,   180,   185,  1521,   193,  1460,  1463,
    1751,  1753,  1754,   910,  1755,  1758,  1759,  1464,  1465,  1118,
    1763,   369,   491,  1102,  1466, -2540, -2540,   369,  4894, -2540,
   -2540,  4894,   491,   101,  1766,   369,   491,  1293,  1079,   369,
   -2540,  4894,  5129,   491, -2540, -2540, -2540,   369,   369,  4894,
   -2540, -2540, -2540, -2540, -2540, -2540,  4894,   491,   369, -2540,
   -2540, -2540,   491, -2540, -2540,  1767,   491,  1556,    89,   491,
    1558,   491,   178,   491, -2540,   491,  1559,  1562,   491,   491,
     491,   491,   491,   491,   491,   491,    11,   491,   491,  1567,
   -2540,   491,   491,   491,   491, -2540,  5129,  1293,  1769,  5129,
    5129,   491,   491,  1293,  1079, -2540,   491,   491,   491,  5129,
   -2540,   491,   491, -2540, -2540, -2540,  1780, -2540, -2540, -2540,
   -2540, -2540, -2540,   491,   491, -2540,   491,   491, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540,  1787,  1788,  1790,
   -2540, -2540,   991,  1791,  1792,  1794, -2540,  1795,  1796,  1797,
    1800,  1802, -2540,  1803, -2540, -2540, -2540,  1804,  1805,  1809,
   -2540,  1811,  1812,  1814, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540,   491,   491,  1771,
    5129, -2540,   491,  1293, -2540, -2540, -2540,  3158,   491,  1293,
     491,   491,   491, -2540,   491,   491,  1815,   491,  1817,  1813,
     491,   491, -2540, -2540,  1818,  5129, -2540, -2540, -2540,   491,
   -2540, -2540, -2540,  1293, -2540,   978,   491,   978,   203, -2540,
    1293,  5129,   491,   491,  1819, -2540, -2540, -2540, -2540, -2540,
     491, -2540, -2540, -2540, -2540, -2540,   491,  1822, -2540, -2540,
    5129,  1823,  1824,  1825,  1827,  5129,  1293, -2540,  5129, -2540,
    5129,  5129,  4894,  5129,  1293, -2540,  5129, -2540, -2540,  5129,
   -2540, -2540,  4894,  5129, -2540,  5129,  5129,  4894,  5129, -2540,
    5129,  5129,   491, -2540, -2540, -2540,  5129,  5129,  5129, -2540,
    5129,  5129, -2540, -2540, -2540, -2540,  5129,  5129, -2540, -2540,
   -2540,  5129,  1828,  1829,  1831,  1832,  5129, -2540, -2540,   491,
     491, -2540, -2540,  1834,   491, -2540, -2540,  1836,  1838, -2540,
     491, -2540, -2540, -2540,   406, -2540, -2540, -2540,  1839,  1840,
    1841, -2540, -2540,   -66,  1844,  1846,  1849,   406, -2540, -2540,
   -2540, -2540, -2540,    95, -2540, -2540,  1852,   406,  1856,  1857,
    1858,    95,    95,   -66,  1860,  1861,  1862,  1167, -2540,  1383,
   -2540,  1388,  1538,  1863,  1865,  1867,    95,    95,   -66,  1869,
    1870,   -66,  1881,  1545,  1882,  1886,  1887,    95,    95,   -66,
    1885,  1889,   -66,  1890,  1580,  1891,  1892,  1893,    95,    95,
     -66,  1895,  1897,   -66,  1898,  1900,  1902,  1903,    95,    95,
     -66,  1908,  1909,  1910,    95, -2540, -2540, -2540, -2540, -2540,
    1912, -2540, -2540,  1914,    95,  1916,  1918, -2540, -2540,   406,
   -2540, -2540,  1919, -2540,  1293, -2540,  5129,   491, -2540,   491,
    5129,   491,  1920,  1477, -2540, -2540, -2540, -2540, -2540, -2540,
    1922, -2540,  4894,   369,  1924,  4894,  1293, -2540,  1925,  1477,
     491,   491,   491,   491,   491,   491,   491,   491,   491,  1927,
    1929, -2540, -2540, -2540,  1930, -2540, -2540, -2540,  1932,  1933,
   -2540, -2540, -2540, -2540,   491,  5129,   491,  1944,  1477,   369,
    1293,  1079,  1293,   491, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540,   491,  1079,  1079, -2540,  1293,
    1079,  1293,   491, -2540, -2540,  1293,  1079,  1293,  1079, -2540,
   -2540, -2540, -2540,   491,   491,   491,   491,   491,   491,   491,
     491,   491,   491,  2939, -2540,   491,   491,   491,   491,   491,
     491,   491,   491,   491,   491,   491,  3391,  1958,   491, -2540,
     491,   491,   491,  1934,  1961, -2540, -2540,  1293,   203,  1969,
    1293,  1293, -2540, -2540,  1079, -2540,   491, -2540,  1970,  1293,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540,   991,   991,   991,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,   491, -2540, -2540,   491,
   -2540,   491,  1293,   491, -2540,  1079,   491, -2540,   491, -2540,
    1854,  1971,  1972, -2540,  1974,   491,   491,  1975,  1293,  5129,
   -2540, -2540,   491, -2540,   491, -2540,   203,   566,   491,  1978,
   -2540,   491,    12, -2540, -2540,  1979,  1980,  1982,  1983,  1293,
   -2540,   566,   566,   566,  1293, -2540,   566,   203,   566,   566,
    1293, -2540,   566,   566,   566,  1293, -2540,   566,   566,  1293,
    5129,   566,  1293,   566,   566,  1293,   566,  1293, -2540,  1984,
    1985,  1986,  1988,  1293, -2540, -2540,  1976,    12,  1989, -2540,
     491, -2540, -2540, -2540, -2540,  1991, -2540, -2540, -2540, -2540,
     406,    95, -2540, -2540, -2540, -2540, -2540, -2540,  1992, -2540,
   -2540,    95,  1993,  1994,  1996,    95,    95,   -66,  1998,  1999,
    2000,  2001,  2002,  2004,    95,    95,   -66,  2006,  2007,  2008,
    2011,  2013,  2015,    95,    95,   -66,  2017,  2019,  2020,    95,
     406,   406,   406,   406,   406,  2022,   406,   406,  2023,    95,
      95,   406,   406,   406,   406,   406,  2024,   406,   406,  2030,
      95,    95, -2540, -2540, -2540, -2540, -2540,  2031, -2540, -2540,
    2032,    95, -2540, -2540, -2540, -2540, -2540,  2033, -2540, -2540,
      95, -2540,    95,  2039, -2540,  2041,  2042, -2540,  5095, -2540,
     566,  2044,  4894,   566,   491,  5129,  2045, -2540,   566, -2540,
   -2540, -2540,   566, -2540, -2540,  5129,  2046,   491,   491,   491,
     491,   491,   491,   491,   491,   491,   491,   491, -2540, -2540,
   -2540,  4894,   566,   491,  5129,  2047, -2540,  1079,  1079,  1079,
     491,  4894,  1079,   491,  1079,  1079,  5129,  4894,  1079,   491,
    1079, -2540,   491,   491,   491,   491,   491,   491,  1477,   491,
     491,   491,  1579,  1631,  1660,  1711,  1712,  1713,  1716,  2939,
   -2540,  1717, -2540, -2540,  1477,   491,   491,   491,   491,  1477,
     491,   491,   491,   491,   491,   491,  1293,   491,  1700,  1477,
     491,   491, -2540, -2540,   203,   369,  2048,  2049, -2540, -2540,
   -2540, -2540, -2540,   203, -2540, -2540, -2540,   491, -2540, -2540,
    1079,   491, -2540, -2540, -2540,   921,  2053,  2054, -2540,   491,
    2050,   978, -2540,   566, -2540, -2540, -2540, -2540,  2058, -2540,
   -2540,  2060,  2061,  2062,  5129,  2063, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540,   203,   566, -2540,   203, -2540, -2540,   203, -2540,
     203,  2065,  2066,  5129,  2069, -2540,  2072,  2074, -2540,   491,
   -2540, -2540,   406,    95, -2540,   406,   406,   406,   406,   406,
    2075,   406,   406,    95, -2540, -2540, -2540, -2540, -2540,  2076,
   -2540, -2540,    95,   406,   406,   406,   406,   406,  2077,   406,
     406,    95,   406, -2540, -2540, -2540, -2540, -2540,    95, -2540,
   -2540,  2078,   406,   406, -2540, -2540, -2540, -2540, -2540,    95,
   -2540, -2540,  2079,   406, -2540,    95,  2080, -2540,    95, -2540,
   -2540,    95, -2540, -2540,  1293, -2540,  4894,   566, -2540, -2540,
    2081,  1293,   491, -2540, -2540,  1293,   491, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540,   491,   491,   566, -2540,
   -2540,  2082,  1293,   491,  1079, -2540, -2540, -2540,   566, -2540,
     491, -2540,  1079, -2540,   566,   566, -2540,  5129,  1477, -2540,
     491,  2084,  2084,   491,   491,  2084,  1477,  2084, -2540,  5129,
     910,  2085,  2087,  2088,  2089,  2090,  2093, -2540,   369,  1477,
    2084,  2084,   491,   491,  1477,   491,   491,   491,   491,   491,
   -2540,  1079,   491,  2094, -2540, -2540,   491,  2084,   369,    17,
   -2540,  2095,   369, -2540, -2540, -2540,  2096,   491, -2540,  2097,
    2100,  1821,   491, -2540, -2540, -2540, -2540,  2101,    14,  5129,
   -2540, -2540, -2540, -2540, -2540, -2540,  2102,    14,  5129, -2540,
   -2540,   491, -2540, -2540, -2540, -2540, -2540, -2540, -2540,    95,
   -2540, -2540,   406,    95, -2540, -2540, -2540, -2540, -2540, -2540,
      95, -2540, -2540,   406, -2540,   406,    95, -2540, -2540,   406,
      95, -2540, -2540,    95, -2540, -2540,   491,   566, -2540, -2540,
    4894,  5129,   491,  5129,   491, -2540, -2540, -2540,  4894,  5129,
     491, -2540, -2540,  5129, -2540, -2540, -2540,   566, -2540,  2104,
   -2540, -2540, -2540,  1477,   491, -2540,  2105, -2540, -2540,  1293,
    2106, -2540,  2109, -2540, -2540, -2540, -2540, -2540,  2110, -2540,
   -2540,  1477,   491,  2112, -2540, -2540,   491,  5129, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540,    17,  1789,  2136, -2540, -2540,
    2114,  2117, -2540,  2092,  2113,   104,  5129, -2540, -2540, -2540,
   -2540,  5129, -2540, -2540,  2119,   406, -2540, -2540,   406, -2540,
   -2540,   406, -2540,   406, -2540,  5095, -2540,   566, -2540,   566,
     491,   566,  2126,   566, -2540,   566,   491,   566,   491, -2540,
   -2540, -2540, -2540,  2127, -2540,   491, -2540, -2540,  2128, -2540,
     491, -2540, -2540, -2540,  2133,   491, -2540, -2540, -2540,  1293,
   -2540, -2540, -2540,  1789, -2540,  1833,  1761,  2136, -2540,  2134,
    2135,  2140, -2540, -2540, -2540, -2540,    41,    41,  1293,  1293,
   -2540, -2540, -2540, -2540, -2540,   566, -2540, -2540,  2141, -2540,
    4894, -2540, -2540,  2144, -2540,  1477, -2540, -2540,  1477,   491,
   -2540, -2540,   491, -2540,  1477,   491, -2540,  5129, -2540,  1833,
   -2540,   369, -2540,  2148,  2150, -2540,   491,   491,    14,    14,
    2151,  4894,  1293, -2540,  4894, -2540, -2540,   491,  2154, -2540,
     491,   566, -2540, -2540, -2540,  2155,   491,   491, -2540, -2540,
   -2540,  1293, -2540, -2540,  1293, -2540, -2540,  2157, -2540, -2540,
    2158, -2540, -2540,  2159,  2160, -2540, -2540,  1477, -2540,  1477,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2540, -2540,    -4, -2540,   316, -2540, -1313,  -914,  1682, -2540,
     710,   103,  1884,   -41,   279, -1652,  1745,  2107,  -720, -1936,
    -948,  1502,   788, -2540, -1034, -2540, -2525, -1118, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540,  -517,  -489, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -1452, -2540, -2540, -2540, -2540, -2540,  -649, -2540, -2540,
   -2540, -2540, -2540, -2540,    27, -2540, -2540, -2540, -2540,  -110,
    -655, -1351,  -482, -2540, -2540, -2540, -2540,  -551,  -546, -2540,
   -2540, -2539, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540,  1442, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540, -2540,
   -2540, -2540, -2540, -2540, -2540, -2540
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1242
static const yytype_int16 yytable[] =
{
      70,  1894,   860,  2042,   890,  2044,  1504,  1100,   107,   347,
    1109,  1096,  1070,  1073,    67,    68,  1966, -1097,  1360,    67,
      68,  1363,  2662,  1576,   376,  1581,  1065,   983,   772,   289,
     408,    67,    68,  1642,    67,    68,   311,   109,  1394,   775,
      67,    68,   886,    67,    68,   341,  2657,  1486,   352,    67,
      68,  1611,  1612,  1613,   367,   109,   258,   619,   373,   560,
     585,   380,    67,    68,   304,   383,   385,  1469,   112,   394,
     636,  1102,   400,   404,   984,   413,   407,  1745,    67,    68,
     411,  1409,   319,    67,    68,   412,   735,   741,    67,    68,
      67,    68,    67,    68,   112,  1494,   572,  1343,   425,   745,
     434,   435,   439,   441,  1110,    57,   268,    67,    68,  1467,
    1111,  2327,  1356,   274,  1692,   275,  1075,   259,  1716,   445,
    1076,    58,   109,   293,  1481,  2337,  2338,  2339,  1915,   630,
    2341,   320,  2343,  2344,  1702,   545,  2346,  2347,  2348,   260,
      79,  2350,  2351,   269,   736,  2354,   631,  2356,  2357,  1916,
    2359,   114,  1917,   401,   457,   615,  1488,  1245,  1246,  1247,
     742,  1470,    59,  1918,   891,   109,   321,   723,  1473,   114,
     397,  1707,  1717,   561,  1474,   610,  2760,   857,   490,  1482,
      60,    67,    68,   511,    67,    68,  1919,  1554,   261,  1495,
    1077,   160,  1344,    67,    68,  1669,  1713,   573,   177,  1555,
     985,  1882,  1714,  1920,  1436,   754,  1884,   309,   398,    61,
    1078,    67,    68,   305,  1887,   858,  1066,  1475,  1329,   256,
    2782,   632,   386,   120,   546,   725,    62,   748,   559,   276,
      63,   390,   117,  1048,  1041,  1718,   114,   586,   118,   119,
     366,    64,   617,  2788,  2789,   402,   112,   112,  1697,   120,
     117,  1643,  1357,   743,   695,   568,   118,   119,   643,   644,
    1042,  1103,  1317,   248,  2435,   409,   377,  2439,   616,   986,
     483,  1079,  2443,   679,  1049,   484,  2444,   562,   987,   114,
    1101,   681,   684,  1487,   687,   691,  1746,   693,  2658,  2723,
     737,   620,   414,  1072, -1097,  1067,  2460,   703,  1505,  1112,
    1194,   310,  1468,   773,   892,   712,   714,   270,  1967,  1945,
     988,   485,   291,    69,   776,   109,  1471,   117,   403,   322,
     271,   122,   340,   118,   119,   351,  1693,   637,   757,   758,
     763,   162,   765,   277,  1476,   486,   768,   769,   239,   122,
    1104,   391,  1437,   264,  1496,   262,  1703,   781,   783,  1489,
     296,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     117,   611,   109,   793,  1479,  1080,   118,   119,   796,   798,
     152,   731,   372,   109,   153,   154,   799,   751,   755,   800,
     487,   272,  1498,  1708,   392,   393,  1698,  2533,   152,  1043,
     396,   263,   153,   154,    65,   444,   809,   810,  1950,  2724,
    1050,   120,   120,   814,   815,   816,   122,   817,   387,   326,
    1438,  1311,   294,  1883,  1051,  1052,   266,  2541,  1885,   327,
    1536,   824,   295,   488,   489,   825,  1888,   306,  1411,   114,
     830,   831,   832,   833,   834,   835,  1840,   836,  1044,  1843,
     840,   841,   488,  2725,  1921,  1048,   328,    67,    68,   122,
     307,  1549,  1439,   843,  1699,   152,  1154,  1195,  1433,   153,
     154,   388,   575,  1045,  2000,  1461,   512,  1128,   520,   569,
     525,   529,   576,  1133,    67,    68,   114,    80,   556,   459,
     460,   461,   462,   463,   464,   465,  1049,   114,   466,   467,
     468,   469,   570,   583,    67,    68,  1700,   594,   152,   577,
    1863,  2589,   153,   154,   336,  1053,  1054,   872,   874,   960,
     117,   102,   696,    81,  1155,   531,   118,   119,   961,   962,
     329,  1253,  2597,   279,  1661,   882,   303,  1879,   853,   532,
     103,  1665,  2602,   554,   704,    67,    68,  1129,  2605,  2606,
     595,  1412,  1299,  1134,   716,   937,   839,  1304,   697,  1709,
    1908,   533,   903,   977,   949,   950,   330,   117,  1059,   842,
    1324,  1339,  1689,   118,   119,   963,   379,   689,   117,  1695,
     534,  1434,   325,   578,   118,   119,   641,   642,  1462,   933,
    1864,   104,   349,    82,   112,   974,   535,   624,  1340,   536,
    1672,  1673,  1704,   555,    67,    68,   698,  1725,   331,   122,
    1149,   951,   717,   686,   993,  1300,   219,    67,    68,   579,
     819,   820,  1050,   948,   537,   538,    67,  1181,  1130,   332,
     854,   978,   220,   337,  1135,  1378,  1051,  1052,  1060,  1301,
    1254,    67,    68,   354,  1379,  1380,  1719,  1106,   705,   992,
    1792,  1325,   596,   746,   749,   752,   122,  1728,   152,  1793,
    1794,  2676,   153,   154,   333,   365,  1068,   122,  1150,  1081,
    1156,   369,   105,  1674,    83,   370,   539,  1865,   759,  2532,
     334,  2688,   580,  1048,   540,  1690,  1305,  1116,  1117,  1118,
    1119,  1381,  1696,  1120,  1131,  1122,   846,  1123,  1710,  1125,
    1136,   964,   965,   855,  1151,   152,  1795,   699,   625,   153,
     154,   338,  1188,  1189,  1302,  1705,   152,  1450,   801,  1061,
     153,   154,    84,   382,  1049,  1160,  1866,  1053,  1054,  1758,
    1759,   838,   718,   581,   375,  1306,   780,   952,   953,  1187,
    1867,   541,   542,  1165,  1451,  1319,  1726,  1452,   760,   120,
    1453,  2736,  1711,  2737,  1577,  2739,   249,  2741,   719,  2742,
    1307,  2744,   106,  1303,   371,  1175,  1176,  1177,  1178,  1179,
     966,  1180,  1182,  1184,  1185,   865,  1760,  1454,   847,   967,
     968,   626,   802,  1161,   969,  1583,  1197,  1198,  1191,  1192,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1589,
    1727,  1166,  1211,  1212,  1455,  1124,   954,  1456,   416,  2770,
    1803,   970,  1578,   543,  1152,   955,   956,  1382,  1383,  1804,
    1805,  1218,  1219,  1220,   887,  2105,   280,  1868,   406,   761,
     418,   627,  1796,  1797,   420,   866,  1597,  1399,  1228,  1229,
    1230,   250,  1232,  1584,  1234,  2118,  1235,   957,  1601,   803,
    1050,    67,    68,   251,   628,  2801,   924,  1590,   762,   849,
    2155,    67,    68,  2158,  1051,  1052,  1806,  1238,   442,  1240,
     240,  2166,  1069,   298,  2169,   458,  1869,    67,    68,  1720,
    1243,    86,  2177,  1158,   550,  2180,  1384,   252,  1250,  2304,
    2305,  2306,  2187,  1252,  1598,  1385,  1386,   241,   682,    72,
    1387,  1798,  1761,  1762,    73,  1400,  1602,  1636,  1266,  1268,
    1799,  1800,   850,   470,   710,  1801,  1309,  1457,  1312,  1315,
     904,   905,   471,   422,   481,  1320,   493,  1388,    96,  1162,
    1326,   804,   253,  1721,    67,    68,   805,   944,   495,  1327,
      74,  1369,  1802,  1814,    97,   254,  1458,  1167,  2045,   423,
    1233,  1159,  1815,  1816,  1335,  1053,  1054,  1097,  1579,  2206,
    1415,   522,   281,   548,    75,   242,   551,   282,   683,   283,
     299,  1763,  1459,  1401,  1402,  2216,   906,    67,    68,   243,
    1764,  1765,   907,   549,   711,   558,  1416,  1403,  1722,  1585,
    2526,  1084,  1807,  1808,  1249,    54,  1107,   552,   564,  1817,
     497,  1408,    87,  1591,  2235,   565,    67,    68,   498,    76,
      67,  1265,  1766,    55,   436,   567,    86,   590,    98,  1417,
    1314,  1472,    67,    68,    88,  1418,  1404,  1098,    89,   908,
    1419,   797,    67,    68,  1856,   244,   584,    67,    68,  1214,
    1599,   300,  1497,  1570,  1571,   909,  1210,  1215,  2620,  1420,
     301,  1503,  1603,    77,  1778,  1779, -1239,   910,    99,    67,
    1619,  1809,   592,   911,   912,  1531,   613,  1532,  1421,   913,
    1810,  1811,  1533,  1534,  1535,  1812,   245,    90,    67,    68,
     614,   598,  1541,  1422,   437,  1542,   246,  1545,  1825,  1826,
     618,   100,    67,    68,   110,    67,    68,  1860,   426,   427,
     428,  1780,  1813,  1547,   622,  1548,  1539,  1540,  1099,  1551,
    1552,   634,  1423,    91,   285,    67,    68,  1905,   639,   914,
     640,    92,    93,  1558,  1559,  1818,  1819,  1680,  1561,  1562,
     645,   112,  1900,  1901,  1563,  1827,  1564,    87,   915,  1566,
     677,  1567,   916,   678,   917,  1222,   599,  2618,  1424,   680,
    1239,   827,   828,   694,   701,  1623,   702,   313,   707,    88,
     709,  1425,   715,  2041,   739,   438,   721,   918,   919,  1572,
    1573,   740,  1426,  2642,   766,   920,   113,   767,   770,   778,
     794,  1614,  1615,  1616,  1617,   600,  1618,  1620,   795,  2380,
    1622,  2122,  2123,   921,  1820,  1681,  1574,   808,  2389,  1427,
     811,   812,   813,  1821,  1822,  1628,   818,  2398,  1823,   821,
     823,  1428,    90,  1429,  1430,   426,  1631,   844,  1633,  1634,
    1635,  1637,  1731,   601,   428,  1640,  1641,  1781,  1782,   845,
     115,   852,   861,  1649,  1560,  1824,   863,   868,  2124,   870,
    1654,   884,   314,   889,  1655,  1656,  1657,   894,    91,   922,
     899,   900,   901,  1431,   315,  1663,    92,    93,  1666,   902,
     925,  1828,  1829,  1682,  1683,   927,   286,   929,  2295,  1676,
    2690,  2691,  1678,   931,  2694,   934,  2696,  1684,    67,    68,
    1862,   935,  1406,  1407,   939,   943,   120,   355,  2701,  2702,
    1732,   121,   945,  2706,  2707,   946,  1783,  2710,   947,   959,
     979,   287,  2711,  2712,   958,  1784,  1785,  1478,   971,   981,
    2692,   982,   991,   356,   357,  1730,  1685,   989,  1737,   990,
    1047,  1738,  1739,  1056,  1740,  1063,  1741,   358,  2703,  1064,
    1830,  1115,  1743,   316,  1744,  1058,  2326,  1786,   446,  1831,
    1832,  1750,  1113,  1114,  1126,  1138,   317,  1139,  2746,  1140,
    1141,  2747,  1143,  1142,  2486,  1144,  2750,  2342,  1733,  1734,
     288,  1662,  2753,  1145,  2125,  2126,  1147,  2756,  1500,  1544,
    2499,  1833,  1735,   359,   360,  2504,  1146,  1164,  1171,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,  2131,  2132,   447,
    1169,  1736,  2140,  2141,  1170,  1172,  1857,  1173,  1859,  1861,
    1408,  1174,  1546,    67,    68,  1878,  1190,  1406,  1407,   448,
     449,   450,  1553,  2127,  1193,  2796,   451,  1199,  2799,  1209,
    1872,  1213,  2128,  2129,  1875,  2776,  1216,  1408,  1217,   452,
    1221,  2779,  1223,  1224,  2133,   453,  1236,  2808,  2612,  2142,
    2810,  2615,  1237,  2617,  1257,   454,  1258,  1259,  1904,  1906,
    1408,  1262,  2815,  2816,  2130,  1442,  2629,  2630,  1914,    67,
      68,  1907,  1925,  1406,  1407,   361,  1263,   362,  1630,  1932,
      67,    68,  1264,  2644,  1406,  1407,  1328,  1310,  1316,  1322,
    1318,  1332,  1443,  1939,  2813,  1444,  2814,  1333,  1941,  1336,
    1337,  1338,  1943,  1346,  1946,  1947,  1348,  1949,  1951,  1952,
    1347,  1955,  1349,  1351,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1968,  1970,  1971,  1445,  1352,  1973,  1974,  1975,
    1976,  1353,   472,  1354,  1670,  1355,  1361,  1982,  1983,  1646,
    1647,  1362,  1986,  1987,  1988,  1364,  1365,  1990,  1991,  1687,
     473,  1371,  1446,  1373,   363,  1447,  1374,  1376,  1389,  1993,
    1994,  1390,  1995,  1996,  2608,  1391,   455,   474,  1392,  1395,
    2134,  2135,  2616,  1396,  2518,  2143,  2144,  1397,  1410,   475,
    1413,  1927,  1435,  2522,  1440,  2628,  1463,  1414,  1441,  1460,
    2633,  1464,  1465,  1466,  1483,  1480,   476,  1484,  1485,  1490,
     477,  1491,  1627,  1492,  1493,  1499,  1501,  1502,  1565,  1538,
    1550,   478,  1556,  2016,  2017,  1557,  1569,  1593,  2019,  1568,
    1582,  1587,  1588,  2021,  2024,  1594,  2026,  2027,  2028,  1595,
    2029,  2030,  2540,  2032,  1605,  2542,  2035,  2036,  2543,  2136,
    2544,  1596,  1638,  1606,  2145,  2039,  1607,  1985,  2137,  2138,
    1608,   479,  2043,  2146,  2147,  1609,  1610,  1639,  2048,  2049,
    1625,  1626,  1650,  1030,  1645,  1448,  2051,  1651,  1652,  1632,
    1659,   179,  2052,  1664,   180,   163,   181,  1031,  1667,  1668,
    2139,  1671,  1677,  -445,  1679,  2148,  1032,  1688,  1855,  1691,
     164,  1706,   165,  1712,  1449,   182,  1033,   183,   184,   185,
    1701,  1715,  1723,  1724,  1742,  1748,  1729,   186,  2080,   187,
    1749,  1754,  1773,  1776,   188,  1787,   189,   190,   191,  1789,
    1791,  1853,   166,   192,  1834,   193,  1034,  1858,  1835,  1836,
     167,  1837,  1841,  1842,  1845,  2094,  2095,  1844,  1846,  1849,
    2097,  1342,  1852,  1870,  1874,  1035,  2100,  1911,  1880,  1871,
    1913,  1881,  1873,   194,  1886,  1891,  1877,  1892,  1893,  1895,
    1930,  1889,  1896,  1897,  1890,  1898,  1899,  1902,  1936,   195,
    1923, -1241,  1942,  1393,  1979,  1938,  1944,  1903,  1948,  1956,
     196,   197,  1957,  1909,   198,  1992,   168,  1972,   199,  1036,
     200,  1924,  1997,  1998,  1999,  1928,  2001,  2002,  2003,  2004,
    2005,  2149,  2006,  1933,  1934,  2007,  2008,  2009,  2160,  2010,
    2011,   201,   202,  2012,  1940,   203,  2013,  2014,  2015,  2034,
    2031,  2033,  2037,  2050,   204,  1037,  2053,  2654,  2055,  2056,
    2057,  2775,  2058,  2089,  2090,   169,  2091,  2092,  2096,   205,
     206,  2098,  2099,  2171,  2102,  2103,  2104,   207,  2106,  1038,
    2107,   170,   171,  2201,  2108,  2202,  2111,  2204,   172,  1408,
     173,  2113,  2114,  2115,  2119,  2120,  2315,  2121,  2150,   208,
    2151,   209,  2152,  2156,  2157,  1408,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,   174,  2159,  2161,  1039,  2167,
    1040,  2162,  2163,  2168,   210,  2170,  2172,  2173,  2174,  2178,
    2231,  2179,  2233,  2181,  1408,  2182,  2023,  2183,  2184,  2240,
     211,   212,  2188,  2189,   723,  2190,  2192,   290,  2193,   213,
    2195,  2241,  2196,  2490,  2198,  2205,   214,  2207,  2247,  2211,
    2215,  2226,   215,  2227,   216,  2228,  2229,  2230,  2292,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2234,
     175,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,  2287,  2288,  2293,  2289,  2290,  2291,   724,
     217,  2065,   725,  2296,  2302,  2491,  2316,  2317,  2318,  2321,
    2366,  2071,  2301,  2329,  2332,  2333,  2076,  2334,  2335,  2361,
    2362,  2363,  2716,  2364,  2368,  2370,  2373,  2513,  2375,  2376,
     443,  2377,  2381,  2382,  2492,  2383,  2384,  2385,   726,  2386,
    2390,  2391,  2307,  2392,  2238,  2308,  2393,  2309,  2394,  2311,
    2395,  2399,  2313,  2400,  2314,  2401,  2408,  2411,  2419,  2242,
    2243,  2319,  2320,  2245,  2422,  2425,  2426,  2428,  2324,  2249,
    2325,  2251,   727,  2431,  2328,  2432,  2433,  2330,  2436,  2442,
    2446,  2463,  2520,  2521,  2531,  2493,  2494,  2495,  2528,  2529,
    2496,  2498,  2716,  2534,  2535,  2536, -1110,  2537,  2539,  2545,
     509,  2546,   516,   519,  2548,   524,   528,  2549,  2550,  2559,
    2563,  2570,  2576,  2580,  2583,  2590,  2598,  2300,  2610,   728,
    2621,  2622,   729,  2623,  2624,  2625,  2369,  2626,  2721,  2641,
    2648,  2650,  2652,   588,  2653,  2761,  2656,  2661,  2689,  2695,
    2266,  2698,   826,  2699,  2700,   730,  2705,  2722,   731,  2719,
     603,   608,  2720,  2730,  1751,  1752,  1753,   222,  2312,   732,
    2740,  2748,   807,  2751,  1755,  1756,  1757,  2754,  2727,  2763,
    2764,  1768,  1769,  1770,  2765,  2771,  1771,  1772,  2774,  1774,
    1775,  2209,   223,  2784,  2213,  2785,  2790,  2434,  2798,  2497,
    2802,  2807,  2809,  2713,  2811,  2812,  2762,  2758,  1148,     0,
       0,     0,   688,     0,     0,     0,     0,     0,     0,  1847,
    1848,     0,     0,  1850,  1851,   224,     0,     0,     0,  2210,
     708,     0,   225,     0,     0,     0,     0,     0,     0,     0,
    2440,     0,   226,   227,     0,     0,     0,     0,     0,   228,
       0,     0,     0,  2447,  2448,  2449,  2450,  2451,  2452,  2453,
    2454,  2455,  2456,  2457,     0,  2236,     0,  1085,     0,  2461,
       0,   229,     0,     0,     0,  1086,  2467,  2766,  2767,  2471,
       0,  1087,     0,     0,     0,  2478,     0,   230,  2480,  2481,
    2482,  2483,  2484,  2485,  1408,  2487,  2488,  2489,     0,     0,
       0,  1088,   231,     0,     0,     0,     0,     0,     0,   232,
    1408,  2500,  2501,  2502,  2503,  1408,  2505,  2506,  2507,  2508,
    2509,  2510,     0,  2512,  1089,  1408,  2516,  2517,     0,   233,
       0,     0,  1090,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2523,     0,     0,   822,  2525,     0,     0,
       0,  2527,     0,     0,     0,  2530,     0,   829,     0,     0,
       0,     0,     0,     0,   234,     0,   837,     0,  1091,     0,
       0,  2331,     0,     0,     0,     0,  1092,     0,     0,     0,
    2464,  2465,  2466,     0,     0,  2470,     0,  2472,  2473,     0,
       0,  2477,     0,  2479,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2551,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,  2367,  1093,     0,     0,
       0,     0,     0,   236,     0,     0,     0,     0,  1094,     0,
       0,     0,     0,     0,     0,   873,     0,   692,   875,   876,
       0,     0,     0,  1095,     0,     0,     0,     0,     0,     0,
       0,   880,   237,  2524,     0,     0,   883,     0,     0,     0,
       0,     0,     0,     0,     0,   895,   897,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2592,     0,
       0,     0,  2594,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2595,  2596,   779,     0,     0,     0,     0,  2600,
       0,     0,     0,     0,     0,     0,  2603,  1359,     0,     0,
       0,     0,     0,     0,  1408,     0,  2609,     0,     0,  2613,
    2614,  2438,  1408,     0,     0,     0,     0,     0,     0,   940,
     941,   942,     0,     0,     0,  1408,     0,     0,  2631,  2632,
    1408,  2634,  2635,  2636,  2637,  2638,     0,     0,  2640,     0,
    2459,     0,  2643,     0,     0,     0,     0,     0,     0,     0,
    2469,     0,     0,  2651,     0,     0,  2476,     0,  2655,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2101,     0,     0,     0,     0,  2664,  1083,     0,
       0,     0,     0,     0,     0,  2109,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2112,     0,  2601,     0,     0,
       0,     0,     0,     0,     0,  2604,     0,     0,     0,     0,
       0,     0,  2675,     0,   646,   647,     0,     0,  2680,     0,
    2682,     0,     0,     0,     0,     0,  2686,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1408,
    2693,  2519,     0,     0,  2639,     0,   871,     0,     0,     0,
       0,     0,     0,   877,     0,     0,   878,  1408,  2704,     0,
       0,   879,  2708,     0,  2735,   881,     0,  2197,     0,     0,
     648,     0,     0,     0,     0,     0,   649,     0,     0,     0,
       0,  2726,     0,   650,     0,   651,     0,     0,     0,     0,
     652,     0,     0,   653,     0,     0,     0,     0,     0,   654,
       0,     0,     0,     0,     0,     0,  2738,     0,     0,   655,
       0,     0,  2743,     0,  2745,   656,     0,     0,     0,     0,
       0,  2749,     0,   657,     0,   938,  2752,     0,     0,     0,
       0,  2755,     0,     0,     0,     0,     0,  1226,     0,   658,
       0,     0,     0,     0,     0,  2588,     0,     0,     0,  1231,
       0,     0,     0,     0,     0,     0,     0,     0,   659,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1408,     0,   660,  1408,  2777,     0,     0,  2778,     0,
    1408,  2780,   661,   662,     0,     0,  1241,  1242,     0,     0,
    1506,     0,  2786,  2787,     0,  1507,     0,     0,     0,     0,
       0,     0,   663,  2797,     0,     0,  2800,     0,     0,     0,
    1261,     0,  2803,  2804,     0,     0,  1508,  1509,     0,  1510,
    1511,     0,     0,   664,     0,  1121,     0,     0,     0,     0,
    1512,     0,  1127,  1408,     0,  1408,   665,     0,   666,     0,
       0,     0,  1513,  1514,  2627,     0,     0,     0,     0,     0,
    1515,   667,     0,  1516,     0,     0,   668,  1331,     0,     0,
       0,     0,   669,     0,  2645,     0,     0,     0,  2649,   670,
    1517,     0,     0,     0,     0,     0,  1518,  1519,     0,     0,
    1520,     0,     0,     0,  1767,     0,     0,   671,     0,     0,
       0,     0,     0,     0,     0,     0,  1777,     0,     0,  2678,
     672,   673,     0,   674,     0,     0,     0,  2684,     0,     0,
       0,     0,     0,     0,  1838,  1839,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2371,     0,
       0,     0,  1477,     0,     0,     0,     0,     0,  1521,     0,
       0,     0,     0,   675,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1225,
       0,   109,     0,     0,     0,     0,  1227,     0,  2403,  2404,
    2405,  2406,  2407,     0,  2409,  2410,   110,     0,     0,  2414,
    2415,  2416,  2417,  2418,  1537,  2420,  2421,     0,     0,     0,
    1522,     0,     0,     0,  1543,  1523,     0,   111,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1524,     0,  1244,   112,     0,     0,     0,  1248,     0,  1525,
    1251,     0,     0,     0,  2262,     0,     0,     0,     0,     0,
       0,     0,  1260,     0,     0,  2263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1526,  1527,     0,  2773,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
    1085,  2264,     0,     0,     0,     0,     0,  1528,  1086,     0,
       0,     0,     0,     0,  1087,   114,     0,     0,     0,     0,
    2792,     0,     0,  2795,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1088,     0,  1621,     0,  2265,     0,
       0,     0,     0,     0,     0,     0,     0,  2783,     0,     0,
       0,  1529,   115,  1629,     0,     0,     0,  1089,     0,     0,
       0,     0,     0,     0,     0,  1090,     0,     0,     0,     0,
    1398,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1653,     0,   116,     0,
       0,     0,     0,     0,     0,     0,   117,  1660,     0,     0,
       0,  1091,   118,   119,     0,     0,     0,     0,   120,  1092,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1686,     0,     0,     0,     0,  1694,
    2552,    67,    68,  2554,  2555,  2556,  2557,  2558,     0,  2560,
    2561,     0,     0,     0,     0,     0,     0,   110,     0,     0,
    1093,  2565,  2566,  2567,  2568,  2569,     0,  2571,  2572,     0,
    2574,  1094,     0,     0,     0,     0,     0,     0,     0,     0,
    2577,  2578,     0,     0,     0,     0,  1095,     0,     0,     0,
       0,  2581,     0,     0,   112,   122,  2266,     0,  2267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   113,
       0,     0,     0,     0,   152,     0,     0,     0,   153,   154,
       0,     0,  2268,     0,     0,  2110,     0,     0,     0,     0,
       0,     0,     0,  2116,  2117,     0,     0,     0,     0,     0,
       0,     0,     0,  1854,  1624,     0,     0,     0,  2153,  2154,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2164,
    2165,     0,     0,   115,     0,     0,     0,     0,     0,     0,
    2175,  2176,     0,  1876,     0,     0,     0,     0,     0,     0,
    2185,  2186,     0,  1648,     0,     0,  2191,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2194,     0,  1658,     0,
    2666,     0,  1910,     0,     0,  1912,     0,     0,     0,     0,
       0,  2669,     0,  2670,     0,  1929,  1931,  2672,     0,   120,
       0,     0,     0,  1935,   121,     0,     0,     0,     0,     0,
    1937,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     110,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1977,     0,     0,  1980,  1981,     0,     0,     0,     0,     0,
       0,     0,     0,  1989,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2731,     0,     0,  2732,     0,     0,  2733,
       0,  2734,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,   113,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2018,     0,     0,     0,     0,     0,
       0,  2022,     0,     0,     0,     0,     0,     0,     0,   527,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2038,
       0,     0,     0,     0,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2047,   115,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2054,     0,     0,     0,     0,  2059,
       0,   112,  2061,     0,  2062,  2063,  2064,  2066,     0,     0,
    2068,     0,     0,  2069,  1926,     0,  2070,  2072,     0,  2073,
    2074,  2075,  2077,     0,  2078,  2079,     0,     0,     0,     0,
    2081,  2082,  2083,     0,  2084,  2085,     0,   121,     0,     0,
    2086,  2087,     0,  2372,     0,  2088,   113,     0,     0,     0,
    2093,     0,     0,  2374,     0,     0,     0,  2378,  2379,     0,
       0,     0,     0,     0,     0,     0,  2387,  2388,     0,     0,
       0,     0,     0,     0,  1978,  2396,  2397,     0,     0,     0,
    1984,  2402,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2412,  2413,     0,     0,     0,     0,     0,     0,     0,
     115,     0,  2423,  2424,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2427,     0,     0,  1186,     0,     0,     0,
       0,     0,  2429,     0,  2430,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,     0,   120,     0,     0,     0,
    2020,   121,     0,     0,     0,     0,  2025,     0,     0,     0,
    2200,     0,     0,     0,  2203,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2208,     0,     0,  2212,
    2040,     0,     0,     0,     0,     0,     0,  2046,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2232,
       0,     0,     0,  2060,     0,     0,     0,     0,     0,     0,
       0,  2067,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
    2286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2553,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2562,     0,     0,     0,     0,
       0,     0,     0,     0,  2564,     0,     0,     0,     0,     0,
       0,     0,     0,  2573,     0,     0,     0,     0,     0,     0,
    2575,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2579,     0,  2323,     0,     0,     0,  2582,     0,     0,
    2584,   343,     0,  2585,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     896,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2199,     0,     0,  2353,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2214,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,  2237,     0,  2239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2244,     0,  2246,     0,
       0,     0,  2248,     0,  2250,     0,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2665,     0,     0,     0,  2667,     0,     0,     0,     0,
       0,     0,  2668,     0,     0,     0,     0,     0,  2671,     0,
       0,     0,  2673,     0,  2294,  2674,  2437,  2298,  2299,  2441,
       0,     0,     0,     0,     0,     0,  2303,     0,     0,  2445,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2458,     0,     0,  2462,     0,
       0,     0,     0,     0,     0,  2468,     0,     0,     0,  2310,
    2474,  2475,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2322,     0,     0,     0,     0,
     345,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,  2336,     0,     0,     0,
       0,  2340,     0,     0,     0,     0,     0,  2345,     0,     0,
       0,     0,  2349,     0,     0,     0,  2352,     0,     0,  2355,
       0,     0,  2358,     0,  2360,     0,     0,     0,     0,     0,
    2365,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2538,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,  2547,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     0,     0,     3,     0,     4,     0,     0,     0,
    2587,     0,     0,     0,     0,     0,     0,     0,     0,     5,
       0,     0,     0,     0,     6,     7,     0,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,    11,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,     0,     0,
       0,  2607,     0,     0,     0,    15,    16,     0,     0,     0,
       0,     0,     0,  2619,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,  2511,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,    19,
       0,     0,    20,     0,     0,     0,     0,    21,    22,     0,
       0,     0,     0,  2660,    23,     0,     0,     0,     0,     0,
      24,     0,  2663,     0,   500,   501,     0,     0,   502,     0,
       0,     0,     0,    25,     0,     0,    26,    27,    28,     0,
       0,    29,    30,     0,     0,     0,     0,     0,     0,     0,
     503,     0,     0,     0,    31,     0,     0,     0,     0,     0,
     113,     0,   604,   110,  2677,  2679,     0,  2681,     0,    32,
      33,    34,  2683,  2685,     0,     0,     0,  2687,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,    36,     0,     0,    37,     0,     0,    38,     0,    39,
       0,    40,   605,     0,     0,     0,    41,     0,     0,     0,
       0,  2709,     0,     0,   115,     0,     0,     0,     0,    42,
       0,     0,     0,     0,    43,     0,   504,     0,     0,     0,
    2728,  2586,     0,     0,     0,  2729,     0,     0,  2591,     0,
      44,    45,  2593,   505,     0,   113,     0,     0,     0,     0,
       0,     0,    46,     0,    47,     0,     0,     0,   606,  2599,
      48,     0,   506,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,   115,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2772,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,     0,     0,     0,     0,     0,
       0,  2781,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2791,     0,     0,  2794,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,   508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2697,     0,     0,     0,
       0,     0,     0,     0,     0,   607,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   994,   995,   996,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   997,   998,  2757,     0,   999,     0,
       0,  1000,     0,     0,     0,     0,     0,     0,  1001,     0,
       0,     0,  1002,     0,     0,  2768,  2769,     0,     0,     0,
    1003,  1004,     0,     0,     0,     0,     0,     0,  1005,  1006,
       0,     0,     0,     0,  1269,  1270,  1271,     0,     0,     0,
       0,     0,     0,     0,     0,  1007,     0,     0,     0,     0,
       0,  1008,     0,     0,  1009,  1010,     0,     0,  1011,  2793,
       0,     0,  1272,  1273,     0,   110,  1274,     0,     0,     0,
       0,     0,     0,  1275,     0,  1012,  1276,     0,  2805,     0,
    1277,  2806,     0,     0,     0,     0,     0,     0,  1278,  1279,
       0,     0,     0,   110,  1013,     0,  1280,     0,     0,     0,
       0,     0,   112,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1014,     0,     0,     0,
       0,     0,  1281,  1282,     0,     0,  1283,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,     0,  1015,     0,
       0,     0,     0,  1284,     0,   110,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1285,     0,     0,     0,  1016,     0,  1017,     0,
       0,     0,     0,  1018,  1019,   113,     0,     0,     0,     0,
       0,     0,     0,     0,  1286,   514,     0,  1020,  1021,     0,
       0,     0,     0,  1287,     0,     0,     0,  1022,  1023,     0,
       0,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1024,     0,  1025,     0,   113,     0,   115,
       0,     0,     0,     0,  1288,     0,  1289,  1026,     0,  1027,
       0,  1290,  1291,     0,     0,  1028,     0,     0,     0,  1330,
       0,     0,     0,     0,     0,     0,  1292,   120,     0,     0,
       0,     0,   121,     0,     0,     0,  1293,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1029,
       0,   115,     0,     0,     0,   120,     0,     0,     0,     0,
     121,  1294,     0,  1295,   113,     0,     0,     0,     0,     0,
       0,     0,     0,  1296,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1297,     0,     0,   972,     0,   518,     0,
       0,   973,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,     0,  1298,   115,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,  1367,   515,     0,   121,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,     0,     0,     0,   115,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,  1368,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     0,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151
};

static const yytype_int16 yycheck[] =
{
       4,  1453,   491,  1655,     4,  1657,     5,     5,    12,    50,
       5,   666,   661,   662,     3,     4,     5,     0,   966,     3,
       4,   969,  2547,  1141,    32,  1143,    17,    14,     4,    33,
       4,     3,     4,    46,     3,     4,    40,     4,   986,     4,
       3,     4,     4,     3,     4,    49,    32,     5,    52,     3,
       4,  1169,  1170,  1171,    58,     4,     5,     5,    62,    66,
      16,    65,     3,     4,    37,    69,    70,    36,    56,    73,
       5,    17,    76,    77,    61,     5,    80,    20,     3,     4,
      84,   995,    50,     3,     4,    89,    61,    34,     3,     4,
       3,     4,     3,     4,    56,    36,   132,   163,   102,    66,
     104,   105,   106,   107,    99,    66,    20,     3,     4,    27,
     105,  2047,    17,    64,    21,    66,    36,    66,   166,   123,
      40,    12,     4,     5,   220,  2061,  2062,  2063,    27,    93,
    2066,    99,  2068,  2069,    21,   208,  2072,  2073,  2074,    88,
     277,  2077,  2078,    57,   119,  2081,   110,  2083,  2084,    48,
    2086,   118,    51,    78,   158,     6,    27,   877,   878,   879,
     107,   130,    53,    62,   164,     4,   134,    61,   255,   118,
     136,    21,   220,   180,   261,     4,  2715,   136,   182,   275,
      71,     3,     4,   187,     3,     4,    85,     5,   137,   130,
     110,    33,   258,     3,     4,     4,   255,   233,   142,    17,
     187,    21,   261,   102,    27,    13,    21,   191,   174,   100,
     130,     3,     4,    61,    21,   174,   207,   120,   938,   225,
    2759,   185,     4,   211,   297,   119,   117,    66,   201,   180,
     121,   185,   199,    63,     4,   283,   118,   193,   205,   206,
      59,   132,   246,  2768,  2769,   170,    56,    56,    27,   211,
     199,   264,   157,   200,   295,    61,   205,   206,   262,   263,
      30,   207,   917,    16,  2200,   239,   274,  2203,   119,   256,
     185,   191,  2208,   277,   104,   190,  2212,   284,   265,   118,
     278,   285,   286,   241,   288,   289,   229,   291,   274,   185,
     265,   239,   222,   123,   277,   286,  2232,   301,   297,   294,
      97,   285,   220,   279,   304,   309,   310,   221,   297,   220,
     297,   226,    33,   285,   279,     4,   285,   199,   243,   287,
     234,   288,   285,   205,   206,   285,   233,   262,   332,   333,
     334,    15,   336,   284,   237,   250,   340,   341,    22,   288,
     286,   295,   165,    27,   285,   294,   233,   351,   352,   220,
      34,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     199,   190,     4,   367,  1019,   285,   205,   206,   372,   373,
     337,   265,   285,     4,   341,   342,   380,    66,   186,   383,
     295,   295,  1037,   233,   338,   339,   165,  2323,   337,   159,
      74,   340,   341,   342,   285,   116,   400,   401,   220,   295,
     230,   211,   211,   407,   408,   409,   288,   411,   190,    37,
     233,   203,   294,   233,   244,   245,     5,  2353,   233,    47,
    1069,   425,   304,   338,   339,   429,   233,   275,   120,   118,
     434,   435,   436,   437,   438,   439,  1384,   441,   208,  1387,
     444,   445,   338,   339,   343,    63,    74,     3,     4,   288,
     298,  1100,   275,   457,   233,   337,    61,   254,   120,   341,
     342,   243,    37,   233,  1582,   120,   187,    40,   189,   275,
     191,   192,    47,    40,     3,     4,   118,     4,   199,   163,
     164,   165,   166,   167,   168,   169,   104,   118,   172,   173,
     174,   175,   298,   214,     3,     4,   275,    44,   337,    74,
    1414,  2437,   341,   342,     4,   335,   336,   511,   512,     5,
     199,    40,    54,    40,   119,    45,   205,   206,    14,    15,
     148,   131,  2458,    66,  1244,   529,    88,  1441,    78,    59,
      59,  1251,  2468,     5,   148,     3,     4,   110,  2474,  2475,
      87,   233,    66,   110,    61,   586,   443,    30,    90,    27,
    1464,    81,   556,    87,    14,    15,   184,   199,    40,   456,
      17,   155,   120,   205,   206,    61,   122,   288,   199,   120,
     100,   233,     4,   148,   205,   206,   260,   261,   233,   583,
     105,   110,   225,   110,    56,   626,   116,     5,   182,   119,
      24,    25,   120,    65,     3,     4,   138,    27,   226,   288,
      61,    61,   119,   287,   645,   129,    83,     3,     4,   184,
       4,     5,   230,   617,   144,   145,     3,     4,   191,   247,
     170,   155,    99,   123,   191,     5,   244,   245,   110,   153,
     240,     3,     4,     0,    14,    15,  1291,   279,   252,   643,
       5,    98,   189,   327,   328,   329,   288,  1302,   337,    14,
      15,  2587,   341,   342,   282,     5,   660,   288,   119,   663,
     265,   261,   191,    97,   191,     5,   196,   192,    40,  2321,
     298,  2607,   247,    63,   204,   233,   159,   681,   682,   683,
     684,    61,   233,   687,   257,   689,   103,   691,   166,   693,
     257,   187,   188,   243,   155,   337,    61,   239,   116,   341,
     342,   201,     4,     5,   228,   233,   337,    22,    30,   191,
     341,   342,   239,   122,   104,    61,   241,   335,   336,    14,
      15,   442,   239,   298,     5,   208,   122,   187,   188,   770,
     105,   261,   262,    61,    49,   203,   166,    52,   110,   211,
      55,  2677,   220,  2679,    61,  2681,    26,  2683,   265,  2685,
     233,  2687,   281,   277,     4,   759,   760,   761,   762,   763,
     256,   765,   766,   767,   768,   190,    61,    82,   185,   265,
     266,   189,    94,   119,   270,    61,   780,   781,     4,     5,
     784,   785,   786,   787,   788,   789,   790,   791,   792,    61,
     220,   119,   796,   797,   109,   692,   256,   112,    31,  2735,
       5,   297,   119,   333,   265,   265,   266,   187,   188,    14,
      15,   815,   816,   817,   535,  1763,   200,   192,     5,   191,
       5,   239,   187,   188,     5,   250,    61,    82,   832,   833,
     834,   111,   836,   119,   838,  1783,   840,   297,    61,   161,
     230,     3,     4,   123,   262,  2781,   567,   119,   220,   190,
    1798,     3,     4,  1801,   244,   245,    61,   861,   191,   863,
      88,  1809,   252,    70,  1812,     4,   241,     3,     4,   166,
     874,    28,  1820,    87,     6,  1823,   256,   157,   882,  1997,
    1998,  1999,  1830,   887,   119,   265,   266,   115,    40,   185,
     270,   256,   187,   188,   190,   150,   119,    59,   902,   903,
     265,   266,   243,   116,    40,   270,   910,   222,   912,   913,
       4,     5,    66,     5,   117,   919,   277,   297,    83,   265,
     924,   243,   202,   220,     3,     4,   248,   611,   167,   933,
     226,   972,   297,     5,    99,   215,   251,   265,  1658,    31,
     837,   155,    14,    15,   948,   335,   336,    40,   265,  1863,
      40,    33,   336,     5,   250,   183,    88,   341,   110,   343,
     167,   256,   277,   218,   219,  1879,    60,     3,     4,   197,
     265,   266,    66,    89,   110,    16,    66,   232,   275,   265,
      59,   665,   187,   188,   881,   237,   670,   119,    66,    61,
     167,   995,   149,   265,  1908,   226,     3,     4,   175,   295,
       3,     4,   297,   255,    40,   276,    28,    72,   173,    99,
      17,  1015,     3,     4,   171,   105,   271,   110,   175,   113,
     110,    12,     3,     4,     5,   253,    89,     3,     4,     4,
     265,   238,  1036,    42,    43,   129,    12,    12,  2490,   129,
     247,  1045,   265,   339,    14,    15,     0,   141,   213,     3,
       4,   256,    31,   147,   148,  1059,     5,  1061,   148,   153,
     265,   266,  1066,  1067,  1068,   270,   294,   224,     3,     4,
       4,   148,  1076,   163,   110,  1079,   304,  1081,    14,    15,
       4,   246,     3,     4,    19,     3,     4,     5,     9,    10,
      11,    61,   297,  1097,     5,  1099,     4,     5,   191,  1103,
    1104,     5,   192,   260,    39,     3,     4,     5,     4,   203,
       5,   268,   269,  1117,  1118,   187,   188,    82,  1122,  1123,
       5,    56,     4,     5,  1128,    61,  1130,   149,   222,  1133,
       5,  1135,   226,     4,   228,   819,   213,  2488,   228,     5,
     861,   431,   432,     4,     4,  1186,     4,    26,     5,   171,
       4,   241,    97,   175,     5,   191,   119,   251,   252,   168,
     169,     4,   252,  2514,   262,   259,   101,     4,     4,     4,
       4,  1175,  1176,  1177,  1178,   252,  1180,  1181,     5,  2127,
    1184,    14,    15,   277,   256,   150,   195,     4,  2136,   279,
       4,     4,     4,   265,   266,  1199,     4,  2145,   270,     5,
       5,   291,   224,   293,   294,     9,  1210,     5,  1212,  1213,
    1214,  1215,    82,   290,    11,  1219,  1220,   187,   188,   261,
     155,   167,     4,  1227,  1121,   297,     4,   175,    61,   167,
    1234,     4,   111,   193,  1238,  1239,  1240,   193,   260,   333,
       5,     5,     4,   333,   123,  1249,   268,   269,  1252,   193,
      66,   187,   188,   218,   219,    66,   191,    66,  1978,  1263,
    2611,  2612,  1266,   220,  2615,     5,  2617,   232,     3,     4,
       5,   221,     7,     8,     5,     4,   211,    22,  2629,  2630,
     150,   216,     4,  2634,  2635,     4,   256,  2638,   193,     5,
       5,   226,  2643,  2644,    87,   265,   266,  1018,    87,     4,
    2613,     4,     4,    48,    49,  1309,   271,     5,  1312,     5,
       5,  1315,  1316,    99,  1318,     4,  1320,    62,  2631,     5,
     256,     4,  1326,   202,  1328,    17,  2046,   297,    35,   265,
     266,  1335,    17,    17,     4,     4,   215,    97,  2689,     5,
       5,  2692,     4,    87,  2258,     5,  2697,  2067,   218,   219,
     285,  1248,  2703,     5,   187,   188,     5,  2708,  1042,  1080,
    2274,   297,   232,   108,   109,  2279,    87,     4,     4,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    14,    15,   106,
       5,   271,    14,    15,     5,     5,  1410,     5,  1412,  1413,
    1414,     5,  1096,     3,     4,     5,     4,     7,     8,   126,
     127,   128,  1106,   256,     4,  2776,   133,    12,  2779,     5,
    1434,    12,   265,   266,  1438,  2748,     4,  1441,     4,   146,
       4,  2754,     4,     4,    61,   152,     5,  2798,  2482,    61,
    2801,  2485,     5,  2487,   164,   162,     5,     4,  1462,  1463,
    1464,     4,  2813,  2814,   297,    22,  2500,  2501,  1472,     3,
       4,     5,  1476,     7,     8,   220,     5,   222,  1199,  1483,
       3,     4,     4,  2517,     7,     8,     5,    20,   251,   279,
     251,     4,    49,  1497,  2807,    52,  2809,     5,  1502,     5,
       5,     5,  1506,     4,  1508,  1509,     5,  1511,  1512,  1513,
       4,  1515,     5,   263,  1518,  1519,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,    82,   263,  1531,  1532,  1533,
    1534,     5,    53,     5,  1255,     5,     4,  1541,  1542,  1223,
    1224,     4,  1546,  1547,  1548,     5,     5,  1551,  1552,  1270,
      71,     5,   109,     5,   299,   112,     5,     5,     4,  1563,
    1564,     4,  1566,  1567,  2478,     5,   273,    88,     5,     4,
     187,   188,  2486,     5,  2294,   187,   188,     5,   233,   100,
     233,  1478,     5,  2303,   136,  2499,   233,   105,   105,    40,
    2504,   105,     5,   207,   237,    40,   117,   207,     5,     4,
     121,     5,    12,     5,   207,   207,     4,     4,   110,     5,
       5,   132,     5,  1617,  1618,     5,     4,     4,  1622,   110,
       5,     5,     5,  1627,  1628,     5,  1630,  1631,  1632,     5,
    1634,  1635,  2352,  1637,     5,  2355,  1640,  1641,  2358,   256,
    2360,     4,     6,     5,   256,  1649,     4,  1544,   265,   266,
       5,   172,  1656,   265,   266,     5,     4,     4,  1662,  1663,
       5,     5,     4,    66,     5,   222,  1670,     4,     4,    12,
       4,    41,  1676,     4,    44,    29,    46,    80,    38,    38,
     297,     5,     4,     0,     5,   297,    89,   233,  1409,   233,
      44,   233,    46,   166,   251,    65,    99,    67,    68,    69,
     136,   120,     4,   241,   193,     4,   203,    77,  1712,    79,
       4,     4,     4,     4,    84,     5,    86,    87,    88,     5,
       5,  1405,    76,    93,   263,    95,   129,  1411,     5,     5,
      84,     5,     4,     4,     4,  1739,  1740,     5,     4,     4,
    1744,   953,     5,     5,     5,   148,  1750,  1468,   233,  1433,
    1471,   233,  1436,   123,   233,     4,  1440,     4,     4,     4,
    1481,   301,     4,     4,   301,   301,   301,     4,  1489,   139,
       4,     0,     5,   985,     5,  1496,   220,  1461,   220,   220,
     150,   151,   220,  1467,   154,     5,   140,   220,   158,   192,
     160,  1475,     5,     5,     4,  1479,     5,     5,     4,     4,
       4,   263,     5,  1487,  1488,     5,     4,     4,   263,     5,
       5,   181,   182,     4,  1498,   185,     5,     5,     4,     6,
       5,     4,     4,     4,   194,   228,     4,     6,     5,     5,
       5,  2745,     5,     5,     5,   189,     5,     5,     4,   209,
     210,     5,     4,   263,     5,     5,     5,   217,     4,   252,
       4,   205,   206,  1857,     5,  1859,     4,  1861,   212,  1863,
     214,     5,     5,     5,     4,     4,    12,     5,     5,   239,
       5,   241,     5,     4,     4,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,   239,     5,     5,   291,     4,
     293,     5,     5,     4,   264,     5,     5,     5,     5,     4,
    1904,     4,  1906,     5,  1908,     5,  1627,     5,     5,  1913,
     280,   281,     4,     4,    61,     5,     4,    33,     4,   289,
       4,  1925,     4,   344,     5,     5,   296,     5,  1932,     5,
       5,     4,   302,     4,   304,     5,     4,     4,     4,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,     5,
     304,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,     5,  1968,     4,  1970,  1971,  1972,   116,
     340,  1692,   119,     4,     4,   344,     5,     5,     4,     4,
       4,  1702,  1986,     5,     5,     5,  1707,     5,     5,     5,
       5,     5,  2647,     5,     5,     4,     4,   297,     5,     5,
     116,     5,     4,     4,   344,     5,     5,     5,   155,     5,
       4,     4,  2016,     5,  1911,  2019,     5,  2021,     5,  2023,
       5,     4,  2026,     4,  2028,     5,     4,     4,     4,  1926,
    1927,  2035,  2036,  1930,     4,     4,     4,     4,  2042,  1936,
    2044,  1938,   189,     4,  2048,     4,     4,  2051,     4,     4,
       4,     4,     4,     4,     4,   344,   344,   344,     5,     5,
     344,   344,  2717,     5,     4,     4,   277,     5,     5,     4,
     186,     5,   188,   189,     5,   191,   192,     5,     4,     4,
       4,     4,     4,     4,     4,     4,     4,  1984,     4,   236,
       5,     4,   239,     5,     5,     5,  2100,     4,     6,     5,
       5,     5,     5,   219,     4,   344,     5,     5,     4,     4,
     277,     5,   430,     4,     4,   262,     4,     4,   265,     5,
     236,   237,     5,     4,  1336,  1337,  1338,    19,  2025,   276,
       4,     4,   387,     5,  1346,  1347,  1348,     4,  2655,     5,
       5,  1353,  1354,  1355,     4,     4,  1358,  1359,     4,  1361,
    1362,  1872,    44,     5,  1875,     5,     5,  2198,     4,  2269,
       5,     4,     4,  2645,     5,     5,  2717,  2713,   726,    -1,
      -1,    -1,   288,    -1,    -1,    -1,    -1,    -1,    -1,  1391,
    1392,    -1,    -1,  1395,  1396,    77,    -1,    -1,    -1,  1873,
     306,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2204,    -1,    94,    95,    -1,    -1,    -1,    -1,    -1,   101,
      -1,    -1,    -1,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,    -1,  1909,    -1,    91,    -1,  2233,
      -1,   123,    -1,    -1,    -1,    99,  2240,  2726,  2727,  2243,
      -1,   105,    -1,    -1,    -1,  2249,    -1,   139,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,    -1,    -1,
      -1,   125,   154,    -1,    -1,    -1,    -1,    -1,    -1,   161,
    2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,    -1,  2287,   148,  2289,  2290,  2291,    -1,   181,
      -1,    -1,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2307,    -1,    -1,   422,  2311,    -1,    -1,
      -1,  2315,    -1,    -1,    -1,  2319,    -1,   433,    -1,    -1,
      -1,    -1,    -1,    -1,   216,    -1,   442,    -1,   192,    -1,
      -1,  2052,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,
    2237,  2238,  2239,    -1,    -1,  2242,    -1,  2244,  2245,    -1,
      -1,  2248,    -1,  2250,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2369,    -1,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    -1,    -1,  2097,   241,    -1,    -1,
      -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,   252,    -1,
      -1,    -1,    -1,    -1,    -1,   511,    -1,   290,   514,   515,
      -1,    -1,    -1,   267,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   527,   304,  2310,    -1,    -1,   532,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   541,   542,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2442,    -1,
      -1,    -1,  2446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2456,  2457,   347,    -1,    -1,    -1,    -1,  2463,
      -1,    -1,    -1,    -1,    -1,    -1,  2470,   965,    -1,    -1,
      -1,    -1,    -1,    -1,  2478,    -1,  2480,    -1,    -1,  2483,
    2484,  2202,  2486,    -1,    -1,    -1,    -1,    -1,    -1,   605,
     606,   607,    -1,    -1,    -1,  2499,    -1,    -1,  2502,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,    -1,    -1,  2512,    -1,
    2231,    -1,  2516,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2241,    -1,    -1,  2527,    -1,    -1,  2247,    -1,  2532,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1754,    -1,    -1,    -1,    -1,  2551,   664,    -1,
      -1,    -1,    -1,    -1,    -1,  1767,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1777,    -1,  2464,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2472,    -1,    -1,    -1,    -1,
      -1,    -1,  2586,    -1,     4,     5,    -1,    -1,  2592,    -1,
    2594,    -1,    -1,    -1,    -1,    -1,  2600,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2613,
    2614,  2295,    -1,    -1,  2511,    -1,   509,    -1,    -1,    -1,
      -1,    -1,    -1,   516,    -1,    -1,   519,  2631,  2632,    -1,
      -1,   524,  2636,    -1,  2675,   528,    -1,  1849,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,  2655,    -1,    73,    -1,    75,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,  2680,    -1,    -1,    99,
      -1,    -1,  2686,    -1,  2688,   105,    -1,    -1,    -1,    -1,
      -1,  2695,    -1,   113,    -1,   588,  2700,    -1,    -1,    -1,
      -1,  2705,    -1,    -1,    -1,    -1,    -1,   823,    -1,   129,
      -1,    -1,    -1,    -1,    -1,  2436,    -1,    -1,    -1,   835,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2745,    -1,   163,  2748,  2749,    -1,    -1,  2752,    -1,
    2754,  2755,   172,   173,    -1,    -1,   872,   873,    -1,    -1,
      22,    -1,  2766,  2767,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,   192,  2777,    -1,    -1,  2780,    -1,    -1,    -1,
     896,    -1,  2786,  2787,    -1,    -1,    48,    49,    -1,    51,
      52,    -1,    -1,   213,    -1,   688,    -1,    -1,    -1,    -1,
      62,    -1,   695,  2807,    -1,  2809,   226,    -1,   228,    -1,
      -1,    -1,    74,    75,  2498,    -1,    -1,    -1,    -1,    -1,
      82,   241,    -1,    85,    -1,    -1,   246,   943,    -1,    -1,
      -1,    -1,   252,    -1,  2518,    -1,    -1,    -1,  2522,   259,
     102,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,
     112,    -1,    -1,    -1,  1352,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1364,    -1,    -1,  2590,
     290,   291,    -1,   293,    -1,    -1,    -1,  2598,    -1,    -1,
      -1,    -1,    -1,    -1,  1382,  1383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2110,    -1,
      -1,    -1,  1018,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   822,
      -1,     4,    -1,    -1,    -1,    -1,   829,    -1,  2150,  2151,
    2152,  2153,  2154,    -1,  2156,  2157,    19,    -1,    -1,  2161,
    2162,  2163,  2164,  2165,  1070,  2167,  2168,    -1,    -1,    -1,
     222,    -1,    -1,    -1,  1080,   227,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     242,    -1,   875,    56,    -1,    -1,    -1,   880,    -1,   251,
     883,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   895,    -1,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   278,   279,    -1,  2740,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      91,    92,    -1,    -1,    -1,    -1,    -1,   299,    99,    -1,
      -1,    -1,    -1,    -1,   105,   118,    -1,    -1,    -1,    -1,
    2771,    -1,    -1,  2774,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,  1182,    -1,   129,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2761,    -1,    -1,
      -1,   343,   155,  1199,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,    -1,
     993,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1232,    -1,   191,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   199,  1243,    -1,    -1,
      -1,   192,   205,   206,    -1,    -1,    -1,    -1,   211,   200,
      -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1270,    -1,    -1,    -1,    -1,  1275,
    2372,     3,     4,  2375,  2376,  2377,  2378,  2379,    -1,  2381,
    2382,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
     241,  2393,  2394,  2395,  2396,  2397,    -1,  2399,  2400,    -1,
    2402,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2412,  2413,    -1,    -1,    -1,    -1,   267,    -1,    -1,    -1,
      -1,  2423,    -1,    -1,    56,   288,   277,    -1,   279,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   101,
      -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,   341,   342,
      -1,    -1,   333,    -1,    -1,  1773,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1781,  1782,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1409,  1187,    -1,    -1,    -1,  1796,  1797,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1807,
    1808,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
    1818,  1819,    -1,  1439,    -1,    -1,    -1,    -1,    -1,    -1,
    1828,  1829,    -1,  1226,    -1,    -1,  1834,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1844,    -1,  1241,    -1,
    2562,    -1,  1468,    -1,    -1,  1471,    -1,    -1,    -1,    -1,
      -1,  2573,    -1,  2575,    -1,  1481,  1482,  2579,    -1,   211,
      -1,    -1,    -1,  1489,   216,    -1,    -1,    -1,    -1,    -1,
    1496,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1536,    -1,    -1,  1539,  1540,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1549,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2665,    -1,    -1,  2668,    -1,    -1,  2671,
      -1,  2673,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
      -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1620,    -1,    -1,    -1,    -1,    -1,
      -1,  1627,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1645,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1661,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1680,    -1,    -1,    -1,    -1,  1685,
      -1,    56,  1688,    -1,  1690,  1691,  1692,  1693,    -1,    -1,
    1696,    -1,    -1,  1699,  1477,    -1,  1702,  1703,    -1,  1705,
    1706,  1707,  1708,    -1,  1710,  1711,    -1,    -1,    -1,    -1,
    1716,  1717,  1718,    -1,  1720,  1721,    -1,   216,    -1,    -1,
    1726,  1727,    -1,  2111,    -1,  1731,   101,    -1,    -1,    -1,
    1736,    -1,    -1,  2121,    -1,    -1,    -1,  2125,  2126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2134,  2135,    -1,    -1,
      -1,    -1,    -1,    -1,  1537,  2143,  2144,    -1,    -1,    -1,
    1543,  2149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2159,  2160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     155,    -1,  2170,  2171,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2181,    -1,    -1,     6,    -1,    -1,    -1,
      -1,    -1,  2190,    -1,  2192,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    -1,    -1,    -1,   211,    -1,    -1,    -1,
    1623,   216,    -1,    -1,    -1,    -1,  1629,    -1,    -1,    -1,
    1856,    -1,    -1,    -1,  1860,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1872,    -1,    -1,  1875,
    1653,    -1,    -1,    -1,    -1,    -1,    -1,  1660,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1905,
      -1,    -1,    -1,  1686,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1694,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    -1,    -1,    -1,
    1966,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2373,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2383,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2392,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2401,    -1,    -1,    -1,    -1,    -1,    -1,
    2408,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2419,    -1,  2039,    -1,    -1,    -1,  2425,    -1,    -1,
    2428,    16,    -1,  2431,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1854,    -1,    -1,  2080,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1876,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,    -1,    -1,    -1,    -1,    -1,  1910,    -1,  1912,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1929,    -1,  1931,    -1,
      -1,    -1,  1935,    -1,  1937,    -1,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2559,    -1,    -1,    -1,  2563,    -1,    -1,    -1,    -1,
      -1,    -1,  2570,    -1,    -1,    -1,    -1,    -1,  2576,    -1,
      -1,    -1,  2580,    -1,  1977,  2583,  2202,  1980,  1981,  2205,
      -1,    -1,    -1,    -1,    -1,    -1,  1989,    -1,    -1,  2215,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2231,    -1,    -1,  2234,    -1,
      -1,    -1,    -1,    -1,    -1,  2241,    -1,    -1,    -1,  2022,
    2246,  2247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2038,    -1,    -1,    -1,    -1,
     235,    -1,   237,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,  2059,    -1,    -1,    -1,
      -1,  2064,    -1,    -1,    -1,    -1,    -1,  2070,    -1,    -1,
      -1,    -1,  2075,    -1,    -1,    -1,  2079,    -1,    -1,  2082,
      -1,    -1,  2085,    -1,  2087,    -1,    -1,    -1,    -1,    -1,
    2093,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2334,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,  2363,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
    2436,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    64,    65,    -1,    67,    68,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    86,    87,    -1,    -1,
      -1,  2477,    -1,    -1,    -1,    95,    96,    -1,    -1,    -1,
      -1,    -1,    -1,  2489,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,  2286,   124,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,   139,
      -1,    -1,   142,    -1,    -1,    -1,    -1,   147,   148,    -1,
      -1,    -1,    -1,  2539,   154,    -1,    -1,    -1,    -1,    -1,
     160,    -1,  2548,    -1,    65,    66,    -1,    -1,    69,    -1,
      -1,    -1,    -1,   173,    -1,    -1,   176,   177,   178,    -1,
      -1,   181,   182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,   194,    -1,    -1,    -1,    -1,    -1,
     101,    -1,    18,    19,  2590,  2591,    -1,  2593,    -1,   209,
     210,   211,  2598,  2599,    -1,    -1,    -1,  2603,    -1,    -1,
      -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    -1,   234,    -1,    -1,   237,    -1,   239,
      -1,   241,    58,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,  2637,    -1,    -1,   155,    -1,    -1,    -1,    -1,   259,
      -1,    -1,    -1,    -1,   264,    -1,   167,    -1,    -1,    -1,
    2656,  2434,    -1,    -1,    -1,  2661,    -1,    -1,  2441,    -1,
     280,   281,  2445,   184,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   292,    -1,   294,    -1,    -1,    -1,   114,  2462,
     300,    -1,   203,   303,   304,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,   155,
     340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2740,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   264,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2757,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2771,    -1,    -1,  2774,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2619,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,  2709,    -1,    52,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    66,    -1,    -1,  2728,  2729,    -1,    -1,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,   105,    -1,    -1,   108,   109,    -1,    -1,   112,  2772,
      -1,    -1,    48,    49,    -1,    19,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,   129,    62,    -1,  2791,    -1,
      66,  2794,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    19,   148,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,    -1,    -1,
      -1,    -1,   108,   109,    -1,    -1,   112,    -1,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   192,    -1,
      -1,    -1,    -1,   129,    -1,    19,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,   220,    -1,   222,    -1,
      -1,    -1,    -1,   227,   228,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   170,    59,    -1,   241,   242,    -1,
      -1,    -1,    -1,   179,    -1,    -1,    -1,   251,   252,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   277,    -1,   279,    -1,   101,    -1,   155,
      -1,    -1,    -1,    -1,   220,    -1,   222,   291,    -1,   293,
      -1,   227,   228,    -1,    -1,   299,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,   242,   211,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   252,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   333,
      -1,   155,    -1,    -1,    -1,   211,    -1,    -1,    -1,    -1,
     216,   277,    -1,   279,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   299,    -1,    -1,   155,    -1,   272,    -1,
      -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,    -1,   333,   155,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   160,   281,    -1,   216,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    -1,    -1,
      -1,    -1,    -1,    -1,   155,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    -1,    -1,    -1,    -1,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   216,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    -1,    -1,    -1,
      -1,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   124,   135,   139,
     142,   147,   148,   154,   160,   173,   176,   177,   178,   181,
     182,   194,   209,   210,   211,   223,   231,   234,   237,   239,
     241,   246,   259,   264,   280,   281,   292,   294,   300,   303,
     304,   334,   340,   346,   237,   255,   378,    66,    12,    53,
      71,   100,   117,   121,   132,   285,   380,     3,     4,   285,
     347,   385,   185,   190,   226,   250,   295,   339,   387,   277,
       4,    40,   110,   191,   239,   392,    28,   149,   171,   175,
     224,   260,   268,   269,   360,   394,    83,    99,   173,   213,
     246,   395,    40,    59,   110,   191,   281,   347,   404,     4,
      19,    40,    56,   101,   118,   155,   191,   199,   205,   206,
     211,   216,   288,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   337,   341,   342,   349,   357,   358,   359,   406,
      33,   407,   349,    29,    44,    46,    76,    84,   140,   189,
     205,   206,   212,   214,   239,   304,   348,   142,   408,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   123,   139,   150,   151,   154,   158,
     160,   181,   182,   185,   194,   209,   210,   217,   239,   241,
     264,   280,   281,   289,   296,   302,   304,   340,   409,    83,
      99,   451,    19,    44,    77,    84,    94,    95,   101,   123,
     139,   154,   161,   181,   216,   264,   275,   304,   454,   349,
      88,   115,   183,   197,   253,   294,   304,   460,    16,    26,
     111,   123,   157,   202,   215,   463,   225,   481,     5,    66,
      88,   137,   294,   340,   349,   482,     5,   483,    20,    57,
     221,   234,   295,   499,    64,    66,   180,   284,   518,    66,
     200,   336,   341,   343,   519,    39,   191,   226,   285,   347,
     357,   359,   520,     5,   294,   304,   349,   523,    70,   167,
     238,   247,   524,    88,   499,    61,   275,   298,   531,   191,
     285,   347,   532,    26,   111,   123,   202,   215,   534,    50,
      99,   134,   287,   549,   550,     4,    37,    47,    74,   148,
     184,   226,   247,   282,   298,   373,     4,   123,   201,   551,
     285,   347,   553,    16,    23,   235,   237,   358,   554,   225,
     558,   285,   347,   559,     0,    22,    48,    49,    62,   108,
     109,   220,   222,   299,   379,     5,    59,   347,   381,   261,
       5,     4,   285,   347,   382,     5,    32,   274,   383,   122,
     347,   384,   122,   347,   386,   347,     4,   190,   243,   390,
     185,   295,   338,   339,   347,   389,   349,   136,   174,   388,
     347,    78,   170,   243,   347,   391,     5,   347,     4,   239,
     393,   347,   347,     5,   222,   396,    31,   397,     5,   398,
       5,   402,     5,    31,   403,   347,     9,    10,    11,   347,
     353,   354,   355,   356,   347,   347,    40,   110,   191,   347,
     405,   347,   191,   357,   359,   347,    35,   106,   126,   127,
     128,   133,   146,   152,   162,   273,   362,   347,     4,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     116,    66,    53,    71,    88,   100,   117,   121,   132,   172,
     410,   117,   412,   185,   190,   226,   250,   295,   338,   339,
     347,   399,   413,   277,   416,   167,   417,   167,   175,   419,
      65,    66,    69,    91,   167,   184,   203,   264,   333,   357,
     421,   347,   359,   424,    59,   281,   357,   425,   272,   357,
     359,   426,    33,   427,   357,   359,   428,     4,   357,   359,
     429,    45,    59,    81,   100,   116,   119,   144,   145,   196,
     204,   261,   262,   333,   433,   208,   297,   439,     5,    89,
       6,    88,   119,   431,     5,    65,   359,   430,    16,   499,
      66,   180,   284,   440,    66,   226,   441,   276,    61,   275,
     298,   442,   132,   233,   443,    37,    47,    74,   148,   184,
     247,   298,   444,   359,    89,    16,   193,   449,   357,   452,
      72,   455,    31,   456,    44,    87,   189,   457,   148,   213,
     252,   290,   458,   357,    18,    58,   114,   281,   357,   459,
       4,   190,   462,     5,     4,     6,   119,   347,     4,     5,
     239,   464,     5,   466,     5,   116,   189,   239,   262,   467,
      93,   110,   185,   480,     5,   478,     5,   262,   479,     4,
       5,   349,   349,   347,   347,     5,     4,     5,    60,    66,
      73,    75,    80,    83,    89,    99,   105,   113,   129,   148,
     163,   172,   173,   192,   213,   226,   228,   241,   246,   252,
     259,   277,   290,   291,   293,   333,   484,     5,     4,   347,
       5,   347,    40,   110,   347,   522,   349,   347,   357,   359,
     521,   347,   362,   347,     4,   358,    54,    90,   138,   239,
     525,     4,     4,   347,   148,   252,   526,     5,   357,     4,
      40,   110,   347,   533,   347,    97,    61,   119,   239,   265,
     535,   119,   548,    61,   116,   119,   155,   189,   236,   239,
     262,   265,   276,   537,   538,    61,   119,   265,   547,     5,
       4,    34,   107,   200,   530,    66,   349,   374,    66,   349,
     375,    66,   349,   376,    13,   186,   529,   347,   347,    40,
     110,   191,   220,   347,   377,   347,   262,     4,   347,   347,
       4,   557,     4,   279,   555,     4,   279,   556,     4,   362,
     122,   347,   560,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,     4,     5,   347,    12,   347,   347,
     347,    30,    94,   161,   243,   248,   361,   361,     4,   347,
     347,     4,     4,     4,   347,   347,   347,   347,     4,     4,
       5,     5,   357,     5,   347,   347,   353,   355,   355,   357,
     347,   347,   347,   347,   347,   347,   347,   357,   359,   356,
     347,   347,   356,   347,     5,   261,   103,   185,   411,   190,
     243,   414,   167,    78,   170,   243,   415,   136,   174,   400,
     400,     4,   418,     4,   420,   190,   250,   422,   175,   423,
     167,   362,   347,   357,   347,   357,   357,   362,   362,   362,
     357,   362,   347,   357,     4,   436,     4,   359,   434,   193,
       4,   164,   304,   435,   193,   357,     4,   357,   438,     5,
       5,     4,   193,   347,     4,     5,    60,    66,   113,   129,
     141,   147,   148,   153,   203,   222,   226,   228,   251,   252,
     259,   277,   333,   493,   359,    66,   445,    66,   446,    66,
     447,   220,   448,   347,     5,   221,   450,   358,   362,     5,
     357,   357,   357,     4,   349,     4,     4,   193,   347,    14,
      15,    61,   187,   188,   256,   265,   266,   297,    87,     5,
       5,    14,    15,    61,   187,   188,   256,   265,   266,   270,
     297,    87,   155,   160,   358,   470,   474,    87,   155,     5,
     468,     4,     4,    14,    61,   187,   256,   265,   297,     5,
       5,     4,   347,   358,    20,    21,    22,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,    99,   105,   108,
     109,   112,   129,   148,   170,   192,   220,   222,   227,   228,
     241,   242,   251,   252,   277,   279,   291,   293,   299,   333,
      66,    80,    89,    99,   129,   148,   192,   228,   252,   291,
     293,     4,    30,   159,   208,   233,   487,     5,    63,   104,
     230,   244,   245,   335,   336,   492,    99,   485,    17,    40,
     110,   191,   491,     4,     5,    17,   207,   286,   347,   252,
     492,   500,   123,   492,   501,    36,    40,   110,   130,   191,
     285,   347,   502,   357,   349,    91,    99,   105,   125,   148,
     156,   192,   200,   241,   252,   267,   505,    40,   110,   191,
       5,   278,    17,   207,   286,   509,   279,   349,   510,     5,
      99,   105,   294,    17,    17,     4,   347,   347,   347,   347,
     347,   362,   347,   347,   356,   347,     4,   362,    40,   110,
     191,   257,   527,    40,   110,   191,   257,   528,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   538,    61,
     119,   155,   265,   542,    61,   119,   265,   546,    87,   155,
      61,   119,   265,   540,     4,    61,   119,   265,   539,     5,
       5,     4,     5,     5,     5,   347,   347,   347,   347,   347,
     347,     4,   347,   552,   347,   347,     6,   358,     4,     5,
       4,     4,     5,     4,    97,   254,   363,   347,   347,    12,
     347,   347,   347,   347,   347,   347,   347,   347,   347,     5,
      12,   347,   347,    12,     4,    12,     4,     4,   347,   347,
     347,     4,   349,     4,     4,   362,   357,   362,   347,   347,
     347,   357,   347,   356,   347,   347,     5,     5,   347,   359,
     347,   357,   357,   347,   362,   363,   363,   363,   362,   356,
     347,   362,   347,   131,   240,   350,   437,   164,     5,     4,
     362,   357,     4,     5,     4,     4,   347,   432,   347,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   108,   109,   112,   129,   148,   170,   179,   220,   222,
     227,   228,   242,   252,   277,   279,   289,   299,   333,    66,
     129,   153,   228,   277,    30,   159,   208,   233,   494,   347,
      20,   203,   347,   495,    17,   347,   251,   505,   251,   203,
     347,   496,   279,   497,    17,    98,   347,   347,     5,   363,
      56,   357,     4,     5,   461,   347,     5,     5,     5,   155,
     182,   367,   367,   163,   258,   365,     4,     4,     5,     5,
     465,   263,   263,     5,     5,     5,    17,   157,   366,   366,
     365,     4,     4,   365,     5,     5,   469,   160,   332,   358,
     473,     5,   472,     5,     5,   476,     5,   477,     5,    14,
      15,    61,   187,   188,   256,   265,   266,   270,   297,     4,
       4,     5,     5,   367,   365,     4,     5,     5,   362,    82,
     150,   218,   219,   232,   271,   370,     7,     8,   347,   352,
     233,   120,   233,   233,   105,    40,    66,    99,   105,   110,
     129,   148,   163,   192,   228,   241,   252,   279,   291,   293,
     294,   333,   486,   120,   233,     5,    27,   165,   233,   275,
     136,   105,    22,    49,    52,    82,   109,   112,   222,   251,
      22,    49,    52,    55,    82,   109,   112,   222,   251,   277,
      40,   120,   233,   233,   105,     5,   207,    27,   220,    36,
     130,   285,   347,   255,   261,   120,   237,   357,   359,   505,
      40,   220,   275,   237,   207,     5,     5,   241,    27,   220,
       4,     5,     5,   207,    36,   130,   285,   347,   505,   207,
     349,     4,     4,   347,     5,   297,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   108,   109,
     112,   170,   222,   227,   242,   251,   278,   279,   299,   343,
     488,   347,   347,   347,   347,   347,   492,   357,     5,     4,
       5,   347,   347,   357,   359,   347,   349,   347,   347,   492,
       5,   347,   347,   349,     5,    17,     5,     5,   347,   347,
     356,   347,   347,   347,   347,   110,   347,   347,   110,     4,
      42,    43,   168,   169,   195,   372,   372,    61,   119,   265,
     536,   372,     5,    61,   119,   265,   541,     5,     5,    61,
     119,   265,   543,     4,     5,     5,     4,    61,   119,   265,
     545,    61,   119,   265,   544,     5,     5,     4,     5,     5,
       4,   372,   372,   372,   347,   347,   347,   347,   347,     4,
     347,   357,   347,   358,   362,     5,     5,    12,   347,   357,
     359,   347,    12,   347,   347,   347,    59,   347,     6,     4,
     347,   347,    46,   264,   401,     5,   349,   349,   362,   347,
       4,     4,     4,   357,   347,   347,   347,   347,   362,     4,
     357,   363,   356,   347,     4,   363,   347,    38,    38,     4,
     359,     5,    24,    25,    97,   364,   347,     4,   347,     5,
      82,   150,   218,   219,   232,   271,   357,   359,   233,   120,
     233,   233,    21,   233,   357,   120,   233,    27,   165,   233,
     275,   136,    21,   233,   120,   233,   233,    21,   233,    27,
     166,   220,   166,   255,   261,   120,   166,   220,   283,   505,
     166,   220,   275,     4,   241,    27,   166,   220,   505,   203,
     347,    82,   150,   218,   219,   232,   271,   347,   347,   347,
     347,   347,   193,   347,   347,    20,   229,   453,     4,     4,
     347,   367,   367,   367,     4,   367,   367,   367,    14,    15,
      61,   187,   188,   256,   265,   266,   297,   366,   367,   367,
     367,   367,   367,     4,   367,   367,     4,   366,    14,    15,
      61,   187,   188,   256,   265,   266,   297,     5,   471,     5,
     475,     5,     5,    14,    15,    61,   187,   188,   256,   265,
     266,   270,   297,     5,    14,    15,    61,   187,   188,   256,
     265,   266,   270,   297,     5,    14,    15,    61,   187,   188,
     256,   265,   266,   270,   297,    14,    15,    61,   187,   188,
     256,   265,   266,   297,   263,     5,     5,     5,   366,   366,
     365,     4,     4,   365,     5,     4,     4,   367,   367,     4,
     367,   367,     5,   349,   357,   359,     5,   347,   349,   347,
       5,   347,     5,   352,   105,   192,   241,   105,   192,   241,
       5,   349,   347,   349,     5,   347,   357,   349,     5,   352,
     233,   233,    21,   233,    21,   233,   233,    21,   233,   301,
     301,     4,     4,     4,   486,     4,     4,     4,   301,   301,
       4,     5,     4,   349,   347,     5,   347,     5,   352,   349,
     357,   359,   357,   359,   347,    27,    48,    51,    62,    85,
     102,   343,   368,     4,   349,   347,   362,   356,   349,   357,
     359,   357,   347,   349,   349,   357,   359,   357,   359,   347,
     349,   347,     5,   347,   220,   220,   347,   347,   220,   347,
     220,   347,   347,   498,   506,   347,   220,   220,   347,   347,
     347,   347,   347,   347,   347,   347,     5,   297,   347,   489,
     347,   347,   220,   347,   347,   347,   347,   357,   362,     5,
     357,   357,   347,   347,   362,   356,   347,   347,   347,   357,
     347,   347,     5,   347,   347,   347,   347,     5,     5,     4,
     372,     5,     5,     4,     4,     4,     5,     5,     4,     4,
       5,     5,     4,     5,     5,     4,   347,   347,   357,   347,
     362,   347,   357,   359,   347,   362,   347,   347,   347,   347,
     347,     5,   347,     4,     6,   347,   347,     4,   357,   347,
     362,   175,   360,   347,   360,   363,   362,   357,   347,   347,
       4,   347,   347,     4,   357,     5,     5,     5,     5,   357,
     362,   357,   357,   357,   357,   359,   357,   362,   357,   357,
     357,   359,   357,   357,   357,   357,   359,   357,   357,   357,
     347,   357,   357,   357,   357,   357,   357,   357,   357,     5,
       5,     5,     5,   357,   347,   347,     4,   347,     5,     4,
     347,   367,     5,     5,     5,   365,     4,     4,     5,   367,
     366,     4,   367,     5,     5,     5,   366,   366,   365,     4,
       4,     5,    14,    15,    61,   187,   188,   256,   265,   266,
     297,    14,    15,    61,   187,   188,   256,   265,   266,   297,
      14,    15,    61,   187,   188,   256,   265,   266,   297,   263,
       5,     5,     5,   366,   366,   365,     4,     4,   365,     5,
     263,     5,     5,     5,   366,   366,   365,     4,     4,   365,
       5,   263,     5,     5,     5,   366,   366,   365,     4,     4,
     365,     5,     5,     5,     5,   366,   366,   365,     4,     4,
       5,   366,     4,     4,   366,     4,     4,   367,     5,   362,
     357,   347,   347,   357,   347,     5,   352,     5,   357,   359,
     349,     5,   357,   359,   362,     5,   352,   347,   347,   347,
     347,   347,   347,   347,   347,   347,     4,     4,     5,     4,
       4,   347,   357,   347,     5,   352,   349,   362,   356,   362,
     347,   347,   356,   356,   362,   356,   362,   347,   362,   356,
     362,   356,   347,   347,   347,   347,   347,   347,   347,   347,
     347,   347,    55,    66,    92,   129,   277,   279,   333,   503,
     504,   505,   516,   517,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   357,     5,   347,   347,
     347,   347,     4,     4,   362,   363,     4,   490,   362,   362,
     356,   347,     4,   362,   372,   372,   372,   347,   347,   347,
     362,   347,   356,   347,   347,    12,     5,     5,     4,   347,
     347,     4,   362,   357,   347,   347,   363,   364,   347,     5,
     347,   359,     5,     5,     5,     5,   362,   364,   364,   364,
     362,   364,   363,   364,   364,   362,   364,   364,   364,   362,
     364,   364,   362,   357,   364,   362,   364,   364,   362,   364,
     362,     5,     5,     5,     5,   362,     4,   359,     5,   347,
       4,   367,   366,     4,   366,     5,     5,     5,   366,   366,
     365,     4,     4,     5,     5,     5,     5,   366,   366,   365,
       4,     4,     5,     5,     5,     5,   366,   366,   365,     4,
       4,     5,   366,   367,   367,   367,   367,   367,     4,   367,
     367,     4,   366,   366,   367,   367,   367,   367,   367,     4,
     367,   367,     4,   366,   366,     4,     4,   366,     4,   366,
     366,     4,     4,     4,   358,   364,     4,   357,   359,   364,
     347,   357,     4,   364,   364,   357,     4,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   347,   347,   357,   359,
     364,   347,   357,     4,   356,   356,   356,   347,   357,   359,
     356,   347,   356,   356,   357,   357,   359,   356,   347,   356,
     347,   347,   347,   347,   347,   347,   352,   347,   347,   347,
     344,   344,   344,   344,   344,   344,   344,   504,   344,   352,
     347,   347,   347,   347,   352,   347,   347,   347,   347,   347,
     347,   362,   347,   297,   351,   352,   347,   347,   363,   349,
       4,     4,   363,   347,   356,   347,    59,   347,     5,     5,
     347,     4,   360,   364,     5,     4,     4,     5,   357,     5,
     363,   364,   363,   363,   363,     4,     5,   357,     5,     5,
       4,   347,   367,   366,   367,   367,   367,   367,   367,     4,
     367,   367,   366,     4,   366,   367,   367,   367,   367,   367,
       4,   367,   367,   366,   367,   366,     4,   367,   367,   366,
       4,   367,   366,     4,   366,   366,   362,   357,   359,   364,
       4,   362,   347,   362,   347,   347,   347,   364,     4,   362,
     347,   356,   364,   347,   356,   364,   364,   357,   352,   347,
       4,   369,   369,   347,   347,   369,   352,   369,   506,   357,
     486,     5,     4,     5,     5,     5,     4,   349,   352,   369,
     369,   347,   347,   352,   347,   347,   347,   347,   347,   356,
     347,     5,   506,   347,   369,   349,   507,   508,     5,   349,
       5,   347,     5,     4,     6,   347,     5,    32,   274,   371,
     357,     5,   371,   357,   347,   366,   367,   366,   366,   367,
     367,   366,   367,   366,   366,   347,   364,   357,   359,   357,
     347,   357,   347,   357,   359,   357,   347,   357,   364,     4,
     506,   506,   351,   347,   506,     4,   506,   362,     5,     4,
       4,   506,   506,   351,   347,     4,   506,   506,   347,   357,
     506,   506,   506,   507,   513,   514,   505,   511,   512,     5,
       5,     6,     4,   185,   295,   339,   347,   399,   357,   357,
       4,   367,   367,   367,   367,   358,   364,   364,   347,   364,
       4,   364,   364,   347,   364,   347,   506,   506,     4,   347,
     506,     5,   347,   506,     4,   347,   506,   362,   513,   515,
     516,   344,   512,     5,     5,     4,   400,   400,   362,   362,
     364,     4,   357,   359,     4,   352,   351,   347,   347,   351,
     347,   357,   516,   349,     5,     5,   347,   347,   371,   371,
       5,   357,   359,   362,   357,   359,   506,   347,     4,   506,
     347,   364,     5,   347,   347,   362,   362,     4,   506,     4,
     506,     5,     5,   351,   351,   506,   506
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
    {fr->getHorzCutCmd((yyvsp[(3) - (8)].str),(yyvsp[(4) - (8)].str),Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)),(Coord::InternalSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
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
    {fr->getVertCutCmd((yyvsp[(3) - (8)].str),(yyvsp[(4) - (8)].str),Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)),(Coord::InternalSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
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
#line 1732 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1734 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 741:
#line 1738 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 742:
#line 1741 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 743:
#line 1744 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1746 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 745:
#line 1749 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 746:
#line 1753 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 747:
#line 1757 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 748:
#line 1762 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 749:
#line 1766 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 750:
#line 1767 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 751:
#line 1769 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1771 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1772 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 754:
#line 1774 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1776 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1778 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1780 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1782 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 759:
#line 1783 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 760:
#line 1785 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 761:
#line 1787 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 762:
#line 1790 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 763:
#line 1794 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 764:
#line 1798 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 765:
#line 1800 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 766:
#line 1802 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 767:
#line 1804 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 768:
#line 1806 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 769:
#line 1808 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1810 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1812 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1814 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1816 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 774:
#line 1818 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 775:
#line 1820 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 776:
#line 1822 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 777:
#line 1824 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 778:
#line 1825 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 779:
#line 1827 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1829 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 781:
#line 1830 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1831 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1833 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 784:
#line 1835 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 785:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 786:
#line 1837 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 787:
#line 1838 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1840 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1841 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1843 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 791:
#line 1845 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 792:
#line 1849 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 793:
#line 1853 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 794:
#line 1856 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1859 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 796:
#line 1863 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 797:
#line 1867 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 798:
#line 1872 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1876 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 800:
#line 1877 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 801:
#line 1878 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 802:
#line 1880 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 803:
#line 1882 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 804:
#line 1884 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 805:
#line 1888 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 806:
#line 1889 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1890 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1892 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 809:
#line 1894 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 810:
#line 1897 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 811:
#line 1899 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 812:
#line 1902 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 813:
#line 1904 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 814:
#line 1907 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 815:
#line 1908 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1910 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 817:
#line 1912 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 818:
#line 1916 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 819:
#line 1920 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1922 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 821:
#line 1924 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 822:
#line 1927 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 823:
#line 1930 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1933 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 825:
#line 1934 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 826:
#line 1936 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 827:
#line 1937 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 828:
#line 1938 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 829:
#line 1940 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 830:
#line 1941 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1943 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 832:
#line 1945 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 833:
#line 1948 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 834:
#line 1951 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 835:
#line 1953 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 836:
#line 1954 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 840:
#line 1959 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 841:
#line 1960 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 842:
#line 1962 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 843:
#line 1964 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 844:
#line 1966 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 845:
#line 1967 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 846:
#line 1969 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 847:
#line 1970 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 850:
#line 1975 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 851:
#line 1976 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 852:
#line 1977 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 853:
#line 1978 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 854:
#line 1979 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 1980 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 856:
#line 1981 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 857:
#line 1982 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 858:
#line 1983 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 859:
#line 1984 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 860:
#line 1986 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 861:
#line 1988 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 862:
#line 1990 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 1991 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 864:
#line 1992 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 1993 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 866:
#line 1994 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 867:
#line 1996 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 868:
#line 1997 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 869:
#line 1998 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 870:
#line 1999 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 871:
#line 2000 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 872:
#line 2002 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 873:
#line 2003 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 874:
#line 2004 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 875:
#line 2005 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 876:
#line 2006 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 877:
#line 2007 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 878:
#line 2010 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 879:
#line 2011 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 880:
#line 2012 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 881:
#line 2013 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 882:
#line 2014 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 883:
#line 2015 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 884:
#line 2016 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 885:
#line 2017 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 886:
#line 2018 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 887:
#line 2019 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 888:
#line 2020 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 889:
#line 2021 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 890:
#line 2022 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 891:
#line 2023 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 892:
#line 2024 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 893:
#line 2025 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 894:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 895:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 896:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 897:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 898:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 899:
#line 2033 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 900:
#line 2034 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 901:
#line 2035 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 902:
#line 2036 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 903:
#line 2037 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 904:
#line 2039 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 905:
#line 2049 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 906:
#line 2057 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 907:
#line 2066 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 908:
#line 2074 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 909:
#line 2081 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 910:
#line 2088 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2096 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2104 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2109 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2114 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2119 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2124 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2129 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2134 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2139 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2148 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2157 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2167 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2176 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2184 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2194 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2204 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2214 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2226 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2235 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2243 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 932:
#line 2245 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 933:
#line 2247 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 934:
#line 2252 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 935:
#line 2255 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 936:
#line 2259 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 937:
#line 2261 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 938:
#line 2262 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 939:
#line 2265 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 940:
#line 2266 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 941:
#line 2267 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 942:
#line 2268 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 943:
#line 2269 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 944:
#line 2270 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 945:
#line 2271 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 947:
#line 2275 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 948:
#line 2276 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 949:
#line 2277 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 950:
#line 2278 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 951:
#line 2279 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 952:
#line 2282 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 953:
#line 2284 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 954:
#line 2286 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 955:
#line 2288 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 956:
#line 2290 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 957:
#line 2292 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 958:
#line 2295 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 959:
#line 2297 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 960:
#line 2299 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 961:
#line 2301 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2303 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2305 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2307 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 965:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 966:
#line 2309 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 967:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 968:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2315 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 970:
#line 2317 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 971:
#line 2319 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 972:
#line 2320 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2321 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 974:
#line 2323 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2325 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2328 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2330 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2332 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 979:
#line 2333 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 980:
#line 2334 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 981:
#line 2335 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 982:
#line 2337 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2338 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2339 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 985:
#line 2340 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2341 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 987:
#line 2343 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2345 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2346 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2348 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 991:
#line 2350 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 992:
#line 2352 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 993:
#line 2353 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 994:
#line 2355 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2357 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2358 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 997:
#line 2359 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 998:
#line 2360 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2362 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2364 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1001:
#line 2367 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1002:
#line 2370 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1003:
#line 2371 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2372 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2374 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2377 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1007:
#line 2380 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1008:
#line 2381 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1009:
#line 2382 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1010:
#line 2384 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1011:
#line 2386 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2388 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1013:
#line 2389 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2391 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2392 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1016:
#line 2393 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1017:
#line 2394 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2395 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2397 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1020:
#line 2399 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1021:
#line 2401 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1022:
#line 2403 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2405 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1025:
#line 2406 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1026:
#line 2408 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1027:
#line 2410 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1028:
#line 2411 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1029:
#line 2412 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1031:
#line 2414 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1033:
#line 2418 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1034:
#line 2419 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1035:
#line 2420 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1036:
#line 2421 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1037:
#line 2422 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1038:
#line 2423 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1039:
#line 2425 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1040:
#line 2426 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1041:
#line 2428 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1042:
#line 2431 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1043:
#line 2432 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1044:
#line 2433 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1045:
#line 2434 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1046:
#line 2437 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1047:
#line 2438 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1048:
#line 2441 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1049:
#line 2442 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1050:
#line 2445 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1051:
#line 2446 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1052:
#line 2449 "frame/parser.Y"
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
#line 2462 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1054:
#line 2463 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1055:
#line 2467 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1056:
#line 2468 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1057:
#line 2472 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1058:
#line 2473 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1059:
#line 2478 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1060:
#line 2483 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1061:
#line 2489 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1062:
#line 2491 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1063:
#line 2494 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1064:
#line 2496 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1065:
#line 2499 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1066:
#line 2502 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1067:
#line 2503 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1068:
#line 2504 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1069:
#line 2505 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1070:
#line 2506 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1071:
#line 2507 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1072:
#line 2509 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1073:
#line 2511 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1076:
#line 2518 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1077:
#line 2519 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1078:
#line 2520 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1079:
#line 2521 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1080:
#line 2522 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1081:
#line 2523 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1084:
#line 2528 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1085:
#line 2529 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1086:
#line 2530 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1087:
#line 2531 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1088:
#line 2532 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1089:
#line 2533 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1090:
#line 2534 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1091:
#line 2535 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1092:
#line 2536 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1093:
#line 2537 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1094:
#line 2538 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1097:
#line 2545 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1098:
#line 2546 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1100:
#line 2549 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1101:
#line 2550 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1102:
#line 2551 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1103:
#line 2552 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1104:
#line 2555 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1105:
#line 2556 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1108:
#line 2564 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1109:
#line 2567 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1110:
#line 2568 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1114:
#line 2575 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1115:
#line 2578 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1116:
#line 2582 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1117:
#line 2583 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1118:
#line 2584 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1119:
#line 2585 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1120:
#line 2588 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1121:
#line 2589 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1122:
#line 2590 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1123:
#line 2591 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1124:
#line 2595 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1125:
#line 2596 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1126:
#line 2598 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1127:
#line 2603 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1129:
#line 2605 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1131:
#line 2607 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1132:
#line 2610 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1133:
#line 2612 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1134:
#line 2617 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1135:
#line 2620 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2621 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1137:
#line 2622 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1138:
#line 2625 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1139:
#line 2627 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1140:
#line 2631 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1141:
#line 2632 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1142:
#line 2636 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1143:
#line 2637 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1144:
#line 2638 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1145:
#line 2639 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1146:
#line 2644 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1147:
#line 2645 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1148:
#line 2646 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1149:
#line 2647 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1152:
#line 2655 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2657 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1154:
#line 2658 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1155:
#line 2659 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1156:
#line 2663 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1157:
#line 2664 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2665 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1159:
#line 2666 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1160:
#line 2669 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1161:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1162:
#line 2673 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1163:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1164:
#line 2675 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1165:
#line 2678 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1166:
#line 2679 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1167:
#line 2680 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1168:
#line 2683 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1169:
#line 2684 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1171:
#line 2686 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1172:
#line 2687 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1173:
#line 2690 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1174:
#line 2691 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1175:
#line 2692 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1180:
#line 2699 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1181:
#line 2703 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1182:
#line 2705 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1183:
#line 2707 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1185:
#line 2712 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1186:
#line 2714 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2716 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1197:
#line 2729 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1198:
#line 2730 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1199:
#line 2731 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1200:
#line 2734 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1201:
#line 2735 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1202:
#line 2736 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1203:
#line 2739 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2740 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2741 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2744 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2745 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2746 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2750 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2751 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1212:
#line 2752 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1213:
#line 2755 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2756 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1215:
#line 2757 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2760 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1217:
#line 2761 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1218:
#line 2762 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1219:
#line 2765 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2766 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2767 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2770 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2771 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2772 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2776 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1226:
#line 2778 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1227:
#line 2780 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1228:
#line 2784 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1229:
#line 2787 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2788 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1231:
#line 2791 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1232:
#line 2792 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1233:
#line 2793 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1234:
#line 2796 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1235:
#line 2798 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1236:
#line 2799 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1237:
#line 2801 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1239:
#line 2805 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1240:
#line 2806 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2807 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2808 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1243:
#line 2811 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1244:
#line 2812 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1245:
#line 2816 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1247:
#line 2818 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1250:
#line 2823 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1251:
#line 2824 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1252:
#line 2825 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1253:
#line 2828 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1254:
#line 2829 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1255:
#line 2830 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1256:
#line 2833 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1257:
#line 2835 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1258:
#line 2840 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1259:
#line 2843 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1260:
#line 2850 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1261:
#line 2852 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1262:
#line 2854 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1263:
#line 2859 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1265:
#line 2863 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1266:
#line 2864 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1267:
#line 2865 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1268:
#line 2867 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1269:
#line 2869 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1270:
#line 2874 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10923 "frame/parser.C"
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

