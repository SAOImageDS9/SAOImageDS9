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
     KERNEL_ = 418,
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
#define ITERATION_ 414
#define IRAF_ 415
#define IRAFMIN_ 416
#define J2000_ 417
#define KERNEL_ 418
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
#define YYLAST   5688

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  346
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  217
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1276
/* YYNRULES -- Number of states.  */
#define YYNSTATES  2829

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
    1451,  1453,  1455,  1457,  1459,  1462,  1465,  1468,  1471,  1473,
    1475,  1477,  1478,  1480,  1481,  1483,  1484,  1486,  1487,  1489,
    1490,  1493,  1496,  1497,  1499,  1502,  1504,  1511,  1517,  1519,
    1521,  1523,  1526,  1529,  1531,  1533,  1535,  1537,  1540,  1542,
    1544,  1546,  1549,  1551,  1553,  1556,  1559,  1562,  1563,  1565,
    1566,  1568,  1570,  1572,  1574,  1576,  1578,  1580,  1582,  1585,
    1588,  1590,  1593,  1597,  1599,  1602,  1605,  1610,  1617,  1619,
    1630,  1632,  1635,  1639,  1643,  1646,  1649,  1652,  1655,  1658,
    1661,  1664,  1669,  1674,  1679,  1683,  1687,  1693,  1698,  1703,
    1708,  1712,  1716,  1720,  1724,  1727,  1730,  1735,  1739,  1743,
    1747,  1751,  1756,  1761,  1766,  1771,  1777,  1782,  1789,  1797,
    1802,  1807,  1813,  1816,  1820,  1824,  1828,  1831,  1835,  1839,
    1843,  1847,  1852,  1856,  1862,  1869,  1873,  1877,  1882,  1886,
    1890,  1894,  1898,  1902,  1908,  1912,  1916,  1921,  1925,  1928,
    1931,  1933,  1937,  1942,  1947,  1952,  1957,  1962,  1969,  1974,
    1979,  1985,  1990,  1995,  2000,  2005,  2011,  2016,  2023,  2031,
    2036,  2041,  2047,  2053,  2059,  2065,  2071,  2077,  2085,  2091,
    2097,  2104,  2110,  2116,  2122,  2128,  2135,  2141,  2149,  2158,
    2164,  2170,  2177,  2181,  2185,  2189,  2193,  2197,  2203,  2207,
    2211,  2216,  2220,  2224,  2228,  2232,  2237,  2241,  2247,  2254,
    2258,  2262,  2267,  2271,  2275,  2279,  2283,  2287,  2293,  2297,
    2301,  2306,  2311,  2316,  2320,  2326,  2331,  2336,  2339,  2343,
    2350,  2357,  2359,  2361,  2363,  2366,  2369,  2372,  2376,  2380,
    2383,  2396,  2399,  2402,  2404,  2408,  2413,  2416,  2417,  2421,
    2423,  2425,  2428,  2431,  2434,  2437,  2440,  2445,  2450,  2455,
    2459,  2464,  2470,  2478,  2487,  2494,  2499,  2508,  2518,  2525,
    2532,  2540,  2551,  2563,  2576,  2586,  2592,  2597,  2603,  2610,
    2614,  2620,  2626,  2632,  2639,  2645,  2650,  2660,  2671,  2683,
    2693,  2700,  2707,  2714,  2721,  2728,  2735,  2742,  2749,  2756,
    2764,  2772,  2775,  2780,  2785,  2790,  2795,  2801,  2806,  2811,
    2817,  2823,  2827,  2832,  2837,  2842,  2847,  2854,  2862,  2871,
    2881,  2888,  2899,  2911,  2924,  2934,  2938,  2941,  2945,  2951,
    2958,  2966,  2971,  2975,  2979,  2986,  2993,  3000,  3008,  3015,
    3023,  3028,  3033,  3038,  3045,  3055,  3060,  3064,  3071,  3079,
    3087,  3090,  3094,  3098,  3102,  3107,  3110,  3113,  3118,  3126,
    3137,  3141,  3143,  3147,  3150,  3153,  3156,  3159,  3163,  3169,
    3174,  3180,  3183,  3191,  3195,  3198,  3201,  3205,  3208,  3211,
    3214,  3218,  3221,  3225,  3230,  3234,  3238,  3244,  3251,  3256,
    3259,  3263,  3266,  3269,  3274,  3278,  3282,  3285,  3289,  3291,
    3294,  3296,  3299,  3302,  3305,  3307,  3309,  3311,  3313,  3316,
    3318,  3321,  3324,  3326,  3329,  3332,  3334,  3337,  3339,  3341,
    3343,  3345,  3347,  3349,  3351,  3353,  3354,  3356,  3359,  3362,
    3365,  3369,  3375,  3383,  3391,  3398,  3405,  3412,  3419,  3425,
    3432,  3439,  3446,  3453,  3460,  3467,  3474,  3485,  3493,  3501,
    3509,  3519,  3529,  3540,  3553,  3566,  3569,  3572,  3576,  3581,
    3586,  3591,  3594,  3599,  3604,  3606,  3608,  3610,  3612,  3614,
    3616,  3618,  3620,  3623,  3625,  3627,  3629,  3633,  3637,  3642,
    3649,  3660,  3668,  3676,  3682,  3687,  3694,  3705,  3713,  3721,
    3727,  3730,  3733,  3737,  3742,  3748,  3752,  3758,  3764,  3768,
    3773,  3779,  3785,  3791,  3795,  3801,  3804,  3808,  3812,  3818,
    3822,  3826,  3830,  3835,  3841,  3847,  3851,  3857,  3863,  3867,
    3872,  3878,  3884,  3887,  3890,  3894,  3900,  3907,  3914,  3918,
    3922,  3926,  3933,  3939,  3945,  3948,  3952,  3958,  3965,  3969,
    3972,  3975,  3979,  3982,  3986,  3989,  3993,  3999,  4006,  4009,
    4012,  4015,  4017,  4022,  4027,  4029,  4032,  4035,  4038,  4041,
    4044,  4047,  4050,  4054,  4057,  4061,  4064,  4068,  4070,  4072,
    4074,  4076,  4078,  4079,  4082,  4083,  4086,  4087,  4089,  4090,
    4091,  4093,  4095,  4097,  4099,  4101,  4109,  4118,  4121,  4126,
    4129,  4134,  4141,  4144,  4146,  4148,  4152,  4156,  4158,  4162,
    4167,  4170,  4172,  4176,  4180,  4185,  4189,  4193,  4197,  4199,
    4201,  4203,  4205,  4207,  4209,  4211,  4213,  4215,  4217,  4219,
    4221,  4223,  4225,  4228,  4229,  4230,  4233,  4235,  4239,  4241,
    4245,  4247,  4250,  4253,  4255,  4259,  4260,  4261,  4264,  4267,
    4269,  4273,  4279,  4281,  4284,  4287,  4290,  4292,  4294,  4296,
    4298,  4303,  4306,  4310,  4314,  4317,  4321,  4324,  4327,  4330,
    4334,  4338,  4342,  4345,  4349,  4351,  4355,  4359,  4361,  4364,
    4367,  4370,  4373,  4375,  4377,  4379,  4381,  4384,  4387,  4391,
    4395,  4397,  4400,  4404,  4408,  4410,  4413,  4415,  4417,  4419,
    4421,  4423,  4426,  4429,  4434,  4436,  4439,  4442,  4445,  4449,
    4451,  4453,  4455,  4458,  4461,  4464,  4467,  4470,  4474,  4478,
    4482,  4486,  4490,  4494,  4498,  4500,  4503,  4506,  4509,  4513,
    4516,  4520,  4524,  4527,  4530,  4533,  4536,  4539,  4542,  4545,
    4548,  4551,  4554,  4557,  4560,  4563,  4566,  4570,  4574,  4578,
    4581,  4584,  4587,  4590,  4593,  4596,  4599,  4602,  4605,  4608,
    4611,  4614,  4618,  4622,  4626,  4631,  4635,  4637,  4639,  4641,
    4643,  4644,  4650,  4652,  4659,  4663,  4665,  4668,  4671,  4675,
    4678,  4682,  4686,  4689,  4692,  4695,  4698,  4701,  4704,  4708,
    4711,  4714,  4718,  4720,  4724,  4729,  4731,  4734,  4740,  4747,
    4754,  4757,  4759,  4762,  4765,  4771,  4778
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     347,     0,    -1,    96,   349,    -1,    20,   379,    -1,    44,
     381,    -1,    41,    66,     5,    -1,    46,   386,    -1,    59,
      -1,    64,    -1,    65,   388,    -1,    67,   278,     5,    -1,
      68,   393,    -1,    69,   395,    -1,    77,   396,    -1,    84,
     405,    -1,    86,   407,    -1,    87,   408,    -1,    95,   350,
      -1,   124,   410,    -1,   135,   411,    -1,   139,   453,    -1,
     142,   456,    -1,   147,    -1,   148,   350,    -1,   154,   462,
      -1,   160,    16,     4,    -1,   174,   465,    -1,   177,   483,
      -1,   178,   484,    -1,   179,   485,    -1,   182,   501,   486,
      -1,   183,   520,    -1,   195,    66,     5,    -1,   210,   521,
      -1,   211,   522,    -1,   212,   525,    -1,   232,    88,    -1,
     224,   526,    -1,   238,    -1,   235,   501,   528,    -1,   240,
     533,    -1,   242,   534,    -1,   247,   536,    -1,   260,    -1,
     265,   551,    -1,   281,     4,    -1,   282,   374,    -1,   293,
      -1,   295,   553,    -1,   301,    -1,   304,   555,    -1,   305,
     556,    -1,   335,   560,    -1,   341,   561,    -1,     3,    -1,
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
      -1,    30,    -1,   249,    -1,   244,    -1,    94,    -1,   161,
      -1,    -1,   126,    -1,   127,    -1,    35,    -1,   128,    -1,
     162,    -1,   152,    -1,   133,    -1,   274,    -1,   106,    -1,
     146,    -1,    -1,    97,    -1,   255,    -1,    -1,    97,    -1,
      24,    -1,    25,    -1,    -1,   259,    -1,   164,    -1,    -1,
      17,    -1,   157,    -1,    -1,   155,    -1,   183,    -1,    -1,
      62,    -1,    48,    -1,   102,    -1,    85,    -1,   344,    -1,
      27,    -1,    51,    -1,    -1,     4,    -1,    82,    -1,   150,
      -1,   219,    -1,   220,    -1,   233,    -1,   272,    -1,    -1,
      32,    -1,   275,    -1,    -1,   196,    -1,    42,    -1,    43,
      -1,   169,    -1,   170,    -1,   299,   378,    -1,    47,   375,
      -1,    74,   376,    -1,   148,   377,    -1,   185,   531,    -1,
      37,   532,    -1,   248,   348,    -1,   227,    -1,   283,   348,
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
     348,   401,   348,   348,     5,    -1,     5,     4,     4,   402,
       4,     4,   361,   348,   400,   348,   348,     5,    -1,     5,
       4,     4,   402,     4,     4,   361,   348,   348,   348,   348,
       5,    -1,   223,    -1,    -1,    31,    -1,     5,    -1,     5,
       5,     4,   350,    -1,     5,     4,   350,     5,   358,   363,
      -1,   186,    -1,   340,    -1,   339,    -1,   296,    -1,   136,
      -1,   175,    -1,   265,    -1,    46,    -1,     5,    -1,     5,
       5,     4,   350,    -1,     5,   358,   363,    -1,    31,     5,
     358,   363,    -1,    -1,   348,   348,   348,   348,   358,   363,
      -1,    59,   357,   358,   363,   348,   348,   358,   365,    -1,
     282,   406,    -1,    40,   348,   348,    -1,   192,   348,   348,
      -1,   110,   348,   348,    -1,    -1,   348,   348,   358,    -1,
      40,   348,   348,     4,    -1,   192,   348,   348,     4,    -1,
     110,   348,   348,     4,    -1,   360,   348,   348,    -1,   358,
     363,   357,    -1,   350,    -1,   304,   348,   348,    -1,    40,
     192,   360,   348,   348,    -1,   192,   360,   348,   348,    -1,
      40,   192,   358,   357,    -1,   192,   358,   357,    -1,    33,
       4,    -1,    -1,    32,    -1,   275,    -1,   142,   116,     5,
      -1,    41,    66,    -1,    44,   412,    -1,    46,   414,    -1,
      65,   415,    -1,    68,   419,    -1,    67,   418,    -1,    69,
     421,    -1,    77,   423,    -1,    79,   426,    -1,    84,   427,
      -1,    86,   428,    -1,    88,   430,    -1,    87,   429,    -1,
      93,   431,    -1,    95,    -1,   123,   435,    -1,   139,   441,
      -1,   150,     5,     5,     4,    -1,   151,    89,     5,     5,
     348,   348,   360,     4,   409,    -1,   154,   433,    -1,   158,
     432,    -1,   160,    16,    -1,   186,    -1,   182,   501,   495,
      -1,   183,   442,    -1,   195,    66,    -1,   210,    -1,   211,
     443,    -1,   218,   277,   360,   348,   348,     4,     4,     5,
      -1,   240,   444,    -1,   242,    -1,   265,   445,    -1,   281,
      -1,   282,   446,    -1,   290,    -1,   297,   360,   348,   348,
      -1,   303,    89,     5,     5,   348,   348,   360,     4,   409,
      -1,   305,   451,    -1,   341,    -1,   100,    -1,   117,    -1,
     132,    -1,    53,   262,    -1,    88,    -1,   121,    -1,    71,
     413,    -1,   173,    -1,    -1,   186,     5,    -1,   103,     5,
      -1,   117,    -1,    -1,   400,   401,    -1,   348,   401,    -1,
     251,    -1,   191,    -1,   186,   416,    -1,   296,   168,    -1,
     340,   417,    -1,   227,    -1,   191,    -1,   244,    -1,    78,
      -1,   244,    -1,   171,    -1,    -1,   278,    -1,   168,   420,
      -1,     4,    -1,     4,   360,   348,   348,    -1,     4,   348,
     348,   361,   348,    -1,    -1,   168,   422,    -1,   176,    -1,
       4,   348,   348,   361,   348,    -1,   358,   363,    -1,    65,
     424,    -1,    66,    -1,    91,    -1,   168,    -1,   204,   168,
      -1,   185,    -1,    69,   425,    -1,   265,    -1,   334,    -1,
      -1,   191,    -1,   251,    -1,    -1,   176,    -1,   348,   348,
     358,   363,   364,    -1,   360,   348,   348,   358,   363,   364,
      -1,   348,   358,   358,     4,    -1,   358,   363,   364,    -1,
      59,   358,   363,   364,   358,   365,    -1,   282,   358,    -1,
     360,    -1,   358,   363,   364,    -1,   273,    -1,    33,    -1,
     360,    -1,   358,   363,   364,    -1,   358,   363,   357,   348,
     348,     5,    -1,     4,   358,   363,   357,   348,   348,     5,
      -1,   360,   348,   348,     4,     4,    -1,     5,    -1,    65,
      -1,   360,   348,   348,     5,    -1,     6,     4,     4,     4,
       4,    -1,    88,    -1,   119,   194,   434,    -1,    -1,     4,
      -1,   348,   348,    -1,   197,    -1,    59,   358,   363,   364,
      -1,    81,    -1,   100,   438,    -1,    45,    -1,   116,   436,
      -1,   119,   194,   439,    -1,   144,   437,    -1,   145,    -1,
     205,   194,    -1,   262,    -1,   262,   358,   363,   365,    -1,
     263,   440,    -1,   334,    -1,     4,    -1,   360,   348,   348,
      -1,     4,    -1,   165,     5,    -1,     4,   165,     5,    -1,
     305,     4,    -1,    -1,     4,    -1,   351,    -1,   351,   360,
     348,   348,    -1,   351,     4,    -1,    -1,     4,    -1,   358,
      -1,     4,   358,    -1,    -1,   209,    -1,   298,    -1,    66,
      -1,   181,    -1,   285,    -1,   227,    -1,    61,    -1,   276,
      -1,   299,    -1,   132,    -1,   163,    -1,   234,    -1,   299,
     450,    -1,    47,   447,    -1,    74,   448,    -1,   148,   449,
      -1,   185,    -1,    37,    -1,   248,    -1,    -1,    66,    -1,
      -1,    66,    -1,    -1,    66,    -1,    -1,   221,    -1,    -1,
      16,   452,    -1,   194,   359,    -1,    -1,   222,    -1,    83,
     454,    -1,    99,    -1,   358,   363,   364,   455,     5,     5,
      -1,   358,   363,   364,   455,     5,    -1,    20,    -1,   230,
      -1,    19,    -1,    44,   457,    -1,    77,   458,    -1,    84,
      -1,    94,    -1,    95,    -1,   101,    -1,   123,   459,    -1,
     139,    -1,   154,    -1,   161,    -1,   182,   460,    -1,   217,
      -1,   265,    -1,   276,   358,    -1,   305,   461,    -1,    72,
       5,    -1,    -1,    31,    -1,    -1,    44,    -1,    87,    -1,
     190,    -1,   148,    -1,   253,    -1,   214,    -1,   291,    -1,
     358,    -1,   114,   358,    -1,    58,   358,    -1,    18,    -1,
     282,   358,    -1,   198,     4,     4,    -1,   115,    -1,   184,
       5,    -1,    88,   464,    -1,   254,   119,   194,   463,    -1,
     254,     6,     4,     4,     4,     4,    -1,   295,    -1,   305,
     348,   348,   348,   348,   348,   348,   348,   348,     4,    -1,
       5,    -1,     5,     4,    -1,     4,     4,    56,    -1,     4,
       4,   358,    -1,   191,   350,    -1,    26,   466,    -1,   111,
     468,    -1,   123,   469,    -1,   157,   482,    -1,   203,   480,
      -1,   216,   481,    -1,     5,    14,     5,   368,    -1,     5,
      15,     5,   368,    -1,     5,    61,     5,   368,    -1,     5,
     188,   368,    -1,     5,   189,   368,    -1,     5,   257,   366,
       4,   368,    -1,     5,   266,     4,   368,    -1,     5,   267,
       4,   368,    -1,     5,   298,     5,   368,    -1,   240,    87,
     467,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   188,    -1,     5,   189,    -1,
       5,   257,   366,     4,    -1,     5,   266,     4,    -1,     5,
     267,     4,    -1,     5,   298,     5,    -1,     5,     5,   264,
      -1,     5,    14,     5,   368,    -1,     5,    15,     5,   368,
      -1,     5,    61,     5,   368,    -1,     5,   188,   367,   368,
      -1,     5,     5,   264,   367,   368,    -1,     5,   189,   367,
     368,    -1,     5,   257,   366,     4,   367,   368,    -1,     5,
     271,   366,     4,     4,   367,   368,    -1,     5,   266,     4,
     368,    -1,     5,   267,     4,   368,    -1,     5,   298,     5,
     367,   368,    -1,   263,   470,    -1,   116,    87,   471,    -1,
     240,   155,   479,    -1,   240,    87,   478,    -1,   190,   472,
      -1,     5,    14,     5,    -1,     5,    15,     5,    -1,     5,
      61,     5,    -1,     5,   188,   367,    -1,     5,     5,   264,
     367,    -1,     5,   189,   367,    -1,     5,   257,   366,     4,
     367,    -1,     5,   271,   366,     4,     4,   367,    -1,     5,
     266,     4,    -1,     5,   267,     4,    -1,     5,   298,     5,
     367,    -1,     5,    14,     5,    -1,     5,    15,     5,    -1,
       5,    61,     5,    -1,     5,   188,   367,    -1,     5,   189,
     367,    -1,     5,   257,   366,     4,   367,    -1,     5,   266,
       4,    -1,     5,   267,     4,    -1,     5,   298,     5,   367,
      -1,   155,   160,   473,    -1,   160,   474,    -1,   155,   475,
      -1,   476,    -1,   155,   333,   477,    -1,     5,    14,     5,
     368,    -1,     5,    15,     5,   368,    -1,     5,    61,     5,
     368,    -1,     5,   188,   367,   368,    -1,     5,   189,   367,
     368,    -1,     5,   257,   366,     4,   367,   368,    -1,     5,
     266,     4,   368,    -1,     5,   267,     4,   368,    -1,     5,
     298,     5,   367,   368,    -1,     5,    14,     5,   368,    -1,
       5,    15,     5,   368,    -1,     5,    61,     5,   368,    -1,
       5,   188,   367,   368,    -1,     5,     5,   264,   367,   368,
      -1,     5,   189,   367,   368,    -1,     5,   257,   366,     4,
     367,   368,    -1,     5,   271,   366,     4,     4,   367,   368,
      -1,     5,   266,     4,   368,    -1,     5,   267,     4,   368,
      -1,     5,   298,     5,   367,   368,    -1,   359,     5,    14,
       5,   368,    -1,   359,     5,    15,     5,   368,    -1,   359,
       5,    61,     5,   368,    -1,   359,     5,   188,   367,   368,
      -1,   359,     5,   189,   367,   368,    -1,   359,     5,   257,
     366,     4,   367,   368,    -1,   359,     5,   266,     4,   368,
      -1,   359,     5,   267,     4,   368,    -1,   359,     5,   298,
       5,   367,   368,    -1,   359,     5,    14,     5,   368,    -1,
     359,     5,    15,     5,   368,    -1,   359,     5,    61,     5,
     368,    -1,   359,     5,   188,   367,   368,    -1,   359,     5,
       5,   264,   367,   368,    -1,   359,     5,   189,   367,   368,
      -1,   359,     5,   257,   366,     4,   367,   368,    -1,   359,
       5,   271,   366,     4,     4,   367,   368,    -1,   359,     5,
     266,     4,   368,    -1,   359,     5,   267,     4,   368,    -1,
     359,     5,   298,     5,   367,   368,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     188,   367,    -1,     5,   189,   367,    -1,     5,   257,   366,
       4,   367,    -1,     5,   266,     4,    -1,     5,   267,     4,
      -1,     5,   298,     5,   367,    -1,     5,    14,     5,    -1,
       5,    15,     5,    -1,     5,    61,     5,    -1,     5,   188,
     367,    -1,     5,     5,   264,   367,    -1,     5,   189,   367,
      -1,     5,   257,   366,     4,   367,    -1,     5,   271,   366,
       4,     4,   367,    -1,     5,   266,     4,    -1,     5,   267,
       4,    -1,     5,   298,     5,   367,    -1,     5,    14,     5,
      -1,     5,    15,     5,    -1,     5,    61,     5,    -1,     5,
     188,   367,    -1,     5,   189,   367,    -1,     5,   257,   366,
       4,   367,    -1,     5,   266,     4,    -1,     5,   267,     4,
      -1,     5,   298,     5,   367,    -1,     5,    14,     5,   368,
      -1,     5,    61,     5,   368,    -1,     5,   188,   368,    -1,
       5,   257,   366,     4,   368,    -1,     5,   266,     4,   368,
      -1,     5,   298,     5,   368,    -1,     5,     5,    -1,   263,
       5,     5,    -1,    93,     4,     4,     4,     4,     4,    -1,
     186,     4,     4,     4,     4,     4,    -1,   110,    -1,   226,
      -1,   350,    -1,   137,   350,    -1,    88,   350,    -1,    66,
       5,    -1,     5,     4,     4,    -1,   295,   348,   348,    -1,
     341,   348,    -1,     5,     5,   359,   363,     5,     5,   359,
     363,   348,   359,   365,     5,    -1,    60,   489,    -1,    66,
       5,    -1,    80,    -1,    73,   494,     5,    -1,    73,   494,
     298,     5,    -1,    75,    99,    -1,    -1,    83,   487,   490,
      -1,    89,    -1,    99,    -1,    99,    17,    -1,   105,   493,
      -1,   113,     4,    -1,   129,     5,    -1,   148,    17,    -1,
     148,   208,   348,   348,    -1,   148,   287,   348,   348,    -1,
       4,    20,   371,   350,    -1,     4,    21,   353,    -1,     4,
      21,   353,   360,    -1,     4,    21,   353,   358,   363,    -1,
       4,    22,   234,   348,   348,     4,   360,    -1,     4,    22,
     234,   348,   348,     4,   358,   365,    -1,     4,    22,   234,
       5,   358,   365,    -1,     4,    48,   120,   350,    -1,     4,
      49,   234,   348,   348,   348,     4,   360,    -1,     4,    49,
     234,   348,   348,   348,     4,   358,   365,    -1,     4,    49,
     234,     5,   358,   365,    -1,     4,    48,   234,   348,   348,
     360,    -1,     4,    48,   234,   348,   348,   358,   365,    -1,
       4,    52,   105,   353,   353,     4,   348,   348,   348,     4,
      -1,     4,    52,   105,   353,   353,     4,   348,   348,   348,
       4,   360,    -1,     4,    52,   105,   353,   353,     4,   348,
     348,   348,     4,   358,   363,    -1,     4,    52,   105,     5,
       5,   358,   363,   358,   365,    -1,     4,    55,   488,     5,
       5,    -1,     4,    62,   120,   350,    -1,     4,    62,   234,
     348,   360,    -1,     4,    62,   234,   348,   358,   365,    -1,
       4,    66,     5,    -1,     4,    74,    27,   350,   350,    -1,
       4,    74,   166,     5,     5,    -1,     4,    74,   234,   348,
     360,    -1,     4,    74,   234,   348,   358,   365,    -1,     4,
      74,   276,   358,   363,    -1,     4,    75,   136,   350,    -1,
       4,    82,   105,   353,   353,     4,   348,   348,     4,    -1,
       4,    82,   105,   353,   353,     4,   348,   348,     4,   360,
      -1,     4,    82,   105,   353,   353,     4,   348,   348,     4,
     358,   363,    -1,     4,    82,   105,     5,     5,   358,   363,
     358,   365,    -1,     4,    83,    22,   234,   348,   348,    -1,
       4,    83,    49,   234,   348,   348,    -1,     4,    83,    52,
      21,   348,   348,    -1,     4,    83,    52,   234,   348,   348,
      -1,     4,    83,   109,   234,   348,   348,    -1,     4,    83,
     112,    21,   348,   348,    -1,     4,    83,   112,   234,   348,
     348,    -1,     4,    83,    82,    21,   348,   348,    -1,     4,
      83,    82,   234,   348,   348,    -1,     4,    83,   223,   302,
       4,   348,   348,    -1,     4,    83,   252,   302,     4,   348,
     348,    -1,     4,    99,    -1,     4,    99,    22,     4,    -1,
       4,    99,    49,     4,    -1,     4,    99,    52,     4,    -1,
       4,    99,   109,     4,    -1,     4,    99,    55,   488,     5,
      -1,     4,    99,   112,     4,    -1,     4,    99,    82,     4,
      -1,     4,    99,   223,   302,     4,    -1,     4,    99,   252,
     302,     4,    -1,     4,    99,   278,    -1,     4,    99,   278,
       5,    -1,     4,    99,   278,     4,    -1,     4,   105,    40,
       4,    -1,     4,   108,   120,   350,    -1,     4,   108,   234,
     348,   348,   360,    -1,     4,   108,   234,   348,   348,   358,
     365,    -1,     4,   109,   234,   348,   348,   348,     4,   360,
      -1,     4,   109,   234,   348,   348,   348,     4,   358,   365,
      -1,     4,   109,   234,     5,   358,   365,    -1,     4,   112,
     105,   353,   353,     4,   348,   348,   348,     4,    -1,     4,
     112,   105,   353,   353,     4,   348,   348,   348,     4,   360,
      -1,     4,   112,   105,   353,   353,     4,   348,   348,   348,
       4,   358,   363,    -1,     4,   112,   105,     5,     5,   358,
     363,   358,   365,    -1,     4,   129,     5,    -1,     4,   148,
      -1,     4,   148,   208,    -1,     4,   171,    27,   350,   350,
      -1,     4,   171,   221,   360,   357,   357,    -1,     4,   171,
     221,   358,   363,   357,   357,    -1,     4,   193,   348,   348,
      -1,     4,   193,   130,    -1,     4,   193,    36,    -1,     4,
     193,   286,   360,   348,   348,    -1,     4,   193,   286,   358,
     363,   357,    -1,     4,   223,   238,   348,   348,   360,    -1,
       4,   223,   238,   348,   348,   358,   365,    -1,     4,   252,
     238,   348,   348,   360,    -1,     4,   252,   238,   348,   348,
     358,   365,    -1,     4,   221,   256,   369,    -1,     4,   221,
     262,     4,    -1,     4,   223,   120,   350,    -1,     4,   228,
     360,   357,   357,   348,    -1,     4,   228,   358,   363,   357,
     357,   348,   358,   365,    -1,     4,   229,   507,   350,    -1,
       4,   242,    40,    -1,     4,   243,   221,   360,   357,   357,
      -1,     4,   243,   221,   358,   363,   357,   357,    -1,     4,
     243,   276,   358,   363,   358,   365,    -1,     4,   253,    -1,
       4,   253,   208,    -1,     4,   278,     5,    -1,     4,   280,
       5,    -1,     4,   280,   242,   350,    -1,     4,   292,    -1,
       4,   294,    -1,     4,   300,    27,   350,    -1,     4,   300,
     221,   360,   357,   348,   353,    -1,     4,   300,   221,   358,
     363,   357,   358,   365,   348,   353,    -1,     4,   334,     4,
      -1,   164,    -1,   164,   348,   348,    -1,   173,   502,    -1,
     174,   503,    -1,   193,   504,    -1,   227,   350,    -1,   229,
     507,   350,    -1,   229,   507,   350,   348,   348,    -1,   242,
      40,   348,   348,    -1,   242,   192,   348,   348,     4,    -1,
     242,   110,    -1,   247,     5,   494,   358,   363,   364,   350,
      -1,   247,   279,     5,    -1,   253,   511,    -1,   260,   512,
      -1,     5,    66,     5,    -1,     5,    80,    -1,     5,    99,
      -1,     5,    89,    -1,     5,   129,     5,    -1,     5,   148,
      -1,     5,   148,   208,    -1,     5,   193,   348,   348,    -1,
       5,   193,   130,    -1,     5,   193,    36,    -1,     5,   193,
     286,   360,   357,    -1,     5,   193,   286,   358,   363,   357,
      -1,     5,   229,   507,   350,    -1,     5,   253,    -1,     5,
     253,   208,    -1,     5,   292,    -1,     5,   294,    -1,   278,
     105,     5,     5,    -1,   278,    99,     5,    -1,   278,    99,
      17,    -1,   278,     5,    -1,   278,   295,     5,    -1,   214,
      -1,   214,   358,    -1,   291,    -1,   292,    17,    -1,   294,
      17,    -1,   334,     4,    -1,   253,    -1,   294,    -1,   148,
      -1,   292,    -1,    40,   193,    -1,   193,    -1,   110,   193,
      -1,    40,   105,    -1,   105,    -1,   110,   105,    -1,    40,
     242,    -1,   242,    -1,   110,   242,    -1,    99,    -1,   280,
      -1,    66,    -1,   334,    -1,   229,    -1,   129,    -1,   164,
      -1,   295,    -1,    -1,     4,    -1,    30,   350,    -1,   234,
     348,    -1,   159,     4,    -1,   209,     4,   348,    -1,    62,
     348,   348,   348,   508,    -1,   108,   348,   348,   348,   348,
     352,   508,    -1,    48,   348,   348,   348,   348,   352,   508,
      -1,   223,   348,   348,   348,   348,   508,    -1,   252,   348,
     348,   348,   348,   508,    -1,   171,   348,   348,   348,   348,
     508,    -1,   300,   348,   348,   348,   348,   508,    -1,   280,
     348,   348,   352,   508,    -1,    62,   221,   348,   348,   370,
     508,    -1,    48,   221,   348,   348,   370,   508,    -1,   102,
     221,   348,   348,   370,   508,    -1,    85,   221,   348,   348,
     370,   508,    -1,   344,   221,   348,   348,   370,   508,    -1,
      27,   221,   348,   348,   370,   508,    -1,    51,   221,   348,
     348,   370,   508,    -1,   243,   348,   348,   348,   348,   358,
     363,   358,   365,   508,    -1,    74,   348,   348,   348,   358,
     363,   508,    -1,   228,   348,   348,   348,   348,   348,   508,
      -1,    22,   348,   348,   348,   348,     4,   508,    -1,   109,
     348,   348,   348,   348,   348,     4,   352,   508,    -1,    49,
     348,   348,   348,   348,   348,     4,   352,   508,    -1,    82,
     348,   348,   353,   353,     4,   348,   348,     4,   508,    -1,
     112,   348,   348,   353,   353,     4,   348,   348,   348,     4,
     352,   508,    -1,    52,   348,   348,   353,   353,     4,   348,
     348,   348,     4,   352,   508,    -1,    75,   508,    -1,   279,
     491,    -1,     5,   348,   348,    -1,   298,     5,   348,   348,
      -1,   348,   348,   298,     5,    -1,     5,   358,   363,   357,
      -1,     4,     4,    -1,    40,   348,   348,     4,    -1,   192,
     348,   348,     4,    -1,   110,    -1,   104,    -1,   336,    -1,
      63,    -1,   246,    -1,   245,    -1,   231,    -1,   337,    -1,
      60,   496,    -1,    66,    -1,   129,    -1,   113,    -1,   141,
     348,   348,    -1,   153,   348,   348,    -1,   147,    20,    82,
     358,    -1,   147,    20,   150,     5,     5,     4,    -1,   147,
      20,   219,     5,     5,     5,     5,   358,   363,   372,    -1,
     147,    20,   220,     5,     5,   358,   372,    -1,   147,    20,
     233,     5,     5,     5,   358,    -1,   147,    20,   272,   358,
     363,    -1,     4,    20,    82,   358,    -1,     4,    20,   150,
       5,     5,     4,    -1,     4,    20,   219,     5,     5,     5,
       5,   358,   363,   372,    -1,     4,    20,   220,     5,     5,
     358,   372,    -1,     4,    20,   233,     5,     5,     5,   358,
      -1,     4,    20,   272,   358,   363,    -1,   153,    17,    -1,
       4,    21,    -1,     4,    21,   360,    -1,     4,    21,   358,
     363,    -1,     4,    22,   234,   358,   365,    -1,     4,    48,
     120,    -1,     4,    49,   234,   358,   365,    -1,     4,    48,
     234,   358,   365,    -1,     4,    52,    21,    -1,     4,    52,
      21,   360,    -1,     4,    52,    21,   358,   363,    -1,     4,
      52,   234,   358,   365,    -1,     4,    59,   358,   363,   364,
      -1,     4,    62,   120,    -1,     4,    62,   234,   358,   365,
      -1,     4,    66,    -1,     4,    74,    27,    -1,     4,    74,
     166,    -1,     4,    74,   234,   358,   365,    -1,     4,    74,
     276,    -1,     4,    75,   136,    -1,     4,    82,    21,    -1,
       4,    82,    21,   360,    -1,     4,    82,    21,   358,   363,
      -1,     4,    82,   234,   358,   365,    -1,     4,   108,   120,
      -1,     4,   108,   234,   358,   365,    -1,     4,   109,   234,
     358,   365,    -1,     4,   112,    21,    -1,     4,   112,    21,
     360,    -1,     4,   112,    21,   358,   363,    -1,     4,   112,
     234,   358,   365,    -1,     4,   129,    -1,     4,   148,    -1,
       4,   171,    27,    -1,     4,   171,   167,   358,   365,    -1,
       4,   171,   221,   358,   363,   364,    -1,     4,   180,   167,
     348,   358,   365,    -1,     4,   223,   120,    -1,     4,   221,
     256,    -1,     4,   221,   262,    -1,     4,   228,   221,   358,
     363,   364,    -1,     4,   228,   167,   358,   365,    -1,     4,
     228,   284,   358,   365,    -1,     4,   229,    -1,     4,   229,
     507,    -1,     4,   243,   167,   358,   365,    -1,     4,   243,
     221,   358,   363,   364,    -1,     4,   243,   276,    -1,     4,
     253,    -1,     4,   278,    -1,     4,   278,     4,    -1,     4,
     280,    -1,     4,   280,   242,    -1,     4,   290,    -1,     4,
     300,    27,    -1,     4,   300,   167,   358,   365,    -1,     4,
     300,   221,   358,   363,   364,    -1,     4,   334,    -1,   148,
     497,    -1,   148,   204,    -1,   204,    -1,   223,   252,   348,
     348,    -1,   252,   252,   348,   348,    -1,   227,    -1,   229,
     507,    -1,   253,   498,    -1,   253,   204,    -1,   260,   499,
      -1,     5,    66,    -1,     5,   129,    -1,     5,   153,    -1,
       5,   229,   507,    -1,     5,   278,    -1,     5,   278,   204,
      -1,   278,    17,    -1,   278,    98,   194,    -1,   334,    -1,
      30,    -1,   234,    -1,   159,    -1,   209,    -1,    -1,   348,
     348,    -1,    -1,   348,   348,    -1,    -1,   280,    -1,    -1,
      -1,   222,    -1,   235,    -1,   296,    -1,    57,    -1,    20,
      -1,   494,   358,   363,   364,   350,   509,   515,    -1,   253,
     494,   358,   363,   364,   350,   509,   515,    -1,   494,     5,
      -1,   494,     5,   358,   363,    -1,   494,     4,    -1,   494,
       4,   358,   363,    -1,   123,     5,     5,   492,     4,     5,
      -1,   348,   348,    -1,   130,    -1,    36,    -1,    40,   348,
     348,    -1,   192,   348,   348,    -1,   110,    -1,   286,   360,
     357,    -1,   286,   358,   363,   357,    -1,   505,   506,    -1,
     506,    -1,   507,   345,   350,    -1,    66,   345,     5,    -1,
      92,   345,     4,     4,    -1,   334,   345,     4,    -1,   129,
     345,     5,    -1,   280,   345,     5,    -1,   518,    -1,   519,
      -1,   201,    -1,   253,    -1,   148,    -1,    91,    -1,   125,
      -1,   105,    -1,   193,    -1,   242,    -1,    99,    -1,   156,
      -1,   268,    -1,   500,    -1,   500,   505,    -1,    -1,    -1,
     510,   513,    -1,    17,    -1,   208,   348,   348,    -1,   287,
      -1,   287,   348,   348,    -1,   350,    -1,   280,   350,    -1,
     513,   514,    -1,   514,    -1,   507,   345,   350,    -1,    -1,
      -1,   516,   517,    -1,   517,   518,    -1,   518,    -1,   278,
     345,     5,    -1,    55,   345,   488,     5,     5,    -1,    64,
      -1,    66,     5,    -1,   181,     4,    -1,   285,   348,    -1,
     344,    -1,   342,    -1,   337,    -1,   201,    -1,   348,   348,
     348,   348,    -1,   348,   348,    -1,   360,   348,   348,    -1,
     358,   363,   357,    -1,   286,   523,    -1,    39,   348,   348,
      -1,   192,   524,    -1,   227,   350,    -1,   348,   348,    -1,
     360,   348,   348,    -1,   358,   363,   357,    -1,    40,   348,
     348,    -1,   348,   348,    -1,   110,   348,   348,    -1,   350,
      -1,   305,   359,   363,    -1,     5,     4,     4,    -1,   295,
      -1,    70,   527,    -1,   168,     4,    -1,   239,     4,    -1,
     248,   348,    -1,    54,    -1,   138,    -1,   240,    -1,    90,
      -1,   148,   529,    -1,   253,   530,    -1,    40,   348,   348,
      -1,   192,   348,   348,    -1,   110,    -1,   258,   110,    -1,
      40,   348,   348,    -1,   192,   348,   348,    -1,   110,    -1,
     258,   110,    -1,   187,    -1,    13,    -1,   201,    -1,    34,
      -1,   107,    -1,    61,     5,    -1,   276,   358,    -1,   299,
       4,     4,     4,    -1,   348,    -1,   348,    97,    -1,   192,
     535,    -1,   286,   348,    -1,   286,   348,    97,    -1,    40,
      -1,   348,    -1,   110,    -1,    26,   537,    -1,   123,   539,
      -1,   203,   549,    -1,   111,   550,    -1,   216,     5,    -1,
     119,     5,   373,    -1,    61,     5,   373,    -1,   266,     4,
     373,    -1,   240,    87,   538,    -1,   119,     5,   373,    -1,
      61,     5,   373,    -1,   266,     4,   373,    -1,   540,    -1,
     155,   540,    -1,   277,   541,    -1,   263,   542,    -1,   116,
      87,   543,    -1,   190,   544,    -1,   240,   155,   546,    -1,
     240,    87,   547,    -1,   237,   548,    -1,   119,     5,    -1,
      61,     5,    -1,   266,     4,    -1,   119,     5,    -1,    61,
       5,    -1,   266,     4,    -1,   119,     5,    -1,    61,     5,
      -1,   266,     4,    -1,   119,     5,    -1,    61,     5,    -1,
     266,     4,    -1,   155,   545,    -1,   119,     5,     4,    -1,
      61,     5,     4,    -1,   266,     4,     4,    -1,   119,     5,
      -1,    61,     5,    -1,   266,     4,    -1,   119,     5,    -1,
      61,     5,    -1,   266,     4,    -1,   119,     5,    -1,    61,
       5,    -1,   266,     4,    -1,   119,     5,    -1,    61,     5,
      -1,   266,     4,    -1,   119,     5,   373,    -1,    61,     5,
     373,    -1,   266,     4,   373,    -1,   119,     5,     5,   373,
      -1,   552,     4,     4,    -1,    99,    -1,    50,    -1,   134,
      -1,   288,    -1,    -1,     4,   348,   348,   348,   348,    -1,
     202,    -1,   202,     4,   348,   348,   348,   348,    -1,   123,
     263,   554,    -1,     4,    -1,   348,   358,    -1,     4,     4,
      -1,     4,   348,   358,    -1,   348,   348,    -1,   286,   348,
     348,    -1,   359,   363,   364,    -1,    16,   559,    -1,   238,
       4,    -1,   236,   558,    -1,    23,   557,    -1,     4,     4,
      -1,     4,     5,    -1,   280,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   280,     4,     5,    -1,     4,    -1,
       4,   359,   363,    -1,     4,     6,   359,   363,    -1,   226,
      -1,   348,   348,    -1,   348,   348,    12,   348,   348,    -1,
     348,   348,    12,   360,   348,   348,    -1,   348,   348,    12,
     358,   363,   357,    -1,   286,   562,    -1,   122,    -1,   122,
     348,    -1,   348,   348,    -1,   348,   348,    12,   348,   348,
      -1,   348,   348,    12,   360,   348,   348,    -1,   348,   348,
      12,   358,   363,   357,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   448,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   502,   503,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   521,
     523,   524,   525,   526,   528,   529,   530,   531,   534,   535,
     536,   537,   538,   541,   542,   545,   546,   547,   550,   553,
     556,   559,   571,   578,   585,   593,   594,   595,   596,   597,
     600,   601,   602,   603,   604,   605,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   625,   626,   627,   630,   631,
     634,   635,   636,   637,   638,   639,   640,   641,   644,   645,
     646,   647,   648,   651,   652,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   664,   665,   666,   669,   670,   671,
     672,   675,   676,   677,   680,   681,   682,   685,   686,   687,
     690,   691,   692,   693,   694,   695,   696,   697,   700,   701,
     704,   705,   706,   707,   708,   709,   712,   713,   714,   717,
     718,   719,   720,   721,   722,   725,   726,   727,   728,   729,
     730,   731,   732,   733,   737,   738,   741,   742,   745,   746,
     749,   750,   752,   753,   754,   757,   758,   761,   763,   765,
     767,   769,   771,   773,   775,   777,   781,   782,   783,   784,
     785,   786,   787,   788,   791,   792,   795,   796,   797,   799,
     801,   802,   803,   805,   809,   810,   813,   814,   816,   819,
     821,   827,   828,   829,   832,   833,   834,   837,   838,   839,
     840,   841,   842,   848,   849,   852,   853,   854,   855,   856,
     859,   860,   861,   864,   865,   870,   875,   882,   884,   886,
     887,   888,   891,   893,   896,   897,   900,   901,   902,   903,
     904,   907,   909,   911,   916,   921,   924,   925,   928,   929,
     930,   937,   938,   939,   940,   943,   944,   947,   948,   951,
     952,   955,   957,   961,   962,   965,   967,   968,   969,   970,
     973,   974,   975,   976,   977,   980,   982,   984,   985,   987,
     989,   991,   993,   997,  1000,  1001,  1002,  1005,  1008,  1009,
    1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1028,  1029,  1030,
    1031,  1032,  1033,  1034,  1035,  1036,  1037,  1039,  1040,  1041,
    1042,  1043,  1044,  1045,  1047,  1049,  1050,  1053,  1054,  1055,
    1056,  1057,  1058,  1059,  1060,  1063,  1064,  1065,  1068,  1071,
    1072,  1074,  1076,  1077,  1078,  1079,  1080,  1081,  1088,  1089,
    1092,  1093,  1094,  1097,  1098,  1101,  1104,  1105,  1107,  1111,
    1112,  1113,  1116,  1120,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1133,  1134,  1135,  1138,  1139,  1142,  1144,
    1150,  1154,  1156,  1158,  1161,  1162,  1164,  1167,  1170,  1171,
    1175,  1177,  1180,  1185,  1186,  1187,  1191,  1192,  1193,  1196,
    1197,  1198,  1201,  1202,  1204,  1205,  1206,  1207,  1208,  1209,
    1210,  1211,  1212,  1213,  1215,  1216,  1219,  1220,  1223,  1224,
    1225,  1226,  1229,  1230,  1233,  1235,  1238,  1242,  1243,  1244,
    1245,  1248,  1249,  1250,  1253,  1254,  1255,  1258,  1261,  1262,
    1263,  1266,  1267,  1268,  1271,  1272,  1273,  1274,  1275,  1276,
    1277,  1280,  1281,  1284,  1285,  1288,  1289,  1292,  1293,  1296,
    1297,  1298,  1301,  1302,  1305,  1306,  1309,  1312,  1320,  1321,
    1324,  1325,  1326,  1327,  1328,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,  1336,  1337,  1338,  1339,  1342,  1345,  1346,  1349,
    1350,  1351,  1352,  1355,  1356,  1357,  1358,  1361,  1362,  1363,
    1364,  1365,  1368,  1369,  1370,  1371,  1372,  1373,  1375,  1376,
    1381,  1382,  1385,  1387,  1389,  1392,  1393,  1394,  1395,  1396,
    1397,  1400,  1402,  1404,  1406,  1407,  1409,  1411,  1413,  1415,
    1417,  1420,  1421,  1422,  1423,  1424,  1425,  1427,  1428,  1429,
    1432,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1452,
    1454,  1456,  1458,  1459,  1460,  1461,  1462,  1465,  1466,  1467,
    1468,  1469,  1470,  1471,  1473,  1475,  1476,  1477,  1480,  1481,
    1482,  1483,  1484,  1485,  1487,  1488,  1489,  1492,  1493,  1494,
    1495,  1496,  1499,  1502,  1505,  1508,  1511,  1514,  1517,  1520,
    1523,  1528,  1531,  1534,  1537,  1540,  1543,  1546,  1549,  1552,
    1555,  1558,  1563,  1566,  1569,  1572,  1575,  1578,  1581,  1584,
    1587,  1592,  1595,  1598,  1601,  1604,  1607,  1610,  1613,  1616,
    1619,  1622,  1627,  1629,  1630,  1631,  1632,  1633,  1635,  1636,
    1637,  1639,  1640,  1641,  1642,  1643,  1644,  1645,  1647,  1649,
    1650,  1651,  1654,  1655,  1656,  1657,  1658,  1659,  1661,  1662,
    1663,  1666,  1668,  1670,  1671,  1673,  1675,  1679,  1680,  1683,
    1684,  1685,  1688,  1695,  1696,  1697,  1698,  1699,  1700,  1701,
    1704,  1712,  1713,  1714,  1715,  1717,  1719,  1720,  1720,  1721,
    1722,  1723,  1724,  1725,  1726,  1728,  1729,  1731,  1734,  1737,
    1738,  1739,  1742,  1744,  1747,  1750,  1751,  1754,  1758,  1761,
    1763,  1766,  1769,  1773,  1778,  1783,  1785,  1786,  1788,  1790,
    1791,  1793,  1795,  1797,  1799,  1801,  1802,  1804,  1806,  1810,
    1815,  1817,  1819,  1821,  1823,  1825,  1827,  1829,  1831,  1833,
    1835,  1838,  1839,  1841,  1843,  1844,  1846,  1848,  1849,  1850,
    1852,  1854,  1855,  1856,  1858,  1859,  1860,  1862,  1865,  1869,
    1873,  1876,  1879,  1883,  1888,  1894,  1895,  1896,  1898,  1899,
    1901,  1905,  1907,  1908,  1909,  1911,  1914,  1916,  1919,  1921,
    1924,  1926,  1928,  1929,  1932,  1937,  1940,  1941,  1944,  1947,
    1951,  1952,  1954,  1955,  1956,  1958,  1959,  1961,  1962,  1964,
    1969,  1971,  1972,  1974,  1975,  1976,  1977,  1978,  1979,  1981,
    1983,  1985,  1986,  1988,  1989,  1991,  1993,  1994,  1995,  1996,
    1997,  1998,  1999,  2000,  2001,  2002,  2003,  2005,  2007,  2009,
    2010,  2011,  2012,  2014,  2015,  2016,  2017,  2018,  2020,  2021,
    2022,  2023,  2024,  2025,  2028,  2029,  2030,  2031,  2032,  2033,
    2034,  2035,  2036,  2037,  2038,  2039,  2040,  2041,  2042,  2043,
    2044,  2045,  2046,  2047,  2048,  2051,  2052,  2053,  2054,  2055,
    2056,  2064,  2071,  2080,  2089,  2096,  2103,  2111,  2119,  2126,
    2131,  2136,  2141,  2146,  2151,  2156,  2162,  2171,  2181,  2191,
    2198,  2208,  2218,  2227,  2239,  2252,  2257,  2260,  2262,  2264,
    2269,  2273,  2276,  2278,  2280,  2283,  2284,  2285,  2286,  2287,
    2288,  2289,  2292,  2293,  2294,  2295,  2296,  2297,  2299,  2301,
    2303,  2305,  2307,  2309,  2312,  2314,  2316,  2318,  2320,  2322,
    2325,  2326,  2327,  2328,  2330,  2333,  2334,  2336,  2338,  2339,
    2340,  2342,  2345,  2348,  2349,  2351,  2352,  2353,  2354,  2356,
    2357,  2358,  2359,  2360,  2362,  2364,  2365,  2367,  2370,  2371,
    2372,  2374,  2376,  2377,  2378,  2379,  2381,  2384,  2388,  2389,
    2390,  2391,  2394,  2397,  2399,  2400,  2401,  2403,  2406,  2407,
    2409,  2410,  2411,  2412,  2413,  2415,  2416,  2418,  2421,  2422,
    2423,  2424,  2425,  2427,  2429,  2430,  2431,  2432,  2434,  2436,
    2437,  2438,  2439,  2440,  2441,  2443,  2444,  2446,  2449,  2450,
    2451,  2452,  2455,  2456,  2459,  2460,  2463,  2464,  2467,  2480,
    2481,  2485,  2486,  2490,  2491,  2494,  2499,  2506,  2508,  2511,
    2513,  2516,  2520,  2521,  2522,  2523,  2524,  2525,  2526,  2528,
    2532,  2533,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,
    2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,
    2556,  2559,  2560,  2563,  2564,  2564,  2567,  2568,  2569,  2570,
    2573,  2574,  2577,  2578,  2581,  2585,  2586,  2586,  2589,  2590,
    2593,  2596,  2600,  2601,  2602,  2603,  2606,  2607,  2608,  2609,
    2612,  2614,  2615,  2620,  2622,  2623,  2624,  2625,  2628,  2629,
    2634,  2638,  2639,  2640,  2643,  2644,  2649,  2650,  2653,  2655,
    2656,  2657,  2662,  2663,  2664,  2665,  2668,  2669,  2672,  2674,
    2676,  2677,  2680,  2682,  2683,  2684,  2687,  2688,  2691,  2692,
    2693,  2696,  2697,  2698,  2701,  2702,  2703,  2704,  2705,  2708,
    2709,  2710,  2713,  2714,  2715,  2716,  2717,  2720,  2722,  2724,
    2726,  2729,  2731,  2733,  2736,  2737,  2738,  2739,  2740,  2741,
    2742,  2743,  2744,  2747,  2748,  2749,  2752,  2753,  2754,  2757,
    2758,  2759,  2762,  2763,  2764,  2767,  2768,  2769,  2770,  2773,
    2774,  2775,  2778,  2779,  2780,  2783,  2784,  2785,  2788,  2789,
    2790,  2793,  2795,  2797,  2801,  2805,  2807,  2810,  2811,  2812,
    2815,  2816,  2818,  2819,  2821,  2824,  2825,  2826,  2827,  2830,
    2831,  2834,  2836,  2837,  2838,  2839,  2842,  2843,  2844,  2847,
    2848,  2849,  2852,  2853,  2858,  2862,  2869,  2870,  2872,  2877,
    2879,  2882,  2883,  2884,  2885,  2887,  2892
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
  "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_", "J2000_", "KERNEL_", "KEY_",
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
     396,   397,   397,   397,   397,   397,   398,   398,   399,   399,
     399,   400,   400,   400,   400,   401,   401,   402,   402,   403,
     403,   404,   404,   405,   405,   405,   405,   405,   405,   405,
     406,   406,   406,   406,   406,   407,   407,   407,   407,   407,
     407,   407,   407,   408,   409,   409,   409,   410,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   412,   412,   412,
     412,   412,   412,   412,   412,   413,   413,   413,   414,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   416,   416,
     417,   417,   417,   418,   418,   419,   420,   420,   420,   421,
     421,   421,   422,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   424,   424,   424,   425,   425,   426,   426,
     426,   427,   427,   427,   428,   428,   428,   429,   430,   430,
     431,   431,   431,   432,   432,   432,   433,   433,   433,   434,
     434,   434,   435,   435,   435,   435,   435,   435,   435,   435,
     435,   435,   435,   435,   435,   435,   436,   436,   437,   437,
     437,   437,   438,   438,   439,   439,   439,   440,   440,   440,
     440,   441,   441,   441,   442,   442,   442,   443,   444,   444,
     444,   445,   445,   445,   446,   446,   446,   446,   446,   446,
     446,   447,   447,   448,   448,   449,   449,   450,   450,   451,
     451,   451,   452,   452,   453,   453,   454,   454,   455,   455,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   457,   458,   458,   459,
     459,   459,   459,   460,   460,   460,   460,   461,   461,   461,
     461,   461,   462,   462,   462,   462,   462,   462,   462,   462,
     463,   463,   464,   464,   464,   465,   465,   465,   465,   465,
     465,   466,   466,   466,   466,   466,   466,   466,   466,   466,
     466,   467,   467,   467,   467,   467,   467,   467,   467,   467,
     468,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   472,   472,   472,
     472,   472,   473,   473,   473,   473,   473,   473,   473,   473,
     473,   474,   474,   474,   474,   474,   474,   474,   474,   474,
     474,   474,   475,   475,   475,   475,   475,   475,   475,   475,
     475,   476,   476,   476,   476,   476,   476,   476,   476,   476,
     476,   476,   477,   477,   477,   477,   477,   477,   477,   477,
     477,   478,   478,   478,   478,   478,   478,   478,   478,   478,
     478,   478,   479,   479,   479,   479,   479,   479,   479,   479,
     479,   480,   480,   480,   480,   480,   480,   481,   481,   482,
     482,   482,   483,   484,   484,   484,   484,   484,   484,   484,
     485,   486,   486,   486,   486,   486,   486,   487,   486,   486,
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
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   486,   486,   486,   486,   486,   486,
     486,   486,   486,   486,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   488,   488,   488,   488,   488,
     488,   488,   488,   488,   488,   489,   489,   489,   489,   489,
     489,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   490,   490,   490,
     490,   490,   490,   490,   490,   490,   490,   491,   491,   491,
     491,   492,   493,   493,   493,   494,   494,   494,   494,   494,
     494,   494,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   495,   495,
     495,   495,   495,   495,   495,   495,   495,   495,   496,   496,
     496,   496,   497,   497,   498,   498,   499,   499,   500,   501,
     501,   501,   501,   501,   501,   502,   502,   503,   503,   503,
     503,   503,   504,   504,   504,   504,   504,   504,   504,   504,
     505,   505,   506,   506,   506,   506,   506,   506,   506,   506,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   508,   508,   509,   510,   509,   511,   511,   511,   511,
     512,   512,   513,   513,   514,   515,   516,   515,   517,   517,
     518,   519,   520,   520,   520,   520,   521,   521,   521,   521,
     522,   522,   522,   522,   522,   522,   522,   522,   523,   523,
     523,   524,   524,   524,   525,   525,   525,   525,   526,   526,
     526,   526,   527,   527,   527,   527,   528,   528,   529,   529,
     529,   529,   530,   530,   530,   530,   531,   531,   532,   532,
     532,   533,   533,   533,   534,   534,   534,   534,   534,   535,
     535,   535,   536,   536,   536,   536,   536,   537,   537,   537,
     537,   538,   538,   538,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   540,   540,   540,   541,   541,   541,   542,
     542,   542,   543,   543,   543,   544,   544,   544,   544,   545,
     545,   545,   546,   546,   546,   547,   547,   547,   548,   548,
     548,   549,   549,   549,   550,   551,   551,   552,   552,   552,
     553,   553,   553,   553,   553,   554,   554,   554,   554,   555,
     555,   556,   556,   556,   556,   556,   557,   557,   557,   558,
     558,   558,   559,   559,   559,   560,   561,   561,   561,   561,
     561,   562,   562,   562,   562,   562,   562
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
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       2,     2,     0,     1,     2,     1,     6,     5,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     2,     2,     2,     0,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     3,     1,     2,     2,     4,     6,     1,    10,
       1,     2,     3,     3,     2,     2,     2,     2,     2,     2,
       2,     4,     4,     4,     3,     3,     5,     4,     4,     4,
       3,     3,     3,     3,     2,     2,     4,     3,     3,     3,
       3,     4,     4,     4,     4,     5,     4,     6,     7,     4,
       4,     5,     2,     3,     3,     3,     2,     3,     3,     3,
       3,     4,     3,     5,     6,     3,     3,     4,     3,     3,
       3,     3,     3,     5,     3,     3,     4,     3,     2,     2,
       1,     3,     4,     4,     4,     4,     4,     6,     4,     4,
       5,     4,     4,     4,     4,     5,     4,     6,     7,     4,
       4,     5,     5,     5,     5,     5,     5,     7,     5,     5,
       6,     5,     5,     5,     5,     6,     5,     7,     8,     5,
       5,     6,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     3,     3,     3,     3,     4,     3,     5,     6,     3,
       3,     4,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     4,     4,     3,     5,     4,     4,     2,     3,     6,
       6,     1,     1,     1,     2,     2,     2,     3,     3,     2,
      12,     2,     2,     1,     3,     4,     2,     0,     3,     1,
       1,     2,     2,     2,     2,     2,     4,     4,     4,     3,
       4,     5,     7,     8,     6,     4,     8,     9,     6,     6,
       7,    10,    11,    12,     9,     5,     4,     5,     6,     3,
       5,     5,     5,     6,     5,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     4,     6,     7,     8,     9,
       6,    10,    11,    12,     9,     3,     2,     3,     5,     6,
       7,     4,     3,     3,     6,     6,     6,     7,     6,     7,
       4,     4,     4,     6,     9,     4,     3,     6,     7,     7,
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
       2,     2,     3,     4,     5,     3,     5,     5,     3,     4,
       5,     5,     5,     3,     5,     2,     3,     3,     5,     3,
       3,     3,     4,     5,     5,     3,     5,     5,     3,     4,
       5,     5,     2,     2,     3,     5,     6,     6,     3,     3,
       3,     6,     5,     5,     2,     3,     5,     6,     3,     2,
       2,     3,     2,     3,     2,     3,     5,     6,     2,     2,
       2,     1,     4,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     1,     0,     0,
       1,     1,     1,     1,     1,     7,     8,     2,     4,     2,
       4,     6,     2,     1,     1,     3,     3,     1,     3,     4,
       2,     1,     3,     3,     4,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     0,     0,     2,     1,     3,     1,     3,
       1,     2,     2,     1,     3,     0,     0,     2,     2,     1,
       3,     5,     1,     2,     2,     2,     1,     1,     1,     1,
       4,     2,     3,     3,     2,     3,     2,     2,     2,     3,
       3,     3,     2,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     1,     1,     1,     1,     2,     2,     3,     3,
       1,     2,     3,     3,     1,     2,     1,     1,     1,     1,
       1,     2,     2,     4,     1,     2,     2,     2,     3,     1,
       1,     1,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     2,     2,     2,     3,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     3,     1,     1,     1,     1,
       0,     5,     1,     6,     3,     1,     2,     2,     3,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     1,     3,     4,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     0,     7,     8,     0,     0,     0,
       0,     0,   313,     0,     0,     0,     0,     0,     0,     0,
       0,    22,     0,     0,     0,     0,     0,     0,     0,  1059,
       0,     0,     0,     0,     0,     0,     0,  1059,    38,     0,
       0,     0,    43,     0,     0,     0,    47,  1240,    49,     0,
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
       0,  1059,     0,   360,     0,   364,     0,     0,     0,   368,
       0,   370,     0,   372,     0,     0,   509,   376,    19,     0,
     515,    20,   520,     0,   537,   523,   524,   525,   526,   539,
     528,   529,   530,     0,   532,   533,     0,     0,    21,    23,
       0,   553,     0,     0,     0,   558,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    26,   712,    27,     0,     0,
       0,     0,     0,     0,   713,    28,     0,    29,  1064,  1063,
    1060,  1061,  1062,     0,  1122,     0,     0,     0,    31,     0,
    1129,  1128,  1127,  1126,    33,     0,     0,     0,     0,     0,
     143,     0,    34,     0,  1147,     0,  1144,    35,     0,     0,
       0,     0,    37,    36,     0,     0,     0,     0,    40,     0,
       0,  1174,    41,     0,     0,     0,     0,     0,    42,  1237,
    1236,  1238,  1239,    44,     0,    45,     0,     0,     0,     0,
       0,   202,     0,     0,     0,    46,     0,     0,  1242,    48,
       0,     0,    50,     0,     0,     0,     0,   143,    51,  1265,
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
     490,   367,   491,   492,   493,   369,   499,   501,   503,   505,
     498,   500,   507,   371,     0,     0,   512,     0,   375,   143,
     514,     0,   521,   538,   522,   540,   541,   542,   527,   543,
     545,   544,   546,   531,   534,   550,     0,     0,     0,   547,
     535,     0,     0,   555,   554,     0,     0,     0,     0,    25,
       0,     0,   565,     0,   566,     0,     0,     0,     0,     0,
     567,     0,   711,     0,   568,     0,   569,     0,     0,   570,
       0,   716,   715,   714,     0,   719,     0,     0,     0,   905,
       0,     0,     0,   723,   727,   729,   730,     0,     0,     0,
       0,   841,     0,     0,     0,   878,     0,     0,     0,     0,
       0,     0,     0,   880,     0,     0,     0,    30,  1123,  1124,
    1125,    32,     0,     0,     0,     0,  1136,  1137,     0,   143,
       0,  1134,  1131,     0,     0,     0,   143,  1152,  1155,  1153,
    1154,  1148,  1149,  1150,  1151,     0,     0,    39,  1171,  1172,
       0,  1179,  1181,  1180,  1176,  1177,  1175,     0,     0,     0,
       0,  1182,     0,  1185,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1183,  1194,     0,     0,     0,  1184,
    1186,     0,  1169,  1170,  1168,   200,     0,   204,   196,     0,
     206,   197,     0,   208,   198,  1167,  1166,   199,   201,   203,
       0,     0,     0,     0,     0,   195,     0,     0,     0,     0,
    1249,  1262,  1252,     0,     0,  1255,     0,     0,  1254,  1253,
     154,  1271,     0,  1270,  1266,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   235,   231,     0,   240,     0,   237,
       0,   256,   138,   141,   142,   140,   139,   270,   271,   272,
     260,   274,   276,   275,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,   317,    94,    91,    92,    93,
     143,   319,   318,     0,     0,     0,     0,     0,     0,     0,
     332,     0,   328,   326,   325,   337,   380,     0,     0,   383,
     398,   399,   394,   395,   400,   402,   401,   396,   305,   306,
     391,   390,   406,   405,     0,   410,   424,   425,   414,   427,
     420,   418,   413,     0,     0,     0,   143,   433,   154,   154,
     154,   143,     0,     0,   143,   473,   455,   466,     0,   457,
      78,   468,     0,     0,   459,   461,   143,   478,   479,   464,
       0,     0,     0,   449,     0,     0,     0,     0,   953,   955,
     954,     0,     0,  1052,     0,  1031,     0,  1034,     0,     0,
    1054,  1056,     0,  1047,   361,     0,   502,   495,   504,   496,
     506,   497,   508,   494,     0,     0,   513,   510,   511,   154,
     536,   549,   548,   551,     0,   564,   552,     0,     0,     0,
       0,     0,     0,   167,   167,   161,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
     161,     0,     0,     0,     0,     0,   606,   630,     0,     0,
       0,   602,     0,     0,     0,     0,   167,   161,     0,     0,
     707,     0,   717,   718,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   781,     0,
       0,     0,     0,     0,   806,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   830,     0,     0,   835,   836,     0,
       0,     0,   857,   859,   858,     0,   861,     0,     0,   869,
     871,   872,   906,     0,     0,     0,     0,   721,   722,   947,
     945,   950,   949,   948,   946,   951,     0,   726,     0,   731,
       0,   944,     0,   732,   733,   734,   735,     0,     0,     0,
       0,     0,   843,     0,     0,   844,  1074,     0,  1077,  1073,
       0,     0,     0,   845,   879,   846,  1093,  1098,  1095,  1094,
    1092,  1099,  1096,  1090,  1097,  1091,  1100,     0,     0,   851,
       0,     0,     0,  1106,     0,  1108,   854,     0,  1110,   855,
     876,     0,     0,     0,   881,   882,   883,  1135,     0,     0,
    1142,  1138,     0,     0,     0,  1133,  1132,  1146,  1145,     0,
    1160,     0,     0,  1156,     0,  1164,     0,     0,  1157,     0,
    1178,   189,   189,     0,   189,     0,  1204,     0,  1203,  1195,
       0,     0,     0,     0,  1199,     0,     0,     0,  1202,     0,
       0,     0,     0,     0,  1197,  1205,     0,     0,     0,  1196,
     189,   189,   189,  1235,   205,   207,   209,     0,     0,     0,
       0,   210,     0,    55,     0,  1244,     0,  1250,     0,   143,
    1256,  1257,     0,  1259,  1260,     0,   155,   156,  1251,  1272,
    1273,     0,   223,   219,   225,   217,   218,   224,   221,   220,
     222,   227,     0,   241,     0,     0,     0,     0,   273,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   143,     0,
       0,     0,     0,   321,     0,   331,     0,   330,   387,   386,
       0,     0,     0,   143,     0,     0,   154,   431,   435,   439,
       0,     0,     0,   154,     0,    82,    81,   474,   458,     0,
     469,   471,   157,   480,   355,     0,     0,    55,     0,   448,
       0,     0,   971,     0,     0,     0,     0,     0,     0,   985,
       0,     0,     0,     0,     0,     0,  1002,  1003,     0,     0,
       0,     0,     0,  1014,     0,  1019,  1020,  1022,  1024,     0,
    1028,  1039,  1040,  1041,     0,  1043,  1048,  1050,  1051,  1049,
     952,     0,     0,  1030,     0,  1029,   970,     0,     0,  1035,
       0,  1037,     0,  1036,  1057,  1038,  1045,     0,     0,   373,
       0,     0,   562,   563,     0,   560,   556,     0,   167,   167,
     167,   168,   169,   574,   575,   163,   162,     0,   167,   167,
     167,     0,   580,   590,   164,   167,   167,   167,   165,   166,
     167,   167,     0,   167,   167,     0,   164,     0,   603,     0,
       0,     0,   629,     0,   628,     0,     0,   605,     0,   604,
       0,     0,     0,     0,   164,   164,   161,     0,     0,   161,
       0,     0,     0,   167,   167,   703,     0,   167,   167,   708,
       0,   180,   181,   182,   183,   184,   185,     0,    86,    87,
      85,   739,     0,     0,     0,     0,     0,     0,   899,   897,
     892,     0,   902,   886,   903,   889,   901,   895,   884,   898,
     887,   885,   904,   900,     0,     0,     0,   759,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   791,     0,     0,     0,     0,     0,   805,   807,     0,
       0,   813,   812,     0,     0,   170,     0,     0,     0,   143,
       0,     0,   826,     0,     0,     0,   831,   832,   833,     0,
       0,     0,   840,   856,   860,   862,   865,   864,     0,     0,
       0,   870,   907,   909,     0,   908,   724,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1058,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   728,     0,     0,     0,     0,   842,     0,   143,
       0,  1069,  1067,     0,     0,   143,     0,  1072,   847,     0,
       0,     0,   853,     0,     0,  1111,   874,   875,     0,   877,
    1141,  1143,  1140,  1139,  1130,     0,     0,  1161,     0,     0,
    1165,  1173,   191,   192,   193,   194,   190,  1188,  1187,     0,
       0,     0,  1190,  1189,   189,     0,     0,     0,  1198,     0,
       0,     0,     0,     0,  1215,     0,  1229,  1228,  1230,     0,
       0,     0,  1201,     0,     0,     0,  1200,  1210,  1209,  1211,
    1207,  1206,  1208,  1232,  1231,  1233,   212,   214,   213,     0,
       0,    55,     0,  1246,     0,   143,  1263,  1258,  1261,     0,
       0,   143,     0,     0,     0,   238,     0,     0,     0,     0,
       0,     0,     0,     0,   308,   307,     0,     0,   299,   310,
     312,     0,   322,   324,   323,   143,   329,     0,     0,     0,
     154,   430,   143,     0,     0,     0,     0,   453,   467,    80,
      79,   476,     0,   470,   159,   160,   158,   463,     0,     0,
     451,   445,     0,     0,     0,     0,     0,     0,   143,   972,
       0,   975,     0,     0,   978,     0,   143,   983,     0,   986,
     987,     0,   989,   990,   991,     0,   995,     0,     0,   998,
       0,  1004,     0,     0,     0,  1009,  1010,  1008,     0,     0,
       0,  1015,     0,     0,  1018,  1021,  1023,  1025,     0,     0,
    1042,  1044,   956,     0,     0,     0,     0,     0,     0,  1053,
     957,     0,     0,  1055,  1046,     0,     0,   518,   519,     0,
       0,   561,     0,   571,   572,   573,   167,   577,   578,   579,
       0,     0,     0,   584,   585,   161,     0,     0,     0,   167,
     591,   592,   593,   594,   596,   164,   599,   600,     0,   167,
       0,     0,     0,   164,   164,   161,     0,     0,     0,     0,
     627,     0,   631,     0,     0,     0,     0,     0,   164,   164,
     161,     0,     0,   161,     0,     0,     0,     0,     0,   164,
     164,   161,     0,     0,   161,     0,     0,     0,     0,     0,
     164,   164,   161,     0,     0,   161,     0,     0,     0,     0,
     164,   164,   161,     0,     0,     0,   164,   607,   608,   609,
     610,   612,     0,   615,   616,     0,   164,     0,     0,   701,
     702,   167,   705,   706,     0,   738,   143,   740,     0,     0,
     745,     0,     0,     0,     0,     0,   891,   888,   894,   893,
     890,   896,     0,   756,     0,     0,     0,     0,   143,   765,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   782,   783,   784,     0,   788,   785,   787,
       0,     0,   793,   792,   794,   795,     0,     0,     0,     0,
       0,     0,   143,     0,   143,     0,   811,   176,   172,   177,
     171,   174,   173,   175,   820,   821,   822,     0,     0,     0,
     825,   143,     0,   143,     0,   834,   837,   143,     0,   143,
       0,   863,   868,   910,   725,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1101,   935,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   936,     0,     0,     0,     0,     0,   736,   737,   143,
     154,     0,   143,   143,  1075,  1076,     0,  1078,     0,   849,
       0,   143,  1107,  1109,   873,  1158,  1159,  1162,  1163,   189,
     189,   189,  1234,  1213,  1212,  1214,  1217,  1216,  1220,  1219,
    1221,  1218,  1226,  1225,  1227,  1223,  1222,  1224,     0,  1241,
    1248,     0,  1264,     0,   143,     0,  1267,     0,     0,   242,
       0,   239,     0,     0,     0,   277,     0,     0,     0,     0,
     143,     0,   314,   131,     0,   407,     0,   428,   154,   157,
       0,     0,   442,     0,     0,   446,   964,     0,     0,     0,
       0,   143,   973,   157,   157,   157,   143,   979,   157,   154,
     157,   157,   143,   992,   157,   157,   157,   143,   999,   157,
     157,   143,     0,   157,   143,   157,   157,   143,   157,   143,
     958,     0,     0,     0,     0,   143,  1032,  1033,     0,     0,
     517,   557,     0,   576,   581,   582,   583,     0,   587,   588,
     589,   595,   167,   164,   601,   618,   619,   620,   621,   622,
       0,   624,   625,   164,     0,     0,     0,   164,   164,   161,
       0,     0,     0,     0,     0,     0,   164,   164,   161,     0,
       0,     0,     0,     0,     0,   164,   164,   161,     0,     0,
       0,   164,   167,   167,   167,   167,   167,     0,   167,   167,
       0,   164,   164,   167,   167,   167,   167,   167,     0,   167,
     167,     0,   164,   164,   681,   682,   683,   684,   686,     0,
     689,   690,     0,   164,   692,   693,   694,   695,   696,     0,
     698,   699,   164,   611,   164,     0,   617,     0,     0,   704,
       0,   741,   157,     0,     0,   157,     0,     0,     0,   755,
     157,   757,   760,   761,   157,   762,   764,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     786,   789,   790,     0,   157,     0,     0,     0,   808,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   866,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1102,  1081,     0,  1088,  1089,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,     0,
       0,    83,     0,     0,   942,   943,   154,     0,     0,     0,
    1070,  1068,  1079,   848,   850,   154,  1192,  1191,  1193,     0,
    1243,  1274,     0,     0,  1269,  1268,   243,     0,     0,     0,
     282,     0,     0,     0,   300,   157,   408,   412,   429,   432,
       0,   440,   475,     0,     0,     0,     0,     0,   969,   974,
     977,   976,   980,   981,   982,   984,   988,   993,   994,   996,
     997,  1000,  1001,  1005,   154,   157,  1012,   154,  1013,  1016,
     154,  1026,   154,     0,     0,     0,     0,   963,     0,     0,
     516,     0,   586,   597,   167,   164,   626,   167,   167,   167,
     167,   167,     0,   167,   167,   164,   672,   673,   674,   675,
     676,     0,   678,   679,   164,   167,   167,   167,   167,   167,
       0,   167,   167,   164,   167,   641,   642,   643,   644,   646,
     164,   649,   650,     0,   167,   167,   661,   662,   663,   664,
     666,   164,   669,   670,     0,   167,   685,   164,     0,   691,
     164,   700,   613,   164,   709,   710,   143,   744,     0,   157,
     749,   748,     0,   143,     0,   758,   763,   143,     0,   770,
     771,   772,   773,   777,   778,   774,   775,   776,     0,     0,
     157,   796,   800,     0,   143,     0,     0,   809,   815,   814,
     157,   816,     0,   823,     0,   827,   157,   157,   818,     0,
       0,   867,     0,   178,   178,     0,     0,   178,     0,   178,
    1058,     0,     0,     0,     0,     0,     0,     0,     0,  1080,
       0,     0,   178,   178,     0,     0,     0,     0,     0,     0,
       0,     0,   937,     0,     0,     0,  1058,    84,     0,   178,
       0,  1104,   941,     0,     0,   211,  1276,  1275,     0,     0,
     247,     0,     0,     0,     0,   315,   441,   334,   965,     0,
     186,     0,  1006,  1007,  1011,  1017,  1027,   959,     0,   186,
       0,   366,   334,     0,   598,   623,   632,   633,   634,   635,
     636,   164,   638,   639,   167,   164,   680,   652,   653,   654,
     655,   656,   164,   658,   659,   167,   645,   167,   164,   651,
     665,   167,   164,   671,   687,   164,   697,   614,     0,   157,
     742,   750,     0,     0,     0,     0,     0,   779,   780,   797,
       0,     0,     0,   810,   817,     0,   828,   829,   819,   157,
     838,     0,   179,  1058,  1058,    83,     0,  1058,     0,  1058,
     911,   143,     0,  1083,     0,  1086,  1120,  1087,  1085,  1082,
       0,  1058,  1058,    83,     0,     0,  1058,  1058,     0,     0,
    1058,   940,   938,   939,   918,  1058,  1058,  1104,  1115,     0,
    1071,   852,     0,     0,   249,     0,     0,     0,   335,   336,
     356,     0,   187,   188,   967,   968,     0,   961,   962,   374,
       0,   167,   640,   677,   167,   660,   647,   167,   667,   167,
     688,     0,   743,   157,   746,   157,     0,   157,     0,   157,
     798,   157,     0,   157,     0,  1058,   924,   920,  1058,     0,
     925,     0,   919,  1058,     0,  1084,     0,   922,   921,  1058,
       0,     0,   916,   914,  1058,   143,   915,   917,   923,  1115,
    1065,     0,     0,  1105,  1113,     0,     0,     0,   278,   301,
     304,   302,     0,     0,   143,   143,   559,   637,   657,   648,
     668,   157,   747,   754,     0,   769,   766,   799,   804,     0,
     824,     0,   929,   913,    83,     0,   927,  1121,     0,   912,
      83,     0,   928,     0,  1066,  1117,  1119,     0,  1112,     0,
       0,   283,     0,     0,     0,     0,   186,   186,     0,   751,
     143,   767,   801,   839,  1058,     0,     0,  1058,     0,   157,
    1118,  1114,   248,     0,     0,     0,     0,     0,   966,   960,
     720,   143,   752,   768,   143,   802,   931,     0,  1058,   930,
       0,  1058,   250,   294,     0,   293,     0,   753,   803,    83,
     932,    83,   926,   292,   291,  1058,  1058,   934,   933
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,   429,   176,   155,  1257,  2516,  2517,   430,   431,
     432,   433,   156,   157,   158,    94,   807,   456,  1198,  1677,
    1347,  1360,  1343,  1924,  2613,  1407,  2664,  1577,   335,   748,
     751,   754,   765,    56,   364,    66,   368,   374,   378,   381,
      71,   384,    78,   399,   395,   389,   405,    85,   410,    95,
     101,   415,   417,   419,   491,   860,  1646,   421,   424,   108,
     440,   159,   161,  2660,   178,   218,   480,   849,   482,   492,
     852,   857,   494,   496,   863,   499,   865,   510,   868,   870,
     513,   517,   521,   523,   526,   530,   557,   553,  1269,   544,
     889,   894,   886,  1258,   899,   547,   563,   566,   571,   575,
     583,   927,   929,   931,   933,   588,   937,   221,   590,  1749,
     238,   592,   594,   598,   603,   610,   247,  1336,   613,   255,
     622,  1352,   624,   630,   981,  1368,   976,  1790,  1374,  1372,
     977,  1792,  1377,  1379,   636,   639,   634,   257,   265,   267,
     677,  1058,  1434,  1047,  1532,  1971,  2299,  1063,  1056,   924,
    1310,  1315,  1323,  1325,  1955,   273,  1072,  1075,  1083,  2271,
    2272,  2273,  1956,  2648,  2649,  1106,  1109,  2723,  2724,  2720,
    2721,  2765,  2274,  2275,   278,   284,   292,   691,   686,   297,
     302,   701,   707,  1133,  1138,   757,   745,   308,   312,   714,
     318,   721,  1582,   734,   735,  1169,  1164,  1588,  1154,  1594,
    1606,  1602,  1158,   739,   723,   323,   324,   339,  1185,   342,
     348,   775,   778,   772,   350,   353,   783
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2575
static const yytype_int16 yypact[] =
{
    4583,   -31,   129,    85,    60, -2575, -2575,  1081,   -90,   472,
     899,  1048,   102,  3857,   180,    71,  1612,   367,  2050,   111,
     588, -2575,    71,   739,   490,  1247,   321,    23,   537,     2,
     -11,   535,   784,  2570,    86,   -20,   589,     2, -2575,   119,
      35,   887, -2575,   134,   592,   518, -2575,    77, -2575,    84,
    4584,   474,   122,   705, -2575,  1334, -2575,   703,   806,   479,
     762,   767,   124,   771,    47,   879, -2575, -2575, -2575,   908,
     529, -2575,    58,   104,    71,   408,   529,   423, -2575,   792,
     529, -2575, -2575,    40,   529, -2575, -2575, -2575, -2575,   529,
   -2575, -2575, -2575, -2575, -2575, -2575,   154,   773,   803,   811,
     487, -2575,   529,  1140,   529,   529,   582,   529, -2575, -2575,
   -2575,   608, -2575, -2575, -2575, -2575,  5153, -2575, -2575, -2575,
   -2575, -2575, -2575,   529, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575,  1217, -2575,   529, -2575,
     830, -2575, -2575,    71,    71,    71,    71,    71,    71,    71,
   -2575, -2575,    71,    71,    71,    71, -2575,   734, -2575,   791,
    1644,   752,    48,   596,   708,    -3,  4762,   501,  5302,  5122,
     858,  5153,  4187, -2575,   610,   -22,   893,   812,   496,   508,
     904,     2,   -19, -2575,   849, -2575,   702,   655,   160, -2575,
     364, -2575,   426, -2575,    28,   845,    61, -2575, -2575,  5239,
   -2575, -2575, -2575,   868,   911, -2575, -2575, -2575, -2575,   724,
   -2575, -2575, -2575,   500, -2575, -2575,  5239,  4728, -2575, -2575,
     513, -2575,   941,   944,    80, -2575,   529, -2575,   947,   161,
     979,   303,    62,   998,    32, -2575, -2575, -2575,  1005,  1010,
      71,    71,   529,   529, -2575, -2575,  1013, -2575, -2575, -2575,
   -2575, -2575, -2575,  1582, -2575,  1033,  1007,   529, -2575,  1040,
   -2575, -2575, -2575, -2575, -2575,   529,  1265,    71,  2955,   529,
    1217,   529, -2575,  1043, -2575,  2720, -2575, -2575,   795,  1045,
    1049,   529, -2575, -2575,   -38,  1050,  5239,  1057, -2575,  1308,
     529,   990, -2575,   397,   955,  1631,   396,  1088, -2575, -2575,
   -2575, -2575, -2575, -2575,  1091, -2575,   433,    56,   113,   127,
      65, -2575,   529,   529,   815, -2575,   529,   841,  1109, -2575,
     529,   529, -2575,  1137,    31,    36,  1142,  1217, -2575, -2575,
   -2575,   935,   529, -2575, -2575,   529,   529,   529,   529,   529,
     529,   529,   529,   529, -2575, -2575, -2575,   529, -2575,  1155,
    1147, -2575,   529,  1019, -2575, -2575, -2575, -2575, -2575, -2575,
     529, -2575, -2575,   529, -2575, -2575,   409,   409,  1167, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
     529,   529,  1168,  1173,  1177, -2575, -2575,   529,   529,   529,
   -2575,   529, -2575,  1179, -2575, -2575, -2575, -2575,   159, -2575,
    1184, -2575,  5239,  1191, -2575,   529, -2575, -2575, -2575,   529,
    1175,  1187,  1187,  5239,   529,   529,   529,   529,   529,   529,
   -2575,   529,  5153,  1140,   529,   529, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575,  1140,   529, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
    1197, -2575,   942,    17, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575,   -33, -2575, -2575, -2575,  1051, -2575,   624,
     425,   425, -2575, -2575, -2575,  1219, -2575,  1222, -2575, -2575,
     -59, -2575,  1052, -2575, -2575, -2575,  1062, -2575, -2575,  1217,
   -2575,  3085,   529, -2575,  5239,  5239,  1217, -2575, -2575,  1217,
   -2575, -2575, -2575, -2575,  1217, -2575, -2575,  5239,  1217,   529,
   -2575, -2575,  5239, -2575,  1227,    88,  1055,    10, -2575, -2575,
    1060,  5239,  4266, -2575, -2575, -2575, -2575, -2575,  1241,  1250,
    1254, -2575,  1066, -2575, -2575, -2575,   529, -2575, -2575,   546,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575,    28, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575,  1199,  1204,  1205,
   -2575, -2575,  1042, -2575,   529,  1271,  1059,  2720, -2575,  1217,
   -2575,  1279, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575,  5239,  5239,  5239, -2575,
   -2575,  1281,    71, -2575, -2575,  1283,  1284,  1096,   529, -2575,
     825,  1212, -2575,  1286, -2575,   637,  1216,  4677,    99,  1304,
   -2575,  1311, -2575,  1316, -2575,    69, -2575,  1312,  1317, -2575,
    1321, -2575, -2575, -2575,   529, -2575,  2720,  5077,  1570,   467,
    1324,     5,  1231, -2575, -2575, -2575,  1318,    72,  1330,  1333,
       1,   529,   486,   506,   131,  5239,    71,  1827,   446,    94,
      14,   186,    44, -2575,  1322,  1329,  1337, -2575, -2575, -2575,
   -2575, -2575,   529,   529,   529,   529, -2575, -2575,   529,  1217,
     529, -2575,   529,  1140,   529,  1345,  1217, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575,   412,   438, -2575, -2575, -2575,
    1351, -2575, -2575, -2575, -2575,  1260, -2575,  1357,  1359,  1289,
    1364, -2575,  1368, -2575,  1379,  1301,  1384,   407,   469,   462,
     114,   470,  1386,   514, -2575, -2575,  1389,  1390,  1387, -2575,
   -2575,  1399, -2575, -2575, -2575, -2575,  1401, -2575, -2575,  1402,
   -2575, -2575,  1404, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
     529,   529,   529,   529,   529, -2575,   529,   568,   529,   529,
   -2575,   648, -2575,   614,  1412, -2575,   901,  1413, -2575, -2575,
     -41,   529,   529, -2575,  1408,   529,   529,   529,   529,   529,
     529,   529,   529,   529, -2575, -2575,  1421,  1130,   529,  1417,
     583, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,  1426,  1427,   529,   529,   529,  1434,
      71,  1443,  1444,  1217,  5239, -2575, -2575, -2575, -2575, -2575,
    1217, -2575, -2575,   529,   529,   529,  5239,   529,  1140,   529,
   -2575,   529, -2575, -2575, -2575, -2575, -2575,  1449,  1459, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575,   501, -2575,   529, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575,  5239,  5239,   529,  1217, -2575,   -41,   -41,
     -41,  1217,  1140,   529,  1217, -2575, -2575, -2575,   529, -2575,
     -15,  1300,  1461,  1463, -2575, -2575,  1217,  5239, -2575, -2575,
    1464,  1466,  1465,   605,   529,  5088,   494,   688, -2575, -2575,
   -2575,   529,  1452,   491,   517, -2575,  1221, -2575,  1827,  1223,
     542,  1198,   140, -2575, -2575,   529, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,   529,  1472, -2575, -2575, -2575,   -41,
   -2575, -2575, -2575, -2575,  5182, -2575, -2575,  1475,  1477,   529,
    1478,  1479,  1480,    -2,    -2,   -43,  1483,  1484,  1488,  1491,
    1233,  1234,  1494,  1498,  1500,   493,   493,   -43,  1504,  1508,
     -43,  1509,  1528,  5355,  1529,  1530, -2575, -2575,  1531,  1532,
     729, -2575,  1534,  1539,  1543,  1547,    -2,   -43,  1549,  1551,
   -2575,  1553, -2575, -2575,  1217,   769,  1237,  1320,    19,  1326,
    1458,  1006,   379,  1561,   106,  1431,  1468,   972,  1028,  1535,
     473,  1335,  1469,  1563,  1363,   243,    21,   343,   378,  5153,
    1827,  1536,   -71,  1340,  1373,  1577,    25, -2575, -2575,   447,
    1580,  1583, -2575, -2575, -2575,  1584,  1377,    38,  1827,  1382,
   -2575, -2575, -2575,    71,  1587,  1588,   529, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575,    12, -2575,   977, -2575,
     529, -2575,   529, -2575, -2575, -2575, -2575,   529,   529,   529,
       5,  5239, -2575,  1590,  1102, -2575, -2575,   529, -2575, -2575,
     529,  5153,   529, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575,    71,   529, -2575,
     529,     5,  1592, -2575,   529,   529, -2575,    71, -2575, -2575,
   -2575,   191,  1593,  1594, -2575, -2575, -2575, -2575,   529,   529,
   -2575, -2575,  1140,   529,   529, -2575, -2575, -2575, -2575,   529,
   -2575,   529,  1490, -2575,   529, -2575,   529,  1492, -2575,  1589,
   -2575,   847,   847,   530,   847,  1596, -2575,   566, -2575, -2575,
    1598,  1599,   578,  1608, -2575,  1609,  1613,  1618, -2575,   600,
     660,  1619,  1622,  1627, -2575, -2575,  1638,  1639,  1641, -2575,
     847,   847,   847, -2575, -2575, -2575, -2575,   529,   529,   529,
     529, -2575,   529,  1275,  5239, -2575,   529, -2575,  2720,  1217,
   -2575, -2575,  1646, -2575, -2575,  1658, -2575, -2575, -2575, -2575,
    1605,  2955, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575,   529,  1611,   529,   529,   529,   946, -2575,  1640,
    1645,   529,   529,     0,  1659,    71,    71, -2575,  1217,   529,
    1666,  1669,  1671, -2575,  5239, -2575,   529, -2575, -2575, -2575,
     529,   529,   529,  1217,  1673,  5239,   -41, -2575, -2575, -2575,
    1140,   529,  1674,   -41,   529,  1642,  1651,   416, -2575,  1677,
   -2575, -2575,   121, -2575, -2575,   529,  1675,  1683,   529, -2575,
    1679,  1152,  5153,  1456,   604,  1457,    49,  5239,   618, -2575,
     345,  1557,    75,   641,  1460,    83, -2575, -2575,    68,  1533,
     640,  1578,   776,  1827,   -44, -2575,  1697,  1462, -2575,   435,
   -2575, -2575, -2575, -2575,  1827,  1499, -2575, -2575, -2575, -2575,
   -2575,   529,  1433, -2575,   529, -2575, -2575,   529,   529, -2575,
     529, -2575,   529, -2575, -2575, -2575, -2575,  1512,   529, -2575,
     529,    73, -2575, -2575,  1698,  1703, -2575,   529,    -2,    -2,
      -2, -2575, -2575, -2575, -2575, -2575, -2575,  1705,    -2,    -2,
      -2,   976, -2575, -2575,   493,    -2,    -2,    -2, -2575, -2575,
      -2,    -2,  1708,    -2,    -2,  1709,   493,  1178, -2575,  1711,
    1714,  1715, -2575,   831, -2575,  1094,  1148, -2575,  1192, -2575,
    1450,  1716,  1717,  1719,   493,   493,   -43,  1721,  1722,   -43,
    1723,  1727,  1729,    -2,    -2, -2575,  1730,    -2,    -2, -2575,
    1731, -2575, -2575, -2575, -2575, -2575, -2575,    71, -2575, -2575,
   -2575,  5153,  1065,    71,   529,  1153,  1183,   635, -2575, -2575,
   -2575,   790, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,  1734,    71,   529, -2575,    71,  1735,
     529,  5239,    71,  1394,  1493,  1501,   115,   155,  1507,   226,
    1441,  1447,  1741,  1749,  1753,  1006,  1755,  1756,  1758,  1467,
    1470,  1113,  1760,    71,   529,  1211,  1448, -2575, -2575,    71,
    5153, -2575, -2575,  5153,   529,    67,  1762,    71,   529,  1217,
    1140,    71, -2575,  5153,  5239,   529, -2575, -2575, -2575,    71,
      71,  5153, -2575, -2575, -2575, -2575, -2575, -2575,  5153,   529,
      71, -2575, -2575, -2575,   529, -2575, -2575,  1763,   529,  1546,
     194,   529,  1550,   529,   240,   529, -2575,   529,  1552,  1556,
     529,   529,   529,   529,   529,   529,   529,   529,    16,   529,
     529,  1559, -2575,   529,   529,   529,   529, -2575,  5239,  1217,
    1765,  5239,  5239,   529,   529,  1217,  1140, -2575,   529,   529,
     529,  5239, -2575,   529,   529, -2575, -2575, -2575,  1769, -2575,
   -2575, -2575, -2575, -2575, -2575,   529,   529, -2575,   529,   529,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,  1773,
    1776,  1778, -2575, -2575,   847,  1779,  1782,  1784, -2575,  1785,
    1786,  1787,  1789,  1791, -2575,  1794, -2575, -2575, -2575,  1795,
    1796,  1799, -2575,  1802,  1803,  1800, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,   529,
     529,  1783,  5239, -2575,   529,  1217, -2575, -2575, -2575,  2955,
     529,  1217,   529,   529,   529, -2575,   529,   529,  1805,   529,
    1808,  1807,   529,   529, -2575, -2575,  1810,  5239, -2575, -2575,
   -2575,   529, -2575, -2575, -2575,  1217, -2575,  1117,   529,  1117,
     -41, -2575,  1217,  5239,   529,   529,  1811, -2575, -2575, -2575,
   -2575, -2575,   529, -2575, -2575, -2575, -2575, -2575,   529,  1816,
   -2575, -2575,  5239,  1821,  1823,  1825,  1826,  5239,  1217, -2575,
    5239, -2575,  5239,  5239,  5153,  5239,  1217, -2575,  5239, -2575,
   -2575,  5239, -2575, -2575,  5153,  5239, -2575,  5239,  5239,  5153,
    5239, -2575,  5239,  5239,   529, -2575, -2575, -2575,  5239,  5239,
    5239, -2575,  5239,  5239, -2575, -2575, -2575, -2575,  5239,  5239,
   -2575, -2575, -2575,  5239,  1828,  1829,  1831,  1832,  5239, -2575,
   -2575,   529,   529, -2575, -2575,  1834,   529, -2575, -2575,  1836,
    1839, -2575,   529, -2575, -2575, -2575,    -2, -2575, -2575, -2575,
    1840,  1841,  1842, -2575, -2575,   -43,  1844,  1845,  1846,    -2,
   -2575, -2575, -2575, -2575, -2575,   493, -2575, -2575,  1849,    -2,
    1851,  1853,  1858,   493,   493,   -43,  1850,  1861,  1862,  1313,
   -2575,  1339, -2575,  1419,  1527,  1864,  1865,  1867,   493,   493,
     -43,  1871,  1883,   -43,  1884,  1575,  1885,  1887,  1888,   493,
     493,   -43,  1891,  1892,   -43,  1893,  1576,  1894,  1895,  1896,
     493,   493,   -43,  1899,  1901,   -43,  1902,  1904,  1905,  1907,
     493,   493,   -43,  1909,  1910,  1919,   493, -2575, -2575, -2575,
   -2575, -2575,  1911, -2575, -2575,  1925,   493,  1930,  1931, -2575,
   -2575,    -2, -2575, -2575,  1932, -2575,  1217, -2575,  5239,   529,
   -2575,   529,  5239,   529,  1933,  1237, -2575, -2575, -2575, -2575,
   -2575, -2575,  1934, -2575,  5153,    71,  1935,  5153,  1217, -2575,
    1946,  1237,   529,   529,   529,   529,   529,   529,   529,   529,
     529,  1961,  1967, -2575, -2575, -2575,  1968, -2575, -2575, -2575,
    1970,  1972, -2575, -2575, -2575, -2575,   529,  5239,   529,  1973,
    1237,    71,  1217,  1140,  1217,   529, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575,   529,  1140,  1140,
   -2575,  1217,  1140,  1217,   529, -2575, -2575,  1217,  1140,  1217,
    1140, -2575, -2575, -2575, -2575,   529,   529,   529,   529,   529,
     529,   529,   529,   529,   529,  2290, -2575,   529,   529,   529,
     529,   529,   529,   529,   529,   529,   529,   529,  3085,  1974,
     529, -2575,   529,   529,   529,  1976,  1977, -2575, -2575,  1217,
     -41,  1978,  1217,  1217, -2575, -2575,  1140, -2575,   529, -2575,
    1981,  1217, -2575, -2575, -2575, -2575, -2575, -2575, -2575,   847,
     847,   847, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,   529, -2575,
   -2575,   529, -2575,   529,  1217,   529, -2575,  1140,   529, -2575,
     529, -2575,  1820,  1982,  1983, -2575,  1985,   529,   529,  1986,
    1217,  5239, -2575, -2575,   529, -2575,   529, -2575,   -41,   121,
     529,  1987, -2575,   529,    28, -2575, -2575,  1989,  1990,  1991,
    1992,  1217, -2575,   121,   121,   121,  1217, -2575,   121,   -41,
     121,   121,  1217, -2575,   121,   121,   121,  1217, -2575,   121,
     121,  1217,  5239,   121,  1217,   121,   121,  1217,   121,  1217,
   -2575,  1993,  1994,  1995,  1996,  1217, -2575, -2575,  1999,    28,
    2000, -2575,   529, -2575, -2575, -2575, -2575,  2002, -2575, -2575,
   -2575, -2575,    -2,   493, -2575, -2575, -2575, -2575, -2575, -2575,
    2003, -2575, -2575,   493,  2004,  2005,  2006,   493,   493,   -43,
    2008,  2009,  2010,  2011,  2013,  2017,   493,   493,   -43,  2019,
    2021,  2022,  2024,  2025,  2026,   493,   493,   -43,  2028,  2031,
    2032,   493,    -2,    -2,    -2,    -2,    -2,  2034,    -2,    -2,
    2035,   493,   493,    -2,    -2,    -2,    -2,    -2,  2037,    -2,
      -2,  2039,   493,   493, -2575, -2575, -2575, -2575, -2575,  2040,
   -2575, -2575,  2041,   493, -2575, -2575, -2575, -2575, -2575,  2043,
   -2575, -2575,   493, -2575,   493,  2044, -2575,  2046,  2047, -2575,
    2720, -2575,   121,  2048,  5153,   121,   529,  5239,  2049, -2575,
     121, -2575, -2575, -2575,   121, -2575, -2575,  5239,  2051,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   529,
   -2575, -2575, -2575,  5153,   121,   529,  5239,  2052, -2575,  1140,
    1140,  1140,   529,  5153,  1140,   529,  1140,  1140,  5239,  5153,
    1140,   529,  1140, -2575,   529,   529,   529,   529,   529,   529,
    1237,   529,   529,   529,  1505,  1521,  1591,  1632,  1663,  1691,
    1712,  2290, -2575,  1713, -2575, -2575,  1237,   529,   529,   529,
     529,  1237,   529,   529,   529,   529,   529,   529,  1217,   529,
    1688,  1237,   529,   529, -2575, -2575,   -41,    71,  2055,  2056,
   -2575, -2575, -2575, -2575, -2575,   -41, -2575, -2575, -2575,   529,
   -2575, -2575,  1140,   529, -2575, -2575, -2575,  1063,  2057,  2058,
   -2575,   529,  2060,  1117, -2575,   121, -2575, -2575, -2575, -2575,
    2061, -2575, -2575,  2063,  2064,  2065,  5239,  2066, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,   -41,   121, -2575,   -41, -2575, -2575,
     -41, -2575,   -41,  2069,  2071,  5239,  2074, -2575,  2076,  2078,
   -2575,   529, -2575, -2575,    -2,   493, -2575,    -2,    -2,    -2,
      -2,    -2,  2079,    -2,    -2,   493, -2575, -2575, -2575, -2575,
   -2575,  2080, -2575, -2575,   493,    -2,    -2,    -2,    -2,    -2,
    2081,    -2,    -2,   493,    -2, -2575, -2575, -2575, -2575, -2575,
     493, -2575, -2575,  2082,    -2,    -2, -2575, -2575, -2575, -2575,
   -2575,   493, -2575, -2575,  2083,    -2, -2575,   493,  2084, -2575,
     493, -2575, -2575,   493, -2575, -2575,  1217, -2575,  5153,   121,
   -2575, -2575,  2085,  1217,   529, -2575, -2575,  1217,   529, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,   529,   529,
     121, -2575, -2575,  2086,  1217,   529,  1140, -2575, -2575, -2575,
     121, -2575,   529, -2575,  1140, -2575,   121,   121, -2575,  5239,
    1237, -2575,   529,  2088,  2088,   529,   529,  2088,  1237,  2088,
   -2575,  5239,  1006,  2092,  2089,  2094,  2095,  2096,  2098, -2575,
      71,  1237,  2088,  2088,   529,   529,  1237,   529,   529,   529,
     529,   529, -2575,  1140,   529,  2099, -2575, -2575,   529,  2088,
      71,    13, -2575,  2101,    71, -2575, -2575, -2575,  2102,   529,
   -2575,  2103,  2105,  1838,   529, -2575, -2575,    50, -2575,  2106,
     108,  5239, -2575, -2575, -2575, -2575, -2575, -2575,  2107,   108,
    5239, -2575,    50,   529, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575,   493, -2575, -2575,    -2,   493, -2575, -2575, -2575, -2575,
   -2575, -2575,   493, -2575, -2575,    -2, -2575,    -2,   493, -2575,
   -2575,    -2,   493, -2575, -2575,   493, -2575, -2575,   529,   121,
   -2575, -2575,  5153,  5239,   529,  5239,   529, -2575, -2575, -2575,
    5153,  5239,   529, -2575, -2575,  5239, -2575, -2575, -2575,   121,
   -2575,  2109, -2575, -2575, -2575,  1237,   529, -2575,  2110, -2575,
   -2575,  1217,  2111, -2575,  2116, -2575, -2575, -2575, -2575, -2575,
    2117, -2575, -2575,  1237,   529,  2122, -2575, -2575,   529,  5239,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575,    13,  1610,  1827,
   -2575, -2575,  2123,  2125, -2575,  1966,  2127,   110, -2575, -2575,
   -2575,  5239, -2575, -2575, -2575, -2575,  5239, -2575, -2575, -2575,
    2128,    -2, -2575, -2575,    -2, -2575, -2575,    -2, -2575,    -2,
   -2575,  2720, -2575,   121, -2575,   121,   529,   121,  2129,   121,
   -2575,   121,   529,   121,   529, -2575, -2575, -2575, -2575,  2131,
   -2575,   529, -2575, -2575,  2134, -2575,   529, -2575, -2575, -2575,
    2136,   529, -2575, -2575, -2575,  1217, -2575, -2575, -2575,  1610,
   -2575,  1726,  1797,  1827, -2575,  2139,  2141,  2137, -2575, -2575,
   -2575, -2575,   712,   712,  1217,  1217, -2575, -2575, -2575, -2575,
   -2575,   121, -2575, -2575,  2144, -2575,  5153, -2575, -2575,  2145,
   -2575,  1237, -2575, -2575,  1237,   529, -2575, -2575,   529, -2575,
    1237,   529, -2575,  5239, -2575,  1726, -2575,    71, -2575,  2147,
    2148, -2575,   529,   529,   529,   529,   108,   108,  2149,  5153,
    1217, -2575,  5153, -2575, -2575,   529,  2146, -2575,   529,   121,
   -2575, -2575, -2575,  2151,  2152,   529,  2153,   529, -2575, -2575,
   -2575,  1217, -2575, -2575,  1217, -2575, -2575,  2155, -2575, -2575,
    2156, -2575, -2575, -2575,  2157, -2575,  2158, -2575, -2575,  1237,
   -2575,  1237, -2575, -2575, -2575, -2575, -2575, -2575, -2575
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2575, -2575,    -4, -2575,   316, -2575, -1813,  -929,  1624, -2575,
     735,  -319,  1886,   -49,  1105, -1652,  1774,  1835,  -868,   778,
    -944,  1873,  1568, -2575, -1062, -2575, -2329, -1138, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,  -766,  -489, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575,  -491, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -1452, -2575, -2575, -2575, -2575, -2575,  -647, -2575,
   -2575, -2575, -2575, -2575, -2575,   440, -2575, -2575, -2575, -2575,
    -168,  -658, -2078,  -537, -2575, -2575, -2575, -2575,  -559,  -554,
   -2575, -2575, -2574, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575,  1439, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575, -2575,
   -2575, -2575, -2575, -2575, -2575, -2575, -2575
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1248
static const yytype_int16 yytable[] =
{
      70,   347,   861,  1896,  1578,  2044,  1583,  2046,   107,  1097,
    1247,  1248,  1249, -1103,   891,  1071,  1074,  1506,  1066,    67,
      68,  1968,   268,  1362,    67,    68,  1365,   109,   258,   289,
    1488,  1103,  1613,  1614,  1615,   773,   311,   637,    67,    68,
     776,    67,    68,  1396,   408,   341,  1644,   560,   352,  1110,
     298,    67,    68,   274,   367,   275,  1196,  1471,   373,   269,
     109,   380,   386,    67,    68,   383,   385,  1411,  1049,   394,
    1694,  1331,   400,   404,  1496,   109,   407,   586,   755,   376,
     411,   336,  2658,   984,   112,   412,   616,    67,    68,   259,
     109,   293,   887,  1747,  1917,  1711,  1704,    58,   425,  1101,
     434,   435,   439,   441,  1709,    67,    68,    67,    68,  1050,
     705,   260,  1060,    67,    68,  1918,  1255,   109,  1919,   445,
     847,  1345,   746,  1722,   840,    67,    68,    67,    68,  1920,
     985,   109,   866,  1438,    67,    68,  1884,   843,    59,  1413,
    2662,   114,   102,  1111,   112,  1674,  1675,  2766,   299,  1112,
    1483,  1472,  1921,  1341,   457,   631,    60,  1326,   850,   413,
     261,   103,   561,   820,   821,   497,   620,  1076,  1497,  1922,
     276,  1077,   632,   498,   114,   892,  1886,  1723,   490,   749,
     305,  1342,  1061,   511,   319,    61,   978,   545,    79,   114,
     109,  2790,   867,   752,   219,    57,  1556,    67,    68,   617,
     337,  1159,    62,   848,   114,  1484,    63,    54,  1557,  1067,
     220,   851,   104,   160,  1197,   706,  1346,    64,  1676,   300,
    2667,   568,  1104,   117,   270,    55,  1256,   309,   301,   118,
     119,   114,  1724,   320,   483,  1712,  1051,   271,  1327,   484,
     120,  1078,   618,    67,    68,   114,   696,  1889,   633,   387,
    1052,  1053,   756,  1414,   979,   587,   117,   986,   644,   645,
    1319,  1079,   118,   119,  1062,  1645,   562,  1489,   321,  1160,
    1469,   117,  1439,   680,   277,   485,   546,   118,   119,   338,
     409,   682,   685,  1695,   688,   692,   117,   694,  1068,  1713,
     390, -1103,   118,   119,   105,   638,  2729,   704,   272,   486,
     120,  1105,   388,  1748,   114,   713,   715,  1473,   625,  1705,
    1507,   774,   122,   117,  1969,   893,   777,  1710,   262,   118,
     119,   310,   377,  1080,  1498,  2659,   987,   117,   758,   759,
     764,   162,   766,   118,   119,   988,   769,   770,   239,  1113,
    1440,  1054,  1055,   264,   487,   122,    69,   782,   784,  1885,
     296,   785,   786,   787,   788,   789,   790,   791,   792,   793,
     122,   152,  1481,   794,   263,   153,   154,   989,   797,   799,
     340,    65,  1699,  1102,  1125,   122,   800,   414,  1663,   801,
    1500,   294,  1441,  2663,   106,  1667,   117,   488,   489,  1887,
     396,   295,   118,   119,   152,   306,   810,   811,   153,   154,
     391,   621,   122,   815,   816,   817,  2730,   818,   351,   152,
     372,  1923,  2620,   153,   154,  1947,   122,  1081,   307,   626,
    1671,   825,   322,  1538,   152,   826,    67,    68,   153,   154,
     831,   832,   833,   834,   835,   836,   569,   837,  2644,   802,
     841,   842,  1842,   392,   393,  1845,  2002,  2798,  2799,   488,
    2731,   152,  1129,   844,  1551,   153,   154,   736,   717,   570,
    1890,  1952,  1727,   576,  1470,   152,  1107,   742,   724,   153,
     154,  1042,   112,   577,  1490,   122,    80,   304,  1134,   459,
     460,   461,   462,   463,   464,   465,  1098,  1865,   466,   467,
     468,   469,   422,   627,    67,    68,   572,  1043,  1477,  1435,
     578,   401,   550,   803,    67,    68,   248,   873,   875,   177,
    1358,  1700,    81,   554,  1881,   737,   718,   611,   423,  1235,
      67,    68,  1130,  1155,   152,   883,   726,   573,   153,   154,
    1150,  1161,    67,    68,  1316,  2696,  2697,  1910,   938,  2700,
     743,  2702,   266,   628,   397,    67,    68,   256,  1135,  1049,
     905,   906,   904,  2707,  2708,   326,  1099,   112,  2712,  2713,
    1301,   858,  2716,  1251,   112,   327,   629,  2717,  2718,  1049,
     804,    67,  1183,   555,   579,  1166,   642,   643,   975,  1701,
     934,  1156,    82,   398,   551,    67,    68,  1216,  1151,  1162,
    1050,  1579,   328,  1463,   402,  1217,   325,   994,   574,  1475,
     859,   279,  1728,   687,  1131,  1476,   907,   222,    67,  1267,
    1050,   580,   908,  1436,   949,   552,  1478,  2752,  1190,  1191,
    2753,  1702,   436,  1302,  1152,  2756,  1044,  1585,   120,  1073,
    1136,  2759,   223,  1167,   744,  1721,  2762,   719,  1100,  1591,
     993,   559,   961,   747,   750,   753,  1730,  1303,   599,  1580,
    1359,   962,   963,   805,  1188,   531,  1729,  1069,   806,   909,
    1082,  1599,   738,   720,    83,   224,   329,   403,  1491,   532,
    1132,  2534,   225,   732,   581,   910,  1045,   303,  1117,  1118,
    1119,  1120,   226,   227,  1121,  1586,  1123,   911,  1124,   228,
    1126,   533,   437,   912,   913,  1313,  1137,  1592,   964,   914,
     349,  1046,   854,   330,   612,   354,  2806,  1464,   365,  2809,
     534,   229,    84,   120,   600,    67,    68,  1051,  1306,  1600,
     120,  1603,  1189,  1304,  1691,   582,   535,   230,  1157,   536,
    2820,  1052,  1053,  2822,  1380,  1153,  1163,  1051,  1697,  1070,
    1866,   369,   231,  1381,  1382,   331,  1321,  2827,  2828,   232,
     915,  1052,  1053,   601,   537,   538,  1177,  1178,  1179,  1180,
    1181,  1706,  1182,  1184,  1186,  1187,   332,   370,   595,   916,
     233,   371,  1305,   917,   438,   918,   375,  1199,  1200,  1604,
    1168,  1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,
    1383,   602,  2047,  1213,  1214,   855,  1581,   406,   919,   920,
     442,   333,  2698,  1562,   416,   234,   921,   539,   418,    67,
      68,   596,  1220,  1221,  1222,   540,   420,   334,    67,    68,
    2709,  2107,  1054,  1055,   922,   965,   966,   240,  1867,  1230,
    1231,  1232,  1587,  1234,   458,  1236,  1794,  1237,  1692,   950,
     951,  2120,  1054,  1055,  1593,  1795,  1796,  1307,   858,   697,
     470,  1401,  1698,   235,   241,   760,  2157,   471,  1240,  2160,
    1242,  2306,  2307,  2308,   236,   366,  1601,  2168,   856,   481,
    2171,  1245,   541,   542,   493,  1707,   495,  1868,  2179,  1252,
     923,  2182,    67,    68,  1254,   698,   952,   859,  2189,  1572,
    1573,   522,  1797,   237,   967,  1869,  1715,  1308,   548,  1268,
    1270,   549,  1716,   968,   969,  1193,  1194,  1311,   970,  1314,
    1317,    67,    68,   313,   597,   564,  1322,  1384,  1385,  1402,
     558,  1328,  1309,   242,  1371,   761,  1605,    86,   945,   565,
    1329,  1664,   567,   699,   585,   971,  2208,   243,    67,    68,
     591,  2784,   593,  1718,   543,  1337,   614,  2787,   615,    67,
      68,   619,  2218,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,  2237,  1085,  1870,   623,   280,  1386,  1108,  1403,  1404,
    1760,  1761,  1410,   244,  1444,  1387,  1388,  1719,   314,  1508,
    1389,   379,  1405,   635,  1509,  1638,  2825,   762,  2826,   640,
     315,   679,  1474,   953,   954,   641,  1574,  1575,   646,  1798,
    1799,  1445,    67,    68,  1446,  1510,  1511,  1390,  1512,  1513,
     382,   798,  1871,  1499,   245,   700,   763,  1762,   678,  1514,
    2622,  1406,  1505,  1576,   246,   681,  1417,   695,    87,   702,
    1452,  1515,  1516,   703,  1447,   708,  1533,   781,  1534,  1517,
    1720,   710,  1518,  1535,  1536,  1537,    67,    68,    67,    68,
    1858,    88,  1418,  1543,   722,    89,  1544,  1453,  1547,  1519,
    1454,  1448,   955,  1455,  1449,  1520,  1521,   716,  1800,  1522,
     316,   956,   957,   740,  1549,   741,  1550,  1801,  1802,  1805,
    1553,  1554,  1803,   317,   767,  1419,  1541,  1542,  1806,  1807,
    1456,  1420,  2297,   768,  1560,  1561,  1421,  1902,  1903,  1563,
    1564,   281,  2528,   958,    90,  1565,   282,  1566,   283,  1804,
    1568,    96,  1569,    67,    68,  1422,  1224,  1457,   291,  1625,
    1458,   771,  1212,    67,    68,    86,   779,    97,  1523,   426,
     427,   428,   796,  1816,  1423,  1808,    67,    68,  1862,   795,
      91,  1929,  1817,  1818,  1763,  1764,   828,   829,    92,    93,
    1424,   809,   812,  1616,  1617,  1618,  1619,   813,  1620,  1622,
    2328,   814,  1624,   819,   426,  2382,    67,    68,  1864,   822,
    1408,  1409,  1780,  1781,  2391,  1450,   824,  1630,   428,  1425,
    1524,  2344,   845,  2400,   846,  1525,  1827,  1828,  1633,  1819,
    1635,  1636,  1637,  1639,    67,    68,  1907,  1642,  1643,   853,
    1526,   444,    98,   862,  1451,  1651,   864,  1987,   869,  1527,
     871,   885,  1656,  1765,  1682,  1426,  1657,  1658,  1659,  1782,
      67,    68,  1766,  1767,  1408,  1409,   900,  1665,  1427,   890,
    1668,  1459,   446,  1829,   895,   901,  1528,  1529,   902,  1428,
     903,  1678,    99,   932,  1680,   926,    87,    72,    67,    68,
     928,   930,    73,   249,  1768, -1245,   935,  1530,    67,  1621,
    1460,   936,  1809,  1810,   940,   944,  1429,   946,   947,    88,
     948,   960,   512,  2043,   520,   100,   525,   529,  1430,   959,
    1431,  1432,  1683,   972,   556,   683,  1461,  1732,    74,   980,
    1739,    67,    68,  1740,  1741,   982,  1742,   990,  1743,   584,
     983,  1531,   991,   447,  1745,   992,  1746,  2124,  2125,  1048,
    1057,  2488,    75,  1752,  1064,  1059,  1820,  1821,  1065,  1114,
    1433,  1116,    90,   448,   449,   450,  1115,  2501,   711,  1127,
     451,  1811,  2506,  2133,  2134,  1139,   355,  1140,   250,  1502,
    1812,  1813,  1141,   452,  1142,  1814,  1783,  1784,  1144,   453,
     251,  1684,  1685,  1145,  2126,   684,  1143,    76,    91,   454,
    1830,  1831,   356,   357,  1146,  1686,    92,    93,  1147,  1148,
    1165,  1172,  1815,   690,  1170,  1171,   358,    67,    68,  1880,
    2135,  1408,  1409,  1173,   252,  1822,  1174,  1175,  1859,  1176,
    1861,  1863,  1410,  1548,  1823,  1824,  1192,  1195,   712,  1825,
    1201,    77,  2614,  1555,  1687,  2617,  1211,  2619,  2520,  1215,
    1218,  1219,  1874,  2142,  2143,  1785,  1877,  2524,  1223,  1410,
    2631,  2632,   359,   360,  1786,  1787,  1826,  1225,  1226,  1832,
     253,    67,    68,  1909,  1238,  1408,  1409,  2646,  1833,  1834,
    1906,  1908,  1410,   254,  1239,  1259,  1260,  1261,  1264,  1266,
    1916,  1265,  1312,  1318,  1927,  1320,  1788,  1330,  1324,  1334,
    2144,  1934,  1335,  1338,  1339,  1340,  2542,  1348,  1349,  2544,
    1835,   455,  2545,  1350,  2546,  1941,  1351,  1353,  1354,  1355,
    1943,  2127,  2128,  1356,  1945,  1357,  1948,  1949,  1363,  1951,
    1953,  1954,  1364,  1957,  1366,  1733,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,  1967,  1970,  1972,  1973,  2136,  2137,  1975,
    1976,  1977,  1978,  1367,  1373,  1375,  1376,  1378,  1391,  1984,
    1985,  1648,  1649,  1392,  1988,  1989,  1990,   839,  1393,  1992,
    1993,  2610,  1394,  1397,  1412,   361,  1398,   362,  1399,  2618,
    1415,  1995,  1996,  1416,  1997,  1998,  1437,  1442,  1467,  1465,
    2129,  1468,  2630,  1443,  1466,  1462,  1482,  2635,  1485,  2130,
    2131,  1486,  1487,  1734,  1492,  1495,   647,   648,  1493,  1494,
    1501,  1503,  1504,  1571,  2240,  1540,  2138,  1552,  1558,  1559,
    1567,  1584,  1570,  1589,  1590,  2139,  2140,  2145,  2146,  2244,
    2245,  2132,  1595,  2247,  1596,  2018,  2019,  1629,  1597,  2251,
    2021,  2253,  1598,  1634,  1607,  2023,  2026,  1608,  2028,  2029,
    2030,  1609,  2031,  2032,   363,  2034,  1031,  2141,  2037,  2038,
     888,   163,   649,  1610,  1611,  1612,  1640,  2041,   650,  1641,
    1032,  1627,  1735,  1736,  2045,   651,   164,   652,   165,  1033,
    2050,  2051,   653,  1628,  1647,   654,  1737,  2302,  2053,  1034,
    1652,   655,   925,  1653,  2054,  1654,  2147,  1661,  1666,  1679,
    1669,   656,  1673,  -450,  1681,  2148,  2149,   657,   166,  1670,
    1690,  1693,   724,  1703,  1708,   658,   167,   472,  1717,  1035,
    1714,  1725,  1750,  1731,  1726,  1738,  1744,  1751,  2314,  1756,
    2082,   659,  1775,  1778,  1836,   473,  1789,  2150,  1036,  1791,
    1793,  1837,  1838,  1855,  1839,  1843,  1844,  1882,  1846,  1860,
     660,  1847,   474,  1848,  1851,  1883,  1854,  2096,  2097,  1872,
    1876,  1888,  2099,  1891,   475,  1893,   661,   725,  2102,  1892,
     726,  1873,   168,  1894,  1875,   662,   663,  1895,  1879,  1897,
    1898,   476,  1899,  1037,  1904,   477,  1925,  1946,  1944,  1900,
    1981,  1950,  1901,  1958,  1994,   664,   478,  1959,  1999,  1905,
    1974,  2000,  2001, -1247,  2003,  1911,   727,  2004,  2005,  2006,
    2007,  2151,  2008,  1926,  2009,  2010,   665,  1930,  2011,  1038,
    2012,  2013,   169,  2014,  2017,  1935,  1936,  2015,  2016,   666,
    2033,   667,  2035,  2036,  2039,  2052,  1942,   479,   170,   171,
    2055,   728,  2783,  1039,   668,   172,  2057,   173,  2058,   669,
    2059,  2060,  2317,  2091,  2092,   670,  2093,  2094,  2098,  2162,
    2173,  2100,   671,  2101,  2656,  2104,  2105,  2106,  2108,  2109,
    2492,  2110,   174,  2113,  2121,  2203,  2115,  2204,  2116,  2206,
     672,  1410,  1040,  2117,  1041,  2122,  2493,  2123,   729,  2152,
    2153,   730,  2154,   673,   674,  2158,   675,  1410,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2226,  2227,  2159, -1116,  2161,
    2163,  2733,  2164,  2165,   731,  2169,  2170,   732,  2172,  2174,
    2175,  2176,  2233,  2180,  2235,  2181,  1410,  2183,   733,  2184,
    2185,  2242,  2186,  2190,  2191,  2194,   676,   175,  1086,   290,
    2466,  2467,  2468,  2243,  2192,  2472,  1087,  2474,  2475,  2195,
    2249,  2479,  1088,  2481,  2197,  2198,  2494,  2200,  2207,  2209,
    2213,  2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,
    2263,  2217,  1089,  2276,  2277,  2278,  2279,  2280,  2281,  2282,
    2283,  2284,  2285,  2286,  2287,  2228,  2290,  1241,  2291,  2292,
    2293,  2229,  2727,  2230,  2231,  1090,  2232,  2495,  2236,  2289,
    2294,  2295,  2298,  1091,  2303,  2304,  2515,  2318,  2319,  2320,
    2323,  2722,  2331,  2526,  2334,  2335,  2336,  2337,  2363,  2364,
    2365,  2366,   443,  2368,  2268,  2370,  2372,  2375,  2496,  2377,
    2378,  2379,  2383,  2384,  2309,  2385,  2386,  2310,  2387,  2311,
    1092,  2313,  2388,  2392,  2315,  2393,  2316,  2394,  1093,  2395,
    2396,  2397,  2401,  2321,  2322,  2402,  2497,  2403,  2410,  2413,
    2326,  2421,  2327,  2424,  2427,  2428,  2330,  2430,  2433,  2332,
    2434,  2435,  2438,  2444,   827,  2448,  2465,  2498,  2500,  2522,
    2523,  2669,  2530,  2531,  2533,  2722,  2536,  2537,  2538,  1094,
    2539,  2541,   509,  2547,   516,   519,  2548,   524,   528,  2550,
    1095,  2551,  2552,  2561,  2565,  2572,  2578,  2582,  2585,  2592,
    2600,   179,  2612,  2624,   180,  1096,   181,  2623,  2371,  2625,
    2626,  2627,  2628,  2499,  2643,   589,  2650,  2652,  2654,  2655,
    2719,  2661,  2666,  2695,  2701,   182,  2704,   183,   184,   185,
    2705,  2706,   604,   609,  1480,   693,  2711,   186,  2725,   187,
    2726,  2728,  2736,  2746,   188,  2754,   189,   190,   191,  2757,
    2760,  2771,  2767,   192,  2769,   193,  2770,  2603,  2779,  2782,
    2808,  2436,  2792,  2793,  2800,  2606,  2812,  2813,  2815,  2819,
    2821,   808,  2823,  2824,  2768,  2764,  1149,     0,     0,     0,
       0,     0,     0,   194,   689,     0,     0,     0,     0,     0,
       0,     0,   780,     0,     0,     0,  1546,     0,     0,   195,
       0,  2212,   709,     0,  2641,     0,     0,     0,     0,     0,
     196,   197,  2442,     0,   198,     0,     0,     0,   199,     0,
     200,     0,     0,     0,     0,  2449,  2450,  2451,  2452,  2453,
    2454,  2455,  2456,  2457,  2458,  2459,     0,  2238,     0,     0,
       0,  2463,   201,   202,     0,     0,   203,     0,  2469,     0,
       0,  2473,     0,  2773,  2775,   204,     0,  2480,     0,     0,
    2482,  2483,  2484,  2485,  2486,  2487,  1410,  2489,  2490,  2491,
     205,   206,     0,     0,     0,     0,     0,     0,   207,     0,
       0,     0,  1410,  2502,  2503,  2504,  2505,  1410,  2507,  2508,
    2509,  2510,  2511,  2512,     0,  2514,     0,  1410,  2518,  2519,
     208,     0,   209,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2525,  1632,     0,   823,  2527,
       0,     0,     0,  2529,     0,   210,     0,  2532,     0,   830,
       0,     0,     0,     0,     0,     0,     0,     0,   838,     0,
       0,   211,   212,     0,     0,     0,     0,     0,     0,     0,
     213,     0,     0,     0,   872,  2264,     0,   214,     0,     0,
       0,   878,     0,   215,   879,   216,  2265,     0,     0,   880,
       0,     0,  1672,   882,     0,     0,     0,  2553,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1689,     0,     0,
       0,  1086,  2266,     0,     0,     0,     0,     0,     0,  1087,
       0,   217,     0,     0,     0,  1088,     0,   874,     0,     0,
     876,   877,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   881,     0,  1089,     0,     0,   884,  2267,
       0,     0,     0,     0,   939,     0,     0,   896,   898,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1090,     0,
    2594,     0,     0,     0,  2596,     0,  1091,     0,     0,     0,
       0,     0,     0,     0,  2597,  2598,     0,     0,     0,     0,
       0,  2602,     0,     0,     0,     0,     0,     0,  2605,     0,
       0,     0,     0,     0,     0,     0,  1410,     0,  2611,     0,
       0,  2615,  2616,  1092,  1410,     0,     0,     0,     0,     0,
       0,  1093,   941,   942,   943,     0,     0,  1410,     0,     0,
    2633,  2634,  1410,  2636,  2637,  2638,  2639,  2640,     0,     0,
    2642,     0,     0,     0,  2645,     0,  1857,     0,     0,     0,
       0,     0,  1344,     0,  1122,  2653,     0,     0,     0,     0,
    2657,  1128,  1094,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1095,     0,     0,     0,     0,     0,  2670,
       0,  1084,     0,     0,  1395,     0,     0,     0,  1096,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2268,     0,
    2269,     0,     0,    67,    68,  1913,     0,     0,  1915,     0,
       0,     0,     0,     0,  2681,     0,     0,     0,  1932,   110,
    2686,     0,  2688,     0,     0,     0,  1938,     0,  2692,     0,
       0,     0,     0,  1940,     0,     0,     0,     0,     0,   285,
       0,  1410,  2699,  2521,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2270,     0,   112,     0,     0,  1410,
    2710,     0,  2741,     0,  2714,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2732,     0,     0,     0,     0,  1227,     0,
       0,     0,     0,     0,     0,  1229,     0,     0,     0,     0,
       0,   113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2744,     0,     0,     0,     0,     0,  2749,     0,
    2751,     0,     0,     0,     0,     0,     0,  2755,     0,     0,
       0,     0,  2758,     0,     0,     0,     0,  2761,     0,     0,
    1228,  1246,     0,     0,     0,     0,  1250,     0,     0,  1253,
       0,     0,  1233,     0,     0,   115,     0,     0,  2772,  2774,
       0,  1262,     0,     0,  2025,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1410,     0,     0,
    1410,  2785,     0,     0,  2786,     0,  1410,  2788,     0,  1243,
    1244,     0,   286,     0,     0,     0,     0,     0,  2794,  2795,
    2796,  2797,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2807,   120,  1263,  2810,     0,     0,   121,     0,     0,
       0,  2814,     0,  2816,     0,     0,     0,   287,     0,  2067,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2073,
       0,     0,     0,     0,  2078,  1410,  2629,  1410,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2329,     0,  1400,
    1333,     0,     0,     0,     0,     0,  2647,     0,     0,  1361,
    2651,  2339,  2340,  2341,     0,     0,  2343,     0,  2345,  2346,
       0,     0,  2348,  2349,  2350,     0,   288,  2352,  2353,     0,
       0,  2356,     0,  2358,  2359,     0,  2361,     0,     0,     0,
       0,     0,     0,     0,     0,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,  1479,  1753,  1754,  1755,     0,
       0,     0,     0,     0,     0,     0,  1757,  1758,  1759,     0,
       0,     0,     0,  1770,  1771,  1772,     0,     0,  1773,  1774,
       0,  1776,  1777,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1539,    67,    68,
       0,  1849,  1850,     0,     0,  1852,  1853,  1545,     0,     0,
       0,     0,     0,     0,   110,     0,     0,     0,     0,  2211,
    2437,     0,  2215,  2441,     0,     0,     0,     0,  2445,     0,
       0,     0,  2446,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,  2462,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1626,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,  1650,     0,     0,     0,     0,     0,     0,
    1623,     0,     0,     0,     0,     0,     0,     0,  1660,     0,
       0,     0,     0,  2791,     0,     0,     0,  1631,    67,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2535,   110,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1655,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1662,     0,  2543,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1688,  2333,
       0,     0,     0,  1696,     0,     0,     0,   120,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2369,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2591,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1769,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2599,  1779,
     115,     0,     0,     0,     0,     0,     0,     0,  2604,     0,
       0,     0,     0,     0,  2607,  2608,     0,  1840,  1841,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1856,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     0,  2440,
       0,     0,     0,     0,  1928,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2103,     0,     0,  1878,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2111,  2461,     0,
       0,     0,     0,     0,     0,     0,     0,  2114,  2471,     0,
       0,     0,     0,     0,  2478,     0,  1912,     0,     0,  1914,
       0,     0,     0,     0,     0,     0,     0,  2682,     0,  1931,
    1933,     0,     0,     0,  1980,     0,     0,  1937,     0,     0,
    1986,     0,     0,     0,  1939,     0,     0,  2694,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     0,  2199,
       0,     0,     0,     0,  1979,     0,     0,  1982,  1983,     0,
       0,     0,     0,     0,     0,     0,     0,  1991,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2022,  2742,     0,  2743,     0,  2745,  2027,  2747,     0,  2748,
       0,  2750,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2042,     0,     0,     0,     0,     0,     0,  2048,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2020,     0,
       0,     0,     0,     0,     0,  2024,     0,     0,     0,  2778,
       0,     0,     0,  2062,     0,     0,     0,     0,     0,     0,
       0,  2069,     0,  2040,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2590,     0,     0,     0,     0,     0,  2049,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2811,  2056,     0,
       0,     0,     0,  2061,     0,     0,  2063,     0,  2064,  2065,
    2066,  2068,     0,     0,  2070,     0,     0,  2071,     0,     0,
    2072,  2074,     0,  2075,  2076,  2077,  2079,     0,  2080,  2081,
       0,     0,     0,     0,  2083,  2084,  2085,     0,  2086,  2087,
       0,     0,     0,     0,  2088,  2089,     0,     0,     0,  2090,
       0,     0,     0,     0,  2095,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2112,     0,
       0,     0,     0,     0,     0,     0,  2118,  2119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2155,  2156,     0,     0,     0,     0,     0,     0,     0,
    2373,     0,  2166,  2167,     0,     0,     0,     0,     0,     0,
       0,  2201,     0,  2177,  2178,     0,     0,  2684,     0,     0,
       0,     0,     0,  2187,  2188,  2690,     0,     0,     0,  2193,
       0,     0,     0,  2216,     0,     0,     0,     0,     0,  2196,
    2405,  2406,  2407,  2408,  2409,     0,  2411,  2412,     0,     0,
       0,  2416,  2417,  2418,  2419,  2420,     0,  2422,  2423,     0,
       0,     0,     0,     0,  2202,     0,     0,  2239,  2205,  2241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2210,     0,     0,  2214,     0,     0,  2246,     0,  2248,     0,
       0,     0,  2250,     0,  2252,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2234,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2296,     0,     0,  2300,  2301,     0,
       0,     0,     0,     0,     0,     0,  2305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2781,     0,     0,  2288,     0,     0,     0,     0,  2312,
       0,   109,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2324,   110,     0,     0,     0,
       0,     0,     0,     0,  2802,     0,     0,  2805,     0,     0,
       0,     0,     0,     0,     0,     0,  2338,   111,     0,     0,
       0,  2342,     0,     0,     0,     0,     0,  2347,     0,     0,
       0,     0,  2351,   112,     0,     0,  2354,     0,     0,  2357,
       0,     0,  2360,     0,  2362,     0,     0,  2325,     0,     0,
    2367,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2554,     0,     0,  2556,  2557,  2558,  2559,  2560,
       0,  2562,  2563,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,  2567,  2568,  2569,  2570,  2571,  2355,  2573,
    2574,     0,  2576,     0,     0,   114,     0,     0,     0,     0,
       0,     0,  2579,  2580,     0,     0,  2374,     0,     0,     0,
       0,     0,     0,  2583,     0,     0,  2376,     0,     0,     0,
    2380,  2381,     0,     0,     0,     0,     0,     0,     0,  2389,
    2390,     0,   115,     0,     0,     0,     0,     0,  2398,  2399,
       0,     0,     0,     0,  2404,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2414,  2415,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2425,  2426,     0,     0,   116,
       0,     0,     0,     0,     0,     0,  2429,   117,     0,     0,
       0,     0,     0,   118,   119,  2431,     0,  2432,     0,   120,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2439,     0,     0,  2443,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2447,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2460,
       0,     0,  2464,  2513,     0,     0,     0,     0,     0,  2470,
       0,     0,  2672,     0,  2476,  2477,     0,     0,     0,     0,
       0,     0,     0,  2675,     0,  2676,   122,     0,     0,  2678,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,   527,     0,     0,     0,   152,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2540,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2737,
       0,     0,  2738,   112,     0,  2739,     0,  2740,  2555,     0,
       0,  2549,     0,     0,     0,     0,     0,     0,  2564,     0,
       0,     0,     0,     0,     0,     0,     0,  2566,     0,     0,
     897,  2588,     0,     0,     0,     0,  2575,     0,  2593,     0,
       0,     0,  2595,  2577,     0,   110,     0,     0,   113,     0,
       0,     0,     0,     0,  2581,     0,     0,     0,     0,  2601,
    2584,     0,     0,  2586,     0,     0,  2587,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2589,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   115,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2609,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2621,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,     0,     0,  2665,     0,     0,
       0,     0,     0,     0,  2671,     0,  2668,     0,  2673,     0,
       0,     0,     0,     0,     0,  2674,     0,     0,     0,     0,
       0,  2677,     0,     0,     0,  2679,  2703,     0,  2680,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2683,  2685,
       0,  2687,     0,   121,     0,     0,  2689,  2691,     0,     0,
       0,  2693,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       0,     0,     0,     0,     0,  2715,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2734,     0,     0,
    2763,     0,  2735,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2776,
    2777,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     0,
     343,     0,     0,     1,     0,     0,     0,   344,     0,     0,
       0,     0,     0,     0,     0,  2803,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     3,     0,     4,
       0,     0,  2780,     0,     0,     0,  2817,     0,     0,  2818,
       0,     0,     5,     0,     0,     0,     0,     6,     7,  2789,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
      11,     0,     0,     0,     0,  2801,     0,    12,  2804,    13,
      14,     0,     0,     0,     0,     0,     0,     0,    15,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,     0,
       0,     0,    19,     0,     0,    20,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,     0,    23,     0,     0,
       0,     0,     0,    24,     0,     0,   605,   110,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
      26,    27,    28,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,     0,
       0,   110,     0,     0,     0,     0,   606,     0,     0,     0,
       0,     0,     0,    32,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,    36,     0,     0,    37,     0,
     345,    38,   346,    39,     0,    40,     0,   500,   501,   113,
      41,   502,   973,     0,     0,     0,     0,   974,     0,     0,
       0,     0,   607,    42,     0,     0,     0,     0,    43,     0,
       0,     0,     0,   503,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    47,     0,
       0,     0,     0,   115,    48,     0,     0,    49,    50,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   115,    51,     0,
       0,     0,     0,     0,    52,     0,     0,     0,     0,     0,
     504,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   121,     0,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   506,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
       0,     0,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     608,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   507,     0,     0,
       0,     0,     0,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     0,     0,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,   508,   995,   996,   997,
       0,     0,     0,     0,     0,     0,     0,     0,  1271,  1272,
    1273,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   998,   999,     0,     0,  1000,
       0,     0,  1001,     0,     0,     0,  1274,  1275,     0,  1002,
    1276,   110,     0,  1003,     0,     0,     0,  1277,     0,     0,
    1278,  1004,  1005,     0,  1279,     0,     0,     0,     0,  1006,
    1007,     0,  1280,  1281,     0,     0,     0,     0,     0,     0,
    1282,     0,   110,     0,     0,     0,  1008,     0,   112,     0,
       0,     0,  1009,     0,     0,  1010,  1011,     0,     0,  1012,
       0,     0,     0,     0,     0,     0,  1283,  1284,     0,     0,
    1285,   110,     0,     0,     0,     0,  1013,     0,     0,   112,
       0,     0,     0,     0,     0,     0,     0,  1286,     0,     0,
       0,     0,     0,   113,     0,  1014,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1287,     0,  1332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1015,     0,
       0,     0,     0,     0,   113,     0,     0,     0,   110,  1288,
       0,     0,     0,     0,     0,     0,     0,     0,  1289,     0,
    1016,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1017,     0,
    1018,     0,     0,     0,     0,  1019,  1020,     0,   115,  1290,
       0,  1291,     0,     0,     0,     0,  1292,  1293,     0,  1021,
    1022,   110,     0,     0,     0,     0,     0,     0,     0,  1023,
    1024,  1294,     0,     0,   120,     0,     0,   115,     0,   121,
     113,  1295,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1025,     0,  1026,     0,     0,
       0,   514,     0,     0,     0,   120,  1296,     0,  1297,  1027,
     121,  1028,     0,     0,     0,     0,     0,  1029,  1298,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1299,     0,
       0,     0,     0,     0,   115,   518,     0,     0,     0,   121,
       0,     0,     0,   113,     0,     0,     0,     0,     0,     0,
       0,  1030,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1300,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,   121,   115,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,  1369,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,  1370
};

static const yytype_int16 yycheck[] =
{
       4,    50,   491,  1455,  1142,  1657,  1144,  1659,    12,   667,
     878,   879,   880,     0,     4,   662,   663,     5,    17,     3,
       4,     5,    20,   967,     3,     4,   970,     4,     5,    33,
       5,    17,  1170,  1171,  1172,     4,    40,     5,     3,     4,
       4,     3,     4,   987,     4,    49,    46,    66,    52,     5,
      70,     3,     4,    64,    58,    66,    97,    36,    62,    57,
       4,    65,     4,     3,     4,    69,    70,   996,    63,    73,
      21,   939,    76,    77,    36,     4,    80,    16,    13,    32,
      84,     4,    32,    14,    56,    89,     6,     3,     4,    66,
       4,     5,     4,    20,    27,    27,    21,    12,   102,     5,
     104,   105,   106,   107,    21,     3,     4,     3,     4,   104,
     148,    88,    40,     3,     4,    48,   131,     4,    51,   123,
     103,   164,    66,   167,   443,     3,     4,     3,     4,    62,
      61,     4,   191,    27,     3,     4,    21,   456,    53,   120,
      32,   118,    40,    99,    56,    24,    25,  2721,   168,   105,
     221,   130,    85,   155,   158,    93,    71,    17,   191,     5,
     137,    59,   181,     4,     5,   168,     5,    36,   130,   102,
     181,    40,   110,   176,   118,   165,    21,   221,   182,    66,
      61,   183,   110,   187,    50,   100,    87,   209,   278,   118,
       4,  2765,   251,    66,    83,    66,     5,     3,     4,   119,
     123,    87,   117,   186,   118,   276,   121,   238,    17,   208,
      99,   244,   110,    33,   255,   253,   259,   132,    97,   239,
    2549,    61,   208,   200,   222,   256,   241,   192,   248,   206,
     207,   118,   276,    99,   186,   167,   231,   235,    98,   191,
     212,   110,   246,     3,     4,   118,   295,    21,   186,   191,
     245,   246,   187,   234,   155,   194,   200,   188,   262,   263,
     918,   130,   206,   207,   192,   265,   285,   242,   134,   155,
      27,   200,   166,   277,   285,   227,   298,   206,   207,   202,
     240,   285,   286,   234,   288,   289,   200,   291,   287,   221,
     186,   278,   206,   207,   192,   263,   186,   301,   296,   251,
     212,   287,   244,   230,   118,   309,   310,   286,     5,   234,
     298,   280,   289,   200,   298,   305,   280,   234,   295,   206,
     207,   286,   275,   192,   286,   275,   257,   200,   332,   333,
     334,    15,   336,   206,   207,   266,   340,   341,    22,   295,
     234,   336,   337,    27,   296,   289,   286,   351,   352,   234,
      34,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     289,   338,  1020,   367,   341,   342,   343,   298,   372,   373,
     286,   286,    27,   279,   693,   289,   380,   223,  1246,   383,
    1038,   295,   276,   275,   282,  1253,   200,   339,   340,   234,
      74,   305,   206,   207,   338,   276,   400,   401,   342,   343,
     296,   240,   289,   407,   408,   409,   296,   411,   286,   338,
     286,   344,  2490,   342,   343,   221,   289,   286,   299,   116,
       4,   425,   288,  1070,   338,   429,     3,     4,   342,   343,
     434,   435,   436,   437,   438,   439,   276,   441,  2516,    30,
     444,   445,  1386,   339,   340,  1389,  1584,  2776,  2777,   339,
     340,   338,    40,   457,  1101,   342,   343,    61,    61,   299,
     234,   221,    27,    37,   221,   338,   280,    34,    61,   342,
     343,     4,    56,    47,    27,   289,     4,    37,    40,   163,
     164,   165,   166,   167,   168,   169,    40,  1416,   172,   173,
     174,   175,     5,   190,     3,     4,   132,    30,   120,   120,
      74,    78,     6,    94,     3,     4,    16,   511,   512,   142,
      17,   166,    40,     5,  1443,   119,   119,     4,    31,   838,
       3,     4,   110,    61,   338,   529,   119,   163,   342,   343,
      61,    61,     3,     4,    17,  2613,  2614,  1466,   587,  2617,
     107,  2619,     5,   240,   136,     3,     4,   226,   110,    63,
       4,     5,   556,  2631,  2632,    37,   110,    56,  2636,  2637,
      66,   136,  2640,   882,    56,    47,   263,  2645,  2646,    63,
     161,     3,     4,    65,   148,    61,   260,   261,   627,   234,
     584,   119,   110,   175,    88,     3,     4,     4,   119,   119,
     104,    61,    74,   120,   171,    12,     4,   646,   234,   256,
     175,    66,   167,   287,   192,   262,    60,    19,     3,     4,
     104,   185,    66,   234,   618,   119,   238,  2695,     4,     5,
    2698,   276,    40,   129,   155,  2703,   159,    61,   212,   123,
     192,  2709,    44,   119,   201,  1293,  2714,   240,   192,    61,
     644,   201,     5,   327,   328,   329,  1304,   153,   148,   119,
     157,    14,    15,   244,     6,    45,   221,   661,   249,   113,
     664,    61,   266,   266,   192,    77,   148,   244,   221,    59,
     258,  2323,    84,   266,   248,   129,   209,    88,   682,   683,
     684,   685,    94,    95,   688,   119,   690,   141,   692,   101,
     694,    81,   110,   147,   148,   204,   258,   119,    61,   153,
     226,   234,    78,   185,   191,     0,  2784,   234,     5,  2787,
     100,   123,   240,   212,   214,     3,     4,   231,    30,   119,
     212,    61,   771,   229,   120,   299,   116,   139,   266,   119,
    2808,   245,   246,  2811,     5,   266,   266,   231,   120,   253,
     105,   262,   154,    14,    15,   227,   204,  2825,  2826,   161,
     204,   245,   246,   253,   144,   145,   760,   761,   762,   763,
     764,   120,   766,   767,   768,   769,   248,     5,    44,   223,
     182,     4,   278,   227,   192,   229,     5,   781,   782,   119,
     266,   785,   786,   787,   788,   789,   790,   791,   792,   793,
      61,   291,  1660,   797,   798,   171,   266,     5,   252,   253,
     192,   283,  2615,  1122,    31,   217,   260,   197,     5,     3,
       4,    87,   816,   817,   818,   205,     5,   299,     3,     4,
    2633,  1765,   336,   337,   278,   188,   189,    88,   193,   833,
     834,   835,   266,   837,     4,   839,     5,   841,   234,    14,
      15,  1785,   336,   337,   266,    14,    15,   159,   136,    54,
     116,    82,   234,   265,   115,    40,  1800,    66,   862,  1803,
     864,  1999,  2000,  2001,   276,    59,   266,  1811,   244,   117,
    1814,   875,   262,   263,   278,   234,   168,   242,  1822,   883,
     334,  1825,     3,     4,   888,    90,    61,   175,  1832,    42,
      43,    33,    61,   305,   257,   105,   256,   209,     5,   903,
     904,    89,   262,   266,   267,     4,     5,   911,   271,   913,
     914,     3,     4,    26,   190,    66,   920,   188,   189,   150,
      16,   925,   234,   184,   973,   110,   266,    28,   612,   227,
     934,  1250,   277,   138,    89,   298,  1865,   198,     3,     4,
      72,  2754,    31,   167,   334,   949,     5,  2760,     4,     3,
       4,     4,  1881,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,  1910,   666,   193,     5,   201,   257,   671,   219,   220,
      14,    15,   996,   254,    22,   266,   267,   221,   111,    22,
     271,   122,   233,     5,    27,    59,  2819,   192,  2821,     4,
     123,     4,  1016,   188,   189,     5,   169,   170,     5,   188,
     189,    49,     3,     4,    52,    48,    49,   298,    51,    52,
     122,    12,   242,  1037,   295,   240,   221,    61,     5,    62,
    2492,   272,  1046,   196,   305,     5,    40,     4,   149,     4,
      22,    74,    75,     4,    82,     5,  1060,   122,  1062,    82,
     284,     4,    85,  1067,  1068,  1069,     3,     4,     3,     4,
       5,   172,    66,  1077,   119,   176,  1080,    49,  1082,   102,
      52,   109,   257,    55,   112,   108,   109,    97,   257,   112,
     203,   266,   267,     5,  1098,     4,  1100,   266,   267,     5,
    1104,  1105,   271,   216,   263,    99,     4,     5,    14,    15,
      82,   105,  1980,     4,  1118,  1119,   110,     4,     5,  1123,
    1124,   337,    59,   298,   225,  1129,   342,  1131,   344,   298,
    1134,    83,  1136,     3,     4,   129,   820,   109,    33,  1188,
     112,     4,    12,     3,     4,    28,     4,    99,   171,     9,
      10,    11,     5,     5,   148,    61,     3,     4,     5,     4,
     261,  1480,    14,    15,   188,   189,   431,   432,   269,   270,
     164,     4,     4,  1177,  1178,  1179,  1180,     4,  1182,  1183,
    2048,     4,  1186,     4,     9,  2129,     3,     4,     5,     5,
       7,     8,    14,    15,  2138,   223,     5,  1201,    11,   193,
     223,  2069,     5,  2147,   262,   228,    14,    15,  1212,    61,
    1214,  1215,  1216,  1217,     3,     4,     5,  1221,  1222,   168,
     243,   116,   174,     4,   252,  1229,     4,  1546,   176,   252,
     168,     4,  1236,   257,    82,   229,  1240,  1241,  1242,    61,
       3,     4,   266,   267,     7,     8,     5,  1251,   242,   194,
    1254,   223,    35,    61,   194,     5,   279,   280,     4,   253,
     194,  1265,   214,   221,  1268,    66,   149,   186,     3,     4,
      66,    66,   191,    26,   298,     0,     5,   300,     3,     4,
     252,   222,   188,   189,     5,     4,   280,     4,     4,   172,
     194,     5,   187,   176,   189,   247,   191,   192,   292,    87,
     294,   295,   150,    87,   199,    40,   278,  1311,   227,     5,
    1314,     3,     4,  1317,  1318,     4,  1320,     5,  1322,   214,
       4,   344,     5,   106,  1328,     4,  1330,    14,    15,     5,
      99,  2260,   251,  1337,     4,    17,   188,   189,     5,    17,
     334,     4,   225,   126,   127,   128,    17,  2276,    40,     4,
     133,   257,  2281,    14,    15,     4,    22,    97,   111,  1043,
     266,   267,     5,   146,     5,   271,   188,   189,     4,   152,
     123,   219,   220,     5,    61,   110,    87,   296,   261,   162,
     188,   189,    48,    49,     5,   233,   269,   270,    87,     5,
       4,     4,   298,   288,     5,     5,    62,     3,     4,     5,
      61,     7,     8,     4,   157,   257,     5,     5,  1412,     5,
    1414,  1415,  1416,  1097,   266,   267,     4,     4,   110,   271,
      12,   340,  2484,  1107,   272,  2487,     5,  2489,  2296,    12,
       4,     4,  1436,    14,    15,   257,  1440,  2305,     4,  1443,
    2502,  2503,   108,   109,   266,   267,   298,     4,     4,   257,
     203,     3,     4,     5,     5,     7,     8,  2519,   266,   267,
    1464,  1465,  1466,   216,     5,   165,     5,     4,     4,     4,
    1474,     5,    20,   252,  1478,   252,   298,     5,   280,     4,
      61,  1485,     5,     5,     5,     5,  2354,     4,     4,  2357,
     298,   274,  2360,     5,  2362,  1499,     5,   264,   264,     5,
    1504,   188,   189,     5,  1508,     5,  1510,  1511,     4,  1513,
    1514,  1515,     4,  1517,     5,    82,  1520,  1521,  1522,  1523,
    1524,  1525,  1526,  1527,  1528,  1529,  1530,   188,   189,  1533,
    1534,  1535,  1536,     5,     5,     5,     5,     5,     4,  1543,
    1544,  1225,  1226,     4,  1548,  1549,  1550,   442,     5,  1553,
    1554,  2480,     5,     4,   234,   221,     5,   223,     5,  2488,
     234,  1565,  1566,   105,  1568,  1569,     5,   136,     5,   234,
     257,   208,  2501,   105,   105,    40,    40,  2506,   238,   266,
     267,   208,     5,   150,     4,   208,     4,     5,     5,     5,
     208,     4,     4,     4,  1913,     5,   257,     5,     5,     5,
     110,     5,   110,     5,     5,   266,   267,   188,   189,  1928,
    1929,   298,     4,  1932,     5,  1619,  1620,    12,     5,  1938,
    1624,  1940,     4,    12,     5,  1629,  1630,     5,  1632,  1633,
    1634,     4,  1636,  1637,   300,  1639,    66,   298,  1642,  1643,
     535,    29,    60,     5,     5,     4,     6,  1651,    66,     4,
      80,     5,   219,   220,  1658,    73,    44,    75,    46,    89,
    1664,  1665,    80,     5,     5,    83,   233,  1986,  1672,    99,
       4,    89,   567,     4,  1678,     4,   257,     4,     4,     4,
      38,    99,     5,     0,     5,   266,   267,   105,    76,    38,
     234,   234,    61,   136,   234,   113,    84,    53,   120,   129,
     167,     4,     4,   204,   242,   272,   194,     4,  2027,     4,
    1714,   129,     4,     4,   264,    71,     5,   298,   148,     5,
       5,     5,     5,  1407,     5,     4,     4,   234,     5,  1413,
     148,     4,    88,     4,     4,   234,     5,  1741,  1742,     5,
       5,   234,  1746,   302,   100,     4,   164,   116,  1752,   302,
     119,  1435,   140,     4,  1438,   173,   174,     4,  1442,     4,
       4,   117,     4,   193,     4,   121,     4,   221,     5,   302,
       5,   221,   302,   221,     5,   193,   132,   221,     5,  1463,
     221,     5,     4,     0,     5,  1469,   155,     5,     4,     4,
       4,   264,     5,  1477,     5,     4,   214,  1481,     4,   229,
       5,     5,   190,     4,     4,  1489,  1490,     5,     5,   227,
       5,   229,     4,     6,     4,     4,  1500,   173,   206,   207,
       4,   190,  2751,   253,   242,   213,     5,   215,     5,   247,
       5,     5,    12,     5,     5,   253,     5,     5,     4,   264,
     264,     5,   260,     4,     6,     5,     5,     5,     4,     4,
     345,     5,   240,     4,     4,  1859,     5,  1861,     5,  1863,
     278,  1865,   292,     5,   294,     4,   345,     5,   237,     5,
       5,   240,     5,   291,   292,     4,   294,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,     4,   278,     5,
       5,  2657,     5,     5,   263,     4,     4,   266,     5,     5,
       5,     5,  1906,     4,  1908,     4,  1910,     5,   277,     5,
       5,  1915,     5,     4,     4,     4,   334,   305,    91,    33,
    2239,  2240,  2241,  1927,     5,  2244,    99,  2246,  2247,     4,
    1934,  2250,   105,  2252,     4,     4,   345,     5,     5,     5,
       5,  1945,  1946,  1947,  1948,  1949,  1950,  1951,  1952,  1953,
    1954,     5,   125,  1957,  1958,  1959,  1960,  1961,  1962,  1963,
    1964,  1965,  1966,  1967,  1968,     4,  1970,   862,  1972,  1973,
    1974,     4,     6,     5,     4,   148,     4,   345,     5,     5,
       4,     4,     4,   156,  1988,     4,   298,     5,     5,     4,
       4,  2649,     5,  2312,     5,     5,     5,     5,     5,     5,
       5,     5,   116,     4,   278,     5,     4,     4,   345,     5,
       5,     5,     4,     4,  2018,     5,     5,  2021,     5,  2023,
     193,  2025,     5,     4,  2028,     4,  2030,     5,   201,     5,
       5,     5,     4,  2037,  2038,     4,   345,     5,     4,     4,
    2044,     4,  2046,     4,     4,     4,  2050,     4,     4,  2053,
       4,     4,     4,     4,   430,     4,     4,   345,   345,     4,
       4,  2552,     5,     5,     4,  2723,     5,     4,     4,   242,
       5,     5,   186,     4,   188,   189,     5,   191,   192,     5,
     253,     5,     4,     4,     4,     4,     4,     4,     4,     4,
       4,    41,     4,     4,    44,   268,    46,     5,  2102,     5,
       5,     5,     4,  2271,     5,   219,     5,     5,     5,     4,
    2647,     5,     5,     4,     4,    65,     5,    67,    68,    69,
       4,     4,   236,   237,  1019,   290,     4,    77,     5,    79,
       5,     4,     4,     4,    84,     4,    86,    87,    88,     5,
       4,     4,   345,    93,     5,    95,     5,  2466,     4,     4,
       4,  2200,     5,     5,     5,  2474,     5,     5,     5,     4,
       4,   387,     5,     5,  2723,  2719,   727,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   288,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   347,    -1,    -1,    -1,  1081,    -1,    -1,   139,
      -1,  1875,   306,    -1,  2513,    -1,    -1,    -1,    -1,    -1,
     150,   151,  2206,    -1,   154,    -1,    -1,    -1,   158,    -1,
     160,    -1,    -1,    -1,    -1,  2219,  2220,  2221,  2222,  2223,
    2224,  2225,  2226,  2227,  2228,  2229,    -1,  1911,    -1,    -1,
      -1,  2235,   182,   183,    -1,    -1,   186,    -1,  2242,    -1,
      -1,  2245,    -1,  2732,  2733,   195,    -1,  2251,    -1,    -1,
    2254,  2255,  2256,  2257,  2258,  2259,  2260,  2261,  2262,  2263,
     210,   211,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,
      -1,    -1,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,
    2284,  2285,  2286,  2287,    -1,  2289,    -1,  2291,  2292,  2293,
     240,    -1,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2309,  1201,    -1,   422,  2313,
      -1,    -1,    -1,  2317,    -1,   265,    -1,  2321,    -1,   433,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,
      -1,   281,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     290,    -1,    -1,    -1,   509,    55,    -1,   297,    -1,    -1,
      -1,   516,    -1,   303,   519,   305,    66,    -1,    -1,   524,
      -1,    -1,  1257,   528,    -1,    -1,    -1,  2371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1272,    -1,    -1,
      -1,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,   341,    -1,    -1,    -1,   105,    -1,   511,    -1,    -1,
     514,   515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   527,    -1,   125,    -1,    -1,   532,   129,
      -1,    -1,    -1,    -1,   589,    -1,    -1,   541,   542,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,
    2444,    -1,    -1,    -1,  2448,    -1,   156,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2458,  2459,    -1,    -1,    -1,    -1,
      -1,  2465,    -1,    -1,    -1,    -1,    -1,    -1,  2472,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2480,    -1,  2482,    -1,
      -1,  2485,  2486,   193,  2488,    -1,    -1,    -1,    -1,    -1,
      -1,   201,   606,   607,   608,    -1,    -1,  2501,    -1,    -1,
    2504,  2505,  2506,  2507,  2508,  2509,  2510,  2511,    -1,    -1,
    2514,    -1,    -1,    -1,  2518,    -1,  1411,    -1,    -1,    -1,
      -1,    -1,   954,    -1,   689,  2529,    -1,    -1,    -1,    -1,
    2534,   696,   242,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   253,    -1,    -1,    -1,    -1,    -1,  2553,
      -1,   665,    -1,    -1,   986,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   278,    -1,
     280,    -1,    -1,     3,     4,  1470,    -1,    -1,  1473,    -1,
      -1,    -1,    -1,    -1,  2588,    -1,    -1,    -1,  1483,    19,
    2594,    -1,  2596,    -1,    -1,    -1,  1491,    -1,  2602,    -1,
      -1,    -1,    -1,  1498,    -1,    -1,    -1,    -1,    -1,    39,
      -1,  2615,  2616,  2297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   334,    -1,    56,    -1,    -1,  2633,
    2634,    -1,  2681,    -1,  2638,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2657,    -1,    -1,    -1,    -1,   823,    -1,
      -1,    -1,    -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,
      -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2686,    -1,    -1,    -1,    -1,    -1,  2692,    -1,
    2694,    -1,    -1,    -1,    -1,    -1,    -1,  2701,    -1,    -1,
      -1,    -1,  2706,    -1,    -1,    -1,    -1,  2711,    -1,    -1,
     824,   876,    -1,    -1,    -1,    -1,   881,    -1,    -1,   884,
      -1,    -1,   836,    -1,    -1,   155,    -1,    -1,  2732,  2733,
      -1,   896,    -1,    -1,  1629,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2751,    -1,    -1,
    2754,  2755,    -1,    -1,  2758,    -1,  2760,  2761,    -1,   873,
     874,    -1,   192,    -1,    -1,    -1,    -1,    -1,  2772,  2773,
    2774,  2775,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2785,   212,   897,  2788,    -1,    -1,   217,    -1,    -1,
      -1,  2795,    -1,  2797,    -1,    -1,    -1,   227,    -1,  1694,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1704,
      -1,    -1,    -1,    -1,  1709,  2819,  2500,  2821,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2049,    -1,   994,
     944,    -1,    -1,    -1,    -1,    -1,  2520,    -1,    -1,   966,
    2524,  2063,  2064,  2065,    -1,    -1,  2068,    -1,  2070,  2071,
      -1,    -1,  2074,  2075,  2076,    -1,   286,  2079,  2080,    -1,
      -1,  2083,    -1,  2085,  2086,    -1,  2088,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    -1,    -1,  1019,  1338,  1339,  1340,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1348,  1349,  1350,    -1,
      -1,    -1,    -1,  1355,  1356,  1357,    -1,    -1,  1360,  1361,
      -1,  1363,  1364,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1071,     3,     4,
      -1,  1393,  1394,    -1,    -1,  1397,  1398,  1081,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,  1874,
    2202,    -1,  1877,  2205,    -1,    -1,    -1,    -1,  2210,    -1,
      -1,    -1,  2214,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,  2234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1189,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,  1228,    -1,    -1,    -1,    -1,    -1,    -1,
    1184,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1243,    -1,
      -1,    -1,    -1,  2767,    -1,    -1,    -1,  1201,     3,     4,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2325,    19,    -1,    -1,    -1,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1234,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1245,    -1,  2355,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1272,  2054,
      -1,    -1,    -1,  1277,    -1,    -1,    -1,   212,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2099,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2439,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1354,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2460,  1366,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2470,    -1,
      -1,    -1,    -1,    -1,  2476,  2477,    -1,  1384,  1385,    -1,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1411,    -1,    -1,
      -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,    -1,  2204,
      -1,    -1,    -1,    -1,  1479,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1756,    -1,    -1,  1441,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1769,  2233,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1779,  2243,    -1,
      -1,    -1,    -1,    -1,  2249,    -1,  1470,    -1,    -1,  1473,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2589,    -1,  1483,
    1484,    -1,    -1,    -1,  1539,    -1,    -1,  1491,    -1,    -1,
    1545,    -1,    -1,    -1,  1498,    -1,    -1,  2609,    -1,    -1,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,    -1,  1851,
      -1,    -1,    -1,    -1,  1538,    -1,    -1,  1541,  1542,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1551,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1625,  2683,    -1,  2685,    -1,  2687,  1631,  2689,    -1,  2691,
      -1,  2693,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1655,    -1,    -1,    -1,    -1,    -1,    -1,  1662,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1622,    -1,
      -1,    -1,    -1,    -1,    -1,  1629,    -1,    -1,    -1,  2741,
      -1,    -1,    -1,  1688,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1696,    -1,  1647,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2438,    -1,    -1,    -1,    -1,    -1,  1663,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2789,  1682,    -1,
      -1,    -1,    -1,  1687,    -1,    -1,  1690,    -1,  1692,  1693,
    1694,  1695,    -1,    -1,  1698,    -1,    -1,  1701,    -1,    -1,
    1704,  1705,    -1,  1707,  1708,  1709,  1710,    -1,  1712,  1713,
      -1,    -1,    -1,    -1,  1718,  1719,  1720,    -1,  1722,  1723,
      -1,    -1,    -1,    -1,  1728,  1729,    -1,    -1,    -1,  1733,
      -1,    -1,    -1,    -1,  1738,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1775,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1783,  1784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1798,  1799,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2112,    -1,  1809,  1810,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1856,    -1,  1820,  1821,    -1,    -1,  2592,    -1,    -1,
      -1,    -1,    -1,  1830,  1831,  2600,    -1,    -1,    -1,  1836,
      -1,    -1,    -1,  1878,    -1,    -1,    -1,    -1,    -1,  1846,
    2152,  2153,  2154,  2155,  2156,    -1,  2158,  2159,    -1,    -1,
      -1,  2163,  2164,  2165,  2166,  2167,    -1,  2169,  2170,    -1,
      -1,    -1,    -1,    -1,  1858,    -1,    -1,  1912,  1862,  1914,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1874,    -1,    -1,  1877,    -1,    -1,  1931,    -1,  1933,    -1,
      -1,    -1,  1937,    -1,  1939,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1907,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1979,    -1,    -1,  1982,  1983,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1991,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2746,    -1,    -1,  1968,    -1,    -1,    -1,    -1,  2024,
      -1,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2040,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2779,    -1,    -1,  2782,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2061,    40,    -1,    -1,
      -1,  2066,    -1,    -1,    -1,    -1,    -1,  2072,    -1,    -1,
      -1,    -1,  2077,    56,    -1,    -1,  2081,    -1,    -1,  2084,
      -1,    -1,  2087,    -1,  2089,    -1,    -1,  2041,    -1,    -1,
    2095,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2374,    -1,    -1,  2377,  2378,  2379,  2380,  2381,
      -1,  2383,  2384,    -1,    -1,    -1,    -1,    -1,   101,    -1,
      -1,    -1,    -1,  2395,  2396,  2397,  2398,  2399,  2082,  2401,
    2402,    -1,  2404,    -1,    -1,   118,    -1,    -1,    -1,    -1,
      -1,    -1,  2414,  2415,    -1,    -1,  2113,    -1,    -1,    -1,
      -1,    -1,    -1,  2425,    -1,    -1,  2123,    -1,    -1,    -1,
    2127,  2128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2136,
    2137,    -1,   155,    -1,    -1,    -1,    -1,    -1,  2145,  2146,
      -1,    -1,    -1,    -1,  2151,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2161,  2162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2172,  2173,    -1,    -1,   192,
      -1,    -1,    -1,    -1,    -1,    -1,  2183,   200,    -1,    -1,
      -1,    -1,    -1,   206,   207,  2192,    -1,  2194,    -1,   212,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2204,    -1,    -1,  2207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2217,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2233,
      -1,    -1,  2236,  2288,    -1,    -1,    -1,    -1,    -1,  2243,
      -1,    -1,  2564,    -1,  2248,  2249,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2575,    -1,  2577,   289,    -1,    -1,  2581,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,     4,    -1,    -1,    -1,   338,    -1,    -1,    -1,   342,
     343,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2336,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2671,
      -1,    -1,  2674,    56,    -1,  2677,    -1,  2679,  2375,    -1,
      -1,  2365,    -1,    -1,    -1,    -1,    -1,    -1,  2385,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2394,    -1,    -1,
       4,  2436,    -1,    -1,    -1,    -1,  2403,    -1,  2443,    -1,
      -1,    -1,  2447,  2410,    -1,    19,    -1,    -1,   101,    -1,
      -1,    -1,    -1,    -1,  2421,    -1,    -1,    -1,    -1,  2464,
    2427,    -1,    -1,  2430,    -1,    -1,  2433,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2438,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2479,    -1,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2491,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   212,
      -1,    -1,    -1,    -1,   217,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,  2541,    -1,    -1,
      -1,    -1,    -1,    -1,  2561,    -1,  2550,    -1,  2565,    -1,
      -1,    -1,    -1,    -1,    -1,  2572,    -1,    -1,    -1,    -1,
      -1,  2578,    -1,    -1,    -1,  2582,  2621,    -1,  2585,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2592,  2593,
      -1,  2595,    -1,   217,    -1,    -1,  2600,  2601,    -1,    -1,
      -1,  2605,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
      -1,    -1,    -1,    -1,    -1,  2639,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2661,    -1,    -1,
    2715,    -1,  2666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2734,
    2735,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    -1,
      16,    -1,    -1,    20,    -1,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2780,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,  2746,    -1,    -1,    -1,  2801,    -1,    -1,  2804,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    64,    65,  2763,
      67,    68,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,  2779,    -1,    84,  2782,    86,
      87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,
      -1,    -1,   139,    -1,    -1,   142,    -1,    -1,    -1,    -1,
     147,   148,    -1,    -1,    -1,    -1,    -1,   154,    -1,    -1,
      -1,    -1,    -1,   160,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,
     177,   178,   179,    -1,    -1,   182,   183,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,   210,   211,   212,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   224,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,   235,    -1,
     236,   238,   238,   240,    -1,   242,    -1,    65,    66,   101,
     247,    69,   155,    -1,    -1,    -1,    -1,   160,    -1,    -1,
      -1,    -1,   114,   260,    -1,    -1,    -1,    -1,   265,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   281,   282,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,   295,    -1,
      -1,    -1,    -1,   155,   301,    -1,    -1,   304,   305,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   155,   335,    -1,
      -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
     168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   217,    -1,   185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
      -1,    -1,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,    -1,    -1,
      -1,    -1,    -1,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    -1,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,   334,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    52,
      -1,    -1,    55,    -1,    -1,    -1,    48,    49,    -1,    62,
      52,    19,    -1,    66,    -1,    -1,    -1,    59,    -1,    -1,
      62,    74,    75,    -1,    66,    -1,    -1,    -1,    -1,    82,
      83,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    19,    -1,    -1,    -1,    99,    -1,    56,    -1,
      -1,    -1,   105,    -1,    -1,   108,   109,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,   108,   109,    -1,    -1,
     112,    19,    -1,    -1,    -1,    -1,   129,    -1,    -1,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,    -1,
      -1,    -1,    -1,   101,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   171,    -1,
      -1,    -1,    -1,    -1,   101,    -1,    -1,    -1,    19,   171,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   180,    -1,
     193,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   221,    -1,
     223,    -1,    -1,    -1,    -1,   228,   229,    -1,   155,   221,
      -1,   223,    -1,    -1,    -1,    -1,   228,   229,    -1,   242,
     243,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   252,
     253,   243,    -1,    -1,   212,    -1,    -1,   155,    -1,   217,
     101,   253,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    -1,   280,    -1,    -1,
      -1,    59,    -1,    -1,    -1,   212,   278,    -1,   280,   292,
     217,   294,    -1,    -1,    -1,    -1,    -1,   300,   290,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   300,    -1,
      -1,    -1,    -1,    -1,   155,   273,    -1,    -1,    -1,   217,
      -1,    -1,    -1,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   334,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   334,    -1,    -1,    -1,    -1,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,   217,   155,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,    -1,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   160,    -1,    -1,    -1,   217,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   282,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    20,    41,    44,    46,    59,    64,    65,    67,    68,
      69,    77,    84,    86,    87,    95,    96,   124,   135,   139,
     142,   147,   148,   154,   160,   174,   177,   178,   179,   182,
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
     206,   207,   213,   215,   240,   305,   349,   142,   410,    41,
      44,    46,    65,    67,    68,    69,    77,    79,    84,    86,
      87,    88,    93,    95,   123,   139,   150,   151,   154,   158,
     160,   182,   183,   186,   195,   210,   211,   218,   240,   242,
     265,   281,   282,   290,   297,   303,   305,   341,   411,    83,
      99,   453,    19,    44,    77,    84,    94,    95,   101,   123,
     139,   154,   161,   182,   217,   265,   276,   305,   456,   350,
      88,   115,   184,   198,   254,   295,   305,   462,    16,    26,
     111,   123,   157,   203,   216,   465,   226,   483,     5,    66,
      88,   137,   295,   341,   350,   484,     5,   485,    20,    57,
     222,   235,   296,   501,    64,    66,   181,   285,   520,    66,
     201,   337,   342,   344,   521,    39,   192,   227,   286,   348,
     358,   360,   522,     5,   295,   305,   350,   525,    70,   168,
     239,   248,   526,    88,   501,    61,   276,   299,   533,   192,
     286,   348,   534,    26,   111,   123,   203,   216,   536,    50,
      99,   134,   288,   551,   552,     4,    37,    47,    74,   148,
     185,   227,   248,   283,   299,   374,     4,   123,   202,   553,
     286,   348,   555,    16,    23,   236,   238,   359,   556,   226,
     560,   286,   348,   561,     0,    22,    48,    49,    62,   108,
     109,   221,   223,   300,   380,     5,    59,   348,   382,   262,
       5,     4,   286,   348,   383,     5,    32,   275,   384,   122,
     348,   385,   122,   348,   387,   348,     4,   191,   244,   391,
     186,   296,   339,   340,   348,   390,   350,   136,   175,   389,
     348,    78,   171,   244,   348,   392,     5,   348,     4,   240,
     394,   348,   348,     5,   223,   397,    31,   398,     5,   399,
       5,   403,     5,    31,   404,   348,     9,    10,    11,   348,
     354,   355,   356,   357,   348,   348,    40,   110,   192,   348,
     406,   348,   192,   358,   360,   348,    35,   106,   126,   127,
     128,   133,   146,   152,   162,   274,   363,   348,     4,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     116,    66,    53,    71,    88,   100,   117,   121,   132,   173,
     412,   117,   414,   186,   191,   227,   251,   296,   339,   340,
     348,   400,   415,   278,   418,   168,   419,   168,   176,   421,
      65,    66,    69,    91,   168,   185,   204,   265,   334,   358,
     423,   348,   360,   426,    59,   282,   358,   427,   273,   358,
     360,   428,    33,   429,   358,   360,   430,     4,   358,   360,
     431,    45,    59,    81,   100,   116,   119,   144,   145,   197,
     205,   262,   263,   334,   435,   209,   298,   441,     5,    89,
       6,    88,   119,   433,     5,    65,   360,   432,    16,   501,
      66,   181,   285,   442,    66,   227,   443,   277,    61,   276,
     299,   444,   132,   163,   234,   445,    37,    47,    74,   148,
     185,   248,   299,   446,   360,    89,    16,   194,   451,   358,
     454,    72,   457,    31,   458,    44,    87,   190,   459,   148,
     214,   253,   291,   460,   358,    18,    58,   114,   282,   358,
     461,     4,   191,   464,     5,     4,     6,   119,   348,     4,
       5,   240,   466,     5,   468,     5,   116,   190,   240,   263,
     469,    93,   110,   186,   482,     5,   480,     5,   263,   481,
       4,     5,   350,   350,   348,   348,     5,     4,     5,    60,
      66,    73,    75,    80,    83,    89,    99,   105,   113,   129,
     148,   164,   173,   174,   193,   214,   227,   229,   242,   247,
     253,   260,   278,   291,   292,   294,   334,   486,     5,     4,
     348,     5,   348,    40,   110,   348,   524,   350,   348,   358,
     360,   523,   348,   363,   348,     4,   359,    54,    90,   138,
     240,   527,     4,     4,   348,   148,   253,   528,     5,   358,
       4,    40,   110,   348,   535,   348,    97,    61,   119,   240,
     266,   537,   119,   550,    61,   116,   119,   155,   190,   237,
     240,   263,   266,   277,   539,   540,    61,   119,   266,   549,
       5,     4,    34,   107,   201,   532,    66,   350,   375,    66,
     350,   376,    66,   350,   377,    13,   187,   531,   348,   348,
      40,   110,   192,   221,   348,   378,   348,   263,     4,   348,
     348,     4,   559,     4,   280,   557,     4,   280,   558,     4,
     363,   122,   348,   562,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,   348,     4,     5,   348,    12,   348,
     348,   348,    30,    94,   161,   244,   249,   362,   362,     4,
     348,   348,     4,     4,     4,   348,   348,   348,   348,     4,
       4,     5,     5,   358,     5,   348,   348,   354,   356,   356,
     358,   348,   348,   348,   348,   348,   348,   348,   358,   360,
     357,   348,   348,   357,   348,     5,   262,   103,   186,   413,
     191,   244,   416,   168,    78,   171,   244,   417,   136,   175,
     401,   401,     4,   420,     4,   422,   191,   251,   424,   176,
     425,   168,   363,   348,   358,   348,   358,   358,   363,   363,
     363,   358,   363,   348,   358,     4,   438,     4,   360,   436,
     194,     4,   165,   305,   437,   194,   358,     4,   358,   440,
       5,     5,     4,   194,   348,     4,     5,    60,    66,   113,
     129,   141,   147,   148,   153,   204,   223,   227,   229,   252,
     253,   260,   278,   334,   495,   360,    66,   447,    66,   448,
      66,   449,   221,   450,   348,     5,   222,   452,   359,   363,
       5,   358,   358,   358,     4,   350,     4,     4,   194,   348,
      14,    15,    61,   188,   189,   257,   266,   267,   298,    87,
       5,     5,    14,    15,    61,   188,   189,   257,   266,   267,
     271,   298,    87,   155,   160,   359,   472,   476,    87,   155,
       5,   470,     4,     4,    14,    61,   188,   257,   266,   298,
       5,     5,     4,   348,   359,    20,    21,    22,    48,    49,
      52,    55,    62,    66,    74,    75,    82,    83,    99,   105,
     108,   109,   112,   129,   148,   171,   193,   221,   223,   228,
     229,   242,   243,   252,   253,   278,   280,   292,   294,   300,
     334,    66,    80,    89,    99,   129,   148,   193,   229,   253,
     292,   294,     4,    30,   159,   209,   234,   489,     5,    63,
     104,   231,   245,   246,   336,   337,   494,    99,   487,    17,
      40,   110,   192,   493,     4,     5,    17,   208,   287,   348,
     253,   494,   502,   123,   494,   503,    36,    40,   110,   130,
     192,   286,   348,   504,   358,   350,    91,    99,   105,   125,
     148,   156,   193,   201,   242,   253,   268,   507,    40,   110,
     192,     5,   279,    17,   208,   287,   511,   280,   350,   512,
       5,    99,   105,   295,    17,    17,     4,   348,   348,   348,
     348,   348,   363,   348,   348,   357,   348,     4,   363,    40,
     110,   192,   258,   529,    40,   110,   192,   258,   530,     4,
      97,     5,     5,    87,     4,     5,     5,    87,     5,   540,
      61,   119,   155,   266,   544,    61,   119,   266,   548,    87,
     155,    61,   119,   266,   542,     4,    61,   119,   266,   541,
       5,     5,     4,     4,     5,     5,     5,   348,   348,   348,
     348,   348,   348,     4,   348,   554,   348,   348,     6,   359,
       4,     5,     4,     4,     5,     4,    97,   255,   364,   348,
     348,    12,   348,   348,   348,   348,   348,   348,   348,   348,
     348,     5,    12,   348,   348,    12,     4,    12,     4,     4,
     348,   348,   348,     4,   350,     4,     4,   363,   358,   363,
     348,   348,   348,   358,   348,   357,   348,   348,     5,     5,
     348,   360,   348,   358,   358,   348,   363,   364,   364,   364,
     363,   357,   348,   363,   348,   131,   241,   351,   439,   165,
       5,     4,   363,   358,     4,     5,     4,     4,   348,   434,
     348,    20,    21,    22,    48,    49,    52,    59,    62,    66,
      74,    75,    82,   108,   109,   112,   129,   148,   171,   180,
     221,   223,   228,   229,   243,   253,   278,   280,   290,   300,
     334,    66,   129,   153,   229,   278,    30,   159,   209,   234,
     496,   348,    20,   204,   348,   497,    17,   348,   252,   507,
     252,   204,   348,   498,   280,   499,    17,    98,   348,   348,
       5,   364,    56,   358,     4,     5,   463,   348,     5,     5,
       5,   155,   183,   368,   368,   164,   259,   366,     4,     4,
       5,     5,   467,   264,   264,     5,     5,     5,    17,   157,
     367,   367,   366,     4,     4,   366,     5,     5,   471,   160,
     333,   359,   475,     5,   474,     5,     5,   478,     5,   479,
       5,    14,    15,    61,   188,   189,   257,   266,   267,   271,
     298,     4,     4,     5,     5,   368,   366,     4,     5,     5,
     363,    82,   150,   219,   220,   233,   272,   371,     7,     8,
     348,   353,   234,   120,   234,   234,   105,    40,    66,    99,
     105,   110,   129,   148,   164,   193,   229,   242,   253,   280,
     292,   294,   295,   334,   488,   120,   234,     5,    27,   166,
     234,   276,   136,   105,    22,    49,    52,    82,   109,   112,
     223,   252,    22,    49,    52,    55,    82,   109,   112,   223,
     252,   278,    40,   120,   234,   234,   105,     5,   208,    27,
     221,    36,   130,   286,   348,   256,   262,   120,   238,   358,
     360,   507,    40,   221,   276,   238,   208,     5,     5,   242,
      27,   221,     4,     5,     5,   208,    36,   130,   286,   348,
     507,   208,   350,     4,     4,   348,     5,   298,    22,    27,
      48,    49,    51,    52,    62,    74,    75,    82,    85,   102,
     108,   109,   112,   171,   223,   228,   243,   252,   279,   280,
     300,   344,   490,   348,   348,   348,   348,   348,   494,   358,
       5,     4,     5,   348,   348,   358,   360,   348,   350,   348,
     348,   494,     5,   348,   348,   350,     5,    17,     5,     5,
     348,   348,   357,   348,   348,   348,   348,   110,   348,   348,
     110,     4,    42,    43,   169,   170,   196,   373,   373,    61,
     119,   266,   538,   373,     5,    61,   119,   266,   543,     5,
       5,    61,   119,   266,   545,     4,     5,     5,     4,    61,
     119,   266,   547,    61,   119,   266,   546,     5,     5,     4,
       5,     5,     4,   373,   373,   373,   348,   348,   348,   348,
     348,     4,   348,   358,   348,   359,   363,     5,     5,    12,
     348,   358,   360,   348,    12,   348,   348,   348,    59,   348,
       6,     4,   348,   348,    46,   265,   402,     5,   350,   350,
     363,   348,     4,     4,     4,   358,   348,   348,   348,   348,
     363,     4,   358,   364,   357,   348,     4,   364,   348,    38,
      38,     4,   360,     5,    24,    25,    97,   365,   348,     4,
     348,     5,    82,   150,   219,   220,   233,   272,   358,   360,
     234,   120,   234,   234,    21,   234,   358,   120,   234,    27,
     166,   234,   276,   136,    21,   234,   120,   234,   234,    21,
     234,    27,   167,   221,   167,   256,   262,   120,   167,   221,
     284,   507,   167,   221,   276,     4,   242,    27,   167,   221,
     507,   204,   348,    82,   150,   219,   220,   233,   272,   348,
     348,   348,   348,   348,   194,   348,   348,    20,   230,   455,
       4,     4,   348,   368,   368,   368,     4,   368,   368,   368,
      14,    15,    61,   188,   189,   257,   266,   267,   298,   367,
     368,   368,   368,   368,   368,     4,   368,   368,     4,   367,
      14,    15,    61,   188,   189,   257,   266,   267,   298,     5,
     473,     5,   477,     5,     5,    14,    15,    61,   188,   189,
     257,   266,   267,   271,   298,     5,    14,    15,    61,   188,
     189,   257,   266,   267,   271,   298,     5,    14,    15,    61,
     188,   189,   257,   266,   267,   271,   298,    14,    15,    61,
     188,   189,   257,   266,   267,   298,   264,     5,     5,     5,
     367,   367,   366,     4,     4,   366,     5,     4,     4,   368,
     368,     4,   368,   368,     5,   350,   358,   360,     5,   348,
     350,   348,     5,   348,     5,   353,   105,   193,   242,   105,
     193,   242,     5,   350,   348,   350,     5,   348,   358,   350,
       5,   353,   234,   234,    21,   234,    21,   234,   234,    21,
     234,   302,   302,     4,     4,     4,   488,     4,     4,     4,
     302,   302,     4,     5,     4,   350,   348,     5,   348,     5,
     353,   350,   358,   360,   358,   360,   348,    27,    48,    51,
      62,    85,   102,   344,   369,     4,   350,   348,   363,   357,
     350,   358,   360,   358,   348,   350,   350,   358,   360,   358,
     360,   348,   350,   348,     5,   348,   221,   221,   348,   348,
     221,   348,   221,   348,   348,   500,   508,   348,   221,   221,
     348,   348,   348,   348,   348,   348,   348,   348,     5,   298,
     348,   491,   348,   348,   221,   348,   348,   348,   348,   358,
     363,     5,   358,   358,   348,   348,   363,   357,   348,   348,
     348,   358,   348,   348,     5,   348,   348,   348,   348,     5,
       5,     4,   373,     5,     5,     4,     4,     4,     5,     5,
       4,     4,     5,     5,     4,     5,     5,     4,   348,   348,
     358,   348,   363,   348,   358,   360,   348,   363,   348,   348,
     348,   348,   348,     5,   348,     4,     6,   348,   348,     4,
     358,   348,   363,   176,   361,   348,   361,   364,   363,   358,
     348,   348,     4,   348,   348,     4,   358,     5,     5,     5,
       5,   358,   363,   358,   358,   358,   358,   360,   358,   363,
     358,   358,   358,   360,   358,   358,   358,   358,   360,   358,
     358,   358,   348,   358,   358,   358,   358,   358,   358,   358,
     358,     5,     5,     5,     5,   358,   348,   348,     4,   348,
       5,     4,   348,   368,     5,     5,     5,   366,     4,     4,
       5,   368,   367,     4,   368,     5,     5,     5,   367,   367,
     366,     4,     4,     5,    14,    15,    61,   188,   189,   257,
     266,   267,   298,    14,    15,    61,   188,   189,   257,   266,
     267,   298,    14,    15,    61,   188,   189,   257,   266,   267,
     298,   264,     5,     5,     5,   367,   367,   366,     4,     4,
     366,     5,   264,     5,     5,     5,   367,   367,   366,     4,
       4,   366,     5,   264,     5,     5,     5,   367,   367,   366,
       4,     4,   366,     5,     5,     5,     5,   367,   367,   366,
       4,     4,     5,   367,     4,     4,   367,     4,     4,   368,
       5,   363,   358,   348,   348,   358,   348,     5,   353,     5,
     358,   360,   350,     5,   358,   360,   363,     5,   353,   348,
     348,   348,   348,   348,   348,   348,   348,   348,     4,     4,
       5,     4,     4,   348,   358,   348,     5,   353,   350,   363,
     357,   363,   348,   348,   357,   357,   363,   357,   363,   348,
     363,   357,   363,   357,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   348,    55,    66,    92,   129,   278,   280,
     334,   505,   506,   507,   518,   519,   348,   348,   348,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   358,     5,
     348,   348,   348,   348,     4,     4,   363,   364,     4,   492,
     363,   363,   357,   348,     4,   363,   373,   373,   373,   348,
     348,   348,   363,   348,   357,   348,   348,    12,     5,     5,
       4,   348,   348,     4,   363,   358,   348,   348,   364,   365,
     348,     5,   348,   360,     5,     5,     5,     5,   363,   365,
     365,   365,   363,   365,   364,   365,   365,   363,   365,   365,
     365,   363,   365,   365,   363,   358,   365,   363,   365,   365,
     363,   365,   363,     5,     5,     5,     5,   363,     4,   360,
       5,   348,     4,   368,   367,     4,   367,     5,     5,     5,
     367,   367,   366,     4,     4,     5,     5,     5,     5,   367,
     367,   366,     4,     4,     5,     5,     5,     5,   367,   367,
     366,     4,     4,     5,   367,   368,   368,   368,   368,   368,
       4,   368,   368,     4,   367,   367,   368,   368,   368,   368,
     368,     4,   368,   368,     4,   367,   367,     4,     4,   367,
       4,   367,   367,     4,     4,     4,   359,   365,     4,   358,
     360,   365,   348,   358,     4,   365,   365,   358,     4,   348,
     348,   348,   348,   348,   348,   348,   348,   348,   348,   348,
     358,   360,   365,   348,   358,     4,   357,   357,   357,   348,
     358,   360,   357,   348,   357,   357,   358,   358,   360,   357,
     348,   357,   348,   348,   348,   348,   348,   348,   353,   348,
     348,   348,   345,   345,   345,   345,   345,   345,   345,   506,
     345,   353,   348,   348,   348,   348,   353,   348,   348,   348,
     348,   348,   348,   363,   348,   298,   352,   353,   348,   348,
     364,   350,     4,     4,   364,   348,   357,   348,    59,   348,
       5,     5,   348,     4,   361,   365,     5,     4,     4,     5,
     358,     5,   364,   365,   364,   364,   364,     4,     5,   358,
       5,     5,     4,   348,   368,   367,   368,   368,   368,   368,
     368,     4,   368,   368,   367,     4,   367,   368,   368,   368,
     368,   368,     4,   368,   368,   367,   368,   367,     4,   368,
     368,   367,     4,   368,   367,     4,   367,   367,   363,   358,
     360,   365,     4,   363,   348,   363,   348,   348,   348,   365,
       4,   363,   348,   357,   365,   348,   357,   365,   365,   358,
     353,   348,     4,   370,   370,   348,   348,   370,   353,   370,
     508,   358,   488,     5,     4,     5,     5,     5,     4,   350,
     353,   370,   370,   348,   348,   353,   348,   348,   348,   348,
     348,   357,   348,     5,   508,   348,   370,   350,   509,   510,
       5,   350,     5,   348,     5,     4,     6,   348,    32,   275,
     409,     5,    32,   275,   372,   358,     5,   372,   358,   409,
     348,   367,   368,   367,   367,   368,   368,   367,   368,   367,
     367,   348,   365,   358,   360,   358,   348,   358,   348,   358,
     360,   358,   348,   358,   365,     4,   508,   508,   352,   348,
     508,     4,   508,   363,     5,     4,     4,   508,   508,   352,
     348,     4,   508,   508,   348,   358,   508,   508,   508,   509,
     515,   516,   507,   513,   514,     5,     5,     6,     4,   186,
     296,   340,   348,   400,   358,   358,     4,   368,   368,   368,
     368,   359,   365,   365,   348,   365,     4,   365,   365,   348,
     365,   348,   508,   508,     4,   348,   508,     5,   348,   508,
       4,   348,   508,   363,   515,   517,   518,   345,   514,     5,
       5,     4,   348,   401,   348,   401,   363,   363,   365,     4,
     358,   360,     4,   353,   352,   348,   348,   352,   348,   358,
     518,   350,     5,     5,   348,   348,   348,   348,   372,   372,
       5,   358,   360,   363,   358,   360,   508,   348,     4,   508,
     348,   365,     5,     5,   348,     5,   348,   363,   363,     4,
     508,     4,   508,     5,     5,   352,   352,   508,   508
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
#line 451 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 7:
#line 453 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 454 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 456 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 463 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 22:
#line 468 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 23:
#line 469 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 471 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 32:
#line 478 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 36:
#line 482 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 38:
#line 484 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 43:
#line 489 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 45:
#line 491 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 47:
#line 493 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 49:
#line 495 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 54:
#line 502 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 503 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 56:
#line 506 "frame/parser.Y"
    {yydebug=1;;}
    break;

  case 57:
#line 507 "frame/parser.Y"
    {yydebug=0;;}
    break;

  case 58:
#line 508 "frame/parser.Y"
    {DebugAST=(yyvsp[(2) - (2)].integer);;}
    break;

  case 59:
#line 509 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 60:
#line 510 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 61:
#line 511 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 62:
#line 512 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 63:
#line 513 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 64:
#line 514 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 515 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 516 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 517 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 518 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 521 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 70:
#line 523 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 71:
#line 524 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 72:
#line 525 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 73:
#line 526 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 74:
#line 528 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 75:
#line 529 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 76:
#line 530 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 77:
#line 531 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 78:
#line 534 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 79:
#line 535 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 80:
#line 536 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 81:
#line 537 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 82:
#line 538 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 83:
#line 541 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 84:
#line 542 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 85:
#line 545 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 86:
#line 546 "frame/parser.Y"
    {(yyval.real) = degToRad((yyvsp[(1) - (1)].real));;}
    break;

  case 87:
#line 547 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 88:
#line 550 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 553 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 90:
#line 556 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 91:
#line 560 "frame/parser.Y"
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
#line 572 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 93:
#line 579 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 94:
#line 586 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 95:
#line 593 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 96:
#line 594 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 97:
#line 595 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 98:
#line 596 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 99:
#line 597 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 100:
#line 600 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 101:
#line 601 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 102:
#line 602 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 103:
#line 603 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 104:
#line 604 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 105:
#line 605 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 106:
#line 606 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 107:
#line 607 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 108:
#line 608 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 109:
#line 609 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 110:
#line 610 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 111:
#line 611 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 112:
#line 612 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 113:
#line 613 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 114:
#line 614 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 115:
#line 615 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 116:
#line 616 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 117:
#line 617 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 118:
#line 618 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 119:
#line 619 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 120:
#line 620 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 121:
#line 621 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 122:
#line 622 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 123:
#line 623 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 124:
#line 624 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 125:
#line 625 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 126:
#line 626 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 127:
#line 627 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 128:
#line 630 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 129:
#line 631 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 130:
#line 634 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 131:
#line 635 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 132:
#line 636 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 133:
#line 637 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 134:
#line 638 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 135:
#line 639 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 136:
#line 640 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 137:
#line 641 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 138:
#line 644 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 139:
#line 645 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 140:
#line 646 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 141:
#line 647 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 142:
#line 648 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 143:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 144:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 145:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4_NO_E;;}
    break;

  case 146:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 147:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 148:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 149:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 150:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 151:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::SUPERGALACTIC;;}
    break;

  case 152:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 153:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::HELIOECLIPTIC;;}
    break;

  case 154:
#line 664 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 155:
#line 665 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 156:
#line 666 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 157:
#line 669 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 158:
#line 670 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 159:
#line 671 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 160:
#line 672 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 161:
#line 675 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 162:
#line 676 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 163:
#line 677 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 164:
#line 680 "frame/parser.Y"
    {;}
    break;

  case 165:
#line 681 "frame/parser.Y"
    {;}
    break;

  case 166:
#line 682 "frame/parser.Y"
    {;}
    break;

  case 167:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 168:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 169:
#line 687 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 170:
#line 690 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 171:
#line 691 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 172:
#line 692 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 173:
#line 693 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 174:
#line 694 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 175:
#line 695 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 176:
#line 696 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 177:
#line 697 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 178:
#line 700 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 179:
#line 701 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 180:
#line 704 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 181:
#line 705 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 182:
#line 706 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 183:
#line 707 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 184:
#line 708 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 185:
#line 709 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 186:
#line 712 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 187:
#line 713 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 188:
#line 714 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 189:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 190:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 191:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 192:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 193:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 194:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 199:
#line 729 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 200:
#line 730 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 201:
#line 731 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 202:
#line 732 "frame/parser.Y"
    {fr->set3dPreserveCmd();;}
    break;

  case 203:
#line 734 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 204:
#line 737 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 205:
#line 738 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 206:
#line 741 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 207:
#line 742 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 208:
#line 745 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 209:
#line 746 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 210:
#line 749 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 211:
#line 751 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 212:
#line 752 "frame/parser.Y"
    {fr->view3dBeginCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 213:
#line 753 "frame/parser.Y"
    {fr->view3dMotionCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 214:
#line 754 "frame/parser.Y"
    {fr->view3dEndCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 215:
#line 757 "frame/parser.Y"
    {fr->analysisMarkersResetCmd();;}
    break;

  case 217:
#line 762 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("circle", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 218:
#line 764 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipse", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 219:
#line 766 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("box", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 220:
#line 768 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("polygon", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 221:
#line 770 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("point", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 222:
#line 772 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("vector", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 223:
#line 774 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("annulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 224:
#line 776 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("ellipseannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 225:
#line 778 "frame/parser.Y"
    {fr->analysisMarkersSelectCmd("boxannulus", fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::CANVAS));;}
    break;

  case 227:
#line 782 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 228:
#line 783 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 231:
#line 786 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 233:
#line 788 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 234:
#line 791 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 235:
#line 792 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 236:
#line 795 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 237:
#line 796 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 238:
#line 798 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 239:
#line 800 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 240:
#line 801 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 241:
#line 802 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 242:
#line 804 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 243:
#line 806 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 244:
#line 809 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 245:
#line 810 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 246:
#line 813 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 247:
#line 815 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 248:
#line 818 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 249:
#line 820 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 250:
#line 823 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), 
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 251:
#line 827 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 252:
#line 828 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 254:
#line 832 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 255:
#line 833 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 834 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 840 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 262:
#line 843 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 263:
#line 848 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 264:
#line 849 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 265:
#line 852 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 266:
#line 853 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 267:
#line 854 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 268:
#line 855 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 269:
#line 856 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 270:
#line 859 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 271:
#line 860 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 272:
#line 861 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 273:
#line 864 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 274:
#line 866 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 275:
#line 871 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 276:
#line 876 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 277:
#line 883 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 278:
#line 885 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 279:
#line 886 "frame/parser.Y"
    {fr->colormapBeginCmd();;}
    break;

  case 281:
#line 888 "frame/parser.Y"
    {fr->colormapEndCmd();;}
    break;

  case 282:
#line 892 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(1) - (6)].integer), (yyvsp[(2) - (6)].real), (yyvsp[(3) - (6)].real), (yyvsp[(4) - (6)].integer), (unsigned char*)(yyvsp[(5) - (6)].ptr), (yyvsp[(6) - (6)].integer));;}
    break;

  case 283:
#line 894 "frame/parser.Y"
    {fr->colormapMotionCmd((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].integer),(unsigned char*)(yyvsp[(9) - (10)].ptr),(yyvsp[(10) - (10)].integer));;}
    break;

  case 284:
#line 896 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 285:
#line 897 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 291:
#line 908 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 292:
#line 910 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 293:
#line 912 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 294:
#line 917 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 295:
#line 921 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 296:
#line 924 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 297:
#line 925 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 298:
#line 928 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 299:
#line 929 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 300:
#line 931 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 301:
#line 937 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 302:
#line 938 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 303:
#line 939 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 304:
#line 940 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 305:
#line 943 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 306:
#line 944 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 307:
#line 947 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 308:
#line 948 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 309:
#line 951 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 310:
#line 952 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 311:
#line 956 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 312:
#line 958 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 313:
#line 961 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 314:
#line 963 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 315:
#line 966 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 317:
#line 968 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 318:
#line 969 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 319:
#line 970 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 320:
#line 973 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 321:
#line 974 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (3)].real), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 322:
#line 975 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 323:
#line 976 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 324:
#line 977 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 325:
#line 981 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 326:
#line 983 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 327:
#line 984 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 328:
#line 985 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 329:
#line 988 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 330:
#line 990 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 331:
#line 992 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 332:
#line 994 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 333:
#line 997 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 334:
#line 1000 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 335:
#line 1001 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 336:
#line 1002 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 337:
#line 1005 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 338:
#line 1008 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 352:
#line 1022 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 355:
#line 1025 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1027 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 359:
#line 1030 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 360:
#line 1031 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 363:
#line 1034 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 364:
#line 1035 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 366:
#line 1038 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 368:
#line 1040 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 370:
#line 1042 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 372:
#line 1044 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 373:
#line 1046 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 374:
#line 1048 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(3) - (9)].str),(yyvsp[(4) - (9)].str),Vector((yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real)),(Coord::InternalSystem)(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(Base::CutMethod)(yyvsp[(9) - (9)].integer));;}
    break;

  case 376:
#line 1050 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 377:
#line 1053 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 378:
#line 1054 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 379:
#line 1055 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 380:
#line 1056 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 381:
#line 1057 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 382:
#line 1058 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 384:
#line 1060 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 385:
#line 1063 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 386:
#line 1064 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 387:
#line 1065 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 388:
#line 1068 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 389:
#line 1071 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 390:
#line 1073 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 391:
#line 1075 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 392:
#line 1076 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 393:
#line 1077 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 395:
#line 1079 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 397:
#line 1082 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 398:
#line 1088 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 399:
#line 1089 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 400:
#line 1092 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 401:
#line 1093 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 402:
#line 1094 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 403:
#line 1097 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 404:
#line 1098 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 406:
#line 1104 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 407:
#line 1106 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 408:
#line 1108 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 409:
#line 1111 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 411:
#line 1113 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 412:
#line 1117 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 413:
#line 1121 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 415:
#line 1123 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 416:
#line 1124 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 417:
#line 1125 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 418:
#line 1126 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 419:
#line 1127 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 421:
#line 1129 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 422:
#line 1130 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 423:
#line 1133 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 424:
#line 1134 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 425:
#line 1135 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 426:
#line 1138 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 427:
#line 1139 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 428:
#line 1143 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 429:
#line 1145 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 430:
#line 1151 "frame/parser.Y"
    {fr->getCoord3axisCmd((yyvsp[(1) - (4)].real), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 431:
#line 1155 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 432:
#line 1157 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 433:
#line 1158 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 434:
#line 1161 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 435:
#line 1163 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 436:
#line 1164 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 437:
#line 1167 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 438:
#line 1170 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 439:
#line 1172 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 440:
#line 1176 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 441:
#line 1178 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 442:
#line 1181 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 443:
#line 1185 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 444:
#line 1186 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 445:
#line 1188 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)), (Coord::InternalSystem)(yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 446:
#line 1191 "frame/parser.Y"
    {fr->iisGetCmd((char*)(yyvsp[(1) - (5)].ptr),(yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 447:
#line 1192 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 449:
#line 1196 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 450:
#line 1197 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 451:
#line 1198 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 452:
#line 1201 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 453:
#line 1203 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 454:
#line 1204 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 456:
#line 1206 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 460:
#line 1210 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 461:
#line 1211 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 462:
#line 1212 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 463:
#line 1214 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyDist)(yyvsp[(4) - (4)].integer));;}
    break;

  case 465:
#line 1216 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 466:
#line 1219 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 467:
#line 1221 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 468:
#line 1223 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 469:
#line 1224 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 470:
#line 1225 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 471:
#line 1226 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 472:
#line 1229 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 473:
#line 1230 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1234 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 475:
#line 1236 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 476:
#line 1239 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 477:
#line 1242 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 478:
#line 1243 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 479:
#line 1244 "frame/parser.Y"
    {fr->getFitsSliceCmd(2, (Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1245 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (2)].integer), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 481:
#line 1248 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 482:
#line 1249 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 483:
#line 1250 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 484:
#line 1253 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 485:
#line 1254 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 486:
#line 1255 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 487:
#line 1258 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 488:
#line 1261 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 489:
#line 1262 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 490:
#line 1263 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 491:
#line 1266 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 492:
#line 1267 "frame/parser.Y"
    {fr->getSmoothKernelCmd();;}
    break;

  case 493:
#line 1268 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 498:
#line 1275 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 499:
#line 1276 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 500:
#line 1277 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 501:
#line 1280 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 502:
#line 1281 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 503:
#line 1284 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 504:
#line 1285 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 505:
#line 1288 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 506:
#line 1289 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 507:
#line 1292 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 508:
#line 1293 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 509:
#line 1296 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 511:
#line 1298 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 512:
#line 1301 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 513:
#line 1302 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 515:
#line 1306 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 516:
#line 1310 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), 
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 517:
#line 1313 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer), 
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 518:
#line 1320 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 519:
#line 1321 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 520:
#line 1324 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 523:
#line 1327 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 524:
#line 1328 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 525:
#line 1329 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 526:
#line 1330 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 528:
#line 1332 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 529:
#line 1333 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 530:
#line 1334 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 532:
#line 1336 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 533:
#line 1337 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 534:
#line 1338 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1342 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 537:
#line 1345 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 538:
#line 1346 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 539:
#line 1349 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 540:
#line 1350 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 541:
#line 1351 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 542:
#line 1352 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 543:
#line 1355 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 544:
#line 1356 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 545:
#line 1357 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 546:
#line 1358 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 547:
#line 1361 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 548:
#line 1362 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 549:
#line 1363 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 550:
#line 1364 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 551:
#line 1365 "frame/parser.Y"
    {fr->hasWCSxCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 552:
#line 1368 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 553:
#line 1369 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 554:
#line 1370 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 557:
#line 1374 "frame/parser.Y"
    {fr->iisSetCmd((const char*)(yyvsp[(2) - (6)].ptr),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 558:
#line 1375 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 559:
#line 1378 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 560:
#line 1381 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 561:
#line 1382 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 562:
#line 1386 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 563:
#line 1388 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 564:
#line 1389 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 571:
#line 1401 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 572:
#line 1403 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 573:
#line 1405 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 574:
#line 1406 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 575:
#line 1408 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 576:
#line 1410 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 577:
#line 1412 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 578:
#line 1414 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 579:
#line 1416 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 581:
#line 1420 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 582:
#line 1421 "frame/parser.Y"
    {fr->loadArrayRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 583:
#line 1422 "frame/parser.Y"
    {fr->loadArrayRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 584:
#line 1423 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 585:
#line 1424 "frame/parser.Y"
    {fr->loadArrayRGBCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 586:
#line 1426 "frame/parser.Y"
    {fr->loadArrayRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 587:
#line 1427 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 588:
#line 1428 "frame/parser.Y"
    {fr->loadArrayRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 589:
#line 1429 "frame/parser.Y"
    {fr->loadArrayRGBCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 590:
#line 1432 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 591:
#line 1436 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 592:
#line 1438 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 593:
#line 1440 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 594:
#line 1442 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 595:
#line 1444 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 596:
#line 1446 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 597:
#line 1448 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 598:
#line 1450 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), 
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 599:
#line 1453 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 600:
#line 1455 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 601:
#line 1457 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 607:
#line 1465 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 608:
#line 1466 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 609:
#line 1467 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 610:
#line 1468 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 611:
#line 1469 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 612:
#line 1470 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 613:
#line 1472 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 614:
#line 1474 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 615:
#line 1475 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 616:
#line 1476 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 617:
#line 1477 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 618:
#line 1480 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 619:
#line 1481 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 620:
#line 1482 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 621:
#line 1483 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 622:
#line 1484 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 623:
#line 1486 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 624:
#line 1487 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 625:
#line 1488 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 626:
#line 1489 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 632:
#line 1500 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS, 
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 633:
#line 1503 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 634:
#line 1506 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 635:
#line 1509 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 636:
#line 1512 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 637:
#line 1515 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 638:
#line 1518 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 639:
#line 1521 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 640:
#line 1524 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 641:
#line 1529 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 642:
#line 1532 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 643:
#line 1535 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1538 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1541 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 646:
#line 1544 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 647:
#line 1547 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 648:
#line 1550 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 649:
#line 1553 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1556 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1559 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 652:
#line 1564 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 653:
#line 1567 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 654:
#line 1570 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1573 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 656:
#line 1576 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 657:
#line 1579 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 658:
#line 1582 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 659:
#line 1585 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC, 
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 660:
#line 1588 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 661:
#line 1593 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 662:
#line 1596 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 663:
#line 1599 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 664:
#line 1602 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 665:
#line 1605 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 666:
#line 1608 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 667:
#line 1611 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 668:
#line 1614 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer), 
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 669:
#line 1617 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1620 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 671:
#line 1623 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1628 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 673:
#line 1629 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 674:
#line 1630 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 675:
#line 1631 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 676:
#line 1632 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 677:
#line 1634 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 678:
#line 1635 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 679:
#line 1636 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 680:
#line 1637 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 681:
#line 1639 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 682:
#line 1640 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 683:
#line 1641 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 684:
#line 1642 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 685:
#line 1643 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 686:
#line 1644 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1646 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 688:
#line 1648 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 689:
#line 1649 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 690:
#line 1650 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1651 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 692:
#line 1654 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1655 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1656 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1657 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 696:
#line 1658 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1660 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 698:
#line 1661 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1662 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1663 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 701:
#line 1667 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 702:
#line 1669 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 703:
#line 1670 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 704:
#line 1672 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 705:
#line 1674 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 706:
#line 1676 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 707:
#line 1679 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 708:
#line 1680 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 709:
#line 1683 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 710:
#line 1684 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 711:
#line 1685 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 712:
#line 1688 "frame/parser.Y"
    {
#ifdef MAC_OSX_TK
	  fr->macosxPrintCmd();
#endif
	;}
    break;

  case 713:
#line 1695 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 714:
#line 1696 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 715:
#line 1697 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 716:
#line 1698 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 717:
#line 1699 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 718:
#line 1700 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 719:
#line 1701 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 720:
#line 1705 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::SkyDist)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 722:
#line 1713 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 723:
#line 1714 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 724:
#line 1716 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 725:
#line 1718 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 726:
#line 1719 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 727:
#line 1720 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 729:
#line 1721 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 730:
#line 1722 "frame/parser.Y"
    {fr->markerDeleteCmd();;}
    break;

  case 731:
#line 1723 "frame/parser.Y"
    {fr->markerDeleteAllCmd();;}
    break;

  case 733:
#line 1725 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 734:
#line 1726 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 735:
#line 1728 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 736:
#line 1730 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 737:
#line 1732 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 738:
#line 1735 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 739:
#line 1737 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 740:
#line 1738 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 741:
#line 1740 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 742:
#line 1743 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (7)].integer), (yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real), (yyvsp[(6) - (7)].integer), (Coord::InternalSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 743:
#line 1745 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::SkyDist)(yyvsp[(8) - (8)].integer));;}
    break;

  case 744:
#line 1748 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1750 "frame/parser.Y"
    {fr->markerBoxFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1752 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real), (yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 747:
#line 1756 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 748:
#line 1759 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 749:
#line 1762 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 750:
#line 1764 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)), 
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 751:
#line 1767 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 752:
#line 1771 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 753:
#line 1775 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 754:
#line 1780 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 755:
#line 1784 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 756:
#line 1785 "frame/parser.Y"
    {fr->markerCircleFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 757:
#line 1787 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].real), (Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1789 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1790 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 760:
#line 1792 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 761:
#line 1794 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 762:
#line 1796 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].real),(Coord::InternalSystem)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1798 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 764:
#line 1800 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 765:
#line 1801 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 766:
#line 1803 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 767:
#line 1805 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 768:
#line 1808 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 769:
#line 1812 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 770:
#line 1816 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 771:
#line 1818 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 772:
#line 1820 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 773:
#line 1822 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 776:
#line 1828 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 777:
#line 1830 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 779:
#line 1834 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 780:
#line 1836 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 781:
#line 1838 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 782:
#line 1840 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 783:
#line 1842 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1843 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1847 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 788:
#line 1849 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 789:
#line 1851 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 790:
#line 1853 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 791:
#line 1854 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 792:
#line 1855 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 793:
#line 1856 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 794:
#line 1858 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 795:
#line 1859 "frame/parser.Y"
    {fr->markerEllipseFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 796:
#line 1861 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real), (yyvsp[(5) - (6)].real)), (Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 797:
#line 1863 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), 
	    Vector((yyvsp[(6) - (8)].real),(yyvsp[(6) - (8)].real)*(yyvsp[(5) - (8)].real)/(yyvsp[(4) - (8)].real)), (yyvsp[(7) - (8)].integer), (Coord::InternalSystem)(yyvsp[(8) - (8)].integer));;}
    break;

  case 799:
#line 1871 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 800:
#line 1874 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 801:
#line 1877 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 802:
#line 1881 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 803:
#line 1885 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 804:
#line 1890 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), 
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 805:
#line 1894 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 806:
#line 1895 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 807:
#line 1896 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 808:
#line 1898 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 809:
#line 1900 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 810:
#line 1902 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)), 
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 811:
#line 1906 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 812:
#line 1907 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 813:
#line 1908 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 814:
#line 1910 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)), (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 815:
#line 1912 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 816:
#line 1915 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 817:
#line 1917 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 818:
#line 1920 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),(Coord::InternalSystem)(yyvsp[(6) - (6)].integer));;}
    break;

  case 819:
#line 1922 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 820:
#line 1925 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 821:
#line 1926 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1928 "frame/parser.Y"
    {fr->markerPolygonFillCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 823:
#line 1930 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(4) - (6)].vector)), Vector((yyvsp[(5) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(3) - (6)].integer), (yyvsp[(6) - (6)].real));;}
    break;

  case 824:
#line 1934 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::SkyDist)(yyvsp[(9) - (9)].integer));;}
    break;

  case 825:
#line 1938 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 826:
#line 1940 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 827:
#line 1942 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (6)].integer), Vector((yyvsp[(5) - (6)].vector)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::InternalSystem)(yyvsp[(4) - (6)].integer));;}
    break;

  case 828:
#line 1945 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 829:
#line 1948 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::SkyDist)(yyvsp[(7) - (7)].integer));;}
    break;

  case 830:
#line 1951 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 831:
#line 1952 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 832:
#line 1954 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 833:
#line 1955 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 834:
#line 1956 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 835:
#line 1958 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 836:
#line 1959 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 837:
#line 1961 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 838:
#line 1963 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(5) - (7)].vector)), (Coord::InternalSystem)(yyvsp[(4) - (7)].integer), (yyvsp[(6) - (7)].real), (yyvsp[(7) - (7)].real));;}
    break;

  case 839:
#line 1966 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::SkyDist)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 840:
#line 1969 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 841:
#line 1971 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 842:
#line 1972 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 846:
#line 1977 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer));;}
    break;

  case 853:
#line 1988 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 856:
#line 1993 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 857:
#line 1994 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 858:
#line 1995 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 859:
#line 1996 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 860:
#line 1997 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 861:
#line 1998 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 862:
#line 1999 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 863:
#line 2000 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 864:
#line 2001 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 865:
#line 2002 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 866:
#line 2004 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (5)].str),Vector((yyvsp[(5) - (5)].vector)),(Coord::InternalSystem)(yyvsp[(4) - (5)].integer));;}
    break;

  case 867:
#line 2006 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 868:
#line 2008 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2009 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 870:
#line 2010 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 871:
#line 2011 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 872:
#line 2012 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 873:
#line 2014 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 874:
#line 2015 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 875:
#line 2016 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 876:
#line 2017 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 877:
#line 2018 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 878:
#line 2020 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 879:
#line 2021 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 880:
#line 2022 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 881:
#line 2023 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 882:
#line 2024 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 883:
#line 2025 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 884:
#line 2028 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 885:
#line 2029 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 886:
#line 2030 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 887:
#line 2031 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 888:
#line 2032 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 889:
#line 2033 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 890:
#line 2034 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 891:
#line 2035 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 892:
#line 2036 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 893:
#line 2037 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 894:
#line 2038 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 895:
#line 2039 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 896:
#line 2040 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 897:
#line 2041 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 898:
#line 2042 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 899:
#line 2043 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 900:
#line 2044 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 901:
#line 2045 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 902:
#line 2046 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 903:
#line 2047 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 904:
#line 2048 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 905:
#line 2051 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 906:
#line 2052 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 907:
#line 2053 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 908:
#line 2054 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 909:
#line 2055 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 910:
#line 2057 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 911:
#line 2067 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 912:
#line 2075 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 913:
#line 2084 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 914:
#line 2092 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 915:
#line 2099 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 916:
#line 2106 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 917:
#line 2114 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 918:
#line 2122 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 919:
#line 2127 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 920:
#line 2132 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 921:
#line 2137 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 922:
#line 2142 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 923:
#line 2147 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 924:
#line 2152 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 925:
#line 2157 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 926:
#line 2166 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real)),Coord::CANVAS),
	    (Coord::CoordSystem)(yyvsp[(6) - (10)].integer), (Coord::SkyFrame)(yyvsp[(7) - (10)].integer), (Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyDist)(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 927:
#line 2175 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS), 
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 928:
#line 2185 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 929:
#line 2194 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 930:
#line 2202 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)), 
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont, 
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 931:
#line 2212 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 932:
#line 2222 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 933:
#line 2232 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 934:
#line 2244 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 935:
#line 2253 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 937:
#line 2261 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 938:
#line 2263 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 939:
#line 2265 "frame/parser.Y"
    { 
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 940:
#line 2270 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 941:
#line 2273 "frame/parser.Y"
    {(yyval.dash)[0] = (yyvsp[(1) - (2)].integer); (yyval.dash)[1] = (yyvsp[(2) - (2)].integer);;}
    break;

  case 942:
#line 2277 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 943:
#line 2279 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 944:
#line 2280 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 945:
#line 2283 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 946:
#line 2284 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 947:
#line 2285 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 948:
#line 2286 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 949:
#line 2287 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 950:
#line 2288 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 951:
#line 2289 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 953:
#line 2293 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 954:
#line 2294 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 955:
#line 2295 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 956:
#line 2296 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 957:
#line 2297 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 958:
#line 2300 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 959:
#line 2302 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 960:
#line 2304 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 961:
#line 2306 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 962:
#line 2308 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 963:
#line 2310 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 964:
#line 2313 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 965:
#line 2315 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 966:
#line 2317 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 967:
#line 2319 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer),(Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 968:
#line 2321 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 969:
#line 2323 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 970:
#line 2325 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 971:
#line 2326 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 972:
#line 2327 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 973:
#line 2329 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 974:
#line 2331 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 975:
#line 2333 "frame/parser.Y"
    {fr->getMarkerBoxFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 976:
#line 2335 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 977:
#line 2337 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 978:
#line 2338 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 979:
#line 2339 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 980:
#line 2341 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 981:
#line 2343 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 982:
#line 2346 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 983:
#line 2348 "frame/parser.Y"
    {fr->getMarkerCircleFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 984:
#line 2350 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 985:
#line 2351 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 986:
#line 2352 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 987:
#line 2353 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 988:
#line 2355 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 989:
#line 2356 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 990:
#line 2357 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 991:
#line 2358 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 992:
#line 2359 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 993:
#line 2361 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 994:
#line 2363 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 995:
#line 2364 "frame/parser.Y"
    {fr->getMarkerEllipseFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 996:
#line 2366 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 997:
#line 2368 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 998:
#line 2370 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 999:
#line 2371 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1000:
#line 2373 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1001:
#line 2375 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1002:
#line 2376 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1003:
#line 2377 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1004:
#line 2378 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1005:
#line 2380 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1006:
#line 2382 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1007:
#line 2385 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyDist)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1008:
#line 2388 "frame/parser.Y"
    {fr->getMarkerPolygonFillCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1009:
#line 2389 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1010:
#line 2390 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1011:
#line 2392 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1012:
#line 2395 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), 
	    (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1013:
#line 2398 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1014:
#line 2399 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1015:
#line 2400 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1016:
#line 2402 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1017:
#line 2404 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1018:
#line 2406 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1019:
#line 2407 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1020:
#line 2409 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1021:
#line 2410 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1022:
#line 2411 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1023:
#line 2412 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1024:
#line 2413 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1025:
#line 2415 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1026:
#line 2417 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyDist)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2419 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1028:
#line 2421 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1030:
#line 2423 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1031:
#line 2424 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1032:
#line 2426 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1033:
#line 2428 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1034:
#line 2429 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1035:
#line 2430 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1037:
#line 2432 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1039:
#line 2436 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1040:
#line 2437 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1041:
#line 2438 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1042:
#line 2439 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1043:
#line 2440 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1044:
#line 2441 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1045:
#line 2443 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1046:
#line 2444 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1047:
#line 2446 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1048:
#line 2449 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1049:
#line 2450 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1050:
#line 2451 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1051:
#line 2452 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1052:
#line 2455 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1053:
#line 2456 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1054:
#line 2459 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1055:
#line 2460 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1056:
#line 2463 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1057:
#line 2464 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1058:
#line 2467 "frame/parser.Y"
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

  case 1059:
#line 2480 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1060:
#line 2481 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1061:
#line 2485 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1062:
#line 2486 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1063:
#line 2490 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1064:
#line 2491 "frame/parser.Y"
    {fr->markerLayerCmd(Base::ANALYSIS);;}
    break;

  case 1065:
#line 2496 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer),
	    0, propQMask, propQValue, taglist);;}
    break;

  case 1066:
#line 2501 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer), 
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer),
	    1, propQMask, propQValue, taglist);;}
    break;

  case 1067:
#line 2507 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1068:
#line 2509 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].str),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1069:
#line 2512 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1070:
#line 2514 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1071:
#line 2517 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].dash), (yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].str));;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1075:
#line 2523 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1076:
#line 2524 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1077:
#line 2525 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1078:
#line 2527 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::InternalSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1079:
#line 2529 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1082:
#line 2536 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1083:
#line 2537 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1084:
#line 2538 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1085:
#line 2539 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1087:
#line 2541 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1090:
#line 2546 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1093:
#line 2549 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1094:
#line 2550 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1095:
#line 2551 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1096:
#line 2552 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1097:
#line 2553 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1098:
#line 2554 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1099:
#line 2555 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1100:
#line 2556 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1103:
#line 2563 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1104:
#line 2564 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1106:
#line 2567 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1107:
#line 2568 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1108:
#line 2569 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1109:
#line 2570 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1110:
#line 2573 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1111:
#line 2574 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1114:
#line 2582 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1115:
#line 2585 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1116:
#line 2586 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1120:
#line 2593 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1121:
#line 2596 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1122:
#line 2600 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1123:
#line 2601 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1124:
#line 2602 "frame/parser.Y"
    {fr->maskMarkCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1125:
#line 2603 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1126:
#line 2606 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1127:
#line 2607 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1128:
#line 2608 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1129:
#line 2609 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1130:
#line 2613 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1131:
#line 2614 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1132:
#line 2616 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1133:
#line 2621 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1135:
#line 2623 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1137:
#line 2625 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1138:
#line 2628 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1139:
#line 2630 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1140:
#line 2635 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1141:
#line 2638 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1142:
#line 2639 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1143:
#line 2640 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1144:
#line 2643 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1145:
#line 2645 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1146:
#line 2649 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1147:
#line 2650 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1148:
#line 2654 "frame/parser.Y"
    {fr->psColorSpaceCmd((Widget::PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1149:
#line 2655 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1150:
#line 2656 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1151:
#line 2657 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  ;}
    break;

  case 1152:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Widget::BW;;}
    break;

  case 1153:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Widget::GRAY;;}
    break;

  case 1154:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Widget::RGB;;}
    break;

  case 1155:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Widget::CMYK;;}
    break;

  case 1158:
#line 2673 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1159:
#line 2675 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1160:
#line 2676 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1161:
#line 2677 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1162:
#line 2681 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2682 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1164:
#line 2683 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1165:
#line 2684 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1166:
#line 2687 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1167:
#line 2688 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1168:
#line 2691 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1169:
#line 2692 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1170:
#line 2693 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1171:
#line 2696 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1172:
#line 2697 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1173:
#line 2698 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1174:
#line 2701 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1175:
#line 2702 "frame/parser.Y"
    {fr->rotateCmd(degToRad((yyvsp[(1) - (2)].real)));;}
    break;

  case 1177:
#line 2704 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (2)].real)));;}
    break;

  case 1178:
#line 2705 "frame/parser.Y"
    {fr->rotateToCmd(degToRad((yyvsp[(2) - (3)].real)));;}
    break;

  case 1179:
#line 2708 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1180:
#line 2709 "frame/parser.Y"
    {fr->rotateMotionCmd(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 1181:
#line 2710 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1186:
#line 2717 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1187:
#line 2721 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1188:
#line 2723 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1189:
#line 2725 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2730 "frame/parser.Y"
    {fr->saveArrayRGBCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1192:
#line 2732 "frame/parser.Y"
    {fr->saveArrayRGBCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1193:
#line 2734 "frame/parser.Y"
    {fr->saveArrayRGBCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1203:
#line 2747 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1204:
#line 2748 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1205:
#line 2749 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1206:
#line 2752 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2753 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2754 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1209:
#line 2757 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1210:
#line 2758 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2759 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2762 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1213:
#line 2763 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1214:
#line 2764 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2768 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1217:
#line 2769 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1218:
#line 2770 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1219:
#line 2773 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1220:
#line 2774 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1221:
#line 2775 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1222:
#line 2778 "frame/parser.Y"
    {fr->saveFitsRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1223:
#line 2779 "frame/parser.Y"
    {fr->saveFitsRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1224:
#line 2780 "frame/parser.Y"
    {fr->saveFitsRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {fr->saveFitsRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1226:
#line 2784 "frame/parser.Y"
    {fr->saveFitsRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1227:
#line 2785 "frame/parser.Y"
    {fr->saveFitsRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1228:
#line 2788 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1229:
#line 2789 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1230:
#line 2790 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1231:
#line 2794 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1232:
#line 2796 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1233:
#line 2798 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1234:
#line 2802 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1235:
#line 2806 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1236:
#line 2807 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1238:
#line 2811 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1239:
#line 2812 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1240:
#line 2815 "frame/parser.Y"
    {fr->updateFitsCmd(0);;}
    break;

  case 1241:
#line 2817 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)),0);;}
    break;

  case 1242:
#line 2818 "frame/parser.Y"
    {fr->updateFitsCmd(1);;}
    break;

  case 1243:
#line 2820 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)),1);;}
    break;

  case 1245:
#line 2824 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (1)].integer));;}
    break;

  case 1246:
#line 2825 "frame/parser.Y"
    {fr->sliceCmd(2, (yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1247:
#line 2826 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));;}
    break;

  case 1248:
#line 2827 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].real), (Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1249:
#line 2830 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1250:
#line 2831 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1251:
#line 2835 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1253:
#line 2837 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1256:
#line 2842 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1257:
#line 2843 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1258:
#line 2844 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1259:
#line 2847 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2848 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1261:
#line 2849 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1262:
#line 2852 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1263:
#line 2854 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1264:
#line 2859 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (4)].integer), (FitsImage*)(yyvsp[(2) - (4)].ptr), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1265:
#line 2862 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1266:
#line 2869 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1268:
#line 2873 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1269:
#line 2878 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1271:
#line 2882 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1272:
#line 2883 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1273:
#line 2884 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1274:
#line 2886 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1275:
#line 2888 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11012 "frame/parser.C"
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


#line 2897 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

