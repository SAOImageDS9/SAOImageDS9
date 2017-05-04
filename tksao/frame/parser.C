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
#define YYLAST   5544

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  345
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1275
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2827

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
     795,   798,   812,   826,   839,   852,   854,   855,   857,   859,
     864,   871,   873,   875,   877,   879,   881,   883,   885,   887,
     889,   894,   898,   903,   904,   911,   920,   923,   927,   931,
     935,   936,   940,   945,   950,   955,   959,   963,   965,   969,
     975,   980,   985,   989,   992,   993,   995,   997,  1001,  1004,
    1007,  1010,  1013,  1016,  1019,  1022,  1025,  1028,  1031,  1034,
    1037,  1040,  1043,  1045,  1048,  1051,  1056,  1066,  1069,  1072,
    1075,  1077,  1081,  1084,  1087,  1089,  1092,  1101,  1104,  1106,
    1109,  1111,  1114,  1116,  1121,  1131,  1134,  1136,  1138,  1140,
    1142,  1145,  1147,  1149,  1152,  1154,  1155,  1158,  1161,  1163,
    1164,  1167,  1170,  1172,  1174,  1177,  1180,  1183,  1185,  1187,
    1189,  1191,  1193,  1195,  1196,  1198,  1201,  1203,  1208,  1214,
    1215,  1218,  1220,  1226,  1229,  1232,  1234,  1236,  1238,  1241,
    1243,  1246,  1248,  1250,  1251,  1253,  1255,  1256,  1258,  1264,
    1271,  1276,  1280,  1287,  1290,  1292,  1296,  1298,  1300,  1302,
    1306,  1313,  1321,  1327,  1329,  1331,  1336,  1342,  1344,  1348,
    1349,  1351,  1354,  1356,  1361,  1363,  1366,  1368,  1371,  1375,
    1378,  1380,  1383,  1385,  1390,  1393,  1395,  1397,  1401,  1403,
    1406,  1410,  1413,  1414,  1416,  1418,  1423,  1426,  1427,  1429,
    1431,  1434,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,
    1451,  1453,  1455,  1457,  1460,  1463,  1466,  1469,  1471,  1473,
    1475,  1476,  1478,  1479,  1481,  1482,  1484,  1485,  1487,  1488,
    1491,  1494,  1495,  1497,  1500,  1502,  1509,  1515,  1517,  1519,
    1521,  1524,  1527,  1529,  1531,  1533,  1535,  1538,  1540,  1542,
    1544,  1547,  1549,  1551,  1554,  1557,  1560,  1561,  1563,  1564,
    1566,  1568,  1570,  1572,  1574,  1576,  1578,  1580,  1583,  1586,
    1588,  1591,  1595,  1597,  1600,  1603,  1608,  1615,  1617,  1628,
    1630,  1633,  1637,  1641,  1644,  1647,  1650,  1653,  1656,  1659,
    1662,  1667,  1672,  1677,  1681,  1685,  1691,  1696,  1701,  1706,
    1710,  1714,  1718,  1722,  1725,  1728,  1733,  1737,  1741,  1745,
    1749,  1754,  1759,  1764,  1769,  1775,  1780,  1787,  1795,  1800,
    1805,  1811,  1814,  1818,  1822,  1826,  1829,  1833,  1837,  1841,
    1845,  1850,  1854,  1860,  1867,  1871,  1875,  1880,  1884,  1888,
    1892,  1896,  1900,  1906,  1910,  1914,  1919,  1923,  1926,  1929,
    1931,  1935,  1940,  1945,  1950,  1955,  1960,  1967,  1972,  1977,
    1983,  1988,  1993,  1998,  2003,  2009,  2014,  2021,  2029,  2034,
    2039,  2045,  2051,  2057,  2063,  2069,  2075,  2083,  2089,  2095,
    2102,  2108,  2114,  2120,  2126,  2133,  2139,  2147,  2156,  2162,
    2168,  2175,  2179,  2183,  2187,  2191,  2195,  2201,  2205,  2209,
    2214,  2218,  2222,  2226,  2230,  2235,  2239,  2245,  2252,  2256,
    2260,  2265,  2269,  2273,  2277,  2281,  2285,  2291,  2295,  2299,
    2304,  2309,  2314,  2318,  2324,  2329,  2334,  2337,  2341,  2348,
    2355,  2357,  2359,  2361,  2364,  2367,  2370,  2374,  2378,  2381,
    2394,  2397,  2400,  2402,  2406,  2411,  2414,  2415,  2419,  2421,
    2423,  2426,  2429,  2432,  2435,  2438,  2443,  2448,  2453,  2457,
    2462,  2468,  2476,  2485,  2492,  2497,  2506,  2516,  2523,  2530,
    2538,  2549,  2561,  2574,  2584,  2590,  2595,  2601,  2608,  2612,
    2618,  2624,  2630,  2637,  2643,  2648,  2658,  2669,  2681,  2691,
    2698,  2705,  2712,  2719,  2726,  2733,  2740,  2747,  2754,  2762,
    2770,  2773,  2778,  2783,  2788,  2793,  2799,  2804,  2809,  2815,
    2821,  2825,  2830,  2835,  2840,  2845,  2852,  2860,  2869,  2879,
    2886,  2897,  2909,  2922,  2932,  2936,  2939,  2943,  2949,  2956,
    2964,  2969,  2973,  2977,  2984,  2991,  2998,  3006,  3013,  3021,
    3026,  3031,  3036,  3043,  3053,  3058,  3062,  3069,  3077,  3085,
    3088,  3092,  3096,  3100,  3105,  3108,  3111,  3116,  3124,  3135,
    3139,  3141,  3145,  3148,  3151,  3154,  3157,  3161,  3167,  3172,
    3178,  3181,  3189,  3193,  3196,  3199,  3203,  3206,  3209,  3212,
    3216,  3219,  3223,  3228,  3232,  3236,  3242,  3249,  3254,  3257,
    3261,  3264,  3267,  3272,  3276,  3280,  3283,  3287,  3289,  3292,
    3294,  3297,  3300,  3303,  3305,  3307,  3309,  3311,  3314,  3316,
    3319,  3322,  3324,  3327,  3330,  3332,  3335,  3337,  3339,  3341,
    3343,  3345,  3347,  3349,  3351,  3352,  3354,  3357,  3360,  3363,
    3367,  3373,  3381,  3389,  3396,  3403,  3410,  3417,  3423,  3430,
    3437,  3444,  3451,  3458,  3465,  3472,  3483,  3491,  3499,  3507,
    3517,  3527,  3538,  3551,  3564,  3567,  3570,  3574,  3579,  3584,
    3589,  3592,  3597,  3602,  3604,  3606,  3608,  3610,  3612,  3614,
    3616,  3618,  3621,  3623,  3625,  3627,  3631,  3635,  3640,  3647,
    3658,  3666,  3674,  3680,  3685,  3692,  3703,  3711,  3719,  3725,
    3728,  3731,  3735,  3740,  3746,  3750,  3756,  3762,  3766,  3771,
    3777,  3783,  3789,  3793,  3799,  3802,  3806,  3810,  3816,  3820,
    3824,  3828,  3833,  3839,  3845,  3849,  3855,  3861,  3865,  3870,
    3876,  3882,  3885,  3888,  3892,  3898,  3905,  3912,  3916,  3920,
    3924,  3931,  3937,  3943,  3946,  3950,  3956,  3963,  3967,  3970,
    3973,  3977,  3980,  3984,  3987,  3991,  3997,  4004,  4007,  4010,
    4013,  4015,  4020,  4025,  4027,  4030,  4033,  4036,  4039,  4042,
    4045,  4048,  4052,  4055,  4059,  4062,  4066,  4068,  4070,  4072,
    4074,  4076,  4077,  4080,  4081,  4084,  4085,  4087,  4088,  4089,
    4091,  4093,  4095,  4097,  4099,  4107,  4116,  4119,  4124,  4127,
    4132,  4139,  4142,  4144,  4146,  4150,  4154,  4156,  4160,  4165,
    4168,  4170,  4174,  4178,  4183,  4187,  4191,  4195,  4197,  4199,
    4201,  4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,
    4221,  4223,  4226,  4227,  4228,  4231,  4233,  4237,  4239,  4243,
    4245,  4248,  4251,  4253,  4257,  4258,  4259,  4262,  4265,  4267,
    4271,  4277,  4279,  4282,  4285,  4288,  4290,  4292,  4294,  4296,
    4301,  4304,  4308,  4312,  4315,  4319,  4322,  4325,  4328,  4332,
    4336,  4340,  4343,  4347,  4349,  4353,  4357,  4359,  4362,  4365,
    4368,  4371,  4373,  4375,  4377,  4379,  4382,  4385,  4389,  4393,
    4395,  4398,  4402,  4406,  4408,  4411,  4413,  4415,  4417,  4419,
    4421,  4424,  4427,  4432,  4434,  4437,  4440,  4443,  4447,  4449,
    4451,  4453,  4456,  4459,  4462,  4465,  4468,  4472,  4476,  4480,
    4484,  4488,  4492,  4496,  4498,  4501,  4504,  4507,  4511,  4514,
    4518,  4522,  4525,  4528,  4531,  4534,  4537,  4540,  4543,  4546,
    4549,  4552,  4555,  4558,  4561,  4564,  4568,  4572,  4576,  4579,
    4582,  4585,  4588,  4591,  4594,  4597,  4600,  4603,  4606,  4609,
    4612,  4616,  4620,  4624,  4629,  4632,  4634,  4636,  4638,  4640,
    4641,  4647,  4649,  4656,  4660,  4662,  4665,  4668,  4672,  4675,
    4679,  4683,  4686,  4689,  4692,  4695,  4698,  4701,  4705,  4708,
    4711,  4715,  4717,  4721,  4726,  4728,  4731,  4737,  4744,  4751,
    4754,  4756,  4759,  4762,  4768,  4775
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     346,     0,    -1,    96,   348,    -1,    20,   378,    -1,    44,
     380,    -1,    41,    66,     5,    -1,    46,   385,    -1,    59,
      -1,    64,    -1,    65,   387,    -1,    67,   277,     5,    -1,
      68,   392,    -1,    69,   394,    -1,    77,   395,    -1,    84,
     404,    -1,    86,   406,    -1,    87,   407,    -1,    95,   349,
      -1,   124,   409,    -1,   135,   410,    -1,   139,   452,    -1,
     142,   455,    -1,   147,    -1,   148,   349,    -1,   154,   461,
      -1,   160,    16,     4,    -1,   173,   464,    -1,   176,   482,
      -1,   177,   483,    -1,   178,   484,    -1,   181,   500,   485,
      -1,   182,   519,    -1,   194,    66,     5,    -1,   209,   520,
      -1,   210,   521,    -1,   211,   524,    -1,   231,    88,    -1,
     223,   525,    -1,   237,    -1,   234,   500,   527,    -1,   239,
     532,    -1,   241,   533,    -1,   246,   535,    -1,   259,    -1,
     264,   550,    -1,   280,     4,    -1,   281,   373,    -1,   292,
      -1,   294,   552,    -1,   300,    -1,   303,   554,    -1,   304,
     555,    -1,   334,   559,    -1,   340,   560,    -1,     3,    -1,
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
      -1,    74,   375,    -1,   148,   376,    -1,   184,   530,    -1,
      37,   531,    -1,   247,   347,    -1,   226,    -1,   282,   347,
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
     347,   400,   347,   347,     5,    -1,     5,     4,     4,   401,
       4,     4,   360,   347,   399,   347,   347,     5,    -1,     5,
       4,     4,   401,     4,     4,   360,   347,   347,   347,   347,
       5,    -1,   222,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   349,    -1,     5,     4,   349,     5,   357,   362,
      -1,   185,    -1,   339,    -1,   338,    -1,   295,    -1,   136,
      -1,   174,    -1,   264,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   349,    -1,     5,   357,   362,    -1,    31,     5,
     357,   362,    -1,    -1,   347,   347,   347,   347,   357,   362,
      -1,    59,   356,   357,   362,   347,   347,   357,   364,    -1,
     281,   405,    -1,    40,   347,   347,    -1,   191,   347,   347,
      -1,   110,   347,   347,    -1,    -1,   347,   347,   357,    -1,
      40,   347,   347,     4,    -1,   191,   347,   347,     4,    -1,
     110,   347,   347,     4,    -1,   359,   347,   347,    -1,   357,
     362,   356,    -1,   349,    -1,   303,   347,   347,    -1,    40,
     191,   359,   347,   347,    -1,   191,   359,   347,   347,    -1,
      40,   191,   357,   356,    -1,   191,   357,   356,    -1,    33,
       4,    -1,    -1,    32,    -1,   274,    -1,   142,   116,     5,
      -1,    41,    66,    -1,    44,   411,    -1,    46,   413,    -1,
      65,   414,    -1,    68,   418,    -1,    67,   417,    -1,    69,
     420,    -1,    77,   422,    -1,    79,   425,    -1,    84,   426,
      -1,    86,   427,    -1,    88,   429,    -1,    87,   428,    -1,
      93,   430,    -1,    95,    -1,   123,   434,    -1,   139,   440,
      -1,   150,     5,     5,     4,    -1,   151,    89,     5,     5,
     347,   347,   359,     4,   408,    -1,   154,   432,    -1,   158,
     431,    -1,   160,    16,    -1,   185,    -1,   181,   500,   494,
      -1,   182,   441,    -1,   194,    66,    -1,   209,    -1,   210,
     442,    -1,   217,   276,   359,   347,   347,     4,     4,     5,
      -1,   239,   443,    -1,   241,    -1,   264,   444,    -1,   280,
      -1,   281,   445,    -1,   289,    -1,   296,   359,   347,   347,
      -1,   302,    89,     5,     5,   347,   347,   359,     4,   408,
      -1,   304,   450,    -1,   340,    -1,   100,    -1,   117,    -1,
     132,    -1,    53,   261,    -1,    88,    -1,   121,    -1,    71,
     412,    -1,   172,    -1,    -1,   185,     5,    -1,   103,     5,
      -1,   117,    -1,    -1,   399,   400,    -1,   347,   400,    -1,
     250,    -1,   190,    -1,   185,   415,    -1,   295,   167,    -1,
     339,   416,    -1,   226,    -1,   190,    -1,   243,    -1,    78,
      -1,   243,    -1,   170,    -1,    -1,   277,    -1,   167,   419,
      -1,     4,    -1,     4,   359,   347,   347,    -1,     4,   347,
     347,   360,   347,    -1,    -1,   167,   421,    -1,   175,    -1,
       4,   347,   347,   360,   347,    -1,   357,   362,    -1,    65,
     423,    -1,    66,    -1,    91,    -1,   167,    -1,   203,   167,
      -1,   184,    -1,    69,   424,    -1,   264,    -1,   333,    -1,
      -1,   190,    -1,   250,    -1,    -1,   175,    -1,   347,   347,
     357,   362,   363,    -1,   359,   347,   347,   357,   362,   363,
      -1,   347,   357,   357,     4,    -1,   357,   362,   363,    -1,
      59,   357,   362,   363,   357,   364,    -1,   281,   357,    -1,
     359,    -1,   357,   362,   363,    -1,   272,    -1,    33,    -1,
     359,    -1,   357,   362,   363,    -1,   357,   362,   356,   347,
     347,     5,    -1,     4,   357,   362,   356,   347,   347,     5,
      -1,   359,   347,   347,     4,     4,    -1,     5,    -1,    65,
      -1,   359,   347,   347,     5,    -1,     6,     4,     4,     4,
       4,    -1,    88,    -1,   119,   193,   433,    -1,    -1,     4,
      -1,   347,   347,    -1,   196,    -1,    59,   357,   362,   363,
      -1,    81,    -1,   100,   437,    -1,    45,    -1,   116,   435,
      -1,   119,   193,   438,    -1,   144,   436,    -1,   145,    -1,
     204,   193,    -1,   261,    -1,   261,   357,   362,   364,    -1,
     262,   439,    -1,   333,    -1,     4,    -1,   359,   347,   347,
      -1,     4,    -1,   164,     5,    -1,     4,   164,     5,    -1,
     304,     4,    -1,    -1,     4,    -1,   350,    -1,   350,   359,
     347,   347,    -1,   350,     4,    -1,    -1,     4,    -1,   357,
      -1,     4,   357,    -1,    -1,   208,    -1,   297,    -1,    66,
      -1,   180,    -1,   284,    -1,   226,    -1,    61,    -1,   275,
      -1,   298,    -1,   132,    -1,   233,    -1,   298,   449,    -1,
      47,   446,    -1,    74,   447,    -1,   148,   448,    -1,   184,
      -1,    37,    -1,   247,    -1,    -1,    66,    -1,    -1,    66,
      -1,    -1,    66,    -1,    -1,   220,    -1,    -1,    16,   451,
      -1,   193,   358,    -1,    -1,   221,    -1,    83,   453,    -1,
      99,    -1,   357,   362,   363,   454,     5,     5,    -1,   357,
     362,   363,   454,     5,    -1,    20,    -1,   229,    -1,    19,
      -1,    44,   456,    -1,    77,   457,    -1,    84,    -1,    94,
      -1,    95,    -1,   101,    -1,   123,   458,    -1,   139,    -1,
     154,    -1,   161,    -1,   181,   459,    -1,   216,    -1,   264,
      -1,   275,   357,    -1,   304,   460,    -1,    72,     5,    -1,
      -1,    31,    -1,    -1,    44,    -1,    87,    -1,   189,    -1,
     148,    -1,   252,    -1,   213,    -1,   290,    -1,   357,    -1,
     114,   357,    -1,    58,   357,    -1,    18,    -1,   281,   357,
      -1,   197,     4,     4,    -1,   115,    -1,   183,     5,    -1,
      88,   463,    -1,   253,   119,   193,   462,    -1,   253,     6,
       4,     4,     4,     4,    -1,   294,    -1,   304,   347,   347,
     347,   347,   347,   347,   347,   347,     4,    -1,     5,    -1,
       5,     4,    -1,     4,     4,    56,    -1,     4,     4,   357,
      -1,   190,   349,    -1,    26,   465,    -1,   111,   467,    -1,
     123,   468,    -1,   157,   481,    -1,   202,   479,    -1,   215,
     480,    -1,     5,    14,     5,   367,    -1,     5,    15,     5,
     367,    -1,     5,    61,     5,   367,    -1,     5,   187,   367,
      -1,     5,   188,   367,    -1,     5,   256,   365,     4,   367,
      -1,     5,   265,     4,   367,    -1,     5,   266,     4,   367,
      -1,     5,   297,     5,   367,    -1,   239,    87,   466,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   187,    -1,     5,   188,    -1,     5,   256,
     365,     4,    -1,     5,   265,     4,    -1,     5,   266,     4,
      -1,     5,   297,     5,    -1,     5,     5,   263,    -1,     5,
      14,     5,   367,    -1,     5,    15,     5,   367,    -1,     5,
      61,     5,   367,    -1,     5,   187,   366,   367,    -1,     5,
       5,   263,   366,   367,    -1,     5,   188,   366,   367,    -1,
       5,   256,   365,     4,   366,   367,    -1,     5,   270,   365,
       4,     4,   366,   367,    -1,     5,   265,     4,   367,    -1,
       5,   266,     4,   367,    -1,     5,   297,     5,   366,   367,
      -1,   262,   469,    -1,   116,    87,   470,    -1,   239,   155,
     478,    -1,   239,    87,   477,    -1,   189,   471,    -1,     5,
      14,     5,    -1,     5,    15,     5,    -1,     5,    61,     5,
      -1,     5,   187,   366,    -1,     5,     5,   263,   366,    -1,
       5,   188,   366,    -1,     5,   256,   365,     4,   366,    -1,
       5,   270,   365,     4,     4,   366,    -1,     5,   265,     4,
      -1,     5,   266,     4,    -1,     5,   297,     5,   366,    -1,
       5,    14,     5,    -1,     5,    15,     5,    -1,     5,    61,
       5,    -1,     5,   187,   366,    -1,     5,   188,   366,    -1,
       5,   256,   365,     4,   366,    -1,     5,   265,     4,    -1,
       5,   266,     4,    -1,     5,   297,     5,   366,    -1,   155,
     160,   472,    -1,   160,   473,    -1,   155,   474,    -1,   475,
      -1,   155,   332,   476,    -1,     5,    14,     5,   367,    -1,
       5,    15,     5,   367,    -1,     5,    61,     5,   367,    -1,
       5,   187,   366,   367,    -1,     5,   188,   366,   367,    -1,
       5,   256,   365,     4,   366,   367,    -1,     5,   265,     4,
     367,    -1,     5,   266,     4,   367,    -1,     5,   297,     5,
     366,   367,    -1,     5,    14,     5,   367,    -1,     5,    15,
       5,   367,    -1,     5,    61,     5,   367,    -1,     5,   187,
     366,   367,    -1,     5,     5,   263,   366,   367,    -1,     5,
     188,   366,   367,    -1,     5,   256,   365,     4,   366,   367,
      -1,     5,   270,   365,     4,     4,   366,   367,    -1,     5,
     265,     4,   367,    -1,     5,   266,     4,   367,    -1,     5,
     297,     5,   366,   367,    -1,   358,     5,    14,     5,   367,
      -1,   358,     5,    15,     5,   367,    -1,   358,     5,    61,
       5,   367,    -1,   358,     5,   187,   366,   367,    -1,   358,
       5,   188,   366,   367,    -1,   358,     5,   256,   365,     4,
     366,   367,    -1,   358,     5,   265,     4,   367,    -1,   358,
       5,   266,     4,   367,    -1,   358,     5,   297,     5,   366,
     367,    -1,   358,     5,    14,     5,   367,    -1,   358,     5,
      15,     5,   367,    -1,   358,     5,    61,     5,   367,    -1,
     358,     5,   187,   366,   367,    -1,   358,     5,     5,   263,
     366,   367,    -1,   358,     5,   188,   366,   367,    -1,   358,
       5,   256,   365,     4,   366,   367,    -1,   358,     5,   270,
     365,     4,     4,   366,   367,    -1,   358,     5,   265,     4,
     367,    -1,   358,     5,   266,     4,   367,    -1,   358,     5,
     297,     5,   366,   367,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   187,   366,
      -1,     5,   188,   366,    -1,     5,   256,   365,     4,   366,
      -1,     5,   265,     4,    -1,     5,   266,     4,    -1,     5,
     297,     5,   366,    -1,     5,    14,     5,    -1,     5,    15,
       5,    -1,     5,    61,     5,    -1,     5,   187,   366,    -1,
       5,     5,   263,   366,    -1,     5,   188,   366,    -1,     5,
     256,   365,     4,   366,    -1,     5,   270,   365,     4,     4,
     366,    -1,     5,   265,     4,    -1,     5,   266,     4,    -1,
       5,   297,     5,   366,    -1,     5,    14,     5,    -1,     5,
      15,     5,    -1,     5,    61,     5,    -1,     5,   187,   366,
      -1,     5,   188,   366,    -1,     5,   256,   365,     4,   366,
      -1,     5,   265,     4,    -1,     5,   266,     4,    -1,     5,
     297,     5,   366,    -1,     5,    14,     5,   367,    -1,     5,
      61,     5,   367,    -1,     5,   187,   367,    -1,     5,   256,
     365,     4,   367,    -1,     5,   265,     4,   367,    -1,     5,
     297,     5,   367,    -1,     5,     5,    -1,   262,     5,     5,
      -1,    93,     4,     4,     4,     4,     4,    -1,   185,     4,
       4,     4,     4,     4,    -1,   110,    -1,   225,    -1,   349,
      -1,   137,   349,    -1,    88,   349,    -1,    66,     5,    -1,
       5,     4,     4,    -1,   294,   347,   347,    -1,   340,   347,
      -1,     5,     5,   358,   362,     5,     5,   358,   362,   347,
     358,   364,     5,    -1,    60,   488,    -1,    66,     5,    -1,
      80,    -1,    73,   493,     5,    -1,    73,   493,   297,     5,
      -1,    75,    99,    -1,    -1,    83,   486,   489,    -1,    89,
      -1,    99,    -1,    99,    17,    -1,   105,   492,    -1,   113,
       4,    -1,   129,     5,    -1,   148,    17,    -1,   148,   207,
     347,   347,    -1,   148,   286,   347,   347,    -1,     4,    20,
     370,   349,    -1,     4,    21,   352,    -1,     4,    21,   352,
     359,    -1,     4,    21,   352,   357,   362,    -1,     4,    22,
     233,   347,   347,     4,   359,    -1,     4,    22,   233,   347,
     347,     4,   357,   364,    -1,     4,    22,   233,     5,   357,
     364,    -1,     4,    48,   120,   349,    -1,     4,    49,   233,
     347,   347,   347,     4,   359,    -1,     4,    49,   233,   347,
     347,   347,     4,   357,   364,    -1,     4,    49,   233,     5,
     357,   364,    -1,     4,    48,   233,   347,   347,   359,    -1,
       4,    48,   233,   347,   347,   357,   364,    -1,     4,    52,
     105,   352,   352,     4,   347,   347,   347,     4,    -1,     4,
      52,   105,   352,   352,     4,   347,   347,   347,     4,   359,
      -1,     4,    52,   105,   352,   352,     4,   347,   347,   347,
       4,   357,   362,    -1,     4,    52,   105,     5,     5,   357,
     362,   357,   364,    -1,     4,    55,   487,     5,     5,    -1,
       4,    62,   120,   349,    -1,     4,    62,   233,   347,   359,
      -1,     4,    62,   233,   347,   357,   364,    -1,     4,    66,
       5,    -1,     4,    74,    27,   349,   349,    -1,     4,    74,
     165,     5,     5,    -1,     4,    74,   233,   347,   359,    -1,
       4,    74,   233,   347,   357,   364,    -1,     4,    74,   275,
     357,   362,    -1,     4,    75,   136,   349,    -1,     4,    82,
     105,   352,   352,     4,   347,   347,     4,    -1,     4,    82,
     105,   352,   352,     4,   347,   347,     4,   359,    -1,     4,
      82,   105,   352,   352,     4,   347,   347,     4,   357,   362,
      -1,     4,    82,   105,     5,     5,   357,   362,   357,   364,
      -1,     4,    83,    22,   233,   347,   347,    -1,     4,    83,
      49,   233,   347,   347,    -1,     4,    83,    52,    21,   347,
     347,    -1,     4,    83,    52,   233,   347,   347,    -1,     4,
      83,   109,   233,   347,   347,    -1,     4,    83,   112,    21,
     347,   347,    -1,     4,    83,   112,   233,   347,   347,    -1,
       4,    83,    82,    21,   347,   347,    -1,     4,    83,    82,
     233,   347,   347,    -1,     4,    83,   222,   301,     4,   347,
     347,    -1,     4,    83,   251,   301,     4,   347,   347,    -1,
       4,    99,    -1,     4,    99,    22,     4,    -1,     4,    99,
      49,     4,    -1,     4,    99,    52,     4,    -1,     4,    99,
     109,     4,    -1,     4,    99,    55,   487,     5,    -1,     4,
      99,   112,     4,    -1,     4,    99,    82,     4,    -1,     4,
      99,   222,   301,     4,    -1,     4,    99,   251,   301,     4,
      -1,     4,    99,   277,    -1,     4,    99,   277,     5,    -1,
       4,    99,   277,     4,    -1,     4,   105,    40,     4,    -1,
       4,   108,   120,   349,    -1,     4,   108,   233,   347,   347,
     359,    -1,     4,   108,   233,   347,   347,   357,   364,    -1,
       4,   109,   233,   347,   347,   347,     4,   359,    -1,     4,
     109,   233,   347,   347,   347,     4,   357,   364,    -1,     4,
     109,   233,     5,   357,   364,    -1,     4,   112,   105,   352,
     352,     4,   347,   347,   347,     4,    -1,     4,   112,   105,
     352,   352,     4,   347,   347,   347,     4,   359,    -1,     4,
     112,   105,   352,   352,     4,   347,   347,   347,     4,   357,
     362,    -1,     4,   112,   105,     5,     5,   357,   362,   357,
     364,    -1,     4,   129,     5,    -1,     4,   148,    -1,     4,
     148,   207,    -1,     4,   170,    27,   349,   349,    -1,     4,
     170,   220,   359,   356,   356,    -1,     4,   170,   220,   357,
     362,   356,   356,    -1,     4,   192,   347,   347,    -1,     4,
     192,   130,    -1,     4,   192,    36,    -1,     4,   192,   285,
     359,   347,   347,    -1,     4,   192,   285,   357,   362,   356,
      -1,     4,   222,   237,   347,   347,   359,    -1,     4,   222,
     237,   347,   347,   357,   364,    -1,     4,   251,   237,   347,
     347,   359,    -1,     4,   251,   237,   347,   347,   357,   364,
      -1,     4,   220,   255,   368,    -1,     4,   220,   261,     4,
      -1,     4,   222,   120,   349,    -1,     4,   227,   359,   356,
     356,   347,    -1,     4,   227,   357,   362,   356,   356,   347,
     357,   364,    -1,     4,   228,   506,   349,    -1,     4,   241,
      40,    -1,     4,   242,   220,   359,   356,   356,    -1,     4,
     242,   220,   357,   362,   356,   356,    -1,     4,   242,   275,
     357,   362,   357,   364,    -1,     4,   252,    -1,     4,   252,
     207,    -1,     4,   277,     5,    -1,     4,   279,     5,    -1,
       4,   279,   241,   349,    -1,     4,   291,    -1,     4,   293,
      -1,     4,   299,    27,   349,    -1,     4,   299,   220,   359,
     356,   347,   352,    -1,     4,   299,   220,   357,   362,   356,
     357,   364,   347,   352,    -1,     4,   333,     4,    -1,   163,
      -1,   163,   347,   347,    -1,   172,   501,    -1,   173,   502,
      -1,   192,   503,    -1,   226,   349,    -1,   228,   506,   349,
      -1,   228,   506,   349,   347,   347,    -1,   241,    40,   347,
     347,    -1,   241,   191,   347,   347,     4,    -1,   241,   110,
      -1,   246,     5,   493,   357,   362,   363,   349,    -1,   246,
     278,     5,    -1,   252,   510,    -1,   259,   511,    -1,     5,
      66,     5,    -1,     5,    80,    -1,     5,    99,    -1,     5,
      89,    -1,     5,   129,     5,    -1,     5,   148,    -1,     5,
     148,   207,    -1,     5,   192,   347,   347,    -1,     5,   192,
     130,    -1,     5,   192,    36,    -1,     5,   192,   285,   359,
     356,    -1,     5,   192,   285,   357,   362,   356,    -1,     5,
     228,   506,   349,    -1,     5,   252,    -1,     5,   252,   207,
      -1,     5,   291,    -1,     5,   293,    -1,   277,   105,     5,
       5,    -1,   277,    99,     5,    -1,   277,    99,    17,    -1,
     277,     5,    -1,   277,   294,     5,    -1,   213,    -1,   213,
     357,    -1,   290,    -1,   291,    17,    -1,   293,    17,    -1,
     333,     4,    -1,   252,    -1,   293,    -1,   148,    -1,   291,
      -1,    40,   192,    -1,   192,    -1,   110,   192,    -1,    40,
     105,    -1,   105,    -1,   110,   105,    -1,    40,   241,    -1,
     241,    -1,   110,   241,    -1,    99,    -1,   279,    -1,    66,
      -1,   333,    -1,   228,    -1,   129,    -1,   163,    -1,   294,
      -1,    -1,     4,    -1,    30,   349,    -1,   233,   347,    -1,
     159,     4,    -1,   208,     4,   347,    -1,    62,   347,   347,
     347,   507,    -1,   108,   347,   347,   347,   347,   351,   507,
      -1,    48,   347,   347,   347,   347,   351,   507,    -1,   222,
     347,   347,   347,   347,   507,    -1,   251,   347,   347,   347,
     347,   507,    -1,   170,   347,   347,   347,   347,   507,    -1,
     299,   347,   347,   347,   347,   507,    -1,   279,   347,   347,
     351,   507,    -1,    62,   220,   347,   347,   369,   507,    -1,
      48,   220,   347,   347,   369,   507,    -1,   102,   220,   347,
     347,   369,   507,    -1,    85,   220,   347,   347,   369,   507,
      -1,   343,   220,   347,   347,   369,   507,    -1,    27,   220,
     347,   347,   369,   507,    -1,    51,   220,   347,   347,   369,
     507,    -1,   242,   347,   347,   347,   347,   357,   362,   357,
     364,   507,    -1,    74,   347,   347,   347,   357,   362,   507,
      -1,   227,   347,   347,   347,   347,   347,   507,    -1,    22,
     347,   347,   347,   347,     4,   507,    -1,   109,   347,   347,
     347,   347,   347,     4,   351,   507,    -1,    49,   347,   347,
     347,   347,   347,     4,   351,   507,    -1,    82,   347,   347,
     352,   352,     4,   347,   347,     4,   507,    -1,   112,   347,
     347,   352,   352,     4,   347,   347,   347,     4,   351,   507,
      -1,    52,   347,   347,   352,   352,     4,   347,   347,   347,
       4,   351,   507,    -1,    75,   507,    -1,   278,   490,    -1,
       5,   347,   347,    -1,   297,     5,   347,   347,    -1,   347,
     347,   297,     5,    -1,     5,   357,   362,   356,    -1,     4,
       4,    -1,    40,   347,   347,     4,    -1,   191,   347,   347,
       4,    -1,   110,    -1,   104,    -1,   335,    -1,    63,    -1,
     245,    -1,   244,    -1,   230,    -1,   336,    -1,    60,   495,
      -1,    66,    -1,   129,    -1,   113,    -1,   141,   347,   347,
      -1,   153,   347,   347,    -1,   147,    20,    82,   357,    -1,
     147,    20,   150,     5,     5,     4,    -1,   147,    20,   218,
       5,     5,     5,     5,   357,   362,   371,    -1,   147,    20,
     219,     5,     5,   357,   371,    -1,   147,    20,   232,     5,
       5,     5,   357,    -1,   147,    20,   271,   357,   362,    -1,
       4,    20,    82,   357,    -1,     4,    20,   150,     5,     5,
       4,    -1,     4,    20,   218,     5,     5,     5,     5,   357,
     362,   371,    -1,     4,    20,   219,     5,     5,   357,   371,
      -1,     4,    20,   232,     5,     5,     5,   357,    -1,     4,
      20,   271,   357,   362,    -1,   153,    17,    -1,     4,    21,
      -1,     4,    21,   359,    -1,     4,    21,   357,   362,    -1,
       4,    22,   233,   357,   364,    -1,     4,    48,   120,    -1,
       4,    49,   233,   357,   364,    -1,     4,    48,   233,   357,
     364,    -1,     4,    52,    21,    -1,     4,    52,    21,   359,
      -1,     4,    52,    21,   357,   362,    -1,     4,    52,   233,
     357,   364,    -1,     4,    59,   357,   362,   363,    -1,     4,
      62,   120,    -1,     4,    62,   233,   357,   364,    -1,     4,
      66,    -1,     4,    74,    27,    -1,     4,    74,   165,    -1,
       4,    74,   233,   357,   364,    -1,     4,    74,   275,    -1,
       4,    75,   136,    -1,     4,    82,    21,    -1,     4,    82,
      21,   359,    -1,     4,    82,    21,   357,   362,    -1,     4,
      82,   233,   357,   364,    -1,     4,   108,   120,    -1,     4,
     108,   233,   357,   364,    -1,     4,   109,   233,   357,   364,
      -1,     4,   112,    21,    -1,     4,   112,    21,   359,    -1,
       4,   112,    21,   357,   362,    -1,     4,   112,   233,   357,
     364,    -1,     4,   129,    -1,     4,   148,    -1,     4,   170,
      27,    -1,     4,   170,   166,   357,   364,    -1,     4,   170,
     220,   357,   362,   363,    -1,     4,   179,   166,   347,   357,
     364,    -1,     4,   222,   120,    -1,     4,   220,   255,    -1,
       4,   220,   261,    -1,     4,   227,   220,   357,   362,   363,
      -1,     4,   227,   166,   357,   364,    -1,     4,   227,   283,
     357,   364,    -1,     4,   228,    -1,     4,   228,   506,    -1,
       4,   242,   166,   357,   364,    -1,     4,   242,   220,   357,
     362,   363,    -1,     4,   242,   275,    -1,     4,   252,    -1,
       4,   277,    -1,     4,   277,     4,    -1,     4,   279,    -1,
       4,   279,   241,    -1,     4,   289,    -1,     4,   299,    27,
      -1,     4,   299,   166,   357,   364,    -1,     4,   299,   220,
     357,   362,   363,    -1,     4,   333,    -1,   148,   496,    -1,
     148,   203,    -1,   203,    -1,   222,   251,   347,   347,    -1,
     251,   251,   347,   347,    -1,   226,    -1,   228,   506,    -1,
     252,   497,    -1,   252,   203,    -1,   259,   498,    -1,     5,
      66,    -1,     5,   129,    -1,     5,   153,    -1,     5,   228,
     506,    -1,     5,   277,    -1,     5,   277,   203,    -1,   277,
      17,    -1,   277,    98,   193,    -1,   333,    -1,    30,    -1,
     233,    -1,   159,    -1,   208,    -1,    -1,   347,   347,    -1,
      -1,   347,   347,    -1,    -1,   279,    -1,    -1,    -1,   221,
      -1,   234,    -1,   295,    -1,    57,    -1,    20,    -1,   493,
     357,   362,   363,   349,   508,   514,    -1,   252,   493,   357,
     362,   363,   349,   508,   514,    -1,   493,     5,    -1,   493,
       5,   357,   362,    -1,   493,     4,    -1,   493,     4,   357,
     362,    -1,   123,     5,     5,   491,     4,     5,    -1,   347,
     347,    -1,   130,    -1,    36,    -1,    40,   347,   347,    -1,
     191,   347,   347,    -1,   110,    -1,   285,   359,   356,    -1,
     285,   357,   362,   356,    -1,   504,   505,    -1,   505,    -1,
     506,   344,   349,    -1,    66,   344,     5,    -1,    92,   344,
       4,     4,    -1,   333,   344,     4,    -1,   129,   344,     5,
      -1,   279,   344,     5,    -1,   517,    -1,   518,    -1,   200,
      -1,   252,    -1,   148,    -1,    91,    -1,   125,    -1,   105,
      -1,   192,    -1,   241,    -1,    99,    -1,   156,    -1,   267,
      -1,   499,    -1,   499,   504,    -1,    -1,    -1,   509,   512,
      -1,    17,    -1,   207,   347,   347,    -1,   286,    -1,   286,
     347,   347,    -1,   349,    -1,   279,   349,    -1,   512,   513,
      -1,   513,    -1,   506,   344,   349,    -1,    -1,    -1,   515,
     516,    -1,   516,   517,    -1,   517,    -1,   277,   344,     5,
      -1,    55,   344,   487,     5,     5,    -1,    64,    -1,    66,
       5,    -1,   180,     4,    -1,   284,   347,    -1,   343,    -1,
     341,    -1,   336,    -1,   200,    -1,   347,   347,   347,   347,
      -1,   347,   347,    -1,   359,   347,   347,    -1,   357,   362,
     356,    -1,   285,   522,    -1,    39,   347,   347,    -1,   191,
     523,    -1,   226,   349,    -1,   347,   347,    -1,   359,   347,
     347,    -1,   357,   362,   356,    -1,    40,   347,   347,    -1,
     347,   347,    -1,   110,   347,   347,    -1,   349,    -1,   304,
     358,   362,    -1,     5,     4,     4,    -1,   294,    -1,    70,
     526,    -1,   167,     4,    -1,   238,     4,    -1,   247,   347,
      -1,    54,    -1,   138,    -1,   239,    -1,    90,    -1,   148,
     528,    -1,   252,   529,    -1,    40,   347,   347,    -1,   191,
     347,   347,    -1,   110,    -1,   257,   110,    -1,    40,   347,
     347,    -1,   191,   347,   347,    -1,   110,    -1,   257,   110,
      -1,   186,    -1,    13,    -1,   200,    -1,    34,    -1,   107,
      -1,    61,     5,    -1,   275,   357,    -1,   298,     4,     4,
       4,    -1,   347,    -1,   347,    97,    -1,   191,   534,    -1,
     285,   347,    -1,   285,   347,    97,    -1,    40,    -1,   347,
      -1,   110,    -1,    26,   536,    -1,   123,   538,    -1,   202,
     548,    -1,   111,   549,    -1,   215,     5,    -1,   119,     5,
     372,    -1,    61,     5,   372,    -1,   265,     4,   372,    -1,
     239,    87,   537,    -1,   119,     5,   372,    -1,    61,     5,
     372,    -1,   265,     4,   372,    -1,   539,    -1,   155,   539,
      -1,   276,   540,    -1,   262,   541,    -1,   116,    87,   542,
      -1,   189,   543,    -1,   239,   155,   545,    -1,   239,    87,
     546,    -1,   236,   547,    -1,   119,     5,    -1,    61,     5,
      -1,   265,     4,    -1,   119,     5,    -1,    61,     5,    -1,
     265,     4,    -1,   119,     5,    -1,    61,     5,    -1,   265,
       4,    -1,   119,     5,    -1,    61,     5,    -1,   265,     4,
      -1,   155,   544,    -1,   119,     5,     4,    -1,    61,     5,
       4,    -1,   265,     4,     4,    -1,   119,     5,    -1,    61,
       5,    -1,   265,     4,    -1,   119,     5,    -1,    61,     5,
      -1,   265,     4,    -1,   119,     5,    -1,    61,     5,    -1,
     265,     4,    -1,   119,     5,    -1,    61,     5,    -1,   265,
       4,    -1,   119,     5,   372,    -1,    61,     5,   372,    -1,
     265,     4,   372,    -1,   119,     5,     5,   372,    -1,   551,
       4,    -1,    99,    -1,    50,    -1,   134,    -1,   287,    -1,
      -1,     4,   347,   347,   347,   347,    -1,   201,    -1,   201,
       4,   347,   347,   347,   347,    -1,   123,   262,   553,    -1,
       4,    -1,   347,   357,    -1,     4,     4,    -1,     4,   347,
     357,    -1,   347,   347,    -1,   285,   347,   347,    -1,   358,
     362,   363,    -1,    16,   558,    -1,   237,     4,    -1,   235,
     557,    -1,    23,   556,    -1,     4,     4,    -1,     4,     5,
      -1,   279,     4,     5,    -1,     4,     4,    -1,     4,     5,
      -1,   279,     4,     5,    -1,     4,    -1,     4,   358,   362,
      -1,     4,     6,   358,   362,    -1,   225,    -1,   347,   347,
      -1,   347,   347,    12,   347,   347,    -1,   347,   347,    12,
     359,   347,   347,    -1,   347,   347,    12,   357,   362,   356,
      -1,   285,   561,    -1,   122,    -1,   122,   347,    -1,   347,
     347,    -1,   347,   347,    12,   347,   347,    -1,   347,   347,
      12,   359,   347,   347,    -1,   347,   347,    12,   357,   362,
     356,    -1
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
     903,   906,   908,   910,   915,   920,   923,   924,   927,   928,
     929,   936,   937,   938,   939,   942,   943,   946,   947,   950,
     951,   954,   956,   960,   961,   964,   966,   967,   968,   969,
     972,   973,   974,   975,   976,   979,   981,   983,   984,   986,
     988,   990,   992,   996,   999,  1000,  1001,  1004,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019,  1020,  1021,  1022,  1023,  1024,  1025,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1038,  1039,  1040,
    1041,  1042,  1043,  1044,  1046,  1048,  1049,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1062,  1063,  1064,  1067,  1070,
    1071,  1073,  1075,  1076,  1077,  1078,  1079,  1080,  1087,  1088,
    1091,  1092,  1093,  1096,  1097,  1100,  1103,  1104,  1106,  1110,
    1111,  1112,  1115,  1119,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1129,  1132,  1133,  1134,  1137,  1138,  1141,  1143,
    1149,  1153,  1155,  1157,  1160,  1161,  1163,  1166,  1169,  1170,
    1174,  1176,  1179,  1184,  1185,  1186,  1190,  1191,  1192,  1195,
    1196,  1197,  1200,  1201,  1203,  1204,  1205,  1206,  1207,  1208,
    1209,  1210,  1211,  1212,  1214,  1215,  1218,  1219,  1222,  1223,
    1224,  1225,  1228,  1229,  1232,  1234,  1237,  1241,  1242,  1243,
    1244,  1247,  1248,  1249,  1252,  1253,  1254,  1257,  1260,  1261,
    1262,  1265,  1266,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1278,  1279,  1282,  1283,  1286,  1287,  1290,  1291,  1294,  1295,
    1296,  1299,  1300,  1303,  1304,  1307,  1310,  1318,  1319,  1322,
    1323,  1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1340,  1343,  1344,  1347,  1348,
    1349,  1350,  1353,  1354,  1355,  1356,  1359,  1360,  1361,  1362,
    1363,  1366,  1367,  1368,  1369,  1370,  1371,  1373,  1374,  1379,
    1380,  1383,  1385,  1387,  1390,  1391,  1392,  1393,  1394,  1395,
    1398,  1400,  1402,  1404,  1405,  1407,  1409,  1411,  1413,  1415,
    1418,  1419,  1420,  1421,  1422,  1423,  1425,  1426,  1427,  1430,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1450,  1452,
    1454,  1456,  1457,  1458,  1459,  1460,  1463,  1464,  1465,  1466,
    1467,  1468,  1469,  1471,  1473,  1474,  1475,  1478,  1479,  1480,
    1481,  1482,  1483,  1485,  1486,  1487,  1490,  1491,  1492,  1493,
    1494,  1497,  1500,  1503,  1506,  1509,  1512,  1515,  1518,  1521,
    1526,  1529,  1532,  1535,  1538,  1541,  1544,  1547,  1550,  1553,
    1556,  1561,  1564,  1567,  1570,  1573,  1576,  1579,  1582,  1585,
    1590,  1593,  1596,  1599,  1602,  1605,  1608,  1611,  1614,  1617,
    1620,  1625,  1627,  1628,  1629,  1630,  1631,  1633,  1634,  1635,
    1637,  1638,  1639,  1640,  1641,  1642,  1643,  1645,  1647,  1648,
    1649,  1652,  1653,  1654,  1655,  1656,  1657,  1659,  1660,  1661,
    1664,  1666,  1668,  1669,  1671,  1673,  1677,  1678,  1681,  1682,
    1683,  1686,  1693,  1694,  1695,  1696,  1697,  1698,  1699,  1702,
    1710,  1711,  1712,  1713,  1715,  1717,  1718,  1718,  1719,  1720,
    1721,  1722,  1723,  1724,  1726,  1727,  1729,  1732,  1735,  1736,
    1737,  1740,  1742,  1745,  1748,  1749,  1752,  1756,  1759,  1761,
    1764,  1767,  1771,  1776,  1781,  1783,  1784,  1786,  1788,  1789,
    1791,  1793,  1795,  1797,  1799,  1800,  1802,  1804,  1808,  1813,
    1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,  1831,  1833,
    1836,  1837,  1839,  1841,  1842,  1844,  1846,  1847,  1848,  1850,
    1852,  1853,  1854,  1856,  1857,  1858,  1860,  1863,  1867,  1871,
    1874,  1877,  1881,  1886,  1892,  1893,  1894,  1896,  1897,  1899,
    1903,  1905,  1906,  1907,  1909,  1912,  1914,  1917,  1919,  1922,
    1924,  1926,  1927,  1930,  1935,  1938,  1939,  1942,  1945,  1949,
    1950,  1952,  1953,  1954,  1956,  1957,  1959,  1960,  1962,  1967,
    1969,  1970,  1972,  1973,  1974,  1975,  1976,  1977,  1979,  1981,
    1983,  1984,  1986,  1987,  1989,  1991,  1992,  1993,  1994,  1995,
    1996,  1997,  1998,  1999,  2000,  2001,  2003,  2005,  2007,  2008,
    2009,  2010,  2012,  2013,  2014,  2015,  2016,  2018,  2019,  2020,
    2021,  2022,  2023,  2026,  2027,  2028,  2029,  2030,  2031,  2032,
    2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,  2045,  2046,  2049,  2050,  2051,  2052,  2053,  2054,
    2062,  2069,  2078,  2087,  2094,  2101,  2109,  2117,  2124,  2129,
    2134,  2139,  2144,  2149,  2154,  2160,  2169,  2179,  2189,  2196,
    2206,  2216,  2225,  2237,  2250,  2255,  2258,  2260,  2262,  2267,
    2271,  2274,  2276,  2278,  2281,  2282,  2283,  2284,  2285,  2286,
    2287,  2290,  2291,  2292,  2293,  2294,  2295,  2297,  2299,  2301,
    2303,  2305,  2307,  2310,  2312,  2314,  2316,  2318,  2320,  2323,
    2324,  2325,  2326,  2328,  2331,  2332,  2334,  2336,  2337,  2338,
    2340,  2343,  2346,  2347,  2349,  2350,  2351,  2352,  2354,  2355,
    2356,  2357,  2358,  2360,  2362,  2363,  2365,  2368,  2369,  2370,
    2372,  2374,  2375,  2376,  2377,  2379,  2382,  2386,  2387,  2388,
    2389,  2392,  2395,  2397,  2398,  2399,  2401,  2404,  2405,  2407,
    2408,  2409,  2410,  2411,  2413,  2414,  2416,  2419,  2420,  2421,
    2422,  2423,  2425,  2427,  2428,  2429,  2430,  2432,  2434,  2435,
    2436,  2437,  2438,  2439,  2441,  2442,  2444,  2447,  2448,  2449,
    2450,  2453,  2454,  2457,  2458,  2461,  2462,  2465,  2478,  2479,
    2483,  2484,  2488,  2489,  2492,  2497,  2504,  2506,  2509,  2511,
    2514,  2518,  2519,  2520,  2521,  2522,  2523,  2524,  2526,  2530,
    2531,  2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2544,
    2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,
    2557,  2558,  2561,  2562,  2562,  2565,  2566,  2567,  2568,  2571,
    2572,  2575,  2576,  2579,  2583,  2584,  2584,  2587,  2588,  2591,
    2594,  2598,  2599,  2600,  2601,  2604,  2605,  2606,  2607,  2610,
    2612,  2613,  2618,  2620,  2621,  2622,  2623,  2626,  2627,  2632,
    2636,  2637,  2638,  2641,  2642,  2647,  2648,  2651,  2653,  2654,
    2655,  2660,  2661,  2662,  2663,  2666,  2667,  2670,  2672,  2674,
    2675,  2678,  2680,  2681,  2682,  2685,  2686,  2689,  2690,  2691,
    2694,  2695,  2696,  2699,  2700,  2701,  2702,  2703,  2706,  2707,
    2708,  2711,  2712,  2713,  2714,  2715,  2718,  2720,  2722,  2724,
    2727,  2729,  2731,  2734,  2735,  2736,  2737,  2738,  2739,  2740,
    2741,  2742,  2745,  2746,  2747,  2750,  2751,  2752,  2755,  2756,
    2757,  2760,  2761,  2762,  2765,  2766,  2767,  2768,  2771,  2772,
    2773,  2776,  2777,  2778,  2781,  2782,  2783,  2786,  2787,  2788,
    2791,  2793,  2795,  2799,  2803,  2804,  2807,  2808,  2809,  2812,
    2813,  2815,  2816,  2818,  2821,  2822,  2823,  2824,  2827,  2828,
    2831,  2833,  2834,  2835,  2836,  2839,  2840,  2841,  2844,  2845,
    2846,  2849,  2850,  2855,  2859,  2866,  2867,  2869,  2874,  2876,
    2879,  2880,  2881,  2882,  2884,  2889
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
     395,   396,   396,   396,   396,   396,   397,   397,   398,   398,
     398,   399,   399,   399,   399,   400,   400,   401,   401,   402,
     402,   403,   403,   404,   404,   404,   404,   404,   404,   404,
     405,   405,   405,   405,   405,   406,   406,   406,   406,   406,
     406,   406,   406,   407,   408,   408,   408,   409,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   411,   411,   411,
     411,   411,   411,   411,   411,   412,   412,   412,   413,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   415,   415,
     416,   416,   416,   417,   417,   418,   419,   419,   419,   420,
     420,   420,   421,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   423,   423,   423,   424,   424,   425,   425,
     425,   426,   426,   426,   427,   427,   427,   428,   429,   429,
     430,   430,   430,   431,   431,   431,   432,   432,   432,   433,
     433,   433,   434,   434,   434,   434,   434,   434,   434,   434,
     434,   434,   434,   434,   434,   434,   435,   435,   436,   436,
     436,   436,   437,   437,   438,   438,   438,   439,   439,   439,
     439,   440,   440,   440,   441,   441,   441,   442,   443,   443,
     443,   444,   444,   445,   445,   445,   445,   445,   445,   445,
     446,   446,   447,   447,   448,   448,   449,   449,   450,   450,
     450,   451,   451,   452,   452,   453,   453,   454,   454,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   456,   457,   457,   458,   458,
     458,   458,   459,   459,   459,   459,   460,   460,   460,   460,
     460,   461,   461,   461,   461,   461,   461,   461,   461,   462,
     462,   463,   463,   463,   464,   464,   464,   464,   464,   464,
     465,   465,   465,   465,   465,   465,   465,   465,   465,   465,
     466,   466,   466,   466,   466,   466,   466,   466,   466,   467,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   471,   471,   471,   471,
     471,   472,   472,   472,   472,   472,   472,   472,   472,   472,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     475,   475,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     477,   477,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     479,   479,   479,   479,   479,   479,   480,   480,   481,   481,
     481,   482,   483,   483,   483,   483,   483,   483,   483,   484,
     485,   485,   485,   485,   485,   485,   486,   485,   485,   485,
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
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   485,   485,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   487,   487,   487,   487,   487,   487,
     487,   487,   487,   487,   488,   488,   488,   488,   488,   488,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   490,   490,   490,   490,
     491,   492,   492,   492,   493,   493,   493,   493,   493,   493,
     493,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   495,   495,   495,
     495,   496,   496,   497,   497,   498,   498,   499,   500,   500,
     500,   500,   500,   500,   501,   501,   502,   502,   502,   502,
     502,   503,   503,   503,   503,   503,   503,   503,   503,   504,
     504,   505,   505,   505,   505,   505,   505,   505,   505,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     507,   507,   508,   509,   508,   510,   510,   510,   510,   511,
     511,   512,   512,   513,   514,   515,   514,   516,   516,   517,
     518,   519,   519,   519,   519,   520,   520,   520,   520,   521,
     521,   521,   521,   521,   521,   521,   521,   522,   522,   522,
     523,   523,   523,   524,   524,   524,   524,   525,   525,   525,
     525,   526,   526,   526,   526,   527,   527,   528,   528,   528,
     528,   529,   529,   529,   529,   530,   530,   531,   531,   531,
     532,   532,   532,   533,   533,   533,   533,   533,   534,   534,
     534,   535,   535,   535,   535,   535,   536,   536,   536,   536,
     537,   537,   537,   538,   538,   538,   538,   538,   538,   538,
     538,   538,   539,   539,   539,   540,   540,   540,   541,   541,
     541,   542,   542,   542,   543,   543,   543,   543,   544,   544,
     544,   545,   545,   545,   546,   546,   546,   547,   547,   547,
     548,   548,   548,   549,   550,   550,   551,   551,   551,   552,
     552,   552,   552,   552,   553,   553,   553,   553,   554,   554,
     555,   555,   555,   555,   555,   556,   556,   556,   557,   557,
     557,   558,   558,   558,   559,   560,   560,   560,   560,   560,
     561,   561,   561,   561,   561,   561
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
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     3,     4,     0,     6,     8,     2,     3,     3,     3,
       0,     3,     4,     4,     4,     3,     3,     1,     3,     5,
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
       4,     3,     6,     2,     1,     3,     1,     1,     1,     3,
       6,     7,     5,     1,     1,     4,     5,     1,     3,     0,
       1,     2,     1,     4,     1,     2,     1,     2,     3,     2,
       1,     2,     1,     4,     2,     1,     1,     3,     1,     2,
       3,     2,     0,     1,     1,     4,     2,     0,     1,     1,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     1,     1,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       2,     0,     1,     2,     1,     6,     5,     1,     1,     1,
       2,     2,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     1,     2,     2,     2,     0,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       2,     3,     1,     2,     2,     4,     6,     1,    10,     1,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     2,
       4,     4,     4,     3,     3,     5,     4,     4,     4,     3,
       3,     3,     3,     2,     2,     4,     3,     3,     3,     3,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     2,     3,     3,     3,     2,     3,     3,     3,     3,
       4,     3,     5,     6,     3,     3,     4,     3,     3,     3,
       3,     3,     5,     3,     3,     4,     3,     2,     2,     1,
       3,     4,     4,     4,     4,     4,     6,     4,     4,     5,
       4,     4,     4,     4,     5,     4,     6,     7,     4,     4,
       5,     5,     5,     5,     5,     5,     7,     5,     5,     6,
       5,     5,     5,     5,     6,     5,     7,     8,     5,     5,
       6,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       3,     3,     3,     3,     4,     3,     5,     6,     3,     3,
       4,     3,     3,     3,     3,     3,     5,     3,     3,     4,
       4,     4,     3,     5,     4,     4,     2,     3,     6,     6,
       1,     1,     1,     2,     2,     2,     3,     3,     2,    12,
       2,     2,     1,     3,     4,     2,     0,     3,     1,     1,
       2,     2,     2,     2,     2,     4,     4,     4,     3,     4,
       5,     7,     8,     6,     4,     8,     9,     6,     6,     7,
      10,    11,    12,     9,     5,     4,     5,     6,     3,     5,
       5,     5,     6,     5,     4,     9,    10,    11,     9,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     7,     7,
       2,     4,     4,     4,     4,     5,     4,     4,     5,     5,
       3,     4,     4,     4,     4,     6,     7,     8,     9,     6,
      10,    11,    12,     9,     3,     2,     3,     5,     6,     7,
       4,     3,     3,     6,     6,     6,     7,     6,     7,     4,
       4,     4,     6,     9,     4,     3,     6,     7,     7,     2,
       3,     3,     3,     4,     2,     2,     4,     7,    10,     3,
       1,     3,     2,     2,     2,     2,     3,     5,     4,     5,
       2,     7,     3,     2,     2,     3,     2,     2,     2,     3,
       2,     3,     4,     3,     3,     5,     6,     4,     2,     3,
       2,     2,     4,     3,     3,     2,     3,     1,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     3,
       5,     7,     7,     6,     6,     6,     6,     5,     6,     6,
       6,     6,     6,     6,     6,    10,     7,     7,     7,     9,
       9,    10,    12,    12,     2,     2,     3,     4,     4,     4,
       2,     4,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     3,     3,     4,     6,    10,
       7,     7,     5,     4,     6,    10,     7,     7,     5,     2,
       2,     3,     4,     5,     3,     5,     5,     3,     4,     5,
       5,     5,     3,     5,     2,     3,     3,     5,     3,     3,
       3,     4,     5,     5,     3,     5,     5,     3,     4,     5,
       5,     2,     2,     3,     5,     6,     6,     3,     3,     3,
       6,     5,     5,     2,     3,     5,     6,     3,     2,     2,
       3,     2,     3,     2,     3,     5,     6,     2,     2,     2,
       1,     4,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     2,     3,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     0,     1,     0,     0,     1,
       1,     1,     1,     1,     7,     8,     2,     4,     2,     4,
       6,     2,     1,     1,     3,     3,     1,     3,     4,     2,
       1,     3,     3,     4,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     0,     0,     2,     1,     3,     1,     3,     1,
       2,     2,     1,     3,     0,     0,     2,     2,     1,     3,
       5,     1,     2,     2,     2,     1,     1,     1,     1,     4,
       2,     3,     3,     2,     3,     2,     2,     2,     3,     3,
       3,     2,     3,     1,     3,     3,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       2,     2,     4,     1,     2,     2,     2,     3,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     4,     2,     1,     1,     1,     1,     0,
       5,     1,     6,     3,     1,     2,     2,     3,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     1,     2,     5,     6,     6,     2,
       1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1058,
       0,     0,     0,     0,     0,     0,     0,  1058,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1239,    49,     0,
       0,     0,     0,     0,   215,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,    54,    55,     0,
     251,     6,     0,     0,     0,     0,     0,     0,     9,     0,
       0,   279,   281,     0,     0,    11,   135,   137,   130,   131,
     132,   136,   133,   134,   284,    12,     0,   296,     0,     0,
       0,    13,     0,     0,     0,     0,   320,     0,    14,    69,
      98,     0,   128,    97,    77,    95,     0,    74,    76,    72,
     129,    96,    73,     0,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,    70,    71,    75,   327,   143,    99,     0,    15,
       0,    16,    17,     0,     0,     0,     0,     0,     0,     0,
      57,    56,     0,     0,     0,     0,     2,     0,    18,     0,
       0,     0,   389,   403,     0,   409,     0,     0,     0,     0,
       0,     0,     0,   352,     0,   481,     0,     0,     0,     0,
       0,  1058,     0,   360,     0,   364,     0,     0,     0,   368,
       0,   370,     0,   372,     0,     0,   508,   376,    19,     0,
     514,    20,   519,     0,   536,   522,   523,   524,   525,   538,
     527,   528,   529,     0,   531,   532,     0,     0,    21,    23,
       0,   552,     0,     0,     0,   557,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   711,    27,     0,     0,
       0,     0,     0,     0,   712,    28,     0,    29,  1063,  1062,
    1059,  1060,  1061,     0,  1121,     0,     0,     0,    31,     0,
    1128,  1127,  1126,  1125,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1146,     0,  1143,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1173,    41,     0,     0,     0,     0,     0,    42,  1236,
    1235,  1237,  1238,    44,     0,    45,     0,     0,     0,     0,
       0,   202,     0,     0,     0,    46,     0,     0,  1241,    48,
       0,     0,    50,     0,     0,     0,     0,   143,    51,  1264,
      52,     0,     0,    53,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   216,     5,   234,     0,   226,     0,
       0,   228,     0,   236,   229,   233,   244,   245,   230,   246,
       0,   232,   254,   255,   253,   252,     0,     0,     0,   259,
     266,   269,   268,   267,   265,   258,   262,   263,   264,   257,
       0,     0,     0,     0,     0,   261,    10,     0,     0,     0,
     280,     0,   285,     0,   295,   286,   297,   287,   298,   288,
     309,   289,     0,     0,   290,     0,    88,    89,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     316,     0,     0,     0,     0,     0,   146,   152,   144,   145,
     147,   150,   153,   149,   148,   151,     0,     0,   333,    58,
      63,    64,    65,    66,    67,    59,    60,    61,    68,    62,
       0,   338,     0,   385,   381,   377,   378,   382,   379,   384,
     339,   388,   340,   301,   393,   397,   392,   304,   303,   302,
       0,     0,   341,   404,   343,     0,   342,     0,   411,   344,
     423,   415,   426,   416,   417,   419,     0,   421,   422,   143,
     345,     0,     0,   346,     0,     0,   143,   347,   436,   143,
     434,   348,   437,   350,   143,   438,   349,     0,   143,     0,
     351,   456,     0,   454,   472,     0,     0,     0,   460,   452,
       0,   462,   477,   465,   353,   482,   483,   354,     0,     0,
       0,   447,     0,   357,   443,   444,     0,   358,   359,     0,
     484,   485,   486,   362,   363,   487,   365,     0,   488,   489,
     490,   367,   491,   492,   369,   498,   500,   502,   504,   497,
     499,   506,   371,     0,     0,   511,     0,   375,   143,   513,
       0,   520,   537,   521,   539,   540,   541,   526,   542,   544,
     543,   545,   530,   533,   549,     0,     0,     0,   546,   534,
       0,     0,   554,   553,     0,     0,     0,     0,    25,     0,
       0,   564,     0,   565,     0,     0,     0,     0,     0,   566,
       0,   710,     0,   567,     0,   568,     0,     0,   569,     0,
     715,   714,   713,     0,   718,     0,     0,     0,   904,     0,
       0,     0,   722,   726,   728,   729,     0,     0,     0,     0,
     840,     0,     0,     0,   877,     0,     0,     0,     0,     0,
       0,     0,   879,     0,     0,     0,    30,  1122,  1123,  1124,
      32,     0,     0,     0,     0,  1135,  1136,     0,   143,     0,
    1133,  1130,     0,     0,     0,   143,  1151,  1154,  1152,  1153,
    1147,  1148,  1149,  1150,     0,     0,    39,  1170,  1171,     0,
    1178,  1180,  1179,  1175,  1176,  1174,     0,     0,     0,     0,
    1181,     0,  1184,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1182,  1193,     0,     0,     0,  1183,  1185,
    1234,  1168,  1169,  1167,   200,     0,   204,   196,     0,   206,
     197,     0,   208,   198,  1166,  1165,   199,   201,   203,     0,
       0,     0,     0,     0,   195,     0,     0,     0,     0,  1248,
    1261,  1251,     0,     0,  1254,     0,     0,  1253,  1252,   154,
    1270,     0,  1269,  1265,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   235,   231,     0,   240,     0,   237,     0,
     256,   138,   141,   142,   140,   139,   270,   271,   272,   260,
     274,   276,   275,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   143,     0,   317,    94,    91,    92,    93,   143,
     319,   318,     0,     0,     0,     0,     0,     0,     0,   332,
       0,   328,   326,   325,   337,   380,     0,     0,   383,   398,
     399,   394,   395,   400,   402,   401,   396,   305,   306,   391,
     390,   406,   405,     0,   410,   424,   425,   414,   427,   420,
     418,   413,     0,     0,     0,   143,   433,   154,   154,   154,
     143,     0,     0,   143,   473,   455,   466,     0,   457,    78,
     468,     0,     0,   459,   461,   143,   478,   479,   464,     0,
       0,     0,   449,     0,     0,     0,     0,   952,   954,   953,
       0,     0,  1051,     0,  1030,     0,  1033,     0,     0,  1053,
    1055,     0,  1046,   361,     0,   501,   494,   503,   495,   505,
     496,   507,   493,     0,     0,   512,   509,   510,   154,   535,
     548,   547,   550,     0,   563,   551,     0,     0,     0,     0,
       0,     0,   167,   167,   161,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,     0,     0,   605,   629,     0,     0,     0,
     601,     0,     0,     0,     0,   167,   161,     0,     0,   706,
       0,   716,   717,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   780,     0,     0,
       0,     0,     0,   805,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   829,     0,     0,   834,   835,     0,     0,
       0,   856,   858,   857,     0,   860,     0,     0,   868,   870,
     871,   905,     0,     0,     0,     0,   720,   721,   946,   944,
     949,   948,   947,   945,   950,     0,   725,     0,   730,     0,
     943,     0,   731,   732,   733,   734,     0,     0,     0,     0,
       0,   842,     0,     0,   843,  1073,     0,  1076,  1072,     0,
       0,     0,   844,   878,   845,  1092,  1097,  1094,  1093,  1091,
    1098,  1095,  1089,  1096,  1090,  1099,     0,     0,   850,     0,
       0,     0,  1105,     0,  1107,   853,     0,  1109,   854,   875,
       0,     0,     0,   880,   881,   882,  1134,     0,     0,  1141,
    1137,     0,     0,     0,  1132,  1131,  1145,  1144,     0,  1159,
       0,     0,  1155,     0,  1163,     0,     0,  1156,     0,  1177,
     189,   189,     0,   189,     0,  1203,     0,  1202,  1194,     0,
       0,     0,     0,  1198,     0,     0,     0,  1201,     0,     0,
       0,     0,     0,  1196,  1204,     0,     0,     0,  1195,   189,
     189,   189,   205,   207,   209,     0,     0,     0,     0,   210,
       0,    55,     0,  1243,     0,  1249,     0,   143,  1255,  1256,
       0,  1258,  1259,     0,   155,   156,  1250,  1271,  1272,     0,
     223,   219,   225,   217,   218,   224,   221,   220,   222,   227,
       0,   241,     0,     0,     0,     0,   273,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   143,     0,     0,     0,
       0,   321,     0,   331,     0,   330,   387,   386,     0,     0,
       0,   143,     0,     0,   154,   431,   435,   439,     0,     0,
       0,   154,     0,    82,    81,   474,   458,     0,   469,   471,
     157,   480,   355,     0,     0,    55,     0,   448,     0,     0,
     970,     0,     0,     0,     0,     0,     0,   984,     0,     0,
       0,     0,     0,     0,  1001,  1002,     0,     0,     0,     0,
       0,  1013,     0,  1018,  1019,  1021,  1023,     0,  1027,  1038,
    1039,  1040,     0,  1042,  1047,  1049,  1050,  1048,   951,     0,
       0,  1029,     0,  1028,   969,     0,     0,  1034,     0,  1036,
       0,  1035,  1056,  1037,  1044,     0,     0,   373,     0,     0,
     561,   562,     0,   559,   555,     0,   167,   167,   167,   168,
     169,   573,   574,   163,   162,     0,   167,   167,   167,     0,
     579,   589,   164,   167,   167,   167,   165,   166,   167,   167,
       0,   167,   167,     0,   164,     0,   602,     0,     0,     0,
     628,     0,   627,     0,     0,   604,     0,   603,     0,     0,
       0,     0,   164,   164,   161,     0,     0,   161,     0,     0,
       0,   167,   167,   702,     0,   167,   167,   707,     0,   180,
     181,   182,   183,   184,   185,     0,    86,    87,    85,   738,
       0,     0,     0,     0,     0,     0,   898,   896,   891,     0,
     901,   885,   902,   888,   900,   894,   883,   897,   886,   884,
     903,   899,     0,     0,     0,   758,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   790,
       0,     0,     0,     0,     0,   804,   806,     0,     0,   812,
     811,     0,     0,   170,     0,     0,     0,   143,     0,     0,
     825,     0,     0,     0,   830,   831,   832,     0,     0,     0,
     839,   855,   859,   861,   864,   863,     0,     0,     0,   869,
     906,   908,     0,   907,   723,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1057,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     727,     0,     0,     0,     0,   841,     0,   143,     0,  1068,
    1066,     0,     0,   143,     0,  1071,   846,     0,     0,     0,
     852,     0,     0,  1110,   873,   874,     0,   876,  1140,  1142,
    1139,  1138,  1129,     0,     0,  1160,     0,     0,  1164,  1172,
     191,   192,   193,   194,   190,  1187,  1186,     0,     0,     0,
    1189,  1188,   189,     0,     0,     0,  1197,     0,     0,     0,
       0,     0,  1214,     0,  1228,  1227,  1229,     0,     0,     0,
    1200,     0,     0,     0,  1199,  1209,  1208,  1210,  1206,  1205,
    1207,  1231,  1230,  1232,   212,   214,   213,     0,     0,    55,
       0,  1245,     0,   143,  1262,  1257,  1260,     0,     0,   143,
       0,     0,     0,   238,     0,     0,     0,     0,     0,     0,
       0,     0,   308,   307,     0,     0,   299,   310,   312,     0,
     322,   324,   323,   143,   329,     0,     0,     0,   154,   430,
     143,     0,     0,     0,     0,   453,   467,    80,    79,   476,
       0,   470,   159,   160,   158,   463,     0,     0,   451,   445,
       0,     0,     0,     0,     0,     0,   143,   971,     0,   974,
       0,     0,   977,     0,   143,   982,     0,   985,   986,     0,
     988,   989,   990,     0,   994,     0,     0,   997,     0,  1003,
       0,     0,     0,  1008,  1009,  1007,     0,     0,     0,  1014,
       0,     0,  1017,  1020,  1022,  1024,     0,     0,  1041,  1043,
     955,     0,     0,     0,     0,     0,     0,  1052,   956,     0,
       0,  1054,  1045,     0,     0,   517,   518,     0,     0,   560,
       0,   570,   571,   572,   167,   576,   577,   578,     0,     0,
       0,   583,   584,   161,     0,     0,     0,   167,   590,   591,
     592,   593,   595,   164,   598,   599,     0,   167,     0,     0,
       0,   164,   164,   161,     0,     0,     0,     0,   626,     0,
     630,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,   161,     0,     0,     0,     0,     0,   164,   164,   161,
       0,     0,   161,     0,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,     0,   164,   164,
     161,     0,     0,     0,   164,   606,   607,   608,   609,   611,
       0,   614,   615,     0,   164,     0,     0,   700,   701,   167,
     704,   705,     0,   737,   143,   739,     0,     0,   744,     0,
       0,     0,     0,     0,   890,   887,   893,   892,   889,   895,
       0,   755,     0,     0,     0,     0,   143,   764,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   781,   782,   783,     0,   787,   784,   786,     0,     0,
     792,   791,   793,   794,     0,     0,     0,     0,     0,     0,
     143,     0,   143,     0,   810,   176,   172,   177,   171,   174,
     173,   175,   819,   820,   821,     0,     0,     0,   824,   143,
       0,   143,     0,   833,   836,   143,     0,   143,     0,   862,
     867,   909,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1100,   934,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   935,
       0,     0,     0,     0,     0,   735,   736,   143,   154,     0,
     143,   143,  1074,  1075,     0,  1077,     0,   848,     0,   143,
    1106,  1108,   872,  1157,  1158,  1161,  1162,   189,   189,   189,
    1233,  1212,  1211,  1213,  1216,  1215,  1219,  1218,  1220,  1217,
    1225,  1224,  1226,  1222,  1221,  1223,     0,  1240,  1247,     0,
    1263,     0,   143,     0,  1266,     0,     0,   242,     0,   239,
       0,     0,     0,   277,     0,     0,     0,     0,   143,     0,
     314,   131,     0,   407,     0,   428,   154,   157,     0,     0,
     442,     0,     0,   446,   963,     0,     0,     0,     0,   143,
     972,   157,   157,   157,   143,   978,   157,   154,   157,   157,
     143,   991,   157,   157,   157,   143,   998,   157,   157,   143,
       0,   157,   143,   157,   157,   143,   157,   143,   957,     0,
       0,     0,     0,   143,  1031,  1032,     0,     0,   516,   556,
       0,   575,   580,   581,   582,     0,   586,   587,   588,   594,
     167,   164,   600,   617,   618,   619,   620,   621,     0,   623,
     624,   164,     0,     0,     0,   164,   164,   161,     0,     0,
       0,     0,     0,     0,   164,   164,   161,     0,     0,     0,
       0,     0,     0,   164,   164,   161,     0,     0,     0,   164,
     167,   167,   167,   167,   167,     0,   167,   167,     0,   164,
     164,   167,   167,   167,   167,   167,     0,   167,   167,     0,
     164,   164,   680,   681,   682,   683,   685,     0,   688,   689,
       0,   164,   691,   692,   693,   694,   695,     0,   697,   698,
     164,   610,   164,     0,   616,     0,     0,   703,     0,   740,
     157,     0,     0,   157,     0,     0,     0,   754,   157,   756,
     759,   760,   157,   761,   763,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   785,   788,
     789,     0,   157,     0,     0,     0,   807,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   865,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1101,
    1080,     0,  1087,  1088,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,    83,
       0,     0,   941,   942,   154,     0,     0,     0,  1069,  1067,
    1078,   847,   849,   154,  1191,  1190,  1192,     0,  1242,  1273,
       0,     0,  1268,  1267,   243,     0,     0,     0,   282,     0,
       0,     0,   300,   157,   408,   412,   429,   432,     0,   440,
     475,     0,     0,     0,     0,     0,   968,   973,   976,   975,
     979,   980,   981,   983,   987,   992,   993,   995,   996,   999,
    1000,  1004,   154,   157,  1011,   154,  1012,  1015,   154,  1025,
     154,     0,     0,     0,     0,   962,     0,     0,   515,     0,
     585,   596,   167,   164,   625,   167,   167,   167,   167,   167,
       0,   167,   167,   164,   671,   672,   673,   674,   675,     0,
     677,   678,   164,   167,   167,   167,   167,   167,     0,   167,
     167,   164,   167,   640,   641,   642,   643,   645,   164,   648,
     649,     0,   167,   167,   660,   661,   662,   663,   665,   164,
     668,   669,     0,   167,   684,   164,     0,   690,   164,   699,
     612,   164,   708,   709,   143,   743,     0,   157,   748,   747,
       0,   143,     0,   757,   762,   143,     0,   769,   770,   771,
     772,   776,   777,   773,   774,   775,     0,     0,   157,   795,
     799,     0,   143,     0,     0,   808,   814,   813,   157,   815,
       0,   822,     0,   826,   157,   157,   817,     0,     0,   866,
       0,   178,   178,     0,     0,   178,     0,   178,  1057,     0,
       0,     0,     0,     0,     0,     0,     0,  1079,     0,     0,
     178,   178,     0,     0,     0,     0,     0,     0,     0,     0,
     936,     0,     0,     0,  1057,    84,     0,   178,     0,  1103,
     940,     0,     0,   211,  1275,  1274,     0,     0,   247,     0,
       0,     0,     0,   315,   441,   334,   964,     0,   186,     0,
    1005,  1006,  1010,  1016,  1026,   958,     0,   186,     0,   366,
     334,     0,   597,   622,   631,   632,   633,   634,   635,   164,
     637,   638,   167,   164,   679,   651,   652,   653,   654,   655,
     164,   657,   658,   167,   644,   167,   164,   650,   664,   167,
     164,   670,   686,   164,   696,   613,     0,   157,   741,   749,
       0,     0,     0,     0,     0,   778,   779,   796,     0,     0,
       0,   809,   816,     0,   827,   828,   818,   157,   837,     0,
     179,  1057,  1057,    83,     0,  1057,     0,  1057,   910,   143,
       0,  1082,     0,  1085,  1119,  1086,  1084,  1081,     0,  1057,
    1057,    83,     0,     0,  1057,  1057,     0,     0,  1057,   939,
     937,   938,   917,  1057,  1057,  1103,  1114,     0,  1070,   851,
       0,     0,   249,     0,     0,     0,   335,   336,   356,     0,
     187,   188,   966,   967,     0,   960,   961,   374,     0,   167,
     639,   676,   167,   659,   646,   167,   666,   167,   687,     0,
     742,   157,   745,   157,     0,   157,     0,   157,   797,   157,
       0,   157,     0,  1057,   923,   919,  1057,     0,   924,     0,
     918,  1057,     0,  1083,     0,   921,   920,  1057,     0,     0,
     915,   913,  1057,   143,   914,   916,   922,  1114,  1064,     0,
       0,  1104,  1112,     0,     0,     0,   278,   301,   304,   302,
       0,     0,   143,   143,   558,   636,   656,   647,   667,   157,
     746,   753,     0,   768,   765,   798,   803,     0,   823,     0,
     928,   912,    83,     0,   926,  1120,     0,   911,    83,     0,
     927,     0,  1065,  1116,  1118,     0,  1111,     0,     0,   283,
       0,     0,     0,     0,   186,   186,     0,   750,   143,   766,
     800,   838,  1057,     0,     0,  1057,     0,   157,  1117,  1113,
     248,     0,     0,     0,     0,     0,   965,   959,   719,   143,
     751,   767,   143,   801,   930,     0,  1057,   929,     0,  1057,
     250,   294,     0,   293,     0,   752,   802,    83,   931,    83,
     925,   292,   291,  1057,  1057,   933,   932
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1255,  2514,  2515,   430,   431,
     432,   433,   156,   157,   158,    94,   806,   456,  1196,  1675,
    1345,  1358,  1341,  1922,  2611,  1405,  2662,  1575,   335,   747,
     750,   753,   764,    56,   364,    66,   368,   374,   378,   381,
      71,   384,    78,   399,   395,   389,   405,    85,   410,    95,
     101,   415,   417,   419,   491,   859,  1644,   421,   424,   108,
     440,   159,   161,  2658,   178,   218,   480,   848,   482,   492,
     851,   856,   494,   496,   862,   499,   864,   510,   867,   869,
     513,   517,   521,   523,   526,   530,   557,   553,  1267,   544,
     888,   893,   885,  1256,   898,   547,   563,   566,   571,   574,
     582,   926,   928,   930,   932,   587,   936,   221,   589,  1747,
     238,   591,   593,   597,   602,   609,   247,  1334,   612,   255,
     621,  1350,   623,   629,   980,  1366,   975,  1788,  1372,  1370,
     976,  1790,  1375,  1377,   635,   638,   633,   257,   265,   267,
     676,  1057,  1432,  1046,  1530,  1969,  2297,  1062,  1055,   923,
    1308,  1313,  1321,  1323,  1953,   273,  1071,  1074,  1082,  2269,
    2270,  2271,  1954,  2646,  2647,  1105,  1108,  2721,  2722,  2718,
    2719,  2763,  2272,  2273,   278,   284,   292,   690,   685,   297,
     302,   700,   706,  1132,  1137,   756,   744,   308,   312,   713,
     318,   720,  1580,   733,   734,  1168,  1163,  1586,  1153,  1592,
    1604,  1600,  1157,   738,   722,   323,   324,   339,  1183,   342,
     348,   774,   777,   771,   350,   353,   782
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2585
static const yytype_int16 yypact[] =
{
    4512,   262,    56,   520,    29, -2585, -2585,   848,  -144,   608,
     467,   855,   516,  3643,   123,     3,   939,    17,  3043,    74,
    1590, -2585,     3,  1138,   172,   820,   -56,    30,   185,    79,
      18,   166,   710,   970,   105,   468,   113,    79, -2585,   -18,
      16,   967, -2585,   368,   230,  1416, -2585,   553, -2585,    36,
    1799,   229,    75,   255, -2585,   519, -2585,   498,   937,   244,
     555,   574,   101,   577,     5,   138, -2585, -2585, -2585,   493,
     798, -2585,    40,    46,     3,    44,   798,   146, -2585,   663,
     798, -2585, -2585,    64,   798, -2585, -2585, -2585, -2585,   798,
   -2585, -2585, -2585, -2585, -2585, -2585,    54,   586,   670,   693,
     139, -2585,   798,  1101,   798,   798,   767,   798, -2585, -2585,
   -2585,   562, -2585, -2585, -2585, -2585,  4983, -2585, -2585, -2585,
   -2585, -2585, -2585,   798, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1292, -2585,   798, -2585,
     813, -2585, -2585,     3,     3,     3,     3,     3,     3,     3,
   -2585, -2585,     3,     3,     3,     3, -2585,   652, -2585,   754,
    1609,   741,    27,   585,   721,   397,  4564,   471,  5040,  2244,
     880,  4983,  4163, -2585,    47,   -91,   911,   836,   145,   554,
     929,    79,     4, -2585,   903, -2585,   758,   714,   116, -2585,
     -19, -2585,   818, -2585,    33,   910,    48, -2585, -2585,  5099,
   -2585, -2585, -2585,   920,   979, -2585, -2585, -2585, -2585,   501,
   -2585, -2585, -2585,   -53, -2585, -2585,  5099,  4626, -2585, -2585,
     514, -2585,  1013,  1021,   470, -2585,   798, -2585,  1023,    76,
    1029,   153,   461,  1035,    12, -2585, -2585, -2585,  1038,  1044,
       3,     3,   798,   798, -2585, -2585,  1047, -2585, -2585, -2585,
   -2585, -2585, -2585,  2697, -2585,  1049,  1041,   798, -2585,  1051,
   -2585, -2585, -2585, -2585, -2585,   798,   135,     3,  3689,   798,
    1292,   798, -2585,  1081, -2585,  5127, -2585, -2585,   575,  1090,
    1102,   798, -2585, -2585,   -25,  1112,  5099,  1116, -2585,  1040,
     798,  1060, -2585,   513,  1019,  1346,   504,  1141, -2585, -2585,
   -2585, -2585, -2585, -2585,  1150, -2585,   817,    87,   120,   128,
      77, -2585,   798,   798,   669, -2585,   798,   898,  1158, -2585,
     798,   798, -2585,  1163,    83,   104,  1171,  1292, -2585, -2585,
   -2585,   627,   798, -2585, -2585,   798,   798,   798,   798,   798,
     798,   798,   798,   798, -2585, -2585, -2585,   798, -2585,  1187,
    1189, -2585,   798,  1004, -2585, -2585, -2585, -2585, -2585, -2585,
     798, -2585, -2585,   798, -2585, -2585,   500,   500,  1194, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     798,   798,  1197,  1201,  1203, -2585, -2585,   798,   798,   798,
   -2585,   798, -2585,  1214, -2585, -2585, -2585, -2585,  1000, -2585,
    1222, -2585,  5099,  1224, -2585,   798, -2585, -2585, -2585,   798,
    1228,  1233,  1233,  5099,   798,   798,   798,   798,   798,   798,
   -2585,   798,  4983,  1101,   798,   798, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1101,   798, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
    1247, -2585,   999,    -9, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,   -47, -2585, -2585, -2585,  1099, -2585,   732,
     430,   430, -2585, -2585, -2585,  1268, -2585,  1300, -2585, -2585,
     371, -2585,  1144, -2585, -2585, -2585,  1156, -2585, -2585,  1292,
   -2585,  1057,   798, -2585,  5099,  5099,  1292, -2585, -2585,  1292,
   -2585, -2585, -2585, -2585,  1292, -2585, -2585,  5099,  1292,   798,
   -2585, -2585,  5099, -2585,  1322,   488,  1139,     8, -2585, -2585,
    1140,  5099,  3924, -2585, -2585, -2585, -2585, -2585,  1329,  1331,
    1334, -2585,  1148, -2585, -2585, -2585,   798, -2585, -2585,   597,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,    33, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,  1276,  1277,  1278, -2585,
   -2585,  1125, -2585,   798,  1344,  1129,  5127, -2585,  1292, -2585,
    1355, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  5099,  5099,  5099, -2585, -2585,
    1385,     3, -2585, -2585,  1388,  1389,  1202,   798, -2585,   207,
    1307, -2585,  1392, -2585,   256,  1314,  5162,    58,  1397, -2585,
    1407, -2585,  1409, -2585,    10, -2585,  1410,  1411, -2585,  1417,
   -2585, -2585, -2585,   798, -2585,  5127,  4938,  1503,   630,  1418,
     712,  1325, -2585, -2585, -2585,  1412,   495,  1422,  1423,    60,
     798,   -41,   486,   582,  5099,     3,  1620,   797,   122,   170,
     221,    41, -2585,  1419,  1424,  1429, -2585, -2585, -2585, -2585,
   -2585,   798,   798,   798,   798, -2585, -2585,   798,  1292,   798,
   -2585,   798,  1101,   798,  1431,  1292, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,   405,   483, -2585, -2585, -2585,  1435,
   -2585, -2585, -2585, -2585,  1330, -2585,  1438,  1440,  1359,  1443,
   -2585,  1444, -2585,  1445,  1361,  1446,   606,   432,   653,   687,
     685,  1448,   690, -2585, -2585,  1451,  1456,  1460, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,  1461, -2585, -2585,  1462, -2585,
   -2585,  1464, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   798,
     798,   798,   798,   798, -2585,   798,  1066,   798,   798, -2585,
    1519, -2585,  1104,  1466, -2585,  1128,  1467, -2585, -2585,   434,
     798,   798, -2585,  1463,   798,   798,   798,   798,   798,   798,
     798,   798,   798, -2585, -2585,  1471,  1085,   798,  1465,   975,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  1474,  1476,   798,   798,   798,  1477,     3,
    1478,  1479,  1292,  5099, -2585, -2585, -2585, -2585, -2585,  1292,
   -2585, -2585,   798,   798,   798,  5099,   798,  1101,   798, -2585,
     798, -2585, -2585, -2585, -2585, -2585,  1481,  1483, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585,   471, -2585,   798, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  5099,  5099,   798,  1292, -2585,   434,   434,   434,
    1292,  1101,   798,  1292, -2585, -2585, -2585,   798, -2585,   -24,
    1320,  1486,  1490, -2585, -2585,  1292,  5099, -2585, -2585,  1492,
    1494,  1496,  1145,   798,  4949,   853,   425, -2585, -2585, -2585,
     798,  1493,   216,   566, -2585,  1252, -2585,  1620,  1259,   544,
    1227,   117, -2585, -2585,   798, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,   798,  1507, -2585, -2585, -2585,   434, -2585,
   -2585, -2585, -2585,  5069, -2585, -2585,  1527,  1528,   798,  1529,
    1531,  1536,   746,   746,    -8,  1541,  1542,  1544,  1546,  1269,
    1289,  1550,  1551,  1552,   649,   649,    -8,  1557,  1562,    -8,
    1565,  1567,  5212,  1568,  1569, -2585, -2585,  1570,  1572,   463,
   -2585,  1574,  1575,  1576,  1579,   746,    -8,  1582,  1583, -2585,
    1584, -2585, -2585,  1292,  1088,  1396,  1354,     6,  1357,  1488,
    2854,   612,  1586,   322,  1458,  1498,   851,   912,  1558,   678,
    1364,  1499,  1596,  1403,   238,    38,   353,   -27,  4983,  1620,
    1577,  -104,  1375,  1408,  1611,   169, -2585, -2585,   444,  1615,
    1616, -2585, -2585, -2585,  1624,  1413,   126,  1620,  1428, -2585,
   -2585, -2585,     3,  1621,  1634,   798, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,     1, -2585,  2800, -2585,   798,
   -2585,   798, -2585, -2585, -2585, -2585,   798,   798,   798,   712,
    5099, -2585,  1635,  1180, -2585, -2585,   798, -2585, -2585,   798,
    4983,   798, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,     3,   798, -2585,   798,
     712,  1636, -2585,   798,   798, -2585,     3, -2585, -2585, -2585,
     147,  1638,  1639, -2585, -2585, -2585, -2585,   798,   798, -2585,
   -2585,  1101,   798,   798, -2585, -2585, -2585, -2585,   798, -2585,
     798,  1537, -2585,   798, -2585,   798,  1538, -2585,  1642, -2585,
    1160,  1160,   705,  1160,  1644, -2585,   733, -2585, -2585,  1645,
    1649,   735,  1651, -2585,  1652,  1655,  1660, -2585,   747,   772,
    1663,  1664,  1661, -2585, -2585,  1665,  1666,  1669, -2585,  1160,
    1160,  1160, -2585, -2585, -2585,   798,   798,   798,   798, -2585,
     798,  1152,  5099, -2585,   798, -2585,  5127,  1292, -2585, -2585,
    1670, -2585, -2585,  1671, -2585, -2585, -2585, -2585,  1627,  3689,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
     798,  1667,   798,   798,   798,  1080, -2585,  1650,  1673,   798,
     798,    14,  1676,     3,     3, -2585,  1292,   798,  1674,  1678,
    1679, -2585,  5099, -2585,   798, -2585, -2585, -2585,   798,   798,
     798,  1292,  1682,  5099,   434, -2585, -2585, -2585,  1101,   798,
    1683,   434,   798,  1654,  1658,   490, -2585,  1684, -2585, -2585,
    1006, -2585, -2585,   798,  1686,  1688,   798, -2585,  1694,  1255,
    4983,  1468,   719,  1469,   140,  5099,   764, -2585,   374,  1564,
     179,   803,  1470,   205, -2585, -2585,   474,  1539,   704,  1587,
     -55,  1620,   -35, -2585,  1700,  1475, -2585,   571, -2585, -2585,
   -2585, -2585,  1620,  1509, -2585, -2585, -2585, -2585, -2585,   798,
    1335, -2585,   798, -2585, -2585,   798,   798, -2585,   798, -2585,
     798, -2585, -2585, -2585, -2585,  1513,   798, -2585,   798,   173,
   -2585, -2585,  1706,  1711, -2585,   798,   746,   746,   746, -2585,
   -2585, -2585, -2585, -2585, -2585,  1713,   746,   746,   746,   437,
   -2585, -2585,   649,   746,   746,   746, -2585, -2585,   746,   746,
    1714,   746,   746,  1716,   649,   639, -2585,  1717,  1718,  1719,
   -2585,   706, -2585,   826,   871, -2585,   656, -2585,  1480,  1723,
    1727,  1728,   649,   649,    -8,  1730,  1733,    -8,  1734,  1738,
    1743,   746,   746, -2585,  1744,   746,   746, -2585,  1745, -2585,
   -2585, -2585, -2585, -2585, -2585,     3, -2585, -2585, -2585,  4983,
    1161,     3,   798,  1236,  1217,   698, -2585, -2585, -2585,   809,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,  1748,     3,   798, -2585,     3,  1749,   798,  5099,
       3,  1260,  1505,  1524,   226,   227,  1525,   233,  1459,  1472,
    1755,  1757,  1758,  2854,  1759,  1760,  1761,  1473,  1484,  1242,
    1762,     3,   798,  1253,  1349, -2585, -2585,     3,  4983, -2585,
   -2585,  4983,   798,    35,  1763,     3,   798,  1292,  1101,     3,
   -2585,  4983,  5099,   798, -2585, -2585, -2585,     3,     3,  4983,
   -2585, -2585, -2585, -2585, -2585, -2585,  4983,   798,     3, -2585,
   -2585, -2585,   798, -2585, -2585,  1764,   798,  1555,    52,   798,
    1559,   798,   178,   798, -2585,   798,  1560,  1566,   798,   798,
     798,   798,   798,   798,   798,   798,    23,   798,   798,  1573,
   -2585,   798,   798,   798,   798, -2585,  5099,  1292,  1765,  5099,
    5099,   798,   798,  1292,  1101, -2585,   798,   798,   798,  5099,
   -2585,   798,   798, -2585, -2585, -2585,  1767, -2585, -2585, -2585,
   -2585, -2585, -2585,   798,   798, -2585,   798,   798, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1773,  1777,  1780,
   -2585, -2585,  1160,  1782,  1783,  1785, -2585,  1786,  1788,  1792,
    1793,  1795, -2585,  1796, -2585, -2585, -2585,  1797,  1800,  1803,
   -2585,  1804,  1805,  1807, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,   798,   798,  1801,
    5099, -2585,   798,  1292, -2585, -2585, -2585,  3689,   798,  1292,
     798,   798,   798, -2585,   798,   798,  1808,   798,  1812,  1802,
     798,   798, -2585, -2585,  1813,  5099, -2585, -2585, -2585,   798,
   -2585, -2585, -2585,  1292, -2585,  1079,   798,  1079,   434, -2585,
    1292,  5099,   798,   798,  1814, -2585, -2585, -2585, -2585, -2585,
     798, -2585, -2585, -2585, -2585, -2585,   798,  1815, -2585, -2585,
    5099,  1846,  1847,  1851,  1853,  5099,  1292, -2585,  5099, -2585,
    5099,  5099,  4983,  5099,  1292, -2585,  5099, -2585, -2585,  5099,
   -2585, -2585,  4983,  5099, -2585,  5099,  5099,  4983,  5099, -2585,
    5099,  5099,   798, -2585, -2585, -2585,  5099,  5099,  5099, -2585,
    5099,  5099, -2585, -2585, -2585, -2585,  5099,  5099, -2585, -2585,
   -2585,  5099,  1855,  1857,  1858,  1859,  5099, -2585, -2585,   798,
     798, -2585, -2585,  1863,   798, -2585, -2585,  1861,  1864, -2585,
     798, -2585, -2585, -2585,   746, -2585, -2585, -2585,  1865,  1866,
    1868, -2585, -2585,    -8,  1870,  1881,  1883,   746, -2585, -2585,
   -2585, -2585, -2585,   649, -2585, -2585,  1882,   746,  1884,  1885,
    1886,   649,   649,    -8,  1888,  1889,  1891,   681, -2585,   934,
   -2585,  1005,  1606,  1892,  1893,  1894,   649,   649,    -8,  1897,
    1899,    -8,  1900,  1647,  1907,  1910,  1911,   649,   649,    -8,
    1914,  1916,    -8,  1917,  1662,  1918,  1919,  1921,   649,   649,
      -8,  1923,  1925,    -8,  1926,  1927,  1928,  1929,   649,   649,
      -8,  1931,  1932,  1933,   649, -2585, -2585, -2585, -2585, -2585,
    1945, -2585, -2585,  1946,   649,  1959,  1961, -2585, -2585,   746,
   -2585, -2585,  1964, -2585,  1292, -2585,  5099,   798, -2585,   798,
    5099,   798,  1965,  1396, -2585, -2585, -2585, -2585, -2585, -2585,
    1966, -2585,  4983,     3,  1967,  4983,  1292, -2585,  1968,  1396,
     798,   798,   798,   798,   798,   798,   798,   798,   798,  1970,
    1971, -2585, -2585, -2585,  1972, -2585, -2585, -2585,  1976,  1977,
   -2585, -2585, -2585, -2585,   798,  5099,   798,  1978,  1396,     3,
    1292,  1101,  1292,   798, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,   798,  1101,  1101, -2585,  1292,
    1101,  1292,   798, -2585, -2585,  1292,  1101,  1292,  1101, -2585,
   -2585, -2585, -2585,   798,   798,   798,   798,   798,   798,   798,
     798,   798,   798,  3403, -2585,   798,   798,   798,   798,   798,
     798,   798,   798,   798,   798,   798,  1057,  1979,   798, -2585,
     798,   798,   798,  1981,  1982, -2585, -2585,  1292,   434,  1984,
    1292,  1292, -2585, -2585,  1101, -2585,   798, -2585,  1985,  1292,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585,  1160,  1160,  1160,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   798, -2585, -2585,   798,
   -2585,   798,  1292,   798, -2585,  1101,   798, -2585,   798, -2585,
    1983,  1986,  1988, -2585,  1990,   798,   798,  1992,  1292,  5099,
   -2585, -2585,   798, -2585,   798, -2585,   434,  1006,   798,  1993,
   -2585,   798,    33, -2585, -2585,  1994,  1995,  1996,  1997,  1292,
   -2585,  1006,  1006,  1006,  1292, -2585,  1006,   434,  1006,  1006,
    1292, -2585,  1006,  1006,  1006,  1292, -2585,  1006,  1006,  1292,
    5099,  1006,  1292,  1006,  1006,  1292,  1006,  1292, -2585,  1998,
    1999,  2000,  2003,  1292, -2585, -2585,  2002,    33,  2004, -2585,
     798, -2585, -2585, -2585, -2585,  2006, -2585, -2585, -2585, -2585,
     746,   649, -2585, -2585, -2585, -2585, -2585, -2585,  2007, -2585,
   -2585,   649,  2008,  2009,  2011,   649,   649,    -8,  2014,  2016,
    2018,  2020,  2021,  2022,   649,   649,    -8,  2017,  2024,  2025,
    2028,  2030,  2032,   649,   649,    -8,  2037,  2038,  2040,   649,
     746,   746,   746,   746,   746,  2039,   746,   746,  2042,   649,
     649,   746,   746,   746,   746,   746,  2045,   746,   746,  2048,
     649,   649, -2585, -2585, -2585, -2585, -2585,  2051, -2585, -2585,
    2052,   649, -2585, -2585, -2585, -2585, -2585,  2053, -2585, -2585,
     649, -2585,   649,  2054, -2585,  2055,  2056, -2585,  5127, -2585,
    1006,  2057,  4983,  1006,   798,  5099,  2058, -2585,  1006, -2585,
   -2585, -2585,  1006, -2585, -2585,  5099,  2059,   798,   798,   798,
     798,   798,   798,   798,   798,   798,   798,   798, -2585, -2585,
   -2585,  4983,  1006,   798,  5099,  2060, -2585,  1101,  1101,  1101,
     798,  4983,  1101,   798,  1101,  1101,  5099,  4983,  1101,   798,
    1101, -2585,   798,   798,   798,   798,   798,   798,  1396,   798,
     798,   798,  1593,  1632,  1646,  1653,  1685,  1721,  1724,  3403,
   -2585,  1725, -2585, -2585,  1396,   798,   798,   798,   798,  1396,
     798,   798,   798,   798,   798,   798,  1292,   798,  1633,  1396,
     798,   798, -2585, -2585,   434,     3,  2063,  2066, -2585, -2585,
   -2585, -2585, -2585,   434, -2585, -2585, -2585,   798, -2585, -2585,
    1101,   798, -2585, -2585, -2585,  1083,  2067,  2068, -2585,   798,
    2070,  1079, -2585,  1006, -2585, -2585, -2585, -2585,  2071, -2585,
   -2585,  2073,  2074,  2075,  5099,  2077, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585,   434,  1006, -2585,   434, -2585, -2585,   434, -2585,
     434,  2079,  2080,  5099,  2081, -2585,  2082,  2084, -2585,   798,
   -2585, -2585,   746,   649, -2585,   746,   746,   746,   746,   746,
    2085,   746,   746,   649, -2585, -2585, -2585, -2585, -2585,  2086,
   -2585, -2585,   649,   746,   746,   746,   746,   746,  2087,   746,
     746,   649,   746, -2585, -2585, -2585, -2585, -2585,   649, -2585,
   -2585,  2088,   746,   746, -2585, -2585, -2585, -2585, -2585,   649,
   -2585, -2585,  2089,   746, -2585,   649,  2090, -2585,   649, -2585,
   -2585,   649, -2585, -2585,  1292, -2585,  4983,  1006, -2585, -2585,
    2091,  1292,   798, -2585, -2585,  1292,   798, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585,   798,   798,  1006, -2585,
   -2585,  2093,  1292,   798,  1101, -2585, -2585, -2585,  1006, -2585,
     798, -2585,  1101, -2585,  1006,  1006, -2585,  5099,  1396, -2585,
     798,  2096,  2096,   798,   798,  2096,  1396,  2096, -2585,  5099,
    2854,  2097,  2127,  2129,  2130,  2131,  2128, -2585,     3,  1396,
    2096,  2096,   798,   798,  1396,   798,   798,   798,   798,   798,
   -2585,  1101,   798,  2132, -2585, -2585,   798,  2096,     3,    13,
   -2585,  2133,     3, -2585, -2585, -2585,  2134,   798, -2585,  2135,
    2138,  2065,   798, -2585, -2585,    15, -2585,  2140,    25,  5099,
   -2585, -2585, -2585, -2585, -2585, -2585,  2141,    25,  5099, -2585,
      15,   798, -2585, -2585, -2585, -2585, -2585, -2585, -2585,   649,
   -2585, -2585,   746,   649, -2585, -2585, -2585, -2585, -2585, -2585,
     649, -2585, -2585,   746, -2585,   746,   649, -2585, -2585,   746,
     649, -2585, -2585,   649, -2585, -2585,   798,  1006, -2585, -2585,
    4983,  5099,   798,  5099,   798, -2585, -2585, -2585,  4983,  5099,
     798, -2585, -2585,  5099, -2585, -2585, -2585,  1006, -2585,  2139,
   -2585, -2585, -2585,  1396,   798, -2585,  2143, -2585, -2585,  1292,
    2144, -2585,  2147, -2585, -2585, -2585, -2585, -2585,  2149, -2585,
   -2585,  1396,   798,  2150, -2585, -2585,   798,  5099, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585,    13,  1798,  1620, -2585, -2585,
    2151,  2152, -2585,  2078,  2154,   111, -2585, -2585, -2585,  5099,
   -2585, -2585, -2585, -2585,  5099, -2585, -2585, -2585,  2155,   746,
   -2585, -2585,   746, -2585, -2585,   746, -2585,   746, -2585,  5127,
   -2585,  1006, -2585,  1006,   798,  1006,  2156,  1006, -2585,  1006,
     798,  1006,   798, -2585, -2585, -2585, -2585,  2157, -2585,   798,
   -2585, -2585,  2158, -2585,   798, -2585, -2585, -2585,  2160,   798,
   -2585, -2585, -2585,  1292, -2585, -2585, -2585,  1798, -2585,  1824,
    1735,  1620, -2585,  2161,  2162,  2165, -2585, -2585, -2585, -2585,
     893,   893,  1292,  1292, -2585, -2585, -2585, -2585, -2585,  1006,
   -2585, -2585,  2166, -2585,  4983, -2585, -2585,  2167, -2585,  1396,
   -2585, -2585,  1396,   798, -2585, -2585,   798, -2585,  1396,   798,
   -2585,  5099, -2585,  1824, -2585,     3, -2585,  2168,  2169, -2585,
     798,   798,   798,   798,    25,    25,  2170,  4983,  1292, -2585,
    4983, -2585, -2585,   798,  2172, -2585,   798,  1006, -2585, -2585,
   -2585,  2173,  2174,   798,  2176,   798, -2585, -2585, -2585,  1292,
   -2585, -2585,  1292, -2585, -2585,  2178, -2585, -2585,  2179, -2585,
   -2585, -2585,  2180, -2585,  2181, -2585, -2585,  1396, -2585,  1396,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2585, -2585,    -4, -2585,   316, -2585, -1362,  -928,  1732, -2585,
     878,  -331,  1862,   -46,  1126, -1652,  1768,  2001,  -863,   592,
    -948,  1989,  1054, -2585, -1268, -2585, -2352, -1118, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  -507,  -490, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585,  -385, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -1451, -2585, -2585, -2585, -2585, -2585,  -652, -2585,
   -2585, -2585, -2585, -2585, -2585,    51, -2585, -2585, -2585, -2585,
     -97,  -655, -2101,  -468, -2585, -2585, -2585, -2585,  -537,  -530,
   -2585, -2585, -2584, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585,  1482, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585, -2585,
   -2585, -2585, -2585, -2585, -2585, -2585, -2585
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1247
static const yytype_int16 yytable[] =
{
      70,   860,  1894,  2042,   347,  2044,  1504,   109,   107,  1070,
    1073,  1096,   890, -1102,  1245,  1246,  1247,   636,  1360,    67,
      68,  1363,  1048,  1576,   983,  1581,    67,    68,  1966,   289,
      67,    68,    67,    68,   109,   258,   311,   376,  1394,    67,
      68,    67,    68,   305,   386,   341,  1109,  2656,   352,    67,
      68,  1611,  1612,  1613,   367,    67,    68,  2660,   373,   413,
    1642,   380,  1915,  1049,   585,   383,   385,  1409,   408,   394,
     560,   984,   400,   404,  1469,  1329,   407,  1065,    67,    68,
     411,   619,   274,  1916,   275,   412,  1917,   772,   304,   112,
     754,   109,   531,  1475,   846,   598,   259,  1918,   425,   268,
     434,   435,   439,   441,    67,    68,   532,  1253,   775,   109,
     293,  1716,   839,   572,    67,    68,  1481,   545,   260,   445,
    1919,   114,    57,   704,   109,   842,  1411,  1100,   533,    67,
      68,  1720,   109,    79,  1324,  2764,   269,  1920,    67,    68,
    1110,    67,    68,   849,   422,   977,  1111,   534,   114,    67,
      68,   550,  1554,   745,   457,  1343,   160,   219,   624,   177,
     599,  1692,  1494,   535,  1555,  1717,   536,   261,  1470,   256,
     423,  1482,   891,   220,  1486,   682,   847,   568,   490,  2788,
     397,    67,    68,   511,   561,  1721,   748,  1102,   248,  1050,
     266,   537,   538,  1745,   751,  2665,   850,   985,   276,   600,
    1702,   303,   117,  1051,  1052,   114,   546,   309,   118,   119,
    1476,  1069,   483,   978,   573,  1325,  1254,   484,   398,    67,
      68,   949,   950,   114,   401,   109,  1707,   705,  1718,   117,
     387,   390,   279,   551,   325,   118,   119,   601,   114,  1412,
    1722,   586,   617,   539,   120,   683,   114,  1882,  1884,   695,
    1344,   540,   559,   485,  1887,   354,  1495,   306,   643,   644,
     379,   960,  1317,   755,   552,  1467,   986,  1066,   951,   625,
     961,   962,  1945,   679,   637,   987,   414,   486,  1643,   377,
     307,   681,   684,   388,   687,   691,   117,   693,   562,  2657,
   -1102,   122,   118,   119,  1053,  1054,  2727,   703,  1505,  2661,
     270,   310,   277,   409,   117,   712,   714,   988,   541,   542,
     118,   119,   892,   271,    69,   620,   402,   963,   122,   117,
    1967,   340,   487,  1471,   262,   118,   119,   117,   757,   758,
     763,   162,   765,   118,   119,  1112,   768,   769,   239,   114,
     152,   391,   626,   264,   153,   154,  1067,   781,   783,  1436,
     296,   784,   785,   786,   787,   788,   789,   790,   791,   792,
     351,  1124,   773,   793,  1479,   488,   489,   152,   796,   798,
     263,   153,   154,  1693,   272,   122,   799,  1103,  1921,   800,
     543,  1661,  1498,   776,   392,   393,   372,  2618,  1665,   403,
     396,   569,   627,   122,   952,   953,   809,   810,  1950,   294,
    1101,  1697,  1746,   814,   815,   816,  2728,   817,   122,   295,
    1487,  1496,  1703,  2642,   570,   628,   122,  1536,   319,  1311,
     117,   824,  2796,  2797,   152,   825,   118,   119,   153,   154,
     830,   831,   832,   833,   834,   835,  1840,   836,  1708,  1843,
     840,   841,   152,   964,   965,  1128,   153,   154,  1549,   488,
    2729,  1758,  1759,   843,   349,  1304,  1104,   152,  1468,  1883,
    1885,   153,   154,   954,  2000,   152,  1888,   320,  1378,   153,
     154,  1488,   955,   956,    67,    68,   615,  1379,  1380,   459,
     460,   461,   462,   463,   464,   465,  1863,  1437,   466,   467,
     468,   469,   886,  1149,  1669,    86,    67,    68,  1760,    54,
    1106,  1709,   321,   365,   957,   369,  1233,   872,   874,   122,
    2694,  2695,   966,  1879,  2698,  1129,  2700,    55,   610,    67,
      68,   967,   968,  1133,  1381,   882,   969,   112,  2705,  2706,
     801,  1194,    58,  2710,  2711,  1059,  1908,  2714,   298,  1698,
     937,   355,  2715,  2716,   112,   594,   112,    67,    68,  1048,
    1249,  1150,   903,   970,   630,  1438,   102,   336,   152,   554,
     370,   865,   153,   154,   497,   735,   857,   356,   357,    67,
      68,   631,   498,    59,   716,   103,   641,   642,   371,   933,
     974,   358,   375,  1314,  1305,    67,    68,  1151,   595,   616,
    1049,    60,  2750,  1134,   802,  2751,  1130,  1439,  1725,   993,
    2754,   904,   905,   686,   858,  1060,  2757,  1699,  1473,  1072,
     112,  2760,    80,   948,  1474,   382,    87,   416,  1075,   555,
      61,   866,  1076,   736,  1761,  1762,   104,   359,   360,   696,
      67,    68,   717,  1306,  1041,   299,  1719,    62,    88,   992,
    1710,    63,    89,   746,   749,   752,   632,  1728,    81,  1700,
    1382,  1383,    64,  1778,  1779,   322,  1068,   906,  1307,  1081,
    1042,   803,  1131,   907,  1489,   697,  1356,   723,   406,  2532,
    1825,  1826,    67,    68,  1135,   418,   337,  1116,  1117,  1118,
    1119,  2804,   120,  1120,  2807,  1122,  1061,  1123,  1195,  1125,
     596,    90,  1077,  1763,  1711,  2122,  2123,  1152,   420,   120,
    1780,   120,  1764,  1765,   611,  2818,   300,   105,  2820,   759,
     908,  1792,  1078,   698,  1154,   301,  1050,  1827,    82,  1384,
    1793,  1794,  2825,  2826,  1187,   725,   909,    91,  1385,  1386,
    1051,  1052,  1433,  1387,  1766,    92,    93,  1726,   910,   361,
    1136,   362,  2124,   804,   911,   912,  1160,  1319,   805,   780,
     913,  1165,   718,   442,   338,  1175,  1176,  1177,  1178,  1179,
    1388,  1180,  1182,  1184,  1185,   120,  1577,  1795,   470,   737,
      67,    68,  1155,  1079,  1158,  1048,  1197,  1198,   719,   760,
    1200,  1201,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1043,
    1560,  1727,  1211,  1212,  1583,  2045,  1589,   106,  1461,    83,
     914,    67,    68,  1864,  1161,    65,  1357,   436,  1597,  1166,
     853,  1218,  1219,  1220,   699,  2105,  1049,   458,   363,   915,
     471,  1053,  1054,   916,  1578,   917,  1781,  1782,  1228,  1229,
    1230,  1803,  1232,  1601,  1234,  2118,  1235,  1097,  1044,  1689,
    1804,  1805,  1159,  1828,  1829,  1434,   249,    84,   918,   919,
    2155,   741,  1584,  2158,  1590,   575,   920,  1238,   481,  1240,
     761,  2166,   493,  1045,  2169,   576,  1598,  1080,  2125,  2126,
    1243,   731,  2177,  1442,   921,  2180,  1814,   437,  1250,  2304,
    2305,  2306,  2187,  1252,  1695,  1815,  1816,  1806,   495,   762,
    1865,  1602,   577,  1796,  1797,  1783,    67,    68,  1266,  1268,
    1443,  1339,   854,  1444,  1784,  1785,  1309,  1098,  1312,  1315,
     280,  1462,  1830,   522,  1867,  1320,   548,  1662,  1156,  1299,
    1326,  1831,  1832,  1704,   742,   549,  1369,   944,  1340,  1327,
     922,   250,  1817,  1445,  1450,  2206,  1786,  2127,    96,  1866,
      67,    68,  1050,   251,  1335,   558,  2128,  2129,  2131,  2132,
    1162,  2216,  1690,  1833,    97,  1167,  1051,  1052,   438,  1713,
    1446,  1451,  1798,  1447,  1452,  1714,   578,  1453,   163,   564,
    1579,  1799,  1800,    67,    68,   855,  1801,   252,  2130,  1214,
    2235,  1084,  1300,   164,   565,   165,  1107,  1215,  1099,   110,
     567,  1408,   590,   313,  1454,  2133,   366,  1696,  1585,   584,
    1591,  1868,   579,  1802,   819,   820,  1301,    67,    68,   285,
     592,  1472,  1599,  1807,  1808,   166,   797,   743,   613,  2140,
    2141,  1455,   253,   167,  1456,   614,   112,   618,    98,   857,
    1672,  1673,  1497,    72,   622,   254,  1705,  1603,    73,  2620,
     634,  1503,   639,    67,    68,   678,   281,  1053,  1054,   640,
    1869,   282,   645,   283,   677,  1531,   680,  1532,  1818,  1819,
      67,    68,  1533,  1534,  1535,   580,  2142,   858,    99,    67,
    1181,   113,  1541,  1448,    74,  1542,   110,  1545,   314,   168,
     710,  1302,  1809,    67,    68,   694,    67,    68,    67,    68,
     315,  1810,  1811,  1547,   701,  1548,  1812,  1210,    75,  1551,
    1552,   100,  1449,  1674,    67,    68,   702,    86,  1188,  1189,
     426,   427,   428,  1558,  1559,  2295,   581,   707,  1561,  1562,
     709,  2134,  2135,  1813,  1563,   115,  1564,  1820,   169,  1566,
    1303,  1567,  1191,  1192,  1457,  1222,  1821,  1822,   721,  1636,
    1623,  1823,  2526,    76,   170,   171,   739,  1927,    67,  1265,
     711,   172, -1244,   173,   740,    67,  1619,   715,   113,   291,
     766,   286,   767,  1458,    67,    68,  1856,   770,  1824,   316,
    1399,  1614,  1615,  1616,  1617,   778,  1618,  1620,   174,  2380,
    1622,   120,   317,  2326,  1539,  1540,   121,    77,  2389,  1459,
    2136,   794,  2143,  2144,   795,  1628,   287,  2398,   808,  2137,
    2138,   811,  1570,  1571,  2342,   812,  1631,   813,  1633,  1634,
    1635,  1637,   115,  1985,  2612,  1640,  1641,  2615,   818,  2617,
      67,    68,  1862,  1649,  1406,  1407,   240,   821,    87,   823,
    1654,  2139,  2629,  2630,  1655,  1656,  1657,   426,  1400,    67,
      68,  1860,   444,   175,   428,  1663,  1900,  1901,  1666,  2644,
      88,  2696,   844,   241,  2041,   288,    67,    68,  1905,  1676,
     845,  2145,  1678,    67,    68,  1878,   852,  1406,  1407,  2707,
    2146,  2147,   861,   121,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,  2148,    90,   863,  1730,  1401,  1402,  1737,   827,
     828,  1738,  1739,   512,  1740,   520,  1741,   525,   529,   868,
    1403,   242,  1743,   870,  1744,   556,   884,   446,  1572,  1573,
    2486,  1750,   889,   894,   899,   243,   900,  1680,   901,    91,
     583,   902,   925,   927,   929,   931,  2499,    92,    93,   934,
     935,  2504,    67,    68,  1907,  1574,  1406,  1407,  1500,  1404,
     939,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   943,
    2782,   244,   945,   946,   958,   947,  2785,   959,   447,    67,
      68,   971,   979,  1406,  1407,  1681,  1857,   723,  1859,  1861,
    1408,   981,  1546,   982,   689,   989,   990,  1731,   448,   449,
     450,   991,  1553,  1047,  1056,   451,  1063,  1139,  1064,  1058,
    1872,  2518,   245,  1115,  1875,  1126,  1113,  1408,   452,  1138,
    2522,  1114,   246,  1140,   453,  1141,  1142,  1143,  1146,  1144,
    1145,  1147,  1164,   326,   454,  2823,  1169,  2824,  1904,  1906,
    1408,  1170,   724,   327,  1171,   725,  1172,  1173,  1914,  1174,
    1190,  1193,  1925,  1682,  1683,  1199,  1209,  1213,  1216,  1932,
    1217,  1221,  1223,  1224,  1257,  1732,  1236,  1684,  1237,  2540,
     328,  1258,  2542,  1939,  1259,  2543,  1262,  2544,  1941,  1263,
    1264,   726,  1943,  1316,  1946,  1947,  1322,  1949,  1951,  1952,
    1318,  1955,  1328,  1310,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1968,  1970,  1971,  1186,  1685,  1973,  1974,  1975,
    1976,  1332,  1351,  1333,  1336,   727,  1337,  1982,  1983,  1646,
    1647,  1338,  1986,  1987,  1988,  1346,  1347,  1990,  1991,  1348,
    2608,  1349,  1352,  1733,  1734,  1353,  1354,  1355,  2616,  1993,
    1994,  1361,  1995,  1996,   329,   455,  1362,  1735,   838,  1030,
    1364,  2628,  1365,  1371,  1373,  1374,  2633,  1376,  1389,  1390,
    2238,  1391,   728,  1031,  1392,   729,  1395,  1410,  1396,  1397,
    1413,  1435,  1032,  1414,  1440,  2242,  2243,  1463,  1460,  2245,
     330,  1465,  1033,  1441,  1464,  2249,  1736,  2251,   730,   222,
    1466,   731,  1483,  2016,  2017,  1484,  1485,  1480,  2019,  1490,
    1493,  1491,   732,  2021,  2024,  1501,  2026,  2027,  2028,  1492,
    2029,  2030,  1034,  2032,   223,  1499,  2035,  2036,  1502,  1627,
    1538,  1550,   331,  1556,  1557,  2039,  1569,  1565,  1568,  1582,
    1587,  1035,  2043,  2300,  1588,  1593,  1638,  1594,  2048,  2049,
    1595,   887,   472,   332,  1596,  1607,  2051,   224,  1605,  1606,
    1608,  1609,  2052,  1610,   225,  1625,  1626,  1639,  1650,  1632,
     473,  1645,  1651,  1652,   226,   227,  1659,  1664,  -450,  1671,
    1677,   228,  1667,   924,  2312,  1036,  1668,   474,   333,  1679,
    1701,  1688,  1691,  1706,  1723,  1712,  1742,  1715,  2080,   475,
    1748,  1085,  1729,   229,   334,  1749,  1724,  1754,  1773,  1086,
    1776,  1853,  1787,  1789,  1791,  1087,   476,  1858,  1835,   230,
     477,  1037,  1836,  1837,  1841,  2094,  2095,  1842,  1880,  1844,
    2097,   478,  1845,  1834,   231,  1088,  2100,  1846,  1849,  1871,
    1852,   232,  1873,  1870,  1874,  1038,  1877,  1881,  1886,  1891,
    1889,  1892,  1893,  1895,  1896,  1897,  1902,  1923,  1089,  1942,
    1979,   233,  1992,  1890,  1898,  1944,  1090,  1903,  1997,  1948,
    1956,   479,  1998,  1909,  1999,  1899,  1957,  2001,  2002,  2003,
    2004,  1924,  2005,  1972,  1039,  1928,  1040,  2006,  2007,  2008,
    2009, -1246,  2010,  1933,  1934,  2011,   234,  2012,  2034,  2013,
    2014,  2015,  1091,  2031,  1940,   343,  2033,  2037,  2050,  2053,
    1092,  2781,   344,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  2055,  2056,  2201,   235,  2202,  2057,  2204,  2058,  1408,
    2089,  1093,  2090,  2091,  2092,   236,  2098,  2096,  2099,  2149,
    2102,  2103,  1094,  2104,  2106,  1408,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2107,  2111,  1095,  2108,  2113,
    2114,  2115,  2119,  2120,   237,   290,  2121,  2150,  2151,  2152,
    2231,  2156,  2233,  2157,  1408,  2159,  2464,  2465,  2466,  2240,
    2160,  2470,  2161,  2472,  2473,  2162,  2163,  2477,  2167,  2479,
    2168,  2241,  2170,  2172,  2173,  2171,  2174,  2178,  2247,  2179,
    2513,  2181,  2182,  2183,  2184,  2188,  2189,  2490,  2190,  2252,
    2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2192,
    2193,  2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,  2195,  2288,  2196,  2289,  2290,  2291,  2198,
    2205,  2207,  2211,  2215,  2226,  2227,  2491,  2228,   443,  2524,
    2229,  2230,  2301,  2234,  2287,  2292,  2293,  1239,  2296,  2302,
    2492,  2316,  2720,  2317,  2318,  2315,  2321,  2493,  2329,  2332,
    2333,  2334,  2335,  2361,  2362,  2363,  2366,  1342,  2364,  2368,
    2370,  2373,  2307,  2375,  2376,  2308,  2377,  2309,  2381,  2311,
    2382,  2390,  2313,  2383,  2314,  2384,  2385,  2386,  2391,  2494,
    2392,  2319,  2320,  2393,   345,  2394,   346,  2395,  2324,  1393,
    2325,  2399,  2400,  2408,  2328,  2401,  2411,  2330,   509,  2419,
     516,   519,  2422,   524,   528,  2425,  2426,  2428,  2431,  2432,
    2433,  2436,  2442,  2446,  2463,  2495,  2720,  2520,  2496,  2498,
    2521,  2654,  2528,  2529,  2531, -1115,  2534,  2535,  2536,  2765,
    2537,   588,  2539,  2545,  2725,  2546,  2548,  2549,  2550,  2559,
    2563,  2570,  2576,  2580,  2583,  2590,  2369,  2598,   603,   608,
    2610,  2266,  2621,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  2622,  2626,  2601,  2623,  2624,  2625,  2641,  2648,  2650,
    2652,  2604,  2653,  2693,  1478,  2659,  2664,  2699,  2731,  2702,
     688,  2703,  2434,  2704,  2709,   807,  2723,  2724,  2726,  2734,
    2744,  2752,   826,  2755,  2758,  2667,  2767,  2768,   708,  2769,
    2777,  2780,  2497,  2790,  2791,  2798,  2806,  2717,  2810,  2811,
    2639,  2813,  2817,  2819,  2766,  2821,  2822,  2762,     0,  2210,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2440,     0,     0,     0,     0,     0,  1544,     0,  1148,     0,
       0,     0,     0,  2447,  2448,  2449,  2450,  2451,  2452,  2453,
    2454,  2455,  2456,  2457,     0,  2236,     0,     0,     0,  2461,
       0,     0,     0,     0,     0,     0,  2467,     0,     0,  2471,
    2771,  2773,     0,     0,     0,  2478,     0,     0,  2480,  2481,
    2482,  2483,  2484,  2485,  1408,  2487,  2488,  2489,     0,     0,
       0,     0,     0,   110,     0,     0,     0,     0,     0,     0,
    1408,  2500,  2501,  2502,  2503,  1408,  2505,  2506,  2507,  2508,
    2509,  2510,     0,  2512,   822,  1408,  2516,  2517,     0,     0,
       0,   692,     0,     0,     0,   829,     0,     0,     0,     0,
     112,     0,     0,  2523,   837,     0,     0,  2525,     0,     0,
       0,  2527,     0,     0,     0,  2530,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1630,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,     0,   779,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2551,     0,     0,     0,     0,
       0,     0,     0,   873,     0,     0,   875,   876,     0,     0,
       0,  1670,     0,     0,     0,     0,     0,     0,     0,   880,
    1751,  1752,  1753,     0,   883,     0,  1687,     0,     0,   115,
    1755,  1756,  1757,   895,   897,     0,     0,  1768,  1769,  1770,
       0,     0,  1771,  1772,     0,  1774,  1775,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2592,     0,
       0,     0,  2594,     0,     0,  1847,  1848,     0,     0,  1850,
    1851,     0,  2595,  2596,     0,   120,     0,     0,     0,  2600,
     121,     0,     0,     0,     0,     0,  2603,   940,   941,   942,
       0,     0,     0,     0,  1408,     0,  2609,     0,     0,  2613,
    2614,     0,  1408,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1408,     0,     0,  2631,  2632,
    1408,  2634,  2635,  2636,  2637,  2638,     0,     0,  2640,     0,
     871,     0,  2643,     0,     0,     0,   518,   877,     0,     0,
     878,     0,     0,  2651,     0,   879,  1083,     0,  2655,   881,
       0,     0,     0,     0,     0,  1855,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2668,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     0,  2679,     0,     0,     0,     0,     0,  2684,   938,
    2686,     0,     0,     0,  1911,     0,  2690,  1913,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1930,     0,  1408,
    2697,  2519,     0,     0,     0,  1936,     0,     0,     0,     0,
       0,     0,  1938,     0,     0,     0,     0,  1408,  2708,     0,
       0,     0,  2712,  2739,     0,     0,     0,     0,     0,  2327,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2730,     0,  2337,  2338,  2339,     0,     0,  2341,     0,
    2343,  2344,     0,     0,  2346,  2347,  2348,     0,     0,  2350,
    2351,     0,     0,  2354,     0,  2356,  2357,     0,  2359,     0,
    2742,     0,     0,     0,     0,  1226,  2747,     0,  2749,  1121,
       0,     0,     0,     0,     0,  2753,  1127,  1231,     0,     0,
    2756,   646,   647,     0,     0,  2759,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2770,  2772,     0,     0,
       0,     0,     0,     0,  1241,  1242,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1408,     0,     0,  1408,  2783,
       0,     0,  2784,  2023,  1408,  2786,     0,   648,  1261,     0,
       0,     0,     0,   649,     0,     0,  2792,  2793,  2794,  2795,
     650,     0,   651,     0,     0,     0,     0,   652,     0,  2805,
     653,     0,  2808,     0,     0,     0,   654,     0,     0,  2812,
       0,  2814,  2435,     0,     0,  2439,   655,     0,     0,     0,
    2443,     0,   656,     0,  2444,  1331,     0,     0,  2101,     0,
     657,     0,     0,  1408,  2627,  1408,     0,     0,  2065,     0,
       0,  2109,  1506,  1225,  2460,     0,   658,  1507,  2071,     0,
    1227,  2112,     0,  2076,  2645,     0,     0,     0,  2649,     0,
       0,     0,     0,     0,     0,   659,     0,     0,  1508,  1509,
       0,  1510,  1511,     0,     0,     0,     0,     0,     0,     0,
     660,     0,  1512,     0,     0,     0,     0,     0,     0,   661,
     662,     0,     0,     0,  1513,  1514,  1244,     0,     0,     0,
    1477,  1248,  1515,     0,  1251,  1516,     0,     0,     0,   663,
       0,     0,     0,     0,  1415,     0,  1260,     0,     0,     0,
       0,     0,  1517,  2197,     0,     0,     0,     0,  1518,  1519,
     664,     0,  1520,     0,     0,  2533,     0,     0,     0,     0,
    1416,     0,     0,   665,     0,   666,     0,     0,     0,     0,
       0,     0,  1537,     0,     0,     0,     0,     0,   667,     0,
       0,     0,  1543,   668,     0,  2541,     0,     0,     0,   669,
       0,     0,     0,  1417,  1359,     0,   670,     0,     0,  1418,
       0,     0,     0,     0,  1419,     0,     0,     0,     0,     0,
    1521,     0,     0,     0,   671,     0,     0,     0,     0,     0,
       0,     0,     0,  1420,     0,     0,     0,   672,   673,     0,
     674,     0,     0,     0,  1398,     0,     0,     0,  2209,     0,
       0,  2213,  1421,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1422,     0,     0,
       0,     0,  1522,     0,     0,     0,     0,  1523,     0,  2589,
     675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1524,     0,  1621,     0,  1423,     0,     0,     0,
    2597,  1525,     0,     0,     0,     0,     0,     0,     0,     0,
    2602,  1629,     0,     0,     0,     0,  2605,  2606,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1526,  1527,
       0,  2789,  1424,     0,   179,     0,     0,   180,     0,   181,
       0,     0,     0,     0,  1653,  1425,     0,     0,     0,  1528,
       0,     0,     0,     0,     0,  1660,  1426,     0,   182,     0,
     183,   184,   185,     0,     0,     0,     0,     0,     0,     0,
     186,     0,   187,     0,     0,     0,     0,   188,     0,   189,
     190,   191,  1686,  1427,     0,     0,   192,  1694,   193,     0,
       0,     0,     0,  1529,     0,  1428,     0,  1429,  1430,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2371,     0,   194,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2331,  2680,
       0,     0,   195,     0,     0,     0,     0,  1431,  1624,     0,
       0,     0,     0,   196,   197,     0,     0,   198,     0,  2692,
       0,   199,     0,   200,  2403,  2404,  2405,  2406,  2407,     0,
    2409,  2410,     0,     0,     0,  2414,  2415,  2416,  2417,  2418,
       0,  2420,  2421,  2367,   201,   202,     0,  1648,   203,     0,
       0,     0,     0,     0,     0,     0,     0,   204,     0,     0,
       0,     0,  1658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   205,   206,     0,     0,     0,     0,     0,     0,
     207,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1854,     0,  2740,     0,  2741,     0,  2743,     0,  2745,
       0,  2746,   208,  2748,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1876,     0,     0,     0,     0,     0,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   211,   212,     0,     0,     0,  2438,     0,
    1910,  2776,   213,  1912,     0,     0,     0,     0,     0,   214,
       0,  1767,     0,  1929,  1931,   215,     0,   216,     0,     0,
       0,  1935,     0,  1777,     0,     0,     0,  2459,  1937,     0,
       0,     0,     0,     0,     0,     0,     0,  2469,     0,     0,
       0,  1838,  1839,  2476,     0,     0,     0,     0,     0,  2809,
       0,     0,     0,   217,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1977,     0,
       0,  1980,  1981,     0,     0,     0,     0,     0,     0,     0,
       0,  1989,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2552,     0,     0,  2554,
    2555,  2556,  2557,  2558,     0,  2560,  2561,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2565,  2566,  2567,
    2568,  2569,     0,  2571,  2572,     0,  2574,     0,  2262,     0,
       0,     0,     0,     0,     0,     0,  2577,  2578,     0,  2263,
       0,     0,     0,     0,     0,     0,     0,  2581,  1926,     0,
       0,     0,  2018,     0,     0,     0,     0,     0,     0,  2022,
       0,     0,     0,     0,  1085,  2264,     0,     0,     0,     0,
       0,     0,  1086,     0,     0,     0,     0,  2038,  1087,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2047,     0,     0,     0,     0,  1088,     0,
       0,     0,  2265,     0,     0,     0,     0,     0,  1978,     0,
       0,     0,  2054,     0,  1984,     0,     0,  2059,     0,     0,
    2061,  1089,  2062,  2063,  2064,  2066,     0,     0,  2068,  1090,
       0,  2069,  2588,     0,  2070,  2072,     0,  2073,  2074,  2075,
    2077,     0,  2078,  2079,     0,     0,     0,     0,  2081,  2082,
    2083,     0,  2084,  2085,     0,     0,     0,     0,  2086,  2087,
       0,     0,     0,  2088,     0,  1091,     0,     0,  2093,     0,
       0,     0,     0,  1092,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2670,     0,     0,     0,
       0,     0,     0,     0,  2020,     0,     0,  2673,     0,  2674,
    2025,     0,     0,  2676,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1093,     0,     0,   109,     0,     0,
       0,     0,     0,     0,  2040,  1094,     0,     0,     0,     0,
       0,  2046,   110,     0,     0,     0,     0,     0,     0,     0,
    1095,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2266,     0,  2267,   111,     0,     0,     0,  2060,     0,     0,
       0,     0,    67,    68,     0,  2067,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,     0,   110,     0,
       0,     0,     0,     0,     0,     0,  2682,     0,  2200,     0,
       0,     0,  2203,  2735,  2688,     0,  2736,     0,     0,  2737,
       0,  2738,     0,     0,  2208,     0,  2268,  2212,     0,     0,
       0,     0,     0,     0,   113,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,  2110,     0,     0,     0,     0,  2232,     0,     0,
    2116,  2117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2153,  2154,     0,     0,     0,
     113,     0,     0,     0,     0,     0,  2164,  2165,   115,     0,
       0,     0,     0,     0,     0,     0,     0,  2175,  2176,     0,
       0,     0,     0,     0,     0,     0,     0,  2185,  2186,     0,
       0,     0,     0,  2191,     0,     0,     0,     0,  2286,     0,
       0,     0,     0,  2194,   116,     0,     0,     0,     0,     0,
       0,     0,   117,     0,   115,     0,     0,     0,   118,   119,
       0,     0,     0,     0,   120,  2199,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2779,     0,     0,     0,     0,     0,     0,  2214,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,  2323,     0,  2800,     0,   121,  2803,     0,     0,     0,
       0,  2237,     0,  2239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   896,     0,
    2244,   122,  2246,     0,     0,     0,  2248,     0,  2250,     0,
       0,     0,  2353,   110,     0,     0,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,  2294,     0,
     152,  2298,  2299,     0,   153,   154,     0,     0,     0,     0,
    2303,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,  2310,     0,   113,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2322,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2336,     0,     0,     0,  2437,  2340,     0,  2441,     0,     0,
       0,  2345,     0,     0,     0,     0,  2349,  2445,     0,   115,
    2352,     0,     0,  2355,     0,     0,  2358,     0,  2360,     0,
       0,     0,     0,  2458,  2365,     0,  2462,     0,     0,     0,
    2372,     0,     0,  2468,     0,     0,     0,     0,  2474,  2475,
    2374,     0,     0,     0,  2378,  2379,     0,     0,     0,     0,
       0,     0,     0,  2387,  2388,     0,     0,     0,     0,     0,
       0,     0,  2396,  2397,     0,     0,     0,     0,  2402,     0,
     121,     0,     0,     0,     0,     0,     0,     0,  2412,  2413,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2423,
    2424,     0,     0,     0,     0,     0,     0,   527,     0,     0,
    2427,     0,     0,     0,     0,     0,     0,     0,     0,  2429,
       0,  2430,   110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2538,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,  2547,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2511,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2587,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2607,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2619,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2553,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2562,     0,   120,     0,     0,     0,     0,   121,
       0,  2564,     0,     0,     0,     0,     0,     0,     0,     0,
    2573,     0,     0,     0,     0,     0,     0,  2575,     0,     0,
       0,  2663,     0,     0,     0,     0,     0,     0,  2579,     0,
    2666,     0,     0,     0,  2582,     0,     0,  2584,     0,     0,
    2585,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2586,     0,     0,     0,     0,
       0,     0,  2591,     0,     0,     0,  2593,     0,     0,     0,
       0,     0,  2681,  2683,     0,  2685,     0,     0,     0,     0,
    2687,  2689,     0,  2599,     0,  2691,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,  2713,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2732,     0,     0,     0,     0,  2733,     0,     0,     0,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2669,     0,
       0,     0,  2671,     2,     0,     0,     3,     0,     4,  2672,
       0,     0,     0,     0,     0,  2675,     0,     0,     0,  2677,
       0,     5,  2678,     0,     0,     0,     6,     7,     0,     8,
       9,    10,     0,   110,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,     0,     0,     0,  2778,    15,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2701,     0,     0,  2787,     0,     0,     0,     0,     0,   500,
     501,     0,     0,   502,     0,     0,    17,     0,     0,  2799,
       0,     0,  2802,     0,   604,   110,     0,    18,     0,     0,
       0,    19,     0,     0,    20,   503,     0,     0,     0,    21,
      22,     0,     0,     0,     0,   113,    23,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   605,    25,     0,     0,    26,    27,
      28,     0,     0,    29,    30,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    31,     0,     0,     0,
       0,     0,     0,     0,  2761,     0,     0,     0,     0,   115,
       0,    32,    33,    34,     0,     0,     0,   113,     0,     0,
       0,   504,     0,  2774,  2775,    35,     0,     0,     0,     0,
     606,     0,     0,    36,     0,     0,    37,     0,   505,    38,
       0,    39,     0,    40,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,   506,     0,     0,
       0,    42,     0,     0,     0,     0,    43,     0,     0,  2801,
     121,   115,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,     0,     0,     0,     0,     0,     0,
    2815,     0,     0,  2816,    46,     0,    47,     0,     0,     0,
       0,     0,    48,     0,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   121,     0,     0,     0,    51,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,   508,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   607,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   994,   995,
     996,     0,     0,     0,     0,     0,     0,     0,     0,  1269,
    1270,  1271,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   997,   998,     0,     0,
     999,     0,     0,  1000,     0,     0,     0,  1272,  1273,     0,
    1001,  1274,   110,     0,  1002,     0,     0,     0,  1275,     0,
       0,  1276,  1003,  1004,     0,  1277,     0,     0,     0,     0,
    1005,  1006,     0,  1278,  1279,     0,     0,     0,     0,     0,
       0,  1280,     0,     0,     0,     0,     0,  1007,     0,   112,
       0,     0,     0,  1008,     0,     0,  1009,  1010,     0,     0,
    1011,     0,     0,     0,     0,     0,     0,  1281,  1282,   110,
       0,  1283,     0,     0,     0,     0,     0,  1012,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1284,     0,
       0,     0,     0,     0,   113,     0,  1013,     0,   110,     0,
       0,     0,     0,     0,     0,     0,     0,  1285,     0,   514,
       0,     0,     0,     0,     0,     0,     0,     0,  1014,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   110,  1286,
       0,     0,     0,     0,     0,  1330,     0,     0,  1287,     0,
    1015,     0,     0,     0,     0,     0,     0,     0,   115,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1016,     0,
    1017,     0,     0,     0,     0,  1018,  1019,     0,     0,  1288,
     113,  1289,     0,     0,     0,     0,  1290,  1291,     0,  1020,
    1021,     0,     0,     0,     0,     0,     0,     0,     0,  1022,
    1023,  1292,     0,     0,   120,   115,     0,     0,     0,   121,
     113,  1293,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1024,     0,  1025,     0,     0,
       0,     0,     0,     0,   115,     0,  1294,     0,  1295,  1026,
       0,  1027,     0,     0,     0,     0,     0,  1028,  1296,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1297,     0,
       0,     0,     0,     0,   115,     0,   121,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1029,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1298,     0,     0,   121,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   121,     0,   972,     0,     0,
       0,   515,   973,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,  1367,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,  1368
};

static const yytype_int16 yycheck[] =
{
       4,   491,  1453,  1655,    50,  1657,     5,     4,    12,   661,
     662,   666,     4,     0,   877,   878,   879,     5,   966,     3,
       4,   969,    63,  1141,    14,  1143,     3,     4,     5,    33,
       3,     4,     3,     4,     4,     5,    40,    32,   986,     3,
       4,     3,     4,    61,     4,    49,     5,    32,    52,     3,
       4,  1169,  1170,  1171,    58,     3,     4,    32,    62,     5,
      46,    65,    27,   104,    16,    69,    70,   995,     4,    73,
      66,    61,    76,    77,    36,   938,    80,    17,     3,     4,
      84,     5,    64,    48,    66,    89,    51,     4,    37,    56,
      13,     4,    45,   120,   103,   148,    66,    62,   102,    20,
     104,   105,   106,   107,     3,     4,    59,   131,     4,     4,
       5,   166,   443,   132,     3,     4,   220,   208,    88,   123,
      85,   118,    66,   148,     4,   456,   120,     5,    81,     3,
       4,   166,     4,   277,    17,  2719,    57,   102,     3,     4,
      99,     3,     4,   190,     5,    87,   105,   100,   118,     3,
       4,     6,     5,    66,   158,   163,    33,    83,     5,   142,
     213,    21,    36,   116,    17,   220,   119,   137,   130,   225,
      31,   275,   164,    99,     5,    40,   185,    61,   182,  2763,
     136,     3,     4,   187,   180,   220,    66,    17,    16,   230,
       5,   144,   145,    20,    66,  2547,   243,   187,   180,   252,
      21,    88,   199,   244,   245,   118,   297,   191,   205,   206,
     237,   252,   185,   155,   233,    98,   240,   190,   174,     3,
       4,    14,    15,   118,    78,     4,    21,   252,   283,   199,
     190,   185,    66,    88,     4,   205,   206,   290,   118,   233,
     275,   193,   246,   196,   211,   110,   118,    21,    21,   295,
     258,   204,   201,   226,    21,     0,   130,   275,   262,   263,
     122,     5,   917,   186,   119,    27,   256,   207,    61,   116,
      14,    15,   220,   277,   262,   265,   222,   250,   264,   274,
     298,   285,   286,   243,   288,   289,   199,   291,   284,   274,
     277,   288,   205,   206,   335,   336,   185,   301,   297,   274,
     221,   285,   284,   239,   199,   309,   310,   297,   261,   262,
     205,   206,   304,   234,   285,   239,   170,    61,   288,   199,
     297,   285,   295,   285,   294,   205,   206,   199,   332,   333,
     334,    15,   336,   205,   206,   294,   340,   341,    22,   118,
     337,   295,   189,    27,   341,   342,   286,   351,   352,    27,
      34,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     285,   692,   279,   367,  1019,   338,   339,   337,   372,   373,
     340,   341,   342,   233,   295,   288,   380,   207,   343,   383,
     333,  1244,  1037,   279,   338,   339,   285,  2488,  1251,   243,
      74,   275,   239,   288,   187,   188,   400,   401,   220,   294,
     278,    27,   229,   407,   408,   409,   295,   411,   288,   304,
     241,   285,   233,  2514,   298,   262,   288,  1069,    50,   203,
     199,   425,  2774,  2775,   337,   429,   205,   206,   341,   342,
     434,   435,   436,   437,   438,   439,  1384,   441,   233,  1387,
     444,   445,   337,   187,   188,    40,   341,   342,  1100,   338,
     339,    14,    15,   457,   225,    30,   286,   337,   220,   233,
     233,   341,   342,   256,  1582,   337,   233,    99,     5,   341,
     342,    27,   265,   266,     3,     4,     6,    14,    15,   163,
     164,   165,   166,   167,   168,   169,  1414,   165,   172,   173,
     174,   175,     4,    61,     4,    28,     3,     4,    61,   237,
     279,    27,   134,     5,   297,   261,   837,   511,   512,   288,
    2611,  2612,   256,  1441,  2615,   110,  2617,   255,     4,     3,
       4,   265,   266,    40,    61,   529,   270,    56,  2629,  2630,
      30,    97,    12,  2634,  2635,    40,  1464,  2638,    70,   165,
     586,    22,  2643,  2644,    56,    44,    56,     3,     4,    63,
     881,   119,   556,   297,    93,   233,    40,     4,   337,     5,
       5,   190,   341,   342,   167,    61,   136,    48,    49,     3,
       4,   110,   175,    53,    61,    59,   260,   261,     4,   583,
     626,    62,     5,    17,   159,     3,     4,   155,    87,   119,
     104,    71,  2693,   110,    94,  2696,   191,   275,    27,   645,
    2701,     4,     5,   287,   174,   110,  2707,   233,   255,   123,
      56,  2712,     4,   617,   261,   122,   149,    31,    36,    65,
     100,   250,    40,   119,   187,   188,   110,   108,   109,    54,
       3,     4,   119,   208,     4,   167,  1291,   117,   171,   643,
     166,   121,   175,   327,   328,   329,   185,  1302,    40,   275,
     187,   188,   132,    14,    15,   287,   660,    60,   233,   663,
      30,   161,   257,    66,   220,    90,    17,    61,     5,  2321,
      14,    15,     3,     4,   191,     5,   123,   681,   682,   683,
     684,  2782,   211,   687,  2785,   689,   191,   691,   254,   693,
     189,   224,   110,   256,   220,    14,    15,   265,     5,   211,
      61,   211,   265,   266,   190,  2806,   238,   191,  2809,    40,
     113,     5,   130,   138,    61,   247,   230,    61,   110,   256,
      14,    15,  2823,  2824,   770,   119,   129,   260,   265,   266,
     244,   245,   120,   270,   297,   268,   269,   166,   141,   220,
     257,   222,    61,   243,   147,   148,    61,   203,   248,   122,
     153,    61,   239,   191,   201,   759,   760,   761,   762,   763,
     297,   765,   766,   767,   768,   211,    61,    61,   116,   265,
       3,     4,   119,   191,    87,    63,   780,   781,   265,   110,
     784,   785,   786,   787,   788,   789,   790,   791,   792,   159,
    1121,   220,   796,   797,    61,  1658,    61,   281,   120,   191,
     203,     3,     4,   105,   119,   285,   157,    40,    61,   119,
      78,   815,   816,   817,   239,  1763,   104,     4,   299,   222,
      66,   335,   336,   226,   119,   228,   187,   188,   832,   833,
     834,     5,   836,    61,   838,  1783,   840,    40,   208,   120,
      14,    15,   155,   187,   188,   233,    26,   239,   251,   252,
    1798,    34,   119,  1801,   119,    37,   259,   861,   117,   863,
     191,  1809,   277,   233,  1812,    47,   119,   285,   187,   188,
     874,   265,  1820,    22,   277,  1823,     5,   110,   882,  1997,
    1998,  1999,  1830,   887,   120,    14,    15,    61,   167,   220,
     192,   119,    74,   187,   188,   256,     3,     4,   902,   903,
      49,   155,   170,    52,   265,   266,   910,   110,   912,   913,
     200,   233,   256,    33,   105,   919,     5,  1248,   265,    66,
     924,   265,   266,   120,   107,    89,   972,   611,   182,   933,
     333,   111,    61,    82,    22,  1863,   297,   256,    83,   241,
       3,     4,   230,   123,   948,    16,   265,   266,    14,    15,
     265,  1879,   233,   297,    99,   265,   244,   245,   191,   255,
     109,    49,   256,   112,    52,   261,   148,    55,    29,    66,
     265,   265,   266,     3,     4,   243,   270,   157,   297,     4,
    1908,   665,   129,    44,   226,    46,   670,    12,   191,    19,
     276,   995,    72,    26,    82,    61,    59,   233,   265,    89,
     265,   192,   184,   297,     4,     5,   153,     3,     4,    39,
      31,  1015,   265,   187,   188,    76,    12,   200,     5,    14,
      15,   109,   202,    84,   112,     4,    56,     4,   173,   136,
      24,    25,  1036,   185,     5,   215,   233,   265,   190,  2490,
       5,  1045,     4,     3,     4,     4,   336,   335,   336,     5,
     241,   341,     5,   343,     5,  1059,     5,  1061,   187,   188,
       3,     4,  1066,  1067,  1068,   247,    61,   174,   213,     3,
       4,   101,  1076,   222,   226,  1079,    19,  1081,   111,   140,
      40,   228,   256,     3,     4,     4,     3,     4,     3,     4,
     123,   265,   266,  1097,     4,  1099,   270,    12,   250,  1103,
    1104,   246,   251,    97,     3,     4,     4,    28,     4,     5,
       9,    10,    11,  1117,  1118,  1978,   298,     5,  1122,  1123,
       4,   187,   188,   297,  1128,   155,  1130,   256,   189,  1133,
     277,  1135,     4,     5,   222,   819,   265,   266,   119,    59,
    1186,   270,    59,   295,   205,   206,     5,  1478,     3,     4,
     110,   212,     0,   214,     4,     3,     4,    97,   101,    33,
     262,   191,     4,   251,     3,     4,     5,     4,   297,   202,
      82,  1175,  1176,  1177,  1178,     4,  1180,  1181,   239,  2127,
    1184,   211,   215,  2046,     4,     5,   216,   339,  2136,   277,
     256,     4,   187,   188,     5,  1199,   226,  2145,     4,   265,
     266,     4,    42,    43,  2067,     4,  1210,     4,  1212,  1213,
    1214,  1215,   155,  1544,  2482,  1219,  1220,  2485,     4,  2487,
       3,     4,     5,  1227,     7,     8,    88,     5,   149,     5,
    1234,   297,  2500,  2501,  1238,  1239,  1240,     9,   150,     3,
       4,     5,   116,   304,    11,  1249,     4,     5,  1252,  2517,
     171,  2613,     5,   115,   175,   285,     3,     4,     5,  1263,
     261,   256,  1266,     3,     4,     5,   167,     7,     8,  2631,
     265,   266,     4,   216,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   297,   224,     4,  1309,   218,   219,  1312,   431,
     432,  1315,  1316,   187,  1318,   189,  1320,   191,   192,   175,
     232,   183,  1326,   167,  1328,   199,     4,    35,   168,   169,
    2258,  1335,   193,   193,     5,   197,     5,    82,     4,   260,
     214,   193,    66,    66,    66,   220,  2274,   268,   269,     5,
     221,  2279,     3,     4,     5,   195,     7,     8,  1042,   271,
       5,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     4,
    2752,   253,     4,     4,    87,   193,  2758,     5,   106,     3,
       4,    87,     5,     7,     8,   150,  1410,    61,  1412,  1413,
    1414,     4,  1096,     4,   288,     5,     5,    82,   126,   127,
     128,     4,  1106,     5,    99,   133,     4,    97,     5,    17,
    1434,  2294,   294,     4,  1438,     4,    17,  1441,   146,     4,
    2303,    17,   304,     5,   152,     5,    87,     4,    87,     5,
       5,     5,     4,    37,   162,  2817,     5,  2819,  1462,  1463,
    1464,     5,   116,    47,     4,   119,     5,     5,  1472,     5,
       4,     4,  1476,   218,   219,    12,     5,    12,     4,  1483,
       4,     4,     4,     4,   164,   150,     5,   232,     5,  2352,
      74,     5,  2355,  1497,     4,  2358,     4,  2360,  1502,     5,
       4,   155,  1506,   251,  1508,  1509,   279,  1511,  1512,  1513,
     251,  1515,     5,    20,  1518,  1519,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,     6,   271,  1531,  1532,  1533,
    1534,     4,   263,     5,     5,   189,     5,  1541,  1542,  1223,
    1224,     5,  1546,  1547,  1548,     4,     4,  1551,  1552,     5,
    2478,     5,   263,   218,   219,     5,     5,     5,  2486,  1563,
    1564,     4,  1566,  1567,   148,   273,     4,   232,   442,    66,
       5,  2499,     5,     5,     5,     5,  2504,     5,     4,     4,
    1911,     5,   236,    80,     5,   239,     4,   233,     5,     5,
     233,     5,    89,   105,   136,  1926,  1927,   233,    40,  1930,
     184,     5,    99,   105,   105,  1936,   271,  1938,   262,    19,
     207,   265,   237,  1617,  1618,   207,     5,    40,  1622,     4,
     207,     5,   276,  1627,  1628,     4,  1630,  1631,  1632,     5,
    1634,  1635,   129,  1637,    44,   207,  1640,  1641,     4,    12,
       5,     5,   226,     5,     5,  1649,     4,   110,   110,     5,
       5,   148,  1656,  1984,     5,     4,     6,     5,  1662,  1663,
       5,   535,    53,   247,     4,     4,  1670,    77,     5,     5,
       5,     5,  1676,     4,    84,     5,     5,     4,     4,    12,
      71,     5,     4,     4,    94,    95,     4,     4,     0,     5,
       4,   101,    38,   567,  2025,   192,    38,    88,   282,     5,
     136,   233,   233,   233,     4,   166,   193,   120,  1712,   100,
       4,    91,   203,   123,   298,     4,   241,     4,     4,    99,
       4,  1405,     5,     5,     5,   105,   117,  1411,     5,   139,
     121,   228,     5,     5,     4,  1739,  1740,     4,   233,     5,
    1744,   132,     4,   263,   154,   125,  1750,     4,     4,  1433,
       5,   161,  1436,     5,     5,   252,  1440,   233,   233,     4,
     301,     4,     4,     4,     4,     4,     4,     4,   148,     5,
       5,   181,     5,   301,   301,   220,   156,  1461,     5,   220,
     220,   172,     5,  1467,     4,   301,   220,     5,     5,     4,
       4,  1475,     4,   220,   291,  1479,   293,     5,     5,     4,
       4,     0,     5,  1487,  1488,     5,   216,     4,     6,     5,
       5,     4,   192,     5,  1498,    16,     4,     4,     4,     4,
     200,  2749,    23,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     5,     5,  1857,   264,  1859,     5,  1861,     5,  1863,
       5,   241,     5,     5,     5,   275,     5,     4,     4,   263,
       5,     5,   252,     5,     4,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,     4,     4,   267,     5,     5,
       5,     5,     4,     4,   304,    33,     5,     5,     5,     5,
    1904,     4,  1906,     4,  1908,     5,  2237,  2238,  2239,  1913,
     263,  2242,     5,  2244,  2245,     5,     5,  2248,     4,  2250,
       4,  1925,     5,     5,     5,   263,     5,     4,  1932,     4,
     297,     5,     5,     5,     5,     4,     4,   344,     5,  1943,
    1944,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,     4,
       4,  1955,  1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,     4,  1968,     4,  1970,  1971,  1972,     5,
       5,     5,     5,     5,     4,     4,   344,     5,   116,  2310,
       4,     4,  1986,     5,     5,     4,     4,   861,     4,     4,
     344,     5,  2647,     5,     4,    12,     4,   344,     5,     5,
       5,     5,     5,     5,     5,     5,     4,   953,     5,     5,
       4,     4,  2016,     5,     5,  2019,     5,  2021,     4,  2023,
       4,     4,  2026,     5,  2028,     5,     5,     5,     4,   344,
       5,  2035,  2036,     5,   235,     5,   237,     5,  2042,   985,
    2044,     4,     4,     4,  2048,     5,     4,  2051,   186,     4,
     188,   189,     4,   191,   192,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,   344,  2721,     4,   344,   344,
       4,     6,     5,     5,     4,   277,     5,     4,     4,   344,
       5,   219,     5,     4,     6,     5,     5,     5,     4,     4,
       4,     4,     4,     4,     4,     4,  2100,     4,   236,   237,
       4,   277,     5,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     4,     4,  2464,     5,     5,     5,     5,     5,     5,
       5,  2472,     4,     4,  1018,     5,     5,     4,  2655,     5,
     288,     4,  2198,     4,     4,   387,     5,     5,     4,     4,
       4,     4,   430,     5,     4,  2550,     5,     5,   306,     4,
       4,     4,  2269,     5,     5,     5,     4,  2645,     5,     5,
    2511,     5,     4,     4,  2721,     5,     5,  2717,    -1,  1873,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2204,    -1,    -1,    -1,    -1,    -1,  1080,    -1,   726,    -1,
      -1,    -1,    -1,  2217,  2218,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,    -1,  1909,    -1,    -1,    -1,  2233,
      -1,    -1,    -1,    -1,    -1,    -1,  2240,    -1,    -1,  2243,
    2730,  2731,    -1,    -1,    -1,  2249,    -1,    -1,  2252,  2253,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
    2274,  2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,    -1,  2287,   422,  2289,  2290,  2291,    -1,    -1,
      -1,   290,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,
      56,    -1,    -1,  2307,   442,    -1,    -1,  2311,    -1,    -1,
      -1,  2315,    -1,    -1,    -1,  2319,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1199,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,   347,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2369,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   511,    -1,    -1,   514,   515,    -1,    -1,
      -1,  1255,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   527,
    1336,  1337,  1338,    -1,   532,    -1,  1270,    -1,    -1,   155,
    1346,  1347,  1348,   541,   542,    -1,    -1,  1353,  1354,  1355,
      -1,    -1,  1358,  1359,    -1,  1361,  1362,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2442,    -1,
      -1,    -1,  2446,    -1,    -1,  1391,  1392,    -1,    -1,  1395,
    1396,    -1,  2456,  2457,    -1,   211,    -1,    -1,    -1,  2463,
     216,    -1,    -1,    -1,    -1,    -1,  2470,   605,   606,   607,
      -1,    -1,    -1,    -1,  2478,    -1,  2480,    -1,    -1,  2483,
    2484,    -1,  2486,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2499,    -1,    -1,  2502,  2503,
    2504,  2505,  2506,  2507,  2508,  2509,    -1,    -1,  2512,    -1,
     509,    -1,  2516,    -1,    -1,    -1,   272,   516,    -1,    -1,
     519,    -1,    -1,  2527,    -1,   524,   664,    -1,  2532,   528,
      -1,    -1,    -1,    -1,    -1,  1409,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2551,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,
      -1,    -1,  2586,    -1,    -1,    -1,    -1,    -1,  2592,   588,
    2594,    -1,    -1,    -1,  1468,    -1,  2600,  1471,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1481,    -1,  2613,
    2614,  2295,    -1,    -1,    -1,  1489,    -1,    -1,    -1,    -1,
      -1,    -1,  1496,    -1,    -1,    -1,    -1,  2631,  2632,    -1,
      -1,    -1,  2636,  2679,    -1,    -1,    -1,    -1,    -1,  2047,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2655,    -1,  2061,  2062,  2063,    -1,    -1,  2066,    -1,
    2068,  2069,    -1,    -1,  2072,  2073,  2074,    -1,    -1,  2077,
    2078,    -1,    -1,  2081,    -1,  2083,  2084,    -1,  2086,    -1,
    2684,    -1,    -1,    -1,    -1,   823,  2690,    -1,  2692,   688,
      -1,    -1,    -1,    -1,    -1,  2699,   695,   835,    -1,    -1,
    2704,     4,     5,    -1,    -1,  2709,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2730,  2731,    -1,    -1,
      -1,    -1,    -1,    -1,   872,   873,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2749,    -1,    -1,  2752,  2753,
      -1,    -1,  2756,  1627,  2758,  2759,    -1,    60,   896,    -1,
      -1,    -1,    -1,    66,    -1,    -1,  2770,  2771,  2772,  2773,
      73,    -1,    75,    -1,    -1,    -1,    -1,    80,    -1,  2783,
      83,    -1,  2786,    -1,    -1,    -1,    89,    -1,    -1,  2793,
      -1,  2795,  2200,    -1,    -1,  2203,    99,    -1,    -1,    -1,
    2208,    -1,   105,    -1,  2212,   943,    -1,    -1,  1754,    -1,
     113,    -1,    -1,  2817,  2498,  2819,    -1,    -1,  1692,    -1,
      -1,  1767,    22,   822,  2232,    -1,   129,    27,  1702,    -1,
     829,  1777,    -1,  1707,  2518,    -1,    -1,    -1,  2522,    -1,
      -1,    -1,    -1,    -1,    -1,   148,    -1,    -1,    48,    49,
      -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     163,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,    -1,    -1,    -1,    74,    75,   875,    -1,    -1,    -1,
    1018,   880,    82,    -1,   883,    85,    -1,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    40,    -1,   895,    -1,    -1,    -1,
      -1,    -1,   102,  1849,    -1,    -1,    -1,    -1,   108,   109,
     213,    -1,   112,    -1,    -1,  2323,    -1,    -1,    -1,    -1,
      66,    -1,    -1,   226,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,  1070,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,  1080,   246,    -1,  2353,    -1,    -1,    -1,   252,
      -1,    -1,    -1,    99,   965,    -1,   259,    -1,    -1,   105,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
     170,    -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,    -1,    -1,    -1,   290,   291,    -1,
     293,    -1,    -1,    -1,   993,    -1,    -1,    -1,  1872,    -1,
      -1,  1875,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,   222,    -1,    -1,    -1,    -1,   227,    -1,  2437,
     333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   242,    -1,  1182,    -1,   192,    -1,    -1,    -1,
    2458,   251,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2468,  1199,    -1,    -1,    -1,    -1,  2474,  2475,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,   279,
      -1,  2765,   228,    -1,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    -1,  1232,   241,    -1,    -1,    -1,   299,
      -1,    -1,    -1,    -1,    -1,  1243,   252,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,  1270,   279,    -1,    -1,    93,  1275,    95,    -1,
      -1,    -1,    -1,   343,    -1,   291,    -1,   293,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2110,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2052,  2587,
      -1,    -1,   139,    -1,    -1,    -1,    -1,   333,  1187,    -1,
      -1,    -1,    -1,   150,   151,    -1,    -1,   154,    -1,  2607,
      -1,   158,    -1,   160,  2150,  2151,  2152,  2153,  2154,    -1,
    2156,  2157,    -1,    -1,    -1,  2161,  2162,  2163,  2164,  2165,
      -1,  2167,  2168,  2097,   181,   182,    -1,  1226,   185,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,
      -1,    -1,  1241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   209,   210,    -1,    -1,    -1,    -1,    -1,    -1,
     217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1409,    -1,  2681,    -1,  2683,    -1,  2685,    -1,  2687,
      -1,  2689,   239,  2691,   241,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1439,    -1,    -1,    -1,    -1,    -1,   264,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   280,   281,    -1,    -1,    -1,  2202,    -1,
    1468,  2739,   289,  1471,    -1,    -1,    -1,    -1,    -1,   296,
      -1,  1352,    -1,  1481,  1482,   302,    -1,   304,    -1,    -1,
      -1,  1489,    -1,  1364,    -1,    -1,    -1,  2231,  1496,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2241,    -1,    -1,
      -1,  1382,  1383,  2247,    -1,    -1,    -1,    -1,    -1,  2787,
      -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1536,    -1,
      -1,  1539,  1540,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2372,    -1,    -1,  2375,
    2376,  2377,  2378,  2379,    -1,  2381,  2382,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2393,  2394,  2395,
    2396,  2397,    -1,  2399,  2400,    -1,  2402,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2412,  2413,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2423,  1477,    -1,
      -1,    -1,  1620,    -1,    -1,    -1,    -1,    -1,    -1,  1627,
      -1,    -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,  1645,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1661,    -1,    -1,    -1,    -1,   125,    -1,
      -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,  1537,    -1,
      -1,    -1,  1680,    -1,  1543,    -1,    -1,  1685,    -1,    -1,
    1688,   148,  1690,  1691,  1692,  1693,    -1,    -1,  1696,   156,
      -1,  1699,  2436,    -1,  1702,  1703,    -1,  1705,  1706,  1707,
    1708,    -1,  1710,  1711,    -1,    -1,    -1,    -1,  1716,  1717,
    1718,    -1,  1720,  1721,    -1,    -1,    -1,    -1,  1726,  1727,
      -1,    -1,    -1,  1731,    -1,   192,    -1,    -1,  1736,    -1,
      -1,    -1,    -1,   200,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2562,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1623,    -1,    -1,  2573,    -1,  2575,
    1629,    -1,    -1,  2579,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   241,    -1,    -1,     4,    -1,    -1,
      -1,    -1,    -1,    -1,  1653,   252,    -1,    -1,    -1,    -1,
      -1,  1660,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     277,    -1,   279,    40,    -1,    -1,    -1,  1686,    -1,    -1,
      -1,    -1,     3,     4,    -1,  1694,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2590,    -1,  1856,    -1,
      -1,    -1,  1860,  2669,  2598,    -1,  2672,    -1,    -1,  2675,
      -1,  2677,    -1,    -1,  1872,    -1,   333,  1875,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,  1773,    -1,    -1,    -1,    -1,  1905,    -1,    -1,
    1781,  1782,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1796,  1797,    -1,    -1,    -1,
     101,    -1,    -1,    -1,    -1,    -1,  1807,  1808,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1818,  1819,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1828,  1829,    -1,
      -1,    -1,    -1,  1834,    -1,    -1,    -1,    -1,  1966,    -1,
      -1,    -1,    -1,  1844,   191,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   199,    -1,   155,    -1,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,   211,  1854,    -1,    -1,    -1,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2744,    -1,    -1,    -1,    -1,    -1,    -1,  1876,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     211,  2039,    -1,  2777,    -1,   216,  2780,    -1,    -1,    -1,
      -1,  1910,    -1,  1912,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
    1929,   288,  1931,    -1,    -1,    -1,  1935,    -1,  1937,    -1,
      -1,    -1,  2080,    19,    -1,    -1,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    -1,    -1,    -1,  1977,    -1,
     337,  1980,  1981,    -1,   341,   342,    -1,    -1,    -1,    -1,
    1989,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    -1,    -1,  2022,    -1,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2038,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2059,    -1,    -1,    -1,  2202,  2064,    -1,  2205,    -1,    -1,
      -1,  2070,    -1,    -1,    -1,    -1,  2075,  2215,    -1,   155,
    2079,    -1,    -1,  2082,    -1,    -1,  2085,    -1,  2087,    -1,
      -1,    -1,    -1,  2231,  2093,    -1,  2234,    -1,    -1,    -1,
    2111,    -1,    -1,  2241,    -1,    -1,    -1,    -1,  2246,  2247,
    2121,    -1,    -1,    -1,  2125,  2126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2134,  2135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2143,  2144,    -1,    -1,    -1,    -1,  2149,    -1,
     216,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2159,  2160,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2170,
    2171,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,
    2181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2190,
      -1,  2192,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2334,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,  2363,    -1,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2436,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2477,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2383,    -1,   211,    -1,    -1,    -1,    -1,   216,
      -1,  2392,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2401,    -1,    -1,    -1,    -1,    -1,    -1,  2408,    -1,    -1,
      -1,  2539,    -1,    -1,    -1,    -1,    -1,    -1,  2419,    -1,
    2548,    -1,    -1,    -1,  2425,    -1,    -1,  2428,    -1,    -1,
    2431,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2434,    -1,    -1,    -1,    -1,
      -1,    -1,  2441,    -1,    -1,    -1,  2445,    -1,    -1,    -1,
      -1,    -1,  2590,  2591,    -1,  2593,    -1,    -1,    -1,    -1,
    2598,  2599,    -1,  2462,    -1,  2603,    -1,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    -1,    -1,    -1,    -1,  2637,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2659,    -1,    -1,    -1,    -1,  2664,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2559,    -1,
      -1,    -1,  2563,    41,    -1,    -1,    44,    -1,    46,  2570,
      -1,    -1,    -1,    -1,    -1,  2576,    -1,    -1,    -1,  2580,
      -1,    59,  2583,    -1,    -1,    -1,    64,    65,    -1,    67,
      68,    69,    -1,    19,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      -1,    -1,    -1,    -1,    -1,    -1,  2744,    95,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2619,    -1,    -1,  2761,    -1,    -1,    -1,    -1,    -1,    65,
      66,    -1,    -1,    69,    -1,    -1,   124,    -1,    -1,  2777,
      -1,    -1,  2780,    -1,    18,    19,    -1,   135,    -1,    -1,
      -1,   139,    -1,    -1,   142,    91,    -1,    -1,    -1,   147,
     148,    -1,    -1,    -1,    -1,   101,   154,    -1,    -1,    -1,
      -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,   173,    -1,    -1,   176,   177,
     178,    -1,    -1,   181,   182,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2713,    -1,    -1,    -1,    -1,   155,
      -1,   209,   210,   211,    -1,    -1,    -1,   101,    -1,    -1,
      -1,   167,    -1,  2732,  2733,   223,    -1,    -1,    -1,    -1,
     114,    -1,    -1,   231,    -1,    -1,   234,    -1,   184,   237,
      -1,   239,    -1,   241,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   203,    -1,    -1,
      -1,   259,    -1,    -1,    -1,    -1,   264,    -1,    -1,  2778,
     216,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   280,   281,    -1,    -1,    -1,    -1,    -1,    -1,
    2799,    -1,    -1,  2802,   292,    -1,   294,    -1,    -1,    -1,
      -1,    -1,   300,    -1,    -1,   303,   304,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   216,    -1,    -1,    -1,   334,    -1,    -1,    -1,
      -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    -1,   333,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      52,    -1,    -1,    55,    -1,    -1,    -1,    48,    49,    -1,
      62,    52,    19,    -1,    66,    -1,    -1,    -1,    59,    -1,
      -1,    62,    74,    75,    -1,    66,    -1,    -1,    -1,    -1,
      82,    83,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    99,    -1,    56,
      -1,    -1,    -1,   105,    -1,    -1,   108,   109,    -1,    -1,
     112,    -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    19,
      -1,   112,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,
      -1,    -1,    -1,    -1,   101,    -1,   148,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,   170,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,   179,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   220,    -1,
     222,    -1,    -1,    -1,    -1,   227,   228,    -1,    -1,   220,
     101,   222,    -1,    -1,    -1,    -1,   227,   228,    -1,   241,
     242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   251,
     252,   242,    -1,    -1,   211,   155,    -1,    -1,    -1,   216,
     101,   252,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   277,    -1,   279,    -1,    -1,
      -1,    -1,    -1,    -1,   155,    -1,   277,    -1,   279,   291,
      -1,   293,    -1,    -1,    -1,    -1,    -1,   299,   289,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,
      -1,    -1,    -1,    -1,   155,    -1,   216,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   333,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   333,    -1,    -1,   216,    -1,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   216,    -1,   155,    -1,    -1,
      -1,   281,   160,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   160,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    -1,    -1,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332
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
     205,   206,   212,   214,   239,   304,   348,   142,   409,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   123,   139,   150,   151,   154,   158,
     160,   181,   182,   185,   194,   209,   210,   217,   239,   241,
     264,   280,   281,   289,   296,   302,   304,   340,   410,    83,
      99,   452,    19,    44,    77,    84,    94,    95,   101,   123,
     139,   154,   161,   181,   216,   264,   275,   304,   455,   349,
      88,   115,   183,   197,   253,   294,   304,   461,    16,    26,
     111,   123,   157,   202,   215,   464,   225,   482,     5,    66,
      88,   137,   294,   340,   349,   483,     5,   484,    20,    57,
     221,   234,   295,   500,    64,    66,   180,   284,   519,    66,
     200,   336,   341,   343,   520,    39,   191,   226,   285,   347,
     357,   359,   521,     5,   294,   304,   349,   524,    70,   167,
     238,   247,   525,    88,   500,    61,   275,   298,   532,   191,
     285,   347,   533,    26,   111,   123,   202,   215,   535,    50,
      99,   134,   287,   550,   551,     4,    37,    47,    74,   148,
     184,   226,   247,   282,   298,   373,     4,   123,   201,   552,
     285,   347,   554,    16,    23,   235,   237,   358,   555,   225,
     559,   285,   347,   560,     0,    22,    48,    49,    62,   108,
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
     411,   117,   413,   185,   190,   226,   250,   295,   338,   339,
     347,   399,   414,   277,   417,   167,   418,   167,   175,   420,
      65,    66,    69,    91,   167,   184,   203,   264,   333,   357,
     422,   347,   359,   425,    59,   281,   357,   426,   272,   357,
     359,   427,    33,   428,   357,   359,   429,     4,   357,   359,
     430,    45,    59,    81,   100,   116,   119,   144,   145,   196,
     204,   261,   262,   333,   434,   208,   297,   440,     5,    89,
       6,    88,   119,   432,     5,    65,   359,   431,    16,   500,
      66,   180,   284,   441,    66,   226,   442,   276,    61,   275,
     298,   443,   132,   233,   444,    37,    47,    74,   148,   184,
     247,   298,   445,   359,    89,    16,   193,   450,   357,   453,
      72,   456,    31,   457,    44,    87,   189,   458,   148,   213,
     252,   290,   459,   357,    18,    58,   114,   281,   357,   460,
       4,   190,   463,     5,     4,     6,   119,   347,     4,     5,
     239,   465,     5,   467,     5,   116,   189,   239,   262,   468,
      93,   110,   185,   481,     5,   479,     5,   262,   480,     4,
       5,   349,   349,   347,   347,     5,     4,     5,    60,    66,
      73,    75,    80,    83,    89,    99,   105,   113,   129,   148,
     163,   172,   173,   192,   213,   226,   228,   241,   246,   252,
     259,   277,   290,   291,   293,   333,   485,     5,     4,   347,
       5,   347,    40,   110,   347,   523,   349,   347,   357,   359,
     522,   347,   362,   347,     4,   358,    54,    90,   138,   239,
     526,     4,     4,   347,   148,   252,   527,     5,   357,     4,
      40,   110,   347,   534,   347,    97,    61,   119,   239,   265,
     536,   119,   549,    61,   116,   119,   155,   189,   236,   239,
     262,   265,   276,   538,   539,    61,   119,   265,   548,     5,
       4,    34,   107,   200,   531,    66,   349,   374,    66,   349,
     375,    66,   349,   376,    13,   186,   530,   347,   347,    40,
     110,   191,   220,   347,   377,   347,   262,     4,   347,   347,
       4,   558,     4,   279,   556,     4,   279,   557,     4,   362,
     122,   347,   561,   347,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,     4,     5,   347,    12,   347,   347,
     347,    30,    94,   161,   243,   248,   361,   361,     4,   347,
     347,     4,     4,     4,   347,   347,   347,   347,     4,     4,
       5,     5,   357,     5,   347,   347,   353,   355,   355,   357,
     347,   347,   347,   347,   347,   347,   347,   357,   359,   356,
     347,   347,   356,   347,     5,   261,   103,   185,   412,   190,
     243,   415,   167,    78,   170,   243,   416,   136,   174,   400,
     400,     4,   419,     4,   421,   190,   250,   423,   175,   424,
     167,   362,   347,   357,   347,   357,   357,   362,   362,   362,
     357,   362,   347,   357,     4,   437,     4,   359,   435,   193,
       4,   164,   304,   436,   193,   357,     4,   357,   439,     5,
       5,     4,   193,   347,     4,     5,    60,    66,   113,   129,
     141,   147,   148,   153,   203,   222,   226,   228,   251,   252,
     259,   277,   333,   494,   359,    66,   446,    66,   447,    66,
     448,   220,   449,   347,     5,   221,   451,   358,   362,     5,
     357,   357,   357,     4,   349,     4,     4,   193,   347,    14,
      15,    61,   187,   188,   256,   265,   266,   297,    87,     5,
       5,    14,    15,    61,   187,   188,   256,   265,   266,   270,
     297,    87,   155,   160,   358,   471,   475,    87,   155,     5,
     469,     4,     4,    14,    61,   187,   256,   265,   297,     5,
       5,     4,   347,   358,    20,    21,    22,    48,    49,    52,
      55,    62,    66,    74,    75,    82,    83,    99,   105,   108,
     109,   112,   129,   148,   170,   192,   220,   222,   227,   228,
     241,   242,   251,   252,   277,   279,   291,   293,   299,   333,
      66,    80,    89,    99,   129,   148,   192,   228,   252,   291,
     293,     4,    30,   159,   208,   233,   488,     5,    63,   104,
     230,   244,   245,   335,   336,   493,    99,   486,    17,    40,
     110,   191,   492,     4,     5,    17,   207,   286,   347,   252,
     493,   501,   123,   493,   502,    36,    40,   110,   130,   191,
     285,   347,   503,   357,   349,    91,    99,   105,   125,   148,
     156,   192,   200,   241,   252,   267,   506,    40,   110,   191,
       5,   278,    17,   207,   286,   510,   279,   349,   511,     5,
      99,   105,   294,    17,    17,     4,   347,   347,   347,   347,
     347,   362,   347,   347,   356,   347,     4,   362,    40,   110,
     191,   257,   528,    40,   110,   191,   257,   529,     4,    97,
       5,     5,    87,     4,     5,     5,    87,     5,   539,    61,
     119,   155,   265,   543,    61,   119,   265,   547,    87,   155,
      61,   119,   265,   541,     4,    61,   119,   265,   540,     5,
       5,     4,     5,     5,     5,   347,   347,   347,   347,   347,
     347,     4,   347,   553,   347,   347,     6,   358,     4,     5,
       4,     4,     5,     4,    97,   254,   363,   347,   347,    12,
     347,   347,   347,   347,   347,   347,   347,   347,   347,     5,
      12,   347,   347,    12,     4,    12,     4,     4,   347,   347,
     347,     4,   349,     4,     4,   362,   357,   362,   347,   347,
     347,   357,   347,   356,   347,   347,     5,     5,   347,   359,
     347,   357,   357,   347,   362,   363,   363,   363,   362,   356,
     347,   362,   347,   131,   240,   350,   438,   164,     5,     4,
     362,   357,     4,     5,     4,     4,   347,   433,   347,    20,
      21,    22,    48,    49,    52,    59,    62,    66,    74,    75,
      82,   108,   109,   112,   129,   148,   170,   179,   220,   222,
     227,   228,   242,   252,   277,   279,   289,   299,   333,    66,
     129,   153,   228,   277,    30,   159,   208,   233,   495,   347,
      20,   203,   347,   496,    17,   347,   251,   506,   251,   203,
     347,   497,   279,   498,    17,    98,   347,   347,     5,   363,
      56,   357,     4,     5,   462,   347,     5,     5,     5,   155,
     182,   367,   367,   163,   258,   365,     4,     4,     5,     5,
     466,   263,   263,     5,     5,     5,    17,   157,   366,   366,
     365,     4,     4,   365,     5,     5,   470,   160,   332,   358,
     474,     5,   473,     5,     5,   477,     5,   478,     5,    14,
      15,    61,   187,   188,   256,   265,   266,   270,   297,     4,
       4,     5,     5,   367,   365,     4,     5,     5,   362,    82,
     150,   218,   219,   232,   271,   370,     7,     8,   347,   352,
     233,   120,   233,   233,   105,    40,    66,    99,   105,   110,
     129,   148,   163,   192,   228,   241,   252,   279,   291,   293,
     294,   333,   487,   120,   233,     5,    27,   165,   233,   275,
     136,   105,    22,    49,    52,    82,   109,   112,   222,   251,
      22,    49,    52,    55,    82,   109,   112,   222,   251,   277,
      40,   120,   233,   233,   105,     5,   207,    27,   220,    36,
     130,   285,   347,   255,   261,   120,   237,   357,   359,   506,
      40,   220,   275,   237,   207,     5,     5,   241,    27,   220,
       4,     5,     5,   207,    36,   130,   285,   347,   506,   207,
     349,     4,     4,   347,     5,   297,    22,    27,    48,    49,
      51,    52,    62,    74,    75,    82,    85,   102,   108,   109,
     112,   170,   222,   227,   242,   251,   278,   279,   299,   343,
     489,   347,   347,   347,   347,   347,   493,   357,     5,     4,
       5,   347,   347,   357,   359,   347,   349,   347,   347,   493,
       5,   347,   347,   349,     5,    17,     5,     5,   347,   347,
     356,   347,   347,   347,   347,   110,   347,   347,   110,     4,
      42,    43,   168,   169,   195,   372,   372,    61,   119,   265,
     537,   372,     5,    61,   119,   265,   542,     5,     5,    61,
     119,   265,   544,     4,     5,     5,     4,    61,   119,   265,
     546,    61,   119,   265,   545,     5,     5,     4,     5,     5,
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
     166,   220,   166,   255,   261,   120,   166,   220,   283,   506,
     166,   220,   275,     4,   241,    27,   166,   220,   506,   203,
     347,    82,   150,   218,   219,   232,   271,   347,   347,   347,
     347,   347,   193,   347,   347,    20,   229,   454,     4,     4,
     347,   367,   367,   367,     4,   367,   367,   367,    14,    15,
      61,   187,   188,   256,   265,   266,   297,   366,   367,   367,
     367,   367,   367,     4,   367,   367,     4,   366,    14,    15,
      61,   187,   188,   256,   265,   266,   297,     5,   472,     5,
     476,     5,     5,    14,    15,    61,   187,   188,   256,   265,
     266,   270,   297,     5,    14,    15,    61,   187,   188,   256,
     265,   266,   270,   297,     5,    14,    15,    61,   187,   188,
     256,   265,   266,   270,   297,    14,    15,    61,   187,   188,
     256,   265,   266,   297,   263,     5,     5,     5,   366,   366,
     365,     4,     4,   365,     5,     4,     4,   367,   367,     4,
     367,   367,     5,   349,   357,   359,     5,   347,   349,   347,
       5,   347,     5,   352,   105,   192,   241,   105,   192,   241,
       5,   349,   347,   349,     5,   347,   357,   349,     5,   352,
     233,   233,    21,   233,    21,   233,   233,    21,   233,   301,
     301,     4,     4,     4,   487,     4,     4,     4,   301,   301,
       4,     5,     4,   349,   347,     5,   347,     5,   352,   349,
     357,   359,   357,   359,   347,    27,    48,    51,    62,    85,
     102,   343,   368,     4,   349,   347,   362,   356,   349,   357,
     359,   357,   347,   349,   349,   357,   359,   357,   359,   347,
     349,   347,     5,   347,   220,   220,   347,   347,   220,   347,
     220,   347,   347,   499,   507,   347,   220,   220,   347,   347,
     347,   347,   347,   347,   347,   347,     5,   297,   347,   490,
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
     347,   347,    55,    66,    92,   129,   277,   279,   333,   504,
     505,   506,   517,   518,   347,   347,   347,   347,   347,   347,
     347,   347,   347,   347,   347,   347,   357,     5,   347,   347,
     347,   347,     4,     4,   362,   363,     4,   491,   362,   362,
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
     344,   344,   344,   344,   344,   344,   344,   505,   344,   352,
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
       4,   369,   369,   347,   347,   369,   352,   369,   507,   357,
     487,     5,     4,     5,     5,     5,     4,   349,   352,   369,
     369,   347,   347,   352,   347,   347,   347,   347,   347,   356,
     347,     5,   507,   347,   369,   349,   508,   509,     5,   349,
       5,   347,     5,     4,     6,   347,    32,   274,   408,     5,
      32,   274,   371,   357,     5,   371,   357,   408,   347,   366,
     367,   366,   366,   367,   367,   366,   367,   366,   366,   347,
     364,   357,   359,   357,   347,   357,   347,   357,   359,   357,
     347,   357,   364,     4,   507,   507,   351,   347,   507,     4,
     507,   362,     5,     4,     4,   507,   507,   351,   347,     4,
     507,   507,   347,   357,   507,   507,   507,   508,   514,   515,
     506,   512,   513,     5,     5,     6,     4,   185,   295,   339,
     347,   399,   357,   357,     4,   367,   367,   367,   367,   358,
     364,   364,   347,   364,     4,   364,   364,   347,   364,   347,
     507,   507,     4,   347,   507,     5,   347,   507,     4,   347,
     507,   362,   514,   516,   517,   344,   513,     5,     5,     4,
     347,   400,   347,   400,   362,   362,   364,     4,   357,   359,
       4,   352,   351,   347,   347,   351,   347,   357,   517,   349,
       5,     5,   347,   347,   347,   347,   371,   371,     5,   357,
     359,   362,   357,   359,   507,   347,     4,   507,   347,   364,
       5,     5,   347,     5,   347,   362,   362,     4,   507,     4,
     507,     5,     5,   351,   351,   507,   507
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
#line 911 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 916 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 295:
#line 920 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 296:
#line 923 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 297:
#line 924 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 298:
#line 927 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 928 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 930 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 301:
#line 936 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 302:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 303:
#line 938 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 304:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 305:
#line 942 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 306:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 307:
#line 946 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 308:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 309:
#line 950 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 310:
#line 951 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 955 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 312:
#line 957 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 960 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 314:
#line 962 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 315:
#line 965 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 317:
#line 967 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 968 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 969 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 320:
#line 972 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 321:
#line 973 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 322:
#line 974 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 975 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 976 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 325:
#line 980 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 326:
#line 982 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 984 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 329:
#line 987 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 330:
#line 989 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 331:
#line 991 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 332:
#line 993 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 996 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 334:
#line 999 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 336:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 337:
#line 1004 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1007 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 352:
#line 1021 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 355:
#line 1024 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1026 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1029 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 360:
#line 1030 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 363:
#line 1033 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 364:
#line 1034 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 366:
#line 1037 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 368:
#line 1039 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 370:
#line 1041 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 372:
#line 1043 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 373:
#line 1045 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 374:
#line 1047 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 376:
#line 1049 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 377:
#line 1052 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 378:
#line 1053 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 379:
#line 1054 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 380:
#line 1055 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 381:
#line 1056 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 382:
#line 1057 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 384:
#line 1059 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 385:
#line 1062 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 386:
#line 1063 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 387:
#line 1064 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 388:
#line 1067 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 389:
#line 1070 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 390:
#line 1072 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 391:
#line 1074 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 392:
#line 1075 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 393:
#line 1076 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 395:
#line 1078 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 397:
#line 1081 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 398:
#line 1087 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 399:
#line 1088 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 400:
#line 1091 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 401:
#line 1092 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 402:
#line 1093 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 403:
#line 1096 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 404:
#line 1097 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 406:
#line 1103 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 407:
#line 1105 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 408:
#line 1107 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 409:
#line 1110 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 411:
#line 1112 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 412:
#line 1116 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 413:
#line 1120 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 415:
#line 1122 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 416:
#line 1123 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 417:
#line 1124 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 418:
#line 1125 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 419:
#line 1126 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 421:
#line 1128 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 422:
#line 1129 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 423:
#line 1132 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 424:
#line 1133 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 425:
#line 1134 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 426:
#line 1137 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 427:
#line 1138 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 428:
#line 1142 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1144 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 430:
#line 1150 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 431:
#line 1154 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1156 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 433:
#line 1157 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1160 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 435:
#line 1162 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 437:
#line 1166 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 438:
#line 1169 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1171 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1175 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 441:
#line 1177 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 442:
#line 1180 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 443:
#line 1184 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 444:
#line 1185 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 445:
#line 1187 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 446:
#line 1190 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 447:
#line 1191 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 449:
#line 1195 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 450:
#line 1196 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1197 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 452:
#line 1200 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 453:
#line 1202 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1203 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 456:
#line 1205 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 460:
#line 1209 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 461:
#line 1210 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 462:
#line 1211 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 463:
#line 1213 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyDist)(yyvsp[(4) - (4)].integer));;}
    break;

  case 465:
#line 1215 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 466:
#line 1218 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1220 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 468:
#line 1222 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 470:
#line 1224 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 471:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 472:
#line 1228 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 473:
#line 1229 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1233 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1235 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 476:
#line 1238 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 477:
#line 1241 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 478:
#line 1242 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 481:
#line 1247 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 482:
#line 1248 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 483:
#line 1249 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 484:
#line 1252 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 485:
#line 1253 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 486:
#line 1254 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1257 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 488:
#line 1260 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 489:
#line 1261 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 490:
#line 1262 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 491:
#line 1265 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 492:
#line 1266 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 497:
#line 1273 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 498:
#line 1274 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 499:
#line 1275 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 500:
#line 1278 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 501:
#line 1279 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 502:
#line 1282 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 503:
#line 1283 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 504:
#line 1286 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 505:
#line 1287 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 506:
#line 1290 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 507:
#line 1291 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 508:
#line 1294 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 510:
#line 1296 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1299 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 512:
#line 1300 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 514:
#line 1304 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 515:
#line 1308 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 516:
#line 1311 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 517:
#line 1318 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 518:
#line 1319 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 519:
#line 1322 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 522:
#line 1325 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 523:
#line 1326 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 524:
#line 1327 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 525:
#line 1328 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 527:
#line 1330 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 528:
#line 1331 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 529:
#line 1332 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 531:
#line 1334 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 532:
#line 1335 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 533:
#line 1336 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1340 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 536:
#line 1343 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 537:
#line 1344 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 538:
#line 1347 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 539:
#line 1348 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 540:
#line 1349 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 541:
#line 1350 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 542:
#line 1353 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 543:
#line 1354 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 544:
#line 1355 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 545:
#line 1356 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 546:
#line 1359 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 547:
#line 1360 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 548:
#line 1361 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1362 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 550:
#line 1363 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 551:
#line 1366 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 552:
#line 1367 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 553:
#line 1368 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 556:
#line 1372 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 557:
#line 1373 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 558:
#line 1376 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 559:
#line 1379 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 560:
#line 1380 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 561:
#line 1384 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 562:
#line 1386 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 563:
#line 1387 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 570:
#line 1399 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 571:
#line 1401 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1403 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1404 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 574:
#line 1406 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 575:
#line 1408 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 576:
#line 1410 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 577:
#line 1412 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1414 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 580:
#line 1418 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 581:
#line 1419 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 584:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 585:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 586:
#line 1425 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 587:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1430 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 590:
#line 1434 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 591:
#line 1436 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1438 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1440 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1442 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 595:
#line 1444 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 596:
#line 1446 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 598:
#line 1451 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 599:
#line 1453 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1455 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 606:
#line 1463 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 607:
#line 1464 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1465 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1466 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1467 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 611:
#line 1468 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 612:
#line 1470 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 613:
#line 1472 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 614:
#line 1473 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 615:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1475 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 617:
#line 1478 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 618:
#line 1479 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 623:
#line 1485 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 624:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 631:
#line 1498 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 632:
#line 1501 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1504 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1507 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1510 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1513 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 637:
#line 1516 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 638:
#line 1519 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1522 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 640:
#line 1527 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 641:
#line 1530 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1533 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1536 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1539 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 645:
#line 1542 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1545 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 647:
#line 1548 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 648:
#line 1551 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 649:
#line 1554 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1557 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 651:
#line 1562 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1565 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1568 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1571 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1574 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1577 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 657:
#line 1580 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 658:
#line 1583 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1586 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 660:
#line 1591 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 661:
#line 1594 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1597 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1600 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1603 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 665:
#line 1606 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 666:
#line 1609 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 667:
#line 1612 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 668:
#line 1615 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 669:
#line 1618 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1621 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 671:
#line 1626 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 672:
#line 1627 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 677:
#line 1633 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 678:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 680:
#line 1637 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 681:
#line 1638 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1639 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1640 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1641 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 685:
#line 1642 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 687:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 688:
#line 1647 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 691:
#line 1652 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1653 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1654 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1655 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1656 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1658 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 697:
#line 1659 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 700:
#line 1665 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 701:
#line 1667 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1668 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 703:
#line 1670 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 704:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 705:
#line 1674 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1677 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 707:
#line 1678 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 708:
#line 1681 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 709:
#line 1682 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 710:
#line 1683 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 711:
#line 1686 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 712:
#line 1693 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 713:
#line 1694 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 714:
#line 1695 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 715:
#line 1696 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 716:
#line 1697 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 717:
#line 1698 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 718:
#line 1699 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 719:
#line 1703 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::SkyDist)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 721:
#line 1711 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 722:
#line 1712 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 723:
#line 1714 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 724:
#line 1716 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 725:
#line 1717 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 726:
#line 1718 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 728:
#line 1719 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 729:
#line 1720 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 730:
#line 1721 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 732:
#line 1723 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 733:
#line 1724 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 734:
#line 1726 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 735:
#line 1728 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 736:
#line 1730 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 737:
#line 1733 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 738:
#line 1735 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 739:
#line 1736 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 740:
#line 1738 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1741 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 742:
#line 1743 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 743:
#line 1746 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 744:
#line 1748 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 745:
#line 1750 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 746:
#line 1754 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 747:
#line 1757 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 748:
#line 1760 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1762 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 750:
#line 1765 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 751:
#line 1769 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 752:
#line 1773 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 753:
#line 1778 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 754:
#line 1782 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 755:
#line 1783 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 756:
#line 1785 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1787 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 758:
#line 1788 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 759:
#line 1790 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1792 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 761:
#line 1794 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 762:
#line 1796 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1799 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 765:
#line 1801 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 766:
#line 1803 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 767:
#line 1806 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 768:
#line 1810 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 769:
#line 1814 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 770:
#line 1816 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1818 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1820 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1822 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 781:
#line 1838 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 782:
#line 1840 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1841 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1847 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1849 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1851 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1852 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 791:
#line 1853 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 792:
#line 1854 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 793:
#line 1856 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1857 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1859 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 796:
#line 1861 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 797:
#line 1865 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 798:
#line 1869 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 799:
#line 1872 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 800:
#line 1875 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 801:
#line 1879 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 802:
#line 1883 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 803:
#line 1888 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 804:
#line 1892 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 805:
#line 1893 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 806:
#line 1894 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 807:
#line 1896 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 808:
#line 1898 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 810:
#line 1904 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 811:
#line 1905 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 812:
#line 1906 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 814:
#line 1910 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 815:
#line 1913 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 816:
#line 1915 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 817:
#line 1918 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 818:
#line 1920 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 819:
#line 1923 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 820:
#line 1924 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 823:
#line 1932 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 824:
#line 1936 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 825:
#line 1938 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 826:
#line 1940 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 827:
#line 1943 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 828:
#line 1946 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 829:
#line 1949 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 830:
#line 1950 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 831:
#line 1952 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 832:
#line 1953 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1954 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 834:
#line 1956 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 835:
#line 1957 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1959 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 837:
#line 1961 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 838:
#line 1964 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 839:
#line 1967 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 841:
#line 1970 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 845:
#line 1975 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 852:
#line 1986 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 855:
#line 1991 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1992 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 857:
#line 1993 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 1994 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 1995 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 860:
#line 1996 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 861:
#line 1997 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 862:
#line 1998 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 863:
#line 1999 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 864:
#line 2000 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2002 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 866:
#line 2004 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 867:
#line 2006 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2007 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 869:
#line 2008 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 870:
#line 2009 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 871:
#line 2010 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2012 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 873:
#line 2013 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 874:
#line 2014 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 875:
#line 2015 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 876:
#line 2016 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 877:
#line 2018 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 878:
#line 2019 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 879:
#line 2020 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 880:
#line 2021 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 881:
#line 2022 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 882:
#line 2023 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 883:
#line 2026 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 884:
#line 2027 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 885:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 886:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 887:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 888:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 889:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 890:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 891:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 892:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 893:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 894:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 895:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 896:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 897:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 898:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 899:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 900:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 901:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 902:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 903:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 904:
#line 2049 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 905:
#line 2050 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 906:
#line 2051 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2052 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 908:
#line 2053 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 909:
#line 2055 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 910:
#line 2065 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 911:
#line 2073 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2082 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2090 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2097 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2104 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2112 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2120 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2125 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2130 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2135 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2140 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2145 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2150 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2155 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2164 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2173 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2183 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2192 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2200 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2210 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2220 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2230 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2242 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2251 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 936:
#line 2259 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 937:
#line 2261 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 938:
#line 2263 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 939:
#line 2268 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 940:
#line 2271 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 941:
#line 2275 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 942:
#line 2277 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2278 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 944:
#line 2281 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 945:
#line 2282 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 946:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 947:
#line 2284 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 948:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 949:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 950:
#line 2287 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 952:
#line 2291 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 953:
#line 2292 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 954:
#line 2293 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 955:
#line 2294 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 956:
#line 2295 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 957:
#line 2298 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 958:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 959:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 960:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 961:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 963:
#line 2311 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 964:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 965:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 966:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 967:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 968:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 969:
#line 2323 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 970:
#line 2324 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 971:
#line 2325 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 972:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 973:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 974:
#line 2331 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 975:
#line 2333 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 976:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2336 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 978:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 979:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 980:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2344 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 983:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 984:
#line 2349 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 985:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 986:
#line 2351 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 988:
#line 2354 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 989:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 992:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 993:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2362 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 995:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 996:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 998:
#line 2369 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 999:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1000:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2374 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1002:
#line 2375 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2376 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1004:
#line 2378 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1005:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1006:
#line 2383 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2386 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1008:
#line 2387 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2388 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2390 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1011:
#line 2393 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1012:
#line 2396 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2397 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1014:
#line 2398 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1015:
#line 2400 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1016:
#line 2402 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1017:
#line 2404 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1018:
#line 2405 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1019:
#line 2407 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2408 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1021:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1022:
#line 2410 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1023:
#line 2411 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1024:
#line 2413 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1025:
#line 2415 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1027:
#line 2419 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2421 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1030:
#line 2422 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1031:
#line 2424 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1032:
#line 2426 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1033:
#line 2427 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1034:
#line 2428 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1036:
#line 2430 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1038:
#line 2434 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1039:
#line 2435 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2436 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2437 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1042:
#line 2438 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1043:
#line 2439 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1044:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1045:
#line 2442 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1046:
#line 2444 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1047:
#line 2447 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1048:
#line 2448 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1049:
#line 2449 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1050:
#line 2450 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1051:
#line 2453 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1052:
#line 2454 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1053:
#line 2457 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1054:
#line 2458 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1055:
#line 2461 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1056:
#line 2462 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1057:
#line 2465 "frame/parser.Y"
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

  case 1058:
#line 2478 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1059:
#line 2479 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1060:
#line 2483 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1061:
#line 2484 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1062:
#line 2488 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1063:
#line 2489 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1064:
#line 2494 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1065:
#line 2499 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1066:
#line 2505 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1068:
#line 2510 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1069:
#line 2512 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1070:
#line 2515 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1071:
#line 2518 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1072:
#line 2519 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1073:
#line 2520 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1074:
#line 2521 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1075:
#line 2522 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2523 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1077:
#line 2525 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1078:
#line 2527 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1081:
#line 2534 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1082:
#line 2535 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1083:
#line 2536 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1084:
#line 2537 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1085:
#line 2538 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1086:
#line 2539 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1089:
#line 2544 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1090:
#line 2545 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1091:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1092:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1093:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1094:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1095:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1096:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1097:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1098:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1099:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1102:
#line 2561 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1103:
#line 2562 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1105:
#line 2565 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1106:
#line 2566 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1107:
#line 2567 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1108:
#line 2568 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1109:
#line 2571 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1110:
#line 2572 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1113:
#line 2580 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1114:
#line 2583 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1115:
#line 2584 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1119:
#line 2591 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1120:
#line 2594 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1121:
#line 2598 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1122:
#line 2599 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1123:
#line 2600 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1124:
#line 2601 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1125:
#line 2604 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1126:
#line 2605 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1127:
#line 2606 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1128:
#line 2607 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1129:
#line 2611 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1130:
#line 2612 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1131:
#line 2614 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1132:
#line 2619 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1134:
#line 2621 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1136:
#line 2623 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1137:
#line 2626 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1138:
#line 2628 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1139:
#line 2633 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1140:
#line 2636 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1141:
#line 2637 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1142:
#line 2638 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1143:
#line 2641 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1145:
#line 2647 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1146:
#line 2648 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1147:
#line 2652 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1148:
#line 2653 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1149:
#line 2654 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2655 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1151:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1152:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1153:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1154:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1157:
#line 2671 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1159:
#line 2674 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1160:
#line 2675 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1161:
#line 2679 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1162:
#line 2680 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2681 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1164:
#line 2682 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1165:
#line 2685 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1166:
#line 2686 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1167:
#line 2689 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1168:
#line 2690 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1169:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1170:
#line 2694 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1171:
#line 2695 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1172:
#line 2696 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1173:
#line 2699 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1174:
#line 2700 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1176:
#line 2702 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1177:
#line 2703 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1178:
#line 2706 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1179:
#line 2707 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1180:
#line 2708 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1185:
#line 2715 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1186:
#line 2719 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2721 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1188:
#line 2723 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1190:
#line 2728 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2730 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2732 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1202:
#line 2745 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1203:
#line 2746 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2747 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1205:
#line 2750 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1206:
#line 2751 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2752 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2755 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1209:
#line 2756 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2757 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1211:
#line 2760 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1212:
#line 2761 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2762 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1215:
#line 2766 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1216:
#line 2767 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2768 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1218:
#line 2771 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1219:
#line 2772 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2773 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1221:
#line 2776 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1222:
#line 2777 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2778 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1224:
#line 2781 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1225:
#line 2782 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2783 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1227:
#line 2786 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1228:
#line 2787 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2788 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1230:
#line 2792 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1231:
#line 2794 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1232:
#line 2796 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1233:
#line 2800 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1234:
#line 2803 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1235:
#line 2804 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1236:
#line 2807 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1237:
#line 2808 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1238:
#line 2809 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1239:
#line 2812 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1240:
#line 2814 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1241:
#line 2815 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1242:
#line 2817 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1244:
#line 2821 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1245:
#line 2822 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1246:
#line 2823 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2824 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1248:
#line 2827 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1249:
#line 2828 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1250:
#line 2832 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1252:
#line 2834 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1255:
#line 2839 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2840 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1257:
#line 2841 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1258:
#line 2844 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1259:
#line 2845 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1260:
#line 2846 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1261:
#line 2849 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1262:
#line 2851 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1263:
#line 2856 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2859 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1265:
#line 2866 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1266:
#line 2868 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1267:
#line 2870 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1268:
#line 2875 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1270:
#line 2879 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1271:
#line 2880 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1272:
#line 2881 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1273:
#line 2883 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1274:
#line 2885 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1275:
#line 2890 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 10977 "frame/parser.C"
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


#line 2894 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

